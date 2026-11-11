//! structurer: dream.

use super::*;

impl<'a> StructureCtx<'a> {
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
    pub(super) fn try_structure_dream_residual_region(
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

    pub(super) fn dream_structured_label_map(
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

    pub(super) fn dream_region_has_unspliced_control(
        &self,
        body_blocks: &BTreeSet<BlockId>,
    ) -> bool {
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

    pub(super) fn dream_predicate_conditions(
        &self,
        body_blocks: &BTreeSet<BlockId>,
    ) -> BTreeMap<u32, SsaVarnode> {
        body_blocks
            .iter()
            .filter(|&&bid| self.block_has_cbranch(bid))
            .map(|&bid| (bid.0, self.find_cbranch_cond(bid)))
            .collect()
    }

    pub(super) fn dream_region_exits(&self, body_blocks: &BTreeSet<BlockId>) -> BTreeSet<BlockId> {
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

    pub(super) fn dream_expand_linear_exit_tails(
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

    pub(super) fn dream_common_exit_join_candidates(
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

    pub(super) fn dream_linear_exit_tail(
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

    pub(super) fn dream_tail_has_reachable_external_predecessor(
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
}
