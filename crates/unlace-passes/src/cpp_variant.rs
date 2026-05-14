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
//! C++ `std::variant` / `std::optional` tag-byte discrimination.
//!
//! Modern libc++ / libstdc++ implementations store a compact discriminator
//! next to the value storage for `std::optional<T>` and `std::variant<Ts...>`:
//! an engaged flag for optional (usually one byte, compared against `0`/`1`) or
//! an active-alternative index for variant (usually a byte/word compared against
//! a small set of constants). Optimized code typically materializes this as a
//! narrow `LOAD` from `object + tag_offset` followed by equality/inequality
//! tests. This pass recognizes those load/compare patterns and records them in
//! `SsaFunction::enum_discriminants`, reusing the existing enum-constant binding
//! and printer path.

use std::collections::BTreeMap;

use unlace_ir::ssa::{EnumDiscriminant, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// Detect C++ standard-library optional/variant discriminator load patterns.
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
        let comparisons = find_tag_comparisons(func);
        if comparisons.is_empty() {
            return Ok(false);
        }

        let mut additions = Vec::new();
        for load in loads {
            let Some(cmp_set) = comparisons.get(&load.load_sv) else {
                continue;
            };
            let mut constants = cmp_set.iter().map(|(c, _, _)| *c).collect::<Vec<_>>();
            constants.sort_unstable();
            constants.dedup();
            if !looks_like_optional_or_variant(&constants, load.load_size) {
                continue;
            }

            let mut comparison_locs = cmp_set
                .iter()
                .map(|(_, bid, idx)| (*bid, *idx))
                .collect::<Vec<_>>();
            comparison_locs.sort_unstable();
            comparison_locs.dedup();

            let mut variants = BTreeMap::new();
            if is_optional_constants(&constants) {
                variants.insert(0, "nullopt".to_string());
                variants.insert(1, "has_value".to_string());
            } else {
                for constant in constants {
                    variants.insert(constant, format!("Alt_{constant}"));
                }
            }

            additions.push(EnumDiscriminant {
                load_sv: load.load_sv,
                load_loc: load.load_loc,
                variants,
                comparison_locs,
            });
        }

        if additions.is_empty() {
            return Ok(false);
        }
        additions.sort_by(|a, b| a.load_loc.cmp(&b.load_loc));
        let mut changed = false;
        for disc in additions {
            if !func.enum_discriminants.iter().any(|existing| {
                existing.load_sv == disc.load_sv && existing.load_loc == disc.load_loc
            }) {
                func.enum_discriminants.push(disc);
                changed = true;
            }
        }
        func.enum_discriminants
            .sort_by(|a, b| a.load_loc.cmp(&b.load_loc));
        Ok(changed)
    }
}

#[derive(Clone, Debug)]
struct TagLoad {
    load_sv: SsaVarnode,
    load_loc: (BlockId, usize),
    load_size: u8,
}

fn find_tag_loads(func: &SsaFunction) -> Vec<TagLoad> {
    let mut out = Vec::new();
    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Load || insn.inputs.len() < 2 {
                continue;
            }
            let Some(output) = insn.output else {
                continue;
            };
            if !matches!(output.size, 1 | 2 | 4) {
                continue;
            }
            if !is_tag_address(func, bid, idx, &insn.inputs[1]) {
                continue;
            }
            let Some(&load_sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Output)) else {
                continue;
            };
            out.push(TagLoad {
                load_sv,
                load_loc: (bid, idx),
                load_size: output.size,
            });
        }
    }
    out
}

fn is_tag_address(func: &SsaFunction, bid: BlockId, load_idx: usize, addr: &Varnode) -> bool {
    let Some((base_sv, offset)) = resolve_address_offset(func, bid, load_idx, addr) else {
        return false;
    };
    if offset > 0 {
        return true;
    }
    // Some ABIs place the optional engaged byte at offset zero for bool-like or
    // empty payloads. Avoid arbitrary constants/globals; accept plausible local,
    // parameter, or temporary aggregate bases.
    matches!(
        base_sv.base.space,
        SpaceId::Register | SpaceId::Stack | SpaceId::Unique
    )
}

fn resolve_address_offset(
    func: &SsaFunction,
    bid: BlockId,
    before_idx: usize,
    addr: &Varnode,
) -> Option<(SsaVarnode, u64)> {
    let block = func.function.blocks.get(&bid)?;
    for def_idx in (0..before_idx).rev() {
        let def = &block.insns[def_idx];
        if def.output != Some(*addr) {
            continue;
        }
        return match def.op {
            IrOp::IntAdd if def.inputs.len() == 2 => {
                let a = def.inputs[0];
                let b = def.inputs[1];
                if a.space == SpaceId::Const {
                    let base = func
                        .var_map
                        .get(&(bid, def_idx, VarnodeSlot::Input(1)))
                        .copied()?;
                    Some((base, a.offset))
                } else if b.space == SpaceId::Const {
                    let base = func
                        .var_map
                        .get(&(bid, def_idx, VarnodeSlot::Input(0)))
                        .copied()?;
                    Some((base, b.offset))
                } else {
                    None
                }
            }
            IrOp::Ptradd if def.inputs.len() >= 3 => {
                let idx_vn = def.inputs[1];
                let elem_vn = def.inputs[2];
                if idx_vn.space != SpaceId::Const || elem_vn.space != SpaceId::Const {
                    return None;
                }
                let base = func
                    .var_map
                    .get(&(bid, def_idx, VarnodeSlot::Input(0)))
                    .copied()?;
                Some((base, idx_vn.offset.saturating_mul(elem_vn.offset)))
            }
            IrOp::Copy if def.inputs.len() == 1 => {
                resolve_address_offset(func, bid, def_idx, &def.inputs[0])
            }
            _ => None,
        };
    }

    let base = func
        .var_map
        .get(&(bid, before_idx, VarnodeSlot::Input(1)))
        .copied()
        .unwrap_or(SsaVarnode {
            base: *addr,
            version: 0,
        });
    Some((base, 0))
}

fn find_tag_comparisons(func: &SsaFunction) -> BTreeMap<SsaVarnode, Vec<(u64, BlockId, usize)>> {
    let mut out: BTreeMap<SsaVarnode, Vec<(u64, BlockId, usize)>> = BTreeMap::new();
    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if !matches!(insn.op, IrOp::IntEqual | IrOp::IntNotequal) || insn.inputs.len() != 2 {
                continue;
            }
            let a = insn.inputs[0];
            let b = insn.inputs[1];
            if a.space == SpaceId::Const && b.space != SpaceId::Const {
                if let Some(&sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Input(1))) {
                    out.entry(sv).or_default().push((a.offset, bid, idx));
                }
            } else if b.space == SpaceId::Const && a.space != SpaceId::Const {
                if let Some(&sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Input(0))) {
                    out.entry(sv).or_default().push((b.offset, bid, idx));
                }
            }
        }
    }
    out
}

fn looks_like_optional_or_variant(constants: &[u64], load_size: u8) -> bool {
    if constants.is_empty() {
        return false;
    }
    if is_optional_constants(constants) {
        return true;
    }
    if constants.len() < 2 || constants.len() > 64 {
        return false;
    }
    let max_allowed = match load_size {
        1 => u8::MAX as u64,
        2 => u16::MAX as u64,
        _ => 4096,
    };
    constants.iter().all(|&c| c <= max_allowed)
}

fn is_optional_constants(constants: &[u64]) -> bool {
    matches!(constants, [0, 1])
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;
    use unlace_ir::ssa::{CallingConvention, PrimitiveType};
    use unlace_ir::{BasicBlock, Function, IrInsn};

    use crate::pass::Pass;

    fn make_ssa(
        block: BasicBlock,
        var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>,
    ) -> SsaFunction {
        let mut func = Function::new("cpp_variant_test", block.id, 0x1000);
        func.insert_block(block);
        let cfg = unlace_ir::cfg::build_cfg(&func);
        let dom_tree =
            unlace_ir::ssa::DominatorTree::new(BTreeMap::new(), BTreeMap::new(), cfg.entry_block());
        SsaFunction {
            function: func,
            cfg,
            dom_tree,
            post_dom_tree: None,
            phi_map: BTreeMap::new(),
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
            op_bindings: Default::default(),
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

    fn sv(v: Varnode) -> SsaVarnode {
        SsaVarnode {
            base: v,
            version: 0,
        }
    }

    #[test]
    fn detects_variant_tag_at_nonzero_offset() {
        let bid = BlockId(0);
        let mut bb = BasicBlock::new(bid);
        let mut map = BTreeMap::new();
        let obj = Varnode::reg(0, 8);
        let tag_addr = Varnode::unique(0, 8);
        let tag = Varnode::unique(8, 1);
        let c0 = Varnode::unique(16, 1);
        let c2 = Varnode::unique(24, 1);
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            tag_addr,
            smallvec![obj, Varnode::constant(16, 8)],
            0x1000,
        ));
        map.insert((bid, 0, VarnodeSlot::Output), sv(tag_addr));
        map.insert((bid, 0, VarnodeSlot::Input(0)), sv(obj));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            tag,
            smallvec![Varnode::constant(SpaceId::Ram as u64, 8), tag_addr],
            0x1004,
        ));
        map.insert((bid, 1, VarnodeSlot::Output), sv(tag));
        map.insert((bid, 1, VarnodeSlot::Input(1)), sv(tag_addr));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            c0,
            smallvec![tag, Varnode::constant(0, 1)],
            0x1008,
        ));
        map.insert((bid, 2, VarnodeSlot::Output), sv(c0));
        map.insert((bid, 2, VarnodeSlot::Input(0)), sv(tag));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntNotequal,
            c2,
            smallvec![tag, Varnode::constant(2, 1)],
            0x100c,
        ));
        map.insert((bid, 3, VarnodeSlot::Output), sv(c2));
        map.insert((bid, 3, VarnodeSlot::Input(0)), sv(tag));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1010,
        ));

        let mut ssa = make_ssa(bb, map);
        assert!(CppVariantPass.run(&mut ssa).expect("pass succeeds"));
        assert_eq!(ssa.enum_discriminants.len(), 1);
        let disc = &ssa.enum_discriminants[0];
        assert_eq!(disc.variants[&0], "Alt_0");
        assert_eq!(disc.variants[&2], "Alt_2");
        assert_eq!(disc.comparison_locs, vec![(bid, 2), (bid, 3)]);
    }

    #[test]
    fn detects_optional_engaged_flag() {
        let bid = BlockId(0);
        let mut bb = BasicBlock::new(bid);
        let mut map = BTreeMap::new();
        let opt = Varnode::stack(-8_i64 as u64, 8);
        let flag = Varnode::unique(0, 1);
        let c0 = Varnode::unique(8, 1);
        let c1 = Varnode::unique(16, 1);
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            flag,
            smallvec![Varnode::constant(SpaceId::Ram as u64, 8), opt],
            0x2000,
        ));
        map.insert((bid, 0, VarnodeSlot::Output), sv(flag));
        map.insert((bid, 0, VarnodeSlot::Input(1)), sv(opt));
        for (i, (out, val)) in [(c0, 0_u64), (c1, 1_u64)].into_iter().enumerate() {
            let idx = i + 1;
            bb.insns.push(IrInsn::with_output(
                IrOp::IntEqual,
                out,
                smallvec![flag, Varnode::constant(val, 1)],
                0x2004 + idx as u64 * 4,
            ));
            map.insert((bid, idx, VarnodeSlot::Output), sv(out));
            map.insert((bid, idx, VarnodeSlot::Input(0)), sv(flag));
        }
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x2010,
        ));

        let mut ssa = make_ssa(bb, map);
        assert!(CppVariantPass.run(&mut ssa).expect("pass succeeds"));
        assert_eq!(ssa.enum_discriminants[0].variants[&0], "nullopt");
        assert_eq!(ssa.enum_discriminants[0].variants[&1], "has_value");
    }

    #[test]
    fn ignores_single_constant_test() {
        assert!(!looks_like_optional_or_variant(&[7], 1));
    }
}
