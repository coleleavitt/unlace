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
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::eager_returns::eager_returns;
use crate::hir::{HirFunction, HirNode, LabelId, SwitchCase};

/// Errors that can occur during control-flow structuring.
#[derive(Debug, thiserror::Error)]
pub enum StructureError {
    #[error("entry block {0} not found in function")]
    MissingEntry(BlockId),
}

/// Recover structured control flow from an [`SsaFunction`].
///
/// This is the main entry point. The algorithm:
/// 1. Detect natural loops (back-edges where the target dominates the source).
/// 2. Walk the dominator tree in pre-order, pattern-matching if/else and
///    loop constructs at each node.
/// 3. Any CFG edge that doesn't fit a structured pattern becomes a goto/label.
pub fn structure(func: &SsaFunction) -> Result<HirFunction, StructureError> {
    let mut ctx = StructureCtx::new(func);
    let entry = func.function.entry;

    if !func.function.blocks.contains_key(&entry) && !func.function.blocks.is_empty() {
        return Err(StructureError::MissingEntry(entry));
    }

    let mut body = ctx.structure_region(entry);
    strip_unused_labels(&mut body);
    recover_for_loops(&mut body);

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
    })
}

/// Like [`structure`] but wraps regions at `landing_pad_addrs` in `TryCatch` nodes.
///
/// When `landing_pad_addrs` is empty this behaves identically to [`structure`].
pub fn structure_with_landing_pads(
    func: &SsaFunction,
    landing_pad_addrs: &BTreeSet<u64>,
) -> Result<HirFunction, StructureError> {
    let mut hir = structure(func)?;
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
pub fn structure_preserve_returns(
    func: &mut SsaFunction,
) -> Result<HirFunction, StructureError> {
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
    let split_idx = nodes.iter().position(|node| {
        node_starts_at_landing_pad(node, landing_pad_addrs)
    });

    let Some(idx) = split_idx else {
        return nodes.into_iter().map(|n| {
            recurse_try_catch_children(n, landing_pad_addrs, func)
        }).collect();
    };

    let (try_nodes, catch_and_rest) = nodes.split_at(idx);

    let catch_end = catch_and_rest.iter().position(|node| {
        !node_starts_at_landing_pad(node, landing_pad_addrs)
    }).unwrap_or(catch_and_rest.len());

    let try_body: Vec<HirNode> = try_nodes.to_vec();
    let catch_body: Vec<HirNode> = catch_and_rest[..catch_end].to_vec();
    let rest: Vec<HirNode> = catch_and_rest[catch_end..].to_vec();

    let mut result = Vec::new();
    if try_body.is_empty() {
        result.extend(catch_body);
    } else {
        result.push(HirNode::TryCatch { try_body, catch_body });
    }

    if !rest.is_empty() {
        result.extend(wrap_try_catch(rest, landing_pad_addrs, func));
    }

    result
}

fn node_starts_at_landing_pad(
    node: &HirNode,
    landing_pad_addrs: &BTreeSet<u64>,
) -> bool {
    match node {
        HirNode::Statement(insn) => landing_pad_addrs.contains(&insn.addr),
        HirNode::Block(children) => {
            children.first().is_some_and(|n| {
                node_starts_at_landing_pad(n, landing_pad_addrs)
            })
        }
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
        HirNode::If { cond, then_body, else_body } => {
            HirNode::If {
                cond,
                then_body: wrap_try_catch(then_body, landing_pad_addrs, func),
                else_body: else_body.map(|eb| wrap_try_catch(eb, landing_pad_addrs, func)),
            }
        }
        HirNode::While { cond, body } => {
            HirNode::While {
                cond,
                body: wrap_try_catch(body, landing_pad_addrs, func),
            }
        }
        HirNode::DoWhile { body, cond } => {
            HirNode::DoWhile {
                body: wrap_try_catch(body, landing_pad_addrs, func),
                cond,
            }
        }
        HirNode::For { init, cond, update, body } => {
            HirNode::For {
                init,
                cond,
                update,
                body: wrap_try_catch(body, landing_pad_addrs, func),
            }
        }
        HirNode::Switch { cond, cases, default } => {
            HirNode::Switch {
                cond,
                cases: cases.into_iter().map(|(c, body, ft)| {
                    (c, wrap_try_catch(body, landing_pad_addrs, func), ft)
                }).collect(),
                default: default.map(|d| wrap_try_catch(d, landing_pad_addrs, func)),
            }
        }
        HirNode::TryCatch { try_body, catch_body } => {
            HirNode::TryCatch {
                try_body: wrap_try_catch(try_body, landing_pad_addrs, func),
                catch_body: wrap_try_catch(catch_body, landing_pad_addrs, func),
            }
        }
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

        for (i, insn) in block.insns.iter().enumerate() {
            if self.is_frame_setup(bid, i) {
                continue;
            }
            match insn.op {
                // Skip control-flow terminators — they're handled structurally.
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
                _ => {
                    nodes.push(HirNode::Statement(insn.clone()));
                }
            }
        }
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

        let num_cases = if targets.len() > 2 { targets.len() - 1 } else { targets.len() };
        let mut cases = Vec::new();
        let mut default_body = None;
        for (i, &tgt) in targets.iter().enumerate() {
            if i == targets.len() - 1 && targets.len() > 2 {
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

        let switch_node = HirNode::Switch {
            cond,
            cases,
            default: default_body,
        };

        let combined = if pre_stmts.is_empty() {
            switch_node
        } else {
            pre_stmts.push(switch_node);
            HirNode::Block(pre_stmts)
        };

        Some((combined, join))
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
            let output_sv = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Output)?;
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
            let output_sv = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Output)?;
            if output_sv.base != addr.base || output_sv.version != addr.version {
                continue;
            }

            // Pattern: INT_ADD(base_const, scaled_index) or INT_ADD(scaled_index, base_const)
            if insn.op == IrOp::IntAdd && insn.inputs.len() >= 2 {
                let lhs = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(0));
                let rhs = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(1));

                // One side should be the constant base, the other the scaled index.
                if let (Some(lhs_sv), Some(rhs_sv)) = (lhs, rhs) {
                    if is_const(&rhs_sv) {
                        return self.extract_index_from_scale(bid, &lhs_sv);
                    }
                    if is_const(&lhs_sv) {
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
            let out = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Output)?;
            if out.base != scaled.base || out.version != scaled.version {
                continue;
            }

            // Pattern: INT_MULT(index, scale_const) or INT_LEFT(index, shift_const)
            match insn.op {
                IrOp::IntMult if insn.inputs.len() >= 2 => {
                    let lhs = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(0));
                    let rhs = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(1));
                    if let (Some(lhs_sv), Some(rhs_sv)) = (lhs, rhs) {
                        if is_scale_const(&rhs_sv) {
                            return Some(lhs_sv);
                        }
                        if is_scale_const(&lhs_sv) {
                            return Some(rhs_sv);
                        }
                    }
                }
                IrOp::IntLeft if insn.inputs.len() >= 2 => {
                    let index = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(0));
                    let shift = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(1));
                    if let (Some(index_sv), Some(shift_sv)) = (index, shift) {
                        if is_const(&shift_sv) {
                            return Some(index_sv);
                        }
                        let _ = shift_sv;
                    }
                }
                _ => {}
            }
            break;
        }

        // The scaled value itself might be the index (scale == 1).
        Some(*scaled)
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

        let else_body = if else_body.is_empty() { None } else { Some(else_body) };

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
        let single_latch = if latches.len() == 1 { Some(latches[0]) } else { None };
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
                return Some(HirNode::While { cond, body: body_nodes });
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
                    !self.synthetic.contains(tgt)
                        && !self.back_edges.contains(&(bid, *tgt))
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
        if let Some(sv) = self.func.var_map.get(&(bid, self.cbranch_index(bid), VarnodeSlot::Input(1))) {
            return *sv;
        }
        if let Some(sv) = self.func.var_map.get(&(bid, self.cbranch_index(bid), VarnodeSlot::Input(0))) {
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
                    if body_entry.is_none() && (dominates(&self.func.dom_tree, header, *tgt) || *tgt == header) {
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
fn dominates(
    dom_tree: &unlace_ir::ssa::DominatorTree,
    a: BlockId,
    b: BlockId,
) -> bool {
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

fn is_const(sv: &SsaVarnode) -> bool {
    sv.base.space == unlace_ir::SpaceId::Const
}

fn is_scale_const(sv: &SsaVarnode) -> bool {
    if sv.base.space != unlace_ir::SpaceId::Const {
        return false;
    }
    matches!(sv.base.offset, 1 | 2 | 4 | 8)
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
            HirNode::If { then_body, else_body, .. } => {
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
            HirNode::TryCatch { try_body, catch_body } => {
                collect_used_labels(try_body, used);
                collect_used_labels(catch_body, used);
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
            HirNode::If { then_body, else_body, .. } => {
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
            HirNode::TryCatch { try_body, catch_body } => {
                remove_labels_not_in(try_body, used);
                remove_labels_not_in(catch_body, used);
            }
            _ => {}
        }
    }
}

/// Post-pass: convert eligible `[init; while (cond) { body; update }]` patterns
/// into [`HirNode::For`].
///
/// Recurses into nested blocks (if/else/while/for bodies). Conservative:
/// only fires when the induction variable is not referenced after the loop
/// in the same scope.
pub fn recover_for_loops(nodes: &mut Vec<HirNode>) {
    let mut i = 0;
    while i < nodes.len() {
        recover_for_loops_in_children(&mut nodes[i]);
        if i + 1 < nodes.len() {
            recover_for_loops_in_children(&mut nodes[i + 1]);
            if let Some(replacement) = try_recover_for_at(nodes, i) {
                let after_i = nodes.split_off(i + 2);
                nodes.truncate(i);
                nodes.push(replacement);
                nodes.extend(after_i);
            }
        }
        i += 1;
    }
}

fn recover_for_loops_in_children(node: &mut HirNode) {
    match node {
        HirNode::Block(children) => recover_for_loops(children),
        HirNode::If { then_body, else_body, .. } => {
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
        HirNode::TryCatch { try_body, catch_body } => {
            recover_for_loops(try_body);
            recover_for_loops(catch_body);
        }
        HirNode::Statement(_)
        | HirNode::Return(_)
        | HirNode::Goto(_)
        | HirNode::Label(_)
        | HirNode::Ternary { .. }
        | HirNode::TailCall { .. }
        | HirNode::Continue
        | HirNode::Break => {}
    }
}

fn try_recover_for_at(nodes: &[HirNode], idx: usize) -> Option<HirNode> {
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

    if cond.base != counter_base {
        return None;
    }

    let (update_insn, body_without_update) = extract_update(&body, &counter_base)?;

    if init_writes_counter_only(&init_insn, &counter_base).not_ok() {
        return None;
    }

    if counter_used_after(&counter_base, &nodes[idx + 2..]) {
        return None;
    }

    Some(HirNode::For {
        init: init_insn,
        cond,
        update: update_insn,
        body: body_without_update,
    })
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
    let last_idx = body.iter().rposition(|n| matches!(n, HirNode::Statement(_)))?;
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
            let has_step_const = insn
                .inputs
                .iter()
                .any(|v| v.space == SpaceId::Const);
            reads_counter && has_step_const
        }
        _ => false,
    }
}

fn counter_used_after(counter: &Varnode, following: &[HirNode]) -> bool {
    following.iter().any(|n| node_references_varnode(n, counter))
}

fn node_references_varnode(node: &HirNode, target: &Varnode) -> bool {
    match node {
        HirNode::Statement(insn) => insn_references_varnode(insn, target),
        HirNode::Block(children) => {
            children.iter().any(|c| node_references_varnode(c, target))
        }
        HirNode::If { cond, then_body, else_body } => {
            cond.base == *target
                || then_body.iter().any(|c| node_references_varnode(c, target))
                || else_body
                    .as_ref()
                    .is_some_and(|eb| eb.iter().any(|c| node_references_varnode(c, target)))
        }
        HirNode::While { cond, body } => {
            cond.base == *target
                || body.iter().any(|c| node_references_varnode(c, target))
        }
        HirNode::DoWhile { body, cond } => {
            cond.base == *target
                || body.iter().any(|c| node_references_varnode(c, target))
        }
        HirNode::For { init, cond, update, body } => {
            insn_references_varnode(init, target)
                || cond.base == *target
                || insn_references_varnode(update, target)
                || body.iter().any(|c| node_references_varnode(c, target))
        }
        HirNode::Switch { cond, cases, default } => {
            cond.base == *target
                || cases.iter().any(|(_, b, _)| {
                    b.iter().any(|c| node_references_varnode(c, target))
                })
                || default
                    .as_ref()
                    .is_some_and(|d| d.iter().any(|c| node_references_varnode(c, target)))
        }
        HirNode::Return(Some(sv)) => sv.base == *target,
        HirNode::Ternary { cond, then_insn, else_insn, output } => {
            cond.base == *target
                || output == target
                || insn_references_varnode(then_insn, target)
                || insn_references_varnode(else_insn, target)
        }
        HirNode::TryCatch { try_body, catch_body } => {
            try_body.iter().any(|c| node_references_varnode(c, target))
                || catch_body.iter().any(|c| node_references_varnode(c, target))
        }
        HirNode::Return(None) | HirNode::Goto(_) | HirNode::Label(_)
        | HirNode::TailCall { .. } | HirNode::Continue | HirNode::Break => false,
    }
}

fn insn_references_varnode(insn: &IrInsn, target: &Varnode) -> bool {
    if insn.output == Some(*target) {
        return true;
    }
    insn.inputs.iter().any(|v| v == target)
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
        IrInsn::with_output(
            IrOp::IntAdd,
            output,
            smallvec![inputs[0], inputs[1]],
            addr,
        )
    }

    fn cbranch_insn(cond: Varnode, addr: u64) -> IrInsn {
        IrInsn::without_output(IrOp::Cbranch, smallvec![Varnode::constant(0, 8), cond], addr)
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
        assert!(!has_control, "linear function should have no control flow nodes");
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
        assert!(contains_if(&hir.body), "diamond CFG should produce an If node");
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
        assert!(contains_while(&hir.body), "loop CFG should produce a While node");
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
        assert!(!hir.body.is_empty(), "irreducible CFG should produce some HIR nodes");
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
        assert!(contains_switch(&hir.body), "BRANCHIND with 3 targets should produce a Switch node");
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
        assert!(contains_switch(&hir.body), "switch with join point should produce Switch node");

        let has_return = hir.body.iter().any(|n| matches!(n, HirNode::Return(_)));
        assert!(has_return, "code after the switch join should be structured");
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
        assert!(!contains_switch(&hir.body), "single-target BRANCHIND should NOT produce a Switch");
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
            IrOp::IntMult, unique_scaled, smallvec![r8, c4], 0x8000,
        ));
        // unique_addr = INT_ADD(table_base, unique_scaled)
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd, unique_addr, smallvec![table_base, unique_scaled], 0x8004,
        ));
        // unique_target = LOAD(ram_space, unique_addr)
        bb0.insns.push(IrInsn::with_output(
            IrOp::Load, unique_target, smallvec![ram_space, unique_addr], 0x8008,
        ));
        // BRANCHIND(unique_target)
        bb0.insns.push(IrInsn::without_output(
            IrOp::Branchind, smallvec![unique_target], 0x800c,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd, r0, smallvec![r8, Varnode::constant(1, 8)], 0x8010,
        ));
        bb1.insns.push(ctrl_insn(IrOp::Return, 0x8014));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(IrInsn::with_output(
            IrOp::IntAdd, r0, smallvec![r8, Varnode::constant(2, 8)], 0x8020,
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
        SsaVarnode { base: vn, version: 0 }
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

        assert_eq!(hir_body.len(), 1, "init+while should collapse to single For");
        match &hir_body[0] {
            HirNode::For { init, update, body, cond } => {
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
            let has_step = update.inputs.iter().any(|v| v.space == SpaceId::Const && v.offset == 2);
            assert!(has_step, "update should reference the step constant");
        }
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
    fn test_for_loop_no_init_keeps_while() {
        let i = Varnode::reg(0, 4);
        let one = Varnode::constant(1, 4);

        let mut hir_body = vec![HirNode::While {
            cond: ssa_of(i),
            body: vec![HirNode::Statement(add_insn(i, i, one, 0x1018))],
        }];

        recover_for_loops(&mut hir_body);

        assert_eq!(hir_body.len(), 1);
        assert!(
            matches!(hir_body[0], HirNode::While { .. }),
            "no preceding init → must remain While"
        );
    }

    #[test]
    fn test_for_loop_counter_used_after_loop_keeps_while() {
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

        assert_eq!(hir_body.len(), 3, "should still be 3 nodes (no collapse)");
        assert!(matches!(hir_body[1], HirNode::While { .. }));
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
    fn test_for_loop_cond_must_reference_counter() {
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

        assert!(
            matches!(hir_body[1], HirNode::While { .. }),
            "cond not referencing counter → must remain While"
        );
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

        assert!(has_while(&hir_while.body), "while-loop should produce While");
        assert!(!has_do_while(&hir_while.body), "while-loop should NOT produce DoWhile");

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

        assert!(has_do_while(&hir_dw.body), "do-while should produce DoWhile, got: {:#?}", hir_dw.body);
        assert!(!has_while(&hir_dw.body), "do-while should NOT produce While");
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
        assert!(has_return, "post-loop return should be structured, got: {:#?}", hir.body);
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
                    HirNode::TryCatch { try_body, catch_body } => {
                        return Some((try_body, catch_body));
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
            nodes.iter().map(|n| match n {
                HirNode::TryCatch { try_body, catch_body } => {
                    1 + count_try_catch(try_body) + count_try_catch(catch_body)
                }
                HirNode::Block(inner) => count_try_catch(inner),
                _ => 0,
            }).sum()
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
                HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                    contains_break(body)
                }
                HirNode::If { then_body, else_body, .. } => {
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
                HirNode::If { then_body, else_body, .. } => {
                    has_goto(then_body)
                        || else_body.as_ref().is_some_and(|eb| has_goto(eb))
                }
                _ => false,
            })
        }

        fn has_break(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::Break => true,
                HirNode::Block(inner) => has_break(inner),
                HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => has_break(body),
                HirNode::If { then_body, else_body, .. } => {
                    has_break(then_body)
                        || else_body.as_ref().is_some_and(|eb| has_break(eb))
                }
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

        let pdom = ssa.post_dom_tree.as_ref().expect("should have post_dom_tree");
        assert_eq!(pdom.idom(BlockId(0)), Some(BlockId(3)));

        let hir = structure(&ssa).expect("structuring should succeed");

        fn contains_if(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::If { .. } => true,
                HirNode::Block(inner) => contains_if(inner),
                _ => false,
            })
        }
        assert!(contains_if(&hir.body), "should produce If node using post-dom join");

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
            bb.insns.push(arith_insn(r0, &[r0, c1], 0x40000 + (i as u64) * 0x10));
            bb.insns.push(ctrl_insn(IrOp::Branch, 0x40008 + (i as u64) * 0x10));
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

        let pdom = ssa.post_dom_tree.as_ref().expect("should have post_dom_tree");
        assert_eq!(pdom.idom(BlockId(0)), Some(BlockId(22)),
            "post-dom should find BB22 as join regardless of depth");

        let hir = structure(&ssa).expect("structuring should succeed");

        fn contains_if(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::If { .. } => true,
                HirNode::Block(inner) => contains_if(inner),
                _ => false,
            })
        }
        assert!(contains_if(&hir.body),
            "deep nesting (depth > 16) should still find join via post-dom");
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
        let pdom = ssa.post_dom_tree.as_ref().expect("should have post_dom_tree");
        assert_eq!(pdom.idom(BlockId(0)), Some(BlockId(4)));

        let hir = structure(&ssa).expect("structuring should succeed");

        fn contains_switch(nodes: &[HirNode]) -> bool {
            nodes.iter().any(|n| match n {
                HirNode::Switch { .. } => true,
                HirNode::Block(inner) => contains_switch(inner),
                _ => false,
            })
        }
        assert!(contains_switch(&hir.body), "switch with post-dom join should produce Switch");

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
        assert!(contains_if(&hir.body), "BFS fallback should still find join point");
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

        let pdom = ssa.post_dom_tree.as_ref().expect("should have post_dom_tree");
        let exit = ssa.cfg.exit_block();
        assert_eq!(pdom.idom(BlockId(0)), Some(exit),
            "both branches return → post-dom is exit");

        let hir = structure(&ssa).expect("structuring should succeed");
        assert!(!hir.body.is_empty());
    }

    fn count_returns(nodes: &[HirNode]) -> usize {
        nodes
            .iter()
            .map(|n| match n {
                HirNode::Return(_) => 1,
                HirNode::Block(inner) => count_returns(inner),
                HirNode::If { then_body, else_body, .. } => {
                    count_returns(then_body)
                        + else_body.as_ref().map_or(0, |eb| count_returns(eb))
                }
                HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                    count_returns(body)
                }
                HirNode::For { body, .. } => count_returns(body),
                HirNode::Switch { cases, default, .. } => {
                    cases.iter().map(|(_, b, _)| count_returns(b)).sum::<usize>()
                        + default.as_ref().map_or(0, |d| count_returns(d))
                }
                HirNode::TryCatch { try_body, catch_body } => {
                    count_returns(try_body) + count_returns(catch_body)
                }
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

        let hir = structure_preserve_returns(&mut ssa)
            .expect("structuring should succeed");

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
        nodes.iter().map(|n| match n {
            HirNode::Goto(_) => 1,
            HirNode::Block(inner) => count_gotos(inner),
            HirNode::If { then_body, else_body, .. } => {
                count_gotos(then_body)
                    + else_body.as_ref().map_or(0, |eb| count_gotos(eb))
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => count_gotos(body),
            HirNode::Switch { cases, default, .. } => {
                cases.iter().map(|(_, b, _)| count_gotos(b)).sum::<usize>()
                    + default.as_ref().map_or(0, |d| count_gotos(d))
            }
            HirNode::TryCatch { try_body, catch_body } => {
                count_gotos(try_body) + count_gotos(catch_body)
            }
            HirNode::For { body, .. } => count_gotos(body),
            _ => 0,
        }).sum()
    }

    fn count_labels(nodes: &[HirNode]) -> usize {
        nodes.iter().map(|n| match n {
            HirNode::Label(_) => 1,
            HirNode::Block(inner) => count_labels(inner),
            HirNode::If { then_body, else_body, .. } => {
                count_labels(then_body)
                    + else_body.as_ref().map_or(0, |eb| count_labels(eb))
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => count_labels(body),
            HirNode::Switch { cases, default, .. } => {
                cases.iter().map(|(_, b, _)| count_labels(b)).sum::<usize>()
                    + default.as_ref().map_or(0, |d| count_labels(d))
            }
            HirNode::TryCatch { try_body, catch_body } => {
                count_labels(try_body) + count_labels(catch_body)
            }
            HirNode::For { body, .. } => count_labels(body),
            _ => 0,
        }).sum()
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
                    HirNode::If { then_body, else_body, .. } => {
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
                    HirNode::If { then_body, else_body, .. } => {
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
        ssa.panic_sites.insert((BlockId(0), 0), PanicKind::BoundsCheck);

        let hir = structure(&ssa).expect("structuring should succeed");

        assert_eq!(
            hir.panic_sites.len(),
            1,
            "only the valid (BlockId(0), 0) entry should survive"
        );
        assert!(hir.panic_sites.contains_key(&0x1000));
    }
}
