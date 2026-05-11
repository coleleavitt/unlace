//! Chaitin-Briggs PHI-operand coalescing.
//!
//! Builds an interference graph over SSA varnodes and coalesces each PHI
//! result with its operands when the Briggs safety test is satisfied
//! (i.e. the merged node has fewer than `K` neighbours of significant
//! degree, where `K = NUM_COLOURS`). Coalesced groups are recorded in
//! [`SsaFunction::merged_names`] so downstream printing emits one C
//! variable per cluster.
//!
//! The coalescer is conservative:
//! - Two SSA varnodes with different base [`unlace_ir::Varnode`]s in
//!   register space NEVER coalesce (rax must not become rbx).
//! - A live-range overlap (interference edge) blocks coalescing
//!   unconditionally.
//! - The Briggs degree test only looks at neighbours with degree ≥ K to
//!   decide whether the merge would force a spill.
//!
//! This pass produces no IR changes; it only fills `merged_names`. Run it
//! after all SSA-modifying passes.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, SpaceId};

use crate::pass::{Pass, PassError};

const NUM_COLOURS: usize = 16;

pub struct RegisterCoalescePass;

impl Pass for RegisterCoalescePass {
    fn name(&self) -> &str {
        "register-coalesce"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let all_vars = collect_all_ssa_vars(func);
        if all_vars.is_empty() {
            return Ok(false);
        }

        let live = compute_live_ranges(func, &all_vars);
        let interference = build_interference(&live);

        let mut uf = UnionFind::new(&all_vars);

        // For each PHI operand pair (result, input), try Briggs-coalesce.
        for phis in func.phi_map.values() {
            for phi in phis {
                let res = phi.output;
                for (_pred, input) in &phi.inputs {
                    try_coalesce_briggs(&mut uf, &interference, res, *input);
                }
            }
        }

        emit_merged_names(func, &uf, &all_vars)
    }
}

fn try_coalesce_briggs(
    uf: &mut UnionFind,
    interference: &BTreeMap<SsaVarnode, BTreeSet<SsaVarnode>>,
    a: SsaVarnode,
    b: SsaVarnode,
) -> bool {
    if a == b {
        return false;
    }
    if !same_base_class(a, b) {
        return false;
    }
    let ra = uf.find(a);
    let rb = uf.find(b);
    if ra == rb {
        return false;
    }

    let neigh_a = interference.get(&ra).cloned().unwrap_or_default();
    let neigh_b = interference.get(&rb).cloned().unwrap_or_default();
    if neigh_a.contains(&rb) || neigh_b.contains(&ra) {
        return false;
    }

    let merged_neighbours: BTreeSet<&SsaVarnode> = neigh_a.iter().chain(neigh_b.iter()).collect();
    let high_degree = merged_neighbours
        .iter()
        .filter(|n| {
            interference
                .get(n)
                .map(|s| s.len())
                .unwrap_or(0)
                >= NUM_COLOURS
        })
        .count();
    if high_degree >= NUM_COLOURS {
        return false;
    }

    uf.union(ra, rb);
    true
}

/// Coalescing across distinct architectural registers is forbidden — rax
/// and rbx live in different physical slots. SSA versions of the same
/// base always share a class (different versions of one register).
fn same_base_class(a: SsaVarnode, b: SsaVarnode) -> bool {
    if a.base == b.base {
        return true;
    }
    if a.base.space == SpaceId::Register || b.base.space == SpaceId::Register {
        return false;
    }
    a.base.size == b.base.size
}

fn collect_all_ssa_vars(func: &SsaFunction) -> BTreeSet<SsaVarnode> {
    let mut out = BTreeSet::new();
    for (_, sv) in &func.var_map {
        out.insert(*sv);
    }
    for phis in func.phi_map.values() {
        for phi in phis {
            out.insert(phi.output);
            for (_pred, input) in &phi.inputs {
                out.insert(*input);
            }
        }
    }
    out
}

#[derive(Default)]
struct LiveSets {
    /// For each block, the set of varnodes live at any point of the block.
    block_live: BTreeMap<BlockId, BTreeSet<SsaVarnode>>,
    /// Per-program-point live set (used to build interference precisely
    /// across one block).
    point_live: BTreeMap<(BlockId, usize), BTreeSet<SsaVarnode>>,
}

fn compute_live_ranges(func: &SsaFunction, _all_vars: &BTreeSet<SsaVarnode>) -> LiveSets {
    let mut sets = LiveSets::default();
    for (&bid, block) in &func.function.blocks {
        let mut live: BTreeSet<SsaVarnode> = BTreeSet::new();
        if let Some(phis) = func.phi_map.get(&bid) {
            for phi in phis {
                live.insert(phi.output);
            }
        }
        for (idx, insn) in block.insns.iter().enumerate() {
            for i in 0..insn.inputs.len() {
                if let Some(&sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Input(i))) {
                    live.insert(sv);
                }
            }
            if let Some(&sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Output)) {
                live.insert(sv);
            }
            sets.point_live.insert((bid, idx), live.clone());
        }
        sets.block_live.insert(bid, live);
    }
    sets
}

fn build_interference(live: &LiveSets) -> BTreeMap<SsaVarnode, BTreeSet<SsaVarnode>> {
    let mut g: BTreeMap<SsaVarnode, BTreeSet<SsaVarnode>> = BTreeMap::new();
    for set in live.point_live.values() {
        let vec: Vec<SsaVarnode> = set.iter().copied().collect();
        for (i, &a) in vec.iter().enumerate() {
            for &b in &vec[i + 1..] {
                if a == b {
                    continue;
                }
                if a.base == b.base && a.version == b.version {
                    continue;
                }
                g.entry(a).or_default().insert(b);
                g.entry(b).or_default().insert(a);
            }
        }
    }
    g
}

struct UnionFind {
    parent: BTreeMap<SsaVarnode, SsaVarnode>,
}

impl UnionFind {
    fn new(vs: &BTreeSet<SsaVarnode>) -> Self {
        let mut parent = BTreeMap::new();
        for &v in vs {
            parent.insert(v, v);
        }
        Self { parent }
    }
    fn find(&mut self, v: SsaVarnode) -> SsaVarnode {
        let p = self.parent.get(&v).copied().unwrap_or(v);
        if p == v {
            return v;
        }
        let r = self.find(p);
        self.parent.insert(v, r);
        r
    }
    fn union(&mut self, a: SsaVarnode, b: SsaVarnode) {
        let ra = self.find(a);
        let rb = self.find(b);
        if ra != rb {
            self.parent.insert(ra, rb);
        }
    }
}

fn emit_merged_names(
    func: &mut SsaFunction,
    uf: &UnionFind,
    all_vars: &BTreeSet<SsaVarnode>,
) -> Result<bool, PassError> {
    let mut groups: BTreeMap<SsaVarnode, Vec<SsaVarnode>> = BTreeMap::new();
    let mut uf = clone_uf(uf);
    for &v in all_vars {
        let r = uf.find(v);
        groups.entry(r).or_default().push(v);
    }
    let multi_groups: Vec<&Vec<SsaVarnode>> = groups
        .values()
        .filter(|g| g.len() > 1)
        .collect();
    if multi_groups.is_empty() {
        return Ok(false);
    }
    let mut name_idx = 0usize;
    let mut new_names: BTreeMap<SsaVarnode, String> = BTreeMap::new();
    for group in groups.values() {
        if group.len() <= 1 {
            continue;
        }
        let name = format!("c{}", name_idx);
        name_idx += 1;
        for &v in group {
            new_names.insert(v, name.clone());
        }
    }
    let changed = new_names != func.merged_names || !func.merged_names.is_empty();
    func.merged_names.extend(new_names);
    Ok(changed)
}

fn clone_uf(uf: &UnionFind) -> UnionFind {
    UnionFind {
        parent: uf.parent.clone(),
    }
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;

    use unlace_ir::ssa::{
        CallingConvention, DominatorTree, PhiNode, PrimitiveType, SsaFunction, SsaVarnode,
        VarnodeSlot,
    };
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_ssa(
        blocks: Vec<BasicBlock>,
        var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>,
        phi_map: BTreeMap<BlockId, Vec<PhiNode>>,
    ) -> SsaFunction {
        let entry = blocks.first().expect("blocks").id;
        let mut func = Function::new("test", entry, 0x1000);
        for bb in blocks {
            func.insert_block(bb);
        }
        let cfg = unlace_ir::cfg::build_cfg(&func);
        let dom_tree = trivial_dom(&cfg);
        SsaFunction {
            function: func,
            cfg,
            dom_tree,
            post_dom_tree: None,
            phi_map,
            var_map,
            var_types: BTreeMap::new(),
            calling_convention: CallingConvention::Unknown,
            stack_vars: BTreeMap::new(),
            stack_offset_hints: BTreeMap::new(),
            foldable_exprs: BTreeSet::new(),
            noreturn: false,
            tail_call_map: BTreeMap::new(),
            merged_names: BTreeMap::new(),
            enum_discriminants: Vec::new(),
            panic_sites: BTreeMap::new(),
            vtable_calls: BTreeMap::new(),
            cpp_vtable_calls: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            inferred_params: Vec::new(),
            inferred_return_type: PrimitiveType::Unknown,
            frame_setup_insns: BTreeSet::new(),
            dwarf_local_names: BTreeMap::new(),
            inferred_structs: BTreeMap::new(),
            composite_var_types: BTreeMap::new(),
            array_strides: BTreeMap::new(),
            external_signatures: BTreeMap::new(),
            eh_landing_pads: BTreeSet::new(),
            stack_gaps: BTreeMap::new(),
            frame_size: 0,
            sp_delta_at: BTreeMap::new(),
            stack_holes: BTreeMap::new(),
            dynamic_sp: false,
            sizeof_type_map: BTreeMap::new(),
            alignof_type_map: BTreeMap::new(),
            resolved_indirect_calls: BTreeMap::new(),
            variadic_call_types: BTreeMap::new(),
            signature_revision: 0,
            op_bindings: unlace_ir::ssa::OpTypeBindings::default(),
            byref_boxes: std::collections::BTreeMap::new(),
            stack_frame: None,
            byref_info: None,
            libc_call_annotations: std::collections::BTreeMap::new(),
            array_struct_layouts: std::collections::BTreeMap::new(),
            var_role_names: std::collections::BTreeMap::new(),
            finalized_signature: None,
            crypto_annotations: Vec::new(),
        }
    }

    fn trivial_dom(cfg: &unlace_ir::cfg::ControlFlowGraph) -> DominatorTree {
        use petgraph::algo::dominators::simple_fast;
        let entry_ni = cfg.node_index(cfg.entry_block()).expect("entry");
        let dominators = simple_fast(cfg.inner(), entry_ni);
        let mut idom = BTreeMap::new();
        let mut children: BTreeMap<BlockId, Vec<BlockId>> = BTreeMap::new();
        let entry = cfg.entry_block();
        for (&bid, &ni) in cfg.node_map() {
            if bid == entry {
                continue;
            }
            if let Some(dom_ni) = dominators.immediate_dominator(ni) {
                let dom_bid = cfg.inner()[dom_ni];
                idom.insert(bid, dom_bid);
                children.entry(dom_bid).or_default().push(bid);
            }
        }
        DominatorTree::new(idom, children, entry)
    }

    /// PHI result and its operands should all share a name (no
    /// interference — the operands flow into the result).
    #[test]
    fn test_phi_result_coalesces_with_operands() {
        // B0: branch -> B1 / B2
        // B1: v_unique_a = COPY c1; branch B3
        // B2: v_unique_b = COPY c2; branch B3
        // B3: phi(v_unique_a, v_unique_b) -> v_phi; return v_phi
        let ua = SsaVarnode {
            base: Varnode::unique(0, 8),
            version: 0,
        };
        let ub = SsaVarnode {
            base: Varnode::unique(8, 8),
            version: 0,
        };
        let uphi = SsaVarnode {
            base: Varnode::unique(16, 8),
            version: 0,
        };
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);

        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns
            .push(IrInsn::without_output(IrOp::Cbranch, smallvec![c1, c1], 0x1000));
        b0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns
            .push(IrInsn::with_output(IrOp::Copy, ua.base, smallvec![c1], 0x1010));
        b1.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1014));
        b1.successors = smallvec![BlockId(3)];

        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns
            .push(IrInsn::with_output(IrOp::Copy, ub.base, smallvec![c2], 0x1020));
        b2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1024));
        b2.successors = smallvec![BlockId(3)];

        let mut b3 = BasicBlock::new(BlockId(3));
        b3.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![uphi.base],
            0x1030,
        ));

        let mut var_map = BTreeMap::new();
        var_map.insert((BlockId(1), 0, VarnodeSlot::Output), ua);
        var_map.insert((BlockId(2), 0, VarnodeSlot::Output), ub);
        var_map.insert((BlockId(3), 0, VarnodeSlot::Input(0)), uphi);

        let phi = PhiNode {
            output: uphi,
            inputs: vec![(BlockId(1), ua), (BlockId(2), ub)],
        };
        let mut phi_map = BTreeMap::new();
        phi_map.insert(BlockId(3), vec![phi]);

        let mut ssa = make_ssa(vec![b0, b1, b2, b3], var_map, phi_map);
        let changed = RegisterCoalescePass.run(&mut ssa).expect("ok");
        assert!(changed);
        let names: BTreeSet<&String> = ssa.merged_names.values().collect();
        assert_eq!(names.len(), 1, "all three SSA vars should share a name");
        let n_ua = ssa.merged_names.get(&ua);
        let n_ub = ssa.merged_names.get(&ub);
        let n_phi = ssa.merged_names.get(&uphi);
        assert!(n_ua.is_some() && n_ua == n_ub && n_ub == n_phi);
    }

    /// Two distinct architectural registers must NOT be coalesced even
    /// when their live ranges happen not to overlap.
    #[test]
    fn test_distinct_registers_never_coalesced() {
        let rax = SsaVarnode {
            base: Varnode::reg(0, 8),
            version: 0,
        };
        let rbx = SsaVarnode {
            base: Varnode::reg(8, 8),
            version: 0,
        };
        let phi_out = SsaVarnode {
            base: Varnode::reg(16, 8),
            version: 0,
        };
        let c1 = Varnode::constant(1, 8);

        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns
            .push(IrInsn::without_output(IrOp::Cbranch, smallvec![c1, c1], 0x1000));
        b0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns
            .push(IrInsn::with_output(IrOp::Copy, rax.base, smallvec![c1], 0x1010));
        b1.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1014));
        b1.successors = smallvec![BlockId(3)];

        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns
            .push(IrInsn::with_output(IrOp::Copy, rbx.base, smallvec![c1], 0x1020));
        b2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1024));
        b2.successors = smallvec![BlockId(3)];

        let mut b3 = BasicBlock::new(BlockId(3));
        b3.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![phi_out.base],
            0x1030,
        ));

        let mut var_map = BTreeMap::new();
        var_map.insert((BlockId(1), 0, VarnodeSlot::Output), rax);
        var_map.insert((BlockId(2), 0, VarnodeSlot::Output), rbx);
        var_map.insert((BlockId(3), 0, VarnodeSlot::Input(0)), phi_out);

        let phi = PhiNode {
            output: phi_out,
            inputs: vec![(BlockId(1), rax), (BlockId(2), rbx)],
        };
        let mut phi_map = BTreeMap::new();
        phi_map.insert(BlockId(3), vec![phi]);

        let mut ssa = make_ssa(vec![b0, b1, b2, b3], var_map, phi_map);
        let _ = RegisterCoalescePass.run(&mut ssa).expect("ok");
        // rax and rbx must never share a name.
        let n_rax = ssa.merged_names.get(&rax);
        let n_rbx = ssa.merged_names.get(&rbx);
        if let (Some(a), Some(b)) = (n_rax, n_rbx) {
            assert_ne!(a, b, "rax and rbx must remain in different colour classes");
        }
    }
}
