//! structurer: cfg queries.

use super::*;

/// Returns true if `a` dominates `b` in the dominator tree.
pub(super) fn dominates(dom_tree: &unlace_ir::ssa::DominatorTree, a: BlockId, b: BlockId) -> bool {
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

pub(super) fn is_scale_value(v: u64) -> bool {
    matches!(v, 1 | 2 | 4 | 8)
}

impl<'a> StructureCtx<'a> {
    pub(super) fn single_successor(&self, bid: BlockId) -> Option<BlockId> {
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

    pub(super) fn block_has_cbranch(&self, bid: BlockId) -> bool {
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
    pub(super) fn header_has_conditional_edges(&self, bid: BlockId) -> bool {
        let edges = self.func.cfg.edges_from(bid);
        let has_cond_true = edges
            .iter()
            .any(|(_, kind)| *kind == EdgeKind::ConditionalTrue);
        let has_cond_false = edges
            .iter()
            .any(|(_, kind)| *kind == EdgeKind::ConditionalFalse);
        has_cond_true && has_cond_false
    }

    pub(super) fn find_cbranch_cond(&self, bid: BlockId) -> SsaVarnode {
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

    pub(super) fn cbranch_index(&self, bid: BlockId) -> usize {
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

    pub(super) fn resolve_ssa_varnode(
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
    pub(super) fn classify_loop_edges(
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

    pub(super) fn find_loop_exit(&self, header: BlockId) -> Option<BlockId> {
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

    pub(super) fn find_join_point(
        &self,
        cond_block: BlockId,
        true_blk: BlockId,
        false_blk: BlockId,
    ) -> Option<BlockId> {
        // An exception dispatch joins where its protected code (the false
        // arm) continues; the handler (the true arm) is never the join. The
        // lifter does not know the calls around a handler are noreturn
        // (`__cxa_throw` before it, `_Unwind_Resume` at its end), so the
        // layout edges into and out of the handler make it the dispatch's
        // post-dominator, or make the code after the whole region the first
        // block both arms reach. Either choice leaves the handler outside
        // the `if` or pulls the outer join into the protected arm.
        if crate::eh_dispatch::is_dispatch_block(self.func, cond_block) {
            let after_region = [
                self.find_join_point_postdom(false_blk),
                self.find_join_point_of_arms(cond_block, true_blk, false_blk),
                self.find_join_point_postdom(true_blk),
            ]
            .into_iter()
            .flatten()
            .find(|candidate| !self.eh_handlers.contains(candidate));
            struct_debug!(
                "join cond={cond_block:?} handler={true_blk:?} source=eh-dispatch join={after_region:?}"
            );
            return after_region;
        }
        self.find_join_point_of_arms(cond_block, true_blk, false_blk)
    }

    pub(super) fn find_join_point_of_arms(
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
        //
        // When an arm can bypass the loop (a peel whose own guard exits
        // straight past it), the header is not a join: the loop would be
        // emitted inside that arm and the other arm's goto would target a
        // label with no code behind it.
        if let Some(bfs) = bfs_join
            && self.loop_headers.contains(&bfs)
            && Some(bfs) != postdom_join
        {
            // Inside the header's own loop, arms reach it through back edges
            // (continue) or leave the loop (break), so it stays a valid join.
            let cond_in_loop = dominates(&self.func.dom_tree, bfs, cond_block);
            let header_joins_both_arms = cond_in_loop
                || self.func.post_dom_tree.as_ref().is_some_and(|pdom| {
                    dominates(pdom, bfs, true_blk) && dominates(pdom, bfs, false_blk)
                });
            if header_joins_both_arms {
                struct_debug!(
                    "join cond={cond_block:?} true={true_blk:?} false={false_blk:?} source=loop-header-bfs join={bfs:?} postdom_was={postdom_join:?}"
                );
                return Some(bfs);
            }
            struct_debug!(
                "join-reject cond={cond_block:?} loop_header={bfs:?} reason=not-post-dominating-both-arms"
            );
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

    pub(super) fn find_join_point_postdom(&self, cond_block: BlockId) -> Option<BlockId> {
        let pdom = self.func.post_dom_tree.as_ref()?;
        let ipdom = pdom.idom(cond_block)?;

        if self.synthetic.contains(&ipdom) {
            return None;
        }

        Some(ipdom)
    }

    pub(super) fn find_join_point_bfs(
        &self,
        true_blk: BlockId,
        false_blk: BlockId,
    ) -> Option<BlockId> {
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

    pub(super) fn collect_reachable(&self, start: BlockId, max_depth: usize) -> BTreeSet<BlockId> {
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

    pub(super) fn reachable_blocks_from_entry(&self) -> BTreeSet<BlockId> {
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
