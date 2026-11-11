//! structurer: switch.

use super::*;

impl<'a> StructureCtx<'a> {
    pub(super) fn try_structure_switch(
        &mut self,
        bid: BlockId,
    ) -> Option<(HirNode, Option<BlockId>)> {
        self.try_structure_switch_in(bid, None)
    }

    /// Structure the jump-table dispatch ending `bid`. Inside a loop,
    /// `in_loop` names the loop header and blocks: case bodies then reach
    /// the back edge as `continue`, and leave the loop through a `goto` to
    /// the exit, since a `break` there would only leave the switch.
    pub(super) fn try_structure_switch_in(
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

    pub(super) fn structure_switch_case(
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
    pub(super) fn find_loop_switch_join(
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
    pub(super) fn reach_in_loop(
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
    pub(super) fn dispatch_only_insns(&self, bid: BlockId, index: &SsaVarnode) -> BTreeSet<usize> {
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

    pub(super) fn block_starting_at_addr(&self, addr: u64) -> Option<BlockId> {
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
    pub(super) fn extract_bounds_check(
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
    pub(super) fn scan_pred_for_bounds(
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
    pub(super) fn varnode_aliases(
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

    pub(super) fn recover_switch_index(&self, bid: BlockId) -> SsaVarnode {
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

    pub(super) fn trace_table_index(
        &self,
        bid: BlockId,
        target: &SsaVarnode,
    ) -> Option<SsaVarnode> {
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

    pub(super) fn trace_table_index_from_target_operand(
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

    pub(super) fn trace_table_index_from_load_output(
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

    pub(super) fn trace_scaled_index(&self, bid: BlockId, addr: &SsaVarnode) -> Option<SsaVarnode> {
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

    pub(super) fn extract_index_from_scale(
        &self,
        bid: BlockId,
        scaled: &SsaVarnode,
    ) -> Option<SsaVarnode> {
        if let Some(index) = self.try_extract_scaled_index(bid, scaled) {
            return Some(index);
        }
        // The scaled value itself might be the index (scale == 1).
        Some(self.normalize_switch_index(bid, self.walk_bitwise_chain(bid, scaled, 4)))
    }

    pub(super) fn try_extract_scaled_index(
        &self,
        bid: BlockId,
        scaled: &SsaVarnode,
    ) -> Option<SsaVarnode> {
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

    pub(super) fn normalize_switch_index(&self, bid: BlockId, index: SsaVarnode) -> SsaVarnode {
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
    pub(super) fn walk_bitwise_chain(
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

    pub(super) fn fallback_switch_cond(&self) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::constant(0, 8),
            version: 0,
        }
    }

    pub(super) fn find_switch_join(
        &self,
        cond_block: BlockId,
        targets: &[BlockId],
    ) -> Option<BlockId> {
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
}
