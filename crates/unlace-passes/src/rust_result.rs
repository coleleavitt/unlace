//! Rust `Result<T,E>` / `Option<T>` tagged-union detection.
//!
//! Detects the pattern where a struct has a tag byte (discriminant) at offset 0
//! followed by a payload. The tag is tested via `IntEqual(Load(base+0), 0)` for
//! `Ok`/`Some` and `IntEqual(Load(base+0), 1)` for `Err`/`None`.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId};

/// A detected Rust tagged union (`Result<T,E>` or `Option<T>`).
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct RustTaggedUnion {
    /// The SSA varnode used as the base pointer of the struct.
    pub base: SsaVarnode,
    /// Byte offset of the tag field from `base` (always 0 for this pattern).
    pub tag_offset: u64,
    /// Mapping from discriminant constant to variant name.
    pub variants: Vec<(u64, String)>,
}

/// Detect Rust `Result<T,E>` / `Option<T>` patterns in the given SSA function.
///
/// The pattern we look for:
/// 1. A `Load` with a 1-byte output from `base + 0` (the tag byte).
/// 2. Two `IntEqual` comparisons against constants 0 and 1 on that loaded value.
///
/// When both comparisons are found, we classify:
/// - If tag==0 → `Ok`/`Some`, tag==1 → `Err`/`None`.
pub fn detect_rust_tagged_unions(func: &SsaFunction) -> Vec<RustTaggedUnion> {
    let loads = find_tag_loads(func);
    if loads.is_empty() {
        return Vec::new();
    }

    let comparisons = find_int_equal_comparisons(func);
    if comparisons.is_empty() {
        return Vec::new();
    }

    let mut results = Vec::new();

    for (load_sv, base_sv) in &loads {
        let Some(cmp_set) = comparisons.get(load_sv) else {
            continue;
        };

        let has_zero = cmp_set.iter().any(|&(c, _, _)| c == 0);
        let has_one = cmp_set.iter().any(|&(c, _, _)| c == 1);

        if !has_zero || !has_one {
            continue;
        }

        // Determine whether this looks like Result or Option based on whether
        // there are exactly these two discriminants.
        let only_zero_and_one = cmp_set.iter().all(|&(c, _, _)| c == 0 || c == 1);

        let variants = if only_zero_and_one {
            // Heuristic: Result uses Ok=0, Err=1; Option uses Some=0, None=1.
            // We default to Result labeling; upstream passes or DWARF can refine.
            vec![(0, "Ok".to_string()), (1, "Err".to_string())]
        } else {
            // More than two variants — label generically.
            let mut vs: Vec<(u64, String)> = cmp_set
                .iter()
                .map(|&(c, _, _)| (c, format!("Variant_{c}")))
                .collect();
            vs.sort_by_key(|(c, _)| *c);
            vs.dedup_by_key(|(c, _)| *c);
            vs
        };

        results.push(RustTaggedUnion {
            base: *base_sv,
            tag_offset: 0,
            variants,
        });
    }

    results.sort_by(|a, b| a.base.cmp(&b.base));
    results
}

/// Find 1-byte loads from offset 0 of a base pointer.
/// Returns `(ssa_varnode_of_load_output, ssa_varnode_of_base_pointer)`.
fn find_tag_loads(func: &SsaFunction) -> Vec<(SsaVarnode, SsaVarnode)> {
    let mut loads = Vec::new();

    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Load {
                continue;
            }

            // Must be a 1-byte load (discriminant tag byte).
            let output = match insn.output {
                Some(o) if o.size == 1 => o,
                _ => continue,
            };
            let _ = output;

            if insn.inputs.len() < 2 {
                continue;
            }

            let addr_vn = insn.inputs[1];

            // Check that the address is at offset 0 from some base.
            let base_sv = match resolve_base_at_offset_zero(func, bid, insn_idx, &addr_vn) {
                Some(sv) => sv,
                None => continue,
            };

            let key = (bid, insn_idx, VarnodeSlot::Output);
            if let Some(&load_sv) = func.var_map.get(&key) {
                loads.push((load_sv, base_sv));
            }
        }
    }

    loads
}

/// Resolve the base SSA varnode for an address that represents offset 0.
/// Returns `Some(base_sv)` if the address is:
/// - A direct register/unique (the pointer itself, offset=0).
/// - `INT_ADD(base, 0)` or `INT_ADD(0, base)`.
/// - `COPY(base)`.
fn resolve_base_at_offset_zero(
    func: &SsaFunction,
    bid: BlockId,
    load_insn_idx: usize,
    addr_vn: &unlace_ir::Varnode,
) -> Option<SsaVarnode> {
    let block = &func.function.blocks[&bid];

    // Walk backwards to find the defining instruction of the address varnode.
    for def_idx in (0..load_insn_idx).rev() {
        let def_insn = &block.insns[def_idx];
        if def_insn.output != Some(*addr_vn) {
            continue;
        }

        return match def_insn.op {
            IrOp::IntAdd if def_insn.inputs.len() == 2 => {
                let a = def_insn.inputs[0];
                let b = def_insn.inputs[1];
                if b.space == SpaceId::Const && b.offset == 0 {
                    // base + 0 → base is input 0
                    func.var_map
                        .get(&(bid, def_idx, VarnodeSlot::Input(0)))
                        .copied()
                } else if a.space == SpaceId::Const && a.offset == 0 {
                    // 0 + base → base is input 1
                    func.var_map
                        .get(&(bid, def_idx, VarnodeSlot::Input(1)))
                        .copied()
                } else {
                    None
                }
            }
            IrOp::Copy => func
                .var_map
                .get(&(bid, def_idx, VarnodeSlot::Input(0)))
                .copied(),
            _ => None,
        };
    }

    // No defining instruction — the address varnode itself is the base pointer.
    if matches!(
        addr_vn.space,
        SpaceId::Register | SpaceId::Unique | SpaceId::Stack
    ) {
        func.var_map
            .get(&(bid, load_insn_idx, VarnodeSlot::Input(1)))
            .copied()
    } else {
        None
    }
}

/// Scan all `IntEqual` instructions and group by the SSA varnode being compared.
/// Returns a map from `ssa_varnode → [(constant, block_id, insn_idx)]`.
fn find_int_equal_comparisons(
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

            let a = insn.inputs[0];
            let b = insn.inputs[1];

            if a.space != SpaceId::Const && b.space == SpaceId::Const {
                if let Some(&sv) = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Input(0))) {
                    result
                        .entry(sv)
                        .or_default()
                        .push((b.offset, bid, insn_idx));
                }
            } else if a.space == SpaceId::Const && b.space != SpaceId::Const {
                if let Some(&sv) = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Input(1))) {
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

    use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    use super::*;

    // ── Helpers ─────────────────────────────────────────────────────

    fn build_trivial_dom(cfg: &unlace_ir::cfg::ControlFlowGraph) -> unlace_ir::ssa::DominatorTree {
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
            cpp_lambda_captures: Vec::new(),
        }
    }

    /// Build a pattern: LOAD 1-byte from base pointer, then INT_EQUAL comparisons.
    fn build_result_pattern(
        constants: &[u64],
    ) -> (
        Vec<BasicBlock>,
        BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>,
        SsaVarnode, // base_sv
    ) {
        let bid = BlockId(0);
        let mut bb = BasicBlock::new(bid);
        let mut var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode> = BTreeMap::new();

        // Base pointer in register r0
        let ptr_reg = Varnode::reg(0, 8);
        let ptr_sv = SsaVarnode {
            base: ptr_reg,
            version: 0,
        };

        // 1-byte load from base+0 (tag byte)
        let load_out = Varnode::unique(0, 1);
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

        // INT_EQUAL comparisons
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
                smallvec![load_out, Varnode::constant(c, 1)],
                0x1000 + (insn_idx as u64) * 4,
            ));
            var_map.insert((bid, insn_idx, VarnodeSlot::Output), cmp_sv);
            var_map.insert((bid, insn_idx, VarnodeSlot::Input(0)), load_sv);
        }

        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x2000,
        ));

        (vec![bb], var_map, ptr_sv)
    }

    // ── Tests ───────────────────────────────────────────────────────

    /// Detect a standard Result<T,E> pattern with tag==0 (Ok) and tag==1 (Err).
    #[test]
    fn test_detect_result_ok_err() {
        let (blocks, var_map, _base_sv) = build_result_pattern(&[0, 1]);
        let ssa = make_ssa(blocks, var_map);

        let unions = detect_rust_tagged_unions(&ssa);

        assert_eq!(unions.len(), 1);
        let u = &unions[0];
        assert_eq!(u.tag_offset, 0);
        assert_eq!(u.variants.len(), 2);
        assert!(u.variants.contains(&(0, "Ok".to_string())));
        assert!(u.variants.contains(&(1, "Err".to_string())));
    }

    /// No detection when only one discriminant value is compared (not a tagged union).
    #[test]
    fn test_no_detect_single_comparison() {
        let (blocks, var_map, _) = build_result_pattern(&[0]);
        let ssa = make_ssa(blocks, var_map);

        let unions = detect_rust_tagged_unions(&ssa);
        assert!(
            unions.is_empty(),
            "single comparison should not detect a tagged union"
        );
    }

    /// No detection when the load is not 1-byte (e.g. 4-byte load is a general
    /// enum, not the specific Result/Option byte-tag pattern).
    #[test]
    fn test_no_detect_non_byte_tag() {
        let bid = BlockId(0);
        let mut bb = BasicBlock::new(bid);
        let mut var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode> = BTreeMap::new();

        let ptr_reg = Varnode::reg(0, 8);
        let ptr_sv = SsaVarnode {
            base: ptr_reg,
            version: 0,
        };

        // 4-byte load (not a byte tag)
        let load_out = Varnode::unique(0, 4);
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

        // Compare against 0 and 1
        for (i, c) in [0u64, 1].iter().enumerate() {
            let insn_idx = i + 1;
            let cmp_out = Varnode::unique((insn_idx as u64 + 1) * 8, 1);
            let cmp_sv = SsaVarnode {
                base: cmp_out,
                version: 0,
            };
            bb.insns.push(IrInsn::with_output(
                IrOp::IntEqual,
                cmp_out,
                smallvec![load_out, Varnode::constant(*c, 4)],
                0x1000 + (insn_idx as u64) * 4,
            ));
            var_map.insert((bid, insn_idx, VarnodeSlot::Output), cmp_sv);
            var_map.insert((bid, insn_idx, VarnodeSlot::Input(0)), load_sv);
        }

        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x2000,
        ));

        let ssa = make_ssa(vec![bb], var_map);
        let unions = detect_rust_tagged_unions(&ssa);
        assert!(
            unions.is_empty(),
            "4-byte load should not match byte-tag pattern"
        );
                    result.entry(sv).or_default().push((b.offset, bid, insn_idx));
                }
            } else if a.space == SpaceId::Const && b.space != SpaceId::Const {
                if let Some(&sv) = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Input(1))) {
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

    use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    use super::*;

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
            panic_sites: BTreeMap::new(),
            rust_async: None,
            vtable_calls: BTreeMap::new(),
            cpp_vtable_calls: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            go_defer_recover_calls: BTreeMap::new(),
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

    /// Build a pattern: LOAD 1-byte from base pointer, then INT_EQUAL comparisons.
    fn build_result_pattern(
        constants: &[u64],
    ) -> (
        Vec<BasicBlock>,
        BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>,
        SsaVarnode, // base_sv
    ) {
        let bid = BlockId(0);
        let mut bb = BasicBlock::new(bid);
        let mut var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode> = BTreeMap::new();

        // Base pointer in register r0
        let ptr_reg = Varnode::reg(0, 8);
        let ptr_sv = SsaVarnode {
            base: ptr_reg,
            version: 0,
        };

        // 1-byte load from base+0 (tag byte)
        let load_out = Varnode::unique(0, 1);
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

        // INT_EQUAL comparisons
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
                smallvec![load_out, Varnode::constant(c, 1)],
                0x1000 + (insn_idx as u64) * 4,
            ));
            var_map.insert((bid, insn_idx, VarnodeSlot::Output), cmp_sv);
            var_map.insert((bid, insn_idx, VarnodeSlot::Input(0)), load_sv);
        }

        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x2000,
        ));

        (vec![bb], var_map, ptr_sv)
    }

    // ── Tests ───────────────────────────────────────────────────────

    /// Detect a standard Result<T,E> pattern with tag==0 (Ok) and tag==1 (Err).
    #[test]
    fn test_detect_result_ok_err() {
        let (blocks, var_map, _base_sv) = build_result_pattern(&[0, 1]);
        let ssa = make_ssa(blocks, var_map);

        let unions = detect_rust_tagged_unions(&ssa);

        assert_eq!(unions.len(), 1);
        let u = &unions[0];
        assert_eq!(u.tag_offset, 0);
        assert_eq!(u.variants.len(), 2);
        assert!(u.variants.contains(&(0, "Ok".to_string())));
        assert!(u.variants.contains(&(1, "Err".to_string())));
    }

    /// No detection when only one discriminant value is compared (not a tagged union).
    #[test]
    fn test_no_detect_single_comparison() {
        let (blocks, var_map, _) = build_result_pattern(&[0]);
        let ssa = make_ssa(blocks, var_map);

        let unions = detect_rust_tagged_unions(&ssa);
        assert!(unions.is_empty(), "single comparison should not detect a tagged union");
    }

    /// No detection when the load is not 1-byte (e.g. 4-byte load is a general
    /// enum, not the specific Result/Option byte-tag pattern).
    #[test]
    fn test_no_detect_non_byte_tag() {
        let bid = BlockId(0);
        let mut bb = BasicBlock::new(bid);
        let mut var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode> = BTreeMap::new();

        let ptr_reg = Varnode::reg(0, 8);
        let ptr_sv = SsaVarnode {
            base: ptr_reg,
            version: 0,
        };

        // 4-byte load (not a byte tag)
        let load_out = Varnode::unique(0, 4);
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

        // Compare against 0 and 1
        for (i, c) in [0u64, 1].iter().enumerate() {
            let insn_idx = i + 1;
            let cmp_out = Varnode::unique((insn_idx as u64 + 1) * 8, 1);
            let cmp_sv = SsaVarnode {
                base: cmp_out,
                version: 0,
            };
            bb.insns.push(IrInsn::with_output(
                IrOp::IntEqual,
                cmp_out,
                smallvec![load_out, Varnode::constant(*c, 4)],
                0x1000 + (insn_idx as u64) * 4,
            ));
            var_map.insert((bid, insn_idx, VarnodeSlot::Output), cmp_sv);
            var_map.insert((bid, insn_idx, VarnodeSlot::Input(0)), load_sv);
        }

        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x2000,
        ));

        let ssa = make_ssa(vec![bb], var_map);
        let unions = detect_rust_tagged_unions(&ssa);
        assert!(unions.is_empty(), "4-byte load should not match byte-tag pattern");
    }

    /// Detect pattern when load address is computed via INT_ADD(base, 0).
    #[test]
    fn test_detect_with_int_add_zero_offset() {
        let bid = BlockId(0);
        let mut bb = BasicBlock::new(bid);
        let mut var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode> = BTreeMap::new();

        let ptr_reg = Varnode::reg(0, 8);
        let ptr_sv = SsaVarnode {
            base: ptr_reg,
            version: 0,
        };

        // INT_ADD(ptr_reg, 0) → addr_vn
        let addr_vn = Varnode::unique(0, 8);
        let addr_sv = SsaVarnode {
            base: addr_vn,
            version: 0,
        };
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr_vn,
            smallvec![ptr_reg, Varnode::constant(0, 8)],
            0x1000,
        ));
        var_map.insert((bid, 0, VarnodeSlot::Output), addr_sv);
        var_map.insert((bid, 0, VarnodeSlot::Input(0)), ptr_sv);

        // 1-byte load from addr_vn
        let load_out = Varnode::unique(8, 1);
        let load_sv = SsaVarnode {
            base: load_out,
            version: 0,
        };
        let space_vn = Varnode::constant(SpaceId::Ram as u64, 8);
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            load_out,
            smallvec![space_vn, addr_vn],
            0x1004,
        ));
        var_map.insert((bid, 1, VarnodeSlot::Output), load_sv);
        var_map.insert((bid, 1, VarnodeSlot::Input(1)), addr_sv);

        // INT_EQUAL comparisons against 0 and 1
        for (i, c) in [0u64, 1].iter().enumerate() {
            let insn_idx = i + 2;
            let cmp_out = Varnode::unique((insn_idx as u64 + 2) * 8, 1);
            let cmp_sv = SsaVarnode {
                base: cmp_out,
                version: 0,
            };
            bb.insns.push(IrInsn::with_output(
                IrOp::IntEqual,
                cmp_out,
                smallvec![load_out, Varnode::constant(*c, 1)],
                0x1008 + (i as u64) * 4,
            ));
            var_map.insert((bid, insn_idx, VarnodeSlot::Output), cmp_sv);
            var_map.insert((bid, insn_idx, VarnodeSlot::Input(0)), load_sv);
        }

        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x2000,
        ));

        let ssa = make_ssa(vec![bb], var_map);
        let unions = detect_rust_tagged_unions(&ssa);

        assert_eq!(unions.len(), 1);
        let u = &unions[0];
        assert_eq!(u.tag_offset, 0);
        assert_eq!(u.base, ptr_sv);
        assert_eq!(u.variants.len(), 2);
        assert!(u.variants.contains(&(0, "Ok".to_string())));
        assert!(u.variants.contains(&(1, "Err".to_string())));
    }
}
