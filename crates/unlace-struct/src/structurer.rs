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

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::cfg::EdgeKind;
use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{ArchId, BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::eager_returns::eager_returns;
use crate::hir::{HirFunction, HirNode, LabelId, SwitchCase};
use crate::switch_recovery::{IndirectBranchKind, classify_indirect_branch};

/// Errors that can occur during control-flow structuring.
#[derive(Debug, thiserror::Error)]
pub enum StructureError {
    #[error("entry block {0} not found in function")]
    MissingEntry(BlockId),
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
    let mut ctx = StructureCtx::new(func);
    let entry = func.function.entry;

    if !func.function.blocks.contains_key(&entry) && !func.function.blocks.is_empty() {
        return Err(StructureError::MissingEntry(entry));
    }

    let mut body = ctx.structure_region(entry);
    strip_unused_labels(&mut body);
    recover_for_loops(&mut body);

    let indirect_branch_kinds = classify_unstructured_indirect_branches(func, arch);

    Ok(HirFunction {
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
        indirect_branch_kinds,
        byref_boxes: func.byref_boxes.clone(),
    })
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

/// [`structure_with_landing_pads`] with an explicit `arch` for per-arch
/// indirect-branch classification.
pub fn structure_with_landing_pads_and_arch(
    func: &SsaFunction,
    landing_pad_addrs: &BTreeSet<u64>,
    arch: ArchId,
) -> Result<HirFunction, StructureError> {
    let mut hir = structure_with_arch(func, arch)?;
    if !landing_pad_addrs.is_empty() {
        let confirmed = resolve_landing_pad_addrs(func, landing_pad_addrs);
        if !confirmed.is_empty() {
            hir.body = wrap_try_catch(hir.body, &confirmed, func);
        }
    }
    Ok(hir)
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
        if let Some(first_insn) = block.insns.first() {
            if landing_pad_addrs.contains(&first_insn.addr) {
                confirmed.insert(first_insn.addr);
            }
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
    } else {
        // Landing-pad recovery produces a single catch-all arm. The
        // typed-catch shape (`Vec<(Type, Vec<HirNode>)>`) is the t183
        // generalisation; `PrimitiveType::Unknown` is the printer's
        // sentinel for `catch (...)`.
        let catch_all = unlace_ir::types::Type::Primitive(
            unlace_ir::ssa::PrimitiveType::Unknown,
        );
        result.push(HirNode::TryCatch {
            try_body,
            catch_arms: vec![(catch_all, catch_body)],
        });
    }

    if !rest.is_empty() {
        result.extend(wrap_try_catch(rest, landing_pad_addrs, func));
    }

    result
}

fn node_starts_at_landing_pad(node: &HirNode, landing_pad_addrs: &BTreeSet<u64>) -> bool {
    match node {
        HirNode::Statement(insn) => landing_pad_addrs.contains(&insn.addr),
        HirNode::Block(children) => children
            .first()
            .is_some_and(|n| node_starts_at_landing_pad(n, landing_pad_addrs)),
        _ => false,
    }
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
    /// Blocks already emitted — prevents double-emission.
    emitted: BTreeSet<BlockId>,
    /// Back-edges: (latch → header). A back-edge exists when header dominates latch.
    back_edges: BTreeSet<(BlockId, BlockId)>,
    /// Loop headers (targets of back-edges).
    loop_headers: BTreeSet<BlockId>,
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

impl<'a> StructureCtx<'a> {
    fn new(func: &'a SsaFunction) -> Self {
        let mut back_edges = BTreeSet::new();
        let mut loop_headers = BTreeSet::new();
        let synthetic = BTreeSet::from([func.cfg.exit_block(), func.cfg.unknown_block()]);

        // Detect back-edges: edge (src → tgt) where tgt dominates src.
        for (&bid, _block) in &func.function.blocks {
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
        for (&bid, _block) in &func.function.blocks {
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

        Self {
            func,
            emitted: BTreeSet::new(),
            back_edges,
            loop_headers,
            block_labels: BTreeMap::new(),
            next_label: 0,
            synthetic,
            goto_targets,
        }
    }

    fn is_frame_setup(&self, bid: BlockId, insn_idx: usize) -> bool {
        self.func.frame_setup_insns.contains(&(bid, insn_idx))
    }

    fn alloc_label(&mut self, block: BlockId) -> LabelId {
        if let Some(&label) = self.block_labels.get(&block) {
            return label;
        }
        let label = LabelId(self.next_label);
        self.next_label += 1;
        self.block_labels.insert(block, label);
        label
    }

    fn structure_region(&mut self, start: BlockId) -> Vec<HirNode> {
        let mut nodes = Vec::new();
        let mut current = Some(start);

        while let Some(bid) = current {
            if self.synthetic.contains(&bid) {
                break;
            }
            if self.emitted.contains(&bid) {
                if self.goto_targets.contains(&bid) {
                    let label = self.alloc_label(bid);
                    nodes.push(HirNode::Goto(label));
                }
                break;
            }

            // If this block is a loop header, try to structure the loop.
            if self.loop_headers.contains(&bid) && !self.emitted.contains(&bid) {
                let loop_node = self.try_structure_loop(bid);
                if let Some(node) = loop_node {
                    nodes.push(node);
                    // After the loop, continue with the loop exit target.
                    current = self.find_loop_exit(bid);
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
                nodes.push(if_node);
                current = join;
                continue;
            }

            // Default: emit as a linear block of statements.
            self.emit_block_statements(bid, &mut nodes);
            current = self.single_successor(bid);
        }

        nodes
    }

    fn emit_block_statements(&mut self, bid: BlockId, nodes: &mut Vec<HirNode>) {
        if self.emitted.contains(&bid) {
            return;
        }
        self.emitted.insert(bid);

        // Pre-identified `goto` target → ensure a label is allocated before
        // we emit this block's body, so any later `goto` can land here.
        if self.goto_targets.contains(&bid) {
            self.alloc_label(bid);
        }

        // Emit label if this block was targeted by a goto.
        if let Some(&label) = self.block_labels.get(&bid) {
            nodes.push(HirNode::Label(label));
        }

        let Some(block) = self.func.function.blocks.get(&bid) else {
            return;
        };

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
                        .map(|target| HirNode::TailCall { target })
                }
                IrOp::Cbranch | IrOp::Branchind => {
                    flush_guard(&mut pending_guard, nodes);
                    continue;
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
    }

    fn try_structure_switch(&mut self, bid: BlockId) -> Option<(HirNode, Option<BlockId>)> {
        if self.emitted.contains(&bid) {
            return None;
        }

        let block = self.func.function.blocks.get(&bid)?;
        let last = block.insns.last()?;
        if last.op != IrOp::Branchind {
            return None;
        }

        let edges = self.func.cfg.edges_from(bid);
        let targets: Vec<BlockId> = edges
            .iter()
            .filter(|(tgt, kind)| *kind == EdgeKind::IndirectJump && !self.synthetic.contains(tgt))
            .map(|(tgt, _)| *tgt)
            .collect();

        if targets.len() < 2 {
            return None;
        }

        let cond = self.recover_switch_index(bid);
        let bounds = self.extract_bounds_check(bid, &cond);
        self.emitted.insert(bid);

        let mut pre_stmts = Vec::new();
        for (i, insn) in block.insns.iter().enumerate() {
            if self.is_frame_setup(bid, i) {
                continue;
            }
            match insn.op {
                IrOp::Branchind | IrOp::Branch | IrOp::Cbranch | IrOp::Return => {}
                _ => pre_stmts.push(HirNode::Statement(insn.clone())),
            }
        }

        let join = self.find_switch_join(bid, &targets);

        let bounds_default = bounds.and_then(|b| b.default_target);
        let has_explicit_default = bounds_default
            .map(|t| targets.iter().any(|x| *x == t))
            .unwrap_or(false);

        let num_cases = if targets.len() > 2 && !has_explicit_default {
            targets.len() - 1
        } else {
            targets.len()
        };
        let mut cases = Vec::new();
        let mut default_body = None;
        for (i, &tgt) in targets.iter().enumerate() {
            if has_explicit_default && Some(tgt) == bounds_default && default_body.is_none() {
                default_body = Some(self.structure_until(tgt, join));
                continue;
            }
            if !has_explicit_default && i == targets.len() - 1 && targets.len() > 2 {
                let body = self.structure_until(tgt, join);
                default_body = Some(body);
            } else {
                let is_fall_through = i + 1 < num_cases && targets[i] == targets[i + 1];
                let body = if is_fall_through {
                    vec![]
                } else {
                    self.structure_until(tgt, join)
                };
                cases.push((SwitchCase::Value(i as u64), body, is_fall_through));
            }
        }

        let jumptable_cases = bounds.map(|b| b.case_count as usize);

        let switch_node = HirNode::Switch {
            cond,
            cases,
            default: default_body,
            jumptable_addr: None,
            jumptable_cases,
        };

        let combined = if pre_stmts.is_empty() {
            switch_node
        } else {
            pre_stmts.push(switch_node);
            HirNode::Block(pre_stmts)
        };

        Some((combined, join))
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
            let matches = matches!(out, Some(o) if o.base == cond_sv.base && o.version == cond_sv.version);
            if !matches {
                continue;
            }

            let lhs_raw = insn.inputs.get(0).copied()?;
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
    fn varnode_aliases(
        &self,
        bid: BlockId,
        candidate: &SsaVarnode,
        target: &SsaVarnode,
    ) -> bool {
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
            if insn.op == IrOp::Load {
                if let Some(addr_sv) = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(1)) {
                    return self.trace_scaled_index(bid, &addr_sv);
                }
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
                if rhs_const {
                    if let Some(lhs_sv) =
                        self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(0))
                    {
                        return self.extract_index_from_scale(bid, &lhs_sv);
                    }
                }
                if lhs_const {
                    if let Some(rhs_sv) =
                        self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(1))
                    {
                        return self.extract_index_from_scale(bid, &rhs_sv);
                    }
                }
            }

            break;
        }

        None
    }

    fn extract_index_from_scale(&self, bid: BlockId, scaled: &SsaVarnode) -> Option<SsaVarnode> {
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
                    if rhs_raw.space == SpaceId::Const && is_scale_value(rhs_raw.offset) {
                        if let Some(lhs_sv) =
                            self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(0))
                        {
                            return Some(self.walk_bitwise_chain(bid, &lhs_sv, 4));
                        }
                    }
                    if lhs_raw.space == SpaceId::Const && is_scale_value(lhs_raw.offset) {
                        if let Some(rhs_sv) =
                            self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(1))
                        {
                            return Some(self.walk_bitwise_chain(bid, &rhs_sv, 4));
                        }
                    }
                }
                IrOp::IntLeft if insn.inputs.len() >= 2 => {
                    let shift_raw = insn.inputs[1];
                    if shift_raw.space == SpaceId::Const {
                        if let Some(index_sv) =
                            self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(0))
                        {
                            return Some(self.walk_bitwise_chain(bid, &index_sv, 4));
                        }
                    }
                }
                _ => {}
            }
            break;
        }

        // The scaled value itself might be the index (scale == 1).
        Some(self.walk_bitwise_chain(bid, scaled, 4))
    }

    /// Walk through a chain of `IntAnd(x, mask_const)`, `IntRight(x, shift_const)`,
    /// `IntSright(x, shift_const)`, and `IntZext/Sext` ops to dig down to the
    /// underlying index source. Stops at non-bitwise ops or at depth zero.
    fn walk_bitwise_chain(
        &self,
        bid: BlockId,
        start: &SsaVarnode,
        depth: u32,
    ) -> SsaVarnode {
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

        // Find the join point: a block that both branches eventually reach.
        let join = self.find_join_point(bid, true_blk, false_blk);

        let then_body = self.structure_until(true_blk, join);
        let else_body = self.structure_until(false_blk, join);

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
        let header_has_cbranch = self.block_has_cbranch(header);
        let single_latch = if latches.len() == 1 {
            Some(latches[0])
        } else {
            None
        };
        let latch_has_cbranch = single_latch.is_some_and(|l| self.block_has_cbranch(l));

        if header_has_cbranch {
            // While loop: condition at header.
            let cond = self.find_cbranch_cond(header);

            // Find which successor is the loop body vs. the exit.
            let edges = self.func.cfg.edges_from(header);
            let (body_entry, _exit) = self.classify_loop_edges(header, &edges);

            self.emitted.insert(header);

            // Emit header's non-control-flow statements first, then recurse into body.
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

            if let Some(body_blk) = body_entry {
                let inner = self.structure_loop_body(body_blk, header);
                body_nodes.extend(inner);
            }

            Some(HirNode::While {
                cond,
                body: body_nodes,
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
                        nodes.push(HirNode::TailCall { target });
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

    fn structure_loop_body(&mut self, start: BlockId, header: BlockId) -> Vec<HirNode> {
        let loop_blocks = self.collect_loop_blocks(header);
        self.structure_loop_body_inner(start, header, &loop_blocks)
    }

    fn collect_loop_blocks(&self, header: BlockId) -> BTreeSet<BlockId> {
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
            for (&src, _) in &self.func.function.blocks {
                if loop_blocks.contains(&src) {
                    continue;
                }
                let edges = self.func.cfg.edges_from(src);
                if edges.iter().any(|(tgt, _)| *tgt == bid) {
                    if dominates(&self.func.dom_tree, header, src) {
                        loop_blocks.insert(src);
                        worklist.push(src);
                    }
                }
            }
        }
        loop_blocks
    }

    fn structure_loop_body_inner(
        &mut self,
        start: BlockId,
        header: BlockId,
        loop_blocks: &BTreeSet<BlockId>,
    ) -> Vec<HirNode> {
        let mut nodes = Vec::new();
        let mut current = Some(start);

        while let Some(bid) = current {
            if self.emitted.contains(&bid) || self.synthetic.contains(&bid) {
                break;
            }

            if !loop_blocks.contains(&bid) {
                nodes.push(HirNode::Break);
                break;
            }

            let is_back_to_header = self.back_edges.contains(&(bid, header));
            if is_back_to_header && bid == start {
                self.emit_block_statements(bid, &mut nodes);
                break;
            }

            if let Some((if_node, join)) = self.try_structure_if(bid) {
                nodes.push(if_node);
                current = join;
                continue;
            }

            self.emit_block_statements(bid, &mut nodes);

            let edges = self.func.cfg.edges_from(bid);
            let non_back_succs: Vec<BlockId> = edges
                .iter()
                .filter(|(tgt, _)| {
                    !self.synthetic.contains(tgt) && !self.back_edges.contains(&(bid, *tgt))
                })
                .map(|(tgt, _)| *tgt)
                .collect();

            current = non_back_succs.first().copied();
        }

        nodes
    }

    fn structure_until(&mut self, start: BlockId, stop: Option<BlockId>) -> Vec<HirNode> {
        let mut nodes = Vec::new();
        let mut current = Some(start);

        while let Some(bid) = current {
            if Some(bid) == stop {
                break;
            }
            if self.synthetic.contains(&bid) {
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
                }
                break;
            }

            // Nested loops.
            if self.loop_headers.contains(&bid) && !self.emitted.contains(&bid) {
                if let Some(loop_node) = self.try_structure_loop(bid) {
                    nodes.push(loop_node);
                    current = self.find_loop_exit(bid);
                    continue;
                }
            }

            // Nested switch.
            if let Some((switch_node, join)) = self.try_structure_switch(bid) {
                nodes.push(switch_node);
                current = join;
                continue;
            }

            // Nested if/else.
            if let Some((if_node, join)) = self.try_structure_if(bid) {
                nodes.push(if_node);
                current = join;
                continue;
            }

            self.emit_block_statements(bid, &mut nodes);
            current = self.single_successor(bid);
        }

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
        // Fallback: synthetic unknown condition.
        SsaVarnode {
            base: unlace_ir::Varnode::constant(0, 1),
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
        self.func.var_map.get(&(bid, insn_idx, slot)).copied()
    }

    /// Classify loop edges: which successor goes into the loop body, which exits.
    fn classify_loop_edges(
        &self,
        header: BlockId,
        edges: &[(BlockId, EdgeKind)],
    ) -> (Option<BlockId>, Option<BlockId>) {
        let mut body_entry = None;
        let mut exit = None;

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
        for (tgt, _kind) in &edges {
            if self.synthetic.contains(tgt) {
                continue;
            }
            if !dominates(&self.func.dom_tree, header, *tgt) {
                return Some(*tgt);
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
            let latch_edges = self.func.cfg.edges_from(*latch);
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
        if let Some(join) = self.find_join_point_postdom(cond_block) {
            return Some(join);
        }
        self.find_join_point_bfs(true_blk, false_blk)
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
        9 => Some((IrOp::IntLessequal, true)),    // HI:  C&!Z    ↔ a > b  (unsigned, swap+swap of <=)
        10 => Some((IrOp::IntLessequal, false)),  // LS:  !C|Z    ↔ a <= b (unsigned)
        11 => Some((IrOp::IntSlessequal, true)),  // GE:  N == V  ↔ a >= b (signed)
        12 => Some((IrOp::IntSless, false)),      // LT:  N != V  ↔ a < b  (signed)
        13 => Some((IrOp::IntSlessequal, true)),  // GT:  !Z&N==V ↔ a > b  (signed)
        14 => Some((IrOp::IntSlessequal, false)), // LE:  Z|N!=V  ↔ a <= b (signed)
        _ => None,                                // 5/6 (MI/PL), 7/8 (VS/VC), 0/15/16 — bail
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
fn fold_csel_ternary(nodes: &mut Vec<HirNode>) {
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
                    if let Some(out) = prev.output {
                        if out.space == SpaceId::Register && out.size == 1 {
                            continue;
                        }
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
            catch_body,
        } => {
            fold_csel_ternary(try_body);
            fold_csel_ternary(catch_body);
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

/// Fuse adjacent [`HirNode::GuardedIf`] pairs whose cond codes are inverses
/// (`cc_b == cc_a ^ 1`, ARM A8.3) into a single `GuardedIf` carrying the
/// second group as `else_body`. The lifter emits one `GuardedIf` per
/// contiguous IT-lane run; this pass collapses `ITE`/`ITTE`/etc. patterns
/// into proper `if/else`. AL (0xE) has no architectural inverse and is
/// skipped to keep the post-pass safe for any future AL-guarded emission.
fn fuse_guarded_if_else(nodes: &mut Vec<HirNode>) {
    let mut i = 0;
    while i + 1 < nodes.len() {
        let inverse_pair = match (&nodes[i], &nodes[i + 1]) {
            (
                HirNode::GuardedIf {
                    cond_code: cc_a,
                    else_body: ea,
                    ..
                },
                HirNode::GuardedIf {
                    cond_code: cc_b,
                    else_body: eb,
                    ..
                },
            ) => {
                ea.is_empty()
                    && eb.is_empty()
                    && *cc_a != 0xE
                    && *cc_b != 0xE
                    && *cc_b == (*cc_a ^ 1)
            }
            _ => false,
        };
        if inverse_pair {
            let second = nodes.remove(i + 1);
            let HirNode::GuardedIf {
                then_body: second_then,
                ..
            } = second
            else {
                unreachable!()
            };
            if let HirNode::GuardedIf { else_body, .. } = &mut nodes[i] {
                *else_body = second_then;
            }
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
    let defs = collect_hir_defs(nodes);
    let mut i = 0;
    while i < nodes.len() {
        recover_for_loops_in_children(&mut nodes[i]);
        if i + 1 < nodes.len() {
            recover_for_loops_in_children(&mut nodes[i + 1]);
            if let Some(replacement) = try_recover_for_at(nodes, i, &defs) {
                let after_i = nodes.split_off(i + 2);
                nodes.truncate(i);
                nodes.push(replacement);
                nodes.extend(after_i);
            }
        }
        // Aggressive: while(cond) { body; step } → for(; cond; step) without init
        if let Some(replacement) = try_recover_for_no_init(&nodes[i], &defs) {
            nodes[i] = replacement;
        }
        i += 1;
    }
}

fn collect_hir_defs(nodes: &[HirNode]) -> BTreeMap<Varnode, IrInsn> {
    let mut defs = BTreeMap::new();
    collect_hir_defs_inner(nodes, &mut defs);
    defs
}

fn collect_hir_defs_inner(nodes: &[HirNode], defs: &mut BTreeMap<Varnode, IrInsn>) {
    for node in nodes {
        match node {
            HirNode::Statement(insn) => {
                if let Some(out) = insn.output {
                    if out.space != SpaceId::Const {
                        defs.insert(out, insn.clone());
                    }
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
    defs: &BTreeMap<Varnode, IrInsn>,
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

fn try_recover_for_no_init(node: &HirNode, defs: &BTreeMap<Varnode, IrInsn>) -> Option<HirNode> {
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
    defs: &BTreeMap<Varnode, IrInsn>,
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
    defs: &BTreeMap<Varnode, IrInsn>,
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
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;
    use crate::hir::HirNode;

    fn ctrl_insn(op: IrOp, addr: u64) -> IrInsn {
        IrInsn::without_output(op, smallvec![], addr)
    }

    fn arith_insn(output: Varnode, inputs: &[Varnode], addr: u64) -> IrInsn {
        IrInsn::with_output(IrOp::IntAdd, output, smallvec![inputs[0], inputs[1]], addr)
    }

    fn cbranch_insn(cond: Varnode, addr: u64) -> IrInsn {
        IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), cond],
            addr,
        )
    }

    #[test]
    fn test_structure_linear() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("linear", BlockId(0), 0x1000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(r0, &[r8, c1], 0x1000));

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r0, c1], 0x1010));
        bb1.insns.push(ctrl_insn(IrOp::Return, 0x1018));

        func.insert_block(bb0);
        func.insert_block(bb1);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        assert_eq!(hir.name, "linear");
        // Body should contain statements (from BB0 + BB1) and a Return.
        let has_statement = hir.body.iter().any(|n| matches!(n, HirNode::Statement(_)));
        let has_return = hir.body.iter().any(|n| matches!(n, HirNode::Return(_)));
        assert!(has_statement, "linear function should have statements");
        assert!(has_return, "linear function should have a return");
        // No If, While, Goto nodes.
        let has_control = hir.body.iter().any(|n| {
            matches!(
                n,
                HirNode::If { .. } | HirNode::While { .. } | HirNode::Goto(_)
            )
        });
        assert!(
            !has_control,
            "linear function should have no control flow nodes"
        );
    }

    #[test]
    fn test_structure_if_else() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);
        let cond_vn = Varnode::reg(256, 1); // ZF flag

        let mut func = Function::new("if_else", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(r0, &[r8, c1], 0x2000));
        bb0.insns.push(cbranch_insn(cond_vn, 0x2004));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r8, c1], 0x2010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x2018));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(r0, &[r8, c2], 0x2020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x2028));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x2030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        assert_eq!(hir.name, "if_else");

        // Should contain an If node somewhere in the body.
        fn contains_if(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::If { .. } => true,
                HirNode::Block(inner) => contains_if(inner),
                _ => false,
            })
        }
        assert!(
            contains_if(&hir.body),
            "diamond CFG should produce an If node"
        );
    }

    #[test]
    fn test_structure_while() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let cond_vn = Varnode::reg(256, 1);

        let mut func = Function::new("while_loop", BlockId(0), 0x3000);

        // BB0: header with CBRANCH (exit test at top)
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(r0, &[r8, c1], 0x3000));
        bb0.insns.push(cbranch_insn(cond_vn, 0x3004));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        // BB1: loop body, back-edge to BB0
        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r0, c1], 0x3010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x3014));
        bb1.successors = smallvec![BlockId(0)];

        // BB2: exit
        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0x3020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        fn contains_while(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::While { .. } => true,
                HirNode::Block(inner) => contains_while(inner),
                _ => false,
            })
        }
        assert!(
            contains_while(&hir.body),
            "loop CFG should produce a While node"
        );
    }

    #[test]
    fn test_structure_irreducible_goto() {
        // Build an irreducible CFG: BB0 -> BB1, BB0 -> BB2, BB1 -> BB2, BB2 -> BB1
        // (BB1 and BB2 form a cycle where neither dominates the other)
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let cond_vn = Varnode::reg(256, 1);

        let mut func = Function::new("irreducible", BlockId(0), 0x4000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch_insn(cond_vn, 0x4000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r8, c1], 0x4010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x4014));
        bb1.successors = smallvec![BlockId(2)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(r0, &[r0, c1], 0x4020));
        bb2.insns.push(cbranch_insn(cond_vn, 0x4024));
        bb2.successors = smallvec![BlockId(1), BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x4030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let ssa = build_ssa(func);

        // Must not panic!
        let hir = structure(&ssa).expect("irreducible CFG should not panic");
        assert_eq!(hir.name, "irreducible");

        // The function body should not be empty.
        assert!(
            !hir.body.is_empty(),
            "irreducible CFG should produce some HIR nodes"
        );
    }

    #[test]
    fn test_structure_switch_simple() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("switch_simple", BlockId(0), 0x5000);

        // BB0: BRANCHIND → BB1, BB2, BB3
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(r0, &[r8, c1], 0x5000));
        bb0.insns.push(ctrl_insn(IrOp::Branchind, 0x5004));
        bb0.successors = smallvec![BlockId(1), BlockId(2), BlockId(3)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r8, c1], 0x5010));
        bb1.insns.push(ctrl_insn(IrOp::Return, 0x5014));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(r0, &[r0, c1], 0x5020));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0x5024));

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x5030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        assert_eq!(hir.name, "switch_simple");

        fn contains_switch(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::Switch { .. } => true,
                HirNode::Block(inner) => contains_switch(inner),
                _ => false,
            })
        }
        assert!(
            contains_switch(&hir.body),
            "BRANCHIND with 3 targets should produce a Switch node"
        );
    }

    #[test]
    fn test_structure_switch_with_join() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);

        let mut func = Function::new("switch_join", BlockId(0), 0x6000);

        // BB0: BRANCHIND → BB1, BB2, BB3; all cases merge at BB4
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(ctrl_insn(IrOp::Branchind, 0x6000));
        bb0.successors = smallvec![BlockId(1), BlockId(2), BlockId(3)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r8, c1], 0x6010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x6014));
        bb1.successors = smallvec![BlockId(4)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(r0, &[r8, c2], 0x6020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x6024));
        bb2.successors = smallvec![BlockId(4)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(arith_insn(r0, &[r0, c1], 0x6030));
        bb3.insns.push(ctrl_insn(IrOp::Branch, 0x6034));
        bb3.successors = smallvec![BlockId(4)];

        let mut bb4 = BasicBlock::new(BlockId(4));
        bb4.insns.push(ctrl_insn(IrOp::Return, 0x6040));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);
        func.insert_block(bb4);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        fn contains_switch(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::Switch { .. } => true,
                HirNode::Block(inner) => contains_switch(inner),
                _ => false,
            })
        }
        assert!(
            contains_switch(&hir.body),
            "switch with join point should produce Switch node"
        );

        let has_return = hir.body.iter().any(|n| matches!(n, HirNode::Return(_)));
        assert!(
            has_return,
            "code after the switch join should be structured"
        );
    }

    #[test]
    fn test_non_switch_branchind_unchanged() {
        let mut func = Function::new("single_indirect", BlockId(0), 0x7000);

        // BRANCHIND with only 1 known successor — not a switch
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(ctrl_insn(IrOp::Branchind, 0x7000));
        bb0.successors = smallvec![BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl_insn(IrOp::Return, 0x7010));

        func.insert_block(bb0);
        func.insert_block(bb1);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        fn contains_switch(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::Switch { .. } => true,
                HirNode::Block(inner) => contains_switch(inner),
                _ => false,
            })
        }
        assert!(
            !contains_switch(&hir.body),
            "single-target BRANCHIND should NOT produce a Switch"
        );
    }

    #[test]
    fn test_structure_switch_with_table_pattern() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c4 = Varnode::constant(4, 8);
        let table_base = Varnode::constant(0x10000, 8);
        let unique_scaled = Varnode::unique(100, 8);
        let unique_addr = Varnode::unique(200, 8);
        let unique_target = Varnode::unique(300, 8);
        let ram_space = Varnode::constant(1, 8);

        let mut func = Function::new("switch_table", BlockId(0), 0x8000);

        // BB0: index * 4, base + scaled, load, branchind
        let mut bb0 = BasicBlock::new(BlockId(0));
        // unique_scaled = INT_MULT(r8, 4)
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntMult,
            unique_scaled,
            smallvec![r8, c4],
            0x8000,
        ));
        // unique_addr = INT_ADD(table_base, unique_scaled)
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            unique_addr,
            smallvec![table_base, unique_scaled],
            0x8004,
        ));
        // unique_target = LOAD(ram_space, unique_addr)
        bb0.insns.push(IrInsn::with_output(
            IrOp::Load,
            unique_target,
            smallvec![ram_space, unique_addr],
            0x8008,
        ));
        // BRANCHIND(unique_target)
        bb0.insns.push(IrInsn::without_output(
            IrOp::Branchind,
            smallvec![unique_target],
            0x800c,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, Varnode::constant(1, 8)],
            0x8010,
        ));
        bb1.insns.push(ctrl_insn(IrOp::Return, 0x8014));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, Varnode::constant(2, 8)],
            0x8020,
        ));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0x8024));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        fn find_switch(nodes: &[HirNode]) -> Option<&HirNode> {
            for n in nodes {
                match n {
                    HirNode::Switch { .. } => return Some(n),
                    HirNode::Block(inner) => {
                        if let Some(s) = find_switch(inner) {
                            return Some(s);
                        }
                    }
                    _ => {}
                }
            }
            None
        }
        let switch = find_switch(&hir.body).expect("table pattern should produce Switch");
        if let HirNode::Switch { cond, .. } = switch {
            assert_ne!(
                cond.base,
                Varnode::constant(0, 8),
                "switch cond should be recovered from table pattern, not fallback"
            );
        }
    }

    fn copy_insn(output: Varnode, input: Varnode, addr: u64) -> IrInsn {
        IrInsn::with_output(IrOp::Copy, output, smallvec![input], addr)
    }

    fn add_insn(output: Varnode, lhs: Varnode, rhs: Varnode, addr: u64) -> IrInsn {
        IrInsn::with_output(IrOp::IntAdd, output, smallvec![lhs, rhs], addr)
    }

    fn sub_insn(output: Varnode, lhs: Varnode, rhs: Varnode, addr: u64) -> IrInsn {
        IrInsn::with_output(IrOp::IntSub, output, smallvec![lhs, rhs], addr)
    }

    fn ssa_of(vn: Varnode) -> SsaVarnode {
        SsaVarnode {
            base: vn,
            version: 0,
        }
    }

    #[test]
    fn test_for_loop_simple_increment() {
        let i = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let one = Varnode::constant(1, 4);

        let body_stmt = Varnode::reg(8, 4);

        let mut hir_body = vec![
            HirNode::Statement(copy_insn(i, zero, 0x1000)),
            HirNode::While {
                cond: ssa_of(i),
                body: vec![
                    HirNode::Statement(add_insn(body_stmt, body_stmt, one, 0x1010)),
                    HirNode::Statement(add_insn(i, i, one, 0x1018)),
                ],
            },
        ];

        recover_for_loops(&mut hir_body);

        assert_eq!(
            hir_body.len(),
            1,
            "init+while should collapse to single For"
        );
        match &hir_body[0] {
            HirNode::For {
                init,
                update,
                body,
                cond,
            } => {
                let init = init.as_ref().expect("should have init");
                assert_eq!(init.op, IrOp::Copy);
                assert_eq!(init.output, Some(i));
                assert_eq!(update.op, IrOp::IntAdd);
                assert_eq!(update.output, Some(i));
                assert_eq!(cond.base, i);
                assert_eq!(body.len(), 1, "update should be removed from body");
            }
            other => panic!("expected For, got {other:?}"),
        }
    }

    #[test]
    fn test_for_loop_with_step() {
        let i = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let two = Varnode::constant(2, 4);

        let mut hir_body = vec![
            HirNode::Statement(copy_insn(i, zero, 0x1000)),
            HirNode::While {
                cond: ssa_of(i),
                body: vec![HirNode::Statement(add_insn(i, i, two, 0x1018))],
            },
        ];

        recover_for_loops(&mut hir_body);

        assert!(matches!(hir_body[0], HirNode::For { .. }));
        if let HirNode::For { update, .. } = &hir_body[0] {
            assert_eq!(update.op, IrOp::IntAdd);
            let has_step = update
                .inputs
                .iter()
                .any(|v| v.space == SpaceId::Const && v.offset == 2);
            assert!(has_step, "update should reference the step constant");
        }
    }

    #[test]
    fn test_for_loop_condition_compare_reads_induction_var() {
        let i = Varnode::reg(0, 4);
        let bound = Varnode::reg(8, 4);
        let cond = Varnode::unique(0x200, 1);
        let zero = Varnode::constant(0, 4);
        let one = Varnode::constant(1, 4);

        let cmp = IrInsn::with_output(IrOp::IntLess, cond, smallvec![i, bound], 0x1008);
        let mut defs = BTreeMap::new();
        defs.insert(cond, cmp);

        assert!(condition_mentions_counter(cond, &i, &defs));
        assert!(
            condition_mentions_counter(cond, &bound, &BTreeMap::new()),
            "missing def preserves legacy permissive recovery"
        );

        let mut hir_body = vec![
            HirNode::Statement(copy_insn(i, zero, 0x1000)),
            HirNode::While {
                cond: ssa_of(cond),
                body: vec![HirNode::Statement(add_insn(i, i, one, 0x1018))],
            },
        ];
        let mut defs = BTreeMap::new();
        defs.insert(
            cond,
            IrInsn::with_output(IrOp::IntLess, cond, smallvec![i, bound], 0x1008),
        );

        let replacement =
            try_recover_for_at(&hir_body, 0, &defs).expect("compare cond should recover");
        hir_body.splice(0..2, [replacement]);

        assert!(matches!(hir_body[0], HirNode::For { .. }));
    }

    #[test]
    fn test_for_loop_decrement() {
        let i = Varnode::reg(0, 4);
        let n = Varnode::reg(8, 4);
        let one = Varnode::constant(1, 4);

        let mut hir_body = vec![
            HirNode::Statement(copy_insn(i, n, 0x1000)),
            HirNode::While {
                cond: ssa_of(i),
                body: vec![HirNode::Statement(sub_insn(i, i, one, 0x1018))],
            },
        ];

        recover_for_loops(&mut hir_body);

        match &hir_body[0] {
            HirNode::For { update, .. } => {
                assert_eq!(update.op, IrOp::IntSub);
                assert_eq!(update.output, Some(i));
            }
            other => panic!("expected For, got {other:?}"),
        }
    }

    #[test]
    fn test_for_loop_no_init_promotes_to_for() {
        let i = Varnode::reg(0, 4);
        let one = Varnode::constant(1, 4);

        let mut hir_body = vec![HirNode::While {
            cond: ssa_of(i),
            body: vec![HirNode::Statement(add_insn(i, i, one, 0x1018))],
        }];

        recover_for_loops(&mut hir_body);

        assert_eq!(hir_body.len(), 1);
        match &hir_body[0] {
            HirNode::For { init, update, .. } => {
                assert!(init.is_none(), "no preceding init → init should be None");
                assert_eq!(update.op, IrOp::IntAdd);
            }
            other => panic!("expected For, got {other:?}"),
        }
    }

    #[test]
    fn test_for_loop_no_init_decrement_to_zero_compare() {
        let i = Varnode::reg(0, 4);
        let cond = Varnode::unique(0x200, 1);
        let zero = Varnode::constant(0, 4);
        let one = Varnode::constant(1, 4);

        let mut hir_body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntNotequal,
                cond,
                smallvec![i, zero],
                0x1008,
            )),
            HirNode::While {
                cond: ssa_of(cond),
                body: vec![HirNode::Statement(sub_insn(i, i, one, 0x1018))],
            },
        ];

        recover_for_loops(&mut hir_body);

        match &hir_body[1] {
            HirNode::For { init, update, .. } => {
                assert!(init.is_none());
                assert_eq!(update.op, IrOp::IntSub);
                assert_eq!(update.output, Some(i));
            }
            other => panic!("expected For, got {other:?}"),
        }
    }

    #[test]
    fn test_for_loop_no_init_decrement_to_zero_direct_cond() {
        let i = Varnode::reg(0, 4);
        let one = Varnode::constant(1, 4);

        let mut hir_body = vec![HirNode::While {
            cond: ssa_of(i),
            body: vec![HirNode::Statement(sub_insn(i, i, one, 0x1018))],
        }];

        recover_for_loops(&mut hir_body);

        match &hir_body[0] {
            HirNode::For {
                init, cond, update, ..
            } => {
                assert!(init.is_none());
                assert_eq!(cond.base, i);
                assert_eq!(update.op, IrOp::IntSub);
            }
            other => panic!("expected For, got {other:?}"),
        }
    }

    #[test]
    fn test_for_loop_from_cmp_dec_jne_chain_shape() {
        let reg = Varnode::reg(0, 4);
        let cond = Varnode::unique(0x240, 1);
        let zero = Varnode::constant(0, 4);
        let one = Varnode::constant(1, 4);
        let body_tmp = Varnode::unique(0x300, 4);

        let mut hir_body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntNotequal,
                cond,
                smallvec![reg, zero],
                0x1000,
            )),
            HirNode::While {
                cond: ssa_of(cond),
                body: vec![
                    HirNode::Statement(copy_insn(body_tmp, reg, 0x1008)),
                    HirNode::Statement(sub_insn(reg, reg, one, 0x1010)),
                ],
            },
        ];

        recover_for_loops(&mut hir_body);

        match &hir_body[1] {
            HirNode::For {
                init, update, body, ..
            } => {
                assert!(init.is_none());
                assert_eq!(update.output, Some(reg));
                assert_eq!(body.len(), 1, "dec step should move to for update");
            }
            other => panic!("expected For, got {other:?}"),
        }
    }

    #[test]
    fn test_for_loop_counter_used_after_loop_still_recovers_for() {
        let i = Varnode::reg(0, 4);
        let printed = Varnode::reg(16, 4);
        let zero = Varnode::constant(0, 4);
        let one = Varnode::constant(1, 4);

        let mut hir_body = vec![
            HirNode::Statement(copy_insn(i, zero, 0x1000)),
            HirNode::While {
                cond: ssa_of(i),
                body: vec![HirNode::Statement(add_insn(i, i, one, 0x1018))],
            },
            HirNode::Statement(copy_insn(printed, i, 0x1030)),
        ];

        recover_for_loops(&mut hir_body);

        assert_eq!(hir_body.len(), 2, "init + while should collapse to one For");
        assert!(matches!(hir_body[0], HirNode::For { .. }));
        assert!(matches!(hir_body[1], HirNode::Statement(_)));
    }

    #[test]
    fn test_for_loop_no_update_keeps_while() {
        let i = Varnode::reg(0, 4);
        let other = Varnode::reg(8, 4);
        let zero = Varnode::constant(0, 4);
        let one = Varnode::constant(1, 4);

        let mut hir_body = vec![
            HirNode::Statement(copy_insn(i, zero, 0x1000)),
            HirNode::While {
                cond: ssa_of(i),
                body: vec![HirNode::Statement(add_insn(other, other, one, 0x1018))],
            },
        ];

        recover_for_loops(&mut hir_body);

        assert!(
            matches!(hir_body[1], HirNode::While { .. }),
            "no update of counter → must remain While"
        );
    }

    #[test]
    fn test_for_loop_recurses_into_nested() {
        let outer_i = Varnode::reg(0, 4);
        let inner_j = Varnode::reg(8, 4);
        let zero = Varnode::constant(0, 4);
        let one = Varnode::constant(1, 4);

        let inner_loop = vec![
            HirNode::Statement(copy_insn(inner_j, zero, 0x2000)),
            HirNode::While {
                cond: ssa_of(inner_j),
                body: vec![HirNode::Statement(add_insn(inner_j, inner_j, one, 0x2018))],
            },
        ];

        let mut hir_body = vec![
            HirNode::Statement(copy_insn(outer_i, zero, 0x1000)),
            HirNode::While {
                cond: ssa_of(outer_i),
                body: {
                    let mut b = inner_loop;
                    b.push(HirNode::Statement(add_insn(outer_i, outer_i, one, 0x1100)));
                    b
                },
            },
        ];

        recover_for_loops(&mut hir_body);

        match &hir_body[0] {
            HirNode::For { body, .. } => {
                let has_inner_for = body.iter().any(|n| matches!(n, HirNode::For { .. }));
                assert!(has_inner_for, "inner loop should also be recovered as For");
            }
            other => panic!("expected outer For, got {other:?}"),
        }
    }

    #[test]
    fn test_for_loop_compare_condition_recovers_for() {
        let i = Varnode::reg(0, 4);
        let unrelated = Varnode::reg(64, 4);
        let zero = Varnode::constant(0, 4);
        let one = Varnode::constant(1, 4);

        let mut hir_body = vec![
            HirNode::Statement(copy_insn(i, zero, 0x1000)),
            HirNode::While {
                cond: ssa_of(unrelated),
                body: vec![HirNode::Statement(add_insn(i, i, one, 0x1018))],
            },
        ];

        recover_for_loops(&mut hir_body);

        assert_eq!(hir_body.len(), 1);
        assert!(matches!(hir_body[0], HirNode::For { .. }));
    }

    // ── P3-8: Do-while loop recovery tests ──

    #[test]
    fn test_do_while_basic() {
        // BB0 (header, no CBRANCH) → BB1 (latch with CBRANCH: back→BB0, exit→BB2)
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let cond_vn = Varnode::reg(256, 1);

        let mut func = Function::new("do_while_basic", BlockId(0), 0xA000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(r0, &[r8, c1], 0xA000));
        bb0.insns.push(ctrl_insn(IrOp::Branch, 0xA004));
        bb0.successors = smallvec![BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r0, c1], 0xA010));
        bb1.insns.push(cbranch_insn(cond_vn, 0xA014));
        bb1.successors = smallvec![BlockId(0), BlockId(2)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0xA020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        fn contains_do_while(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::DoWhile { .. } => true,
                HirNode::Block(inner) => contains_do_while(inner),
                _ => false,
            })
        }
        assert!(
            contains_do_while(&hir.body),
            "do-while CFG should produce a DoWhile node, got: {:#?}",
            hir.body
        );
    }

    #[test]
    fn test_do_while_vs_while() {
        let r0 = Varnode::reg(0, 8);
        let c1 = Varnode::constant(1, 8);
        let cond_vn = Varnode::reg(256, 1);

        let mut while_func = Function::new("while_fn", BlockId(0), 0xB000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch_insn(cond_vn, 0xB000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r0, c1], 0xB010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0xB014));
        bb1.successors = smallvec![BlockId(0)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0xB020));

        while_func.insert_block(bb0);
        while_func.insert_block(bb1);
        while_func.insert_block(bb2);

        let ssa_while = build_ssa(while_func);
        let hir_while = structure(&ssa_while).expect("while structuring should succeed");

        fn has_while(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::While { .. } => true,
                HirNode::Block(inner) => has_while(inner),
                _ => false,
            })
        }
        fn has_do_while(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::DoWhile { .. } => true,
                HirNode::Block(inner) => has_do_while(inner),
                _ => false,
            })
        }

        assert!(
            has_while(&hir_while.body),
            "while-loop should produce While"
        );
        assert!(
            !has_do_while(&hir_while.body),
            "while-loop should NOT produce DoWhile"
        );

        let mut dw_func = Function::new("do_while_fn", BlockId(0), 0xC000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(r0, &[r0, c1], 0xC000));
        bb0.insns.push(ctrl_insn(IrOp::Branch, 0xC004));
        bb0.successors = smallvec![BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r0, c1], 0xC010));
        bb1.insns.push(cbranch_insn(cond_vn, 0xC014));
        bb1.successors = smallvec![BlockId(0), BlockId(2)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0xC020));

        dw_func.insert_block(bb0);
        dw_func.insert_block(bb1);
        dw_func.insert_block(bb2);

        let ssa_dw = build_ssa(dw_func);
        let hir_dw = structure(&ssa_dw).expect("do-while structuring should succeed");

        assert!(
            has_do_while(&hir_dw.body),
            "do-while should produce DoWhile, got: {:#?}",
            hir_dw.body
        );
        assert!(
            !has_while(&hir_dw.body),
            "do-while should NOT produce While"
        );
    }

    #[test]
    fn test_do_while_exit_found() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let cond_vn = Varnode::reg(256, 1);

        let mut func = Function::new("do_while_exit", BlockId(0), 0xD000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(r0, &[r8, c1], 0xD000));
        bb0.insns.push(ctrl_insn(IrOp::Branch, 0xD004));
        bb0.successors = smallvec![BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r0, c1], 0xD010));
        bb1.insns.push(cbranch_insn(cond_vn, 0xD014));
        bb1.successors = smallvec![BlockId(0), BlockId(2)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(r8, &[r0, c1], 0xD020));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0xD024));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        let has_return = hir.body.iter().any(|n| matches!(n, HirNode::Return(_)));
        assert!(
            has_return,
            "post-loop return should be structured, got: {:#?}",
            hir.body
        );
    }

    // ── P3-16: Try/catch structuring tests ──

    #[test]
    fn test_no_landing_pads_unchanged() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("no_lp", BlockId(0), 0xE000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(r0, &[r8, c1], 0xE000));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0xE008));

        func.insert_block(bb0);

        let ssa = build_ssa(func);
        let empty_pads = BTreeSet::new();
        let hir = super::structure_with_landing_pads(&ssa, &empty_pads)
            .expect("structuring should succeed");

        fn contains_try_catch(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::TryCatch { .. } => true,
                HirNode::Block(inner) => contains_try_catch(inner),
                _ => false,
            })
        }
        assert!(
            !contains_try_catch(&hir.body),
            "no landing pads → no TryCatch nodes, got: {:#?}",
            hir.body
        );
    }

    #[test]
    fn test_try_catch_basic_structure() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("with_lp", BlockId(0), 0xF000);

        // BB0: normal code → BB1
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(r0, &[r8, c1], 0xF000));
        bb0.insns.push(ctrl_insn(IrOp::Branch, 0xF004));
        bb0.successors = smallvec![BlockId(1)];

        // BB1: landing pad handler → return
        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r0, c1], 0xF010));
        bb1.insns.push(ctrl_insn(IrOp::Return, 0xF018));

        func.insert_block(bb0);
        func.insert_block(bb1);

        let ssa = build_ssa(func);
        let mut landing_pads = BTreeSet::new();
        landing_pads.insert(0xF010_u64);

        let hir = super::structure_with_landing_pads(&ssa, &landing_pads)
            .expect("structuring should succeed");

        fn find_try_catch(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::TryCatch { .. } => true,
                HirNode::Block(inner) => find_try_catch(inner),
                _ => false,
            })
        }
        assert!(
            find_try_catch(&hir.body),
            "landing pad at 0xF010 should produce TryCatch, got: {:#?}",
            hir.body
        );

        fn get_try_catch(nodes: &[HirNode]) -> Option<(&[HirNode], &[HirNode])> {
            for n in nodes {
                match n {
                    HirNode::TryCatch {
                        try_body,
                        catch_arms,
                    } => {
                        let arm = catch_arms.first().expect("at least one catch arm");
                        return Some((try_body, &arm.1));
                    }
                    HirNode::Block(inner) => {
                        if let Some(tc) = get_try_catch(inner) {
                            return Some(tc);
                        }
                    }
                    _ => {}
                }
            }
            None
        }
        let (try_body, catch_body) = get_try_catch(&hir.body).expect("should have TryCatch");
        assert!(!try_body.is_empty(), "try body should not be empty");
        assert!(!catch_body.is_empty(), "catch body should not be empty");
    }

    #[test]
    fn test_try_catch_unmatched_landing_pad_ignored() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("unmatched_lp", BlockId(0), 0x10000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(r0, &[r8, c1], 0x10000));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0x10008));

        func.insert_block(bb0);

        let ssa = build_ssa(func);
        let mut landing_pads = BTreeSet::new();
        landing_pads.insert(0xDEAD_u64);

        let hir = super::structure_with_landing_pads(&ssa, &landing_pads)
            .expect("structuring should succeed");

        fn contains_try_catch(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::TryCatch { .. } => true,
                HirNode::Block(inner) => contains_try_catch(inner),
                _ => false,
            })
        }
        assert!(
            !contains_try_catch(&hir.body),
            "unmatched LP address should not produce TryCatch",
        );
    }

    #[test]
    fn test_try_catch_multiple_landing_pads() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);

        let mut func = Function::new("multi_lp", BlockId(0), 0x11000);

        // BB0: normal → BB1
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(r0, &[r8, c1], 0x11000));
        bb0.insns.push(ctrl_insn(IrOp::Branch, 0x11004));
        bb0.successors = smallvec![BlockId(1)];

        // BB1: first landing pad → BB2
        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r0, c1], 0x11010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x11014));
        bb1.successors = smallvec![BlockId(2)];

        // BB2: normal code → BB3
        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(r0, &[r0, c2], 0x11020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x11024));
        bb2.successors = smallvec![BlockId(3)];

        // BB3: second landing pad → return
        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(arith_insn(r8, &[r0, c1], 0x11030));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x11038));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let ssa = build_ssa(func);
        let mut landing_pads = BTreeSet::new();
        landing_pads.insert(0x11010_u64);
        landing_pads.insert(0x11030_u64);

        let hir = super::structure_with_landing_pads(&ssa, &landing_pads)
            .expect("structuring should succeed");

        fn count_try_catch(nodes: &[HirNode]) -> usize {
            nodes
                .iter()
                .map(|n| match n {
                    HirNode::TryCatch {
                        try_body,
                        catch_arms,
                    } => {
                        1 + count_try_catch(try_body)
                            + catch_arms
                                .iter()
                                .map(|(_, body)| count_try_catch(body))
                                .sum::<usize>()
                    }
                    HirNode::TryFinally {
                        try_body,
                        finally_body,
                    } => 1 + count_try_catch(try_body) + count_try_catch(finally_body),
                    HirNode::Block(inner) => count_try_catch(inner),
                    _ => 0,
                })
                .sum()
        }
        let tc_count = count_try_catch(&hir.body);
        assert!(
            tc_count >= 2,
            "two landing pads should produce at least 2 TryCatch nodes, got {tc_count}: {:#?}",
            hir.body
        );
    }

    // ── P4-13: Break statement tests ──

    #[test]
    fn test_break_in_while_loop() {
        // while(true) with conditional exit in body:
        // BB0: header (no cbranch), branch → BB1
        // BB1: body + cbranch → BB2 (continue loop) or BB3 (exit)
        // BB2: latch, branch → BB0
        // BB3: return (exit)
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let cond_vn = Varnode::reg(256, 1);

        let mut func = Function::new("break_while", BlockId(0), 0x20000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(r0, &[r8, c1], 0x20000));
        bb0.insns.push(ctrl_insn(IrOp::Branch, 0x20008));
        bb0.successors = smallvec![BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r0, c1], 0x20010));
        bb1.insns.push(cbranch_insn(cond_vn, 0x20018));
        bb1.successors = smallvec![BlockId(2), BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(r0, &[r0, c1], 0x20020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x20028));
        bb2.successors = smallvec![BlockId(0)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x20030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        fn contains_break(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::Break => true,
                HirNode::Block(inner) => contains_break(inner),
                HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => contains_break(body),
                HirNode::If {
                    then_body,
                    else_body,
                    ..
                } => {
                    contains_break(then_body)
                        || else_body.as_ref().is_some_and(|eb| contains_break(eb))
                }
                _ => false,
            })
        }

        assert!(
            contains_break(&hir.body),
            "loop with conditional exit should contain Break, got: {:#?}",
            hir.body
        );
    }

    #[test]
    fn test_break_replaces_goto_to_exit() {
        // Same structure as above — should use Break, not Goto.
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let cond_vn = Varnode::reg(256, 1);

        let mut func = Function::new("break_no_goto", BlockId(0), 0x21000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(r0, &[r8, c1], 0x21000));
        bb0.insns.push(ctrl_insn(IrOp::Branch, 0x21008));
        bb0.successors = smallvec![BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r0, c1], 0x21010));
        bb1.insns.push(cbranch_insn(cond_vn, 0x21018));
        bb1.successors = smallvec![BlockId(2), BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(r0, &[r0, c1], 0x21020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x21028));
        bb2.successors = smallvec![BlockId(0)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x21030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        fn has_goto(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::Goto(_) => true,
                HirNode::Block(inner) => has_goto(inner),
                HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => has_goto(body),
                HirNode::If {
                    then_body,
                    else_body,
                    ..
                } => has_goto(then_body) || else_body.as_ref().is_some_and(|eb| has_goto(eb)),
                _ => false,
            })
        }

        fn has_break(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::Break => true,
                HirNode::Block(inner) => has_break(inner),
                HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => has_break(body),
                HirNode::If {
                    then_body,
                    else_body,
                    ..
                } => has_break(then_body) || else_body.as_ref().is_some_and(|eb| has_break(eb)),
                _ => false,
            })
        }

        assert!(
            has_break(&hir.body),
            "exit edge should produce Break: {:#?}",
            hir.body
        );
        assert!(
            !has_goto(&hir.body),
            "exit edge should NOT produce Goto: {:#?}",
            hir.body
        );
    }

    #[test]
    fn test_join_point_matches_postdom() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);
        let cond_vn = Varnode::reg(256, 1);

        let mut func = Function::new("postdom_join", BlockId(0), 0x30000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(r0, &[r8, c1], 0x30000));
        bb0.insns.push(cbranch_insn(cond_vn, 0x30004));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r8, c1], 0x30010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x30018));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(r0, &[r8, c2], 0x30020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x30028));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(arith_insn(r0, &[r0, c1], 0x30030));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x30038));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let ssa = build_ssa(func);

        let pdom = ssa
            .post_dom_tree
            .as_ref()
            .expect("should have post_dom_tree");
        assert_eq!(pdom.idom(BlockId(0)), Some(BlockId(3)));

        let hir = structure(&ssa).expect("structuring should succeed");

        fn contains_if(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::If { .. } => true,
                HirNode::Block(inner) => contains_if(inner),
                _ => false,
            })
        }
        assert!(
            contains_if(&hir.body),
            "should produce If node using post-dom join"
        );

        let has_return = hir.body.iter().any(|n| matches!(n, HirNode::Return(_)));
        assert!(has_return, "post-join code should appear after if/else");
    }

    #[test]
    fn test_join_point_deep_nesting() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let cond_vn = Varnode::reg(256, 1);

        let mut func = Function::new("deep_nesting", BlockId(0), 0x40000);

        // BB0: if → BB1 / BB2
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch_insn(cond_vn, 0x40000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        // BB1: then chain through 20 blocks to BB22
        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r8, c1], 0x40010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x40018));
        bb1.successors = smallvec![BlockId(3)];
        func.insert_block(bb0);
        func.insert_block(bb1);

        // Chain: BB3→BB4→...→BB21
        for i in 3..22 {
            let mut bb = BasicBlock::new(BlockId(i));
            bb.insns
                .push(arith_insn(r0, &[r0, c1], 0x40000 + (i as u64) * 0x10));
            bb.insns
                .push(ctrl_insn(IrOp::Branch, 0x40008 + (i as u64) * 0x10));
            bb.successors = smallvec![BlockId(i + 1)];
            func.insert_block(bb);
        }

        // BB22: join point
        let mut bb22 = BasicBlock::new(BlockId(22));
        bb22.insns.push(ctrl_insn(IrOp::Return, 0x40160));
        func.insert_block(bb22);

        // BB2: else, direct to join
        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(r0, &[r8, c1], 0x40020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x40028));
        bb2.successors = smallvec![BlockId(22)];
        func.insert_block(bb2);

        let ssa = build_ssa(func);

        let pdom = ssa
            .post_dom_tree
            .as_ref()
            .expect("should have post_dom_tree");
        assert_eq!(
            pdom.idom(BlockId(0)),
            Some(BlockId(22)),
            "post-dom should find BB22 as join regardless of depth"
        );

        let hir = structure(&ssa).expect("structuring should succeed");

        fn contains_if(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::If { .. } => true,
                HirNode::Block(inner) => contains_if(inner),
                _ => false,
            })
        }
        assert!(
            contains_if(&hir.body),
            "deep nesting (depth > 16) should still find join via post-dom"
        );
    }

    #[test]
    fn test_postdom_switch_join() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);

        let mut func = Function::new("switch_postdom", BlockId(0), 0x50000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(ctrl_insn(IrOp::Branchind, 0x50000));
        bb0.successors = smallvec![BlockId(1), BlockId(2), BlockId(3)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r8, c1], 0x50010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x50014));
        bb1.successors = smallvec![BlockId(4)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(r0, &[r8, c2], 0x50020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x50024));
        bb2.successors = smallvec![BlockId(4)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(arith_insn(r0, &[r0, c1], 0x50030));
        bb3.insns.push(ctrl_insn(IrOp::Branch, 0x50034));
        bb3.successors = smallvec![BlockId(4)];

        let mut bb4 = BasicBlock::new(BlockId(4));
        bb4.insns.push(ctrl_insn(IrOp::Return, 0x50040));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);
        func.insert_block(bb4);

        let ssa = build_ssa(func);
        let pdom = ssa
            .post_dom_tree
            .as_ref()
            .expect("should have post_dom_tree");
        assert_eq!(pdom.idom(BlockId(0)), Some(BlockId(4)));

        let hir = structure(&ssa).expect("structuring should succeed");

        fn contains_switch(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::Switch { .. } => true,
                HirNode::Block(inner) => contains_switch(inner),
                _ => false,
            })
        }
        assert!(
            contains_switch(&hir.body),
            "switch with post-dom join should produce Switch"
        );

        let has_return = hir.body.iter().any(|n| matches!(n, HirNode::Return(_)));
        assert!(has_return, "post-switch join code should be structured");
    }

    #[test]
    fn test_postdom_fallback_to_bfs() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let cond_vn = Varnode::reg(256, 1);

        let mut func = Function::new("fallback_bfs", BlockId(0), 0x60000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch_insn(cond_vn, 0x60000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r8, c1], 0x60010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x60018));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(r0, &[r8, c1], 0x60020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x60028));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x60030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let mut ssa = build_ssa(func);
        ssa.post_dom_tree = None;

        let hir = structure(&ssa).expect("structuring should succeed without post_dom_tree");

        fn contains_if(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::If { .. } => true,
                HirNode::Block(inner) => contains_if(inner),
                _ => false,
            })
        }
        assert!(
            contains_if(&hir.body),
            "BFS fallback should still find join point"
        );
    }

    #[test]
    fn test_postdom_early_return_no_join() {
        let cond_vn = Varnode::reg(256, 1);

        let mut func = Function::new("early_return", BlockId(0), 0x70000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch_insn(cond_vn, 0x70000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl_insn(IrOp::Return, 0x70010));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0x70020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let ssa = build_ssa(func);

        let pdom = ssa
            .post_dom_tree
            .as_ref()
            .expect("should have post_dom_tree");
        let exit = ssa.cfg.exit_block();
        assert_eq!(
            pdom.idom(BlockId(0)),
            Some(exit),
            "both branches return → post-dom is exit"
        );

        let hir = structure(&ssa).expect("structuring should succeed");
        assert!(!hir.body.is_empty());
    }

    fn count_returns(nodes: &[HirNode]) -> usize {
        nodes
            .iter()
            .map(|n| match n {
                HirNode::Return(_) => 1,
                HirNode::Block(inner) => count_returns(inner),
                HirNode::If {
                    then_body,
                    else_body,
                    ..
                } => {
                    count_returns(then_body) + else_body.as_ref().map_or(0, |eb| count_returns(eb))
                }
                HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => count_returns(body),
                HirNode::For { body, .. } => count_returns(body),
                HirNode::Switch { cases, default, .. } => {
                    cases
                        .iter()
                        .map(|(_, b, _)| count_returns(b))
                        .sum::<usize>()
                        + default.as_ref().map_or(0, |d| count_returns(d))
                }
                HirNode::TryCatch {
                    try_body,
                    catch_arms,
                } => {
                    count_returns(try_body)
                        + catch_arms
                            .iter()
                            .map(|(_, body)| count_returns(body))
                            .sum::<usize>()
                }
                HirNode::TryFinally {
                    try_body,
                    finally_body,
                } => count_returns(try_body) + count_returns(finally_body),
                _ => 0,
            })
            .sum()
    }

    #[test]
    fn test_multiple_returns_preserved() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);
        let c3 = Varnode::constant(3, 8);
        let cond_vn = Varnode::reg(256, 1);

        let mut func = Function::new("multi_ret_shared", BlockId(0), 0x80000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch_insn(cond_vn, 0x80000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r8, c1], 0x80010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x80014));
        bb1.successors = smallvec![BlockId(4)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(cbranch_insn(cond_vn, 0x80020));
        bb2.successors = smallvec![BlockId(3), BlockId(4)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(arith_insn(r0, &[r8, c2], 0x80030));
        bb3.insns.push(ctrl_insn(IrOp::Branch, 0x80034));
        bb3.successors = smallvec![BlockId(4)];

        let mut bb4 = BasicBlock::new(BlockId(4));
        bb4.insns.push(arith_insn(r0, &[r0, c3], 0x80040));
        bb4.insns.push(ctrl_insn(IrOp::Return, 0x80048));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);
        func.insert_block(bb4);

        let mut ssa = build_ssa(func);
        assert_eq!(ssa.cfg.predecessors(BlockId(4)).len(), 3);

        let hir_collapsed = structure(&ssa).expect("structuring should succeed");
        assert_eq!(
            count_returns(&hir_collapsed.body),
            1,
            "without eager_returns, shared exit collapses to 1 return"
        );

        let hir = structure_preserve_returns(&mut ssa).expect("structuring should succeed");

        assert_eq!(
            count_returns(&hir.body),
            3,
            "3 predecessors of shared return block must each emit a Return: {:#?}",
            hir.body,
        );
    }

    #[test]
    fn test_single_return_unchanged() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("single_ret", BlockId(0), 0x90000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(r0, &[r8, c1], 0x90000));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0x90008));

        func.insert_block(bb0);

        let mut ssa = build_ssa(func);
        let hir = structure_preserve_returns(&mut ssa).expect("ok");

        assert_eq!(
            count_returns(&hir.body),
            1,
            "single return remains a single return: {:#?}",
            hir.body,
        );
    }

    fn count_gotos(nodes: &[HirNode]) -> usize {
        nodes
            .iter()
            .map(|n| match n {
                HirNode::Goto(_) => 1,
                HirNode::Block(inner) => count_gotos(inner),
                HirNode::If {
                    then_body,
                    else_body,
                    ..
                } => count_gotos(then_body) + else_body.as_ref().map_or(0, |eb| count_gotos(eb)),
                HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => count_gotos(body),
                HirNode::Switch { cases, default, .. } => {
                    cases.iter().map(|(_, b, _)| count_gotos(b)).sum::<usize>()
                        + default.as_ref().map_or(0, |d| count_gotos(d))
                }
                HirNode::TryCatch {
                    try_body,
                    catch_arms,
                } => {
                    count_gotos(try_body)
                        + catch_arms
                            .iter()
                            .map(|(_, body)| count_gotos(body))
                            .sum::<usize>()
                }
                HirNode::TryFinally {
                    try_body,
                    finally_body,
                } => count_gotos(try_body) + count_gotos(finally_body),
                HirNode::For { body, .. } => count_gotos(body),
                _ => 0,
            })
            .sum()
    }

    fn count_labels(nodes: &[HirNode]) -> usize {
        nodes
            .iter()
            .map(|n| match n {
                HirNode::Label(_) => 1,
                HirNode::Block(inner) => count_labels(inner),
                HirNode::If {
                    then_body,
                    else_body,
                    ..
                } => count_labels(then_body) + else_body.as_ref().map_or(0, |eb| count_labels(eb)),
                HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => count_labels(body),
                HirNode::Switch { cases, default, .. } => {
                    cases.iter().map(|(_, b, _)| count_labels(b)).sum::<usize>()
                        + default.as_ref().map_or(0, |d| count_labels(d))
                }
                HirNode::TryCatch {
                    try_body,
                    catch_arms,
                } => {
                    count_labels(try_body)
                        + catch_arms
                            .iter()
                            .map(|(_, body)| count_labels(body))
                            .sum::<usize>()
                }
                HirNode::TryFinally {
                    try_body,
                    finally_body,
                } => count_labels(try_body) + count_labels(finally_body),
                HirNode::For { body, .. } => count_labels(body),
                _ => 0,
            })
            .sum()
    }

    /// P6-5 regression: a clean diamond CFG (BB0 → BB1/BB2 → BB3 → return)
    /// must NOT emit any goto/label. This ensures the new goto-emission path
    /// doesn't fire on every multi-pred join point — only irreducible ones.
    #[test]
    fn test_no_goto_for_clean_diamond() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);
        let cond_vn = Varnode::reg(256, 1);

        let mut func = Function::new("clean_diamond", BlockId(0), 0xC0000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch_insn(cond_vn, 0xC0000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r8, c1], 0xC0010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0xC0018));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(r0, &[r8, c2], 0xC0020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0xC0028));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0xC0030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        assert_eq!(
            count_gotos(&hir.body),
            0,
            "clean diamond must not emit any goto: {:#?}",
            hir.body,
        );
        assert_eq!(
            count_labels(&hir.body),
            0,
            "clean diamond must not emit any label: {:#?}",
            hir.body,
        );
    }

    /// P6-5: an irreducible CFG (two predecessors entering a non-loop-header
    /// join along independent paths that have already been linearized) must
    /// emit at least one goto + label pair. Construct: BB0 → BB1 → BB3,
    /// BB0 → BB2 → BB3, then BB3's other predecessor is reached via a path
    /// the structurer cannot express with `if`/`while`. We force this by
    /// having BB3 reachable via BB1 *and* via a back-edge BB2 → BB1
    /// (creating an irreducible component).
    #[test]
    fn test_goto_emitted_for_irreducible_cycle() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let cond_vn = Varnode::reg(256, 1);

        let mut func = Function::new("irreducible_goto", BlockId(0), 0xD0000);

        // BB0: cbranch → BB1 / BB2 (both enter the irreducible loop)
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch_insn(cond_vn, 0xD0000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        // BB1: arith, cbranch → BB2 / BB3
        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r8, c1], 0xD0010));
        bb1.insns.push(cbranch_insn(cond_vn, 0xD0018));
        bb1.successors = smallvec![BlockId(2), BlockId(3)];

        // BB2: arith, cbranch → BB1 / BB3 (BB2 → BB1 makes BB1 multi-entry)
        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(r0, &[r0, c1], 0xD0020));
        bb2.insns.push(cbranch_insn(cond_vn, 0xD0028));
        bb2.successors = smallvec![BlockId(1), BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0xD0030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("irreducible CFG must not panic");

        let gotos = count_gotos(&hir.body);
        let labels = count_labels(&hir.body);
        assert!(
            gotos >= 1,
            "irreducible CFG must emit at least one goto, got {gotos}: {:#?}",
            hir.body,
        );
        assert!(
            labels >= 1,
            "irreducible CFG must emit a matching label, got {labels}: {:#?}",
            hir.body,
        );
    }

    /// P6-5: every emitted goto must have a matching label in the same HIR
    /// tree. Otherwise a downstream C-printer would produce code that
    /// references an undefined label.
    #[test]
    fn test_goto_label_pairs_match() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let cond_vn = Varnode::reg(256, 1);

        let mut func = Function::new("paired_goto_label", BlockId(0), 0xE0000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch_insn(cond_vn, 0xE0000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r8, c1], 0xE0010));
        bb1.insns.push(cbranch_insn(cond_vn, 0xE0018));
        bb1.successors = smallvec![BlockId(2), BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(r0, &[r0, c1], 0xE0020));
        bb2.insns.push(cbranch_insn(cond_vn, 0xE0028));
        bb2.successors = smallvec![BlockId(1), BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0xE0030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        fn collect_label_ids(nodes: &[HirNode], labels: &mut BTreeSet<u32>) {
            for n in nodes {
                match n {
                    HirNode::Label(LabelId(id)) => {
                        labels.insert(*id);
                    }
                    HirNode::Block(inner) => collect_label_ids(inner, labels),
                    HirNode::If {
                        then_body,
                        else_body,
                        ..
                    } => {
                        collect_label_ids(then_body, labels);
                        if let Some(eb) = else_body {
                            collect_label_ids(eb, labels);
                        }
                    }
                    HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                        collect_label_ids(body, labels);
                    }
                    _ => {}
                }
            }
        }
        fn collect_goto_ids(nodes: &[HirNode], gotos: &mut BTreeSet<u32>) {
            for n in nodes {
                match n {
                    HirNode::Goto(LabelId(id)) => {
                        gotos.insert(*id);
                    }
                    HirNode::Block(inner) => collect_goto_ids(inner, gotos),
                    HirNode::If {
                        then_body,
                        else_body,
                        ..
                    } => {
                        collect_goto_ids(then_body, gotos);
                        if let Some(eb) = else_body {
                            collect_goto_ids(eb, gotos);
                        }
                    }
                    HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                        collect_goto_ids(body, gotos);
                    }
                    _ => {}
                }
            }
        }

        let mut labels = BTreeSet::new();
        let mut gotos = BTreeSet::new();
        collect_label_ids(&hir.body, &mut labels);
        collect_goto_ids(&hir.body, &mut gotos);

        for goto_id in &gotos {
            assert!(
                labels.contains(goto_id),
                "goto {goto_id} has no matching label; labels={labels:?}, gotos={gotos:?}, hir={:#?}",
                hir.body,
            );
        }
    }

    #[test]
    fn structure_does_not_panic_on_stale_panic_site_indices() {
        // Regression: panic_sites populated by an earlier pass may reference
        // (BlockId, idx) pairs that a later pass has removed (e.g. block
        // dropped or instructions truncated). The structurer must not index
        // unconditionally — out-of-range entries are silently dropped.
        use unlace_ir::ssa::PanicKind;

        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("stale_panic_sites", BlockId(0), 0x1000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(r0, &[r8, c1], 0x1000));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0x1008));
        func.insert_block(bb0);

        let mut ssa = build_ssa(func);
        ssa.panic_sites.insert((BlockId(0), 99), PanicKind::Panic);
        ssa.panic_sites.insert((BlockId(42), 0), PanicKind::Abort);
        ssa.panic_sites
            .insert((BlockId(0), 0), PanicKind::BoundsCheck);

        let hir = structure(&ssa).expect("structuring should succeed");

        assert_eq!(
            hir.panic_sites.len(),
            1,
            "only the valid (BlockId(0), 0) entry should survive"
        );
        assert!(hir.panic_sites.contains_key(&0x1000));
    }

    /// t77: A `cmp index, 5; jb dispatch` pattern in the predecessor of a
    /// BRANCHIND should yield a `BoundsCheck { case_count: 5, default_target: BB2 }`
    /// and propagate `case_count` into `Switch::jumptable_cases`.
    #[test]
    fn bounds_check_int_less_recovers_case_count() {
        let r_index = Varnode::reg(0x10, 8);
        let cond_vn = Varnode::reg(0x100, 1);
        let table_base = Varnode::constant(0x20000, 8);
        let c4 = Varnode::constant(4, 8);
        let c5 = Varnode::constant(5, 8);
        let scaled = Varnode::unique(100, 8);
        let addr = Varnode::unique(200, 8);
        let target = Varnode::unique(300, 8);
        let ram = Varnode::constant(1, 8);

        let mut func = Function::new("bounds_switch", BlockId(0), 0x9000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntLess,
            cond_vn,
            smallvec![r_index, c5],
            0x9000,
        ));
        bb0.insns.push(cbranch_insn(cond_vn, 0x9004));
        bb0.successors = smallvec![BlockId(1), BlockId(99)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntMult,
            scaled,
            smallvec![r_index, c4],
            0x9010,
        ));
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![table_base, scaled],
            0x9014,
        ));
        bb1.insns.push(IrInsn::with_output(
            IrOp::Load,
            target,
            smallvec![ram, addr],
            0x9018,
        ));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Branchind,
            smallvec![target],
            0x901c,
        ));
        bb1.successors = smallvec![BlockId(10), BlockId(11), BlockId(12)];

        let mut bb10 = BasicBlock::new(BlockId(10));
        bb10.insns.push(ctrl_insn(IrOp::Return, 0x9100));
        let mut bb11 = BasicBlock::new(BlockId(11));
        bb11.insns.push(ctrl_insn(IrOp::Return, 0x9110));
        let mut bb12 = BasicBlock::new(BlockId(12));
        bb12.insns.push(ctrl_insn(IrOp::Return, 0x9120));

        let mut bb99 = BasicBlock::new(BlockId(99));
        bb99.insns.push(ctrl_insn(IrOp::Return, 0x9200));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb10);
        func.insert_block(bb11);
        func.insert_block(bb12);
        func.insert_block(bb99);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        fn find_switch(nodes: &[HirNode]) -> Option<&HirNode> {
            for n in nodes {
                match n {
                    HirNode::Switch { .. } => return Some(n),
                    HirNode::Block(inner) => {
                        if let Some(s) = find_switch(inner) {
                            return Some(s);
                        }
                    }
                    HirNode::If {
                        then_body,
                        else_body,
                        ..
                    } => {
                        if let Some(s) = find_switch(then_body) {
                            return Some(s);
                        }
                        if let Some(eb) = else_body {
                            if let Some(s) = find_switch(eb) {
                                return Some(s);
                            }
                        }
                    }
                    _ => {}
                }
            }
            None
        }
        let switch = find_switch(&hir.body).expect("should produce a Switch");
        match switch {
            HirNode::Switch {
                jumptable_cases, ..
            } => {
                assert_eq!(
                    *jumptable_cases,
                    Some(5),
                    "IntLess(index, 5) should give case_count=5"
                );
            }
            _ => panic!(),
        }
    }

    /// t77: `IntSub(index, K)` followed by a CBRANCH on the high bit acts as
    /// `index >= K` — the switch path is ConditionalFalse and case_count = K.
    #[test]
    fn bounds_check_int_sub_recovers_case_count() {
        let ctx = make_bounds_ctx_int_sub();
        let switch_block = BlockId(1);
        let index = SsaVarnode {
            base: Varnode::reg(0x10, 8),
            version: 0,
        };
        let bc = ctx
            .extract_bounds_check(switch_block, &index)
            .expect("IntSub bounds pattern should match");
        assert_eq!(bc.case_count, 7, "IntSub(index, 7) → case_count = 7");
    }

    /// t74: `IntAnd(raw, 0xF)` chained into a multiply-scale should resolve
    /// down to `raw` when walked through the bitwise chain.
    #[test]
    fn bitwise_chain_int_and_resolves_to_source() {
        let raw = Varnode::reg(0x20, 8);
        let masked = Varnode::unique(40, 8);
        let scaled = Varnode::unique(50, 8);
        let mask = Varnode::constant(0xF, 8);
        let scale = Varnode::constant(8, 8);

        let mut func = Function::new("and_chain", BlockId(0), 0xB000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAnd,
            masked,
            smallvec![raw, mask],
            0xB000,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntMult,
            scaled,
            smallvec![masked, scale],
            0xB002,
        ));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0xB004));
        func.insert_block(bb0);

        let ssa = build_ssa(func);
        let leaked: &'static SsaFunction = Box::leak(Box::new(ssa));
        let ctx = StructureCtx::new(leaked);
        let scaled_sv = SsaVarnode {
            base: scaled,
            version: 0,
        };
        let out = ctx
            .extract_index_from_scale(BlockId(0), &scaled_sv)
            .expect("should resolve");
        assert_eq!(
            out.base, raw,
            "IntAnd(raw, mask) chain should resolve back to raw"
        );
    }

    /// t74: `IntRight(raw, 4)` chain should walk through to `raw`.
    #[test]
    fn bitwise_chain_int_right_resolves_to_source() {
        let raw = Varnode::reg(0x20, 8);
        let shifted = Varnode::unique(40, 8);
        let scaled = Varnode::unique(50, 8);
        let four = Varnode::constant(4, 8);
        let scale = Varnode::constant(4, 8);

        let mut func = Function::new("right_chain", BlockId(0), 0xC000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntRight,
            shifted,
            smallvec![raw, four],
            0xC000,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntMult,
            scaled,
            smallvec![shifted, scale],
            0xC002,
        ));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0xC004));
        func.insert_block(bb0);

        let ssa = build_ssa(func);
        let leaked: &'static SsaFunction = Box::leak(Box::new(ssa));
        let ctx = StructureCtx::new(leaked);
        let scaled_sv = SsaVarnode {
            base: scaled,
            version: 0,
        };
        let out = ctx
            .extract_index_from_scale(BlockId(0), &scaled_sv)
            .expect("should resolve");
        assert_eq!(
            out.base, raw,
            "IntRight(raw, shift) chain should resolve back to raw"
        );
    }

    /// t74: chained `(x >> 4) & 0xF` then scale should resolve all the way
    /// through both ops back to `x`.
    #[test]
    fn bitwise_chain_shift_then_mask_resolves_to_source() {
        let raw = Varnode::reg(0x20, 8);
        let shifted = Varnode::unique(40, 8);
        let masked = Varnode::unique(45, 8);
        let scaled = Varnode::unique(50, 8);
        let four = Varnode::constant(4, 8);
        let mask = Varnode::constant(0xF, 8);
        let scale = Varnode::constant(8, 8);

        let mut func = Function::new("shift_mask_chain", BlockId(0), 0xD000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntRight,
            shifted,
            smallvec![raw, four],
            0xD000,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAnd,
            masked,
            smallvec![shifted, mask],
            0xD002,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntMult,
            scaled,
            smallvec![masked, scale],
            0xD004,
        ));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0xD006));
        func.insert_block(bb0);

        let ssa = build_ssa(func);
        let leaked: &'static SsaFunction = Box::leak(Box::new(ssa));
        let ctx = StructureCtx::new(leaked);
        let scaled_sv = SsaVarnode {
            base: scaled,
            version: 0,
        };
        let out = ctx
            .extract_index_from_scale(BlockId(0), &scaled_sv)
            .expect("should resolve");
        assert_eq!(
            out.base, raw,
            "(x >> 4) & 0xF chain should resolve back to x"
        );
    }

    fn make_bounds_ctx_int_sub() -> StructureCtx<'static> {
        let r_index = Varnode::reg(0x10, 8);
        let cond_vn = Varnode::reg(0x100, 1);
        let c7 = Varnode::constant(7, 8);
        let sub_out = Varnode::unique(50, 8);

        let mut func = Function::new("sub_bounds", BlockId(0), 0xA000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntSub,
            sub_out,
            smallvec![r_index, c7],
            0xA000,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntLess,
            cond_vn,
            smallvec![r_index, c7],
            0xA002,
        ));
        bb0.insns.push(cbranch_insn(cond_vn, 0xA004));
        bb0.successors = smallvec![BlockId(1), BlockId(99)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Branchind,
            smallvec![sub_out],
            0xA010,
        ));
        bb1.successors = smallvec![BlockId(10), BlockId(11)];

        let mut bb10 = BasicBlock::new(BlockId(10));
        bb10.insns.push(ctrl_insn(IrOp::Return, 0xA100));
        let mut bb11 = BasicBlock::new(BlockId(11));
        bb11.insns.push(ctrl_insn(IrOp::Return, 0xA110));
        let mut bb99 = BasicBlock::new(BlockId(99));
        bb99.insns.push(ctrl_insn(IrOp::Return, 0xA200));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb10);
        func.insert_block(bb11);
        func.insert_block(bb99);

        let ssa = build_ssa(func);
        let leaked: &'static SsaFunction = Box::leak(Box::new(ssa));
        StructureCtx::new(leaked)
    }

    /// t125: an ARM/Thumb byte-table indirect-branch shape (LOAD u8 +
    /// INT_ADD + BRANCHIND) should be classified as
    /// `IndirectBranchKind::ArmThumbTable` and recorded on
    /// `HirFunction::indirect_branch_kinds` keyed by the BRANCHIND VA.
    #[test]
    fn structurer_classifies_arm_thumb_indirect_branch_when_pattern_matches() {
        let table_base = Varnode::constant(0x8000, 4);
        let idx = Varnode::reg(0x10, 4);
        let off_byte = Varnode::unique(1, 1);
        let off_word = Varnode::unique(2, 4);
        let target = Varnode::unique(3, 4);

        let mut func = Function::new("arm_thumb_tbb", BlockId(0), 0x1000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::Load,
            off_byte,
            smallvec![Varnode::constant(1, 8), table_base, idx],
            0x1000,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            target,
            smallvec![table_base, off_word],
            0x1004,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Branchind,
            smallvec![target],
            0x1008,
        ));
        bb0.successors = smallvec![BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl_insn(IrOp::Return, 0x1010));

        func.insert_block(bb0);
        func.insert_block(bb1);

        let ssa = build_ssa(func);
        let hir = structure_with_arch(&ssa, ArchId::Arm).expect("structuring should succeed");

        assert_eq!(
            hir.indirect_branch_kinds.get(&0x1008),
            Some(&IndirectBranchKind::ArmThumbTable),
            "ARM TBB-shape BRANCHIND should classify as ArmThumbTable"
        );
    }

    /// t125: An x86 indirect branch whose successors don't form a
    /// structured switch should leave `indirect_branch_kinds` empty
    /// (the existing generic / x86 switch path already handles those).
    #[test]
    fn structurer_leaves_indirect_branch_kinds_empty_for_x86() {
        let table_base = Varnode::constant(0x8000, 8);
        let idx = Varnode::reg(0x10, 8);
        let target = Varnode::unique(1, 8);

        let mut func = Function::new("x86_unstructured", BlockId(0), 0x2000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::Load,
            target,
            smallvec![Varnode::constant(1, 8), table_base, idx],
            0x2000,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Branchind,
            smallvec![target],
            0x2004,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl_insn(IrOp::Return, 0x2100));
        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0x2200));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let ssa = build_ssa(func);
        let hir =
            structure_with_arch(&ssa, ArchId::X86_64).expect("structuring should succeed");

        assert!(
            hir.indirect_branch_kinds.is_empty(),
            "x86 BRANCHIND with multiple IndirectJump successors is consumed by \
             the structured-switch path and must not appear in indirect_branch_kinds"
        );
    }

    // -------------------------------------------------------------------
    // t148: IT-block guard → HirNode::GuardedIf
    // -------------------------------------------------------------------

    fn guarded_arith(output: Varnode, inputs: &[Varnode], addr: u64, cc: u8) -> IrInsn {
        let mut insn = arith_insn(output, inputs, addr);
        insn.guard = Some(cc);
        insn
    }

    fn collect_guarded_ifs(nodes: &[HirNode], out: &mut Vec<(u8, usize, usize)>) {
        for n in nodes {
            match n {
                HirNode::GuardedIf {
                    cond_code,
                    then_body,
                    else_body,
                } => {
                    out.push((*cond_code, then_body.len(), else_body.len()));
                    collect_guarded_ifs(then_body, out);
                    collect_guarded_ifs(else_body, out);
                }
                HirNode::Block(inner) => collect_guarded_ifs(inner, out),
                HirNode::If {
                    then_body,
                    else_body,
                    ..
                } => {
                    collect_guarded_ifs(then_body, out);
                    if let Some(eb) = else_body {
                        collect_guarded_ifs(eb, out);
                    }
                }
                _ => {}
            }
        }
    }

    #[test]
    fn it_block_emits_if_in_hir() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("it_single", BlockId(0), 0x5000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        // Single insn carrying an IT-block guard (cond=EQ=0).
        bb0.insns.push(guarded_arith(r0, &[r8, c1], 0x5000, 0));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0x5004));
        func.insert_block(bb0);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        let mut found = Vec::new();
        collect_guarded_ifs(&hir.body, &mut found);
        assert_eq!(found.len(), 1, "expected one GuardedIf, got {found:?}");
        assert_eq!(found[0].0, 0, "cond_code should be EQ (0)");
        assert_eq!(found[0].1, 1, "then_body should hold the single guarded insn");
        assert_eq!(found[0].2, 0, "else_body empty for pure IT");
    }

    #[test]
    fn consecutive_same_cond_insns_grouped() {
        let r0 = Varnode::reg(0, 8);
        let r1 = Varnode::reg(8, 8);
        let r2 = Varnode::reg(16, 8);
        let r3 = Varnode::reg(24, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("it_grouped", BlockId(0), 0x6000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(guarded_arith(r0, &[r1, c1], 0x6000, 0));
        bb0.insns.push(guarded_arith(r2, &[r1, c1], 0x6004, 0));
        bb0.insns.push(guarded_arith(r3, &[r1, c1], 0x6008, 0));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0x600C));
        func.insert_block(bb0);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        let mut found = Vec::new();
        collect_guarded_ifs(&hir.body, &mut found);
        assert_eq!(
            found.len(),
            1,
            "three same-cond insns should fuse into one GuardedIf, got {found:?}"
        );
        assert_eq!(found[0].0, 0);
        assert_eq!(
            found[0].1, 3,
            "all three guarded insns should land in then_body"
        );
        assert_eq!(found[0].2, 0, "else_body empty for pure IT");
    }

    // -------------------------------------------------------------------
    // t149: ITE else-fusion
    // -------------------------------------------------------------------

    #[test]
    fn ite_block_fuses_into_if_else() {
        let r0 = Varnode::reg(0, 8);
        let r1 = Varnode::reg(8, 8);
        let r2 = Varnode::reg(16, 8);
        let r3 = Varnode::reg(24, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("ite_fuse", BlockId(0), 0x7000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(guarded_arith(r0, &[r1, c1], 0x7000, 0));
        bb0.insns.push(guarded_arith(r2, &[r1, c1], 0x7004, 0));
        bb0.insns.push(guarded_arith(r3, &[r1, c1], 0x7008, 1));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0x700C));
        func.insert_block(bb0);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        let mut found = Vec::new();
        collect_guarded_ifs(&hir.body, &mut found);
        assert_eq!(
            found.len(),
            1,
            "T+E lanes should fuse into one GuardedIf, got {found:?}"
        );
        assert_eq!(found[0].0, 0, "fused cond_code keeps the T-lane cond (EQ)");
        assert_eq!(found[0].1, 2, "then_body has the two T-lane insns");
        assert_eq!(found[0].2, 1, "else_body has the one E-lane insn");
    }

    #[test]
    fn iteee_fuses_then_keeps_else_pure() {
        let r0 = Varnode::reg(0, 8);
        let r1 = Varnode::reg(8, 8);
        let r2 = Varnode::reg(16, 8);
        let r3 = Varnode::reg(24, 8);
        let r4 = Varnode::reg(32, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("iteee_fuse", BlockId(0), 0x8000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(guarded_arith(r0, &[r1, c1], 0x8000, 0));
        bb0.insns.push(guarded_arith(r2, &[r1, c1], 0x8004, 1));
        bb0.insns.push(guarded_arith(r3, &[r1, c1], 0x8008, 1));
        bb0.insns.push(guarded_arith(r4, &[r1, c1], 0x800C, 1));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0x8010));
        func.insert_block(bb0);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        let mut found = Vec::new();
        collect_guarded_ifs(&hir.body, &mut found);
        assert_eq!(found.len(), 1, "ITEEE fuses to one GuardedIf, got {found:?}");
        assert_eq!(found[0].0, 0);
        assert_eq!(found[0].1, 1, "single T-lane insn");
        assert_eq!(found[0].2, 3, "three E-lane insns");
    }

    #[test]
    fn consecutive_unrelated_conds_dont_fuse() {
        let r0 = Varnode::reg(0, 8);
        let r1 = Varnode::reg(8, 8);
        let r2 = Varnode::reg(16, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("no_fuse", BlockId(0), 0x9000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(guarded_arith(r0, &[r1, c1], 0x9000, 0));
        bb0.insns.push(guarded_arith(r2, &[r1, c1], 0x9004, 12));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0x9008));
        func.insert_block(bb0);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        let mut found = Vec::new();
        collect_guarded_ifs(&hir.body, &mut found);
        assert_eq!(
            found.len(),
            2,
            "non-inverse adjacent guards stay as two GuardedIfs, got {found:?}"
        );
        assert_eq!(found[0].2, 0);
        assert_eq!(found[1].2, 0);
    }

    // -------------------------------------------------------------------
    // t167: GuardedIf → GuardedTernary idiom recognition
    // -------------------------------------------------------------------

    fn guarded_copy(output: Varnode, input: Varnode, addr: u64, cc: u8) -> IrInsn {
        let mut insn = copy_insn(output, input, addr);
        insn.guard = Some(cc);
        insn
    }

    fn collect_guarded_ternaries(nodes: &[HirNode], out: &mut Vec<(u8, Varnode)>) {
        for n in nodes {
            match n {
                HirNode::GuardedTernary {
                    cond_code, output, ..
                } => out.push((*cond_code, *output)),
                HirNode::Block(inner) => collect_guarded_ternaries(inner, out),
                HirNode::If {
                    then_body,
                    else_body,
                    ..
                } => {
                    collect_guarded_ternaries(then_body, out);
                    if let Some(eb) = else_body {
                        collect_guarded_ternaries(eb, out);
                    }
                }
                HirNode::GuardedIf {
                    then_body,
                    else_body,
                    ..
                } => {
                    collect_guarded_ternaries(then_body, out);
                    collect_guarded_ternaries(else_body, out);
                }
                _ => {}
            }
        }
    }

    /// The canonical ITE-fold idiom:
    ///   IT EQ; movs r0, #1; mov r0, #2  ≈  r0 = cond_eq ? 1 : 2.
    /// After `fuse_guarded_if_else` produces a single `GuardedIf` with
    /// `else_body`, `fold_guarded_ternary` must collapse it into one
    /// `GuardedTernary` carrying the EQ cond and r0 as the shared output.
    #[test]
    fn t167_ite_with_copies_folds_to_guarded_ternary() {
        let r0 = Varnode::reg(0, 8);
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);

        let mut func = Function::new("ite_fold_copy", BlockId(0), 0xA000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        // T-lane: r0 = 1  (cond=EQ=0)
        bb0.insns.push(guarded_copy(r0, c1, 0xA000, 0));
        // E-lane: r0 = 2  (cond=NE=1, the inverse of EQ)
        bb0.insns.push(guarded_copy(r0, c2, 0xA004, 1));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0xA008));
        func.insert_block(bb0);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        // Exactly one GuardedTernary, none of the original GuardedIfs left.
        let mut ternaries = Vec::new();
        collect_guarded_ternaries(&hir.body, &mut ternaries);
        assert_eq!(
            ternaries.len(),
            1,
            "expected 1 GuardedTernary, got {ternaries:?}"
        );
        assert_eq!(ternaries[0].0, 0, "cond_code should be EQ (T-lane cond)");
        assert_eq!(ternaries[0].1, r0, "output should be r0");

        let mut guarded_ifs = Vec::new();
        collect_guarded_ifs(&hir.body, &mut guarded_ifs);
        assert!(
            guarded_ifs.is_empty(),
            "the GuardedIf should have been folded away, got {guarded_ifs:?}"
        );

        // The folded node carries the two Copy insns intact.
        let HirNode::GuardedTernary {
            then_insn,
            else_insn,
            ..
        } = hir
            .body
            .iter()
            .find(|n| matches!(n, HirNode::GuardedTernary { .. }))
            .expect("GuardedTernary present in top-level body")
        else {
            unreachable!()
        };
        assert_eq!(then_insn.op, IrOp::Copy);
        assert_eq!(else_insn.op, IrOp::Copy);
        assert_eq!(then_insn.inputs[0], c1);
        assert_eq!(else_insn.inputs[0], c2);
    }

    /// Same shape, different cond code (GT/LE pair). Verifies the fold is
    /// not hard-coded to EQ/NE and that the chosen `cond_code` is the
    /// T-lane's (so the C printer can render `cond_gt ? a : b`).
    #[test]
    fn t167_ite_with_alt_cond_pair_folds() {
        let r5 = Varnode::reg(40, 8);
        let c10 = Varnode::constant(10, 8);
        let c20 = Varnode::constant(20, 8);

        let mut func = Function::new("ite_fold_gt", BlockId(0), 0xB000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        // T-lane cond=GT=12, E-lane cond=LE=13 (inverses).
        bb0.insns.push(guarded_copy(r5, c10, 0xB000, 12));
        bb0.insns.push(guarded_copy(r5, c20, 0xB004, 13));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0xB008));
        func.insert_block(bb0);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        let mut ternaries = Vec::new();
        collect_guarded_ternaries(&hir.body, &mut ternaries);
        assert_eq!(ternaries.len(), 1, "GT/LE pair must fold: {ternaries:?}");
        assert_eq!(ternaries[0].0, 12, "cond_code should be GT (T-lane)");
        assert_eq!(ternaries[0].1, r5);
    }

    /// Negative: if either arm has more than one statement, the fold must
    /// NOT fire. The `GuardedIf` must survive intact (we get back zero
    /// GuardedTernaries and one GuardedIf with else_body).
    #[test]
    fn t167_ite_with_multi_insn_then_arm_does_not_fold() {
        let r0 = Varnode::reg(0, 8);
        let r1 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);
        let c3 = Varnode::constant(3, 8);

        let mut func = Function::new("ite_multi_then", BlockId(0), 0xC000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        // T-lane: two insns (r1 = 1; r0 = 2). The structurer groups both
        // under the same EQ guard so the then_body has length 2 — the
        // single-statement precondition of the fold fails.
        bb0.insns.push(guarded_copy(r1, c1, 0xC000, 0));
        bb0.insns.push(guarded_copy(r0, c2, 0xC004, 0));
        // E-lane: single insn r0 = 3 (cond=NE).
        bb0.insns.push(guarded_copy(r0, c3, 0xC008, 1));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0xC00C));
        func.insert_block(bb0);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");

        let mut ternaries = Vec::new();
        collect_guarded_ternaries(&hir.body, &mut ternaries);
        assert!(
            ternaries.is_empty(),
            "multi-insn then-arm must NOT collapse to a ternary, got {ternaries:?}"
        );

        let mut guarded_ifs = Vec::new();
        collect_guarded_ifs(&hir.body, &mut guarded_ifs);
        assert_eq!(
            guarded_ifs.len(),
            1,
            "the original GuardedIf must survive, got {guarded_ifs:?}"
        );
        // cond, then-body length, else-body length.
        assert_eq!(guarded_ifs[0].0, 0);
        assert_eq!(guarded_ifs[0].1, 2, "then-arm keeps its two statements");
        assert_eq!(guarded_ifs[0].2, 1, "else-arm keeps its one statement");
    }

    // -----------------------------------------------------------------------
    // t180: AArch64 CMP+CSEL → HirNode::CselTernary fold tests.
    //
    // Each test builds a single-block SSA function shaped like the lifter
    // output for
    //     CMP  X0, X1                 ; IntSub(X0, X1) → unique + NZCV flags
    //     CSEL Xd, Xt, Xf, <cc>       ; Callother(0x330, cond, Xt, Xf, cc) → Xd
    //     RET
    // and asserts the structurer's `fold_csel_ternary` pass collapses the
    // pair into a single `HirNode::CselTernary` with the expected
    // comparison opcode (EQ→IntEqual, NE→IntNotequal, GE→IntSlessequal
    // with operands swapped, LT→IntSless).
    // -----------------------------------------------------------------------

    /// Build the synthetic `IntSub` an AArch64 CMP/SUBS lifts to.
    fn t180_cmp_insn(lhs: Varnode, rhs: Varnode, dst: Varnode, addr: u64) -> IrInsn {
        IrInsn::with_output(IrOp::IntSub, dst, smallvec![lhs, rhs], addr)
    }

    /// Build the synthetic Callother an AArch64 CSEL lifts to, including
    /// the trailing `Varnode::constant(cc, 1)` the lifter appends so the
    /// structurer can recover the cc without redoing dataflow.
    fn t180_csel_insn(
        rd: Varnode,
        true_val: Varnode,
        false_val: Varnode,
        cond_vn: Varnode,
        cc: u8,
        addr: u64,
    ) -> IrInsn {
        IrInsn::with_output(
            IrOp::Callother,
            rd,
            smallvec![
                Varnode::constant(0x330, 8),
                cond_vn,
                true_val,
                false_val,
                Varnode::constant(cc as u64, 1),
            ],
            addr,
        )
    }

    fn collect_csel_ternaries(nodes: &[HirNode], out: &mut Vec<(IrOp, Varnode, Varnode, Varnode)>) {
        for n in nodes {
            match n {
                HirNode::CselTernary {
                    cmp_op,
                    cmp_lhs,
                    cmp_rhs,
                    output,
                    ..
                } => out.push((*cmp_op, *cmp_lhs, *cmp_rhs, *output)),
                HirNode::Block(inner) => collect_csel_ternaries(inner, out),
                HirNode::If {
                    then_body,
                    else_body,
                    ..
                } => {
                    collect_csel_ternaries(then_body, out);
                    if let Some(eb) = else_body {
                        collect_csel_ternaries(eb, out);
                    }
                }
                _ => {}
            }
        }
    }

    fn t180_run_csel(cc: u8) -> (Vec<(IrOp, Varnode, Varnode, Varnode)>, Vec<HirNode>) {
        // Operand register varnodes.
        let x0 = Varnode::reg(0, 8); // CMP LHS
        let x1 = Varnode::reg(8, 8); // CMP RHS
        let x2 = Varnode::reg(16, 8); // CSEL Rd
        let x3 = Varnode::reg(24, 8); // CSEL true
        let x4 = Varnode::reg(32, 8); // CSEL false
        let sub_dst = Varnode::unique(0, 8);
        // cond_vn opaque — fold uses inputs[4] cc constant, not this varnode.
        let zf = Varnode::reg(265, 1);

        let mut func = Function::new("csel_fold", BlockId(0), 0xD000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(t180_cmp_insn(x0, x1, sub_dst, 0xD000));
        bb0.insns.push(t180_csel_insn(x2, x3, x4, zf, cc, 0xD004));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0xD008));
        func.insert_block(bb0);

        let ssa = build_ssa(func);
        let hir = structure(&ssa).expect("structuring should succeed");
        let mut ternaries = Vec::new();
        collect_csel_ternaries(&hir.body, &mut ternaries);
        (ternaries, hir.body)
    }

    #[test]
    fn t180_cmp_csel_eq_folds() {
        // CSEL X2, X3, X4, EQ → X2 = (X0 == X1) ? X3 : X4
        let (ternaries, _) = t180_run_csel(1); // ARM64_CC_EQ
        assert_eq!(ternaries.len(), 1, "expected 1 CselTernary, got {ternaries:?}");
        let (op, lhs, rhs, out) = ternaries[0];
        assert_eq!(op, IrOp::IntEqual, "EQ → IntEqual");
        assert_eq!(lhs, Varnode::reg(0, 8), "lhs = CMP first operand (X0)");
        assert_eq!(rhs, Varnode::reg(8, 8), "rhs = CMP second operand (X1)");
        assert_eq!(out, Varnode::reg(16, 8), "output = CSEL Rd (X2)");
    }

    #[test]
    fn t180_cmp_csel_ne_folds() {
        // CSEL X2, X3, X4, NE → X2 = (X0 != X1) ? X3 : X4
        let (ternaries, _) = t180_run_csel(2); // ARM64_CC_NE
        assert_eq!(ternaries.len(), 1, "expected 1 CselTernary, got {ternaries:?}");
        let (op, lhs, rhs, _) = ternaries[0];
        assert_eq!(op, IrOp::IntNotequal, "NE → IntNotequal");
        assert_eq!(lhs, Varnode::reg(0, 8));
        assert_eq!(rhs, Varnode::reg(8, 8));
    }

    #[test]
    fn t180_cmp_csel_ge_folds() {
        // CSEL X2, X3, X4, GE → X2 = (X0 >= X1) ? X3 : X4 (signed).
        // The fold rewrites `a >= b` as `IntSlessequal(b, a)` (swap=true),
        // so the recovered (lhs, rhs) pair is (X1, X0) — i.e. swapped.
        let (ternaries, _) = t180_run_csel(11); // ARM64_CC_GE
        assert_eq!(ternaries.len(), 1, "expected 1 CselTernary, got {ternaries:?}");
        let (op, lhs, rhs, _) = ternaries[0];
        assert_eq!(op, IrOp::IntSlessequal, "GE → IntSlessequal (signed, swapped)");
        assert_eq!(lhs, Varnode::reg(8, 8), "lhs after swap = CMP's Rm (X1)");
        assert_eq!(rhs, Varnode::reg(0, 8), "rhs after swap = CMP's Rn (X0)");
    }

    #[test]
    fn t180_cmp_csel_lt_folds() {
        // CSEL X2, X3, X4, LT → X2 = (X0 < X1) ? X3 : X4 (signed, no swap).
        let (ternaries, _) = t180_run_csel(12); // ARM64_CC_LT
        assert_eq!(ternaries.len(), 1, "expected 1 CselTernary, got {ternaries:?}");
        let (op, lhs, rhs, _) = ternaries[0];
        assert_eq!(op, IrOp::IntSless, "LT → IntSless (signed)");
        assert_eq!(lhs, Varnode::reg(0, 8));
        assert_eq!(rhs, Varnode::reg(8, 8));
    }
}
