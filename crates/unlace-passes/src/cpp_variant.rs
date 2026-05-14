//! C++ `std::variant` / `std::optional` tag-byte discriminator detection.
//!
//! In libstdc++ and libc++, `std::variant<T0, T1, ...>` stores an index byte
//! *after* the aligned union of alternatives. For `std::optional<T>` the tag
//! byte lives at `sizeof(T)` (or next aligned offset): 0 = empty, 1 = engaged.
//!
//! IR pattern:
//! 1. LOAD 1 byte from `(base + nonzero_const_offset)` -- the tag.
//! 2. Two or more INT_EQUAL comparisons of that byte against small constants.
//!
//! Heuristics:
//! - **Optional**: exactly {0, 1}.
//! - **Variant**: >= 2 constants in [0, 255] with minimum = 0.
//!
//! Populates [`SsaFunction::cpp_variant_discriminants`].

use std::collections::BTreeMap;

use unlace_ir::ssa::{
    CppVariantDiscriminant, CppVariantKind, SsaFunction, SsaVarnode, VarnodeSlot,
};
use unlace_ir::{BlockId, IrOp, SpaceId};

use crate::pass::{Pass, PassError};

/// Detect C++ `std::variant` / `std::optional` tag-byte discriminator patterns.
pub struct CppVariantPass;

impl Pass for CppVariantPass {
    fn name(&self) -> &str {
        "cpp-variant"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let loads = find_tag_loads(func);
        if loads.is_empty() {
            return Ok(false);
        }

        let comparisons = find_comparisons(func);
        if comparisons.is_empty() {
            return Ok(false);
        }

        let mut new_discs: Vec<CppVariantDiscriminant> = Vec::new();

        for (load_sv, tag_offset, tag_load_loc) in &loads {
            let cmp_set = match comparisons.get(load_sv) {
                Some(s) => s,
                None => continue,
            };

            if cmp_set.len() < 2 {
                continue;
            }

            let constants: Vec<u64> = cmp_set.iter().map(|(c, _, _)| *c).collect();
            if constants.iter().any(|&c| c > 255) {
                continue;
            }
            if *constants.iter().min().unwrap() != 0 {
                continue;
            }

            let (kind, variants) = classify(&constants);

            let comparison_locs: Vec<(BlockId, usize)> = {
                let mut locs: Vec<_> = cmp_set.iter().map(|(_, bid, idx)| (*bid, *idx)).collect();
                locs.sort();
                locs
            };

            new_discs.push(CppVariantDiscriminant {
                tag_sv: *load_sv,
                tag_load_loc: *tag_load_loc,
                tag_offset: *tag_offset,
                kind,
                variants,
                comparison_locs,
            });
        }

        if new_discs.is_empty() {
            return Ok(false);
        }

        new_discs.sort_by_key(|d| d.tag_load_loc);

        if new_discs == func.cpp_variant_discriminants {
            return Ok(false);
        }

        func.cpp_variant_discriminants = new_discs;
        Ok(true)
    }
}

fn classify(constants: &[u64]) -> (CppVariantKind, BTreeMap<u64, String>) {
    let mut sorted: Vec<u64> = constants.to_vec();
    sorted.sort_unstable();
    sorted.dedup();

    if sorted == [0, 1] {
        let mut map = BTreeMap::new();
        map.insert(0, "empty".to_string());
        map.insert(1, "engaged".to_string());
        return (CppVariantKind::Optional, map);
    }

    let mut map = BTreeMap::new();
    for &c in &sorted {
        map.insert(c, format!("Alt_{c}"));
    }
    (CppVariantKind::Variant, map)
}

/// Find 1-byte LOADs from `(base + nonzero_const_offset)`.
fn find_tag_loads(func: &SsaFunction) -> Vec<(SsaVarnode, i64, (BlockId, usize))> {
    let mut loads = Vec::new();

    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Load {
                continue;
            }
            match insn.output {
                Some(o) if o.size == 1 => {}
                _ => continue,
            };
            if insn.inputs.len() < 2 {
                continue;
            }

            let addr_vn = insn.inputs[1];
            let offset = match resolve_nonzero_offset(func, bid, insn_idx, &addr_vn) {
                Some(off) => off,
                None => continue,
            };

            let key = (bid, insn_idx, VarnodeSlot::Output);
            if let Some(&sv) = func.var_map.get(&key) {
                loads.push((sv, offset, (bid, insn_idx)));
            }
        }
    }

    loads
}

fn resolve_nonzero_offset(
    func: &SsaFunction,
    bid: BlockId,
    load_insn_idx: usize,
    addr_vn: &unlace_ir::Varnode,
) -> Option<i64> {
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
                if b.space == SpaceId::Const && b.offset != 0 {
                    Some(b.offset as i64)
                } else if a.space == SpaceId::Const && a.offset != 0 {
                    Some(a.offset as i64)
                } else {
                    None
                }
            }
            IrOp::Ptradd if def_insn.inputs.len() >= 3 => {
                let idx = def_insn.inputs[1];
                let stride = def_insn.inputs[2];
                if idx.space == SpaceId::Const && stride.space == SpaceId::Const {
                    let product = idx.offset.wrapping_mul(stride.offset);
                    if product != 0 {
                        Some(product as i64)
                    } else {
                        None
                    }
                } else {
                    None
                }
            }
            _ => None,
        };
    }

    None
}

fn find_comparisons(func: &SsaFunction) -> BTreeMap<SsaVarnode, Vec<(u64, BlockId, usize)>> {
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
                    result.entry(sv).or_default().push((b.offset, bid, insn_idx));
                }
            } else if a.space == SpaceId::Const && b.space != SpaceId::Const {
                if let Some(&sv) = sv1 {
                    result.entry(sv).or_default().push((a.offset, bid, insn_idx));
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

    use unlace_ir::ssa::{CppVariantKind, PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    use super::*;
    use crate::pass::Pass;

    fn build_trivial_dom(cfg: &unlace_ir::cfg::ControlFlowGraph) -> unlace_ir::ssa::DominatorTree {
        use petgraph::algo::dominators::simple_fast;
        let entry_ni = cfg.node_index(cfg.entry_block()).expect("entry block");
        let dominators = simple_fast(cfg.inner(), entry_ni);
        let mut idom = BTreeMap::new();
        let mut children: BTreeMap<BlockId, Vec<BlockId>> = BTreeMap::new();
        let entry = cfg.entry_block();
        for (&bid, &ni) in cfg.node_map() {
            if bid == entry { continue; }
            if let Some(dom_ni) = dominators.immediate_dominator(ni) {
                let dom_bid = cfg.inner()[dom_ni];
                idom.insert(bid, dom_bid);
                children.entry(dom_bid).or_default().push(bid);
            }
        }
        for cl in children.values_mut() { cl.sort(); }
        unlace_ir::ssa::DominatorTree::new(idom, children, entry)
    }

    fn make_ssa(
        blocks: Vec<BasicBlock>,
        var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>,
    ) -> SsaFunction {
        let entry = blocks.first().expect("blocks non-empty").id;
        let mut func = Function::new("test", entry, 0x1000);
        for bb in blocks { func.insert_block(bb); }
        let cfg = unlace_ir::cfg::build_cfg(&func);
        let dom_tree = build_trivial_dom(&cfg);
        SsaFunction {
            function: func, cfg, dom_tree,
            post_dom_tree: None,
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
            cpp_variant_discriminants: Vec::new(),
            panic_sites: BTreeMap::new(),
            go_defer_sites: Vec::new(),
            vtable_calls: BTreeMap::new(),
            cpp_vtable_calls: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            inferred_params: Vec::new(),
            inferred_return_type: PrimitiveType::Unknown,
            frame_setup_insns: BTreeSet::new(),
            stack_offset_hints: BTreeMap::new(),
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
            byref_boxes: BTreeMap::new(),
            stack_frame: None,
            byref_info: None,
            libc_call_annotations: BTreeMap::new(),
            array_struct_layouts: BTreeMap::new(),
            var_role_names: BTreeMap::new(),
            finalized_signature: None,
            crypto_annotations: Vec::new(),
        }
    }

    fn build_variant_pattern(
        tag_offset: u64,
        constants: &[u64],
    ) -> (Vec<BasicBlock>, BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>) {
        let bid = BlockId(0);
        let mut bb = BasicBlock::new(bid);
        let mut var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode> = BTreeMap::new();

        let ptr_reg = Varnode::reg(0, 8);
        let ptr_sv = SsaVarnode { base: ptr_reg, version: 0 };
        let addr_vn = Varnode::unique(0, 8);
        let addr_sv = SsaVarnode { base: addr_vn, version: 0 };
        bb.insns.push(IrInsn::with_output(IrOp::IntAdd, addr_vn, smallvec![ptr_reg, Varnode::constant(tag_offset, 8)], 0x1000));
        var_map.insert((bid, 0, VarnodeSlot::Output), addr_sv);
        var_map.insert((bid, 0, VarnodeSlot::Input(0)), ptr_sv);

        let space_vn = Varnode::constant(SpaceId::Ram as u64, 8);
        let load_out = Varnode::unique(8, 1);
        let load_sv = SsaVarnode { base: load_out, version: 0 };
        bb.insns.push(IrInsn::with_output(IrOp::Load, load_out, smallvec![space_vn, addr_vn], 0x1004));
        var_map.insert((bid, 1, VarnodeSlot::Output), load_sv);
        var_map.insert((bid, 1, VarnodeSlot::Input(1)), addr_sv);

        for (i, &c) in constants.iter().enumerate() {
            let insn_idx = i + 2;
            let cmp_out = Varnode::unique((insn_idx as u64 + 1) * 16, 1);
            let cmp_sv = SsaVarnode { base: cmp_out, version: 0 };
            bb.insns.push(IrInsn::with_output(IrOp::IntEqual, cmp_out, smallvec![load_out, Varnode::constant(c, 1)], 0x1000 + (insn_idx as u64) * 4));
            var_map.insert((bid, insn_idx, VarnodeSlot::Output), cmp_sv);
            var_map.insert((bid, insn_idx, VarnodeSlot::Input(0)), load_sv);
        }

        bb.insns.push(IrInsn::without_output(IrOp::Return, smallvec![Varnode::constant(0, 8)], 0x2000));
        (vec![bb], var_map)
    }

    #[test]
    fn detects_optional_pattern() {
        let (blocks, var_map) = build_variant_pattern(4, &[0, 1]);
        let mut ssa = make_ssa(blocks, var_map);
        let pass = CppVariantPass;
        let changed = pass.run(&mut ssa).expect("ok");
        assert!(changed);
        assert_eq!(ssa.cpp_variant_discriminants.len(), 1);
        let disc = &ssa.cpp_variant_discriminants[0];
        assert_eq!(disc.kind, CppVariantKind::Optional);
        assert_eq!(disc.tag_offset, 4);
        assert_eq!(disc.variants.len(), 2);
        assert_eq!(disc.variants[&0], "empty");
        assert_eq!(disc.variants[&1], "engaged");
    }

    #[test]
    fn detects_variant_3_alternatives() {
        let (blocks, var_map) = build_variant_pattern(8, &[0, 1, 2]);
        let mut ssa = make_ssa(blocks, var_map);
        let pass = CppVariantPass;
        let changed = pass.run(&mut ssa).expect("ok");
        assert!(changed);
        assert_eq!(ssa.cpp_variant_discriminants.len(), 1);
        let disc = &ssa.cpp_variant_discriminants[0];
        assert_eq!(disc.kind, CppVariantKind::Variant);
        assert_eq!(disc.tag_offset, 8);
        assert_eq!(disc.variants.len(), 3);
    }

    #[test]
    fn rejects_offset_zero() {
        let bid = BlockId(0);
        let mut bb = BasicBlock::new(bid);
        let mut var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode> = BTreeMap::new();
        let ptr_reg = Varnode::reg(0, 8);
        let space_vn = Varnode::constant(SpaceId::Ram as u64, 8);
        let load_out = Varnode::unique(0, 1);
        let load_sv = SsaVarnode { base: load_out, version: 0 };
        bb.insns.push(IrInsn::with_output(IrOp::Load, load_out, smallvec![space_vn, ptr_reg], 0x1000));
        var_map.insert((bid, 0, VarnodeSlot::Output), load_sv);
        for (i, c) in [0u64, 1].iter().enumerate() {
            let idx = i + 1;
            let cmp_out = Varnode::unique((idx as u64 + 1) * 16, 1);
            let cmp_sv = SsaVarnode { base: cmp_out, version: 0 };
            bb.insns.push(IrInsn::with_output(IrOp::IntEqual, cmp_out, smallvec![load_out, Varnode::constant(*c, 1)], 0x1004 + i as u64 * 4));
            var_map.insert((bid, idx, VarnodeSlot::Output), cmp_sv);
            var_map.insert((bid, idx, VarnodeSlot::Input(0)), load_sv);
        }
        bb.insns.push(IrInsn::without_output(IrOp::Return, smallvec![Varnode::constant(0, 8)], 0x2000));
        let mut ssa = make_ssa(vec![bb], var_map);
        let pass = CppVariantPass;
        assert!(!pass.run(&mut ssa).expect("ok"));
        assert!(ssa.cpp_variant_discriminants.is_empty());
    }

    #[test]
    fn rejects_4_byte_load() {
        let bid = BlockId(0);
        let mut bb = BasicBlock::new(bid);
        let mut var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode> = BTreeMap::new();
        let ptr_reg = Varnode::reg(0, 8);
        let ptr_sv = SsaVarnode { base: ptr_reg, version: 0 };
        let addr_vn = Varnode::unique(0, 8);
        let addr_sv = SsaVarnode { base: addr_vn, version: 0 };
        bb.insns.push(IrInsn::with_output(IrOp::IntAdd, addr_vn, smallvec![ptr_reg, Varnode::constant(8, 8)], 0x1000));
        var_map.insert((bid, 0, VarnodeSlot::Output), addr_sv);
        var_map.insert((bid, 0, VarnodeSlot::Input(0)), ptr_sv);
        let space_vn = Varnode::constant(SpaceId::Ram as u64, 8);
        let load_out = Varnode::unique(8, 4); // 4-byte
        let load_sv = SsaVarnode { base: load_out, version: 0 };
        bb.insns.push(IrInsn::with_output(IrOp::Load, load_out, smallvec![space_vn, addr_vn], 0x1004));
        var_map.insert((bid, 1, VarnodeSlot::Output), load_sv);
        var_map.insert((bid, 1, VarnodeSlot::Input(1)), addr_sv);
        for (i, c) in [0u64, 1].iter().enumerate() {
            let idx = i + 2;
            let cmp_out = Varnode::unique((idx as u64 + 1) * 16, 1);
            let cmp_sv = SsaVarnode { base: cmp_out, version: 0 };
            bb.insns.push(IrInsn::with_output(IrOp::IntEqual, cmp_out, smallvec![load_out, Varnode::constant(*c, 4)], 0x1008 + i as u64 * 4));
            var_map.insert((bid, idx, VarnodeSlot::Output), cmp_sv);
            var_map.insert((bid, idx, VarnodeSlot::Input(0)), load_sv);
        }
        bb.insns.push(IrInsn::without_output(IrOp::Return, smallvec![Varnode::constant(0, 8)], 0x2000));
        let mut ssa = make_ssa(vec![bb], var_map);
        let pass = CppVariantPass;
        assert!(!pass.run(&mut ssa).expect("ok"));
    }

    #[test]
    fn rejects_single_comparison() {
        let (blocks, var_map) = build_variant_pattern(4, &[0]);
        let mut ssa = make_ssa(blocks, var_map);
        assert!(!CppVariantPass.run(&mut ssa).expect("ok"));
    }

    #[test]
    fn rejects_nonzero_minimum() {
        let (blocks, var_map) = build_variant_pattern(4, &[1, 2]);
        let mut ssa = make_ssa(blocks, var_map);
        assert!(!CppVariantPass.run(&mut ssa).expect("ok"));
    }

    #[test]
    fn detects_variant_with_gap() {
        let (blocks, var_map) = build_variant_pattern(16, &[0, 1, 3]);
        let mut ssa = make_ssa(blocks, var_map);
        let changed = CppVariantPass.run(&mut ssa).expect("ok");
        assert!(changed);
        assert_eq!(ssa.cpp_variant_discriminants[0].kind, CppVariantKind::Variant);
        assert_eq!(ssa.cpp_variant_discriminants[0].tag_offset, 16);
    }

    #[test]
    fn idempotent() {
        let (blocks, var_map) = build_variant_pattern(8, &[0, 1, 2]);
        let mut ssa = make_ssa(blocks, var_map);
        assert!(CppVariantPass.run(&mut ssa).expect("ok"));
        assert!(!CppVariantPass.run(&mut ssa).expect("ok"));
    }
}
