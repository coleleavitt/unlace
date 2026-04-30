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
use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp};

use crate::hir::{HirFunction, HirNode, LabelId};

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

    let body = ctx.structure_region(entry);

    Ok(HirFunction {
        name: func.function.name.clone(),
        params: Vec::new(),
        return_type: PrimitiveType::Unknown,
        body,
        addr: func.function.addr,
    })
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

        Self {
            func,
            emitted: BTreeSet::new(),
            back_edges,
            loop_headers,
            block_labels: BTreeMap::new(),
            next_label: 0,
            synthetic,
        }
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
            if self.emitted.contains(&bid) || self.synthetic.contains(&bid) {
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

        // Emit label if this block was targeted by a goto.
        if let Some(&label) = self.block_labels.get(&bid) {
            nodes.push(HirNode::Label(label));
        }

        let Some(block) = self.func.function.blocks.get(&bid) else {
            return;
        };

        for (i, insn) in block.insns.iter().enumerate() {
            match insn.op {
                // Skip control-flow terminators — they're handled structurally.
                IrOp::Branch | IrOp::Cbranch | IrOp::Branchind => continue,
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
        if let Some(block) = self.func.function.blocks.get(&bid) {
            for insn in &block.insns {
                match insn.op {
                    IrOp::Cbranch | IrOp::Branch | IrOp::Branchind | IrOp::Return => {}
                    _ => pre_stmts.push(HirNode::Statement(insn.clone())),
                }
            }
        }

        // Find the join point: a block that both branches eventually reach.
        let join = self.find_join_point(true_blk, false_blk);

        let then_body = self.structure_until(true_blk, join);
        let else_body = self.structure_until(false_blk, join);

        let else_body = if else_body.is_empty() { None } else { Some(else_body) };

        let if_node = HirNode::If {
            cond,
            then_body,
            else_body,
        };

        let mut result = Vec::new();
        result.append(&mut pre_stmts);
        result.push(if_node);

        let combined = if result.len() == 1 {
            result.pop().expect("len == 1")
        } else {
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
                for insn in &block.insns {
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
        } else if latch_has_cbranch {
            // Do-while loop: condition at latch.
            let latch = single_latch.expect("guarded by is_some_and check");
            let cond = self.find_cbranch_cond(latch);

            self.emitted.insert(header);

            // Structure the body from header through the latch.
            let mut body_nodes = Vec::new();
            self.emit_block_statements_inline(header, &mut body_nodes);

            // Walk from header's successor(s) to the latch.
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

            // Emit latch's non-CF statements.
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

        let Some(block) = self.func.function.blocks.get(&bid) else {
            return;
        };

        for (i, insn) in block.insns.iter().enumerate() {
            match insn.op {
                IrOp::Branch | IrOp::Cbranch | IrOp::Branchind => continue,
                IrOp::Return => {
                    let ret_val = self.resolve_ssa_varnode(bid, i, VarnodeSlot::Input(0));
                    nodes.push(HirNode::Return(ret_val));
                }
                _ => nodes.push(HirNode::Statement(insn.clone())),
            }
        }
    }

    fn structure_loop_body(&mut self, start: BlockId, header: BlockId) -> Vec<HirNode> {
        let mut nodes = Vec::new();
        let mut current = Some(start);

        while let Some(bid) = current {
            if self.emitted.contains(&bid) || self.synthetic.contains(&bid) {
                // If this is a back-edge to the header, don't emit goto.
                break;
            }

            // Check for back-edge to header — this is a "continue" equivalent.
            let is_back_to_header = self.back_edges.contains(&(bid, header));
            if is_back_to_header && bid == start {
                // The start block IS the latch — just emit its statements.
                self.emit_block_statements(bid, &mut nodes);
                break;
            }

            // Try if/else inside the loop body.
            if let Some((if_node, join)) = self.try_structure_if(bid) {
                nodes.push(if_node);
                current = join;
                continue;
            }

            self.emit_block_statements(bid, &mut nodes);

            // Check successors.
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
            if self.emitted.contains(&bid) || self.synthetic.contains(&bid) {
                // Emit goto if needed.
                if !self.synthetic.contains(&bid) && !self.emitted.contains(&bid) {
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
            // The exit is the successor NOT dominated by the header,
            // or the false branch in a while loop.
            if !dominates(&self.func.dom_tree, header, *tgt) {
                return Some(*tgt);
            }
        }

        // If all successors are dominated, look for exits from loop body blocks.
        None
    }

    /// Find the join point (post-dominator) of two branches.
    /// Simple heuristic: walk successors of both branches and find the first
    /// common block that is reachable from both.
    fn find_join_point(&self, true_blk: BlockId, false_blk: BlockId) -> Option<BlockId> {
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
}
