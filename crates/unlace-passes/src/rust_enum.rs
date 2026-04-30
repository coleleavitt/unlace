//! Rust enum discriminant detection pass.
//!
//! Detects tagged union patterns in the IR: a `LOAD` from offset 0 of a
//! pointer followed by two or more `INT_EQUAL` comparisons against distinct
//! constants.  These patterns correspond to Rust `match` statements on enum
//! discriminants where the tag occupies the first field of the enum layout.

use std::collections::BTreeMap;

use unlace_ir::ssa::{EnumDiscriminant, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId};

use crate::pass::{Pass, PassError};

/// Detect Rust enum discriminant load-compare patterns and record them
/// in [`SsaFunction::enum_discriminants`].
pub struct RustEnumPass;

impl Pass for RustEnumPass {
    fn name(&self) -> &str {
        "rust-enum"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let loads = find_discriminant_loads(func);
        if loads.is_empty() {
            return Ok(false);
        }

        let comparisons = find_comparisons(func);
        if comparisons.is_empty() {
            return Ok(false);
        }

        let mut new_discriminants = Vec::new();

        for (load_sv, load_loc) in &loads {
        let mut variants: BTreeMap<u64, String> = BTreeMap::new();
            let mut comparison_locs: Vec<(BlockId, usize)> = Vec::new();

            if let Some(cmp_set) = comparisons.get(load_sv) {
                for &(constant, bid, insn_idx) in cmp_set {
                    variants
                        .entry(constant)
                        .or_insert_with(|| format!("Variant_{constant}"));
                    comparison_locs.push((bid, insn_idx));
                }
            }

            if variants.len() < 2 {
                continue;
            }

            comparison_locs.sort();

            new_discriminants.push(EnumDiscriminant {
                load_sv: *load_sv,
                load_loc: *load_loc,
                variants,
                comparison_locs,
            });
        }

        if new_discriminants.is_empty() {
            return Ok(false);
        }

        new_discriminants.sort_by(|a, b| a.load_loc.cmp(&b.load_loc));

        let had_none = func.enum_discriminants.is_empty();
        func.enum_discriminants = new_discriminants;

        Ok(had_none || !func.enum_discriminants.is_empty())
    }
}

/// Find all LOAD instructions that read from offset 0 of a pointer with
/// size 1, 2, 4, or 8.  Returns `(ssa_varnode_of_output, (block, insn_idx))`.
fn find_discriminant_loads(
    func: &SsaFunction,
) -> Vec<(SsaVarnode, (BlockId, usize))> {
    let mut loads = Vec::new();

    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Load {
                continue;
            }

            let _output = match insn.output {
                Some(o) if matches!(o.size, 1 | 2 | 4 | 8) => o,
                _ => continue,
            };

            // inputs: [0] = space, [1] = address
            if insn.inputs.len() < 2 {
                continue;
            }

            let addr_vn = insn.inputs[1];
            if !is_offset_zero(func, bid, insn_idx, &addr_vn) {
                continue;
            }

            let key = (bid, insn_idx, VarnodeSlot::Output);
            if let Some(&sv) = func.var_map.get(&key) {
                loads.push((sv, (bid, insn_idx)));
            }
        }
    }

    loads
}

/// Returns true if the address varnode represents offset 0:
/// - A register/unique varnode directly (no add/ptradd offset).
/// - `INT_ADD(base, 0)` or `INT_ADD(0, base)`.
/// - `PTRADD(base, 0, ...)`.
fn is_offset_zero(
    func: &SsaFunction,
    bid: BlockId,
    load_insn_idx: usize,
    addr_vn: &unlace_ir::Varnode,
) -> bool {
    // Walk backwards to find the defining instruction of the address varnode.
    // If defined by INT_ADD or PTRADD, check whether the offset is zero.
    let block = &func.function.blocks[&bid];
    for def_idx in (0..load_insn_idx).rev() {
        let def_insn = &block.insns[def_idx];
        if def_insn.output != Some(*addr_vn) {
            continue;
        }

        return match def_insn.op {
            IrOp::IntAdd if def_insn.inputs.len() == 2 => {
                let a = def_insn.inputs[0];
                let b = def_insn.inputs[1];
                (b.space == SpaceId::Const && b.offset == 0)
                    || (a.space == SpaceId::Const && a.offset == 0)
            }
            IrOp::Ptradd if def_insn.inputs.len() >= 2 => {
                let idx = def_insn.inputs[1];
                idx.space == SpaceId::Const && idx.offset == 0
            }
            IrOp::Copy => true,
            _ => false,
        };
    }

    // No defining instruction found in this block — the address is a bare
    // register, unique, or stack varnode used directly as base pointer.
    matches!(
        addr_vn.space,
        SpaceId::Register | SpaceId::Unique | SpaceId::Stack
    )
}

/// Scan all INT_EQUAL instructions.  For each, resolve both SSA inputs;
/// if exactly one is a constant and the other is an SSA varnode, record
/// `(ssa_varnode, constant, block, insn_idx)`.
fn find_comparisons(
    func: &SsaFunction,
) -> BTreeMap<SsaVarnode, Vec<(u64, BlockId, usize)>> {
    let mut result: BTreeMap<SsaVarnode, Vec<(u64, BlockId, usize)>> = BTreeMap::new();

    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::IntEqual {
                continue;
            }

            if insn.inputs.len() != 2 {
                continue;
            }

            let sv0 = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Input(0)));
            let sv1 = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Input(1)));

            let a = insn.inputs[0];
            let b = insn.inputs[1];

            if a.space != SpaceId::Const && b.space == SpaceId::Const {
                if let Some(&sv) = sv0 {
                    result
                        .entry(sv)
                        .or_default()
                        .push((b.offset, bid, insn_idx));
                }
            }
            else if a.space == SpaceId::Const && b.space != SpaceId::Const {
                if let Some(&sv) = sv1 {
                    result
                        .entry(sv)
                        .or_default()
                        .push((a.offset, bid, insn_idx));
                }
            }
        }
    }

    result
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;

    use unlace_ir::ssa::{
        PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot,
    };
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    use super::*;
    use crate::pass::Pass;

    // ── Helpers ─────────────────────────────────────────────────────

    fn build_trivial_dom(
        cfg: &unlace_ir::cfg::ControlFlowGraph,
    ) -> unlace_ir::ssa::DominatorTree {
        use petgraph::algo::dominators::simple_fast;

        let entry_ni = cfg
            .node_index(cfg.entry_block())
            .expect("entry block in cfg");
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

        for cl in children.values_mut() {
            cl.sort();
        }

        unlace_ir::ssa::DominatorTree::new(idom, children, entry)
    }

    fn make_ssa(
        blocks: Vec<BasicBlock>,
        var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>,
    ) -> SsaFunction {
        let entry = blocks.first().expect("blocks non-empty").id;
        let mut func = Function::new("test", entry, 0x1000);
        for bb in blocks {
            func.insert_block(bb);
        }

        let cfg = unlace_ir::cfg::build_cfg(&func);
        let dom_tree = build_trivial_dom(&cfg);

        SsaFunction {
            function: func,
            cfg,
            dom_tree,
            phi_map: BTreeMap::new(),
            var_map,
            var_types: BTreeMap::new(),
            calling_convention: unlace_ir::ssa::CallingConvention::Unknown,
            stack_vars: BTreeMap::new(),
            foldable_exprs: BTreeSet::new(),
            noreturn: false,
            tail_call_map: BTreeMap::new(),
            merged_names: BTreeMap::new(),
            enum_discriminants: Vec::new(),
            panic_sites: BTreeMap::new(),
            vtable_calls: BTreeMap::new(),
            inferred_params: Vec::new(),
            inferred_return_type: PrimitiveType::Unknown,
            frame_setup_insns: BTreeSet::new(),
        }
    }

    fn build_enum_pattern(
        constants: &[u64],
        load_size: u8,
    ) -> (Vec<BasicBlock>, BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>) {
        let bid = BlockId(0);
        let mut bb = BasicBlock::new(bid);
        let mut var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode> =
            BTreeMap::new();

        let ptr_reg = Varnode::reg(0, 8);
        let ptr_sv = SsaVarnode {
            base: ptr_reg,
            version: 0,
        };

        let load_out = Varnode::unique(0, load_size);
        let load_sv = SsaVarnode {
            base: load_out,
            version: 0,
        };
        let space_vn = Varnode::constant(SpaceId::Ram as u64, 8);

        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            load_out,
            smallvec![space_vn, ptr_reg],
            0x1000,
        ));
        var_map.insert((bid, 0, VarnodeSlot::Output), load_sv);
        var_map.insert((bid, 0, VarnodeSlot::Input(1)), ptr_sv);

        for (i, &c) in constants.iter().enumerate() {
            let insn_idx = i + 1;
            let cmp_out = Varnode::unique((insn_idx as u64 + 1) * 8, 1);
            let cmp_sv = SsaVarnode {
                base: cmp_out,
                version: 0,
            };

            bb.insns.push(IrInsn::with_output(
                IrOp::IntEqual,
                cmp_out,
                smallvec![load_out, Varnode::constant(c, load_size)],
                0x1000 + (insn_idx as u64) * 4,
            ));
            var_map.insert((bid, insn_idx, VarnodeSlot::Output), cmp_sv);
            var_map.insert((bid, insn_idx, VarnodeSlot::Input(0)), load_sv);
        }

        let ret_idx = constants.len() + 1;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x2000,
        ));
        let _ = ret_idx;

        (vec![bb], var_map)
    }

    // ── Tests ───────────────────────────────────────────────────────

    #[test]
    fn test_simple_enum_2_variants() {
        let (blocks, var_map) = build_enum_pattern(&[0, 1], 4);
        let mut ssa = make_ssa(blocks, var_map);

        let pass = RustEnumPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(changed, "should detect enum discriminant");
        assert_eq!(ssa.enum_discriminants.len(), 1);

        let disc = &ssa.enum_discriminants[0];
        assert_eq!(disc.variants.len(), 2);
        assert_eq!(disc.comparison_locs.len(), 2);
        assert_eq!(disc.load_loc, (BlockId(0), 0));
    }

    #[test]
    fn test_enum_3_variants() {
        let (blocks, var_map) = build_enum_pattern(&[0, 1, 2], 4);
        let mut ssa = make_ssa(blocks, var_map);

        let pass = RustEnumPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(changed);
        assert_eq!(ssa.enum_discriminants.len(), 1);

        let disc = &ssa.enum_discriminants[0];
        assert_eq!(disc.variants.len(), 3);
        assert!(disc.variants.contains_key(&0));
        assert!(disc.variants.contains_key(&1));
        assert!(disc.variants.contains_key(&2));
        assert_eq!(disc.comparison_locs.len(), 3);
    }

    #[test]
    fn test_no_enum_single_compare() {
        let (blocks, var_map) = build_enum_pattern(&[42], 4);
        let mut ssa = make_ssa(blocks, var_map);

        let pass = RustEnumPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(!changed, "single comparison should not flag as enum");
        assert!(ssa.enum_discriminants.is_empty());
    }

    #[test]
    fn test_no_enum_different_loads() {
        let bid = BlockId(0);
        let mut bb = BasicBlock::new(bid);
        let mut var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode> =
            BTreeMap::new();

        let ptr1 = Varnode::reg(0, 8);
        let ptr1_sv = SsaVarnode { base: ptr1, version: 0 };
        let ptr2 = Varnode::reg(8, 8);
        let ptr2_sv = SsaVarnode { base: ptr2, version: 0 };

        let space_vn = Varnode::constant(SpaceId::Ram as u64, 8);

        let load1_out = Varnode::unique(0, 4);
        let load1_sv = SsaVarnode { base: load1_out, version: 0 };
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            load1_out,
            smallvec![space_vn, ptr1],
            0x1000,
        ));
        var_map.insert((bid, 0, VarnodeSlot::Output), load1_sv);
        var_map.insert((bid, 0, VarnodeSlot::Input(1)), ptr1_sv);

        let load2_out = Varnode::unique(8, 4);
        let load2_sv = SsaVarnode { base: load2_out, version: 0 };
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            load2_out,
            smallvec![space_vn, ptr2],
            0x1004,
        ));
        var_map.insert((bid, 1, VarnodeSlot::Output), load2_sv);
        var_map.insert((bid, 1, VarnodeSlot::Input(1)), ptr2_sv);

        let cmp1_out = Varnode::unique(16, 1);
        let cmp1_sv = SsaVarnode { base: cmp1_out, version: 0 };
        bb.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            cmp1_out,
            smallvec![load1_out, Varnode::constant(0, 4)],
            0x1008,
        ));
        var_map.insert((bid, 2, VarnodeSlot::Output), cmp1_sv);
        var_map.insert((bid, 2, VarnodeSlot::Input(0)), load1_sv);

        let cmp2_out = Varnode::unique(24, 1);
        let cmp2_sv = SsaVarnode { base: cmp2_out, version: 0 };
        bb.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            cmp2_out,
            smallvec![load2_out, Varnode::constant(1, 4)],
            0x100c,
        ));
        var_map.insert((bid, 3, VarnodeSlot::Output), cmp2_sv);
        var_map.insert((bid, 3, VarnodeSlot::Input(0)), load2_sv);

        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x2000,
        ));

        let mut ssa = make_ssa(vec![bb], var_map);

        let pass = RustEnumPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(!changed, "different load sources should not combine");
        assert!(ssa.enum_discriminants.is_empty());
    }

    #[test]
    fn test_enum_variant_names() {
        let (blocks, var_map) = build_enum_pattern(&[0, 1, 5], 4);
        let mut ssa = make_ssa(blocks, var_map);

        let pass = RustEnumPass;
        pass.run(&mut ssa).expect("pass should succeed");

        assert_eq!(ssa.enum_discriminants.len(), 1);
        let disc = &ssa.enum_discriminants[0];
        assert_eq!(disc.variants[&0], "Variant_0");
        assert_eq!(disc.variants[&1], "Variant_1");
        assert_eq!(disc.variants[&5], "Variant_5");
    }

    #[test]
    fn test_enum_load_size_1_byte() {
        let (blocks, var_map) = build_enum_pattern(&[0, 1, 2], 1);
        let mut ssa = make_ssa(blocks, var_map);

        let pass = RustEnumPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(changed);
        assert_eq!(ssa.enum_discriminants.len(), 1);
        assert_eq!(ssa.enum_discriminants[0].variants.len(), 3);
    }

    #[test]
    fn test_enum_no_load_non_zero_offset() {
        let bid = BlockId(0);
        let mut bb = BasicBlock::new(bid);
        let mut var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode> =
            BTreeMap::new();

        let ptr_reg = Varnode::reg(0, 8);
        let ptr_sv = SsaVarnode { base: ptr_reg, version: 0 };

        let addr_vn = Varnode::unique(0, 8);
        let addr_sv = SsaVarnode { base: addr_vn, version: 0 };
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr_vn,
            smallvec![ptr_reg, Varnode::constant(8, 8)],
            0x1000,
        ));
        var_map.insert((bid, 0, VarnodeSlot::Output), addr_sv);
        var_map.insert((bid, 0, VarnodeSlot::Input(0)), ptr_sv);

        let space_vn = Varnode::constant(SpaceId::Ram as u64, 8);
        let load_out = Varnode::unique(8, 4);
        let load_sv = SsaVarnode { base: load_out, version: 0 };
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            load_out,
            smallvec![space_vn, addr_vn],
            0x1004,
        ));
        var_map.insert((bid, 1, VarnodeSlot::Output), load_sv);
        var_map.insert((bid, 1, VarnodeSlot::Input(1)), addr_sv);

        let cmp1_out = Varnode::unique(16, 1);
        bb.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            cmp1_out,
            smallvec![load_out, Varnode::constant(0, 4)],
            0x1008,
        ));
        let cmp1_sv = SsaVarnode { base: cmp1_out, version: 0 };
        var_map.insert((bid, 2, VarnodeSlot::Output), cmp1_sv);
        var_map.insert((bid, 2, VarnodeSlot::Input(0)), load_sv);

        let cmp2_out = Varnode::unique(24, 1);
        bb.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            cmp2_out,
            smallvec![load_out, Varnode::constant(1, 4)],
            0x100c,
        ));
        let cmp2_sv = SsaVarnode { base: cmp2_out, version: 0 };
        var_map.insert((bid, 3, VarnodeSlot::Output), cmp2_sv);
        var_map.insert((bid, 3, VarnodeSlot::Input(0)), load_sv);

        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x2000,
        ));

        let mut ssa = make_ssa(vec![bb], var_map);

        let pass = RustEnumPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(!changed, "non-zero offset should not be detected");
        assert!(ssa.enum_discriminants.is_empty());
    }
}
