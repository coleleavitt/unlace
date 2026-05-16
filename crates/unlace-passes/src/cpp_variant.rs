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

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
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
        additions.sort_by_key(|a| a.load_loc);
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
            .sort_by_key(|a| a.load_loc);
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
            arch: unlace_ir::ArchId::Unknown(0),
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
            libc_sig_annotations: BTreeMap::new(),
            array_struct_layouts: BTreeMap::new(),
            var_role_names: BTreeMap::new(),
            finalized_signature: None,
            crypto_annotations: Vec::new(),
            go_defer_sites: Vec::new(),
            type_counterexamples: Vec::new(),
            cpp_variant_discriminants: Vec::new(),
            go_defer_recover_calls: BTreeMap::new(),
            cpp_lambda_captures: Vec::new(),
            seh_regions: Vec::new(),
            coroutine_sites: Vec::new(),
            resolved_jump_tables: std::collections::BTreeMap::new(),
            rust_async: None,
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
