//! structurer: loops.

use super::*;

impl<'a> StructureCtx<'a> {
    pub(super) fn try_structure_loop(&mut self, header: BlockId) -> Option<HirNode> {
        let node = self.try_structure_loop_inner(header)?;
        // The header's label has to stand in front of the loop statement. It
        // exists when the header is re-entered from outside its loop (see
        // `mark_reentered_loop_headers`) or when a `goto` to it was
        // allocated while the body was built (an inner loop leaving to the
        // enclosing header, which C has no `continue outer` for). The
        // `do`-`while` paths already put it at the top of the body, where
        // the header's statements are.
        if self.goto_targets.contains(&header) {
            self.alloc_label(header);
        }
        let Some(&label) = self.block_labels.get(&header) else {
            return Some(node);
        };
        let labelled_in_body = match &node {
            HirNode::DoWhile { body, .. } | HirNode::While { body, .. } => {
                matches!(body.first(), Some(HirNode::Label(first)) if *first == label)
            }
            _ => false,
        };
        if labelled_in_body {
            return Some(node);
        }
        struct_debug!("loop-header-label header={header:?} label={label:?}");
        Some(HirNode::Block(vec![HirNode::Label(label), node]))
    }

    pub(super) fn try_structure_loop_inner(&mut self, header: BlockId) -> Option<HirNode> {
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
    pub(super) fn emit_block_statements_inline(&mut self, bid: BlockId, nodes: &mut Vec<HirNode>) {
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

    pub(super) fn non_control_block_statements(&self, bid: BlockId) -> Vec<HirNode> {
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

    pub(super) fn loop_branch_nodes_for_target(
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

    pub(super) fn loop_exit_transfer_node(
        &mut self,
        target: Option<BlockId>,
        header: BlockId,
    ) -> HirNode {
        let Some(target) = target else {
            return HirNode::Break;
        };
        if target == header {
            return HirNode::Continue;
        }
        if self.synthetic.contains(&target)
            || self
                .find_loop_exit(header)
                .is_some_and(|exit| self.exit_landing(exit) == self.exit_landing(target))
        {
            return HirNode::Break;
        }
        let label = self.alloc_label(target);
        HirNode::Goto(label)
    }

    /// The first block with statements or a decision that `target` leads
    /// to. A conditional branch often leaves a loop through an empty block
    /// that only forwards to the real exit (`merge_linear_blocks` cannot
    /// fold it into a block that ends in a `CBRANCH`); two such exits land
    /// on the same block and are one exit of the loop.
    pub(super) fn exit_landing(&self, target: BlockId) -> BlockId {
        let mut current = target;
        let mut seen = BTreeSet::new();
        while seen.insert(current) {
            if self.synthetic.contains(&current)
                || self.loop_headers.contains(&current)
                || !self.non_control_block_statements(current).is_empty()
            {
                break;
            }
            let Some(next) = self.single_successor(current) else {
                break;
            };
            current = next;
        }
        current
    }

    pub(super) fn emit_latch_decision(
        &mut self,
        bid: BlockId,
        header: BlockId,
        nodes: &mut Vec<HirNode>,
    ) {
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

    pub(super) fn try_emit_emitted_latch_path(
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
        // A latch that tests before looping back keeps its exit edge:
        // replaying only its statements plus `continue` would drop the
        // loop's exit test on this path.
        self.emit_latch_decision(bid, header, &mut replay);
        let action = if replay.len() > stmt_count {
            "replay-latch-decision"
        } else {
            replay.push(HirNode::Continue);
            "replay-continue"
        };
        struct_debug!(
            "emitted-latch-path block={bid:?} header={header:?} action={action} stmts={stmt_count} real_edges={real_edges:?} known_back_edge={known_back_edge}"
        );
        trace_hir_counts(
            &format!("emitted-latch-path block={bid:?} header={header:?}"),
            &replay,
        );
        nodes.extend(replay);
        true
    }

    pub(super) fn structure_loop_body(&mut self, start: BlockId, header: BlockId) -> Vec<HirNode> {
        let loop_blocks = self.collect_loop_blocks(header);
        self.structure_loop_body_inner(start, header, &loop_blocks)
    }

    pub(super) fn structure_loop_branch_until(
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

    pub(super) fn structure_until_in_loop(
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
                } else if self.goto_targets.contains(&bid) || self.loop_headers.contains(&bid) {
                    // An emitted loop header other than ours is entered
                    // again from outside its body (the back edge of an inner
                    // loop this walk did not structure as a loop).
                    let label = self.alloc_label(bid);
                    nodes.push(HirNode::Goto(label));
                    struct_debug!("until-loop emitted-target goto block={bid:?} label={label:?}");
                } else {
                    struct_debug!("until-loop stop already-emitted={bid:?} header={header:?}");
                }
                break;
            }

            if bid != header && self.loop_headers.contains(&bid) {
                if struct_trace_enabled() && self.loop_has_multiple_exits(bid) {
                    let nested_blocks = self.collect_loop_blocks(bid);
                    let exits = self.loop_exit_targets(&nested_blocks);
                    struct_debug!(
                        "until-loop nested-loop-multiexit bid={bid:?} outer_header={header:?} exits={exits:?}"
                    );
                }
                if let Some(loop_node) = self.try_structure_loop(bid) {
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

    pub(super) fn tail_call_args(
        &self,
        bid: BlockId,
        insn_idx: usize,
        insn: &IrInsn,
    ) -> Vec<HirCallArg> {
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

    pub(super) fn collect_loop_blocks(&self, header: BlockId) -> BTreeSet<BlockId> {
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

    pub(super) fn reaches_block(&self, start: BlockId, target: BlockId) -> bool {
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

    pub(super) fn reaches_block_in_loop(
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

    /// Where the loop's exit edges land, see [`Self::exit_landing`].
    pub(super) fn loop_exit_targets(&self, loop_blocks: &BTreeSet<BlockId>) -> BTreeSet<BlockId> {
        let mut exits = BTreeSet::new();
        for &bid in loop_blocks {
            for (target, _) in self.func.cfg.edges_from(bid) {
                if !self.synthetic.contains(&target) && !loop_blocks.contains(&target) {
                    exits.insert(self.exit_landing(target));
                }
            }
        }
        exits
    }

    pub(super) fn loop_has_multiple_exits(&self, header: BlockId) -> bool {
        let loop_blocks = self.collect_loop_blocks(header);
        self.loop_exit_targets(&loop_blocks).len() > 1
    }

    pub(super) fn structure_loop_body_inner(
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
                if bid != header
                    && (self.goto_targets.contains(&bid) || self.loop_headers.contains(&bid))
                {
                    let label = self.alloc_label(bid);
                    nodes.push(HirNode::Goto(label));
                    struct_debug!("loop-body emitted-target goto block={bid:?} label={label:?}");
                } else {
                    struct_debug!(
                        "loop-body stop already-emitted current={bid:?} header={header:?}"
                    );
                }
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
                if struct_trace_enabled() && self.loop_has_multiple_exits(bid) {
                    let nested_blocks = self.collect_loop_blocks(bid);
                    let exits = self.loop_exit_targets(&nested_blocks);
                    struct_debug!(
                        "loop-body nested-loop-multiexit current={bid:?} outer_header={header:?} exits={exits:?}"
                    );
                }
                if let Some(loop_node) = self.try_structure_loop(bid) {
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
}
