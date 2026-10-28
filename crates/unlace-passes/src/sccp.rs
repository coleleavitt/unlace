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
//!    `Top` values are left in place because they may be external inputs in
//!    partially-renamed machine SSA.

use std::collections::{BTreeMap, BTreeSet, VecDeque};

use smallvec::SmallVec;
use unlace_ir::cfg::EdgeKind;
use unlace_ir::ssa::{PhiNode, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::options::SccpLimits;
use crate::pass::{Pass, PassError};

fn sccp_work_exceeded(max_work: u64, work: u64) -> bool {
    max_work > 0 && work > max_work
}

fn sccp_var_budget_exceeded(func: &SsaFunction, limit: usize) -> bool {
    let phi_vars: usize = func
        .phi_map
        .values()
        .map(|phis| {
            phis.iter()
                .map(|phi| 1usize.saturating_add(phi.inputs.len()))
                .sum::<usize>()
        })
        .sum();
    let vars = func.var_map.len().saturating_add(phi_vars);
    linkscope::record_items("pass.sccp.var-budget.vars", vars as u64);
    linkscope::record_items("pass.sccp.var-budget.limit", limit as u64);
    let exceeded = limit > 0 && vars > limit;
    if exceeded {
        linkscope::record_items("pass.sccp.var-budget.skip", 1);
    }
    exceeded
}

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
    /// Executable CFG edges already queued/processed.
    executable_edges: BTreeSet<(BlockId, BlockId)>,
    /// CFG worklist: edges (source, dest) to process.
    cfg_worklist: VecDeque<(BlockId, BlockId)>,
    /// SSA worklist: definitions whose value changed.
    ssa_worklist: VecDeque<SsaVarnode>,
    /// Def-use chains: given a definition SsaVarnode, which (block, insn_idx) use it.
    /// Built once at the start.
    uses: BTreeMap<SsaVarnode, Vec<(BlockId, usize)>>,
    /// Phi-uses: given a definition SsaVarnode, which (block, phi_output) use it.
    phi_uses: BTreeMap<SsaVarnode, Vec<(BlockId, SsaVarnode)>>,
    /// Phi definitions keyed by `(block, output)` so worklist processing can
    /// re-evaluate one affected phi without scanning every phi in that block.
    phis_by_output: BTreeMap<(BlockId, SsaVarnode), PhiNode>,
}

struct DominanceIndex {
    dominators: BTreeMap<BlockId, BTreeSet<BlockId>>,
}

impl DominanceIndex {
    fn new(func: &SsaFunction) -> Self {
        let mut dominators = BTreeMap::new();
        for &bid in func.function.blocks.keys() {
            let mut set = BTreeSet::new();
            let mut seen = BTreeSet::new();
            let mut cur = bid;
            set.insert(cur);
            seen.insert(cur);

            while let Some(parent) = func.dom_tree.idom(cur) {
                set.insert(parent);
                if parent == cur || !seen.insert(parent) {
                    break;
                }
                cur = parent;
            }

            dominators.insert(bid, set);
        }
        Self { dominators }
    }

    fn dominates(&self, dominator: BlockId, block: BlockId) -> bool {
        self.dominators
            .get(&block)
            .is_some_and(|blocks| blocks.contains(&dominator))
    }
}

impl<'a> SccpSolver<'a> {
    fn new(func: &'a SsaFunction) -> Self {
        let mut solver = Self {
            func,
            values: BTreeMap::new(),
            reachable: BTreeSet::new(),
            executable_edges: BTreeSet::new(),
            cfg_worklist: VecDeque::new(),
            ssa_worklist: VecDeque::new(),
            uses: BTreeMap::new(),
            phi_uses: BTreeMap::new(),
            phis_by_output: BTreeMap::new(),
        };
        {
            let _span = linkscope::phase("pass.sccp.build-use-chains");
            solver.build_use_chains();
        }
        {
            let _span = linkscope::phase("pass.sccp.init-external-inputs");
            solver.init_external_inputs();
        }
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
                self.phis_by_output.insert((bid, phi.output), phi.clone());
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
        let def_locs = self.collect_instruction_def_locs();
        let phi_def_blocks = self.collect_phi_def_blocks();
        let dominance = DominanceIndex::new(self.func);
        let defined: BTreeSet<SsaVarnode> = def_locs
            .keys()
            .copied()
            .chain(phi_def_blocks.keys().copied())
            .collect();

        for (&(bid, insn_idx, ref slot), sv) in &self.func.var_map {
            if !matches!(slot, VarnodeSlot::Input(_)) || sv.base.space == SpaceId::Const {
                continue;
            }
            if !self.has_dominating_def(&def_locs, &phi_def_blocks, &dominance, *sv, bid, insn_idx)
            {
                self.values.insert(*sv, LatticeValue::Bottom);
            }
        }

        for sv in self.phi_uses.keys() {
            if sv.base.space != SpaceId::Const && !defined.contains(sv) {
                self.values.insert(*sv, LatticeValue::Bottom);
            }
        }
    }

    fn collect_instruction_def_locs(&self) -> BTreeMap<SsaVarnode, Vec<(BlockId, usize)>> {
        let mut defs: BTreeMap<SsaVarnode, Vec<(BlockId, usize)>> = BTreeMap::new();
        for (&(bid, insn_idx, ref slot), sv) in &self.func.var_map {
            if matches!(slot, VarnodeSlot::Output) {
                defs.entry(*sv).or_default().push((bid, insn_idx));
            }
        }
        defs
    }

    fn collect_phi_def_blocks(&self) -> BTreeMap<SsaVarnode, Vec<BlockId>> {
        let mut defs: BTreeMap<SsaVarnode, Vec<BlockId>> = BTreeMap::new();
        for (&bid, phis) in &self.func.phi_map {
            for phi in phis {
                defs.entry(phi.output).or_default().push(bid);
            }
        }
        defs
    }

    fn has_dominating_def(
        &self,
        def_locs: &BTreeMap<SsaVarnode, Vec<(BlockId, usize)>>,
        phi_def_blocks: &BTreeMap<SsaVarnode, Vec<BlockId>>,
        dominance: &DominanceIndex,
        sv: SsaVarnode,
        use_bid: BlockId,
        use_idx: usize,
    ) -> bool {
        let has_phi_def = phi_def_blocks.get(&sv).is_some_and(|blocks| {
            blocks
                .iter()
                .any(|&def_bid| dominance.dominates(def_bid, use_bid))
        });
        if has_phi_def {
            return true;
        }

        def_locs.get(&sv).is_some_and(|locs| {
            locs.iter().any(|&(def_bid, def_idx)| {
                Self::instruction_def_dominates_use(dominance, def_bid, def_idx, use_bid, use_idx)
            })
        })
    }

    fn instruction_def_dominates_use(
        dominance: &DominanceIndex,
        def_bid: BlockId,
        def_idx: usize,
        use_bid: BlockId,
        use_idx: usize,
    ) -> bool {
        if def_bid == use_bid {
            return def_idx < use_idx;
        }
        dominance.dominates(def_bid, use_bid)
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

        // Collect constant inputs without heap allocation. Any Bottom input
        // makes the result overdefined; Top remains optimistic unless a Bottom
        // appears anywhere in the same instruction.
        let mut any_top = false;
        let mut const_varnodes: SmallVec<[Varnode; 4]> = SmallVec::new();

        for (idx, input) in insn.inputs.iter().enumerate() {
            let val = self.resolve_input(bid, insn_idx, idx, input);
            match val {
                LatticeValue::Top => {
                    any_top = true;
                }
                LatticeValue::Constant { value, size } => {
                    const_varnodes.push(Varnode::constant(value, size));
                }
                LatticeValue::Bottom => {
                    return LatticeValue::Bottom;
                }
            }
        }

        if any_top {
            // Some inputs are still Top — leave as Top (optimistic).
            return LatticeValue::Top;
        }

        // All inputs constant — try to evaluate.
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
    fn visit_block(&mut self, bid: BlockId) -> (u64, u64) {
        let mut phi_evals = 0;
        let mut insns_visited = 0;
        // Evaluate phi nodes.
        if let Some(phis) = self.func.phi_map.get(&bid).cloned() {
            for phi in &phis {
                phi_evals += 1;
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
                insns_visited += 1;
            }
        }
        (phi_evals, insns_visited)
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
        if self.executable_edges.insert((from, to)) {
            self.cfg_worklist.push_back((from, to));
        }
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

    /// Run the SCCP algorithm to a fixed point with the default work budget.
    #[cfg(test)]
    fn solve(&mut self) -> bool {
        self.solve_with_budget(crate::SccpLimits::default().max_work)
    }

    fn solve_with_budget(&mut self, max_work: u64) -> bool {
        let _span = linkscope::phase("pass.sccp.solve");
        let mut cfg_edges_processed = 0u64;
        let mut ssa_defs_processed = 0u64;
        let mut use_sites_visited = 0u64;
        let mut phi_evals = 0u64;
        let mut insns_visited = 0u64;
        let mut work = 0u64;

        // Seed: entry block is reachable.
        let entry = self.func.function.entry;
        self.reachable.insert(entry);
        let (entry_phi_evals, entry_insns_visited) = self.visit_block(entry);
        phi_evals += entry_phi_evals;
        insns_visited += entry_insns_visited;
        work = work.saturating_add(entry_phi_evals + entry_insns_visited);
        if sccp_work_exceeded(max_work, work) {
            self.record_solve_counters(
                cfg_edges_processed,
                ssa_defs_processed,
                use_sites_visited,
                phi_evals,
                insns_visited,
                work,
                true,
            );
            return false;
        }
        self.visit_terminator(entry);

        loop {
            // Prefer CFG edges first (order doesn't matter for correctness,
            // but CFG edges can unlock new phi evaluations).
            if let Some((_from, to)) = self.cfg_worklist.pop_front() {
                cfg_edges_processed += 1;
                work = work.saturating_add(1);
                let first_time = self.reachable.insert(to);

                // Re-evaluate phi nodes in the target block (the new
                // predecessor may contribute a different value).
                if let Some(phis) = self.func.phi_map.get(&to).cloned() {
                    for phi in &phis {
                        phi_evals += 1;
                        work = work.saturating_add(1);
                        if sccp_work_exceeded(max_work, work) {
                            self.record_solve_counters(
                                cfg_edges_processed,
                                ssa_defs_processed,
                                use_sites_visited,
                                phi_evals,
                                insns_visited,
                                work,
                                true,
                            );
                            return false;
                        }
                        let val = self.eval_phi(to, phi);
                        if self.set_value(phi.output, val) {
                            self.propagate_to_uses(phi.output);
                        }
                    }
                }

                if first_time {
                    // First time seeing this block — evaluate all instructions.
                    let block_insns = self.visit_block_insns_only(to);
                    insns_visited += block_insns;
                    work = work.saturating_add(block_insns);
                    if sccp_work_exceeded(max_work, work) {
                        self.record_solve_counters(
                            cfg_edges_processed,
                            ssa_defs_processed,
                            use_sites_visited,
                            phi_evals,
                            insns_visited,
                            work,
                            true,
                        );
                        return false;
                    }
                    self.visit_terminator(to);
                }

                continue;
            }

            if let Some(def_sv) = self.ssa_worklist.pop_front() {
                ssa_defs_processed += 1;
                work = work.saturating_add(1);
                if sccp_work_exceeded(max_work, work) {
                    self.record_solve_counters(
                        cfg_edges_processed,
                        ssa_defs_processed,
                        use_sites_visited,
                        phi_evals,
                        insns_visited,
                        work,
                        true,
                    );
                    return false;
                }
                // Re-evaluate all uses of this definition.
                if let Some(use_sites) = self.uses.get(&def_sv).cloned() {
                    for (bid, insn_idx) in use_sites {
                        if !self.reachable.contains(&bid) {
                            continue;
                        }
                        if let Some(block) = self.func.function.blocks.get(&bid)
                            && insn_idx < block.insns.len()
                        {
                            use_sites_visited += 1;
                            work = work.saturating_add(1);
                            if sccp_work_exceeded(max_work, work) {
                                self.record_solve_counters(
                                    cfg_edges_processed,
                                    ssa_defs_processed,
                                    use_sites_visited,
                                    phi_evals,
                                    insns_visited,
                                    work,
                                    true,
                                );
                                return false;
                            }
                            let insn = block.insns[insn_idx].clone();
                            self.visit_insn(bid, insn_idx, insn);
                        }
                    }
                }

                // Re-evaluate phi nodes that use this definition.
                if let Some(phi_sites) = self.phi_uses.get(&def_sv).cloned() {
                    for (bid, phi_out) in phi_sites {
                        if !self.reachable.contains(&bid) {
                            continue;
                        }
                        if let Some(phi) = self.phis_by_output.get(&(bid, phi_out)).cloned() {
                            phi_evals += 1;
                            work = work.saturating_add(1);
                            if sccp_work_exceeded(max_work, work) {
                                self.record_solve_counters(
                                    cfg_edges_processed,
                                    ssa_defs_processed,
                                    use_sites_visited,
                                    phi_evals,
                                    insns_visited,
                                    work,
                                    true,
                                );
                                return false;
                            }
                            let val = self.eval_phi(bid, &phi);
                            if self.set_value(phi.output, val) {
                                self.propagate_to_uses(phi.output);
                            }
                        }
                    }
                }

                continue;
            }

            // Both worklists empty — fixed point reached.
            self.record_solve_counters(
                cfg_edges_processed,
                ssa_defs_processed,
                use_sites_visited,
                phi_evals,
                insns_visited,
                work,
                false,
            );
            return true;
        }
    }

    fn record_solve_counters(
        &self,
        cfg_edges_processed: u64,
        ssa_defs_processed: u64,
        use_sites_visited: u64,
        phi_evals: u64,
        insns_visited: u64,
        work: u64,
        budget_hit: bool,
    ) {
        linkscope::record_items("pass.sccp.cfg-edges", cfg_edges_processed);
        linkscope::record_items("pass.sccp.ssa-defs", ssa_defs_processed);
        linkscope::record_items("pass.sccp.use-sites", use_sites_visited);
        linkscope::record_items("pass.sccp.phi-evals", phi_evals);
        linkscope::record_items("pass.sccp.insns", insns_visited);
        linkscope::record_items("pass.sccp.work", work);
        if budget_hit {
            linkscope::record_items("pass.sccp.budget-hit", 1);
        }
    }

    /// Visit only instructions in a block (phi nodes handled separately).
    fn visit_block_insns_only(&mut self, bid: BlockId) -> u64 {
        let mut insns_visited = 0;
        if let Some(block) = self.func.function.blocks.get(&bid) {
            let insn_count = block.insns.len();
            for i in 0..insn_count {
                let insn = self.func.function.blocks[&bid].insns[i].clone();
                self.visit_insn(bid, i, insn);
                insns_visited += 1;
            }
        }
        insns_visited
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
    // Constants are `u64`. A result or operand wider than that (a 128-bit
    // SSE register lowered to integer IR) is evaluated only when the
    // operation cannot carry bits past bit 63.
    if !matches!(op, IrOp::Copy | IrOp::IntZext)
        && (out_size > 8 || inputs.iter().any(|v| v.size > 8))
    {
        return None;
    }
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
    let mut worklist = Vec::new();
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
                if let Some(&sv) = func.var_map.get(&key)
                    && protected.insert(sv)
                {
                    worklist.push(sv);
                }
            }
        }
    }

    if worklist.is_empty() {
        return protected;
    }

    let mut def_inputs: BTreeMap<SsaVarnode, Vec<SsaVarnode>> = BTreeMap::new();
    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            let Some(output_sv) = func
                .var_map
                .get(&(bid, insn_idx, VarnodeSlot::Output))
                .copied()
            else {
                continue;
            };

            let inputs = (0..insn.inputs.len())
                .filter_map(|input_pos| {
                    func.var_map
                        .get(&(bid, insn_idx, VarnodeSlot::Input(input_pos)))
                        .copied()
                })
                .collect();
            def_inputs.insert(output_sv, inputs);
        }
    }

    while let Some(sv) = worklist.pop() {
        let Some(inputs) = def_inputs.get(&sv) else {
            continue;
        };
        for input_sv in inputs {
            if input_sv.base.space == SpaceId::Const {
                continue;
            }
            if protected.insert(*input_sv) {
                worklist.push(*input_sv);
            }
        }
    }

    protected
}

fn rewrite(func: &mut SsaFunction, results: &SccpResults) -> bool {
    let _span = linkscope::phase("pass.sccp.rewrite");
    let mut changed = false;
    let func_name = func.function.name.clone();

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

            // Alias-category barrier: never rewrite a LOAD whose
            // category is Mmio/Volatile to a constant COPY. Each
            // downstream read of a memory-mapped or volatile address
            // must observe the explicit access. Bump the global
            // preserved-access counter for observability.
            if insn.op == IrOp::Load
                && let Some(c) = insn.category
                && c.is_preserved()
            {
                unlace_ir::alias::record_preserved();
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
                    let before = insn.clone();
                    let after = IrInsn::with_output(
                        IrOp::Copy,
                        out,
                        smallvec::smallvec![const_vn],
                        insn.addr,
                    );
                    tracing::debug!(
                        target: "unlace::sccp",
                        "func={} addr={:#x} rewrite {} -> {} lattice={:?}",
                        func_name,
                        before.addr,
                        before,
                        after,
                        LatticeValue::Constant { value, size }
                    );
                    *insn = after;
                    changed = true;
                }
                LatticeValue::Top => {}
                LatticeValue::Bottom => {}
            }
        }
    }

    changed
}

// ---------------------------------------------------------------------------
// Pass implementation
// ---------------------------------------------------------------------------

#[derive(Clone, Copy, Debug, Default)]
pub struct SccpPass {
    pub limits: SccpLimits,
}

impl Pass for SccpPass {
    fn name(&self) -> &str {
        "sccp"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::LocalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        if sccp_var_budget_exceeded(func, self.limits.max_vars) {
            return Ok(false);
        }
        let results = {
            let mut solver = SccpSolver::new(func);
            if !solver.solve_with_budget(self.limits.max_work) {
                return Ok(false);
            }
            SccpResults {
                values: solver.values,
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
        let changed = SccpPass::default()
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        // insn2 should be folded to COPY 8.
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[1].inputs[0].offset, 8);
    }

    #[test]
    fn test_sccp_preserves_callother_condition_dependency_chain() {
        let src = Varnode::reg(0, 4);
        let dst = Varnode::reg(8, 4);
        let zero = Varnode::constant(0, 4);
        let diff = Varnode::unique(0, 4);
        let zf = Varnode::unique(8, 1);
        let cond = Varnode::unique(16, 1);

        let insns = vec![
            IrInsn::with_output(IrOp::IntSub, diff, smallvec![src, dst], 0x1000),
            IrInsn::with_output(IrOp::IntEqual, zf, smallvec![diff, zero], 0x1004),
            IrInsn::with_output(IrOp::BoolNegate, cond, smallvec![zf], 0x1008),
            IrInsn::without_output(
                IrOp::Callother,
                smallvec![Varnode::constant(0x350, 8), cond, src, dst],
                0x100C,
            ),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let changed = SccpPass::default()
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(
            !changed,
            "runtime condition chain must not be rewritten to constants"
        );

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntSub);
        assert_eq!(block.insns[1].op, IrOp::IntEqual);
        assert_eq!(block.insns[2].op, IrOp::BoolNegate);
    }

    #[test]
    fn test_sccp_preserves_initial_register_read_before_first_write() {
        let rsp = Varnode::reg(32, 8);
        let rbp = Varnode::reg(40, 8);
        let stack_addr = Varnode::unique(0, 8);

        let mut ssa = make_single_block_ssa(vec![
            IrInsn::with_output(
                IrOp::IntSub,
                stack_addr,
                smallvec![rsp, Varnode::constant(8, 8)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::Copy, rsp, smallvec![stack_addr], 0x1004),
            IrInsn::without_output(
                IrOp::Store,
                smallvec![Varnode::constant(SpaceId::Ram as u64, 8), stack_addr, rbp],
                0x1008,
            ),
        ]);

        let changed = SccpPass::default()
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(
            !changed,
            "initial register reads are runtime inputs, not zero constants"
        );

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntSub);
        assert_eq!(block.insns[0].inputs[0], rsp);
        assert_eq!(block.insns[0].inputs[1], Varnode::constant(8, 8));
        assert_eq!(block.insns[2].inputs[1], stack_addr);
    }

    #[test]
    fn add_cfg_edge_is_idempotent() {
        let ssa = make_single_block_ssa(Vec::new());
        let mut solver = SccpSolver::new(&ssa);
        solver.add_cfg_edge(BlockId(0), BlockId(1));
        solver.add_cfg_edge(BlockId(0), BlockId(1));
        solver.add_cfg_edge(BlockId(0), BlockId(1));
        assert_eq!(solver.cfg_worklist.len(), 1);
        assert_eq!(solver.executable_edges.len(), 1);
    }

    #[test]
    fn sccp_work_limit_zero_is_unlimited() {
        assert!(!sccp_work_exceeded(0, u64::MAX));
        assert!(sccp_work_exceeded(1, 2));
    }

    #[test]
    fn solve_reports_incomplete_when_work_budget_is_hit() {
        let out1 = Varnode::unique(0, 4);
        let out2 = Varnode::unique(8, 4);
        let c5 = Varnode::constant(5, 4);
        let c3 = Varnode::constant(3, 4);
        let mut ssa = make_single_block_ssa(vec![
            IrInsn::with_output(IrOp::Copy, out1, smallvec![c5], 0x1000),
            IrInsn::with_output(IrOp::IntAdd, out2, smallvec![out1, c3], 0x1004),
        ]);
        let mut solver = SccpSolver::new(&ssa);
        assert!(!solver.solve_with_budget(1));
        let changed = SccpPass::default()
            .run(&mut ssa)
            .expect("pass should still succeed");
        assert!(changed, "normal budget should still allow the fold");
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

        let changed = SccpPass::default()
            .run(&mut ssa)
            .expect("pass should succeed");
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

    /// Barrier test: an MMIO-tagged LOAD whose evaluated lattice would
    /// be constant (e.g. because the lifter could prove the address)
    /// must not be rewritten to a constant COPY. The LOAD must remain
    /// intact so the memory access is preserved.
    #[test]
    fn test_sccp_mmio_load_not_rewritten_to_const() {
        let addr = Varnode::constant(0xFFFF_0000, 8);
        let out = Varnode::unique(0, 4);
        // MMIO LOAD from a constant address.
        let mut load = IrInsn::with_output(IrOp::Load, out, smallvec![addr], 0x1000);
        load.category = Some(unlace_ir::AliasCategory::Mmio);

        let mut ssa = make_single_block_ssa(vec![load]);
        let before = unlace_ir::alias::preserved_count();
        let _ = SccpPass::default()
            .run(&mut ssa)
            .expect("pass should succeed");
        let after = unlace_ir::alias::preserved_count();

        let block = ssa.function.blocks.values().next().expect("has block");
        // The LOAD insn must still be a LOAD — not folded to COPY.
        assert_eq!(
            block.insns[0].op,
            IrOp::Load,
            "MMIO LOAD must survive SCCP rewrite"
        );
        assert!(after > before, "preservation counter must have incremented");
    }
}
