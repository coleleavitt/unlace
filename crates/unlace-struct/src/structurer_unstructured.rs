//! structurer: unstructured.

use super::*;

impl<'a> StructureCtx<'a> {
    pub(super) fn unstructured_fallback_body(&mut self, reason: String) -> Vec<HirNode> {
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

    pub(super) fn unstructured_summary_body(
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

    pub(super) fn emit_unstructured_block_body(&self, bid: BlockId, nodes: &mut Vec<HirNode>) {
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

    pub(super) fn emit_unstructured_transfer(&mut self, bid: BlockId, nodes: &mut Vec<HirNode>) {
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

    pub(super) fn emit_unstructured_cbranch(&mut self, bid: BlockId, nodes: &mut Vec<HirNode>) {
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

    pub(super) fn real_successors(&self, bid: BlockId) -> Vec<BlockId> {
        self.func
            .cfg
            .edges_from(bid)
            .into_iter()
            .map(|(target, _)| target)
            .filter(|target| !self.synthetic.contains(target))
            .collect()
    }

    pub(super) fn first_real_successor(&self, bid: BlockId) -> Option<BlockId> {
        self.real_successors(bid).into_iter().next()
    }

    pub(super) fn push_goto_to_block(&mut self, target: BlockId, nodes: &mut Vec<HirNode>) {
        let label = self.alloc_label(target);
        nodes.push(HirNode::Goto(label));
    }
}
