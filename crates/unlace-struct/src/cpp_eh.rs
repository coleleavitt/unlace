//! Bridge from `unlace_loader::seh::CppEhTryRegion` (t203) into the
//! [`SehRegion`]s consumed by [`wrap_seh_regions`].
//!
//! The loader walks MSVC `FuncInfo` → `TryBlockMapEntry` → `HandlerType` →
//! `TypeDescriptor` and produces a flat list of recovered try-blocks. This
//! module maps each into the structurer's representation so the existing
//! [`crate::seh_lower::wrap_seh_regions`] pass can wrap the matching HIR
//! ranges in [`HirNode::TryCatch`] nodes.
//!
//! ## Address-range caveat
//!
//! The MSVC `try_low` / `try_high` fields are **unwind-state values**,
//! not insn addresses. A faithful end-to-end pipeline must walk the
//! `pIPtoStateMap` to translate state → address. For the MVP we surface
//! the state ids directly as `AddrRange` keys; the tests below feed
//! synthetic HIR bodies whose statement addresses align with those state
//! ids, which is enough to prove the loader→structurer wiring. Real PE
//! integration (a later task) will compose this with the IP-to-state
//! walk before handing regions to `wrap_seh_regions`.
//!
//! Handler-body extents are similarly under-determined: only the
//! `disp_of_handler` RVA of the funclet entry is known here. We use it
//! as a single-point range (`start == end`) which the lowering treats
//! as "any node at this address kicks off the catch". Funclet-extent
//! recovery is left to future work.

use unlace_ir::ssa::PrimitiveType;
use unlace_ir::types::Type;
use unlace_loader::seh::{CppEhCatch, CppEhTryRegion};

use crate::seh_lower::{AddrRange, SehCatchArm, SehHandler, SehRegion};

/// Map a slice of loader-side [`CppEhTryRegion`]s into structurer-side
/// [`SehRegion`]s ready for [`crate::seh_lower::wrap_seh_regions`].
///
/// One [`SehRegion`] is emitted per input try-block:
///   * `try_range` carries the unwind-state ids as `start`/`end` (see the
///     module docs for the address-range caveat).
///   * `handler` is a [`SehHandler::Catch`] with one [`SehCatchArm`] per
///     `catch` clause, preserving source order.
///   * Each arm's `ty` is [`Type::Struct { name, fields: vec![] }`] for a
///     resolved class name, or
///     [`crate::seh_lower::catch_all_type`] (the `PrimitiveType::Unknown`
///     sentinel) for `catch (...)` / unresolved descriptors.
///   * Each arm's `range` is the funclet entry RVA as a single-point
///     range.
pub fn cpp_eh_regions_to_seh(regions: &[CppEhTryRegion]) -> Vec<SehRegion> {
    regions
        .iter()
        .map(|r| SehRegion {
            try_range: AddrRange::new(r.try_low as u64, r.try_high as u64),
            handler: SehHandler::Catch(r.catches.iter().map(catch_to_arm).collect()),
        })
        .collect()
}

fn catch_to_arm(c: &CppEhCatch) -> SehCatchArm {
    let ty = match &c.type_name {
        Some(name) if !name.is_empty() => Type::Struct {
            name: name.clone(),
            fields: Vec::new(),
        },
        // Empty name or catch-all (`p_type == 0`) → `Unknown` sentinel.
        _ => Type::Primitive(PrimitiveType::Unknown),
    };
    // Funclet entry RVA used as a single-point range. The seh_lower
    // walker accepts `start == end` for one-insn handler bodies.
    let entry = c.handler.disp_of_handler as u64;
    SehCatchArm {
        ty,
        range: AddrRange::new(entry, entry),
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::{IrInsn, IrOp, Varnode};
    use unlace_loader::msvc_rtti::TypeDescriptor;
    use unlace_loader::seh::{
        FUNCINFO_MAGIC_X86, build_cpp_eh_regions, handler_type_size,
    };

    use crate::hir::HirNode;
    use crate::seh_lower::wrap_seh_regions;

    /// One-instruction statement at `addr` — borrowed from the existing
    /// `seh_lower` test helpers.
    fn stmt(addr: u64) -> HirNode {
        HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(0, 8),
            smallvec![Varnode::constant(0, 8)],
            addr,
        ))
    }

    /// Pack a x86 `FuncInfo` (28 bytes, magic 0x19930520).
    fn build_funcinfo_x86(
        n_try_blocks: u32,
        p_try_block_map: u32,
    ) -> Vec<u8> {
        let mut v = Vec::with_capacity(28);
        v.extend_from_slice(&FUNCINFO_MAGIC_X86.to_le_bytes());
        v.extend_from_slice(&0i32.to_le_bytes()); // max_state
        v.extend_from_slice(&0u32.to_le_bytes()); // p_unwind_map
        v.extend_from_slice(&n_try_blocks.to_le_bytes());
        v.extend_from_slice(&p_try_block_map.to_le_bytes());
        v.extend_from_slice(&0u32.to_le_bytes()); // n_ip_map_entries
        v.extend_from_slice(&0u32.to_le_bytes()); // p_ip_to_state_map
        v
    }

    /// Pack a single `TryBlockMapEntry` (20 bytes).
    fn build_tryblock(
        try_low: i32,
        try_high: i32,
        catch_high: i32,
        n_catches: i32,
        p_handler_array: u32,
    ) -> Vec<u8> {
        let mut v = Vec::with_capacity(20);
        v.extend_from_slice(&try_low.to_le_bytes());
        v.extend_from_slice(&try_high.to_le_bytes());
        v.extend_from_slice(&catch_high.to_le_bytes());
        v.extend_from_slice(&n_catches.to_le_bytes());
        v.extend_from_slice(&p_handler_array.to_le_bytes());
        v
    }

    /// Pack a single x86 `HandlerType` (16 bytes — no dispFrameOffset).
    fn build_handler_x86(
        adjectives: u32,
        p_type: u32,
        disp_catch_obj: i32,
        disp_of_handler: i32,
    ) -> Vec<u8> {
        let mut v = Vec::with_capacity(16);
        v.extend_from_slice(&adjectives.to_le_bytes());
        v.extend_from_slice(&p_type.to_le_bytes());
        v.extend_from_slice(&disp_catch_obj.to_le_bytes());
        v.extend_from_slice(&disp_of_handler.to_le_bytes());
        v
    }

    /// Synthetic buffer layout used by the tests:
    ///   `[0x00.. ]` — FuncInfo (28 bytes)
    ///   `[0x40.. ]` — try-block-map entries (20 bytes each)
    ///   `[0x80.. ]` — handler arrays (16 bytes per x86 handler)
    /// RVAs in test data are set equal to their offset, so the resolver
    /// is the identity function.
    fn id_rva_to_offset(rva: u32) -> Option<usize> {
        Some(rva as usize)
    }

    // -----------------------------------------------------------------
    // Test 1 — FuncInfo with 1 try-block / 1 handler → 1 TryCatch with
    // 1 catch_arm and the resolved type name.
    // -----------------------------------------------------------------
    #[test]
    fn test_one_try_one_handler_yields_one_trycatch() {
        let p_try_block_map: u32 = 0x40;
        let p_handler_array: u32 = 0x80;
        let p_type_descriptor: u32 = 0xC0; // arbitrary, name-resolver fakes lookup

        let mut data = build_funcinfo_x86(1, p_try_block_map);
        // Pad up to the try-block-map at offset 0x40.
        data.resize(p_try_block_map as usize, 0);
        data.extend(build_tryblock(
            /* try_low */ 0x1000,
            /* try_high */ 0x1001,
            /* catch_high */ 0x1002,
            /* n_catches */ 1,
            /* p_handler_array */ p_handler_array,
        ));
        // Pad up to the handler array at offset 0x80.
        data.resize(p_handler_array as usize, 0);
        data.extend(build_handler_x86(
            /* adjectives */ 0,
            /* p_type */ p_type_descriptor,
            /* disp_catch_obj */ 0,
            /* disp_of_handler */ 0x2000,
        ));

        // Resolver: when asked for our one descriptor, hand back a
        // `TypeDescriptor` carrying a class name.
        let (_fi, regions) = build_cpp_eh_regions(
            &data,
            0,
            id_rva_to_offset,
            |rva| {
                if rva == p_type_descriptor {
                    Some(TypeDescriptor {
                        name: "MyException".into(),
                    })
                } else {
                    None
                }
            },
        )
        .expect("FuncInfo should parse");
        assert_eq!(regions.len(), 1);
        assert_eq!(regions[0].catches.len(), 1);
        assert_eq!(regions[0].catches[0].type_name.as_deref(), Some("MyException"));

        // Now lower into HIR.
        let seh_regions = cpp_eh_regions_to_seh(&regions);
        assert_eq!(seh_regions.len(), 1);
        let mut body = vec![stmt(0x1000), stmt(0x1001), HirNode::Return(None)];
        let n = wrap_seh_regions(&mut body, &seh_regions);
        assert_eq!(n, 1, "exactly one region should lower");
        assert_eq!(body.len(), 2, "try-catch + return → 2 nodes");
        match &body[0] {
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                assert_eq!(try_body.len(), 2);
                assert_eq!(catch_arms.len(), 1, "exactly one catch arm");
                match &catch_arms[0].0 {
                    Type::Struct { name, fields } => {
                        assert_eq!(name, "MyException");
                        assert!(fields.is_empty());
                    }
                    other => panic!("expected Type::Struct for typed catch, got {other:?}"),
                }
            }
            other => panic!("expected TryCatch, got {other:?}"),
        }
    }

    // -----------------------------------------------------------------
    // Test 2 — FuncInfo with nested try-blocks → two TryCatch nodes,
    // one wrapping the other (the existing seh_lower walker recurses).
    // -----------------------------------------------------------------
    #[test]
    fn test_nested_try_blocks_lower_to_nested_trycatch() {
        let p_try_block_map: u32 = 0x40;
        let p_handler_outer: u32 = 0x80;
        let p_handler_inner: u32 = 0x90;

        // Outer try state range [0x3000..=0x3030], inner [0x3010..=0x3011].
        let mut data = build_funcinfo_x86(2, p_try_block_map);
        data.resize(p_try_block_map as usize, 0);
        data.extend(build_tryblock(0x3000, 0x3030, 0x3031, 1, p_handler_outer));
        data.extend(build_tryblock(0x3010, 0x3011, 0x3012, 1, p_handler_inner));
        data.resize(p_handler_outer as usize, 0);
        data.extend(build_handler_x86(0, 0xAA, 0, 0x4000));
        // 0x80 + 16 == 0x90, no padding needed.
        assert_eq!(data.len() as u32, p_handler_inner);
        data.extend(build_handler_x86(0, 0xBB, 0, 0x4100));

        let (_fi, regions) = build_cpp_eh_regions(
            &data,
            0,
            id_rva_to_offset,
            // Stub resolver — pretend descriptors are unresolvable so both
            // catches lower as catch-all. Doesn't matter for the nesting
            // check.
            |_rva| None,
        )
        .expect("FuncInfo should parse");
        assert_eq!(regions.len(), 2);

        let seh_regions = cpp_eh_regions_to_seh(&regions);
        // Body covers the outer try addresses plus the inner addresses inside it.
        let mut body = vec![
            stmt(0x3000),
            stmt(0x3010),
            stmt(0x3011),
            stmt(0x3020),
            stmt(0x3030),
            HirNode::Return(None),
        ];
        let n = wrap_seh_regions(&mut body, &seh_regions);
        assert_eq!(n, 2, "both regions should lower");
        // Outer TryCatch should be at body[0]; it must contain another
        // TryCatch somewhere within its try_body.
        match &body[0] {
            HirNode::TryCatch { try_body, .. } => {
                let has_inner = try_body
                    .iter()
                    .any(|n| matches!(n, HirNode::TryCatch { .. }));
                assert!(
                    has_inner,
                    "outer TryCatch should contain inner TryCatch: {:?}",
                    try_body
                );
            }
            other => panic!("expected outer TryCatch, got {other:?}"),
        }
    }

    // -----------------------------------------------------------------
    // Test 3 — FuncInfo with no try-blocks → no TryCatch emitted.
    // -----------------------------------------------------------------
    #[test]
    fn test_no_try_blocks_emits_no_trycatch() {
        let data = build_funcinfo_x86(0, 0);
        let (_fi, regions) = build_cpp_eh_regions(
            &data,
            0,
            id_rva_to_offset,
            |_rva| None,
        )
        .expect("FuncInfo should parse even with zero try-blocks");
        assert!(regions.is_empty(), "no try-blocks means no regions");

        let seh_regions = cpp_eh_regions_to_seh(&regions);
        assert!(seh_regions.is_empty());

        let mut body = vec![stmt(0x5000), stmt(0x5001), HirNode::Return(None)];
        let n = wrap_seh_regions(&mut body, &seh_regions);
        assert_eq!(n, 0);
        // Body must be untouched — no TryCatch anywhere.
        assert_eq!(body.len(), 3);
        for node in &body {
            assert!(
                !matches!(node, HirNode::TryCatch { .. }),
                "no TryCatch should be present"
            );
        }
    }

    /// Sanity-check that x86 handler size assumption matches the loader.
    #[test]
    fn handler_size_matches_x86_buffer_layout() {
        assert_eq!(handler_type_size(FUNCINFO_MAGIC_X86), 16);
    }
}
