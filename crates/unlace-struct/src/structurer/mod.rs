//! Control-flow structuring: SSA CFG → HIR tree.
//!
//! Walks the dominator tree in pre-order and pattern-matches each region:
//! - **If/else**: dominator with ConditionalTrue/False edges that merge at
//!   the immediate post-dominator.
//! - **While**: natural loop detected via back-edge where the header
//!   dominates the latch and the header has an exit test (CBRANCH).
//! - **DoWhile**: natural loop where the exit test is at the latch, not
//!   the header.
//! - **Fallback**: any unstructured edge becomes a Goto/Label pair.
//!
//! Diagnostics: enable `unlace::struct=debug` for structuring decisions and
//! `unlace::struct=trace` for per-edge and HIR-count detail.

use std::cell::RefCell;
use std::collections::{BTreeMap, BTreeSet};
use std::time::Instant;

use unlace_ir::cfg::EdgeKind;
use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{ArchId, BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::eager_returns::eager_returns;
use crate::hir::{HirCallArg, HirFunction, HirNode, LabelId, SwitchCase};
use crate::options::StructureOptions;
use crate::reaching_conditions::Cond;
use crate::switch_recovery::{IndirectBranchKind, classify_indirect_branch};
use crate::{
    condition_refinement, goto_resolve, irreducible, reaching_conditions, region_bridge,
    region_splice,
};

#[macro_use]
mod trace;
mod dominator;

use trace::*;

/// Errors that can occur during control-flow structuring.
#[derive(Debug, thiserror::Error)]
pub enum StructureError {
    #[error("entry block {0} not found in function")]
    MissingEntry(BlockId),
    #[error("structuring complexity limit exceeded: {kind} count {count} > limit {limit}")]
    ComplexityLimit {
        kind: &'static str,
        count: usize,
        limit: usize,
    },
    #[error("structuring timeout exceeded for function '{function}'")]
    Timeout { function: String },
}

fn should_emit_full_unstructured_fallback(
    blocks: usize,
    insns: usize,
    block_limit: usize,
    insn_limit: usize,
) -> bool {
    (block_limit == 0 || blocks <= block_limit) && (insn_limit == 0 || insns <= insn_limit)
}

fn hir_contains_label_or_goto(nodes: &[HirNode]) -> bool {
    nodes.iter().any(|node| match node {
        HirNode::Label(_) | HirNode::Goto(_) => true,
        HirNode::Block(children) => hir_contains_label_or_goto(children),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            hir_contains_label_or_goto(then_body)
                || else_body.as_deref().is_some_and(hir_contains_label_or_goto)
        }
        HirNode::IfCmp {
            then_body,
            else_body,
            ..
        } => {
            hir_contains_label_or_goto(then_body)
                || else_body.as_deref().is_some_and(hir_contains_label_or_goto)
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
            hir_contains_label_or_goto(body)
        }
        HirNode::Switch { cases, default, .. } => {
            cases
                .iter()
                .any(|(_, body, _)| hir_contains_label_or_goto(body))
                || default.as_deref().is_some_and(hir_contains_label_or_goto)
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            hir_contains_label_or_goto(try_body)
                || catch_arms
                    .iter()
                    .any(|(_, body)| hir_contains_label_or_goto(body))
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => hir_contains_label_or_goto(try_body) || hir_contains_label_or_goto(finally_body),
        HirNode::Commented { inner, .. } => {
            hir_contains_label_or_goto(std::slice::from_ref(inner.as_ref()))
        }
        _ => false,
    })
}

fn concrete_terminator_edge(
    func: &SsaFunction,
    bid: BlockId,
    edges: &[(BlockId, EdgeKind)],
) -> Option<(EdgeKind, BlockId)> {
    let block = func.function.blocks.get(&bid)?;
    let term = block.insns.last()?;
    let target = term
        .inputs
        .first()
        .and_then(|input| resolve_concrete_branch_target(func, input))?;

    match term.op {
        IrOp::Cbranch => Some((EdgeKind::ConditionalTrue, target)),
        IrOp::Branch => {
            if edges
                .iter()
                .any(|(_, kind)| *kind == EdgeKind::Unconditional)
            {
                Some((EdgeKind::Unconditional, target))
            } else {
                Some((EdgeKind::Fallthrough, target))
            }
        }
        _ => None,
    }
}

fn normalize_edge_target(
    edges: &mut Vec<(BlockId, EdgeKind)>,
    bid: BlockId,
    kind: EdgeKind,
    target: BlockId,
) {
    if let Some((old_target, _)) = edges.iter_mut().find(|(_, edge_kind)| *edge_kind == kind) {
        if *old_target != target {
            struct_trace!(
                "normalize-edge block={bid:?} kind={kind:?} cfg_target={old_target:?} ir_target={target:?}"
            );
        }
        *old_target = target;
        return;
    }

    struct_trace!(
        "normalize-edge block={bid:?} kind={kind:?} cfg_target=None ir_target={target:?}"
    );
    edges.push((target, kind));
}

fn resolve_concrete_branch_target(func: &SsaFunction, vn: &Varnode) -> Option<BlockId> {
    if vn.space != SpaceId::Const {
        return None;
    }

    let target_addr = vn.offset;
    for (&bid, block) in &func.function.blocks {
        if block
            .insns
            .first()
            .is_some_and(|insn| insn.addr == target_addr)
        {
            return Some(bid);
        }
    }

    None
}

/// Result of scanning the predecessor of a `BRANCHIND` for a bounds-check
/// pattern (`cmp index, K; jae default`). Lets the structurer recover the
/// number of in-range cases and the out-of-bounds default target.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub struct BoundsCheck {
    pub case_count: u64,
    pub default_target: Option<BlockId>,
}

/// Recover structured control flow from an [`SsaFunction`].
///
/// This is the main entry point. The algorithm:
/// 1. Detect natural loops (back-edges where the target dominates the source).
/// 2. Walk the dominator tree in pre-order, pattern-matching if/else and
///    loop constructs at each node.
/// 3. Any CFG edge that doesn't fit a structured pattern becomes a goto/label.
pub fn structure(func: &SsaFunction) -> Result<HirFunction, StructureError> {
    structure_with_arch(func, ArchId::X86_64)
}

/// Like [`structure`] but aborts when `deadline` is exceeded.
pub fn structure_until(
    func: &SsaFunction,
    deadline: Instant,
) -> Result<HirFunction, StructureError> {
    structure_with_arch_until(func, ArchId::X86_64, deadline)
}

/// Like [`structure`] but classifies any indirect branches that did not
/// structure as a `Switch` using the per-architecture detectors in
/// [`crate::switch_recovery::classify_indirect_branch`].
///
/// The classification results are stored on
/// [`HirFunction::indirect_branch_kinds`] keyed by the BRANCHIND
/// instruction's machine address. Recognised kinds drive future per-arch
/// jump-table reconstruction; today they are purely informational.
pub fn structure_with_arch(
    func: &SsaFunction,
    arch: ArchId,
) -> Result<HirFunction, StructureError> {
    structure_with_arch_inner(func, arch, None, StructureOptions::default())
}

/// [`structure_with_arch`] with a hard deadline.
pub fn structure_with_arch_until(
    func: &SsaFunction,
    arch: ArchId,
    deadline: Instant,
) -> Result<HirFunction, StructureError> {
    structure_with_arch_inner(func, arch, Some(deadline), StructureOptions::default())
}

/// Structure `func` under explicit complexity budgets, wrapping regions at
/// `landing_pad_addrs` in `TryCatch` nodes and aborting past `deadline`.
pub fn structure_with_options(
    func: &SsaFunction,
    arch: ArchId,
    landing_pad_addrs: &BTreeSet<u64>,
    deadline: Option<Instant>,
    options: &StructureOptions,
) -> Result<HirFunction, StructureError> {
    let mut hir = structure_with_arch_inner(func, arch, deadline, *options)?;
    wrap_landing_pads(&mut hir, func, landing_pad_addrs);
    Ok(hir)
}

/// Conservative unstructured fallback for functions whose structured recovery
/// is intentionally skipped by a complexity guard.
pub fn structure_unstructured_fallback(
    func: &SsaFunction,
    reason: impl Into<String>,
) -> HirFunction {
    structure_unstructured_fallback_with_arch(func, ArchId::X86_64, reason)
}

/// [`structure_unstructured_fallback`] with explicit arch classification.
pub fn structure_unstructured_fallback_with_arch(
    func: &SsaFunction,
    arch: ArchId,
    reason: impl Into<String>,
) -> HirFunction {
    structure_unstructured_fallback_with_options(func, arch, reason, &StructureOptions::default())
}

/// [`structure_unstructured_fallback_with_arch`] under explicit fallback
/// size budgets.
pub fn structure_unstructured_fallback_with_options(
    func: &SsaFunction,
    arch: ArchId,
    reason: impl Into<String>,
    options: &StructureOptions,
) -> HirFunction {
    let mut ctx = StructureCtx::new_with_deadline(func, None, *options);
    let body = {
        let _span = linkscope::phase("struct.unstructured-fallback");
        ctx.unstructured_fallback_body(reason.into())
    };
    hir_function_from_body(func, arch, body)
}

fn structure_with_arch_inner(
    func: &SsaFunction,
    arch: ArchId,
    deadline: Option<Instant>,
    options: StructureOptions,
) -> Result<HirFunction, StructureError> {
    let entry = func.function.entry;

    if !func.function.blocks.contains_key(&entry) && !func.function.blocks.is_empty() {
        return Err(StructureError::MissingEntry(entry));
    }

    let phi_count: usize = func.phi_map.values().map(Vec::len).sum();
    let phi_limit = options.max_phis;
    if phi_limit > 0 && phi_count > phi_limit {
        return Err(StructureError::ComplexityLimit {
            kind: "phi nodes",
            count: phi_count,
            limit: phi_limit,
        });
    }

    let mut ctx = {
        let _span = linkscope::phase("struct.ctx-new");
        StructureCtx::new_with_deadline(func, deadline, options)
    };
    let mut body = {
        let _span = linkscope::phase("struct.structure-region");
        let mut body = ctx.structure_region(entry);
        ctx.emit_pending_goto_targets(&mut body);
        body
    };
    if ctx.deadline_exceeded() {
        return Err(StructureError::Timeout {
            function: func.function.name.clone(),
        });
    }
    if goto_resolve::count_gotos(&body) > 0 {
        let _span = linkscope::phase("struct.dominator-structure");
        let mut dom_ctx = StructureCtx::new_with_deadline(func, deadline, options);
        if let Some(mut dom_body) = dom_ctx.structure_by_dominators() {
            dom_ctx.emit_pending_goto_targets(&mut dom_body);
            let mut region_body = body.clone();
            goto_resolve::resolve_body(&mut region_body);
            let dom_gotos = goto_resolve::count_gotos(&dom_body);
            let region_gotos = goto_resolve::count_gotos(&region_body);
            struct_debug!(
                "dominator-structure func={} region_gotos={region_gotos} dominator_gotos={dom_gotos}",
                func.function.name
            );
            if dom_gotos < region_gotos {
                body = dom_body;
            }
        }
    }
    trace_hir_top("raw", &body);
    {
        let _span = linkscope::phase("struct.strip-unused-labels");
        strip_unused_labels(&mut body);
    }
    trace_hir_top("strip-labels", &body);
    {
        let _span = linkscope::phase("struct.recover-for-loops");
        recover_for_loops(&mut body);
    }
    trace_hir_top("recover-for", &body);
    // t189: AArch64 CMP+Bcc → HirNode::IfCmp fold. Runs after region
    // structuring so the pass sees the `Block([pre_stmts…, If {…}])` shapes
    // that `try_structure_if_else` emits. Mirrors `fold_csel_ternary` (t180)
    // but for branches.
    {
        let _span = linkscope::phase("struct.fold-aarch64-bcc-if");
        fold_aarch64_bcc_if(&mut body);
    }
    trace_hir_top("fold-bcc", &body);

    Ok(hir_function_from_body(func, arch, body))
}

fn hir_function_from_body(func: &SsaFunction, arch: ArchId, body: Vec<HirNode>) -> HirFunction {
    let indirect_branch_kinds = {
        let _span = linkscope::phase("struct.classify-indirect-branches");
        classify_unstructured_indirect_branches(func, arch)
    };

    HirFunction {
        name: func.function.name.clone(),
        params: func.inferred_params.clone(),
        return_type: func.inferred_return_type,
        body,
        addr: func.function.addr,
        foldable_exprs: func.foldable_exprs.clone(),
        panic_sites: func
            .panic_sites
            .iter()
            .filter_map(|(&(bid, idx), kind)| {
                let block = func.function.blocks.get(&bid)?;
                let insn = block.insns.get(idx)?;
                Some((insn.addr, kind.clone()))
            })
            .collect(),
        go_defer_sites: func.go_defer_sites.clone(),
        rust_async: func.rust_async.clone(),
        noreturn: func.noreturn,
        composite_var_types: func.composite_var_types.clone(),
        is_ctor: false,
        is_dtor: false,
        class_name: None,
        merged_names: func.merged_names.clone(),
        objc_dispatch_calls: func
            .objc_dispatch_calls
            .iter()
            .filter_map(|(&(bid, idx), ann)| {
                let block = func.function.blocks.get(&bid)?;
                let insn = block.insns.get(idx)?;
                Some((insn.addr, ann.clone()))
            })
            .collect(),
        go_defer_recover_calls: func
            .go_defer_recover_calls
            .iter()
            .filter_map(|(&(bid, idx), ann)| {
                let block = func.function.blocks.get(&bid)?;
                let insn = block.insns.get(idx)?;
                Some((insn.addr, ann.clone()))
            })
            .collect(),
        indirect_branch_kinds,
        byref_boxes: func.byref_boxes.clone(),
        byref_params: func
            .byref_info
            .as_ref()
            .map(|i| i.byref_params.clone())
            .unwrap_or_default(),
        var_role_names: func.var_role_names.clone(),
        finalized_signature: func.finalized_signature.clone(),
        byref_locals: func
            .byref_info
            .as_ref()
            .map(|i| i.byref_locals.clone())
            .unwrap_or_default(),
        stack_frame: func.stack_frame.clone(),
        cpp_lambda_captures: func.cpp_lambda_captures.clone(),
        vtable_call_targets: func
            .indirect_call_targets
            .iter()
            .filter(|(_, ts)| matches!(ts, unlace_ir::ssa::TargetSet::VtableSlot { .. }))
            .filter_map(|(&(bid, idx), ts)| {
                let block = func.function.blocks.get(&bid)?;
                let insn = block.insns.get(idx)?;
                Some((insn.addr, ts.clone()))
            })
            .collect(),
    }
}

/// For every block whose terminator is an unstructured `BRANCHIND` (i.e.
/// the structurer did not emit it as a `Switch`), invoke the per-arch
/// classifier and collect recognised dispatch kinds keyed by the BRANCHIND
/// machine address.
///
/// "Unstructured" here means: the block ends in `BRANCHIND` but has fewer
/// than two `IndirectJump` successors (the structured-switch path requires
/// `>= 2` and consumes those blocks). The generic / x86 LOAD→BRANCHIND
/// shape still classifies as [`IndirectBranchKind::Generic`] when present,
/// but only on non-x86 paths do the arch-specific detectors fire.
fn classify_unstructured_indirect_branches(
    func: &SsaFunction,
    arch: ArchId,
) -> BTreeMap<u64, IndirectBranchKind> {
    let mut out = BTreeMap::new();
    for (&bid, block) in &func.function.blocks {
        let Some(last) = block.insns.last() else {
            continue;
        };
        if last.op != IrOp::Branchind {
            continue;
        }
        let n_indirect = func
            .cfg
            .edges_from(bid)
            .iter()
            .filter(|(_, kind)| *kind == EdgeKind::IndirectJump)
            .count();
        if n_indirect >= 2 {
            continue;
        }
        if let Some(kind) = classify_indirect_branch(arch, &block.insns) {
            out.insert(last.addr, kind);
        }
    }
    out
}

/// Like [`structure`] but wraps regions at `landing_pad_addrs` in `TryCatch` nodes.
///
/// When `landing_pad_addrs` is empty this behaves identically to [`structure`].
pub fn structure_with_landing_pads(
    func: &SsaFunction,
    landing_pad_addrs: &BTreeSet<u64>,
) -> Result<HirFunction, StructureError> {
    structure_with_landing_pads_and_arch(func, landing_pad_addrs, ArchId::X86_64)
}

/// Like [`structure_with_landing_pads`] but aborts when `deadline` is exceeded.
pub fn structure_with_landing_pads_until(
    func: &SsaFunction,
    landing_pad_addrs: &BTreeSet<u64>,
    deadline: Instant,
) -> Result<HirFunction, StructureError> {
    structure_with_landing_pads_and_arch_until(func, landing_pad_addrs, ArchId::X86_64, deadline)
}

/// [`structure_with_landing_pads`] with an explicit `arch` for per-arch
/// indirect-branch classification.
pub fn structure_with_landing_pads_and_arch(
    func: &SsaFunction,
    landing_pad_addrs: &BTreeSet<u64>,
    arch: ArchId,
) -> Result<HirFunction, StructureError> {
    let mut hir = structure_with_arch(func, arch)?;
    wrap_landing_pads(&mut hir, func, landing_pad_addrs);
    Ok(hir)
}

/// [`structure_with_landing_pads_and_arch`] with a hard deadline.
pub fn structure_with_landing_pads_and_arch_until(
    func: &SsaFunction,
    landing_pad_addrs: &BTreeSet<u64>,
    arch: ArchId,
    deadline: Instant,
) -> Result<HirFunction, StructureError> {
    let mut hir = structure_with_arch_until(func, arch, deadline)?;
    wrap_landing_pads(&mut hir, func, landing_pad_addrs);
    Ok(hir)
}

fn wrap_landing_pads(hir: &mut HirFunction, func: &SsaFunction, landing_pad_addrs: &BTreeSet<u64>) {
    if landing_pad_addrs.is_empty() {
        return;
    }
    let confirmed = resolve_landing_pad_addrs(func, landing_pad_addrs);
    if !confirmed.is_empty() {
        hir.body = wrap_try_catch(std::mem::take(&mut hir.body), &confirmed, func);
    }
}

/// Apply [`eager_returns`] before structuring, so functions with multiple
/// returns produce one [`HirNode::Return`] per return point.
///
/// Without this pre-pass, a shared return block fed by N predecessors collapses
/// into a single `HirNode::Return` after the if/else, hiding the fact that
/// the source had N early-return statements.
pub fn structure_preserve_returns(func: &mut SsaFunction) -> Result<HirFunction, StructureError> {
    eager_returns(func);
    structure(func)
}

/// [`structure_preserve_returns`] + landing-pad wrapping.
pub fn structure_preserve_returns_with_landing_pads(
    func: &mut SsaFunction,
    landing_pad_addrs: &BTreeSet<u64>,
) -> Result<HirFunction, StructureError> {
    eager_returns(func);
    structure_with_landing_pads(func, landing_pad_addrs)
}

fn resolve_landing_pad_addrs(
    func: &SsaFunction,
    landing_pad_addrs: &BTreeSet<u64>,
) -> BTreeSet<u64> {
    let mut confirmed = BTreeSet::new();
    for block in func.function.blocks.values() {
        if let Some(first_insn) = block.insns.first()
            && landing_pad_addrs.contains(&first_insn.addr)
        {
            confirmed.insert(first_insn.addr);
        }
    }
    confirmed
}

fn wrap_try_catch(
    nodes: Vec<HirNode>,
    landing_pad_addrs: &BTreeSet<u64>,
    func: &SsaFunction,
) -> Vec<HirNode> {
    let split_idx = nodes
        .iter()
        .position(|node| node_starts_at_landing_pad(node, landing_pad_addrs));

    let Some(idx) = split_idx else {
        return nodes
            .into_iter()
            .map(|n| recurse_try_catch_children(n, landing_pad_addrs, func))
            .collect();
    };

    let (try_nodes, catch_and_rest) = nodes.split_at(idx);
    let split_landing_pad = catch_and_rest
        .first()
        .and_then(|node| node_landing_pad_addr(node, landing_pad_addrs));

    let catch_end = catch_and_rest
        .iter()
        .position(|node| !node_starts_at_landing_pad(node, landing_pad_addrs))
        .unwrap_or(catch_and_rest.len());

    let try_body: Vec<HirNode> = try_nodes.to_vec();
    let catch_body: Vec<HirNode> = catch_and_rest[..catch_end].to_vec();
    let rest: Vec<HirNode> = catch_and_rest[catch_end..].to_vec();

    let mut result = Vec::new();
    if try_body.is_empty() {
        result.extend(catch_body);
    } else if split_landing_pad.is_some_and(|lp| func.eh_cleanup_landing_pads.contains(&lp)) {
        result.push(HirNode::TryFinally {
            try_body,
            finally_body: catch_body,
        });
    } else {
        result.push(HirNode::TryCatch {
            try_body,
            catch_arms: catch_arms_for_landing_pad(func, split_landing_pad, catch_body),
        });
    }

    if !rest.is_empty() {
        result.extend(wrap_try_catch(rest, landing_pad_addrs, func));
    }

    result
}

fn node_starts_at_landing_pad(node: &HirNode, landing_pad_addrs: &BTreeSet<u64>) -> bool {
    node_landing_pad_addr(node, landing_pad_addrs).is_some()
}

fn node_landing_pad_addr(node: &HirNode, landing_pad_addrs: &BTreeSet<u64>) -> Option<u64> {
    match node {
        HirNode::Statement(insn) => landing_pad_addrs.contains(&insn.addr).then_some(insn.addr),
        HirNode::Block(children) => children
            .first()
            .and_then(|n| node_landing_pad_addr(n, landing_pad_addrs)),
        _ => None,
    }
}

fn catch_arms_for_landing_pad(
    func: &SsaFunction,
    landing_pad: Option<u64>,
    catch_body: Vec<HirNode>,
) -> Vec<(unlace_ir::types::Type, Vec<HirNode>)> {
    let catch_all = unlace_ir::types::Type::Primitive(unlace_ir::ssa::PrimitiveType::Unknown);
    let Some(landing_pad) = landing_pad else {
        return vec![(catch_all, catch_body)];
    };
    let Some(types) = func.eh_landing_pad_catches.get(&landing_pad) else {
        return vec![(catch_all, catch_body)];
    };
    if types.is_empty() {
        return vec![(catch_all, catch_body)];
    }
    types
        .iter()
        .cloned()
        .map(|ty| (ty, catch_body.clone()))
        .collect()
}

fn recurse_try_catch_children(
    node: HirNode,
    landing_pad_addrs: &BTreeSet<u64>,
    func: &SsaFunction,
) -> HirNode {
    match node {
        HirNode::Block(children) => {
            HirNode::Block(wrap_try_catch(children, landing_pad_addrs, func))
        }
        HirNode::If {
            cond,
            then_body,
            else_body,
        } => HirNode::If {
            cond,
            then_body: wrap_try_catch(then_body, landing_pad_addrs, func),
            else_body: else_body.map(|eb| wrap_try_catch(eb, landing_pad_addrs, func)),
        },
        HirNode::While { cond, body } => HirNode::While {
            cond,
            body: wrap_try_catch(body, landing_pad_addrs, func),
        },
        HirNode::DoWhile { body, cond } => HirNode::DoWhile {
            body: wrap_try_catch(body, landing_pad_addrs, func),
            cond,
        },
        HirNode::For {
            init,
            cond,
            update,
            body,
        } => HirNode::For {
            init,
            cond,
            update,
            body: wrap_try_catch(body, landing_pad_addrs, func),
        },
        HirNode::Switch {
            cond,
            cases,
            default,
            jumptable_addr,
            jumptable_cases,
        } => HirNode::Switch {
            cond,
            cases: cases
                .into_iter()
                .map(|(c, body, ft)| (c, wrap_try_catch(body, landing_pad_addrs, func), ft))
                .collect(),
            default: default.map(|d| wrap_try_catch(d, landing_pad_addrs, func)),
            jumptable_addr,
            jumptable_cases,
        },
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => HirNode::TryCatch {
            try_body: wrap_try_catch(try_body, landing_pad_addrs, func),
            catch_arms: catch_arms
                .into_iter()
                .map(|(ty, body)| (ty, wrap_try_catch(body, landing_pad_addrs, func)))
                .collect(),
        },
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => HirNode::TryFinally {
            try_body: wrap_try_catch(try_body, landing_pad_addrs, func),
            finally_body: wrap_try_catch(finally_body, landing_pad_addrs, func),
        },
        other => other,
    }
}

struct StructureCtx<'a> {
    func: &'a SsaFunction,
    options: StructureOptions,
    /// Optional wall-clock deadline for structuring.
    deadline: Option<Instant>,
    /// Set once a deadline overrun is observed.
    deadline_exceeded: bool,
    /// Blocks already emitted — prevents double-emission.
    emitted: BTreeSet<BlockId>,
    /// Back-edges: (latch → header). A back-edge exists when header dominates latch.
    back_edges: BTreeSet<(BlockId, BlockId)>,
    /// Loop headers (targets of back-edges).
    loop_headers: BTreeSet<BlockId>,
    /// Cached natural-loop block sets keyed by loop header.
    loop_blocks_cache: RefCell<BTreeMap<BlockId, BTreeSet<BlockId>>>,
    /// Labels assigned to blocks for goto fallback.
    block_labels: BTreeMap<BlockId, LabelId>,
    /// Monotonic label counter.
    next_label: u32,
    /// Synthetic blocks to skip (exit, unknown).
    synthetic: BTreeSet<BlockId>,
    /// Blocks pre-identified as `goto` targets in irreducible CFG regions.
    /// Populated in `new()`: any block with two-or-more real predecessors
    /// that is not a loop header is a join point reachable from multiple
    /// non-structured paths and gets a pre-allocated label so a `goto`
    /// emitted later can refer to it.
    goto_targets: BTreeSet<BlockId>,
}

fn structured_predicates_resolve(
    node: &condition_refinement::StructuredNode,
    pred_cond: &BTreeMap<u32, SsaVarnode>,
) -> bool {
    used_predicates(node)
        .into_iter()
        .all(|pred| pred_cond.contains_key(&pred))
}

/// Count the `HirNode::Statement` leaves reachable in `nodes`, recursing
/// through every body-bearing HIR variant. Used by the DREAM seam's
/// statement-preservation oracle to assert the spliced region neither drops nor
/// duplicates a body statement.
fn count_hir_statements(nodes: &[HirNode]) -> usize {
    nodes.iter().map(count_hir_statements_node).sum()
}

fn count_hir_statements_node(node: &HirNode) -> usize {
    match node {
        HirNode::Statement(_) => 1,
        HirNode::Block(body) => count_hir_statements(body),
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => count_hir_statements(body),
        HirNode::For { body, .. } => count_hir_statements(body),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            count_hir_statements(then_body)
                + else_body.as_deref().map(count_hir_statements).unwrap_or(0)
        }
        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => count_hir_statements(then_body) + count_hir_statements(else_body),
        HirNode::IfCmp {
            then_body,
            else_body,
            ..
        } => {
            count_hir_statements(then_body)
                + else_body.as_deref().map(count_hir_statements).unwrap_or(0)
        }
        HirNode::Switch { cases, default, .. } => {
            let case_total: usize = cases
                .iter()
                .map(|(_, body, _)| count_hir_statements(body))
                .sum();
            case_total + default.as_deref().map(count_hir_statements).unwrap_or(0)
        }
        HirNode::Commented { inner, .. } => count_hir_statements_node(inner),
        _ => 0,
    }
}

fn used_predicates(node: &condition_refinement::StructuredNode) -> BTreeSet<u32> {
    let mut out = BTreeSet::new();
    collect_structured_predicates(node, &mut out);
    out
}

fn collect_structured_label_targets(
    node: &condition_refinement::StructuredNode,
    out: &mut BTreeSet<reaching_conditions::RegionNode>,
) {
    use condition_refinement::StructuredNode;
    match node {
        StructuredNode::Goto(region_node) | StructuredNode::Label(region_node) => {
            out.insert(*region_node);
        }
        StructuredNode::Seq(parts) => {
            for part in parts {
                collect_structured_label_targets(part, out);
            }
        }
        StructuredNode::Loop { body } | StructuredNode::Subtree(body) => {
            collect_structured_label_targets(body, out);
        }
        StructuredNode::If { then, els, .. } => {
            collect_structured_label_targets(then, out);
            if let Some(els) = els {
                collect_structured_label_targets(els, out);
            }
        }
        StructuredNode::Switch { cases, default, .. } => {
            for (_, case) in cases {
                collect_structured_label_targets(case, out);
            }
            if let Some(default) = default {
                collect_structured_label_targets(default, out);
            }
        }
        StructuredNode::Empty
        | StructuredNode::Block(_)
        | StructuredNode::Continue
        | StructuredNode::Break
        | StructuredNode::Unsupported => {}
    }
}

fn collect_structured_predicates(
    node: &condition_refinement::StructuredNode,
    out: &mut BTreeSet<u32>,
) {
    use condition_refinement::StructuredNode;
    match node {
        StructuredNode::Empty
        | StructuredNode::Block(_)
        | StructuredNode::Label(_)
        | StructuredNode::Goto(_)
        | StructuredNode::Continue
        | StructuredNode::Break
        | StructuredNode::Unsupported => {}
        StructuredNode::Subtree(inner) => collect_structured_predicates(inner, out),
        StructuredNode::Seq(parts) => {
            for part in parts {
                collect_structured_predicates(part, out);
            }
        }
        StructuredNode::Loop { body } => collect_structured_predicates(body, out),
        StructuredNode::If { cond, then, els } => {
            collect_cond_predicates(cond, out);
            collect_structured_predicates(then, out);
            if let Some(els) = els {
                collect_structured_predicates(els, out);
            }
        }
        StructuredNode::Switch {
            selector,
            cases,
            default,
        } => {
            out.insert(*selector);
            for (_, case) in cases {
                collect_structured_predicates(case, out);
            }
            if let Some(default) = default {
                collect_structured_predicates(default, out);
            }
        }
    }
}

fn collect_cond_predicates(cond: &Cond, out: &mut BTreeSet<u32>) {
    match cond {
        Cond::Pred(id) | Cond::NotPred(id) | Cond::CaseEq(id, _) => {
            out.insert(*id);
        }
        Cond::NotCaseEq(inner) => collect_cond_predicates(inner, out),
        Cond::And(a, b) | Cond::Or(a, b) => {
            collect_cond_predicates(a, out);
            collect_cond_predicates(b, out);
        }
        Cond::True | Cond::False => {}
    }
}

fn structured_predicates_defined_before_use(
    node: &condition_refinement::StructuredNode,
    node_to_block: &BTreeMap<reaching_conditions::RegionNode, BlockId>,
) -> bool {
    let region_blocks: BTreeSet<BlockId> = node_to_block.values().copied().collect();
    let mut emitted = BTreeSet::new();
    structured_predicates_defined_before_use_inner(
        node,
        node_to_block,
        &region_blocks,
        &mut emitted,
    )
}

fn structured_predicates_defined_before_use_inner(
    node: &condition_refinement::StructuredNode,
    node_to_block: &BTreeMap<reaching_conditions::RegionNode, BlockId>,
    region_blocks: &BTreeSet<BlockId>,
    emitted: &mut BTreeSet<BlockId>,
) -> bool {
    use condition_refinement::StructuredNode;
    match node {
        StructuredNode::Empty
        | StructuredNode::Label(_)
        | StructuredNode::Goto(_)
        | StructuredNode::Continue
        | StructuredNode::Break
        | StructuredNode::Unsupported => true,
        StructuredNode::Subtree(inner) => structured_predicates_defined_before_use_inner(
            inner,
            node_to_block,
            region_blocks,
            emitted,
        ),
        StructuredNode::Block(region_node) => {
            if let Some(block) = node_to_block.get(region_node) {
                emitted.insert(*block);
            }
            true
        }
        StructuredNode::Seq(parts) => parts.iter().all(|part| {
            structured_predicates_defined_before_use_inner(
                part,
                node_to_block,
                region_blocks,
                emitted,
            )
        }),
        StructuredNode::Loop { body } => {
            let mut loop_emitted = BTreeSet::new();
            structured_predicates_defined_before_use_inner(
                body,
                node_to_block,
                region_blocks,
                &mut loop_emitted,
            )
        }
        StructuredNode::If { cond, then, els } => {
            if !cond_predicates_defined_before_use(cond, region_blocks, emitted) {
                if struct_trace_enabled()
                    && let Some(pred) = first_undefined_predicate(cond, region_blocks, emitted)
                {
                    struct_debug!(
                        "dream predicate-before-source pred=BlockId({}) emitted={emitted:?}",
                        pred.0
                    );
                }
                return false;
            }
            let mut then_emitted = emitted.clone();
            if !structured_predicates_defined_before_use_inner(
                then,
                node_to_block,
                region_blocks,
                &mut then_emitted,
            ) {
                return false;
            }
            if let Some(els) = els {
                let mut else_emitted = emitted.clone();
                if !structured_predicates_defined_before_use_inner(
                    els,
                    node_to_block,
                    region_blocks,
                    &mut else_emitted,
                ) {
                    return false;
                }
            }
            true
        }
        StructuredNode::Switch {
            selector,
            cases,
            default,
        } => {
            if !predicate_source_defined_before_use(*selector, region_blocks, emitted) {
                struct_debug!(
                    "dream predicate-before-source pred=BlockId({selector}) emitted={emitted:?}"
                );
                return false;
            }
            for (_, case) in cases {
                let mut case_emitted = emitted.clone();
                if !structured_predicates_defined_before_use_inner(
                    case,
                    node_to_block,
                    region_blocks,
                    &mut case_emitted,
                ) {
                    return false;
                }
            }
            if let Some(default) = default {
                let mut default_emitted = emitted.clone();
                if !structured_predicates_defined_before_use_inner(
                    default,
                    node_to_block,
                    region_blocks,
                    &mut default_emitted,
                ) {
                    return false;
                }
            }
            true
        }
    }
}

fn cond_predicates_defined_before_use(
    cond: &Cond,
    region_blocks: &BTreeSet<BlockId>,
    emitted: &BTreeSet<BlockId>,
) -> bool {
    match cond {
        Cond::Pred(id) | Cond::NotPred(id) | Cond::CaseEq(id, _) => {
            predicate_source_defined_before_use(*id, region_blocks, emitted)
        }
        Cond::NotCaseEq(inner) => cond_predicates_defined_before_use(inner, region_blocks, emitted),
        Cond::And(a, b) | Cond::Or(a, b) => {
            cond_predicates_defined_before_use(a, region_blocks, emitted)
                && cond_predicates_defined_before_use(b, region_blocks, emitted)
        }
        Cond::True | Cond::False => true,
    }
}

fn predicate_source_defined_before_use(
    pred: u32,
    region_blocks: &BTreeSet<BlockId>,
    emitted: &BTreeSet<BlockId>,
) -> bool {
    let source = BlockId(pred);
    !region_blocks.contains(&source) || emitted.contains(&source)
}

fn first_undefined_predicate(
    cond: &Cond,
    region_blocks: &BTreeSet<BlockId>,
    emitted: &BTreeSet<BlockId>,
) -> Option<BlockId> {
    match cond {
        Cond::Pred(id) | Cond::NotPred(id) | Cond::CaseEq(id, _) => {
            let source = BlockId(*id);
            (region_blocks.contains(&source) && !emitted.contains(&source)).then_some(source)
        }
        Cond::NotCaseEq(inner) => first_undefined_predicate(inner, region_blocks, emitted),
        Cond::And(a, b) | Cond::Or(a, b) => first_undefined_predicate(a, region_blocks, emitted)
            .or_else(|| first_undefined_predicate(b, region_blocks, emitted)),
        Cond::True | Cond::False => None,
    }
}

fn dream_predicate_source_nodes(
    node_to_block: &BTreeMap<reaching_conditions::RegionNode, BlockId>,
) -> BTreeMap<u32, reaching_conditions::RegionNode> {
    node_to_block
        .iter()
        .map(|(&region_node, &block)| (block.0, region_node))
        .collect()
}

impl<'a> StructureCtx<'a> {
    #[cfg(test)]
    fn new(func: &'a SsaFunction) -> Self {
        Self::new_with_deadline(func, None, StructureOptions::default())
    }

    fn new_with_deadline(
        func: &'a SsaFunction,
        deadline: Option<Instant>,
        options: StructureOptions,
    ) -> Self {
        let mut back_edges = BTreeSet::new();
        let mut loop_headers = BTreeSet::new();
        let synthetic = BTreeSet::from([func.cfg.exit_block(), func.cfg.unknown_block()]);

        // Detect back-edges: edge (src → tgt) where tgt dominates src.
        for &bid in func.function.blocks.keys() {
            for (succ, _kind) in func.cfg.edges_from(bid) {
                if synthetic.contains(&succ) {
                    continue;
                }
                if dominates(&func.dom_tree, succ, bid) {
                    back_edges.insert((bid, succ));
                    loop_headers.insert(succ);
                }
            }
        }

        // Pre-identify candidate `goto` targets: non-loop-header blocks with
        // two or more real predecessors. These are the join points of
        // irreducible CFG regions where the structurer's `if`/`while`
        // patterns cannot encode all incoming control edges.
        let mut goto_targets = BTreeSet::new();
        for &bid in func.function.blocks.keys() {
            if loop_headers.contains(&bid) {
                continue;
            }
            let real_preds: Vec<BlockId> = func
                .cfg
                .edges_to(bid)
                .into_iter()
                .map(|(src, _)| src)
                .filter(|src| !synthetic.contains(src))
                .collect();
            if real_preds.len() >= 2 {
                goto_targets.insert(bid);
            }
        }

        struct_debug!(
            "init func={} blocks={} back_edges={} loop_headers={} goto_targets={}",
            func.function.name,
            func.function.blocks.len(),
            back_edges.len(),
            loop_headers.len(),
            goto_targets.len()
        );
        if struct_trace_verbose_enabled() {
            struct_trace!("init back_edges={back_edges:?}");
            struct_trace!("init loop_headers={loop_headers:?}");
            for (&bid, block) in &func.function.blocks {
                struct_trace!(
                    "init cfg block={bid:?} insns={} addr={:x?} edges={:?}",
                    block.insns.len(),
                    block.insns.first().map(|insn| insn.addr),
                    func.cfg.edges_from(bid)
                );
            }
            for target in &goto_targets {
                let preds: Vec<BlockId> = func
                    .cfg
                    .edges_to(*target)
                    .into_iter()
                    .map(|(src, _)| src)
                    .filter(|src| !synthetic.contains(src))
                    .collect();
                struct_trace!("init goto_target={target:?} preds={preds:?}");
            }
        }

        Self {
            func,
            options,
            deadline,
            deadline_exceeded: false,
            emitted: BTreeSet::new(),
            back_edges,
            loop_headers,
            loop_blocks_cache: RefCell::new(BTreeMap::new()),
            block_labels: BTreeMap::new(),
            next_label: 0,
            synthetic,
            goto_targets,
        }
    }

    fn check_deadline(&mut self) -> bool {
        if self.deadline_exceeded {
            return false;
        }
        if let Some(deadline) = self.deadline
            && Instant::now() >= deadline
        {
            self.deadline_exceeded = true;
            struct_debug!("timeout-exceeded func={}", self.func.function.name);
            return false;
        }
        true
    }

    fn deadline_exceeded(&self) -> bool {
        self.deadline_exceeded
    }

    fn is_frame_setup(&self, bid: BlockId, insn_idx: usize) -> bool {
        self.func.frame_setup_insns.contains(&(bid, insn_idx))
    }

    fn loop_edges_from(
        &self,
        bid: BlockId,
        header: BlockId,
        loop_blocks: &BTreeSet<BlockId>,
    ) -> Vec<(BlockId, EdgeKind)> {
        let mut edges = self.func.cfg.edges_from(bid);
        let Some((kind, target)) = concrete_terminator_edge(self.func, bid, &edges) else {
            struct_trace!(
                "loop-edge-normalize block={bid:?} header={header:?} action=skip reason=no-concrete-terminator edges={edges:?}"
            );
            return edges;
        };

        let target_in_loop = target == header || loop_blocks.contains(&target);
        if struct_trace_enabled() {
            let cfg_target = edges
                .iter()
                .find_map(|(edge_target, edge_kind)| (*edge_kind == kind).then_some(*edge_target));
            struct_debug!(
                "loop-edge-normalize block={bid:?} header={header:?} kind={kind:?} cfg_target={cfg_target:?} ir_target={target:?} target_in_loop={target_in_loop}"
            );
        }
        if target_in_loop {
            normalize_edge_target(&mut edges, bid, kind, target);
        } else {
            struct_trace!(
                "loop-edge-normalize block={bid:?} header={header:?} action=ignore reason=terminator-target-outside-loop"
            );
        }
        edges
    }

    /// Append the exit paths a `goto` names that no structured path emitted,
    /// such as the exit of a loop the structurer left by another edge.
    /// Without them the label has no code and control falls off the end.
    /// Only self-contained paths are appended: ones that end in a jump and
    /// do not branch back into the structured body with further `goto`s.
    fn emit_pending_goto_targets(&mut self, body: &mut Vec<HirNode>) {
        // Appended code must not become reachable by falling off the end.
        if !ends_in_jump(body) {
            return;
        }
        let pending: Vec<BlockId> = self
            .block_labels
            .keys()
            .copied()
            .filter(|block| !self.emitted.contains(block))
            .collect();
        for block in pending {
            if self.emitted.contains(&block) {
                continue;
            }
            let nodes = self.structure_until(block, None);
            let self_contained = ends_in_jump(&nodes) && goto_resolve::count_gotos(&nodes) == 0;
            struct_debug!("pending-goto-target block={block:?} appended={self_contained}");
            if self_contained {
                body.extend(nodes);
            }
        }
    }

    fn alloc_label(&mut self, block: BlockId) -> LabelId {
        if let Some(&label) = self.block_labels.get(&block) {
            return label;
        }
        let label = LabelId(self.next_label);
        self.next_label += 1;
        self.block_labels.insert(block, label);
        struct_debug!("alloc-label block={block:?} label={label:?}");
        label
    }

    fn unstructured_fallback_body(&mut self, reason: String) -> Vec<HirNode> {
        let block_ids: Vec<BlockId> = self
            .func
            .function
            .blocks
            .keys()
            .copied()
            .filter(|bid| !self.synthetic.contains(bid))
            .collect();
        let insn_count: usize = block_ids
            .iter()
            .filter_map(|bid| self.func.function.blocks.get(bid))
            .map(|block| block.insns.len())
            .sum();
        linkscope::record_items(
            "struct.unstructured-fallback.blocks",
            block_ids.len() as u64,
        );
        linkscope::record_items("struct.unstructured-fallback.insns", insn_count as u64);
        if !should_emit_full_unstructured_fallback(
            block_ids.len(),
            insn_count,
            self.options.fallback_max_blocks,
            self.options.fallback_max_insns,
        ) {
            linkscope::record_items("struct.unstructured-fallback.summary", 1);
            return self.unstructured_summary_body(reason, block_ids.len(), insn_count);
        }

        for bid in &block_ids {
            self.alloc_label(*bid);
        }

        let mut nodes = vec![HirNode::Commented {
            pre: vec![
                "unstructured fallback: control-flow structuring skipped".to_string(),
                reason,
            ],
            post: Vec::new(),
            inner: Box::new(HirNode::Block(Vec::new())),
        }];

        for bid in block_ids {
            let label = self.alloc_label(bid);
            nodes.push(HirNode::Label(label));
            self.emit_unstructured_block_body(bid, &mut nodes);
            self.emit_unstructured_transfer(bid, &mut nodes);
        }
        nodes
    }

    fn unstructured_summary_body(
        &self,
        reason: String,
        block_count: usize,
        insn_count: usize,
    ) -> Vec<HirNode> {
        vec![HirNode::Commented {
            pre: vec![
                "unstructured fallback summary: control-flow structuring skipped".to_string(),
                reason,
                format!("omitted full fallback body: blocks={block_count} insns={insn_count}"),
                "raise [structure] fallback_max_blocks/fallback_max_insns (0 disables) to force full labeled-block fallback"
                    .to_string(),
            ],
            post: Vec::new(),
            inner: Box::new(HirNode::Return(None)),
        }]
    }

    fn emit_unstructured_block_body(&self, bid: BlockId, nodes: &mut Vec<HirNode>) {
        let Some(block) = self.func.function.blocks.get(&bid) else {
            return;
        };
        for (idx, insn) in block.insns.iter().enumerate() {
            if self.is_frame_setup(bid, idx) {
                continue;
            }
            match insn.op {
                IrOp::Cbranch | IrOp::Branch | IrOp::Branchind | IrOp::Return => {}
                _ => nodes.push(HirNode::Statement(insn.clone())),
            }
        }
    }

    fn emit_unstructured_transfer(&mut self, bid: BlockId, nodes: &mut Vec<HirNode>) {
        let Some(block) = self.func.function.blocks.get(&bid) else {
            return;
        };
        let Some(term) = block.insns.last() else {
            return;
        };
        match term.op {
            IrOp::Return => {
                let ret =
                    self.resolve_ssa_varnode(bid, block.insns.len() - 1, VarnodeSlot::Input(0));
                nodes.push(HirNode::Return(ret));
            }
            IrOp::Cbranch => self.emit_unstructured_cbranch(bid, nodes),
            IrOp::Branch => {
                if let Some(target) = self.first_real_successor(bid) {
                    self.push_goto_to_block(target, nodes);
                }
            }
            IrOp::Branchind => {
                let targets = self.real_successors(bid);
                if let Some(&target) = targets.first() {
                    let label = self.alloc_label(target);
                    nodes.push(HirNode::Commented {
                        pre: vec![format!(
                            "unstructured indirect branch: {} possible targets; using first target",
                            targets.len()
                        )],
                        post: Vec::new(),
                        inner: Box::new(HirNode::Goto(label)),
                    });
                } else {
                    nodes.push(HirNode::Commented {
                        pre: vec!["unstructured indirect branch: no concrete target".to_string()],
                        post: Vec::new(),
                        inner: Box::new(HirNode::Block(Vec::new())),
                    });
                }
            }
            _ => {
                if let Some(target) = self.first_real_successor(bid) {
                    self.push_goto_to_block(target, nodes);
                }
            }
        }
    }

    fn emit_unstructured_cbranch(&mut self, bid: BlockId, nodes: &mut Vec<HirNode>) {
        let cond = self.find_cbranch_cond(bid);
        let mut true_target = None;
        let mut false_target = None;
        for (target, kind) in self.func.cfg.edges_from(bid) {
            if self.synthetic.contains(&target) {
                continue;
            }
            match kind {
                EdgeKind::ConditionalTrue => true_target = Some(target),
                EdgeKind::ConditionalFalse => false_target = Some(target),
                _ => {}
            }
        }
        let Some(true_target) = true_target.or_else(|| self.real_successors(bid).first().copied())
        else {
            return;
        };
        let then_body = vec![HirNode::Goto(self.alloc_label(true_target))];
        let else_body = false_target.map(|target| vec![HirNode::Goto(self.alloc_label(target))]);
        nodes.push(HirNode::If {
            cond,
            then_body,
            else_body,
        });
    }

    fn real_successors(&self, bid: BlockId) -> Vec<BlockId> {
        self.func
            .cfg
            .edges_from(bid)
            .into_iter()
            .map(|(target, _)| target)
            .filter(|target| !self.synthetic.contains(target))
            .collect()
    }

    fn first_real_successor(&self, bid: BlockId) -> Option<BlockId> {
        self.real_successors(bid).into_iter().next()
    }

    fn push_goto_to_block(&mut self, target: BlockId, nodes: &mut Vec<HirNode>) {
        let label = self.alloc_label(target);
        nodes.push(HirNode::Goto(label));
    }

    /// DREAM residual-region seam.
    ///
    /// This is deliberately conservative. It only consumes a residual
    /// irreducible region when all of the following are true:
    ///
    /// * `bid` is one of the region's residual entry blocks,
    /// * the reaching-condition skeleton is acyclic, a conservative
    ///   single-header cyclic region, or an abnormal cyclic region that can
    ///   be represented with real labels/gotos,
    /// * condition refinement succeeds,
    /// * every predicate used by the structured tree resolves to a CBRANCH
    ///   condition varnode, and
    /// * the region has at most one external successor after cyclic
    ///   exit-tail refinement.
    ///
    fn try_structure_dream_residual_region(
        &mut self,
        bid: BlockId,
    ) -> Option<(Vec<HirNode>, Option<BlockId>)> {
        if !self.check_deadline() {
            return None;
        }
        let region = {
            let _span = linkscope::phase("struct.dream.detect-irreducible");
            irreducible::detect_irreducible_regions(self.func)
                .into_iter()
                .find(|r| r.entry_blocks.contains(&bid))?
        };
        if !self.check_deadline() {
            return None;
        }

        struct_debug!(
            "dream candidate entry={bid:?} body_blocks={} entries={:?}",
            region.body_blocks.len(),
            region.entry_blocks
        );

        let mut dream_body_blocks = region.body_blocks.clone();
        let (initial_dream_region, _, initial_region_exits) = {
            let _span = linkscope::phase("struct.dream.initial-region");
            region_bridge::cfg_region_to_region_with_exits(&self.func.cfg, bid, &dream_body_blocks)
        };
        let initial_rc = {
            let _span = linkscope::phase("struct.dream.initial-reaching-conditions");
            reaching_conditions::compute_reaching_conditions(
                &initial_dream_region,
                self.options.max_reaching_condition_nodes,
            )
        };
        if initial_rc.limited {
            struct_debug!("dream skip entry={bid:?} reason=initial-rc-limited");
            return None;
        }
        if !initial_rc.back_edges.is_empty() {
            let initial_real_exits: BTreeSet<BlockId> = initial_region_exits
                .iter()
                .filter(|exit| !self.synthetic.contains(&exit.target))
                .map(|exit| exit.target)
                .collect();
            if initial_real_exits.len() > 1 {
                let Some((join, exit_tail_blocks)) = ({
                    let _span = linkscope::phase("struct.dream.expand-linear-exit-tails");
                    self.dream_expand_linear_exit_tails(&dream_body_blocks, &initial_real_exits)
                }) else {
                    struct_debug!(
                        "dream skip entry={bid:?} reason=cyclic-multiple-exits exits={initial_real_exits:?}"
                    );
                    return None;
                };
                struct_debug!(
                    "dream expand-exits entry={bid:?} join={join:?} tails={exit_tail_blocks:?}"
                );
                dream_body_blocks.extend(exit_tail_blocks);
            }
        }

        let (dream_region, node_to_block, region_exits) = {
            let _span = linkscope::phase("struct.dream.region");
            region_bridge::cfg_region_to_region_with_exits(&self.func.cfg, bid, &dream_body_blocks)
        };
        let rc = {
            let _span = linkscope::phase("struct.dream.reaching-conditions");
            reaching_conditions::compute_reaching_conditions(
                &dream_region,
                self.options.max_reaching_condition_nodes,
            )
        };
        if rc.limited {
            struct_debug!("dream skip entry={bid:?} reason=rc-limited");
            return None;
        }
        let has_back_edges = !rc.back_edges.is_empty();
        let real_region_exits: Vec<region_bridge::RegionExit> = region_exits
            .into_iter()
            .filter(|exit| !self.synthetic.contains(&exit.target))
            .collect();
        let real_exit_targets: BTreeSet<BlockId> =
            real_region_exits.iter().map(|exit| exit.target).collect();
        if has_back_edges && real_exit_targets.len() > 1 {
            struct_debug!(
                "dream skip entry={bid:?} reason=cyclic-multiple-exits exits={real_exit_targets:?}"
            );
            return None;
        }

        let structured = if has_back_edges {
            if !self.check_deadline() {
                return None;
            }
            let exit_edges: Vec<_> = real_region_exits
                .iter()
                .map(|exit| (exit.source, exit.label.clone()))
                .collect();
            let structured = {
                let _span = linkscope::phase("struct.dream.refine-cyclic");
                condition_refinement::refine_cyclic_region_with_exits(
                    &dream_region,
                    &exit_edges,
                    self.options.max_reaching_condition_nodes,
                )
            };
            if matches!(
                structured,
                condition_refinement::StructuredNode::Unsupported
            ) {
                let predicate_sources = dream_predicate_source_nodes(&node_to_block);
                let _span = linkscope::phase("struct.dream.refine-abnormal-cyclic");
                condition_refinement::refine_abnormal_cyclic_region_with_exits_and_sources(
                    &dream_region,
                    &exit_edges,
                    &predicate_sources,
                    self.options.max_reaching_condition_nodes,
                )
            } else {
                structured
            }
        } else {
            let _span = linkscope::phase("struct.dream.refine-acyclic");
            condition_refinement::refine_region(
                &dream_region,
                self.options.max_reaching_condition_nodes,
            )
        };
        if matches!(
            structured,
            condition_refinement::StructuredNode::Unsupported
        ) {
            struct_debug!(
                "dream skip entry={bid:?} reason=unsupported back_edges={:?}",
                rc.back_edges
            );
            return None;
        }

        let pred_cond = {
            let _span = linkscope::phase("struct.dream.predicate-conditions");
            self.dream_predicate_conditions(&dream_body_blocks)
        };
        if !structured_predicates_resolve(&structured, &pred_cond) {
            struct_debug!(
                "dream skip entry={bid:?} reason=unresolved-predicate preds={:?}",
                used_predicates(&structured)
            );
            return None;
        }
        if !structured_predicates_defined_before_use(&structured, &node_to_block) {
            struct_debug!("dream skip entry={bid:?} reason=predicate-before-source");
            return None;
        }

        let has_unspliced_control = {
            let _span = linkscope::phase("struct.dream.unspliced-control-check");
            self.dream_region_has_unspliced_control(&dream_body_blocks)
        };
        if has_unspliced_control {
            struct_debug!("dream skip entry={bid:?} reason=unspliced-control");
            return None;
        }

        let exits = if has_back_edges {
            real_exit_targets
        } else {
            self.dream_region_exits(&dream_body_blocks)
        };
        if exits.len() > 1 {
            struct_debug!("dream skip entry={bid:?} reason=multiple-exits exits={exits:?}");
            return None;
        }

        let block_bodies = {
            let _span = linkscope::phase("struct.dream.block-bodies");
            dream_body_blocks
                .iter()
                .map(|&block| (block, self.non_control_block_statements(block)))
                .collect()
        };
        let label_map = {
            let _span = linkscope::phase("struct.dream.label-map");
            self.dream_structured_label_map(&structured, &node_to_block)?
        };
        if !self.check_deadline() {
            return None;
        }
        let hir = {
            let _span = linkscope::phase("struct.dream.splice");
            region_splice::splice_structured_with_labels(
                &structured,
                &node_to_block,
                &block_bodies,
                &pred_cond,
                &label_map,
            )
        };

        // Statement-preservation oracle: the spliced HIR must contain each body
        // block's non-control statements EXACTLY once — no drops, no
        // duplication. This is the correctness guarantee for the DREAM path
        // (golden parity only proves the regions are *skipped*, not that the
        // engine is *sound*); without it a mis-structured region could silently
        // lose or double a statement. It is a pure acceptance check: it only
        // ever adds a `return None`, so the rollback path is unaffected.
        let (expected_statements, spliced_statements) = {
            let _span = linkscope::phase("struct.dream.statement-count-check");
            let expected_statements: usize = block_bodies
                .values()
                .map(|body| count_hir_statements(body))
                .sum();
            let spliced_statements = count_hir_statements(&hir);
            (expected_statements, spliced_statements)
        };
        if spliced_statements != expected_statements {
            struct_debug!(
                "dream skip entry={bid:?} reason=statement-count-mismatch expected={expected_statements} spliced={spliced_statements}"
            );
            return None;
        }

        for block in &dream_body_blocks {
            self.emitted.insert(*block);
        }

        Some((hir, exits.into_iter().next()))
    }

    fn dream_structured_label_map(
        &mut self,
        structured: &condition_refinement::StructuredNode,
        node_to_block: &BTreeMap<reaching_conditions::RegionNode, BlockId>,
    ) -> Option<BTreeMap<reaching_conditions::RegionNode, LabelId>> {
        let mut targets = BTreeSet::new();
        collect_structured_label_targets(structured, &mut targets);
        let mut labels = BTreeMap::new();
        for target in targets {
            let block = *node_to_block.get(&target)?;
            let label = self.alloc_label(block);
            labels.insert(target, label);
        }
        Some(labels)
    }

    fn dream_region_has_unspliced_control(&self, body_blocks: &BTreeSet<BlockId>) -> bool {
        body_blocks.iter().any(|&bid| {
            let Some(block) = self.func.function.blocks.get(&bid) else {
                return false;
            };
            block.insns.iter().enumerate().any(|(idx, insn)| {
                matches!(insn.op, IrOp::Return)
                    || (insn.op == IrOp::Branch && self.func.tail_call_map.contains_key(&bid))
                    || (insn.op == IrOp::Branchind
                        && self.func.indirect_call_targets.contains_key(&(bid, idx)))
            })
        })
    }

    fn dream_predicate_conditions(
        &self,
        body_blocks: &BTreeSet<BlockId>,
    ) -> BTreeMap<u32, SsaVarnode> {
        body_blocks
            .iter()
            .filter(|&&bid| self.block_has_cbranch(bid))
            .map(|&bid| (bid.0, self.find_cbranch_cond(bid)))
            .collect()
    }

    fn dream_region_exits(&self, body_blocks: &BTreeSet<BlockId>) -> BTreeSet<BlockId> {
        let mut exits = BTreeSet::new();
        for &block in body_blocks {
            for (target, _) in self.func.cfg.edges_from(block) {
                if !self.synthetic.contains(&target) && !body_blocks.contains(&target) {
                    exits.insert(target);
                }
            }
        }
        exits
    }

    fn dream_expand_linear_exit_tails(
        &self,
        body_blocks: &BTreeSet<BlockId>,
        exit_targets: &BTreeSet<BlockId>,
    ) -> Option<(BlockId, BTreeSet<BlockId>)> {
        for join in self.dream_common_exit_join_candidates(body_blocks, exit_targets) {
            let mut tails = BTreeSet::new();
            let mut ok = true;
            for &target in exit_targets {
                match self.dream_linear_exit_tail(target, join, body_blocks) {
                    Some(tail) => tails.extend(tail),
                    None => {
                        ok = false;
                        break;
                    }
                }
            }
            if !ok {
                continue;
            }
            let mut expanded_body = body_blocks.clone();
            expanded_body.extend(tails.iter().copied());
            let reachable = self.reachable_blocks_from_entry();
            if self.dream_tail_has_reachable_external_predecessor(
                &tails,
                &expanded_body,
                &reachable,
            ) {
                continue;
            }
            return Some((join, tails));
        }
        None
    }

    fn dream_common_exit_join_candidates(
        &self,
        body_blocks: &BTreeSet<BlockId>,
        exit_targets: &BTreeSet<BlockId>,
    ) -> Vec<BlockId> {
        let mut reachable_sets = exit_targets
            .iter()
            .map(|&target| self.collect_reachable(target, 16));
        let Some(mut common) = reachable_sets.next() else {
            return Vec::new();
        };
        for reachable in reachable_sets {
            common = common.intersection(&reachable).copied().collect();
        }
        common
            .into_iter()
            .filter(|candidate| {
                !self.synthetic.contains(candidate) && !body_blocks.contains(candidate)
            })
            .collect()
    }

    fn dream_linear_exit_tail(
        &self,
        start: BlockId,
        join: BlockId,
        body_blocks: &BTreeSet<BlockId>,
    ) -> Option<BTreeSet<BlockId>> {
        if start == join {
            return Some(BTreeSet::new());
        }
        let mut tail = BTreeSet::new();
        let mut current = start;
        for _ in 0..16 {
            if self.synthetic.contains(&current) || body_blocks.contains(&current) {
                return None;
            }
            if !tail.insert(current) {
                return None;
            }
            let next = self.single_successor(current)?;
            if next == join {
                return Some(tail);
            }
            current = next;
        }
        None
    }

    fn dream_tail_has_reachable_external_predecessor(
        &self,
        tail_blocks: &BTreeSet<BlockId>,
        expanded_body: &BTreeSet<BlockId>,
        reachable: &BTreeSet<BlockId>,
    ) -> bool {
        tail_blocks.iter().any(|&tail| {
            self.func.cfg.edges_to(tail).into_iter().any(|(pred, _)| {
                !self.synthetic.contains(&pred)
                    && !expanded_body.contains(&pred)
                    && reachable.contains(&pred)
            })
        })
    }

    fn structure_region(&mut self, start: BlockId) -> Vec<HirNode> {
        let mut nodes = Vec::new();
        let mut current = Some(start);

        while let Some(bid) = current {
            if !self.check_deadline() {
                break;
            }
            struct_debug!("region current={bid:?}");
            trace_block_edges(self.func, bid, "region");
            if self.synthetic.contains(&bid) {
                struct_debug!("region stop synthetic={bid:?}");
                break;
            }
            if self.emitted.contains(&bid) {
                if self.goto_targets.contains(&bid) {
                    let label = self.alloc_label(bid);
                    nodes.push(HirNode::Goto(label));
                    struct_debug!("region emitted-target goto block={bid:?} label={label:?}");
                } else {
                    struct_debug!("region stop already-emitted={bid:?}");
                }
                break;
            }

            if let Some((dream_nodes, next)) = self.try_structure_dream_residual_region(bid) {
                trace_hir_counts("region-dream-node", &dream_nodes);
                nodes.extend(dream_nodes);
                current = next;
                struct_debug!("region dream bid={bid:?} next={current:?}");
                continue;
            }

            // If this block is a loop header, try to structure the loop.
            if self.loop_headers.contains(&bid) && !self.emitted.contains(&bid) {
                let loop_node = self.try_structure_loop(bid);
                if let Some(node) = loop_node {
                    if struct_trace_verbose_enabled() {
                        trace_hir_counts("region-loop-node", std::slice::from_ref(&node));
                    }
                    nodes.push(node);
                    // After the loop, continue with the loop exit target.
                    current = self.find_loop_exit(bid);
                    struct_debug!("region loop header={bid:?} exit={current:?}");
                    continue;
                }
            }

            // Try switch pattern: BRANCHIND with multiple IndirectJump targets.
            if let Some((switch_node, join)) = self.try_structure_switch(bid) {
                nodes.push(switch_node);
                current = join;
                continue;
            }

            // Try if/else pattern.
            if let Some((if_node, join)) = self.try_structure_if(bid) {
                trace_hir_counts("region-if-node", std::slice::from_ref(&if_node));
                nodes.push(if_node);
                current = join;
                struct_debug!("region if bid={bid:?} join={current:?}");
                continue;
            }

            // Default: emit as a linear block of statements.
            self.emit_block_statements(bid, &mut nodes);
            current = self.single_successor(bid);
            struct_debug!("region linear bid={bid:?} next={current:?}");
        }

        nodes
    }

    fn emit_block_statements(&mut self, bid: BlockId, nodes: &mut Vec<HirNode>) {
        if self.emitted.contains(&bid) {
            return;
        }
        self.emitted.insert(bid);
        let start_len = nodes.len();

        // Pre-identified `goto` target → ensure a label is allocated before
        // we emit this block's body, so any later `goto` can land here.
        if self.goto_targets.contains(&bid) {
            self.alloc_label(bid);
        }

        // Emit label if this block was targeted by a goto.
        if let Some(&label) = self.block_labels.get(&bid) {
            nodes.push(HirNode::Label(label));
            struct_debug!("emit-block label block={bid:?} label={label:?}");
        }

        let Some(block) = self.func.function.blocks.get(&bid) else {
            return;
        };
        struct_debug!(
            "emit-block block={bid:?} insns={} start_nodes={start_len}",
            block.insns.len()
        );
        trace_block_edges(self.func, bid, "emit-block");

        let mut pending_guard: Option<(u8, Vec<HirNode>)> = None;
        let flush_guard = |pg: &mut Option<(u8, Vec<HirNode>)>, sink: &mut Vec<HirNode>| {
            if let Some((cc, body)) = pg.take() {
                sink.push(HirNode::GuardedIf {
                    cond_code: cc,
                    then_body: body,
                    else_body: Vec::new(),
                });
            }
        };

        for (i, insn) in block.insns.iter().enumerate() {
            if self.is_frame_setup(bid, i) {
                continue;
            }
            let produced: Option<HirNode> = match insn.op {
                IrOp::Branch => {
                    flush_guard(&mut pending_guard, nodes);
                    self.func
                        .tail_call_map
                        .get(&bid)
                        .copied()
                        .map(|target| HirNode::TailCall {
                            target,
                            args: self.tail_call_args(bid, i, insn),
                        })
                }
                IrOp::Cbranch => {
                    flush_guard(&mut pending_guard, nodes);
                    continue;
                }
                IrOp::Branchind => {
                    flush_guard(&mut pending_guard, nodes);
                    // When a BRANCHIND is a recognised C++ vtable tail-call,
                    // emit it as a Statement so the C printer can render it
                    // as `return this->__vftable->method_N(args);`.
                    if self.func.indirect_call_targets.contains_key(&(bid, i)) {
                        Some(HirNode::Statement(insn.clone()))
                    } else {
                        continue;
                    }
                }
                IrOp::Return => {
                    flush_guard(&mut pending_guard, nodes);
                    let ret_val = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(0));
                    Some(HirNode::Return(ret_val))
                }
                _ => Some(HirNode::Statement(insn.clone())),
            };
            let Some(node) = produced else { continue };

            match insn.guard {
                Some(cc) => match &mut pending_guard {
                    Some((open_cc, body)) if *open_cc == cc => body.push(node),
                    _ => {
                        flush_guard(&mut pending_guard, nodes);
                        pending_guard = Some((cc, vec![node]));
                    }
                },
                None => {
                    flush_guard(&mut pending_guard, nodes);
                    nodes.push(node);
                }
            }
        }
        flush_guard(&mut pending_guard, nodes);
        fuse_guarded_if_else(nodes);
        fold_guarded_ternary(nodes);
        fold_csel_ternary(nodes);
        struct_debug!(
            "emit-block done block={bid:?} added_nodes={}",
            nodes.len().saturating_sub(start_len)
        );
    }

    fn try_structure_switch(&mut self, bid: BlockId) -> Option<(HirNode, Option<BlockId>)> {
        self.try_structure_switch_in(bid, None)
    }

    /// Structure the jump-table dispatch ending `bid`. Inside a loop,
    /// `in_loop` names the loop header and blocks: case bodies then reach
    /// the back edge as `continue`, and leave the loop through a `goto` to
    /// the exit, since a `break` there would only leave the switch.
    fn try_structure_switch_in(
        &mut self,
        bid: BlockId,
        in_loop: Option<(BlockId, &BTreeSet<BlockId>)>,
    ) -> Option<(HirNode, Option<BlockId>)> {
        let _span = linkscope::phase("struct.try-switch");
        if self.emitted.contains(&bid) {
            return None;
        }

        let block = self.func.function.blocks.get(&bid)?;
        let last = block.insns.last()?;
        if last.op != IrOp::Branchind {
            return None;
        }

        // `(block, index)` per table slot. The blocks recorded when the
        // dispatch edges were wired come first: passes may since have
        // removed the leading instructions of a target block, after which
        // it can no longer be found by address.
        let table = self.func.resolved_jump_tables.get(&last.addr).or_else(|| {
            self.func.resolved_jump_tables.values().find(|table| {
                table
                    .targets
                    .iter()
                    .filter_map(|&addr| self.block_starting_at_addr(addr))
                    .filter(|tgt| !self.synthetic.contains(tgt))
                    .take(2)
                    .count()
                    >= 2
            })
        });
        let slot_targets: Vec<(BlockId, u64)> = match table {
            Some(table)
                if table.target_blocks.len() == table.targets.len()
                    && table
                        .target_blocks
                        .iter()
                        .all(|tgt| self.func.function.blocks.contains_key(tgt)) =>
            {
                table
                    .target_blocks
                    .iter()
                    .copied()
                    .zip(0u64..)
                    .filter(|(tgt, _)| !self.synthetic.contains(tgt))
                    .collect()
            }
            Some(table) => table
                .targets
                .iter()
                .zip(0u64..)
                .filter_map(|(&addr, idx)| self.block_starting_at_addr(addr).map(|bid| (bid, idx)))
                .filter(|(tgt, _)| !self.synthetic.contains(tgt))
                .collect(),
            None => Vec::new(),
        };
        let mut targets: Vec<BlockId> = Vec::new();
        for &(tgt, _) in &slot_targets {
            if !targets.contains(&tgt) {
                targets.push(tgt);
            }
        }
        if targets.is_empty() {
            targets = block
                .successors
                .iter()
                .copied()
                .filter(|tgt| !self.synthetic.contains(tgt))
                .collect();
            targets.dedup();
        }
        if targets.is_empty() {
            let edges = self.func.cfg.edges_from(bid);
            targets = edges
                .iter()
                .filter(|(tgt, kind)| {
                    *kind == EdgeKind::IndirectJump && !self.synthetic.contains(tgt)
                })
                .map(|(tgt, _)| *tgt)
                .collect();
        }
        if targets.len() < 2 {
            return None;
        }

        let cond = self.recover_switch_index(bid);
        let bounds = self.extract_bounds_check(bid, &cond);
        self.emitted.insert(bid);

        let table_math = self.dispatch_only_insns(bid, &cond);
        let mut pre_stmts = Vec::new();
        for (i, insn) in block.insns.iter().enumerate() {
            if self.is_frame_setup(bid, i) || table_math.contains(&i) {
                continue;
            }
            match insn.op {
                IrOp::Branchind | IrOp::Branch | IrOp::Cbranch | IrOp::Return => {}
                _ => pre_stmts.push(HirNode::Statement(insn.clone())),
            }
        }

        let join = match in_loop {
            Some((header, loop_blocks)) => {
                self.find_loop_switch_join(&targets, header, loop_blocks)
            }
            None => self.find_switch_join(bid, &targets),
        };

        // Table slots that point at the bounds check's out-of-range target
        // are holes of a sparse switch: they belong to `default`, not to a
        // case label. Several slots that share one block become stacked
        // labels over a single body.
        let bounds_default = bounds.and_then(|b| b.default_target);
        let mut cases = Vec::new();
        let mut default_body = None;
        for (i, &tgt) in targets.iter().enumerate() {
            if Some(tgt) == bounds_default {
                default_body = Some(self.structure_switch_case(tgt, join, in_loop));
                continue;
            }
            let mut values: Vec<u64> = slot_targets
                .iter()
                .filter(|(slot_tgt, _)| *slot_tgt == tgt)
                .map(|&(_, value)| value)
                .collect();
            let last_value = values.pop().unwrap_or(i as u64);
            for value in values {
                cases.push((SwitchCase::Value(value), Vec::new(), true));
            }
            let body = self.structure_switch_case(tgt, join, in_loop);
            cases.push((SwitchCase::Value(last_value), body, false));
        }

        let jumptable_cases = table
            .and_then(|table| table.bound)
            .map(|bound| bound as usize)
            .or_else(|| bounds.map(|b| b.case_count as usize));

        let switch_node = HirNode::Switch {
            cond,
            cases,
            default: default_body,
            jumptable_addr: None,
            jumptable_cases,
        };

        let mut combined = if pre_stmts.is_empty() {
            switch_node
        } else {
            pre_stmts.push(switch_node);
            HirNode::Block(pre_stmts)
        };

        // Inside a loop the join may already sit on another path, in which
        // case the loop walker stops there; the cases that leave the switch
        // must still reach it.
        if in_loop.is_some()
            && let Some(join_bid) = join
            && self.emitted.contains(&join_bid)
        {
            let label = self.alloc_label(join_bid);
            combined = HirNode::Block(vec![combined, HirNode::Goto(label)]);
            return Some((combined, None));
        }

        Some((combined, join))
    }

    fn structure_switch_case(
        &mut self,
        target: BlockId,
        join: Option<BlockId>,
        in_loop: Option<(BlockId, &BTreeSet<BlockId>)>,
    ) -> Vec<HirNode> {
        let Some((header, loop_blocks)) = in_loop else {
            return self.structure_until(target, join);
        };
        let mut body = self.structure_loop_branch_until(target, join, header, loop_blocks);
        if let Some(exit) = self.find_loop_exit(header) {
            let label = self.alloc_label(exit);
            break_to_goto(&mut body, label);
        }
        body
    }

    /// The block where the cases of a switch inside the loop of `header`
    /// meet again before the back edge: the earliest block that every case
    /// staying in the loop reaches. Cases that leave the loop or return do
    /// not constrain it.
    fn find_loop_switch_join(
        &self,
        targets: &[BlockId],
        header: BlockId,
        loop_blocks: &BTreeSet<BlockId>,
    ) -> Option<BlockId> {
        let mut common: Option<BTreeSet<BlockId>> = None;
        for &target in targets {
            let (reached, reaches_header) = self.reach_in_loop(target, header, loop_blocks);
            if !reaches_header {
                continue;
            }
            common = Some(match common {
                Some(common) => common.intersection(&reached).copied().collect(),
                None => reached,
            });
        }
        let common = common?;
        common.iter().copied().find(|&candidate| {
            let (reached, _) = self.reach_in_loop(candidate, header, loop_blocks);
            common.iter().all(|other| reached.contains(other))
        })
    }

    /// Loop blocks reachable from `start` without taking the back edge to
    /// `header`, and whether the back edge is reached.
    fn reach_in_loop(
        &self,
        start: BlockId,
        header: BlockId,
        loop_blocks: &BTreeSet<BlockId>,
    ) -> (BTreeSet<BlockId>, bool) {
        let mut reached = BTreeSet::new();
        let mut reaches_header = false;
        let mut work = vec![start];
        while let Some(bid) = work.pop() {
            if bid == header {
                reaches_header = true;
                continue;
            }
            if !loop_blocks.contains(&bid) || self.synthetic.contains(&bid) || !reached.insert(bid)
            {
                continue;
            }
            work.extend(
                self.func
                    .cfg
                    .edges_from(bid)
                    .into_iter()
                    .map(|(succ, _)| succ),
            );
        }
        (reached, reaches_header)
    }

    /// Instructions of the dispatch block `bid` whose results only feed the
    /// indirect jump: the table load and target arithmetic, and flags they
    /// set. A recovered `switch` replaces the jump, so these would print as
    /// reads of the table plus a reassignment of the register the index
    /// lives in. Everything that `index`, a side effect, or another block
    /// still needs is kept.
    fn dispatch_only_insns(&self, bid: BlockId, index: &SsaVarnode) -> BTreeSet<usize> {
        let Some(block) = self.func.function.blocks.get(&bid) else {
            return BTreeSet::new();
        };
        // Values real instructions of other blocks read, plus the inputs of
        // phis whose result is itself needed. Phis are placed for every
        // register written on a path, so an unused one must not keep the
        // table arithmetic alive.
        let mut live: BTreeSet<SsaVarnode> = self
            .func
            .var_map
            .iter()
            .filter(|((use_bid, _, slot), _)| {
                *use_bid != bid && matches!(slot, VarnodeSlot::Input(_))
            })
            .map(|(_, sv)| *sv)
            .collect();
        let phis: Vec<_> = self.func.phi_map.values().flatten().collect();
        let mut grew = true;
        while grew {
            grew = false;
            for phi in &phis {
                if live.contains(&phi.output) {
                    for (_, input) in &phi.inputs {
                        grew |= live.insert(*input);
                    }
                }
            }
        }
        live.insert(*index);

        let mut dead = BTreeSet::new();
        for (i, insn) in block.insns.iter().enumerate().rev() {
            if insn.op == IrOp::Branchind {
                dead.insert(i);
                continue;
            }
            let side_effect = matches!(
                insn.op,
                IrOp::Store
                    | IrOp::Call
                    | IrOp::Callind
                    | IrOp::Callother
                    | IrOp::Branch
                    | IrOp::Cbranch
                    | IrOp::Return
            );
            let output_live = self
                .resolve_ssa_varnode(bid, i, VarnodeSlot::Output)
                .is_some_and(|out| live.contains(&out));
            if side_effect || output_live || insn.output.is_none() {
                for slot in 0..insn.inputs.len() {
                    if let Some(input) = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(slot))
                    {
                        live.insert(input);
                    }
                }
            } else {
                dead.insert(i);
            }
        }
        dead
    }

    fn block_starting_at_addr(&self, addr: u64) -> Option<BlockId> {
        self.func.function.blocks.iter().find_map(|(&bid, block)| {
            block
                .insns
                .first()
                .is_some_and(|insn| insn.addr == addr)
                .then_some(bid)
        })
    }

    /// Bound information extracted from a CMP/SUB-then-CBRANCH guarding a
    /// switch dispatch. Recovered by [`StructureCtx::extract_bounds_check`]
    /// and used to populate `jumptable_cases` and a default target.
    fn extract_bounds_check(
        &self,
        switch_block: BlockId,
        index: &SsaVarnode,
    ) -> Option<BoundsCheck> {
        for pred in self.func.cfg.predecessors(switch_block) {
            if self.synthetic.contains(&pred) || pred == switch_block {
                continue;
            }
            if let Some(bc) = self.scan_pred_for_bounds(pred, switch_block, index) {
                return Some(bc);
            }
        }
        None
    }

    #[allow(clippy::collapsible_match)] // explicit if/else inside arms reads more clearly
    fn scan_pred_for_bounds(
        &self,
        pred: BlockId,
        switch_block: BlockId,
        index: &SsaVarnode,
    ) -> Option<BoundsCheck> {
        let block = self.func.function.blocks.get(&pred)?;
        let cbranch_idx = block.insns.iter().rposition(|i| i.op == IrOp::Cbranch)?;
        let cond_sv = self.resolve_ssa_varnode(pred, cbranch_idx, VarnodeSlot::Input(1))?;

        for (i, insn) in block.insns.iter().enumerate().take(cbranch_idx).rev() {
            let out = self.resolve_ssa_varnode(pred, i, VarnodeSlot::Output);
            let matches =
                matches!(out, Some(o) if o.base == cond_sv.base && o.version == cond_sv.version);
            if !matches {
                continue;
            }

            let lhs_raw = insn.inputs.first().copied()?;
            let rhs_raw = insn.inputs.get(1).copied()?;
            let lhs_is_const = lhs_raw.space == SpaceId::Const;
            let rhs_is_const = rhs_raw.space == SpaceId::Const;
            let lhs_sv = if lhs_is_const {
                None
            } else {
                self.resolve_ssa_varnode(pred, i, VarnodeSlot::Input(0))
            };
            let rhs_sv = if rhs_is_const {
                None
            } else {
                self.resolve_ssa_varnode(pred, i, VarnodeSlot::Input(1))
            };
            let lhs_matches_index = lhs_sv
                .as_ref()
                .is_some_and(|sv| self.varnode_aliases(pred, sv, index));
            let rhs_matches_index = rhs_sv
                .as_ref()
                .is_some_and(|sv| self.varnode_aliases(pred, sv, index));

            let (bound, branch_taken_when_in_range) = match insn.op {
                IrOp::IntLess | IrOp::IntSless => {
                    if lhs_matches_index && rhs_is_const {
                        (rhs_raw.offset, true)
                    } else if rhs_matches_index && lhs_is_const {
                        (lhs_raw.offset.wrapping_add(1), false)
                    } else {
                        return None;
                    }
                }
                IrOp::IntLessequal | IrOp::IntSlessequal => {
                    if lhs_matches_index && rhs_is_const {
                        (rhs_raw.offset.wrapping_add(1), true)
                    } else if rhs_matches_index && lhs_is_const {
                        (lhs_raw.offset, false)
                    } else {
                        return None;
                    }
                }
                IrOp::IntSub => {
                    if lhs_matches_index && rhs_is_const {
                        (rhs_raw.offset, true)
                    } else {
                        return None;
                    }
                }
                _ => return None,
            };

            let edges = self.func.cfg.edges_from(pred);
            let in_range_kind = if branch_taken_when_in_range {
                EdgeKind::ConditionalTrue
            } else {
                EdgeKind::ConditionalFalse
            };
            let oob_kind = if branch_taken_when_in_range {
                EdgeKind::ConditionalFalse
            } else {
                EdgeKind::ConditionalTrue
            };

            let in_range_target = edges
                .iter()
                .find(|(_, k)| *k == in_range_kind)
                .map(|(t, _)| *t);
            let oob_target = edges.iter().find(|(_, k)| *k == oob_kind).map(|(t, _)| *t);

            if in_range_target != Some(switch_block) {
                return None;
            }

            return Some(BoundsCheck {
                case_count: bound,
                default_target: oob_target.filter(|t| !self.synthetic.contains(t)),
            });
        }
        None
    }

    /// True if `candidate` is the same SSA value as `target`, or resolves
    /// through a Copy / Cast / Subpiece chain in `bid` back to `target`.
    /// Falls back to `Varnode`-base equality for register / stack / unique
    /// classes when versions diverge across SSA-rename boundaries — switch
    /// bounds checks often live one block before the dispatch where the
    /// SSA renamer assigned a different version of the same register.
    fn varnode_aliases(&self, bid: BlockId, candidate: &SsaVarnode, target: &SsaVarnode) -> bool {
        if candidate.base == target.base && candidate.version == target.version {
            return true;
        }
        let Some(block) = self.func.function.blocks.get(&bid) else {
            return false;
        };
        let mut cur = *candidate;
        for _ in 0..4 {
            if cur.base == target.base && cur.version == target.version {
                return true;
            }
            let mut advanced = false;
            for (i, insn) in block.insns.iter().enumerate() {
                let Some(out) = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Output) else {
                    continue;
                };
                if out.base != cur.base || out.version != cur.version {
                    continue;
                }
                match insn.op {
                    IrOp::Copy | IrOp::IntZext | IrOp::IntSext | IrOp::Subpiece => {
                        if let Some(input) = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(0))
                        {
                            cur = input;
                            advanced = true;
                        }
                    }
                    _ => {}
                }
                break;
            }
            if !advanced {
                break;
            }
        }
        candidate.base == target.base
            && matches!(
                candidate.base.space,
                SpaceId::Register | SpaceId::Stack | SpaceId::Unique
            )
    }

    fn recover_switch_index(&self, bid: BlockId) -> SsaVarnode {
        let block = match self.func.function.blocks.get(&bid) {
            Some(b) => b,
            None => return self.fallback_switch_cond(),
        };

        let branchind_idx = match block.insns.iter().rposition(|i| i.op == IrOp::Branchind) {
            Some(i) => i,
            None => return self.fallback_switch_cond(),
        };

        // BRANCHIND input[0] = target address. Trace back through LOAD(base + index * scale).
        let target_sv = match self.resolve_ssa_varnode(bid, branchind_idx, VarnodeSlot::Input(0)) {
            Some(sv) => sv,
            None => return self.fallback_switch_cond(),
        };

        // Search backwards for the LOAD whose output feeds BRANCHIND.
        if let Some(index_sv) = self.trace_table_index(bid, &target_sv) {
            return index_sv;
        }

        target_sv
    }

    fn trace_table_index(&self, bid: BlockId, target: &SsaVarnode) -> Option<SsaVarnode> {
        let block = self.func.function.blocks.get(&bid)?;

        // Find the instruction that defines `target` in this block.
        for (i, insn) in block.insns.iter().enumerate().rev() {
            let Some(output_sv) = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Output) else {
                continue;
            };
            if output_sv.base != target.base || output_sv.version != target.version {
                continue;
            }

            // Pattern: LOAD(space, addr) — addr is computed from base + index * scale
            if insn.op == IrOp::Load
                && let Some(addr_sv) = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(1))
            {
                return self.trace_scaled_index(bid, &addr_sv);
            }
            if insn.op == IrOp::IntAdd {
                for slot in [VarnodeSlot::Input(0), VarnodeSlot::Input(1)] {
                    let Some(input_sv) = self.resolve_ssa_varnode(bid, i, slot) else {
                        continue;
                    };
                    if let Some(index_sv) =
                        self.trace_table_index_from_target_operand(bid, &input_sv, 8)
                    {
                        return Some(index_sv);
                    }
                }
            }
            break;
        }

        None
    }

    fn trace_table_index_from_target_operand(
        &self,
        bid: BlockId,
        value: &SsaVarnode,
        depth: u32,
    ) -> Option<SsaVarnode> {
        if depth == 0 {
            return None;
        }
        if let Some(index) = self.trace_table_index_from_load_output(bid, value) {
            return Some(index);
        }

        let block = self.func.function.blocks.get(&bid)?;
        for (i, insn) in block.insns.iter().enumerate().rev() {
            let Some(output_sv) = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Output) else {
                continue;
            };
            if output_sv.base != value.base || output_sv.version != value.version {
                continue;
            }
            if matches!(
                insn.op,
                IrOp::Copy | IrOp::IntZext | IrOp::IntSext | IrOp::Subpiece | IrOp::Cast
            ) && let Some(input_sv) = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(0))
            {
                return self.trace_table_index_from_target_operand(bid, &input_sv, depth - 1);
            }
            break;
        }

        None
    }

    fn trace_table_index_from_load_output(
        &self,
        bid: BlockId,
        load_value: &SsaVarnode,
    ) -> Option<SsaVarnode> {
        let block = self.func.function.blocks.get(&bid)?;
        for (i, insn) in block.insns.iter().enumerate().rev() {
            let Some(output_sv) = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Output) else {
                continue;
            };
            if output_sv.base != load_value.base || output_sv.version != load_value.version {
                continue;
            }
            if insn.op == IrOp::Load
                && let Some(addr_sv) = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(1))
            {
                return self.trace_scaled_index(bid, &addr_sv);
            }
            break;
        }
        None
    }

    fn trace_scaled_index(&self, bid: BlockId, addr: &SsaVarnode) -> Option<SsaVarnode> {
        let block = self.func.function.blocks.get(&bid)?;

        for (i, insn) in block.insns.iter().enumerate().rev() {
            let Some(output_sv) = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Output) else {
                continue;
            };
            if output_sv.base != addr.base || output_sv.version != addr.version {
                continue;
            }

            // Pattern: INT_ADD(base_const, scaled_index) or INT_ADD(scaled_index, base_const).
            // Constant inputs are not in the var_map, so check raw inputs directly.
            if insn.op == IrOp::IntAdd && insn.inputs.len() >= 2 {
                let lhs_const = insn.inputs[0].space == SpaceId::Const;
                let rhs_const = insn.inputs[1].space == SpaceId::Const;
                if rhs_const
                    && let Some(lhs_sv) = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(0))
                {
                    return self.extract_index_from_scale(bid, &lhs_sv);
                }
                if lhs_const
                    && let Some(rhs_sv) = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(1))
                {
                    return self.extract_index_from_scale(bid, &rhs_sv);
                }
                for slot in [VarnodeSlot::Input(0), VarnodeSlot::Input(1)] {
                    let Some(input_sv) = self.resolve_ssa_varnode(bid, i, slot) else {
                        continue;
                    };
                    if let Some(index_sv) = self.try_extract_scaled_index(bid, &input_sv) {
                        return Some(index_sv);
                    }
                }
            }

            break;
        }

        None
    }

    fn extract_index_from_scale(&self, bid: BlockId, scaled: &SsaVarnode) -> Option<SsaVarnode> {
        if let Some(index) = self.try_extract_scaled_index(bid, scaled) {
            return Some(index);
        }
        // The scaled value itself might be the index (scale == 1).
        Some(self.normalize_switch_index(bid, self.walk_bitwise_chain(bid, scaled, 4)))
    }

    fn try_extract_scaled_index(&self, bid: BlockId, scaled: &SsaVarnode) -> Option<SsaVarnode> {
        let block = self.func.function.blocks.get(&bid)?;

        for (i, insn) in block.insns.iter().enumerate().rev() {
            let Some(out) = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Output) else {
                continue;
            };
            if out.base != scaled.base || out.version != scaled.version {
                continue;
            }

            // Pattern: INT_MULT(index, scale_const) or INT_LEFT(index, shift_const).
            // Constant inputs are not in var_map; check raw inputs directly.
            match insn.op {
                IrOp::IntMult if insn.inputs.len() >= 2 => {
                    let lhs_raw = insn.inputs[0];
                    let rhs_raw = insn.inputs[1];
                    if rhs_raw.space == SpaceId::Const
                        && is_scale_value(rhs_raw.offset)
                        && let Some(lhs_sv) =
                            self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(0))
                    {
                        let index = self.walk_bitwise_chain(bid, &lhs_sv, 4);
                        return Some(self.normalize_switch_index(bid, index));
                    }
                    if lhs_raw.space == SpaceId::Const
                        && is_scale_value(lhs_raw.offset)
                        && let Some(rhs_sv) =
                            self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(1))
                    {
                        let index = self.walk_bitwise_chain(bid, &rhs_sv, 4);
                        return Some(self.normalize_switch_index(bid, index));
                    }
                }
                IrOp::IntLeft if insn.inputs.len() >= 2 => {
                    let shift_raw = insn.inputs[1];
                    if shift_raw.space == SpaceId::Const
                        && let Some(index_sv) =
                            self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(0))
                    {
                        let index = self.walk_bitwise_chain(bid, &index_sv, 4);
                        return Some(self.normalize_switch_index(bid, index));
                    }
                }
                _ => {}
            }
            break;
        }

        None
    }

    fn normalize_switch_index(&self, bid: BlockId, index: SsaVarnode) -> SsaVarnode {
        if index.base.space != SpaceId::Register || index.base.size <= 4 {
            return index;
        }
        let Some(block) = self.func.function.blocks.get(&bid) else {
            return index;
        };
        for (i, insn) in block.insns.iter().enumerate() {
            let Some(output) = insn.output else {
                continue;
            };
            if output.space == SpaceId::Register
                && output.offset == index.base.offset
                && output.size == 4
                && let Some(sv) = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Output)
            {
                return sv;
            }
        }
        index
    }

    /// Walk through a chain of `IntAnd(x, mask_const)`, `IntRight(x, shift_const)`,
    /// `IntSright(x, shift_const)`, and `IntZext/Sext` ops to dig down to the
    /// underlying index source. Stops at non-bitwise ops or at depth zero.
    fn walk_bitwise_chain(&self, bid: BlockId, start: &SsaVarnode, depth: u32) -> SsaVarnode {
        if depth == 0 {
            return *start;
        }
        let Some(block) = self.func.function.blocks.get(&bid) else {
            return *start;
        };
        for (i, insn) in block.insns.iter().enumerate().rev() {
            let Some(out) = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Output) else {
                continue;
            };
            if out.base != start.base || out.version != start.version {
                continue;
            }
            let next = match insn.op {
                IrOp::IntAnd | IrOp::IntRight | IrOp::IntSright if insn.inputs.len() >= 2 => {
                    let lhs_raw = insn.inputs[0];
                    let rhs_raw = insn.inputs[1];
                    if rhs_raw.space == SpaceId::Const {
                        self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(0))
                    } else if lhs_raw.space == SpaceId::Const && insn.op == IrOp::IntAnd {
                        self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(1))
                    } else {
                        None
                    }
                }
                IrOp::IntZext | IrOp::IntSext | IrOp::Subpiece if !insn.inputs.is_empty() => {
                    self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(0))
                }
                _ => None,
            };
            return match next {
                Some(n) => self.walk_bitwise_chain(bid, &n, depth - 1),
                None => *start,
            };
        }
        *start
    }

    fn fallback_switch_cond(&self) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::constant(0, 8),
            version: 0,
        }
    }

    fn find_switch_join(&self, cond_block: BlockId, targets: &[BlockId]) -> Option<BlockId> {
        if targets.is_empty() {
            return None;
        }

        if let Some(join) = self.find_join_point_postdom(cond_block) {
            let target_set: BTreeSet<BlockId> = targets.iter().copied().collect();
            if !target_set.contains(&join) {
                return Some(join);
            }
        }

        let mut reachable_sets: Vec<BTreeSet<BlockId>> = targets
            .iter()
            .map(|&t| self.collect_reachable(t, 16))
            .collect();

        // Intersect all reachable sets to find the common join point.
        let mut common = reachable_sets.pop()?;
        for set in &reachable_sets {
            common = common.intersection(set).copied().collect();
        }

        // Exclude the targets themselves — the join is *after* all cases.
        let target_set: BTreeSet<BlockId> = targets.iter().copied().collect();
        common.retain(|b| !target_set.contains(b));

        common.into_iter().next()
    }

    fn try_structure_if(&mut self, bid: BlockId) -> Option<(HirNode, Option<BlockId>)> {
        let _span = linkscope::phase("struct.try-if");
        if self.emitted.contains(&bid) {
            return None;
        }

        let edges = self.func.cfg.edges_from(bid);

        let mut true_target = None;
        let mut false_target = None;

        for (tgt, kind) in &edges {
            if self.synthetic.contains(tgt) {
                continue;
            }
            match kind {
                EdgeKind::ConditionalTrue => true_target = Some(*tgt),
                EdgeKind::ConditionalFalse => false_target = Some(*tgt),
                _ => {}
            }
        }

        let (true_blk, false_blk) = match (true_target, false_target) {
            (Some(t), Some(f)) => (t, f),
            _ => return None,
        };

        // Emit the header block's non-control-flow instructions.
        let cond = self.find_cbranch_cond(bid);
        self.emitted.insert(bid);

        // Emit pre-branch statements from the header.
        let mut pre_stmts = Vec::new();
        if self.goto_targets.contains(&bid) {
            self.alloc_label(bid);
        }
        if let Some(&label) = self.block_labels.get(&bid) {
            pre_stmts.push(HirNode::Label(label));
        }
        if let Some(block) = self.func.function.blocks.get(&bid) {
            for (i, insn) in block.insns.iter().enumerate() {
                if self.is_frame_setup(bid, i) {
                    continue;
                }
                match insn.op {
                    IrOp::Cbranch | IrOp::Branch | IrOp::Branchind | IrOp::Return => {}
                    _ => pre_stmts.push(HirNode::Statement(insn.clone())),
                }
            }
        }
        if struct_trace_enabled() {
            struct_debug!(
                "if bid={bid:?} pre_stmts={} true={true_blk:?} false={false_blk:?}",
                pre_stmts.len()
            );
            for stmt in &pre_stmts {
                if let HirNode::Statement(insn) = stmt {
                    struct_debug!("if bid={bid:?} pre addr=0x{:x} op={:?}", insn.addr, insn.op);
                }
            }
        }

        // Find the join point: a block that both branches eventually reach.
        let join = self.find_join_point(bid, true_blk, false_blk);

        let mut then_body = self.structure_until(true_blk, join);
        let mut else_body = self.structure_until(false_blk, join);
        if struct_trace_enabled() {
            struct_debug!(
                "if bid={bid:?} join={join:?} true={true_blk:?} false={false_blk:?} then_nodes={} else_nodes={}",
                then_body.len(),
                else_body.len()
            );
            if then_body.is_empty() != else_body.is_empty() {
                let true_is_join = join == Some(true_blk);
                let false_is_join = join == Some(false_blk);
                let true_goto_target = self.goto_targets.contains(&true_blk);
                let false_goto_target = self.goto_targets.contains(&false_blk);
                struct_debug!(
                    "if-empty-arm bid={bid:?} join={join:?} true={true_blk:?} true_is_join={true_is_join} true_goto_target={true_goto_target} false={false_blk:?} false_is_join={false_is_join} false_goto_target={false_goto_target}"
                );
                trace_branch_shape(&format!("if-empty-arm bid={bid:?} then"), &then_body);
                trace_branch_shape(&format!("if-empty-arm bid={bid:?} else"), &else_body);
            }
        }
        if struct_trace_verbose_enabled() {
            trace_hir_counts(&format!("if bid={bid:?} then"), &then_body);
            trace_hir_counts(&format!("if bid={bid:?} else"), &else_body);
        }

        if let Some(join_blk) = join {
            if then_body.is_empty()
                && !else_body.is_empty()
                && (self.goto_targets.contains(&false_blk)
                    || hir_contains_label_or_goto(&else_body))
            {
                let label = self.alloc_label(join_blk);
                then_body.push(HirNode::Goto(label));
                if struct_trace_enabled() {
                    struct_debug!(
                        "if-join-branch-goto bid={bid:?} join={join_blk:?} guarded_branch=true sibling={false_blk:?} label={label:?} reason=empty-sibling-hoist-guard"
                    );
                    trace_branch_shape(
                        &format!("if-join-branch-goto bid={bid:?} then"),
                        &then_body,
                    );
                }
            } else if else_body.is_empty()
                && !then_body.is_empty()
                && (self.goto_targets.contains(&true_blk) || hir_contains_label_or_goto(&then_body))
            {
                let label = self.alloc_label(join_blk);
                else_body.push(HirNode::Goto(label));
                if struct_trace_enabled() {
                    struct_debug!(
                        "if-join-branch-goto bid={bid:?} join={join_blk:?} guarded_branch=false sibling={true_blk:?} label={label:?} reason=empty-sibling-hoist-guard"
                    );
                    trace_branch_shape(
                        &format!("if-join-branch-goto bid={bid:?} else"),
                        &else_body,
                    );
                }
            }
        }

        let else_body = if else_body.is_empty() {
            None
        } else {
            Some(else_body)
        };

        let if_node = HirNode::If {
            cond,
            then_body,
            else_body,
        };

        let combined = if pre_stmts.is_empty() {
            if_node
        } else {
            let mut result = pre_stmts;
            result.push(if_node);
            HirNode::Block(result)
        };

        Some((combined, join))
    }

    fn try_structure_if_in_loop(
        &mut self,
        bid: BlockId,
        header: BlockId,
        loop_blocks: &BTreeSet<BlockId>,
    ) -> Option<(HirNode, Option<BlockId>)> {
        let _span = linkscope::phase("struct.try-if-in-loop");
        if self.emitted.contains(&bid) {
            return None;
        }

        let edges = self.loop_edges_from(bid, header, loop_blocks);

        let mut true_target = None;
        let mut false_target = None;

        for (tgt, kind) in &edges {
            if self.synthetic.contains(tgt) {
                continue;
            }
            match kind {
                EdgeKind::ConditionalTrue => true_target = Some(*tgt),
                EdgeKind::ConditionalFalse => false_target = Some(*tgt),
                _ => {}
            }
        }

        let (true_blk, false_blk) = match (true_target, false_target) {
            (Some(t), Some(f)) => (t, f),
            _ => return None,
        };
        if struct_trace_enabled() {
            let true_in_loop = true_blk == header || loop_blocks.contains(&true_blk);
            let false_in_loop = false_blk == header || loop_blocks.contains(&false_blk);
            struct_debug!(
                "loop-if-edges bid={bid:?} header={header:?} edges={edges:?} true={true_blk:?} true_in_loop={true_in_loop} false={false_blk:?} false_in_loop={false_in_loop}"
            );
        }

        let cond = self.find_cbranch_cond(bid);
        self.emitted.insert(bid);

        let mut pre_stmts = Vec::new();
        if self.goto_targets.contains(&bid) {
            self.alloc_label(bid);
        }
        if let Some(&label) = self.block_labels.get(&bid) {
            pre_stmts.push(HirNode::Label(label));
        }
        if let Some(block) = self.func.function.blocks.get(&bid) {
            for (i, insn) in block.insns.iter().enumerate() {
                if self.is_frame_setup(bid, i) {
                    continue;
                }
                match insn.op {
                    IrOp::Cbranch | IrOp::Branch | IrOp::Branchind | IrOp::Return => {}
                    _ => pre_stmts.push(HirNode::Statement(insn.clone())),
                }
            }
        }

        let join = self.find_join_point(bid, true_blk, false_blk);
        if struct_trace_enabled() {
            let join_in_loop =
                join.is_some_and(|join| join == header || loop_blocks.contains(&join));
            struct_debug!(
                "loop-if-join bid={bid:?} header={header:?} join={join:?} join_in_loop={join_in_loop}"
            );
        }
        let then_body = self.structure_loop_branch_until(true_blk, join, header, loop_blocks);
        let else_body = self.structure_loop_branch_until(false_blk, join, header, loop_blocks);
        if struct_trace_enabled() {
            struct_debug!(
                "loop-if bid={bid:?} header={header:?} join={join:?} true={true_blk:?} false={false_blk:?} then_nodes={} else_nodes={}",
                then_body.len(),
                else_body.len()
            );
            if then_body.is_empty() != else_body.is_empty() {
                let true_is_join = join == Some(true_blk);
                let false_is_join = join == Some(false_blk);
                let true_goto_target = self.goto_targets.contains(&true_blk);
                let false_goto_target = self.goto_targets.contains(&false_blk);
                let true_in_loop = true_blk == header || loop_blocks.contains(&true_blk);
                let false_in_loop = false_blk == header || loop_blocks.contains(&false_blk);
                struct_debug!(
                    "loop-if-empty-arm bid={bid:?} header={header:?} join={join:?} true={true_blk:?} true_is_join={true_is_join} true_in_loop={true_in_loop} true_goto_target={true_goto_target} false={false_blk:?} false_is_join={false_is_join} false_in_loop={false_in_loop} false_goto_target={false_goto_target}"
                );
                trace_branch_shape(&format!("loop-if-empty-arm bid={bid:?} then"), &then_body);
                trace_branch_shape(&format!("loop-if-empty-arm bid={bid:?} else"), &else_body);
            }
        }
        if struct_trace_verbose_enabled() {
            trace_hir_counts(&format!("loop-if bid={bid:?} then"), &then_body);
            trace_hir_counts(&format!("loop-if bid={bid:?} else"), &else_body);
        }

        let else_body = if else_body.is_empty() {
            None
        } else {
            Some(else_body)
        };

        let if_node = HirNode::If {
            cond,
            then_body,
            else_body,
        };

        let combined = if pre_stmts.is_empty() {
            if_node
        } else {
            let mut result = pre_stmts;
            result.push(if_node);
            HirNode::Block(result)
        };

        Some((combined, join))
    }

    fn try_structure_loop(&mut self, header: BlockId) -> Option<HirNode> {
        let _span = linkscope::phase("struct.try-loop");
        if !self.check_deadline() {
            return None;
        }
        if self.emitted.contains(&header) {
            return None;
        }

        // Find the latch block(s) — blocks with back-edges to this header.
        let latches: Vec<BlockId> = self
            .back_edges
            .iter()
            .filter(|(_latch, hdr)| *hdr == header)
            .map(|(latch, _)| *latch)
            .collect();

        if latches.is_empty() {
            return None;
        }

        // Determine loop kind: while vs do-while.
        // While: header has CBRANCH (exit test at top).
        // DoWhile: header has no exit test, latch has CBRANCH.
        //
        // Fallback: if the CBRANCH instruction was eliminated by optimization
        // passes (e.g. SCCP folding after SSE Copy lowering) but the CFG still
        // retains ConditionalTrue/ConditionalFalse edges, treat the header as
        // having an implicit conditional — the loop structure is real even when
        // the branch instruction is gone.
        let header_has_cbranch =
            self.block_has_cbranch(header) || self.header_has_conditional_edges(header);
        let single_latch = if latches.len() == 1 {
            Some(latches[0])
        } else {
            None
        };
        let latch_has_cbranch = single_latch.is_some_and(|l| self.block_has_cbranch(l));
        struct_debug!(
            "loop header={header:?} latches={latches:?} header_cbranch={header_has_cbranch} single_latch={single_latch:?} latch_cbranch={latch_has_cbranch}"
        );

        if header_has_cbranch {
            if latches.contains(&header) {
                let cond = self.find_cbranch_cond(header);
                self.emitted.insert(header);

                let mut body_nodes = Vec::new();
                if let Some(block) = self.func.function.blocks.get(&header) {
                    for (i, insn) in block.insns.iter().enumerate() {
                        if self.is_frame_setup(header, i) {
                            continue;
                        }
                        match insn.op {
                            IrOp::Cbranch | IrOp::Branch | IrOp::Branchind | IrOp::Return => {}
                            _ => body_nodes.push(HirNode::Statement(insn.clone())),
                        }
                    }
                }

                return Some(HirNode::DoWhile {
                    body: body_nodes,
                    cond,
                });
            }

            // While loop: condition at header.
            let cond = self.find_cbranch_cond(header);

            // Find which successor is the loop body vs. the exit.
            let edges = self.func.cfg.edges_from(header);
            let (body_entry, exit) = self.classify_loop_edges(header, &edges);
            struct_debug!(
                "while header={header:?} body={body_entry:?} exit={exit:?} edges={edges:?}"
            );

            self.emitted.insert(header);

            let header_nodes = self.non_control_block_statements(header);
            let loop_blocks = self.collect_loop_blocks(header);
            struct_trace!(
                "while header={header:?} loop_blocks={loop_blocks:?} header_nodes={}",
                header_nodes.len()
            );

            if exit.is_none() {
                let mut body_nodes = header_nodes;
                let true_target = edges
                    .iter()
                    .find_map(|(target, kind)| {
                        (*kind == EdgeKind::ConditionalTrue).then_some(*target)
                    })
                    .or(body_entry);
                let false_target = edges
                    .iter()
                    .find_map(|(target, kind)| {
                        (*kind == EdgeKind::ConditionalFalse).then_some(*target)
                    })
                    .or_else(|| {
                        edges
                            .iter()
                            .map(|(target, _)| *target)
                            .find(|target| Some(*target) != true_target)
                    });

                let then_body = true_target
                    .map(|target| self.loop_branch_nodes_for_target(target, header, &loop_blocks))
                    .unwrap_or_else(|| vec![HirNode::Break]);
                let else_body = false_target
                    .map(|target| self.loop_branch_nodes_for_target(target, header, &loop_blocks))
                    .unwrap_or_else(|| vec![HirNode::Break]);
                struct_debug!(
                    "while-no-exit header={header:?} true_target={true_target:?} false_target={false_target:?} then_nodes={} else_nodes={}",
                    then_body.len(),
                    else_body.len()
                );
                if struct_trace_verbose_enabled() {
                    trace_hir_counts(&format!("while-no-exit header={header:?} then"), &then_body);
                    trace_hir_counts(&format!("while-no-exit header={header:?} else"), &else_body);
                }

                body_nodes.push(HirNode::If {
                    cond,
                    then_body,
                    else_body: Some(else_body),
                });

                return Some(HirNode::While {
                    cond: SsaVarnode {
                        base: unlace_ir::Varnode::constant(1, 1),
                        version: 0,
                    },
                    body: body_nodes,
                });
            }

            let mut inner_nodes = Vec::new();
            if let Some(body_blk) = body_entry {
                let inner = self.structure_loop_body(body_blk, header);
                inner_nodes.extend(inner);
            }

            if !header_nodes.is_empty() {
                let body_on_true = body_entry.is_some_and(|body| {
                    edges
                        .iter()
                        .any(|(target, kind)| *target == body && *kind == EdgeKind::ConditionalTrue)
                });
                let mut body_nodes = header_nodes;
                if body_on_true {
                    body_nodes.push(HirNode::If {
                        cond,
                        then_body: inner_nodes,
                        else_body: Some(vec![HirNode::Break]),
                    });
                } else {
                    body_nodes.push(HirNode::If {
                        cond,
                        then_body: vec![HirNode::Break],
                        else_body: Some(inner_nodes),
                    });
                }

                return Some(HirNode::While {
                    cond: SsaVarnode {
                        base: unlace_ir::Varnode::constant(1, 1),
                        version: 0,
                    },
                    body: body_nodes,
                });
            }

            Some(HirNode::While {
                cond,
                body: inner_nodes,
            })
        } else if let (true, Some(latch)) = (latch_has_cbranch, single_latch) {
            // Verify latch has back-edge to header and an exit edge.
            let latch_edges = self.func.cfg.edges_from(latch);
            let has_back_to_header = latch_edges.iter().any(|(tgt, _)| *tgt == header);
            let has_exit = latch_edges
                .iter()
                .any(|(tgt, _)| !self.synthetic.contains(tgt) && *tgt != header);

            if !has_back_to_header || !has_exit {
                let cond = SsaVarnode {
                    base: unlace_ir::Varnode::constant(1, 1),
                    version: 0,
                };
                self.emitted.insert(header);
                let mut body_nodes = Vec::new();
                self.emit_block_statements_inline(header, &mut body_nodes);
                let edges = self.func.cfg.edges_from(header);
                let non_back_succs: Vec<BlockId> = edges
                    .iter()
                    .filter(|(tgt, _)| !self.synthetic.contains(tgt) && *tgt != header)
                    .map(|(tgt, _)| *tgt)
                    .collect();
                for succ in non_back_succs {
                    if !self.emitted.contains(&succ) {
                        let inner = self.structure_loop_body(succ, header);
                        body_nodes.extend(inner);
                    }
                }
                return Some(HirNode::While {
                    cond,
                    body: body_nodes,
                });
            }

            let cond = self.find_cbranch_cond(latch);
            self.emitted.insert(header);

            let mut body_nodes = Vec::new();
            self.emit_block_statements_inline(header, &mut body_nodes);

            let edges = self.func.cfg.edges_from(header);
            let non_back_succs: Vec<BlockId> = edges
                .iter()
                .filter(|(tgt, _)| !self.synthetic.contains(tgt) && *tgt != header)
                .map(|(tgt, _)| *tgt)
                .collect();

            for succ in non_back_succs {
                if succ != latch && !self.emitted.contains(&succ) {
                    let inner = self.structure_loop_body(succ, header);
                    body_nodes.extend(inner);
                }
            }

            self.emit_block_statements_inline(latch, &mut body_nodes);

            Some(HirNode::DoWhile {
                body: body_nodes,
                cond,
            })
        } else {
            // Unstructured loop — emit as while(true) with body, relying on
            // goto/break for exits.
            let cond = SsaVarnode {
                base: unlace_ir::Varnode::constant(1, 1),
                version: 0,
            };

            self.emitted.insert(header);

            let mut body_nodes = Vec::new();
            self.emit_block_statements_inline(header, &mut body_nodes);

            let edges = self.func.cfg.edges_from(header);
            let non_back_succs: Vec<BlockId> = edges
                .iter()
                .filter(|(tgt, _)| !self.synthetic.contains(tgt) && *tgt != header)
                .map(|(tgt, _)| *tgt)
                .collect();

            for succ in non_back_succs {
                if !self.emitted.contains(&succ) {
                    let inner = self.structure_loop_body(succ, header);
                    body_nodes.extend(inner);
                }
            }

            Some(HirNode::While {
                cond,
                body: body_nodes,
            })
        }
    }

    /// Emit block statements without marking as emitted in the "label" sense,
    /// but do mark as emitted for dedup purposes.
    fn emit_block_statements_inline(&mut self, bid: BlockId, nodes: &mut Vec<HirNode>) {
        if self.emitted.contains(&bid) {
            return;
        }
        self.emitted.insert(bid);

        if self.goto_targets.contains(&bid) {
            self.alloc_label(bid);
        }
        if let Some(&label) = self.block_labels.get(&bid) {
            nodes.push(HirNode::Label(label));
        }

        let Some(block) = self.func.function.blocks.get(&bid) else {
            return;
        };

        for (i, insn) in block.insns.iter().enumerate() {
            if self.is_frame_setup(bid, i) {
                continue;
            }
            match insn.op {
                IrOp::Branch => {
                    if let Some(&target) = self.func.tail_call_map.get(&bid) {
                        nodes.push(HirNode::TailCall {
                            target,
                            args: self.tail_call_args(bid, i, insn),
                        });
                    }
                }
                IrOp::Cbranch | IrOp::Branchind => continue,
                IrOp::Return => {
                    let ret_val = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(0));
                    nodes.push(HirNode::Return(ret_val));
                }
                _ => nodes.push(HirNode::Statement(insn.clone())),
            }
        }
    }

    fn non_control_block_statements(&self, bid: BlockId) -> Vec<HirNode> {
        let Some(block) = self.func.function.blocks.get(&bid) else {
            return Vec::new();
        };
        block
            .insns
            .iter()
            .enumerate()
            .filter_map(|(i, insn)| {
                if self.is_frame_setup(bid, i) {
                    return None;
                }
                match insn.op {
                    IrOp::Cbranch | IrOp::Branch | IrOp::Branchind | IrOp::Return => None,
                    _ => Some(HirNode::Statement(insn.clone())),
                }
            })
            .collect()
    }

    fn loop_branch_nodes_for_target(
        &mut self,
        target: BlockId,
        header: BlockId,
        loop_blocks: &BTreeSet<BlockId>,
    ) -> Vec<HirNode> {
        if self.synthetic.contains(&target) || !loop_blocks.contains(&target) {
            let node = self.loop_exit_transfer_node(Some(target), header);
            struct_debug!(
                "loop-branch header={header:?} target={target:?} action={} reason=outside-loop",
                hir_node_kind(&node)
            );
            return vec![node];
        }
        if target == header {
            struct_debug!("loop-branch header={header:?} target={target:?} action=continue");
            return vec![HirNode::Continue];
        }
        struct_debug!("loop-branch header={header:?} target={target:?} action=structure-body");
        let nodes = self.structure_loop_body(target, header);
        trace_hir_counts(
            &format!("loop-branch header={header:?} target={target:?}"),
            &nodes,
        );
        nodes
    }

    fn loop_exit_transfer_node(&mut self, target: Option<BlockId>, header: BlockId) -> HirNode {
        let Some(target) = target else {
            return HirNode::Break;
        };
        if target == header {
            return HirNode::Continue;
        }
        if self.synthetic.contains(&target) || Some(target) == self.find_loop_exit(header) {
            return HirNode::Break;
        }
        let label = self.alloc_label(target);
        HirNode::Goto(label)
    }

    fn emit_latch_decision(&mut self, bid: BlockId, header: BlockId, nodes: &mut Vec<HirNode>) {
        if !self.block_has_cbranch(bid) {
            return;
        }
        let edges = self.func.cfg.edges_from(bid);
        let true_target = edges
            .iter()
            .find_map(|(target, kind)| (*kind == EdgeKind::ConditionalTrue).then_some(*target));
        let false_target = edges
            .iter()
            .find_map(|(target, kind)| (*kind == EdgeKind::ConditionalFalse).then_some(*target));

        let true_back = true_target == Some(header);
        let false_back = false_target == Some(header);
        if true_back == false_back {
            return;
        }

        let cond = self.find_cbranch_cond(bid);
        if true_back {
            nodes.push(HirNode::If {
                cond,
                then_body: vec![HirNode::Continue],
                else_body: Some(vec![self.loop_exit_transfer_node(false_target, header)]),
            });
        } else {
            nodes.push(HirNode::If {
                cond,
                then_body: vec![self.loop_exit_transfer_node(true_target, header)],
                else_body: Some(vec![HirNode::Continue]),
            });
        }
    }

    fn try_emit_emitted_latch_path(
        &mut self,
        bid: BlockId,
        header: BlockId,
        loop_blocks: &BTreeSet<BlockId>,
        nodes: &mut Vec<HirNode>,
    ) -> bool {
        if !loop_blocks.contains(&bid) {
            struct_trace!(
                "emitted-latch-path block={bid:?} header={header:?} action=skip reason=outside-loop"
            );
            return false;
        }

        let edges = self.loop_edges_from(bid, header, loop_blocks);
        let real_edges: Vec<(BlockId, EdgeKind)> = edges
            .iter()
            .copied()
            .filter(|(target, _)| !self.synthetic.contains(target))
            .collect();
        let direct_to_header = real_edges.len() == 1 && real_edges[0].0 == header;
        let known_back_edge = self.back_edges.contains(&(bid, header));

        if !direct_to_header && !known_back_edge {
            struct_trace!(
                "emitted-latch-path block={bid:?} header={header:?} action=skip reason=not-direct-latch real_edges={real_edges:?} known_back_edge={known_back_edge}"
            );
            return false;
        }

        let mut replay = self.non_control_block_statements(bid);
        let stmt_count = replay.len();
        replay.push(HirNode::Continue);
        struct_debug!(
            "emitted-latch-path block={bid:?} header={header:?} action=replay-continue stmts={stmt_count} real_edges={real_edges:?} known_back_edge={known_back_edge}"
        );
        trace_hir_counts(
            &format!("emitted-latch-path block={bid:?} header={header:?}"),
            &replay,
        );
        nodes.extend(replay);
        true
    }

    fn structure_loop_body(&mut self, start: BlockId, header: BlockId) -> Vec<HirNode> {
        let loop_blocks = self.collect_loop_blocks(header);
        self.structure_loop_body_inner(start, header, &loop_blocks)
    }

    fn structure_loop_branch_until(
        &mut self,
        start: BlockId,
        stop: Option<BlockId>,
        header: BlockId,
        loop_blocks: &BTreeSet<BlockId>,
    ) -> Vec<HirNode> {
        if self.synthetic.contains(&start) {
            let node = self.loop_exit_transfer_node(Some(start), header);
            struct_debug!(
                "loop-branch-until start={start:?} stop={stop:?} header={header:?} action={} reason=start-outside-loop",
                hir_node_kind(&node)
            );
            return vec![node];
        }
        if !loop_blocks.contains(&start) {
            if stop.is_some_and(|stop| stop != start) {
                if struct_trace_enabled() {
                    let dominated_by_header = dominates(&self.func.dom_tree, header, start);
                    let reaches_header = self.reaches_block(start, header);
                    let reaches_header_loop_edges =
                        self.reaches_block_in_loop(start, header, header, loop_blocks);
                    struct_debug!(
                        "loop-branch-until start={start:?} stop={stop:?} header={header:?} action=structure-outside-branch reason=known-stop dominated_by_header={dominated_by_header} reaches_header={reaches_header} reaches_header_loop_edges={reaches_header_loop_edges}"
                    );
                }
                let nodes = self.structure_until(start, stop);
                trace_hir_counts(
                    &format!(
                        "loop-branch-until outside start={start:?} stop={stop:?} header={header:?}"
                    ),
                    &nodes,
                );
                return nodes;
            }

            let node = self.loop_exit_transfer_node(Some(start), header);
            struct_debug!(
                "loop-branch-until start={start:?} stop={stop:?} header={header:?} action={} reason=start-outside-loop",
                hir_node_kind(&node)
            );
            return vec![node];
        }
        if start == header {
            struct_debug!(
                "loop-branch-until start={start:?} stop={stop:?} header={header:?} action=continue"
            );
            return vec![HirNode::Continue];
        }
        self.structure_until_in_loop(start, stop, header, loop_blocks)
    }

    fn structure_until_in_loop(
        &mut self,
        start: BlockId,
        stop: Option<BlockId>,
        header: BlockId,
        loop_blocks: &BTreeSet<BlockId>,
    ) -> Vec<HirNode> {
        let mut nodes = Vec::new();
        let mut current = Some(start);
        struct_debug!("until-loop start={start:?} stop={stop:?} header={header:?}");

        while let Some(bid) = current {
            if !self.check_deadline() {
                break;
            }
            struct_debug!("until-loop current={bid:?} stop={stop:?} header={header:?}");
            trace_block_edges(self.func, bid, "until-loop");

            if Some(bid) == stop {
                if self.synthetic.contains(&bid) || !loop_blocks.contains(&bid) {
                    let node = self.loop_exit_transfer_node(Some(bid), header);
                    struct_debug!(
                        "until-loop stop-is-exit current={bid:?} header={header:?} action={}",
                        hir_node_kind(&node)
                    );
                    nodes.push(node);
                } else if struct_trace_enabled() {
                    let is_goto_target = self.goto_targets.contains(&bid);
                    let label = self.block_labels.get(&bid).copied();
                    struct_debug!(
                        "until-loop stop-hit current={bid:?} header={header:?} goto_target={is_goto_target} label={label:?} in_loop=true synthetic=false"
                    );
                }
                break;
            }

            if self.synthetic.contains(&bid) || !loop_blocks.contains(&bid) {
                let node = self.loop_exit_transfer_node(Some(bid), header);
                struct_debug!(
                    "until-loop exit-transfer current={bid:?} header={header:?} action={}",
                    hir_node_kind(&node)
                );
                nodes.push(node);
                break;
            }

            if bid == header {
                struct_debug!(
                    "until-loop back-to-header current={bid:?} header={header:?} action=continue"
                );
                nodes.push(HirNode::Continue);
                break;
            }

            if self.emitted.contains(&bid) {
                if self.try_emit_emitted_latch_path(bid, header, loop_blocks, &mut nodes) {
                    break;
                } else if self.goto_targets.contains(&bid) {
                    let label = self.alloc_label(bid);
                    nodes.push(HirNode::Goto(label));
                    struct_debug!("until-loop emitted-target goto block={bid:?} label={label:?}");
                } else {
                    struct_debug!("until-loop stop already-emitted={bid:?} header={header:?}");
                }
                break;
            }

            if bid != header && self.loop_headers.contains(&bid) {
                if self.loop_has_multiple_exits(bid) {
                    if struct_trace_enabled() {
                        let nested_blocks = self.collect_loop_blocks(bid);
                        let exits = self.loop_exit_targets(&nested_blocks);
                        struct_debug!(
                            "until-loop nested-loop-skip-multiexit bid={bid:?} outer_header={header:?} exits={exits:?}"
                        );
                    }
                } else if let Some(loop_node) = self.try_structure_loop(bid) {
                    trace_hir_counts("until-loop-nested-loop", std::slice::from_ref(&loop_node));
                    nodes.push(loop_node);
                    current = self.find_loop_exit(bid);
                    struct_debug!("until-loop nested-loop bid={bid:?} next={current:?}");
                    continue;
                }
            }

            if let Some((switch_node, join)) =
                self.try_structure_switch_in(bid, Some((header, loop_blocks)))
            {
                trace_hir_counts("until-loop-switch-node", std::slice::from_ref(&switch_node));
                nodes.push(switch_node);
                current = join;
                struct_debug!("until-loop switch bid={bid:?} header={header:?} join={current:?}");
                continue;
            }

            if let Some((if_node, join)) = self.try_structure_if_in_loop(bid, header, loop_blocks) {
                trace_hir_counts("until-loop-if-node", std::slice::from_ref(&if_node));
                nodes.push(if_node);
                current = join;
                struct_debug!("until-loop if bid={bid:?} header={header:?} join={current:?}");
                continue;
            }

            self.emit_block_statements(bid, &mut nodes);
            let edges = self.loop_edges_from(bid, header, loop_blocks);
            let real_edges: Vec<BlockId> = edges
                .iter()
                .filter(|(tgt, _)| !self.synthetic.contains(tgt))
                .map(|(tgt, _)| *tgt)
                .collect();
            current = (real_edges.len() == 1).then_some(real_edges[0]);
            struct_debug!(
                "until-loop linear bid={bid:?} header={header:?} next={current:?} real_edges={real_edges:?}"
            );
        }

        trace_hir_counts(
            &format!("until-loop done start={start:?} stop={stop:?} header={header:?}"),
            &nodes,
        );
        nodes
    }

    fn tail_call_args(&self, bid: BlockId, insn_idx: usize, insn: &IrInsn) -> Vec<HirCallArg> {
        insn.inputs
            .iter()
            .enumerate()
            .skip(1)
            .map(|(input_idx, operand)| HirCallArg {
                operand: *operand,
                ssa: self
                    .func
                    .var_map
                    .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
                    .copied(),
            })
            .collect()
    }

    fn collect_loop_blocks(&self, header: BlockId) -> BTreeSet<BlockId> {
        let _span = linkscope::phase("struct.collect-loop-blocks");
        if let Some(cached) = self.loop_blocks_cache.borrow().get(&header).cloned() {
            linkscope::record_items("struct.collect-loop-blocks.cache-hit", 1);
            return cached;
        }
        linkscope::record_items("struct.collect-loop-blocks.cache-miss", 1);
        let latches: Vec<BlockId> = self
            .back_edges
            .iter()
            .filter(|(_l, h)| *h == header)
            .map(|(l, _)| *l)
            .collect();

        let mut loop_blocks = BTreeSet::from([header]);
        let mut worklist: Vec<BlockId> = latches.clone();
        for &l in &latches {
            loop_blocks.insert(l);
        }
        while let Some(bid) = worklist.pop() {
            if bid == header {
                continue;
            }
            for &src in self.func.function.blocks.keys() {
                if loop_blocks.contains(&src) {
                    continue;
                }
                let edges = self.loop_edges_from(src, header, &loop_blocks);
                if edges.iter().any(|(tgt, _)| *tgt == bid)
                    && dominates(&self.func.dom_tree, header, src)
                {
                    loop_blocks.insert(src);
                    worklist.push(src);
                    struct_debug!(
                        "loop-block-add header={header:?} block={src:?} via={bid:?} edges={edges:?}"
                    );
                }
            }
        }

        struct_trace!(
            "loop-blocks-detail header={header:?} latches={latches:?} final={loop_blocks:?}"
        );

        self.loop_blocks_cache
            .borrow_mut()
            .insert(header, loop_blocks.clone());
        loop_blocks
    }

    fn reaches_block(&self, start: BlockId, target: BlockId) -> bool {
        if start == target {
            return true;
        }

        let mut visited = BTreeSet::new();
        let mut worklist = vec![start];

        while let Some(bid) = worklist.pop() {
            if self.synthetic.contains(&bid) || !visited.insert(bid) {
                continue;
            }

            for (succ, _) in self.func.cfg.edges_from(bid) {
                if succ == target {
                    return true;
                }
                if !visited.contains(&succ) {
                    worklist.push(succ);
                }
            }
        }

        false
    }

    fn reaches_block_in_loop(
        &self,
        start: BlockId,
        target: BlockId,
        header: BlockId,
        loop_blocks: &BTreeSet<BlockId>,
    ) -> bool {
        if start == target {
            return true;
        }

        let mut visited = BTreeSet::new();
        let mut worklist = vec![start];

        while let Some(bid) = worklist.pop() {
            if self.synthetic.contains(&bid) || !visited.insert(bid) {
                continue;
            }

            for (succ, _) in self.loop_edges_from(bid, header, loop_blocks) {
                if succ == target {
                    struct_trace!(
                        "loop-reach start={start:?} target={target:?} header={header:?} hit_from={bid:?}"
                    );
                    return true;
                }
                if !visited.contains(&succ) {
                    worklist.push(succ);
                }
            }
        }

        struct_trace!(
            "loop-reach start={start:?} target={target:?} header={header:?} result=false visited={visited:?}"
        );
        false
    }

    fn loop_exit_targets(&self, loop_blocks: &BTreeSet<BlockId>) -> BTreeSet<BlockId> {
        let mut exits = BTreeSet::new();
        for &bid in loop_blocks {
            for (target, _) in self.func.cfg.edges_from(bid) {
                if !self.synthetic.contains(&target) && !loop_blocks.contains(&target) {
                    exits.insert(target);
                }
            }
        }
        exits
    }

    fn loop_has_multiple_exits(&self, header: BlockId) -> bool {
        let loop_blocks = self.collect_loop_blocks(header);
        self.loop_exit_targets(&loop_blocks).len() > 1
    }

    fn structure_loop_body_inner(
        &mut self,
        start: BlockId,
        header: BlockId,
        loop_blocks: &BTreeSet<BlockId>,
    ) -> Vec<HirNode> {
        let mut nodes = Vec::new();
        let mut current = Some(start);
        struct_debug!(
            "loop-body start={start:?} header={header:?} loop_blocks={}",
            loop_blocks.len()
        );
        struct_trace!("loop-body start={start:?} header={header:?} loop_blocks={loop_blocks:?}");

        while let Some(bid) = current {
            if !self.check_deadline() {
                break;
            }
            struct_debug!("loop-body current={bid:?} header={header:?}");
            trace_block_edges(self.func, bid, "loop-body");
            if self.synthetic.contains(&bid) {
                struct_debug!("loop-body stop synthetic={bid:?}");
                break;
            }

            if !loop_blocks.contains(&bid) {
                let node = self.loop_exit_transfer_node(Some(bid), header);
                struct_debug!(
                    "loop-body exit-transfer current={bid:?} header={header:?} action={}",
                    hir_node_kind(&node)
                );
                nodes.push(node);
                break;
            }

            if self.emitted.contains(&bid) {
                struct_debug!("loop-body stop already-emitted current={bid:?} header={header:?}");
                break;
            }

            let is_back_to_header = self.back_edges.contains(&(bid, header));
            if is_back_to_header && bid == start {
                struct_debug!("loop-body latch-at-start current={bid:?} header={header:?}");
                self.emit_block_statements(bid, &mut nodes);
                self.emit_latch_decision(bid, header, &mut nodes);
                break;
            }

            if bid != header && self.loop_headers.contains(&bid) {
                if self.loop_has_multiple_exits(bid) {
                    if struct_trace_enabled() {
                        let nested_blocks = self.collect_loop_blocks(bid);
                        let exits = self.loop_exit_targets(&nested_blocks);
                        struct_debug!(
                            "loop-body nested-loop-skip-multiexit current={bid:?} outer_header={header:?} exits={exits:?}"
                        );
                    }
                } else if let Some(loop_node) = self.try_structure_loop(bid) {
                    struct_debug!("loop-body nested-loop current={bid:?} outer_header={header:?}");
                    trace_hir_counts("loop-body-nested-loop", std::slice::from_ref(&loop_node));
                    nodes.push(loop_node);
                    current = self.find_loop_exit(bid);
                    struct_debug!(
                        "loop-body nested-loop-exit current={bid:?} outer_header={header:?} next={current:?}"
                    );
                    continue;
                }
            }

            if let Some((switch_node, join)) =
                self.try_structure_switch_in(bid, Some((header, loop_blocks)))
            {
                struct_debug!("loop-body switch current={bid:?} header={header:?} join={join:?}");
                nodes.push(switch_node);
                current = join;
                continue;
            }

            if let Some((if_node, join)) = self.try_structure_if_in_loop(bid, header, loop_blocks) {
                struct_debug!("loop-body if current={bid:?} header={header:?} join={join:?}");
                trace_hir_counts("loop-body-if", std::slice::from_ref(&if_node));
                nodes.push(if_node);
                current = join;
                continue;
            }

            self.emit_block_statements(bid, &mut nodes);

            let edges = self.loop_edges_from(bid, header, loop_blocks);
            let non_back_succs: Vec<BlockId> = edges
                .iter()
                .filter(|(tgt, _)| {
                    !self.synthetic.contains(tgt) && !self.back_edges.contains(&(bid, *tgt))
                })
                .map(|(tgt, _)| *tgt)
                .collect();

            current = non_back_succs.first().copied();
            struct_debug!(
                "loop-body linear current={bid:?} header={header:?} next={current:?} non_back_succs={non_back_succs:?}"
            );
        }

        trace_hir_counts(
            &format!("loop-body done start={start:?} header={header:?}"),
            &nodes,
        );
        nodes
    }

    fn structure_until(&mut self, start: BlockId, stop: Option<BlockId>) -> Vec<HirNode> {
        let mut nodes = Vec::new();
        let mut current = Some(start);
        struct_debug!("until start={start:?} stop={stop:?}");

        while let Some(bid) = current {
            if !self.check_deadline() {
                break;
            }
            struct_debug!("until current={bid:?} stop={stop:?}");
            trace_block_edges(self.func, bid, "until");
            if Some(bid) == stop {
                if struct_trace_enabled() {
                    let is_goto_target = self.goto_targets.contains(&bid);
                    let label = self.block_labels.get(&bid).copied();
                    let preds: Vec<BlockId> = self
                        .func
                        .cfg
                        .edges_to(bid)
                        .into_iter()
                        .map(|(src, _)| src)
                        .filter(|src| !self.synthetic.contains(src))
                        .collect();
                    struct_debug!(
                        "until stop-hit current={bid:?} goto_target={is_goto_target} label={label:?} preds={preds:?}"
                    );
                }
                break;
            }
            if self.synthetic.contains(&bid) {
                struct_debug!("until stop synthetic={bid:?}");
                break;
            }
            if self.emitted.contains(&bid) {
                // Already-emitted target: candidate `goto` site. Only emit
                // a goto when this block was pre-flagged as a goto target
                // (irreducible CFG region: 2+ preds, not a loop header).
                // For loop headers / structured joins, the existing
                // structurer logic handles control transfer via while/break.
                if self.goto_targets.contains(&bid) {
                    let label = self.alloc_label(bid);
                    nodes.push(HirNode::Goto(label));
                    struct_debug!("until emitted-target goto block={bid:?} label={label:?}");
                } else {
                    struct_debug!("until stop already-emitted={bid:?}");
                }
                break;
            }

            // Nested loops.
            if self.loop_headers.contains(&bid)
                && !self.emitted.contains(&bid)
                && let Some(loop_node) = self.try_structure_loop(bid)
            {
                trace_hir_counts("until-loop-node", std::slice::from_ref(&loop_node));
                nodes.push(loop_node);
                current = self.find_loop_exit(bid);
                struct_debug!("until nested-loop bid={bid:?} next={current:?}");
                continue;
            }

            // Nested switch.
            if let Some((switch_node, join)) = self.try_structure_switch(bid) {
                trace_hir_counts("until-switch-node", std::slice::from_ref(&switch_node));
                nodes.push(switch_node);
                current = join;
                struct_debug!("until switch bid={bid:?} join={current:?}");
                continue;
            }

            // Nested if/else.
            if let Some((if_node, join)) = self.try_structure_if(bid) {
                trace_hir_counts("until-if-node", std::slice::from_ref(&if_node));
                nodes.push(if_node);
                current = join;
                struct_debug!("until if bid={bid:?} join={current:?}");
                continue;
            }

            self.emit_block_statements(bid, &mut nodes);
            current = self.single_successor(bid);
            struct_debug!("until linear bid={bid:?} next={current:?}");
        }

        trace_hir_counts(&format!("until done start={start:?} stop={stop:?}"), &nodes);
        nodes
    }

    fn single_successor(&self, bid: BlockId) -> Option<BlockId> {
        let edges = self.func.cfg.edges_from(bid);
        let real_edges: Vec<BlockId> = edges
            .iter()
            .filter(|(tgt, _)| !self.synthetic.contains(tgt))
            .map(|(tgt, _)| *tgt)
            .collect();

        if real_edges.len() == 1 {
            Some(real_edges[0])
        } else {
            None
        }
    }

    fn block_has_cbranch(&self, bid: BlockId) -> bool {
        self.func
            .function
            .blocks
            .get(&bid)
            .and_then(|b| b.insns.last())
            .is_some_and(|insn| insn.op == IrOp::Cbranch)
    }

    /// Returns true when the header block has no CBRANCH instruction but the
    /// CFG still retains conditional edges (ConditionalTrue / ConditionalFalse).
    /// This happens when a CBRANCH's condition was folded to a constant by SCCP
    /// and the instruction was subsequently replaced by Copy then DCE'd, but
    /// the CFG edges were not pruned.  The loop is still structurally valid.
    fn header_has_conditional_edges(&self, bid: BlockId) -> bool {
        let edges = self.func.cfg.edges_from(bid);
        let has_cond_true = edges
            .iter()
            .any(|(_, kind)| *kind == EdgeKind::ConditionalTrue);
        let has_cond_false = edges
            .iter()
            .any(|(_, kind)| *kind == EdgeKind::ConditionalFalse);
        has_cond_true && has_cond_false
    }

    fn find_cbranch_cond(&self, bid: BlockId) -> SsaVarnode {
        // The CBRANCH condition is typically in input slot 1.
        // Try to resolve it from the var_map; fall back to a synthetic varnode.
        if let Some(sv) =
            self.func
                .var_map
                .get(&(bid, self.cbranch_index(bid), VarnodeSlot::Input(1)))
        {
            return *sv;
        }
        if let Some(sv) =
            self.func
                .var_map
                .get(&(bid, self.cbranch_index(bid), VarnodeSlot::Input(0)))
        {
            return *sv;
        }
        // Fallback: when the CBRANCH instruction is missing (optimized away)
        // but the header still has a phi with a back-edge input, use that phi's
        // SSA output as a synthetic loop condition. This preserves the `while`
        // structure even when the branch was folded by SCCP.
        if let Some(phis) = self.func.phi_map.get(&bid) {
            for phi in phis {
                if phi.inputs.iter().any(|(pred, _)| *pred == bid) {
                    return phi.output;
                }
            }
        }
        // Final fallback: synthetic non-constant condition so the while loop
        // is emitted rather than collapsed.
        SsaVarnode {
            base: unlace_ir::Varnode::reg(0xFFFF_DEAD, 1),
            version: 0,
        }
    }

    fn cbranch_index(&self, bid: BlockId) -> usize {
        self.func
            .function
            .blocks
            .get(&bid)
            .map(|b| {
                b.insns
                    .iter()
                    .enumerate()
                    .rev()
                    .find(|(_, insn)| insn.op == IrOp::Cbranch)
                    .map_or(0, |(i, _)| i)
            })
            .unwrap_or(0)
    }

    fn resolve_ssa_varnode(
        &self,
        bid: BlockId,
        insn_idx: usize,
        slot: VarnodeSlot,
    ) -> Option<SsaVarnode> {
        if let Some(sv) = self
            .func
            .var_map
            .get(&(bid, insn_idx, slot.clone()))
            .copied()
        {
            return Some(sv);
        }
        let VarnodeSlot::Input(input_idx) = slot else {
            return None;
        };
        let vn = self
            .func
            .function
            .blocks
            .get(&bid)?
            .insns
            .get(insn_idx)?
            .inputs
            .get(input_idx)?;
        (vn.space == SpaceId::Const).then_some(SsaVarnode {
            base: *vn,
            version: 0,
        })
    }

    /// Classify loop edges: which successor goes into the loop body, which exits.
    fn classify_loop_edges(
        &self,
        header: BlockId,
        edges: &[(BlockId, EdgeKind)],
    ) -> (Option<BlockId>, Option<BlockId>) {
        let mut body_entry = None;
        let mut exit = None;
        let loop_blocks = self.collect_loop_blocks(header);

        for (tgt, _kind) in edges {
            if self.synthetic.contains(tgt) {
                continue;
            }
            let in_loop = *tgt == header || loop_blocks.contains(tgt);
            if in_loop {
                if body_entry.is_none() {
                    body_entry = Some(*tgt);
                }
                continue;
            }
            if exit.is_none() {
                exit = Some(*tgt);
            }
        }

        if body_entry.is_some() || exit.is_some() {
            return (body_entry, exit);
        }

        for (tgt, kind) in edges {
            if self.synthetic.contains(tgt) {
                continue;
            }

            // For a while loop, the "true" branch typically enters the body
            // and the "false" branch exits. But we verify by checking if
            // the target is dominated by the header and is reachable from the header
            // through non-exit paths.
            match kind {
                EdgeKind::ConditionalTrue => {
                    if dominates(&self.func.dom_tree, header, *tgt) || *tgt == header {
                        body_entry = Some(*tgt);
                    } else {
                        exit = Some(*tgt);
                    }
                }
                EdgeKind::ConditionalFalse => {
                    if body_entry.is_none()
                        && (dominates(&self.func.dom_tree, header, *tgt) || *tgt == header)
                    {
                        body_entry = Some(*tgt);
                    } else {
                        exit = Some(*tgt);
                    }
                }
                _ => {}
            }
        }

        // If we couldn't classify, treat first non-header successor as body.
        if body_entry.is_none() {
            for (tgt, _) in edges {
                if !self.synthetic.contains(tgt) && *tgt != header {
                    body_entry = Some(*tgt);
                    break;
                }
            }
        }

        (body_entry, exit)
    }

    fn find_loop_exit(&self, header: BlockId) -> Option<BlockId> {
        let edges = self.func.cfg.edges_from(header);
        let (_body, classified_exit) = self.classify_loop_edges(header, &edges);
        if classified_exit.is_some() {
            struct_debug!("loop-exit header={header:?} classified={classified_exit:?}");
            return classified_exit;
        }

        let loop_blocks = self.collect_loop_blocks(header);
        for &bid in &loop_blocks {
            let edges = self.loop_edges_from(bid, header, &loop_blocks);
            for (tgt, _kind) in edges {
                if self.synthetic.contains(&tgt) || loop_blocks.contains(&tgt) {
                    continue;
                }
                struct_debug!("loop-exit header={header:?} from={bid:?} target={tgt:?}");
                return Some(tgt);
            }
        }

        // For do-while: exit is the latch's non-header successor.
        // Header dominates everything so the domination check above misses it.
        let latches: Vec<BlockId> = self
            .back_edges
            .iter()
            .filter(|(_latch, hdr)| *hdr == header)
            .map(|(latch, _)| *latch)
            .collect();

        for latch in &latches {
            let latch_edges = self.loop_edges_from(*latch, header, &loop_blocks);
            for (tgt, _kind) in &latch_edges {
                if self.synthetic.contains(tgt) {
                    continue;
                }
                if *tgt != header {
                    return Some(*tgt);
                }
            }
        }

        None
    }

    fn find_join_point(
        &self,
        cond_block: BlockId,
        true_blk: BlockId,
        false_blk: BlockId,
    ) -> Option<BlockId> {
        let postdom_join = self.find_join_point_postdom(cond_block);
        let bfs_join = self.find_join_point_bfs(true_blk, false_blk);
        struct_debug!(
            "join-candidates cond={cond_block:?} true={true_blk:?} false={false_blk:?} postdom={postdom_join:?} bfs={bfs_join:?}"
        );

        // Prefer a shared loop header over a post-loop join. When both
        // branches converge into a loop entry (peel-then-loop pattern from
        // -O2 vectorized reductions like array_max/array_min), the immediate
        // post-dominator is the block AFTER the loop, so emitting the
        // if-then-else with that join consumes the loop inside the
        // then-branch via `try_structure_loop`. Using the loop header as the
        // join instead lets both branches end at the loop header, and the
        // outer `structure_until` emits the loop exactly once after the
        // if-then-else.
        if let Some(bfs) = bfs_join
            && self.loop_headers.contains(&bfs)
            && Some(bfs) != postdom_join
        {
            struct_debug!(
                "join cond={cond_block:?} true={true_blk:?} false={false_blk:?} source=loop-header-bfs join={bfs:?} postdom_was={postdom_join:?}"
            );
            return Some(bfs);
        }

        if let Some(join) = postdom_join {
            struct_debug!(
                "join cond={cond_block:?} true={true_blk:?} false={false_blk:?} source=postdom join={join:?}"
            );
            return Some(join);
        }
        struct_debug!(
            "join cond={cond_block:?} true={true_blk:?} false={false_blk:?} source=bfs join={bfs_join:?}"
        );
        bfs_join
    }

    fn find_join_point_postdom(&self, cond_block: BlockId) -> Option<BlockId> {
        let pdom = self.func.post_dom_tree.as_ref()?;
        let ipdom = pdom.idom(cond_block)?;

        if self.synthetic.contains(&ipdom) {
            return None;
        }

        Some(ipdom)
    }

    fn find_join_point_bfs(&self, true_blk: BlockId, false_blk: BlockId) -> Option<BlockId> {
        // Collect all blocks reachable from true_blk (stopping at already-emitted).
        let true_reachable = self.collect_reachable(true_blk, 16);
        let false_reachable = self.collect_reachable(false_blk, 16);
        struct_trace!(
            "join-bfs true={true_blk:?} reachable={true_reachable:?} false={false_blk:?} reachable={false_reachable:?}"
        );

        // Find the first block reachable from both.
        for bid in &true_reachable {
            if false_reachable.contains(bid) {
                return Some(*bid);
            }
        }

        // Check if one branch immediately reaches the other branch's start.
        if true_reachable.contains(&false_blk) {
            return Some(false_blk);
        }
        if false_reachable.contains(&true_blk) {
            return Some(true_blk);
        }

        None
    }

    fn collect_reachable(&self, start: BlockId, max_depth: usize) -> BTreeSet<BlockId> {
        let mut visited = BTreeSet::new();
        let mut worklist = vec![(start, 0usize)];

        while let Some((bid, depth)) = worklist.pop() {
            if depth > max_depth || self.synthetic.contains(&bid) {
                continue;
            }
            if !visited.insert(bid) {
                continue;
            }

            let edges = self.func.cfg.edges_from(bid);
            for (tgt, _) in edges {
                if !visited.contains(&tgt) {
                    worklist.push((tgt, depth + 1));
                }
            }
        }

        visited
    }

    fn reachable_blocks_from_entry(&self) -> BTreeSet<BlockId> {
        let mut visited = BTreeSet::new();
        let mut worklist = vec![self.func.function.entry];

        while let Some(bid) = worklist.pop() {
            if self.synthetic.contains(&bid) || !visited.insert(bid) {
                continue;
            }
            for (target, _) in self.func.cfg.edges_from(bid) {
                if !visited.contains(&target) {
                    worklist.push(target);
                }
            }
        }

        visited
    }
}

/// Returns true if `a` dominates `b` in the dominator tree.
fn dominates(dom_tree: &unlace_ir::ssa::DominatorTree, a: BlockId, b: BlockId) -> bool {
    if a == b {
        return true;
    }
    let mut current = b;
    while let Some(parent) = dom_tree.idom(current) {
        if parent == a {
            return true;
        }
        if parent == current {
            break; // root reached
        }
        current = parent;
    }
    false
}

fn is_scale_value(v: u64) -> bool {
    matches!(v, 1 | 2 | 4 | 8)
}

/// Strip `Label` nodes whose `LabelId` has no corresponding `Goto` in the
/// HIR tree. The structurer eagerly emits a label for every `goto_targets`
/// block, but only blocks actually reached via an irreducible path get a
/// matching `Goto`. Unreferenced labels would otherwise produce dead
/// `LABEL_N:` lines in the C output.
/// Whether control cannot fall off the end of `nodes`.
fn ends_in_jump(nodes: &[HirNode]) -> bool {
    match nodes.last() {
        Some(
            HirNode::Return(_)
            | HirNode::Goto(_)
            | HirNode::TailCall { .. }
            | HirNode::Break
            | HirNode::Continue,
        ) => true,
        Some(HirNode::Block(children)) => ends_in_jump(children),
        Some(HirNode::If {
            then_body,
            else_body: Some(else_body),
            ..
        }) => ends_in_jump(then_body) && ends_in_jump(else_body),
        _ => false,
    }
}

/// Turn the `break`s of a switch case body that would leave the enclosing
/// loop into `goto label`: inside the switch a `break` only leaves the
/// switch. Nested loops and switches keep their own `break`s.
fn break_to_goto(nodes: &mut [HirNode], label: LabelId) {
    for node in nodes {
        match node {
            HirNode::Break => *node = HirNode::Goto(label),
            HirNode::Block(children) => break_to_goto(children, label),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                break_to_goto(then_body, label);
                if let Some(else_body) = else_body {
                    break_to_goto(else_body, label);
                }
            }
            HirNode::Commented { inner, .. } => break_to_goto(std::slice::from_mut(inner), label),
            _ => {}
        }
    }
}

fn strip_unused_labels(nodes: &mut Vec<HirNode>) {
    let mut used = BTreeSet::new();
    collect_used_labels(nodes, &mut used);
    remove_labels_not_in(nodes, &used);
}

fn collect_used_labels(nodes: &[HirNode], used: &mut BTreeSet<LabelId>) {
    for n in nodes {
        match n {
            HirNode::Goto(label) => {
                used.insert(*label);
            }
            HirNode::Block(inner) => collect_used_labels(inner, used),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_used_labels(then_body, used);
                if let Some(eb) = else_body {
                    collect_used_labels(eb, used);
                }
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                collect_used_labels(body, used);
            }
            HirNode::For { body, .. } => collect_used_labels(body, used),
            HirNode::Switch { cases, default, .. } => {
                for (_, b, _) in cases {
                    collect_used_labels(b, used);
                }
                if let Some(d) = default {
                    collect_used_labels(d, used);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collect_used_labels(try_body, used);
                for (_ty, body) in catch_arms {
                    collect_used_labels(body, used);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_used_labels(try_body, used);
                collect_used_labels(finally_body, used);
            }
            _ => {}
        }
    }
}

fn remove_labels_not_in(nodes: &mut Vec<HirNode>, used: &BTreeSet<LabelId>) {
    nodes.retain(|n| match n {
        HirNode::Label(label) => used.contains(label),
        _ => true,
    });
    for n in nodes.iter_mut() {
        match n {
            HirNode::Block(inner) => remove_labels_not_in(inner, used),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                remove_labels_not_in(then_body, used);
                if let Some(eb) = else_body {
                    remove_labels_not_in(eb, used);
                }
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                remove_labels_not_in(body, used);
            }
            HirNode::For { body, .. } => remove_labels_not_in(body, used),
            HirNode::Switch { cases, default, .. } => {
                for (_, b, _) in cases {
                    remove_labels_not_in(b, used);
                }
                if let Some(d) = default {
                    remove_labels_not_in(d, used);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                remove_labels_not_in(try_body, used);
                for (_ty, body) in catch_arms {
                    remove_labels_not_in(body, used);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                remove_labels_not_in(try_body, used);
                remove_labels_not_in(finally_body, used);
            }
            _ => {}
        }
    }
}

/// t167: collapse `GuardedIf { then=[v=a], else=[v=b] }` into a
/// [`HirNode::GuardedTernary`] (`v = cond_<cc> ? a : b;`) when both arms
/// are exactly one `Copy` to the same output varnode and the arms have
/// no side effects.
///
/// "No side effects" is enforced by requiring `IrOp::Copy` (no Load,
/// Store, Call, or Callother). The structurer guarantees both branches
/// are single statements via the input pattern; we additionally check
/// that each statement is a plain `Statement(IrInsn)` (rejecting nested
/// blocks / commented wrappers / further if-nests).
///
/// Recurses into all child node bodies so nested IT-block ternaries fold
/// too. Idempotent.
fn fold_guarded_ternary(nodes: &mut Vec<HirNode>) {
    for node in nodes.iter_mut() {
        fold_guarded_ternary_in_children(node);
    }
    let len = nodes.len();
    let mut taken = Vec::with_capacity(len);
    for node in std::mem::take(nodes) {
        match node {
            HirNode::GuardedIf {
                cond_code,
                then_body,
                else_body,
            } => match try_fold_guarded_ternary(cond_code, &then_body, &else_body) {
                Some(folded) => taken.push(folded),
                None => taken.push(HirNode::GuardedIf {
                    cond_code,
                    then_body,
                    else_body,
                }),
            },
            other => taken.push(other),
        }
    }
    *nodes = taken;
}

fn fold_guarded_ternary_in_children(node: &mut HirNode) {
    match node {
        HirNode::Block(children) => fold_guarded_ternary(children),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            fold_guarded_ternary(then_body);
            if let Some(eb) = else_body {
                fold_guarded_ternary(eb);
            }
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
            fold_guarded_ternary(body);
        }
        HirNode::For { body, .. } => fold_guarded_ternary(body),
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                fold_guarded_ternary(body);
            }
            if let Some(def) = default {
                fold_guarded_ternary(def);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            fold_guarded_ternary(try_body);
            for (_ty, body) in catch_arms {
                fold_guarded_ternary(body);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            fold_guarded_ternary(try_body);
            fold_guarded_ternary(finally_body);
        }
        HirNode::Commented { inner, .. } => fold_guarded_ternary_in_children(inner),
        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => {
            fold_guarded_ternary(then_body);
            fold_guarded_ternary(else_body);
        }
        HirNode::IfCmp {
            then_body,
            else_body,
            ..
        } => {
            fold_guarded_ternary(then_body);
            if let Some(eb) = else_body {
                fold_guarded_ternary(eb);
            }
        }
        HirNode::Statement(_)
        | HirNode::Return(_)
        | HirNode::Goto(_)
        | HirNode::Label(_)
        | HirNode::Ternary { .. }
        | HirNode::GuardedTernary { .. }
        | HirNode::CselTernary { .. }
        | HirNode::TailCall { .. }
        | HirNode::Continue
        | HirNode::Break
        | HirNode::ObjcBlock { .. }
        | HirNode::Asm { .. } => {}
    }
}

fn try_fold_guarded_ternary(
    cond_code: u8,
    then_body: &[HirNode],
    else_body: &[HirNode],
) -> Option<HirNode> {
    let then_insn = match then_body {
        [HirNode::Statement(insn)] => insn,
        _ => return None,
    };
    let else_insn = match else_body {
        [HirNode::Statement(insn)] => insn,
        _ => return None,
    };

    // Both arms must be plain Copy ops — no Load/Store/Call/Callother
    // (any of those carries observable side effects and selecting on a
    // predicate would alter program semantics).
    if then_insn.op != IrOp::Copy || else_insn.op != IrOp::Copy {
        return None;
    }

    let then_out = then_insn.output?;
    let else_out = else_insn.output?;
    if then_out != else_out {
        return None;
    }

    // The `guard` field on the inner IrInsns is the per-insn IT-cond the
    // lifter stamped (the same cond that was hoisted onto the surrounding
    // GuardedIf); we don't need to re-check it here. We do strip it from
    // the cloned insns so the rendered ternary expression doesn't carry
    // a stale predicate.
    let mut then_insn = then_insn.clone();
    let mut else_insn = else_insn.clone();
    then_insn.guard = None;
    else_insn.guard = None;

    Some(HirNode::GuardedTernary {
        cond_code,
        then_insn,
        else_insn,
        output: then_out,
    })
}

// ---------------------------------------------------------------------------
// t180: AArch64 CMP+CSEL → CselTernary fold.
//
// The AArch64 lifter emits CSEL as
//
//   Callother(const(CALLOTHER_AARCH64_CSEL=0x330, 8),
//             cond_varnode,
//             Rn,                       // true_val
//             Rm,                       // false_val
//             const(cc_u8, 1))          // capstone ARM64_CC_* (1..=14)
//   → Rd
//
// preceded by a CMP/SUBS which lifts to `IntSub` plus NZCV flag writes.
// This pass walks a body and, whenever it finds a CSEL Callother whose
// preceding non-control-flow statement is the IntSub of a CMP/SUBS,
// rewrites the Callother into a `HirNode::CselTernary` carrying the
// explicit comparison opcode (derived from the cc) and the IntSub's
// operands as the comparison LHS/RHS.
//
// Both the IntSub and any trailing flag writes are left intact; downstream
// dead-code elimination prunes the now-unused NZCV writes when nothing else
// reads them. Leaving them avoids accidental data-loss if a later CSEL/Bcc
// in the same block reads the same flag state.
// ---------------------------------------------------------------------------

/// Canonical AArch64 CSEL callother tag — kept in lockstep with
/// `unlace_lift_arm::lift::CALLOTHER_AARCH64_CSEL` (0x330). Duplicated
/// here to keep `unlace-struct` from taking a build-time dep on the
/// per-arch lifter crate.
const CALLOTHER_AARCH64_CSEL_TAG: u64 = 0x330;

/// Map a capstone `ARM64_CC_*` value (1..=14) to the (Int-op, swap?) pair
/// the C printer should render. `swap` is true when the cc translates to
/// a comparison whose canonical Int-op needs operands flipped (e.g. GT is
/// `Rn > Rm` in source, but `IntSless(Rm, Rn)` in IR). Returns `None` for
/// AL/NV/INVALID and any unsigned-only / V-flag-only conditions that
/// don't have a clean two-operand integer-comparison form (HS/LO/HI/LS
/// fall back to GuardedTernary-style rendering via the caller's bail-out).
fn aarch64_cc_to_int_op(cc: u8) -> Option<(IrOp, bool)> {
    match cc {
        1 => Some((IrOp::IntEqual, false)),       // EQ:  Z == 1  ↔ a == b
        2 => Some((IrOp::IntNotequal, false)),    // NE:  Z == 0  ↔ a != b
        3 => Some((IrOp::IntLessequal, true)),    // HS:  C == 1  ↔ a >= b (unsigned)
        4 => Some((IrOp::IntLess, false)),        // LO:  C == 0  ↔ a < b  (unsigned)
        9 => Some((IrOp::IntLessequal, true)), // HI:  C&!Z    ↔ a > b  (unsigned, swap+swap of <=)
        10 => Some((IrOp::IntLessequal, false)), // LS:  !C|Z    ↔ a <= b (unsigned)
        11 => Some((IrOp::IntSlessequal, true)), // GE:  N == V  ↔ a >= b (signed)
        12 => Some((IrOp::IntSless, false)),   // LT:  N != V  ↔ a < b  (signed)
        13 => Some((IrOp::IntSlessequal, true)), // GT:  !Z&N==V ↔ a > b  (signed)
        14 => Some((IrOp::IntSlessequal, false)), // LE:  Z|N!=V  ↔ a <= b (signed)
        _ => None,                             // 5/6 (MI/PL), 7/8 (VS/VC), 0/15/16 — bail
    }
}

/// Return true if `insn` is the IntSub a CMP or SUBS produces. CMP/SUBS
/// both lift as `IntSub` with the two compared operands as inputs and a
/// unique-space result. We don't distinguish them — the structurer just
/// needs the comparison operands.
fn is_cmp_subs_insn(insn: &IrInsn) -> bool {
    insn.op == IrOp::IntSub && insn.inputs.len() >= 2
}

/// Return true if `insn` is the AArch64 CSEL `Callother`.
fn is_aarch64_csel_callother(insn: &IrInsn) -> bool {
    if insn.op != IrOp::Callother || insn.inputs.is_empty() {
        return false;
    }
    let tag = &insn.inputs[0];
    tag.space == SpaceId::Const && tag.offset == CALLOTHER_AARCH64_CSEL_TAG
}

/// Walk `nodes` in order; whenever a `Statement(csel_callother)` is
/// preceded (within the same body) by an `IntSub` `Statement` whose write
/// is not consumed by an intervening non-flag Statement, fold them into
/// a [`HirNode::CselTernary`]. Recurses into child bodies. Idempotent.
fn fold_csel_ternary(nodes: &mut [HirNode]) {
    for node in nodes.iter_mut() {
        fold_csel_ternary_in_children(node);
    }
    let mut i = 0;
    while i < nodes.len() {
        // Find a CSEL Callother.
        let csel = match &nodes[i] {
            HirNode::Statement(insn) if is_aarch64_csel_callother(insn) => insn.clone(),
            _ => {
                i += 1;
                continue;
            }
        };
        // Need at least 5 inputs: tag, cond, true_val, false_val, cc_byte.
        if csel.inputs.len() < 5 {
            i += 1;
            continue;
        }
        let cc_vn = &csel.inputs[4];
        if cc_vn.space != SpaceId::Const || cc_vn.size != 1 {
            i += 1;
            continue;
        }
        let cc = cc_vn.offset as u8;
        let (cmp_op, swap) = match aarch64_cc_to_int_op(cc) {
            Some(p) => p,
            None => {
                i += 1;
                continue;
            }
        };
        let true_val = csel.inputs[2];
        let false_val = csel.inputs[3];
        let Some(output) = csel.output else {
            i += 1;
            continue;
        };

        // Scan backward for the nearest IntSub Statement, skipping over
        // intervening flag-write Statements (writes to register-space
        // offsets in the NZCV byte range 264..=267 or the packed 272 slot
        // for AArch64 — we also accept register-space writes whose output
        // is one byte wide as flag-shaped, since `emit_sub_flags` produces
        // exactly that shape). Anything else aborts the search.
        let mut found: Option<&IrInsn> = None;
        for j in (0..i).rev() {
            match &nodes[j] {
                HirNode::Statement(prev) => {
                    if is_cmp_subs_insn(prev) {
                        found = Some(prev);
                        break;
                    }
                    // Allow flag-byte writes to flow through.
                    if let Some(out) = prev.output
                        && out.space == SpaceId::Register
                        && out.size == 1
                    {
                        continue;
                    }
                    break;
                }
                _ => break,
            }
        }
        let Some(cmp_insn) = found else {
            i += 1;
            continue;
        };
        let (cmp_lhs, cmp_rhs) = if swap {
            (cmp_insn.inputs[1], cmp_insn.inputs[0])
        } else {
            (cmp_insn.inputs[0], cmp_insn.inputs[1])
        };

        nodes[i] = HirNode::CselTernary {
            cmp_op,
            cmp_lhs,
            cmp_rhs,
            true_val,
            false_val,
            output,
            addr: csel.addr,
        };
        i += 1;
    }
}

fn fold_csel_ternary_in_children(node: &mut HirNode) {
    match node {
        HirNode::Block(children) => fold_csel_ternary(children),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            fold_csel_ternary(then_body);
            if let Some(eb) = else_body {
                fold_csel_ternary(eb);
            }
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
            fold_csel_ternary(body);
        }
        HirNode::For { body, .. } => fold_csel_ternary(body),
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                fold_csel_ternary(body);
            }
            if let Some(def) = default {
                fold_csel_ternary(def);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            fold_csel_ternary(try_body);
            for (_, arm_body) in catch_arms.iter_mut() {
                fold_csel_ternary(arm_body);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            fold_csel_ternary(try_body);
            fold_csel_ternary(finally_body);
        }
        HirNode::Commented { inner, .. } => fold_csel_ternary_in_children(inner),
        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => {
            fold_csel_ternary(then_body);
            fold_csel_ternary(else_body);
        }
        HirNode::IfCmp {
            then_body,
            else_body,
            ..
        } => {
            fold_csel_ternary(then_body);
            if let Some(eb) = else_body {
                fold_csel_ternary(eb);
            }
        }
        HirNode::Statement(_)
        | HirNode::Return(_)
        | HirNode::Goto(_)
        | HirNode::Label(_)
        | HirNode::Ternary { .. }
        | HirNode::GuardedTernary { .. }
        | HirNode::CselTernary { .. }
        | HirNode::TailCall { .. }
        | HirNode::Continue
        | HirNode::Break
        | HirNode::ObjcBlock { .. }
        | HirNode::Asm { .. } => {}
    }
}

// ---------------------------------------------------------------------------
// t189: AArch64 CMP+Bcc → HirNode::IfCmp fold
//
// Mirror of `fold_csel_ternary` (t180) for conditional branches. The lifter
// emits Bcc as a `Cbranch` whose cond is one of the NZCV flag bytes (ZF/NF
// directly for EQ/MI, or a small chain of BoolNegate / BoolXor / BoolAnd /
// BoolOr over the flag bytes for compound cond codes). After the structurer
// has rewritten the CFG into an `If` node with the same cond SSA varnode, we
// walk every `Block` body and look for the shape
//
//   Statement(IntSub …)           ; CMP / SUBS
//   Statement(IntSless → NF)      ; flag-byte writes
//   Statement(IntEqual → ZF)
//   …
//   [Statement(BoolXor(NF, VF)) / BoolNegate(...)]   ; cc dataflow (optional)
//   If { cond: <ssa of ZF/NF/that-unique>, then, else }
//
// and rewrite the trailing If into `HirNode::IfCmp` carrying the explicit
// (cmp_op, cmp_lhs, cmp_rhs) recovered from the cc + the CMP operands.
//
// Like `fold_csel_ternary`, the pass leaves the flag-byte and Bool*
// statements in place; downstream DCE can prune them when nothing else
// reads them. Walks all nested bodies. Idempotent.
// ---------------------------------------------------------------------------

/// Return true if `vn` is one of the AArch64 NZCV per-flag bytes
/// (NF=264, ZF=265, CF=266, VF=267) or the packed `ARM_NZCV` (272).
fn is_aarch64_flag_varnode(vn: &Varnode) -> bool {
    vn.space == SpaceId::Register
        && ((vn.size == 1 && (264..=267).contains(&vn.offset))
            || (vn.size == 4 && vn.offset == 272))
}

/// Return true if `vn` is a 1-byte register-space write that looks like a
/// flag-byte commit (NZCV per-flag bytes or any other 1-byte register
/// write — the structurer is tolerant here, matching `fold_csel_ternary`).
fn is_flag_byte_write(insn: &IrInsn) -> bool {
    insn.output
        .map(|o| o.space == SpaceId::Register && (o.size == 1 || (o.size == 4 && o.offset == 272)))
        .unwrap_or(false)
}

/// Walk the trailing Bool* statements just before an `If` and recover the
/// AArch64 condition code that produced them.
///
/// Returns the index into `body` *before* the recognized dataflow (so the
/// caller can keep scanning further back for the IntSub) and the
/// (IrOp, swap) pair the cc maps to via `aarch64_cc_to_int_op`.
///
/// Recognizes:
///   * direct ZF read (no Bool* dataflow) → cc = EQ
///   * direct NF read                       → cc = MI
///   * `BoolNegate(ZF)` → cc = NE
///   * `BoolNegate(NF)` → cc = PL (no integer mapping — bails)
///   * `BoolXor(NF, VF)` → cc = LT
///   * `BoolNegate(BoolXor(NF, VF))` → cc = GE
///
/// `cond_base` is the base Varnode of the If's cond SsaVarnode.
fn recover_aarch64_bcc_cc(
    body: &[HirNode],
    if_index: usize,
    cond_base: &Varnode,
) -> Option<(u8, usize)> {
    // Direct ZF / NF read (EQ / MI).
    if cond_base.space == SpaceId::Register && cond_base.size == 1 {
        match cond_base.offset {
            265 => return Some((1, if_index)), // ZF → EQ
            264 => return Some((4, if_index)), // NF → MI (we bail below since no int mapping)
            _ => {}
        }
    }

    // Look for `Statement(BoolXor | BoolNegate | ...)` immediately before
    // the If whose output equals `cond_base`.
    let mut i = if_index;
    if i == 0 {
        return None;
    }
    i -= 1;
    let last = match &body[i] {
        HirNode::Statement(insn) => insn,
        _ => return None,
    };
    if last.output.as_ref() != Some(cond_base) {
        return None;
    }

    match last.op {
        // NE: BoolNegate(ZF)
        IrOp::BoolNegate if last.inputs.len() == 1 => {
            let inp = &last.inputs[0];
            if inp.space == SpaceId::Register && inp.size == 1 && inp.offset == 265 {
                return Some((2, i)); // NE
            }
            // GE: BoolNegate(t) where t = BoolXor(NF, VF) immediately prior.
            if i > 0
                && let HirNode::Statement(prev) = &body[i - 1]
                && prev.op == IrOp::BoolXor
                && prev.inputs.len() == 2
                && prev.output.as_ref() == Some(inp)
                && is_register_flag(&prev.inputs[0], 264)
                && is_register_flag(&prev.inputs[1], 267)
            {
                return Some((11, i - 1)); // GE
            }
            // PL: BoolNegate(NF) — no integer-op mapping, bail.
            None
        }
        // LT: BoolXor(NF, VF)
        IrOp::BoolXor
            if last.inputs.len() == 2
                && is_register_flag(&last.inputs[0], 264)
                && is_register_flag(&last.inputs[1], 267) =>
        {
            Some((12, i)) // LT
        }
        _ => None,
    }
}

fn is_register_flag(vn: &Varnode, offset: u64) -> bool {
    vn.space == SpaceId::Register && vn.size == 1 && vn.offset == offset
}

/// Scan `body` and rewrite trailing `If { cond = NZCV-derived }` patterns
/// into `HirNode::IfCmp`. Recurses into child bodies. Idempotent.
fn fold_aarch64_bcc_if(nodes: &mut [HirNode]) {
    for node in nodes.iter_mut() {
        fold_aarch64_bcc_if_in_children(node);
    }

    // Find every `If` whose `cond.base` is a flag-shaped Varnode (or a unique
    // produced by Bool* dataflow over flag bytes) and try to rewrite it.
    let mut i = 0;
    while i < nodes.len() {
        let (cond_base, addr_hint) = match &nodes[i] {
            HirNode::If { cond, .. } => (cond.base, 0u64),
            _ => {
                i += 1;
                continue;
            }
        };

        // The cc dataflow lives in trailing Statement(Bool*) entries OR the
        // cond is a raw flag byte. Try to recover the cc.
        let Some((cc, dataflow_start)) = recover_aarch64_bcc_cc(nodes, i, &cond_base) else {
            i += 1;
            continue;
        };

        // Map cc → (cmp_op, swap). EQ/NE/GE/LT all map cleanly.
        let (cmp_op, swap) = match aarch64_cc_to_int_op(cc) {
            Some(p) => p,
            None => {
                i += 1;
                continue;
            }
        };

        // Walk further backwards from `dataflow_start` for the IntSub the
        // CMP/SUBS lifted, skipping flag-byte commits. Anything else aborts.
        let mut found: Option<&IrInsn> = None;
        if dataflow_start > 0 {
            for j in (0..dataflow_start).rev() {
                match &nodes[j] {
                    HirNode::Statement(prev) => {
                        if is_cmp_subs_insn(prev) {
                            found = Some(prev);
                            break;
                        }
                        if is_flag_byte_write(prev) {
                            continue;
                        }
                        break;
                    }
                    _ => break,
                }
            }
        }
        let Some(cmp_insn) = found else {
            i += 1;
            continue;
        };

        let (cmp_lhs, cmp_rhs) = if swap {
            (cmp_insn.inputs[1], cmp_insn.inputs[0])
        } else {
            (cmp_insn.inputs[0], cmp_insn.inputs[1])
        };

        let addr = if addr_hint != 0 {
            addr_hint
        } else {
            // Use the IntSub's address as the IfCmp's anchor (no separate Bcc
            // address is tracked at this layer).
            cmp_insn.addr
        };

        // Take the If node and split it into IfCmp.
        let (then_body, else_body) = match std::mem::replace(&mut nodes[i], HirNode::Block(vec![]))
        {
            HirNode::If {
                then_body,
                else_body,
                ..
            } => (then_body, else_body),
            other => {
                // Restore and bail (shouldn't happen — we matched If above).
                nodes[i] = other;
                i += 1;
                continue;
            }
        };

        nodes[i] = HirNode::IfCmp {
            cmp_op,
            cmp_lhs,
            cmp_rhs,
            then_body,
            else_body,
            addr,
        };
        i += 1;
    }
}

fn fold_aarch64_bcc_if_in_children(node: &mut HirNode) {
    match node {
        HirNode::Block(children) => fold_aarch64_bcc_if(children),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            fold_aarch64_bcc_if(then_body);
            if let Some(eb) = else_body {
                fold_aarch64_bcc_if(eb);
            }
        }
        HirNode::IfCmp {
            then_body,
            else_body,
            ..
        } => {
            fold_aarch64_bcc_if(then_body);
            if let Some(eb) = else_body {
                fold_aarch64_bcc_if(eb);
            }
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
            fold_aarch64_bcc_if(body);
        }
        HirNode::For { body, .. } => fold_aarch64_bcc_if(body),
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                fold_aarch64_bcc_if(body);
            }
            if let Some(def) = default {
                fold_aarch64_bcc_if(def);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            fold_aarch64_bcc_if(try_body);
            for (_, arm_body) in catch_arms.iter_mut() {
                fold_aarch64_bcc_if(arm_body);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            fold_aarch64_bcc_if(try_body);
            fold_aarch64_bcc_if(finally_body);
        }
        HirNode::Commented { inner, .. } => fold_aarch64_bcc_if_in_children(inner),
        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => {
            fold_aarch64_bcc_if(then_body);
            fold_aarch64_bcc_if(else_body);
        }
        HirNode::Statement(_)
        | HirNode::Return(_)
        | HirNode::Goto(_)
        | HirNode::Label(_)
        | HirNode::Ternary { .. }
        | HirNode::GuardedTernary { .. }
        | HirNode::CselTernary { .. }
        | HirNode::TailCall { .. }
        | HirNode::Continue
        | HirNode::Break
        | HirNode::ObjcBlock { .. }
        | HirNode::Asm { .. } => {}
    }
}

// Suppress the dead_code lint for `is_aarch64_flag_varnode` — it's a helper
// kept for future expansion (packed-NZCV consumers) but not yet used.
#[allow(dead_code)]
const _: fn(&Varnode) -> bool = is_aarch64_flag_varnode;

/// Fuse adjacent [`HirNode::GuardedIf`] lanes whose cond codes are either the
/// first lane's condition or its inverse (`cc ^ 1`, ARM A8.3) into one
/// `GuardedIf` carrying all true-lane nodes in `then_body` and all false-lane
/// nodes in `else_body`.
///
/// The lifter emits one `GuardedIf` per contiguous IT-lane run. A shallow
/// pairwise fuse is enough for `ITE` and one-sided 4-slot blocks like `ITEEE`,
/// but it leaves deep alternating blocks (`ITETE`, `ITET`, `ITTE`) as multiple
/// sibling if/else statements. Collapse the whole maximal T/E lane run at once
/// so any legal 1..=4-slot IT block structures as a single source-level
/// conditional. AL (0xE) has no architectural inverse and is skipped to keep
/// the post-pass safe for any future AL-guarded emission.
fn fuse_guarded_if_else(nodes: &mut Vec<HirNode>) {
    let mut i = 0;
    while i < nodes.len() {
        let HirNode::GuardedIf {
            cond_code: first_cc,
            else_body,
            ..
        } = &nodes[i]
        else {
            i += 1;
            continue;
        };
        if !else_body.is_empty() || *first_cc == 0xE {
            i += 1;
            continue;
        }

        let first_cc = *first_cc;
        let inverse_cc = first_cc ^ 1;
        let mut end = i;
        let mut then_body = Vec::new();
        let mut else_body = Vec::new();
        let mut saw_inverse = false;

        while end < nodes.len() {
            let HirNode::GuardedIf {
                cond_code,
                then_body: lane_body,
                else_body: lane_else,
            } = &nodes[end]
            else {
                break;
            };
            if !lane_else.is_empty() || *cond_code == 0xE {
                break;
            }
            if *cond_code == first_cc {
                then_body.extend(lane_body.iter().cloned());
            } else if *cond_code == inverse_cc {
                saw_inverse = true;
                else_body.extend(lane_body.iter().cloned());
            } else {
                break;
            }
            end += 1;
        }

        if saw_inverse && end > i + 1 {
            nodes.splice(
                i..end,
                [HirNode::GuardedIf {
                    cond_code: first_cc,
                    then_body,
                    else_body,
                }],
            );
            i += 1;
        } else {
            i += 1;
        }
    }
}

/// Post-pass: convert eligible `[init; while (cond) { body; update }]` patterns
/// into [`HirNode::For`].
///
/// Recurses into nested blocks (if/else/while/for bodies). Conservative:
/// fires for canonical counted loops even when the induction variable is
/// referenced after the loop in the same scope.
pub fn recover_for_loops(nodes: &mut Vec<HirNode>) {
    for node in nodes.iter_mut() {
        recover_for_loops_in_children(node);
    }

    let defs = collect_hir_defs(nodes);
    let mut i = 0;
    while i < nodes.len() {
        if i + 1 < nodes.len()
            && let Some(replacement) = try_recover_for_at(nodes, i, &defs)
        {
            let after_i = nodes.split_off(i + 2);
            nodes.truncate(i);
            nodes.push(replacement);
            nodes.extend(after_i);
        }
        // Aggressive: while(cond) { body; step } → for(; cond; step) without init
        if let Some(replacement) = try_recover_for_no_init(&nodes[i], &defs) {
            nodes[i] = replacement;
        }
        i += 1;
    }
}

#[derive(Clone, Debug)]
struct HirDef {
    op: IrOp,
    inputs: Vec<Varnode>,
}

fn collect_hir_defs(nodes: &[HirNode]) -> BTreeMap<Varnode, HirDef> {
    let mut defs = BTreeMap::new();
    collect_hir_defs_inner(nodes, &mut defs);
    defs
}

fn collect_hir_defs_inner(nodes: &[HirNode], defs: &mut BTreeMap<Varnode, HirDef>) {
    for node in nodes {
        match node {
            HirNode::Statement(insn) => {
                if let Some(out) = insn.output
                    && out.space != SpaceId::Const
                {
                    defs.insert(
                        out,
                        HirDef {
                            op: insn.op,
                            inputs: insn.inputs.iter().copied().collect(),
                        },
                    );
                }
            }
            HirNode::Block(children) => collect_hir_defs_inner(children, defs),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_hir_defs_inner(then_body, defs);
                if let Some(eb) = else_body {
                    collect_hir_defs_inner(eb, defs);
                }
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => {
                collect_hir_defs_inner(body, defs);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    collect_hir_defs_inner(body, defs);
                }
                if let Some(default) = default {
                    collect_hir_defs_inner(default, defs);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collect_hir_defs_inner(try_body, defs);
                for (_ty, body) in catch_arms {
                    collect_hir_defs_inner(body, defs);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_hir_defs_inner(try_body, defs);
                collect_hir_defs_inner(finally_body, defs);
            }
            _ => {}
        }
    }
}

fn recover_for_loops_in_children(node: &mut HirNode) {
    match node {
        HirNode::Block(children) => recover_for_loops(children),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            recover_for_loops(then_body);
            if let Some(eb) = else_body {
                recover_for_loops(eb);
            }
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
            recover_for_loops(body);
        }
        HirNode::For { body, .. } => recover_for_loops(body),
        HirNode::Switch { cases, default, .. } => {
            for (_case, body, _) in cases {
                recover_for_loops(body);
            }
            if let Some(def) = default {
                recover_for_loops(def);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            recover_for_loops(try_body);
            for (_ty, body) in catch_arms {
                recover_for_loops(body);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            recover_for_loops(try_body);
            recover_for_loops(finally_body);
        }
        HirNode::Commented { inner, .. } => recover_for_loops_in_children(inner),
        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => {
            recover_for_loops(then_body);
            recover_for_loops(else_body);
        }
        HirNode::IfCmp {
            then_body,
            else_body,
            ..
        } => {
            recover_for_loops(then_body);
            if let Some(eb) = else_body {
                recover_for_loops(eb);
            }
        }
        HirNode::Statement(_)
        | HirNode::Return(_)
        | HirNode::Goto(_)
        | HirNode::Label(_)
        | HirNode::Ternary { .. }
        | HirNode::GuardedTernary { .. }
        | HirNode::CselTernary { .. }
        | HirNode::TailCall { .. }
        | HirNode::Continue
        | HirNode::Break
        | HirNode::ObjcBlock { .. }
        | HirNode::Asm { .. } => {}
    }
}

fn try_recover_for_at(
    nodes: &[HirNode],
    idx: usize,
    defs: &BTreeMap<Varnode, HirDef>,
) -> Option<HirNode> {
    let init_insn = match nodes.get(idx)? {
        HirNode::Statement(insn) => insn.clone(),
        _ => return None,
    };

    let counter_base = init_insn.output?;
    if counter_base.space == SpaceId::Const {
        return None;
    }

    let (cond, body) = match nodes.get(idx + 1)? {
        HirNode::While { cond, body } => (*cond, body.clone()),
        _ => return None,
    };

    if !condition_mentions_counter(cond.base, &counter_base, defs) {
        return None;
    }

    let (update_insn, body_without_update) = extract_update(&body, &counter_base)?;

    if init_writes_counter_only(&init_insn, &counter_base).not_ok() {
        return None;
    }

    Some(HirNode::For {
        init: Some(init_insn),
        cond,
        update: update_insn,
        body: body_without_update,
    })
}

fn try_recover_for_no_init(node: &HirNode, defs: &BTreeMap<Varnode, HirDef>) -> Option<HirNode> {
    let (cond, body) = match node {
        HirNode::While { cond, body } => (*cond, body.clone()),
        _ => return None,
    };

    let last_idx = body
        .iter()
        .rposition(|n| matches!(n, HirNode::Statement(_)))?;
    let update_insn = match &body[last_idx] {
        HirNode::Statement(insn) => insn.clone(),
        _ => return None,
    };

    let counter = update_insn.output?;
    if counter.space == SpaceId::Const {
        return None;
    }
    if !is_counter_update_op(&update_insn, &counter) {
        return None;
    }
    // Without an init statement we need stronger evidence that the condition
    // actually involves the counter.  `condition_mentions_counter` is
    // permissive (returns true when the def is missing) which is fine when an
    // init statement anchors the counter, but too aggressive here.
    if !condition_mentions_counter_strict(cond.base, &counter, defs) {
        return None;
    }

    let mut new_body = body;
    new_body.remove(last_idx);
    Some(HirNode::For {
        init: None,
        cond,
        update: update_insn,
        body: new_body,
    })
}

/// Strict variant: returns `false` when the condition's definition is unknown.
fn condition_mentions_counter_strict(
    cond: Varnode,
    counter: &Varnode,
    defs: &BTreeMap<Varnode, HirDef>,
) -> bool {
    if cond == *counter {
        return true;
    }
    let Some(insn) = defs.get(&cond) else {
        return false;
    };
    matches!(
        insn.op,
        IrOp::IntLess
            | IrOp::IntSless
            | IrOp::IntLessequal
            | IrOp::IntSlessequal
            | IrOp::IntEqual
            | IrOp::IntNotequal
    ) && insn.inputs.iter().any(|v| v == counter)
}

fn condition_mentions_counter(
    cond: Varnode,
    counter: &Varnode,
    defs: &BTreeMap<Varnode, HirDef>,
) -> bool {
    if cond == *counter {
        return true;
    }
    let Some(insn) = defs.get(&cond) else {
        return true;
    };
    matches!(
        insn.op,
        IrOp::IntLess
            | IrOp::IntSless
            | IrOp::IntLessequal
            | IrOp::IntSlessequal
            | IrOp::IntEqual
            | IrOp::IntNotequal
    ) && insn.inputs.iter().any(|v| v == counter)
}

#[derive(Copy, Clone)]
enum InitCheck {
    Ok,
    Bad,
}

impl InitCheck {
    fn not_ok(self) -> bool {
        matches!(self, InitCheck::Bad)
    }
}

fn init_writes_counter_only(insn: &IrInsn, counter: &Varnode) -> InitCheck {
    match insn.output {
        Some(out) if out == *counter => {}
        _ => return InitCheck::Bad,
    }
    match insn.op {
        IrOp::Copy
        | IrOp::IntAdd
        | IrOp::IntSub
        | IrOp::IntZext
        | IrOp::IntSext
        | IrOp::Cast
        | IrOp::Load => InitCheck::Ok,
        _ => InitCheck::Bad,
    }
}

fn extract_update(body: &[HirNode], counter: &Varnode) -> Option<(IrInsn, Vec<HirNode>)> {
    let last_idx = body
        .iter()
        .rposition(|n| matches!(n, HirNode::Statement(_)))?;
    let update_insn = match &body[last_idx] {
        HirNode::Statement(insn) => insn.clone(),
        _ => return None,
    };

    let out = update_insn.output?;
    if out != *counter {
        return None;
    }

    if !is_counter_update_op(&update_insn, counter) {
        return None;
    }

    let mut new_body = body.to_vec();
    new_body.remove(last_idx);
    Some((update_insn, new_body))
}

fn is_counter_update_op(insn: &IrInsn, counter: &Varnode) -> bool {
    match insn.op {
        IrOp::IntAdd | IrOp::IntSub => {
            let reads_counter = insn.inputs.iter().any(|v| v == counter);
            let has_step_const = insn.inputs.iter().any(|v| v.space == SpaceId::Const);
            reads_counter && has_step_const
        }
        _ => false,
    }
}

#[cfg(test)]
mod tests;
