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

use crate::eager_returns::eager_returns;
use crate::hir::{HirCallArg, HirFunction, HirNode, LabelId, SwitchCase};
use crate::options::StructureOptions;
use crate::reaching_conditions::Cond;
use crate::switch_recovery::{IndirectBranchKind, classify_indirect_branch};
use crate::{
    condition_refinement, goto_resolve, irreducible, reaching_conditions, region_bridge,
    region_splice,
};
use std::cell::RefCell;
use std::collections::{BTreeMap, BTreeSet};
use std::time::Instant;
use unlace_ir::cfg::EdgeKind;
use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{ArchId, BlockId, IrInsn, IrOp, SpaceId, Varnode};
#[macro_use]
#[path = "structurer_trace.rs"]
mod trace;
#[path = "structurer_dominator.rs"]
mod dominator;
use trace::*;

#[path = "structurer_branch.rs"]
mod branch;
#[path = "structurer_cfg_queries.rs"]
mod cfg_queries;
#[path = "structurer_dream.rs"]
mod dream;
#[path = "structurer_edges.rs"]
mod edges;
#[path = "structurer_for_loops.rs"]
mod for_loops;
#[path = "structurer_hir_folds.rs"]
mod hir_folds;
#[path = "structurer_labels.rs"]
mod labels;
#[path = "structurer_loops.rs"]
mod loops;
#[path = "structurer_predicates.rs"]
mod predicates;
#[path = "structurer_switch.rs"]
mod switch;
#[path = "structurer_unstructured.rs"]
mod unstructured;

#[cfg(test)]
use for_loops::*;

use cfg_queries::*;
use edges::*;
pub use for_loops::recover_for_loops;
use hir_folds::*;
use labels::*;
use predicates::*;
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
/// Structure `func` under explicit complexity budgets, aborting past
/// `deadline`.
pub fn structure_with_options(
    func: &SsaFunction,
    arch: ArchId,
    deadline: Option<Instant>,
    options: &StructureOptions,
) -> Result<HirFunction, StructureError> {
    structure_with_arch_inner(func, arch, deadline, *options)
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
        let _span = linkscope::phase("struct.recover-try-catch");
        crate::eh_dispatch::recover_try_catch(&mut body, func);
    }
    trace_hir_top("recover-try-catch", &body);
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
    /// Exception handlers: the true successors of the dispatch blocks
    /// [`crate::eh_dispatch::install_eh_dispatch`] inserted. Only the
    /// unwinder enters them, so they are neither goto targets nor joins.
    eh_handlers: BTreeSet<BlockId>,
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
        // A handler block is entered by its dispatch block alone; the edge
        // from the protected code laid out before it is a lifter artifact,
        // so the handler is never a goto target.
        let eh_handlers = crate::eh_dispatch::handler_blocks(func);
        let mut goto_targets = BTreeSet::new();
        for &bid in func.function.blocks.keys() {
            if loop_headers.contains(&bid) || eh_handlers.contains(&bid) {
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

        let mut ctx = Self {
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
            eh_handlers,
        };
        ctx.mark_reentered_loop_headers();
        ctx
    }

    /// A loop header entered by two or more edges from outside its natural
    /// loop (a peeled iteration joining the loop, or an irreducible
    /// re-entry) is a `goto` target too: only one of those edges can be the
    /// structured entry, the others need a label in front of the loop.
    fn mark_reentered_loop_headers(&mut self) {
        let headers: Vec<BlockId> = self.loop_headers.iter().copied().collect();
        for header in headers {
            let loop_blocks = self.collect_loop_blocks(header);
            let external_preds = self
                .func
                .cfg
                .edges_to(header)
                .into_iter()
                .filter(|(src, _)| !self.synthetic.contains(src) && !loop_blocks.contains(src))
                .count();
            if external_preds >= 2 {
                struct_debug!(
                    "init reentered-loop-header header={header:?} external_preds={external_preds}"
                );
                self.goto_targets.insert(header);
            }
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
                // Already-emitted target: candidate `goto` site. A goto is
                // emitted when this block was pre-flagged as a goto target
                // (irreducible CFG region: 2+ preds, not a loop header) or
                // is a loop header reached from outside its loop: structured
                // joins are the `stop` block and never get here, so any other
                // emitted block is a control transfer only a goto expresses.
                if self.goto_targets.contains(&bid) || self.loop_headers.contains(&bid) {
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
}
#[cfg(test)]
#[path = "structurer_tests.rs"]
mod tests;
