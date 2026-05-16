//! Rust trait object vtable dispatch detection.
//!
//! Detects the fat pointer pattern `(data_ptr, vtable_ptr)` used by Rust
//! trait objects and annotates `CALLIND` instructions that dispatch through
//! vtable slots.
//!
//! Pattern: `CALLIND(LOAD(LOAD(base + 8) + N))` where N is a vtable slot
//! offset (0, 8, 16, 24, ...). Slot index = N / 8.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VtableCallInfo};
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

const PTR_SIZE: u64 = 8;

pub struct RustVtablePass;

impl Pass for RustVtablePass {
    fn name(&self) -> &str {
        "rust-vtable"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut found = BTreeMap::new();

        for (&bid, block) in &func.function.blocks {
            let insns = &block.insns;
            for (i, insn) in insns.iter().enumerate() {
                if insn.op != IrOp::Callind {
                    continue;
                }
                if let Some(info) = try_match_vtable_dispatch(insns, i, bid, &func.var_map) {
                    found.insert((bid, i), info);
                }
            }
        }

        if found.is_empty() {
            return Ok(false);
        }

        func.vtable_calls.extend(found);
        Ok(true)
    }
}

fn try_match_vtable_dispatch(
    insns: &[IrInsn],
    callind_idx: usize,
    _bid: unlace_ir::BlockId,
    _var_map: &BTreeMap<(unlace_ir::BlockId, usize, unlace_ir::ssa::VarnodeSlot), SsaVarnode>,
) -> Option<VtableCallInfo> {
    let callind = &insns[callind_idx];
    if callind.inputs.is_empty() {
        return None;
    }
    let target_vn = callind.inputs[0];

    // target must come from a LOAD — the method pointer load: LOAD(vtable + offset)
    let method_load_idx = find_def(insns, callind_idx, &target_vn)?;
    let method_load = &insns[method_load_idx];
    if method_load.op != IrOp::Load {
        return None;
    }

    // LOAD has inputs: [space_id, address]. We want the address (input index 1
    // for two-input LOADs, or index 0 for single-input LOADs depending on IR).
    let method_addr_vn = load_address(method_load)?;

    // method_addr is either:
    //   (a) vtable_ptr + const_offset  (INT_ADD or PTRADD)
    //   (b) vtable_ptr directly (offset 0, i.e. drop_in_place slot)
    let (vtable_vn, vtable_offset) = resolve_offset(insns, method_load_idx, &method_addr_vn)?;

    // vtable_offset must be pointer-aligned
    if vtable_offset % PTR_SIZE != 0 {
        return None;
    }

    // vtable_ptr must come from a LOAD — the vtable pointer load: LOAD(base + 8)
    let vtable_load_idx = find_def(insns, method_load_idx, &vtable_vn)?;
    let vtable_load = &insns[vtable_load_idx];
    if vtable_load.op != IrOp::Load {
        return None;
    }

    let vtable_addr_vn = load_address(vtable_load)?;

    // vtable_addr must be base + PTR_SIZE (the second field of the fat pointer)
    let (base_vn, base_offset) = resolve_offset(insns, vtable_load_idx, &vtable_addr_vn)?;

    if base_offset != PTR_SIZE {
        return None;
    }

    let slot_index = (vtable_offset / PTR_SIZE) as usize;

    let base_varnode = SsaVarnode {
        base: base_vn,
        version: 0,
    };

    Some(VtableCallInfo {
        base_varnode,
        vtable_offset,
        slot_index,
    })
}

/// Extract the address operand from a LOAD instruction.
///
/// In the unlace IR, LOAD takes `[space_id, address]` (2 inputs) or
/// `[address]` (1 input). Return the address varnode.
fn load_address(load: &IrInsn) -> Option<Varnode> {
    match load.inputs.len() {
        1 => Some(load.inputs[0]),
        2.. => {
            // input[0] is the space id constant, input[1] is the actual address
            if load.inputs[0].space == SpaceId::Const {
                Some(load.inputs[1])
            } else {
                Some(load.inputs[0])
            }
        }
        _ => None,
    }
}

/// Resolve a varnode into (base_varnode, constant_offset).
///
/// If `vn` is defined by INT_ADD(x, const) or PTRADD(x, const, _), returns
/// `(x, const)`. If `vn` is defined by INT_ADD(const, x), returns `(x, const)`.
/// Otherwise returns `(vn, 0)` — the varnode itself is the base with offset 0.
fn resolve_offset(insns: &[IrInsn], before: usize, vn: &Varnode) -> Option<(Varnode, u64)> {
    // If the varnode is itself a constant, it can't be a pointer base
    if vn.space == SpaceId::Const {
        return None;
    }

    if let Some(def_idx) = find_def(insns, before, vn) {
        let def = &insns[def_idx];
        match def.op {
            IrOp::IntAdd if def.inputs.len() == 2 => {
                let (a, b) = (def.inputs[0], def.inputs[1]);
                if b.space == SpaceId::Const && a.space != SpaceId::Const {
                    return Some((a, b.offset));
                }
                if a.space == SpaceId::Const && b.space != SpaceId::Const {
                    return Some((b, a.offset));
                }
            }
            IrOp::Ptradd if def.inputs.len() >= 2 => {
                let (base, idx) = (def.inputs[0], def.inputs[1]);
                if idx.space == SpaceId::Const && base.space != SpaceId::Const {
                    // PTRADD(base, idx, elem_size) — effective offset = idx * elem_size
                    let elem_size =
                        if def.inputs.len() >= 3 && def.inputs[2].space == SpaceId::Const {
                            def.inputs[2].offset
                        } else {
                            1
                        };
                    return Some((base, idx.offset * elem_size));
                }
            }
            _ => {}
        }
    }

    // No offset — the varnode itself is the base at offset 0
    Some((*vn, 0))
}

fn find_def(insns: &[IrInsn], before: usize, target: &Varnode) -> Option<usize> {
    for j in (0..before).rev() {
        if let Some(out) = insns[j].output {
            if out == *target {
                return Some(j);
            }
        }
    }
    None
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
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

    // ── Pattern: LOAD(base+8) → vtable; LOAD(vtable+24) → method; CALLIND(method) ──
    // Expected: vtable slot 3 (first trait method)
    #[test]
    fn test_detect_vtable_dispatch() {
        let base = Varnode::reg(0, 8);
        let vtable_ptr = Varnode::unique(0, 8);
        let vtable_addr = Varnode::unique(8, 8);
        let method_ptr = Varnode::unique(16, 8);
        let method_addr = Varnode::unique(24, 8);

        let insns = vec![
            // vtable_addr = base + 8
            IrInsn::with_output(
                IrOp::IntAdd,
                vtable_addr,
                smallvec![base, Varnode::constant(8, 8)],
                0x1000,
            ),
            // vtable_ptr = LOAD(ram, vtable_addr)
            IrInsn::with_output(
                IrOp::Load,
                vtable_ptr,
                smallvec![Varnode::constant(1, 4), vtable_addr],
                0x1008,
            ),
            // method_addr = vtable_ptr + 24
            IrInsn::with_output(
                IrOp::IntAdd,
                method_addr,
                smallvec![vtable_ptr, Varnode::constant(24, 8)],
                0x1010,
            ),
            // method_ptr = LOAD(ram, method_addr)
            IrInsn::with_output(
                IrOp::Load,
                method_ptr,
                smallvec![Varnode::constant(1, 4), method_addr],
                0x1018,
            ),
            // CALLIND(method_ptr)
            IrInsn::without_output(IrOp::Callind, smallvec![method_ptr], 0x1020),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let changed = RustVtablePass.run(&mut ssa).expect("pass succeeds");
        assert!(changed, "should detect vtable dispatch");

        let key = (BlockId(0), 4); // CALLIND is at insn index 4
        let info = ssa.vtable_calls.get(&key).expect("vtable call recorded");
        assert_eq!(info.vtable_offset, 24);
        assert_eq!(info.slot_index, 3);
        assert_eq!(info.base_varnode.base, base);
    }

    // ── Pattern: LOAD(base+8) → vtable; LOAD(vtable+0) → drop; CALLIND(drop) ──
    // Expected: vtable slot 0 (drop_in_place)
    #[test]
    fn test_detect_drop_call() {
        let base = Varnode::reg(0, 8);
        let vtable_ptr = Varnode::unique(0, 8);
        let vtable_addr = Varnode::unique(8, 8);
        let drop_fn = Varnode::unique(16, 8);

        let insns = vec![
            // vtable_addr = base + 8
            IrInsn::with_output(
                IrOp::IntAdd,
                vtable_addr,
                smallvec![base, Varnode::constant(8, 8)],
                0x1000,
            ),
            // vtable_ptr = LOAD(ram, vtable_addr)
            IrInsn::with_output(
                IrOp::Load,
                vtable_ptr,
                smallvec![Varnode::constant(1, 4), vtable_addr],
                0x1008,
            ),
            // drop_fn = LOAD(ram, vtable_ptr)  — offset 0, no INT_ADD needed
            IrInsn::with_output(
                IrOp::Load,
                drop_fn,
                smallvec![Varnode::constant(1, 4), vtable_ptr],
                0x1010,
            ),
            // CALLIND(drop_fn)
            IrInsn::without_output(IrOp::Callind, smallvec![drop_fn], 0x1018),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let changed = RustVtablePass.run(&mut ssa).expect("pass succeeds");
        assert!(changed, "should detect drop vtable call");

        let key = (BlockId(0), 3);
        let info = ssa.vtable_calls.get(&key).expect("vtable call recorded");
        assert_eq!(info.vtable_offset, 0);
        assert_eq!(info.slot_index, 0);
    }

    // ── CALLIND with target not from double-LOAD pattern → not detected ──
    #[test]
    fn test_no_vtable_direct_callind() {
        let fn_ptr = Varnode::reg(0, 8);

        let insns = vec![
            // CALLIND(fn_ptr) — directly from a register, no LOAD chain
            IrInsn::without_output(IrOp::Callind, smallvec![fn_ptr], 0x1000),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let changed = RustVtablePass.run(&mut ssa).expect("pass succeeds");
        assert!(
            !changed,
            "should not detect vtable dispatch for direct register callind"
        );
        assert!(ssa.vtable_calls.is_empty());
    }

    // ── CALLIND(LOAD(addr)) with only one LOAD → not detected ──
    #[test]
    fn test_no_vtable_single_load() {
        let addr = Varnode::reg(0, 8);
        let fn_ptr = Varnode::unique(0, 8);

        let insns = vec![
            // fn_ptr = LOAD(ram, addr)
            IrInsn::with_output(
                IrOp::Load,
                fn_ptr,
                smallvec![Varnode::constant(1, 4), addr],
                0x1000,
            ),
            // CALLIND(fn_ptr)
            IrInsn::without_output(IrOp::Callind, smallvec![fn_ptr], 0x1008),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let changed = RustVtablePass.run(&mut ssa).expect("pass succeeds");
        assert!(
            !changed,
            "single LOAD indirection should not be detected as vtable"
        );
        assert!(ssa.vtable_calls.is_empty());
    }

    // ── Slot index calculation: offset 24 → slot 3, offset 32 → slot 4 ──
    #[test]
    #[allow(clippy::erasing_op)] // `0/8 == 0` is the documented slot-0 case.
    fn test_vtable_slot_index_calculation() {
        // Slot 3 (offset 24)
        assert_eq!(24_u64 / 8, 3);
        // Slot 4 (offset 32)
        assert_eq!(32_u64 / 8, 4);
        // Slot 0 (offset 0) — drop_in_place
        assert_eq!(0_u64 / 8, 0);
        // Slot 1 (offset 8) — size
        assert_eq!(8_u64 / 8, 1);
        // Slot 2 (offset 16) — align
        assert_eq!(16_u64 / 8, 2);

        // Full integration: build a vtable dispatch for slot 4 (offset 32)
        let base = Varnode::reg(0, 8);
        let vtable_ptr = Varnode::unique(0, 8);
        let vtable_addr = Varnode::unique(8, 8);
        let method_ptr = Varnode::unique(16, 8);
        let method_addr = Varnode::unique(24, 8);

        let insns = vec![
            IrInsn::with_output(
                IrOp::IntAdd,
                vtable_addr,
                smallvec![base, Varnode::constant(8, 8)],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::Load,
                vtable_ptr,
                smallvec![Varnode::constant(1, 4), vtable_addr],
                0x1008,
            ),
            IrInsn::with_output(
                IrOp::IntAdd,
                method_addr,
                smallvec![vtable_ptr, Varnode::constant(32, 8)],
                0x1010,
            ),
            IrInsn::with_output(
                IrOp::Load,
                method_ptr,
                smallvec![Varnode::constant(1, 4), method_addr],
                0x1018,
            ),
            IrInsn::without_output(IrOp::Callind, smallvec![method_ptr], 0x1020),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let changed = RustVtablePass.run(&mut ssa).expect("pass succeeds");
        assert!(changed);

        let info = ssa.vtable_calls.get(&(BlockId(0), 4)).expect("found");
        assert_eq!(info.slot_index, 4);
        assert_eq!(info.vtable_offset, 32);
    }

    // ── Misaligned vtable offset → not detected ──
    #[test]
    fn test_misaligned_vtable_offset_rejected() {
        let base = Varnode::reg(0, 8);
        let vtable_ptr = Varnode::unique(0, 8);
        let vtable_addr = Varnode::unique(8, 8);
        let method_ptr = Varnode::unique(16, 8);
        let method_addr = Varnode::unique(24, 8);

        let insns = vec![
            IrInsn::with_output(
                IrOp::IntAdd,
                vtable_addr,
                smallvec![base, Varnode::constant(8, 8)],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::Load,
                vtable_ptr,
                smallvec![Varnode::constant(1, 4), vtable_addr],
                0x1008,
            ),
            // Misaligned offset: 13 is not a multiple of 8
            IrInsn::with_output(
                IrOp::IntAdd,
                method_addr,
                smallvec![vtable_ptr, Varnode::constant(13, 8)],
                0x1010,
            ),
            IrInsn::with_output(
                IrOp::Load,
                method_ptr,
                smallvec![Varnode::constant(1, 4), method_addr],
                0x1018,
            ),
            IrInsn::without_output(IrOp::Callind, smallvec![method_ptr], 0x1020),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let changed = RustVtablePass.run(&mut ssa).expect("pass succeeds");
        assert!(!changed);
        assert!(ssa.vtable_calls.is_empty());
    }

    // ── PTRADD variant: PTRADD(vtable, 3, 8) → offset 24, slot 3 ──
    #[test]
    fn test_vtable_via_ptradd() {
        let base = Varnode::reg(0, 8);
        let vtable_ptr = Varnode::unique(0, 8);
        let vtable_addr = Varnode::unique(8, 8);
        let method_ptr = Varnode::unique(16, 8);
        let method_addr = Varnode::unique(24, 8);

        let insns = vec![
            IrInsn::with_output(
                IrOp::IntAdd,
                vtable_addr,
                smallvec![base, Varnode::constant(8, 8)],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::Load,
                vtable_ptr,
                smallvec![Varnode::constant(1, 4), vtable_addr],
                0x1008,
            ),
            // PTRADD(vtable_ptr, 3, 8) → offset = 3 * 8 = 24
            IrInsn::with_output(
                IrOp::Ptradd,
                method_addr,
                smallvec![vtable_ptr, Varnode::constant(3, 8), Varnode::constant(8, 8)],
                0x1010,
            ),
            IrInsn::with_output(
                IrOp::Load,
                method_ptr,
                smallvec![Varnode::constant(1, 4), method_addr],
                0x1018,
            ),
            IrInsn::without_output(IrOp::Callind, smallvec![method_ptr], 0x1020),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let changed = RustVtablePass.run(&mut ssa).expect("pass succeeds");
        assert!(changed);

        let info = ssa.vtable_calls.get(&(BlockId(0), 4)).expect("found");
        assert_eq!(info.slot_index, 3);
        assert_eq!(info.vtable_offset, 24);
    }
}
