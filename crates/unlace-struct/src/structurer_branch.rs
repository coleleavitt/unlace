//! structurer: branch.

use super::*;

impl<'a> StructureCtx<'a> {
    pub(super) fn try_structure_if(&mut self, bid: BlockId) -> Option<(HirNode, Option<BlockId>)> {
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

    pub(super) fn try_structure_if_in_loop(
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
}
