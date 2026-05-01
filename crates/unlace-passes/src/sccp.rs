//! Sparse Conditional Constant Propagation (SCCP) — Wegman & Zadeck 1991.
//!
//! More powerful than basic constant folding because it tracks block
//! reachability: constants propagate only along feasible CFG paths, and
//! phi nodes ignore inputs from unreachable predecessors.
//!
//! # Algorithm
//!
//! 1. **Lattice**: `Top` (uninitialized) → `Constant(value)` → `Bottom` (overdefined).
//! 2. **Two worklists**: SSA edges (def→use) and CFG edges (block reachability).
//! 3. Entry block is reachable; all values start at `Top`.
//! 4. Process worklists until both are empty:
//!    - **CFG edge**: mark target reachable; evaluate its phi nodes and instructions.
//!    - **SSA edge**: re-evaluate the instruction using the updated operand.
//! 5. **Rewrite**: replace `Constant` values with literal `COPY` instructions;
//!    `Top` values (never reached) become `COPY 0` as a safe default.

use std::collections::{BTreeMap, BTreeSet, VecDeque};

use unlace_ir::cfg::EdgeKind;
use unlace_ir::ssa::{PhiNode, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

// ---------------------------------------------------------------------------
// Lattice
// ---------------------------------------------------------------------------

/// The three-valued lattice for SCCP.
///
/// Ordering: `Top` < `Constant(_)` < `Bottom`.
/// Meet is the greatest lower bound.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
enum LatticeValue {
    /// Not yet computed — optimistically assumed constant.
    Top,
    /// Proven constant with this value and byte-width.
    Constant { value: u64, size: u8 },
    /// Overdefined — known to be non-constant at runtime.
    Bottom,
}

impl LatticeValue {
    /// Lattice meet (greatest lower bound).
    fn meet(self, other: Self) -> Self {
        match (self, other) {
            (Self::Top, v) | (v, Self::Top) => v,
            (Self::Bottom, _) | (_, Self::Bottom) => Self::Bottom,
            (Self::Constant { value: a, size: sa }, Self::Constant { value: b, size: sb }) => {
                if a == b && sa == sb {
                    Self::Constant { value: a, size: sa }
                } else {
                    Self::Bottom
                }
            }
        }
    }
}

// ---------------------------------------------------------------------------
// SCCP solver
// ---------------------------------------------------------------------------

struct SccpSolver<'a> {
    func: &'a SsaFunction,
    /// Lattice value for each (base-varnode, SSA-version).
    values: BTreeMap<SsaVarnode, LatticeValue>,
    /// Which blocks have been marked reachable.
    reachable: BTreeSet<BlockId>,
    /// CFG worklist: edges (source, dest) to process.
    cfg_worklist: VecDeque<(BlockId, BlockId)>,
    /// SSA worklist: definitions whose value changed.
    ssa_worklist: VecDeque<SsaVarnode>,
    /// Def-use chains: given a definition SsaVarnode, which (block, insn_idx) use it.
    /// Built once at the start.
    uses: BTreeMap<SsaVarnode, Vec<(BlockId, usize)>>,
    /// Phi-uses: given a definition SsaVarnode, which (block, phi_output) use it.
    phi_uses: BTreeMap<SsaVarnode, Vec<(BlockId, SsaVarnode)>>,
}

impl<'a> SccpSolver<'a> {
    fn new(func: &'a SsaFunction) -> Self {
        let mut solver = Self {
            func,
            values: BTreeMap::new(),
            reachable: BTreeSet::new(),
            cfg_worklist: VecDeque::new(),
            ssa_worklist: VecDeque::new(),
            uses: BTreeMap::new(),
            phi_uses: BTreeMap::new(),
        };
        solver.build_use_chains();
        solver.init_external_inputs();
        solver
    }

    fn build_use_chains(&mut self) {
        for (&(bid, insn_idx, ref slot), ssa_vn) in &self.func.var_map {
            if let VarnodeSlot::Input(_) = slot {
                self.uses.entry(*ssa_vn).or_default().push((bid, insn_idx));
            }
        }

        for (&bid, phis) in &self.func.phi_map {
            for phi in phis {
                for (_pred, input) in &phi.inputs {
                    self.phi_uses
                        .entry(*input)
                        .or_default()
                        .push((bid, phi.output));
                }
            }
        }
    }

    /// SSA varnodes that are used but never defined within the function
    /// (version 0 registers, parameters) are external inputs — mark them Bottom.
    fn init_external_inputs(&mut self) {
        let defined: BTreeSet<SsaVarnode> = self
            .func
            .var_map
            .iter()
            .filter_map(|((_, _, slot), sv)| {
                if *slot == VarnodeSlot::Output {
                    Some(*sv)
                } else {
                    None
                }
            })
            .chain(
                self.func
                    .phi_map
                    .values()
                    .flat_map(|phis| phis.iter().map(|p| p.output)),
            )
            .collect();

        for sv in self.uses.keys() {
            if sv.base.space != SpaceId::Const && !defined.contains(sv) {
                self.values.insert(*sv, LatticeValue::Bottom);
            }
        }

        for sv in self.phi_uses.keys() {
            if sv.base.space != SpaceId::Const && !defined.contains(sv) {
                self.values.insert(*sv, LatticeValue::Bottom);
            }
        }
    }

    /// Get the lattice value for an SSA varnode. Defaults to `Top`.
    fn get_value(&self, sv: &SsaVarnode) -> LatticeValue {
        // Constants are always known.
        if sv.base.space == SpaceId::Const {
            return LatticeValue::Constant {
                value: sv.base.offset,
                size: sv.base.size,
            };
        }
        self.values.get(sv).copied().unwrap_or(LatticeValue::Top)
    }

    /// Set the lattice value for an SSA varnode. Returns true if the value changed.
    fn set_value(&mut self, sv: SsaVarnode, val: LatticeValue) -> bool {
        let old = self.values.get(&sv).copied().unwrap_or(LatticeValue::Top);
        if old == val {
            return false;
        }
        // Lattice values can only move downward: Top → Constant → Bottom.
        let new_val = old.meet(val);
        if new_val == old {
            return false;
        }
        self.values.insert(sv, new_val);
        true
    }

    /// Queue all uses of `sv` onto the SSA worklist.
    fn propagate_to_uses(&mut self, sv: SsaVarnode) {
        self.ssa_worklist.push_back(sv);
    }

    /// Resolve a raw Varnode at (block, insn_idx, input_slot) to its lattice value.
    fn resolve_input(
        &self,
        bid: BlockId,
        insn_idx: usize,
        input_idx: usize,
        raw: &Varnode,
    ) -> LatticeValue {
        if raw.space == SpaceId::Const {
            return LatticeValue::Constant {
                value: raw.offset,
                size: raw.size,
            };
        }
        let key = (bid, insn_idx, VarnodeSlot::Input(input_idx));
        match self.func.var_map.get(&key) {
            Some(ssa_vn) => self.get_value(ssa_vn),
            None => LatticeValue::Bottom,
        }
    }

    /// Evaluate an instruction and return its lattice value for the output.
    fn eval_insn(&self, bid: BlockId, insn_idx: usize, insn: &IrInsn) -> LatticeValue {
        let out = match insn.output {
            Some(o) => o,
            None => return LatticeValue::Bottom,
        };

        // COPY: pass through the input value.
        if insn.op == IrOp::Copy {
            return self.resolve_input(bid, insn_idx, 0, &insn.inputs[0]);
        }

        // Collect input lattice values.
        let mut all_const = true;
        let mut any_bottom = false;
        let mut const_inputs: Vec<Option<(u64, u8)>> = Vec::new();

        for (idx, input) in insn.inputs.iter().enumerate() {
            let val = self.resolve_input(bid, insn_idx, idx, input);
            match val {
                LatticeValue::Top => {
                    all_const = false;
                    const_inputs.push(None);
                }
                LatticeValue::Constant { value, size } => {
                    const_inputs.push(Some((value, size)));
                }
                LatticeValue::Bottom => {
                    any_bottom = true;
                    all_const = false;
                    const_inputs.push(None);
                }
            }
        }

        if any_bottom {
            return LatticeValue::Bottom;
        }

        if !all_const {
            // Some inputs are still Top — leave as Top (optimistic).
            return LatticeValue::Top;
        }

        // All inputs constant — try to evaluate.
        let const_varnodes: Vec<Varnode> = const_inputs
            .iter()
            .map(|c| {
                let (value, size) = c.unwrap();
                Varnode::constant(value, size)
            })
            .collect();

        match evaluate(insn.op, &const_varnodes, out.size) {
            Some(result_val) => LatticeValue::Constant {
                value: result_val,
                size: out.size,
            },
            None => LatticeValue::Bottom,
        }
    }

    /// Evaluate a phi node: meet of all reachable inputs.
    fn eval_phi(&self, _bid: BlockId, phi: &PhiNode) -> LatticeValue {
        let mut result = LatticeValue::Top;
        for (pred, input) in &phi.inputs {
            if !self.reachable.contains(pred) {
                continue; // skip unreachable predecessors
            }
            let val = self.get_value(input);
            result = result.meet(val);
        }
        result
    }

    /// Process a newly reachable block: evaluate all its phi nodes and instructions.
    fn visit_block(&mut self, bid: BlockId) {
        // Evaluate phi nodes.
        if let Some(phis) = self.func.phi_map.get(&bid).cloned() {
            for phi in &phis {
                let val = self.eval_phi(bid, phi);
                if self.set_value(phi.output, val) {
                    self.propagate_to_uses(phi.output);
                }
            }
        }

        // Evaluate instructions.
        if let Some(block) = self.func.function.blocks.get(&bid) {
            let insn_count = block.insns.len();
            for i in 0..insn_count {
                let insn = &self.func.function.blocks[&bid].insns[i];
                self.visit_insn(bid, i, insn.clone());
            }
        }
    }

    /// Evaluate a single instruction and propagate if changed.
    fn visit_insn(&mut self, bid: BlockId, insn_idx: usize, insn: IrInsn) {
        if let Some(out) = insn.output {
            let val = self.eval_insn(bid, insn_idx, &insn);
            let key = (bid, insn_idx, VarnodeSlot::Output);
            if let Some(&ssa_out) = self.func.var_map.get(&key) {
                if self.set_value(ssa_out, val) {
                    self.propagate_to_uses(ssa_out);
                }
            } else {
                // No SSA mapping — use base varnode with version 0 as fallback.
                let sv = SsaVarnode {
                    base: out,
                    version: 0,
                };
                if self.set_value(sv, val) {
                    self.propagate_to_uses(sv);
                }
            }
        }

        // Handle CBRANCH: if condition is constant, only one successor is feasible.
        if insn.op == IrOp::Cbranch {
            self.visit_cbranch(bid, insn_idx, &insn);
        }
    }

    /// Handle conditional branch: determine which successors are feasible.
    fn visit_cbranch(&mut self, bid: BlockId, insn_idx: usize, insn: &IrInsn) {
        // CBRANCH: input[0] = target address, input[1] = boolean condition.
        let cond_val = if insn.inputs.len() >= 2 {
            self.resolve_input(bid, insn_idx, 1, &insn.inputs[1])
        } else {
            LatticeValue::Bottom
        };

        let block = match self.func.function.blocks.get(&bid) {
            Some(b) => b,
            None => return,
        };

        let true_target = block.successors.first().copied();
        let false_target = block.successors.get(1).copied();

        match cond_val {
            LatticeValue::Constant { value, .. } => {
                if (value & 1) != 0 {
                    // Condition is true — only true branch is feasible.
                    if let Some(t) = true_target {
                        self.add_cfg_edge(bid, t);
                    }
                } else {
                    // Condition is false — only false branch is feasible.
                    if let Some(f) = false_target {
                        self.add_cfg_edge(bid, f);
                    }
                }
            }
            LatticeValue::Bottom => {
                // Unknown — both branches feasible.
                if let Some(t) = true_target {
                    self.add_cfg_edge(bid, t);
                }
                if let Some(f) = false_target {
                    self.add_cfg_edge(bid, f);
                }
            }
            LatticeValue::Top => {
                // Still Top — don't add any edges yet. When the condition
                // becomes known we'll revisit.
            }
        }
    }

    /// Add a CFG edge to the worklist if the target isn't already reachable
    /// (or if this is a new source for a phi node in the target).
    fn add_cfg_edge(&mut self, from: BlockId, to: BlockId) {
        // Always queue the edge so phi nodes can pick up the new predecessor.
        self.cfg_worklist.push_back((from, to));
    }

    /// Process all non-branch terminators in a block to determine successor
    /// reachability (unconditional branches, fallthroughs, returns).
    fn visit_terminator(&mut self, bid: BlockId) {
        let block = match self.func.function.blocks.get(&bid) {
            Some(b) => b,
            None => return,
        };

        let terminator = block.insns.last();
        let term_op = terminator.map(|i| i.op);

        match term_op {
            Some(IrOp::Cbranch) => {
                // Already handled in visit_insn.
            }
            Some(IrOp::Branch) => {
                if let Some(&target) = block.successors.first() {
                    self.add_cfg_edge(bid, target);
                }
            }
            Some(IrOp::Return) | Some(IrOp::Branchind) => {
                // Return: no successors in the function.
                // Branchind: can't statically resolve, mark all successors.
                for &succ in &block.successors {
                    self.add_cfg_edge(bid, succ);
                }
            }
            Some(IrOp::Call) | Some(IrOp::Callind) => {
                // Call falls through; successors handled by CFG edges.
                for &succ in &block.successors {
                    self.add_cfg_edge(bid, succ);
                }
                // Also fallthrough to next block — but we get successors
                // from the CFG edges, which include fallthrough.
                let cfg_edges = self.func.cfg.edges_from(bid);
                for (target, kind) in cfg_edges {
                    if kind == EdgeKind::Fallthrough {
                        self.add_cfg_edge(bid, target);
                    }
                }
            }
            _ => {
                // Fallthrough: next sequential block.
                let cfg_edges = self.func.cfg.edges_from(bid);
                for (target, _kind) in cfg_edges {
                    self.add_cfg_edge(bid, target);
                }
            }
        }
    }

    /// Run the SCCP algorithm to a fixed point.
    fn solve(&mut self) {
        // Seed: entry block is reachable.
        let entry = self.func.function.entry;
        self.reachable.insert(entry);
        self.visit_block(entry);
        self.visit_terminator(entry);

        loop {
            // Prefer CFG edges first (order doesn't matter for correctness,
            // but CFG edges can unlock new phi evaluations).
            if let Some((_from, to)) = self.cfg_worklist.pop_front() {
                let first_time = self.reachable.insert(to);

                // Re-evaluate phi nodes in the target block (the new
                // predecessor may contribute a different value).
                if let Some(phis) = self.func.phi_map.get(&to).cloned() {
                    for phi in &phis {
                        let val = self.eval_phi(to, phi);
                        if self.set_value(phi.output, val) {
                            self.propagate_to_uses(phi.output);
                        }
                    }
                }

                if first_time {
                    // First time seeing this block — evaluate all instructions.
                    self.visit_block_insns_only(to);
                    self.visit_terminator(to);
                }

                continue;
            }

            if let Some(def_sv) = self.ssa_worklist.pop_front() {
                // Re-evaluate all uses of this definition.
                if let Some(use_sites) = self.uses.get(&def_sv).cloned() {
                    for (bid, insn_idx) in use_sites {
                        if !self.reachable.contains(&bid) {
                            continue;
                        }
                        if let Some(block) = self.func.function.blocks.get(&bid) {
                            if insn_idx < block.insns.len() {
                                let insn = block.insns[insn_idx].clone();
                                self.visit_insn(bid, insn_idx, insn);
                            }
                        }
                    }
                }

                // Re-evaluate phi nodes that use this definition.
                if let Some(phi_sites) = self.phi_uses.get(&def_sv).cloned() {
                    for (bid, phi_out) in phi_sites {
                        if !self.reachable.contains(&bid) {
                            continue;
                        }
                        if let Some(phis) = self.func.phi_map.get(&bid).cloned() {
                            for phi in &phis {
                                if phi.output == phi_out {
                                    let val = self.eval_phi(bid, phi);
                                    if self.set_value(phi.output, val) {
                                        self.propagate_to_uses(phi.output);
                                    }
                                }
                            }
                        }
                    }
                }

                continue;
            }

            // Both worklists empty — fixed point reached.
            break;
        }
    }

    /// Visit only instructions in a block (phi nodes handled separately).
    fn visit_block_insns_only(&mut self, bid: BlockId) {
        if let Some(block) = self.func.function.blocks.get(&bid) {
            let insn_count = block.insns.len();
            for i in 0..insn_count {
                let insn = self.func.function.blocks[&bid].insns[i].clone();
                self.visit_insn(bid, i, insn);
            }
        }
    }
}

// ---------------------------------------------------------------------------
// Constant evaluator (reused from const_fold.rs logic)
// ---------------------------------------------------------------------------

fn mask_for_size(size: u8) -> u64 {
    if size >= 8 {
        u64::MAX
    } else {
        (1u64 << (size as u32 * 8)) - 1
    }
}

fn sign_extend(val: u64, size: u8) -> i64 {
    let bits = size as u32 * 8;
    let shift = 64 - bits;
    ((val as i64) << shift) >> shift
}

fn evaluate(op: IrOp, inputs: &[Varnode], out_size: u8) -> Option<u64> {
    let mask = mask_for_size(out_size);

    match op {
        IrOp::Copy => {
            let a = one(inputs)?;
            Some(a.offset & mask)
        }
        IrOp::IntAdd => {
            let (a, b) = two(inputs)?;
            Some(a.offset.wrapping_add(b.offset) & mask)
        }
        IrOp::IntSub => {
            let (a, b) = two(inputs)?;
            Some(a.offset.wrapping_sub(b.offset) & mask)
        }
        IrOp::IntMult => {
            let (a, b) = two(inputs)?;
            Some(a.offset.wrapping_mul(b.offset) & mask)
        }
        IrOp::IntDiv => {
            let (a, b) = two(inputs)?;
            if b.offset == 0 {
                return None;
            }
            let av = a.offset & mask_for_size(a.size);
            let bv = b.offset & mask_for_size(b.size);
            Some(av / bv)
        }
        IrOp::IntSdiv => {
            let (a, b) = two(inputs)?;
            if b.offset == 0 {
                return None;
            }
            let av = sign_extend(a.offset, a.size);
            let bv = sign_extend(b.offset, b.size);
            if av == i64::MIN && bv == -1 {
                return None;
            }
            Some((av.wrapping_div(bv) as u64) & mask)
        }
        IrOp::IntRem => {
            let (a, b) = two(inputs)?;
            if b.offset == 0 {
                return None;
            }
            let av = a.offset & mask_for_size(a.size);
            let bv = b.offset & mask_for_size(b.size);
            Some(av % bv)
        }
        IrOp::IntSrem => {
            let (a, b) = two(inputs)?;
            if b.offset == 0 {
                return None;
            }
            let av = sign_extend(a.offset, a.size);
            let bv = sign_extend(b.offset, b.size);
            if av == i64::MIN && bv == -1 {
                return None;
            }
            Some((av.wrapping_rem(bv) as u64) & mask)
        }
        IrOp::IntNegate => {
            let a = one(inputs)?;
            Some((!a.offset) & mask)
        }
        IrOp::Int2comp => {
            let a = one(inputs)?;
            Some(a.offset.wrapping_neg() & mask)
        }
        IrOp::IntZext => {
            let a = one(inputs)?;
            Some(a.offset & mask_for_size(a.size))
        }
        IrOp::IntSext => {
            let a = one(inputs)?;
            let extended = sign_extend(a.offset, a.size);
            Some((extended as u64) & mask)
        }
        IrOp::IntAnd => {
            let (a, b) = two(inputs)?;
            Some((a.offset & b.offset) & mask)
        }
        IrOp::IntOr => {
            let (a, b) = two(inputs)?;
            Some((a.offset | b.offset) & mask)
        }
        IrOp::IntXor => {
            let (a, b) = two(inputs)?;
            Some((a.offset ^ b.offset) & mask)
        }
        IrOp::IntLeft => {
            let (a, b) = two(inputs)?;
            let bits = out_size as u32 * 8;
            let shift = b.offset & mask_for_size(b.size);
            if shift >= bits as u64 {
                Some(0)
            } else {
                Some((a.offset << shift as u32) & mask)
            }
        }
        IrOp::IntRight => {
            let (a, b) = two(inputs)?;
            let bits = out_size as u32 * 8;
            let shift = b.offset & mask_for_size(b.size);
            let av = a.offset & mask;
            if shift >= bits as u64 {
                Some(0)
            } else {
                Some(av >> shift as u32)
            }
        }
        IrOp::IntSright => {
            let (a, b) = two(inputs)?;
            let bits = out_size as u32 * 8;
            let shift = b.offset & mask_for_size(b.size);
            let signed_a = sign_extend(a.offset, out_size);
            if shift >= bits as u64 {
                if signed_a < 0 { Some(mask) } else { Some(0) }
            } else {
                Some(((signed_a >> shift as u32) as u64) & mask)
            }
        }
        IrOp::IntEqual => {
            let (a, b) = two(inputs)?;
            let av = a.offset & mask_for_size(a.size);
            let bv = b.offset & mask_for_size(b.size);
            Some(u64::from(av == bv))
        }
        IrOp::IntNotequal => {
            let (a, b) = two(inputs)?;
            let av = a.offset & mask_for_size(a.size);
            let bv = b.offset & mask_for_size(b.size);
            Some(u64::from(av != bv))
        }
        IrOp::IntLess => {
            let (a, b) = two(inputs)?;
            let av = a.offset & mask_for_size(a.size);
            let bv = b.offset & mask_for_size(b.size);
            Some(u64::from(av < bv))
        }
        IrOp::IntSless => {
            let (a, b) = two(inputs)?;
            let sa = sign_extend(a.offset, a.size);
            let sb = sign_extend(b.offset, b.size);
            Some(u64::from(sa < sb))
        }
        IrOp::IntLessequal => {
            let (a, b) = two(inputs)?;
            let av = a.offset & mask_for_size(a.size);
            let bv = b.offset & mask_for_size(b.size);
            Some(u64::from(av <= bv))
        }
        IrOp::IntSlessequal => {
            let (a, b) = two(inputs)?;
            let sa = sign_extend(a.offset, a.size);
            let sb = sign_extend(b.offset, b.size);
            Some(u64::from(sa <= sb))
        }
        IrOp::IntCarry => {
            let (a, b) = two(inputs)?;
            let av = a.offset & mask_for_size(a.size);
            let bv = b.offset & mask_for_size(b.size);
            let m = mask_for_size(a.size);
            Some(u64::from(av.wrapping_add(bv) & m < av))
        }
        IrOp::IntScarry => {
            let (a, b) = two(inputs)?;
            let sa = sign_extend(a.offset, a.size);
            let sb = sign_extend(b.offset, b.size);
            let sum = sa.wrapping_add(sb);
            let overflow = (sa ^ sum) & (sb ^ sum) < 0;
            Some(u64::from(overflow))
        }
        IrOp::IntSborrow => {
            let (a, b) = two(inputs)?;
            let sa = sign_extend(a.offset, a.size);
            let sb = sign_extend(b.offset, b.size);
            let diff = sa.wrapping_sub(sb);
            let overflow = (sa ^ sb) & (sa ^ diff) < 0;
            Some(u64::from(overflow))
        }
        IrOp::BoolNegate => {
            let a = one(inputs)?;
            Some(u64::from((a.offset & 1) == 0))
        }
        IrOp::BoolAnd => {
            let (a, b) = two(inputs)?;
            Some((a.offset & 1) & (b.offset & 1))
        }
        IrOp::BoolOr => {
            let (a, b) = two(inputs)?;
            Some((a.offset & 1) | (b.offset & 1))
        }
        IrOp::BoolXor => {
            let (a, b) = two(inputs)?;
            Some((a.offset & 1) ^ (b.offset & 1))
        }
        _ => None,
    }
}

fn one(inputs: &[Varnode]) -> Option<Varnode> {
    if inputs.len() == 1 {
        Some(inputs[0])
    } else {
        None
    }
}

fn two(inputs: &[Varnode]) -> Option<(Varnode, Varnode)> {
    if inputs.len() == 2 {
        Some((inputs[0], inputs[1]))
    } else {
        None
    }
}

// ---------------------------------------------------------------------------
// Rewrite phase
// ---------------------------------------------------------------------------

/// Results extracted from the solver for use in the rewrite phase.
struct SccpResults {
    values: BTreeMap<SsaVarnode, LatticeValue>,
    reachable: BTreeSet<BlockId>,
}

impl SccpResults {
    fn get_value(&self, sv: &SsaVarnode) -> LatticeValue {
        if sv.base.space == SpaceId::Const {
            return LatticeValue::Constant {
                value: sv.base.offset,
                size: sv.base.size,
            };
        }
        self.values.get(sv).copied().unwrap_or(LatticeValue::Top)
    }
}

fn collect_callother_input_defs(func: &SsaFunction) -> BTreeSet<SsaVarnode> {
    let mut protected = BTreeSet::new();
    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Callother {
                continue;
            }
            for (input_pos, input_vn) in insn.inputs.iter().enumerate() {
                if input_vn.space == SpaceId::Const {
                    continue;
                }
                let key = (bid, insn_idx, VarnodeSlot::Input(input_pos));
                if let Some(&sv) = func.var_map.get(&key) {
                    protected.insert(sv);
                }
            }
        }
    }
    protected
}

fn rewrite(func: &mut SsaFunction, results: &SccpResults) -> bool {
    let mut changed = false;

    // Collect SSA varnodes that feed Callother inputs — these carry semantic
    // information (e.g. CMOVcc condition flags) that must not be folded away.
    let callother_inputs = collect_callother_input_defs(func);

    for (&bid, block) in &mut func.function.blocks {
        for (insn_idx, insn) in block.insns.iter_mut().enumerate() {
            let out = match insn.output {
                Some(o) => o,
                None => continue,
            };

            if insn.op == IrOp::Copy
                && insn.inputs.len() == 1
                && insn.inputs[0].space == SpaceId::Const
            {
                continue;
            }

            let key = (bid, insn_idx, VarnodeSlot::Output);
            let sv = match func.var_map.get(&key) {
                Some(sv) => *sv,
                None => continue,
            };

            if callother_inputs.contains(&sv) {
                continue;
            }

            match results.get_value(&sv) {
                LatticeValue::Constant { value, size } => {
                    let const_vn = Varnode::constant(value, size);
                    *insn = IrInsn::with_output(
                        IrOp::Copy,
                        out,
                        smallvec::smallvec![const_vn],
                        insn.addr,
                    );
                    changed = true;
                }
                LatticeValue::Top => {
                    if results.reachable.contains(&bid) {
                        let const_vn = Varnode::constant(0, out.size);
                        *insn = IrInsn::with_output(
                            IrOp::Copy,
                            out,
                            smallvec::smallvec![const_vn],
                            insn.addr,
                        );
                        changed = true;
                    }
                }
                LatticeValue::Bottom => {}
            }
        }
    }

    changed
}

// ---------------------------------------------------------------------------
// Pass implementation
// ---------------------------------------------------------------------------

pub struct SccpPass;

impl Pass for SccpPass {
    fn name(&self) -> &str {
        "sccp"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let results = {
            let mut solver = SccpSolver::new(func);
            solver.solve();
            SccpResults {
                values: solver.values,
                reachable: solver.reachable,
            }
        };
        let changed = rewrite(func, &results);
        Ok(changed)
    }
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    use super::*;
    use crate::pass::Pass;

    fn make_single_block_ssa(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    /// Basic constant propagation: `v1 = 5; v2 = v1 + 3` → `v2 = 8`.
    #[test]
    fn test_sccp_basic_const() {
        let out1 = Varnode::unique(0, 4);
        let out2 = Varnode::unique(8, 4);
        let c5 = Varnode::constant(5, 4);
        let c3 = Varnode::constant(3, 4);

        // v1 = COPY 5
        let insn1 = IrInsn::with_output(IrOp::Copy, out1, smallvec![c5], 0x1000);
        // v2 = INT_ADD v1, 3
        let insn2 = IrInsn::with_output(IrOp::IntAdd, out2, smallvec![out1, c3], 0x1004);

        let mut ssa = make_single_block_ssa(vec![insn1, insn2]);
        let changed = SccpPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        // insn2 should be folded to COPY 8.
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[1].inputs[0].offset, 8);
    }

    /// SCCP through a taken branch: `if (true) v1 = 5; else v1 = 10; return v1;`
    /// Should resolve the phi to 5 because the false branch is unreachable.
    #[test]
    fn test_sccp_through_branch_taken() {
        //  BB0: cond = INT_EQUAL(5, 5) → always true (1)
        //       CBRANCH(cond)  → true: BB1, false: BB2
        //  BB1: v1 = COPY 5; BRANCH → BB3
        //  BB2: v1 = COPY 10; BRANCH → BB3
        //  BB3: phi(v1) from BB1, BB2; RETURN
        let cond = Varnode::unique(0, 1);
        let v1 = Varnode::reg(0, 4);
        let c5_4 = Varnode::constant(5, 4);
        let c10 = Varnode::constant(10, 4);

        let mut func = Function::new("test_branch", BlockId(0), 0x2000);

        // BB0: compute cond = INT_EQUAL(5, 5) → 1
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            cond,
            smallvec![c5_4, c5_4],
            0x2000,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), cond],
            0x2004,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        // BB1: v1 = 5
        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns
            .push(IrInsn::with_output(IrOp::Copy, v1, smallvec![c5_4], 0x2010));
        bb1.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x2014));
        bb1.successors = smallvec![BlockId(3)];

        // BB2: v1 = 10
        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns
            .push(IrInsn::with_output(IrOp::Copy, v1, smallvec![c10], 0x2020));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x2024));
        bb2.successors = smallvec![BlockId(3)];

        // BB3: use v1 (phi merge point), return.
        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![v1], 0x2030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let mut ssa = build_ssa(func);

        // Verify that a phi was placed at BB3 for v1.
        let phis_at_3 = ssa.phi_map.get(&BlockId(3));
        assert!(
            phis_at_3.is_some() && !phis_at_3.unwrap().is_empty(),
            "phi expected at BB3 for v1"
        );

        let changed = SccpPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed, "SCCP should have propagated constants");

        // The condition is always true, so BB2 is unreachable.
        // The phi at BB3 should resolve to constant 5.
        // Check that BB1's COPY output became COPY 5 (it was already, but
        // verify the solver ran). The key test is that the phi_output
        // resolved to constant 5 via the solver.
        let solver = {
            let mut s = SccpSolver::new(&ssa);
            s.solve();
            s
        };

        // BB2 should NOT be reachable.
        assert!(
            !solver.reachable.contains(&BlockId(2)),
            "BB2 should be unreachable (false branch of always-true condition)"
        );

        // The phi at BB3 should have resolved to Constant(5).
        if let Some(phis) = ssa.phi_map.get(&BlockId(3)) {
            for phi in phis {
                if phi.output.base == v1 {
                    let val = solver.get_value(&phi.output);
                    assert_eq!(
                        val,
                        LatticeValue::Constant { value: 5, size: 4 },
                        "phi for v1 at BB3 should be constant 5"
                    );
                }
            }
        }
    }

    /// Unreachable branch: `if (5 == 5) ... ; else <unreachable>`.
    /// Instructions in the unreachable block should not affect the lattice.
    #[test]
    fn test_sccp_unreachable_branch() {
        let cond = Varnode::unique(0, 1);
        let c5 = Varnode::constant(5, 4);

        let mut func = Function::new("test_unreach", BlockId(0), 0x3000);

        // BB0: cond = INT_EQUAL(5, 5); CBRANCH → true: BB1, false: BB2
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            cond,
            smallvec![c5, c5],
            0x3000,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), cond],
            0x3004,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        // BB1 (reachable): return
        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x3010,
        ));

        // BB2 (unreachable): some computation
        let mut bb2 = BasicBlock::new(BlockId(2));
        let unreachable_out = Varnode::unique(4, 4);
        bb2.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            unreachable_out,
            smallvec![Varnode::reg(0, 4), Varnode::reg(8, 4)],
            0x3020,
        ));
        bb2.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![unreachable_out],
            0x3024,
        ));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let ssa = build_ssa(func);

        let mut solver = SccpSolver::new(&ssa);
        solver.solve();

        // BB2 should be unreachable.
        assert!(
            !solver.reachable.contains(&BlockId(2)),
            "BB2 should be unreachable"
        );
        // BB1 should be reachable.
        assert!(
            solver.reachable.contains(&BlockId(1)),
            "BB1 should be reachable"
        );
    }

    /// Phi with two reachable inputs (5 and 10) → Bottom (not constant).
    #[test]
    fn test_sccp_phi_meet() {
        let v1 = Varnode::reg(0, 4);
        let c5 = Varnode::constant(5, 4);
        let c10 = Varnode::constant(10, 4);
        let cond_input = Varnode::reg(8, 1);

        let mut func = Function::new("test_phi_meet", BlockId(0), 0x4000);

        // BB0: CBRANCH on a runtime value → both branches reachable.
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), cond_input],
            0x4000,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        // BB1: v1 = 5
        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns
            .push(IrInsn::with_output(IrOp::Copy, v1, smallvec![c5], 0x4010));
        bb1.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x4014));
        bb1.successors = smallvec![BlockId(3)];

        // BB2: v1 = 10
        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns
            .push(IrInsn::with_output(IrOp::Copy, v1, smallvec![c10], 0x4020));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x4024));
        bb2.successors = smallvec![BlockId(3)];

        // BB3: phi(v1) → should be Bottom since both branches contribute different values.
        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![v1], 0x4030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let ssa = build_ssa(func);

        let mut solver = SccpSolver::new(&ssa);
        solver.solve();

        // Both branches reachable (condition is Bottom = runtime value).
        assert!(solver.reachable.contains(&BlockId(1)));
        assert!(solver.reachable.contains(&BlockId(2)));

        // The phi at BB3 for v1 should be Bottom (different constants from different paths).
        if let Some(phis) = ssa.phi_map.get(&BlockId(3)) {
            for phi in phis {
                if phi.output.base == v1 {
                    let val = solver.get_value(&phi.output);
                    assert_eq!(
                        val,
                        LatticeValue::Bottom,
                        "phi for v1 at BB3 should be Bottom (5 meet 10)"
                    );
                }
            }
        }
    }

    /// Phi with one reachable input (5) and one unreachable → should be 5.
    #[test]
    fn test_sccp_phi_one_reachable() {
        let v1 = Varnode::reg(0, 4);
        let c5 = Varnode::constant(5, 4);
        let c10 = Varnode::constant(10, 4);
        let c1_bool = Varnode::constant(1, 1);

        let mut func = Function::new("test_phi_one_reach", BlockId(0), 0x5000);

        // BB0: CBRANCH on constant 1 → only true branch (BB1) reachable.
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), c1_bool],
            0x5000,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        // BB1: v1 = 5
        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns
            .push(IrInsn::with_output(IrOp::Copy, v1, smallvec![c5], 0x5010));
        bb1.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x5014));
        bb1.successors = smallvec![BlockId(3)];

        // BB2: v1 = 10 (unreachable)
        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns
            .push(IrInsn::with_output(IrOp::Copy, v1, smallvec![c10], 0x5020));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x5024));
        bb2.successors = smallvec![BlockId(3)];

        // BB3: phi(v1) → should resolve to 5.
        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![v1], 0x5030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let ssa = build_ssa(func);

        let mut solver = SccpSolver::new(&ssa);
        solver.solve();

        // BB2 should be unreachable.
        assert!(
            !solver.reachable.contains(&BlockId(2)),
            "BB2 should be unreachable"
        );

        // The phi at BB3 for v1 should resolve to Constant(5).
        if let Some(phis) = ssa.phi_map.get(&BlockId(3)) {
            for phi in phis {
                if phi.output.base == v1 {
                    let val = solver.get_value(&phi.output);
                    assert_eq!(
                        val,
                        LatticeValue::Constant { value: 5, size: 4 },
                        "phi for v1 at BB3 should be constant 5 (only reachable input)"
                    );
                }
            }
        }
    }
}
