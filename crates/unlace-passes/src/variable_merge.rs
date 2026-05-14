//! SSA→C variable merging via interference-graph coalescing.
//!
//! After expression-tree folding, many SSA intermediates have been folded
//! away. For the remainder we want to map several SSA varnodes onto a single
//! source-level variable name, the way IDA's Hex-Rays decompiler aggressively
//! re-uses `v3`, `v4`, etc. across unrelated computations.
//!
//! ## Algorithm
//!
//! 1. **Collect** every SSA varnode mentioned in the function body (`var_map`
//!    inputs/outputs and phi inputs/outputs).
//! 2. **Compute live ranges** for each SSA varnode using a backward dataflow
//!    over the CFG: live-out of a block = union of live-in of successors plus
//!    phi inputs sourced from this block; live-in flows backward through each
//!    instruction (use makes-live, def kills).
//! 3. **Build coalescence keys** that group SSA varnodes which *might* share a
//!    name: a key bundles the underlying address space, the base byte size,
//!    and the inferred [`PrimitiveType`] (when known).  Within a register or
//!    stack slot the base [`Varnode`] is part of the key too, so different
//!    physical registers stay separate (rax never coalesces with rcx).
//! 4. **Greedy interference coalescing** within each key: try to merge each
//!    SSA varnode into an existing cluster whose live range does not overlap.
//!    Two live ranges interfere if they share a program point.
//! 5. **Name** each resulting cluster `v1`, `v2`, … in deterministic order.
//!
//! The pass is conservative: when in doubt (e.g. unknown live range, missing
//! CFG edge) it falls back to the prior "one name per base varnode" behaviour
//! so existing callers see no regression.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// A point in the function's program: `(block, instruction index)`.
///
/// Phi nodes are modelled as `insn_idx == usize::MAX` for the "before any
/// real instruction" slot of each block — this keeps the totally-ordered
/// `BTreeSet` keying intact while distinguishing phi defs from insn-0 defs.
#[derive(Copy, Clone, Debug, PartialEq, Eq, PartialOrd, Ord)]
struct ProgramPoint {
    block: BlockId,
    /// `usize::MAX` denotes the synthetic "phi slot" at block entry.
    insn: usize,
}

impl ProgramPoint {
    const PHI: usize = usize::MAX;

    fn at(block: BlockId, insn: usize) -> Self {
        Self { block, insn }
    }

    fn phi(block: BlockId) -> Self {
        Self {
            block,
            insn: Self::PHI,
        }
    }
}

/// Per-block live sets used by the dataflow.
#[derive(Default, Clone)]
struct BlockLiveness {
    /// Varnodes used in this block before any redefinition (UPWARDS-EXPOSED).
    use_set: BTreeSet<SsaVarnode>,
    /// Varnodes defined anywhere in this block.
    def_set: BTreeSet<SsaVarnode>,
    /// Phi-input varnodes contributed *to successor blocks* via the edge from
    /// this block; tracked separately because phi inputs are conceptually live
    /// at the END of the predecessor, not the BEGINNING of the successor.
    phi_use_out: BTreeSet<SsaVarnode>,
    /// Live at block entry (after dataflow converges).
    live_in: BTreeSet<SsaVarnode>,
    /// Live at block exit (after dataflow converges).
    live_out: BTreeSet<SsaVarnode>,
}

/// Cross-base merge key — Unique-space bases sharing this key are candidates
/// for interference-graph coalescing across distinct base [`Varnode`]s.
///
/// SSA versions of the *same* base always share a name unconditionally; this
/// key only decides whether two distinct unique bases of the same size and
/// inferred type can collapse together when their live ranges are disjoint.
#[derive(Clone, Debug, PartialEq, Eq, PartialOrd, Ord)]
struct MergeKey {
    size: u8,
    ty: PrimitiveType,
}

/// Improved variable-coalescence pass.
///
/// Replaces the previous "one name per base [`Varnode`]" heuristic with an
/// interference-graph coalescer that can fold *different* unique varnodes
/// with disjoint live ranges into a single C variable, mirroring how IDA's
/// Hex-Rays output reuses `v3`, `v4`, `v5` across unrelated subexpressions.
pub struct VariableMergePass;

impl Pass for VariableMergePass {
    fn name(&self) -> &str {
        "variable-merge"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        // 1. Collect every SSA varnode that needs a name.
        let all_vars = collect_all_ssa_vars(func);

        if all_vars.is_empty() {
            let changed = !func.merged_names.is_empty();
            func.merged_names.clear();
            return Ok(changed);
        }

        // 2. Compute live ranges via standard backward dataflow.
        let live_ranges = compute_live_ranges(func, &all_vars);

        // 3. Bucket by coalescence key, then greedy-coalesce inside each bucket.
        let clusters = coalesce_clusters(&all_vars, &live_ranges, &func.var_types);

        // 4. Assign deterministic v-names per cluster.
        let merged = assign_names(&all_vars, &clusters);

        tracing::debug!(
            func = %func.function.name,
            ssa_vars = all_vars.len(),
            clusters = clusters.len(),
            "variable_merge: coalesced ssa varnodes into clusters",
        );

        let changed = merged != func.merged_names;
        func.merged_names = merged;
        Ok(changed)
    }
}

/// Gather every SSA varnode appearing in the function — instruction inputs
/// and outputs from `var_map`, plus phi inputs and outputs.
fn collect_all_ssa_vars(func: &SsaFunction) -> BTreeSet<SsaVarnode> {
    let mut set: BTreeSet<SsaVarnode> = BTreeSet::new();
    for sv in func.var_map.values() {
        set.insert(*sv);
    }
    for phis in func.phi_map.values() {
        for phi in phis {
            set.insert(phi.output);
            for &(_pred, sv) in &phi.inputs {
                set.insert(sv);
            }
        }
    }
    set
}

/// Compute the set of program points where each SSA varnode is live.
///
/// A varnode is *live* at a point P if its current value is used along some
/// path from P without an intervening redefinition.  For SSA this is just the
/// span from the unique definition to the union of all uses (transitively
/// across CFG edges).
fn compute_live_ranges(
    func: &SsaFunction,
    all_vars: &BTreeSet<SsaVarnode>,
) -> BTreeMap<SsaVarnode, BTreeSet<ProgramPoint>> {
    let block_ids: Vec<BlockId> = func.function.blocks.keys().copied().collect();

    // Per-block use/def sets.
    let mut blocks: BTreeMap<BlockId, BlockLiveness> = BTreeMap::new();
    for &bid in &block_ids {
        blocks.insert(bid, BlockLiveness::default());
    }

    // ---- Step 1: build use/def sets per block ----------------------------
    for &bid in &block_ids {
        let block = &func.function.blocks[&bid];
        let liveness = blocks
            .get_mut(&bid)
            .expect("block liveness slot pre-inserted");

        // Phi outputs are defs at block entry.
        if let Some(phis) = func.phi_map.get(&bid) {
            for phi in phis {
                liveness.def_set.insert(phi.output);
            }
        }

        // Walk instructions: input that has not been defined in-block yet is
        // an upwards-exposed use; outputs become defs.
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            for input_idx in 0..insn.inputs.len() {
                if let Some(&sv) = func
                    .var_map
                    .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
                {
                    if !liveness.def_set.contains(&sv) {
                        liveness.use_set.insert(sv);
                    }
                }
            }
            if let Some(&sv) = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Output)) {
                liveness.def_set.insert(sv);
            }
        }
    }

    // Phi inputs flow backward across the predecessor edge — record them so
    // they appear in the predecessor's live-out without polluting live-in of
    // the successor.
    for (&succ, phis) in &func.phi_map {
        for phi in phis {
            for &(pred, sv) in &phi.inputs {
                if let Some(pred_live) = blocks.get_mut(&pred) {
                    pred_live.phi_use_out.insert(sv);
                }
                let _ = succ; // succ unused — phi inputs are not live-in here.
            }
        }
    }

    // ---- Step 2: iterate to fixpoint -------------------------------------
    // Successors come from the CFG so we follow real control-flow edges
    // (including loop back-edges) rather than dominance.
    let mut changed = true;
    let mut iters = 0usize;
    let max_iters = block_ids.len().saturating_mul(block_ids.len()).max(16);
    while changed && iters < max_iters {
        changed = false;
        iters += 1;

        // Reverse iteration helps converge faster in straight-line code, but
        // BTreeMap order is fine for correctness; we just need fixpoint.
        for &bid in block_ids.iter().rev() {
            // live_out = (∪ live_in[succ]) ∪ phi_use_out[bid]
            let mut new_out: BTreeSet<SsaVarnode> = BTreeSet::new();
            for (succ, _kind) in func.cfg.edges_from(bid) {
                if let Some(succ_live) = blocks.get(&succ) {
                    for sv in &succ_live.live_in {
                        new_out.insert(*sv);
                    }
                }
            }
            if let Some(self_live) = blocks.get(&bid) {
                for sv in &self_live.phi_use_out {
                    new_out.insert(*sv);
                }
            }

            // live_in = use ∪ (live_out − def)
            let liveness = blocks.get_mut(&bid).expect("block present");
            let mut new_in = liveness.use_set.clone();
            for sv in &new_out {
                if !liveness.def_set.contains(sv) {
                    new_in.insert(*sv);
                }
            }

            if new_in != liveness.live_in || new_out != liveness.live_out {
                liveness.live_in = new_in;
                liveness.live_out = new_out;
                changed = true;
            }
        }
    }

    // ---- Step 3: materialise per-varnode point sets via backward walk ----
    //
    // Walk each block right-to-left, maintaining `live_after` (the set of
    // varnodes live just AFTER the current instruction).  At instruction `i`
    // we mark every varnode in `live_after` as live at `i`, then apply the
    // instruction's effect:
    //
    //   * A used (input) varnode becomes live (it must reach this use).
    //   * A defined (output) varnode becomes dead above this point — its
    //     unique SSA definition is right here.
    //
    // The synthetic phi slot at block entry inherits whatever is left after
    // processing instruction 0; phi outputs are killed at that slot.
    let mut ranges: BTreeMap<SsaVarnode, BTreeSet<ProgramPoint>> = BTreeMap::new();
    for sv in all_vars {
        ranges.insert(*sv, BTreeSet::new());
    }

    for &bid in &block_ids {
        let block = &func.function.blocks[&bid];
        let liveness = &blocks[&bid];

        let mut live_after: BTreeSet<SsaVarnode> = liveness.live_out.clone();

        for (insn_idx, insn) in block.insns.iter().enumerate().rev() {
            for sv in &live_after {
                if let Some(set) = ranges.get_mut(sv) {
                    set.insert(ProgramPoint::at(bid, insn_idx));
                }
            }

            if let Some(&out_sv) = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Output)) {
                if let Some(set) = ranges.get_mut(&out_sv) {
                    set.insert(ProgramPoint::at(bid, insn_idx));
                }
                live_after.remove(&out_sv);
            }

            for input_idx in 0..insn.inputs.len() {
                if let Some(&sv) = func
                    .var_map
                    .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
                {
                    if let Some(set) = ranges.get_mut(&sv) {
                        set.insert(ProgramPoint::at(bid, insn_idx));
                    }
                    live_after.insert(sv);
                }
            }
        }

        if let Some(phis) = func.phi_map.get(&bid) {
            for phi in phis {
                if let Some(set) = ranges.get_mut(&phi.output) {
                    set.insert(ProgramPoint::phi(bid));
                }
                live_after.remove(&phi.output);
            }
        }

        for sv in &live_after {
            if let Some(set) = ranges.get_mut(sv) {
                set.insert(ProgramPoint::phi(bid));
            }
        }
    }

    // Phi inputs are live at the END of the predecessor block — mark them at
    // the last instruction (or the synthetic phi slot if empty).
    for phis in func.phi_map.values() {
        for phi in phis {
            for &(pred, sv) in &phi.inputs {
                let pred_block = match func.function.blocks.get(&pred) {
                    Some(b) => b,
                    None => continue,
                };
                let pp = if pred_block.insns.is_empty() {
                    ProgramPoint::phi(pred)
                } else {
                    ProgramPoint::at(pred, pred_block.insns.len() - 1)
                };
                if let Some(set) = ranges.get_mut(&sv) {
                    set.insert(pp);
                }
            }
        }
    }

    ranges
}

/// Decide a Unique-base's "merge key" — two distinct unique bases are
/// candidates for cross-base coalescing iff their merge keys are equal AND
/// their unioned live ranges do not interfere.
///
/// The size comes from the base [`Varnode`].  The type is the meet (join in
/// the lattice direction we care about) of every SSA version of this base —
/// if all versions agree on a concrete type we use it; if they disagree we
/// fall back to [`PrimitiveType::Unknown`] which only merges with itself.
fn merge_key_for_base(
    base: Varnode,
    members: &[SsaVarnode],
    var_types: &BTreeMap<SsaVarnode, PrimitiveType>,
) -> MergeKey {
    let mut ty = PrimitiveType::Unknown;
    for sv in members {
        let svt = var_types.get(sv).copied().unwrap_or(PrimitiveType::Unknown);
        ty = ty.join(svt);
    }
    MergeKey {
        size: base.size,
        ty,
    }
}

/// Two ranges interfere iff they share at least one program point.
fn ranges_interfere(a: &BTreeSet<ProgramPoint>, b: &BTreeSet<ProgramPoint>) -> bool {
    let (small, big) = if a.len() <= b.len() { (a, b) } else { (b, a) };
    small.iter().any(|p| big.contains(p))
}

/// Group SSA varnodes into clusters that share a source-level name.
///
/// Two-level algorithm:
///
/// 1. **Per-base super-cluster**: every SSA version of one base [`Varnode`]
///    is unconditionally in the same cluster, because they reference the
///    same physical storage.  This matches the prior "merge by base" pass
///    behaviour and is required for register/stack correctness.
///
/// 2. **Cross-base coalescing (Unique only)**: super-clusters of different
///    Unique bases that share a [`MergeKey`] (same size + same inferred
///    type) and whose unioned live ranges do not interfere are merged
///    together.  This is the new behaviour that picks up `tmp1 ↔ tmp2`
///    coalescing IDA performs.
///
/// Register, stack, and RAM bases skip step 2 — their bases name distinct
/// physical storage which the user must see as distinct variables.
fn coalesce_clusters(
    all_vars: &BTreeSet<SsaVarnode>,
    live_ranges: &BTreeMap<SsaVarnode, BTreeSet<ProgramPoint>>,
    var_types: &BTreeMap<SsaVarnode, PrimitiveType>,
) -> Vec<Vec<SsaVarnode>> {
    let mut by_base: BTreeMap<Varnode, Vec<SsaVarnode>> = BTreeMap::new();
    for sv in all_vars {
        by_base.entry(sv.base).or_default().push(*sv);
    }

    let mut clusters: Vec<Vec<SsaVarnode>> = Vec::new();

    let mut unique_clusters: Vec<(Vec<SsaVarnode>, BTreeSet<ProgramPoint>, MergeKey)> = Vec::new();

    for (base, members) in by_base {
        match base.space {
            SpaceId::Unique => {
                let mut union_range: BTreeSet<ProgramPoint> = BTreeSet::new();
                for sv in &members {
                    if let Some(r) = live_ranges.get(sv) {
                        for p in r {
                            union_range.insert(*p);
                        }
                    }
                }
                let mkey = merge_key_for_base(base, &members, var_types);

                let mut placed = false;
                for (cluster_members, cluster_range, cluster_mkey) in unique_clusters.iter_mut() {
                    if *cluster_mkey == mkey && !ranges_interfere(&union_range, cluster_range) {
                        cluster_members.extend(members.iter().copied());
                        for p in &union_range {
                            cluster_range.insert(*p);
                        }
                        placed = true;
                        break;
                    }
                }
                if !placed {
                    unique_clusters.push((members, union_range, mkey));
                }
            }
            _ => {
                clusters.push(members);
            }
        }
    }

    for (members, _range, _mkey) in unique_clusters {
        clusters.push(members);
    }

    clusters
}

/// Walk all SSA varnodes in canonical order; assign cluster names `v1..vN`
/// based on the cluster's first-appearance.
fn assign_names(
    all_vars: &BTreeSet<SsaVarnode>,
    clusters: &[Vec<SsaVarnode>],
) -> BTreeMap<SsaVarnode, String> {
    // Map varnode → cluster index.
    let mut cluster_of: BTreeMap<SsaVarnode, usize> = BTreeMap::new();
    for (i, members) in clusters.iter().enumerate() {
        for sv in members {
            cluster_of.insert(*sv, i);
        }
    }

    // First-appearance order over the canonical sorted varnode iteration.
    let mut order: BTreeMap<usize, u32> = BTreeMap::new();
    let mut next_index: u32 = 1;
    for sv in all_vars {
        if let Some(&cidx) = cluster_of.get(sv) {
            if let std::collections::btree_map::Entry::Vacant(e) = order.entry(cidx) {
                e.insert(next_index);
                next_index += 1;
            }
        }
    }

    // Materialise final names.
    let mut merged: BTreeMap<SsaVarnode, String> = BTreeMap::new();
    for sv in all_vars {
        if let Some(&cidx) = cluster_of.get(sv) {
            if let Some(&n) = order.get(&cidx) {
                merged.insert(*sv, format!("v{}", n));
            }
        }
    }
    merged
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::{PrimitiveType, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

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

    /// Helper: collect the canonical name assigned to a particular SsaVarnode
    /// looked up by `(base, version)`.
    fn name_of(ssa: &SsaFunction, base: Varnode, version: u32) -> Option<String> {
        ssa.merged_names
            .iter()
            .find(|(sv, _)| sv.base == base && sv.version == version)
            .map(|(_, n)| n.clone())
    }

    // ------------------------------------------------------------------
    // Existing-behaviour regression tests (kept from prior implementation).
    // ------------------------------------------------------------------

    #[test]
    fn test_var_merge_linear() {
        let r0 = Varnode::reg(0, 4);
        let c1 = Varnode::constant(1, 4);

        let insns = vec![
            IrInsn::with_output(IrOp::Copy, r0, smallvec![c1], 0x1000),
            IrInsn::with_output(IrOp::IntAdd, r0, smallvec![r0, c1], 0x1004),
            IrInsn::with_output(IrOp::IntAdd, r0, smallvec![r0, c1], 0x1008),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let pass = VariableMergePass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");
        assert!(changed, "should produce merged names");

        let r0_names: BTreeSet<&str> = ssa
            .merged_names
            .iter()
            .filter(|(sv, _)| sv.base == r0)
            .map(|(_, name)| name.as_str())
            .collect();
        assert_eq!(
            r0_names.len(),
            1,
            "all r0 SSA versions should share one name, got: {:?}",
            r0_names,
        );
    }

    #[test]
    fn test_var_merge_with_phi() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);

        let mut func = Function::new("diamond", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Cbranch, smallvec![], 0x2000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, c1],
            0x2010,
        ));
        bb1.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x2014));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, c2],
            0x2020,
        ));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x2024));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x2030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let mut ssa = build_ssa(func);
        let pass = VariableMergePass;
        pass.run(&mut ssa).expect("pass should succeed");

        let r0_names: BTreeSet<&str> = ssa
            .merged_names
            .iter()
            .filter(|(sv, _)| sv.base == r0)
            .map(|(_, name)| name.as_str())
            .collect();
        assert_eq!(
            r0_names.len(),
            1,
            "phi-merged r0 versions should share one name, got: {:?}",
            r0_names,
        );
    }

    #[test]
    fn test_var_merge_disjoint_bases() {
        // Two distinct architectural registers must NEVER share a name.
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let c1 = Varnode::constant(1, 4);

        let insns = vec![
            IrInsn::with_output(IrOp::Copy, r0, smallvec![c1], 0x1000),
            IrInsn::with_output(IrOp::Copy, r8, smallvec![c1], 0x1004),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let pass = VariableMergePass;
        pass.run(&mut ssa).expect("pass should succeed");

        let r0_name = name_of(&ssa, r0, 0);
        let r8_name = name_of(&ssa, r8, 0);

        assert!(r0_name.is_some(), "r0 should have a merged name");
        assert!(r8_name.is_some(), "r8 should have a merged name");
        assert_ne!(
            r0_name.unwrap(),
            r8_name.unwrap(),
            "different physical registers must keep distinct names",
        );
    }

    // ------------------------------------------------------------------
    // New interference-graph coalescence tests.
    // ------------------------------------------------------------------

    /// Two unique-space varnodes with disjoint live ranges and the same size
    /// MUST be coalesced into the same source-level name.
    #[test]
    fn test_coalesce_disjoint_ranges() {
        // u0 = c1
        // r0 = u0       (last use of u0 — u0 dies at insn 1)
        // u4 = c2       (u4 born at insn 2 — disjoint from u0's range)
        // r8 = u4
        let u0 = Varnode::unique(0, 4);
        let u4 = Varnode::unique(4, 4);
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let c1 = Varnode::constant(1, 4);
        let c2 = Varnode::constant(2, 4);

        let insns = vec![
            IrInsn::with_output(IrOp::Copy, u0, smallvec![c1], 0x1000),
            IrInsn::with_output(IrOp::Copy, r0, smallvec![u0], 0x1004),
            IrInsn::with_output(IrOp::Copy, u4, smallvec![c2], 0x1008),
            IrInsn::with_output(IrOp::Copy, r8, smallvec![u4], 0x100C),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let pass = VariableMergePass;
        pass.run(&mut ssa).expect("pass should succeed");

        let u0_name = name_of(&ssa, u0, 0).expect("u0 named");
        let u4_name = name_of(&ssa, u4, 0).expect("u4 named");

        assert_eq!(
            u0_name, u4_name,
            "disjoint unique-space varnodes of same size should coalesce: {} vs {}",
            u0_name, u4_name,
        );
    }

    /// Overlapping live ranges between two unique varnodes MUST keep them
    /// distinct: one is still live at the other's def.
    #[test]
    fn test_no_coalesce_overlapping() {
        // u0 = c1
        // u4 = c2          (both live)
        // r0 = u0 + u4     (both used here — interfere at insn 2)
        let u0 = Varnode::unique(0, 4);
        let u4 = Varnode::unique(4, 4);
        let r0 = Varnode::reg(0, 4);
        let c1 = Varnode::constant(1, 4);
        let c2 = Varnode::constant(2, 4);

        let insns = vec![
            IrInsn::with_output(IrOp::Copy, u0, smallvec![c1], 0x1000),
            IrInsn::with_output(IrOp::Copy, u4, smallvec![c2], 0x1004),
            IrInsn::with_output(IrOp::IntAdd, r0, smallvec![u0, u4], 0x1008),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let pass = VariableMergePass;
        pass.run(&mut ssa).expect("pass should succeed");

        let u0_name = name_of(&ssa, u0, 0).expect("u0 named");
        let u4_name = name_of(&ssa, u4, 0).expect("u4 named");
        assert_ne!(
            u0_name, u4_name,
            "overlapping unique varnodes must NOT coalesce: {} vs {}",
            u0_name, u4_name,
        );
    }

    /// Two unique varnodes of different byte-widths must never share a name,
    /// regardless of liveness — same-size is part of the coalescence key.
    #[test]
    fn test_no_coalesce_different_size() {
        // u0:i32 dies, then u4:i64 born — disjoint ranges but different widths.
        let u0 = Varnode::unique(0, 4); // i32
        let u4 = Varnode::unique(4, 8); // i64
        let r0_32 = Varnode::reg(0, 4);
        let r8_64 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 4);
        let c2 = Varnode::constant(2, 8);

        let insns = vec![
            IrInsn::with_output(IrOp::Copy, u0, smallvec![c1], 0x1000),
            IrInsn::with_output(IrOp::Copy, r0_32, smallvec![u0], 0x1004),
            IrInsn::with_output(IrOp::Copy, u4, smallvec![c2], 0x1008),
            IrInsn::with_output(IrOp::Copy, r8_64, smallvec![u4], 0x100C),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let pass = VariableMergePass;
        pass.run(&mut ssa).expect("pass should succeed");

        let u0_name = name_of(&ssa, u0, 0).expect("u0 named");
        let u4_name = name_of(&ssa, u4, 0).expect("u4 named");
        assert_ne!(
            u0_name, u4_name,
            "different-width uniques must keep distinct names: {} vs {}",
            u0_name, u4_name,
        );
    }

    /// Two physical registers must always stay distinct regardless of live
    /// ranges — they represent different storage at the machine level.
    #[test]
    fn test_no_coalesce_register() {
        // r0 = c1     (rax_v1)
        // r0 dies (never used after first def — but irrelevant for register coalescing)
        // r8 = c2     (rcx_v2)
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let r16 = Varnode::reg(16, 4);
        let c1 = Varnode::constant(1, 4);
        let c2 = Varnode::constant(2, 4);

        let insns = vec![
            IrInsn::with_output(IrOp::Copy, r0, smallvec![c1], 0x1000),
            IrInsn::with_output(IrOp::Copy, r16, smallvec![r0], 0x1004), // r0 last use
            IrInsn::with_output(IrOp::Copy, r8, smallvec![c2], 0x1008),  // r8 born after r0 dies
            IrInsn::with_output(IrOp::Copy, r16, smallvec![r8], 0x100C),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let pass = VariableMergePass;
        pass.run(&mut ssa).expect("pass should succeed");

        let r0_name = name_of(&ssa, r0, 0).expect("r0 named");
        let r8_name = name_of(&ssa, r8, 0).expect("r8 named");
        assert_ne!(
            r0_name, r8_name,
            "different physical registers must never coalesce \
             even with disjoint live ranges: {} vs {}",
            r0_name, r8_name,
        );
    }

    /// Three unique varnodes in a chain, each dying before the next is born:
    /// all three should coalesce to a single name.
    #[test]
    fn test_chain_coalesce() {
        let u0 = Varnode::unique(0, 4);
        let u4 = Varnode::unique(4, 4);
        let u8 = Varnode::unique(8, 4);
        let r0 = Varnode::reg(0, 4);
        let c1 = Varnode::constant(1, 4);
        let c2 = Varnode::constant(2, 4);
        let c3 = Varnode::constant(3, 4);

        let insns = vec![
            IrInsn::with_output(IrOp::Copy, u0, smallvec![c1], 0x1000),
            IrInsn::with_output(IrOp::Copy, r0, smallvec![u0], 0x1004), // u0 dies
            IrInsn::with_output(IrOp::Copy, u4, smallvec![c2], 0x1008), // u4 born
            IrInsn::with_output(IrOp::Copy, r0, smallvec![u4], 0x100C), // u4 dies
            IrInsn::with_output(IrOp::Copy, u8, smallvec![c3], 0x1010), // u8 born
            IrInsn::with_output(IrOp::Copy, r0, smallvec![u8], 0x1014), // u8 dies
        ];

        let mut ssa = make_single_block_ssa(insns);
        let pass = VariableMergePass;
        pass.run(&mut ssa).expect("pass should succeed");

        let u0_name = name_of(&ssa, u0, 0).expect("u0 named");
        let u4_name = name_of(&ssa, u4, 0).expect("u4 named");
        let u8_name = name_of(&ssa, u8, 0).expect("u8 named");

        assert_eq!(u0_name, u4_name, "u0 and u4 disjoint → same name");
        assert_eq!(u4_name, u8_name, "u4 and u8 disjoint → same name");
        // (Transitively, u0 == u8 too.)
    }

    /// Type information, when present, partitions the coalescence key:
    /// an i32 unique should not coalesce with a Float unique even if same
    /// size and disjoint ranges.
    #[test]
    fn test_no_coalesce_different_inferred_type() {
        let u0 = Varnode::unique(0, 4);
        let u4 = Varnode::unique(4, 4);
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let c1 = Varnode::constant(1, 4);
        let c2 = Varnode::constant(2, 4);

        let insns = vec![
            IrInsn::with_output(IrOp::Copy, u0, smallvec![c1], 0x1000),
            IrInsn::with_output(IrOp::Copy, r0, smallvec![u0], 0x1004),
            IrInsn::with_output(IrOp::Copy, u4, smallvec![c2], 0x1008),
            IrInsn::with_output(IrOp::Copy, r8, smallvec![u4], 0x100C),
        ];

        let mut ssa = make_single_block_ssa(insns);

        // Manually annotate types so the pass sees Int(4) vs Float and keeps
        // them in different coalescence buckets even though both are 4-byte
        // uniques with disjoint live ranges.
        let u0_sv = ssa
            .var_map
            .iter()
            .find(|(_, sv)| sv.base == u0)
            .map(|(_, sv)| *sv)
            .expect("u0 ssa varnode");
        let u4_sv = ssa
            .var_map
            .iter()
            .find(|(_, sv)| sv.base == u4)
            .map(|(_, sv)| *sv)
            .expect("u4 ssa varnode");
        ssa.var_types.insert(u0_sv, PrimitiveType::Int(4));
        ssa.var_types.insert(u4_sv, PrimitiveType::Float);

        let pass = VariableMergePass;
        pass.run(&mut ssa).expect("pass should succeed");

        let u0_name = name_of(&ssa, u0, 0).expect("u0 named");
        let u4_name = name_of(&ssa, u4, 0).expect("u4 named");
        assert_ne!(
            u0_name, u4_name,
            "different inferred types must keep distinct names: {} vs {}",
            u0_name, u4_name,
        );
    }

    /// A unique varnode that survives across a use-and-redefine sequence
    /// (overlapping with itself's later use) is trivially in one cluster
    /// — sanity-check the live-range path through an instruction.
    #[test]
    fn test_self_live_range_single_cluster() {
        let u0 = Varnode::unique(0, 4);
        let r0 = Varnode::reg(0, 4);
        let c1 = Varnode::constant(1, 4);

        let insns = vec![
            IrInsn::with_output(IrOp::Copy, u0, smallvec![c1], 0x1000),
            IrInsn::with_output(IrOp::Copy, r0, smallvec![u0], 0x1004),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let pass = VariableMergePass;
        pass.run(&mut ssa).expect("pass should succeed");

        // u0 produces exactly one cluster — pass should always assign a name.
        assert!(name_of(&ssa, u0, 0).is_some(), "u0 must receive a name");
    }
}
