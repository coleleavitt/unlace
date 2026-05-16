//! C++ vtable dispatch detection.
//!
//! Detects the single-pointer pattern used by C++ virtual calls and annotates
//! `CALLIND` (and tail-dispatch `BRANCHIND`) instructions that dispatch
//! through vtable slots.
//!
//! Pattern: `CALLIND(LOAD(LOAD(this + 0) + N))` where the vptr lives at
//! offset 0 of the object (C++ ABI convention — contrast with Rust trait
//! objects where the vtable pointer is at offset 8 in the fat pointer).
//! Slot index = N / 8.
//!
//! Tail-call shapes that compile to `jmp *(*(this) + N)` surface as the
//! same chain terminated by `BRANCHIND` instead of `CALLIND`; those are
//! recognised too (Itanium-ABI `virtual int Base::value()` forwarded
//! through a thunk is the canonical example).

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, TargetSet, VtableCallInfo};
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

const PTR_SIZE: u64 = 8;

/// Byte offset of the vptr within the object. C++ stores it at offset 0.
const VTABLE_PTR_OFFSET: u64 = 0;

pub struct CppVtablePass;

impl Pass for CppVtablePass {
    fn name(&self) -> &str {
        "cpp-vtable"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut found = BTreeMap::new();

        for (&bid, block) in &func.function.blocks {
            let insns = &block.insns;
            for (i, insn) in insns.iter().enumerate() {
                // The same vptr->method->dispatch chain compiles to a
                // `CALLIND` for normal virtual calls and to a `BRANCHIND`
                // for tail-jmp-via-vtable forwarders (`void use_base(Base*
                // b) { return b->value(); }` lowers to `jmp *(*rdi)` under
                // -O2). Both are virtual dispatches semantically.
                if !matches!(insn.op, IrOp::Callind | IrOp::Branchind) {
                    continue;
                }
                if let Some(info) = try_match_cpp_vtable(insns, i) {
                    found.insert((bid, i), info);
                }
            }
        }

        if found.is_empty() {
            return Ok(false);
        }

        // Stamp `TargetSet::VtableSlot` on every recognised virtual dispatch
        // so the C printer can emit `this->__vftable->method_N(args)` without
        // needing the class name. `CppMethodPass` (which runs afterwards) will
        // override entries it can name with the real class name.
        for (&(bid, idx), info) in &found {
            let slot_idx = u16::try_from(info.slot_index).unwrap_or(u16::MAX);
            // Only insert when there is not already a more-informative entry
            // (e.g. a VtableSlot with a non-empty class_name placed by a
            // previous run — the pass framework can run fixedpoint rounds).
            func.indirect_call_targets
                .entry((bid, idx))
                .or_insert_with(|| TargetSet::VtableSlot {
                    class_name: String::new(),
                    slot_idx,
                });
        }

        func.cpp_vtable_calls.extend(found);
        Ok(true)
    }
}

/// Match `CALLIND(LOAD(LOAD(this + 0) + N))`.
///
/// 1. CALLIND target comes from a LOAD (method pointer load).
/// 2. That LOAD's address is `vtable_ptr + offset` (or just vtable_ptr for slot 0).
/// 3. vtable_ptr comes from a LOAD whose address is `this + 0` (or just `this`).
fn try_match_cpp_vtable(insns: &[IrInsn], callind_idx: usize) -> Option<VtableCallInfo> {
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

    let method_addr_vn = load_address(method_load)?;

    // method_addr is either:
    //   (a) vtable_ptr + const_offset  (INT_ADD or PTRADD)
    //   (b) vtable_ptr directly (offset 0, i.e. first virtual method slot)
    let (vtable_vn, vtable_offset) = resolve_offset(insns, method_load_idx, &method_addr_vn)?;

    // vtable_offset must be pointer-aligned
    if vtable_offset % PTR_SIZE != 0 {
        return None;
    }

    // vtable_ptr must come from a LOAD — the vptr load: LOAD(this + 0)
    let (vtable_load_idx, vtable_load) = find_load_def(insns, method_load_idx, &vtable_vn)?;

    let vtable_addr_vn = load_address(vtable_load)?;

    // vtable_addr must be `this + 0` (offset 0) or just `this` directly
    let (base_vn, base_offset) = resolve_offset(insns, vtable_load_idx, &vtable_addr_vn)?;

    if base_offset != VTABLE_PTR_OFFSET {
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
fn load_address(load: &IrInsn) -> Option<Varnode> {
    match load.inputs.len() {
        1 => Some(load.inputs[0]),
        2.. => {
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
fn resolve_offset(insns: &[IrInsn], before: usize, vn: &Varnode) -> Option<(Varnode, u64)> {
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

/// Like [`find_def`], but also follows `COPY` chains so that:
/// ```text
/// v0 = LOAD(...)
/// v1 = COPY(v0)
/// ... LOAD(v1) ...    ← find_load_def sees LOAD(v0) here
/// ```
/// Returns the index and the resolved (LOAD) instruction together.
fn find_load_def<'a>(
    insns: &'a [IrInsn],
    before: usize,
    target: &Varnode,
) -> Option<(usize, &'a IrInsn)> {
    let mut vn = *target;
    let mut limit = before;
    loop {
        let idx = find_def(insns, limit, &vn)?;
        let insn = &insns[idx];
        if insn.op == IrOp::Load {
            return Some((idx, insn));
        }
        // Follow COPY one level.
        if insn.op == IrOp::Copy && insn.inputs.len() == 1 {
            vn = insns[idx].inputs[0];
            limit = idx;
        } else {
            return None;
        }
    }
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

    // ── C++ pattern: LOAD(this+0) → vtable; LOAD(vtable+16) → method; CALLIND(method) ──
    // Expected: vtable slot 2
    #[test]
    fn test_detect_cpp_vtable_dispatch() {
        let this_ptr = Varnode::reg(0, 8);
        let vtable_ptr = Varnode::unique(0, 8);
        let method_ptr = Varnode::unique(8, 8);
        let method_addr = Varnode::unique(16, 8);

        let insns = vec![
            // vtable_ptr = LOAD(ram, this_ptr)  — vptr at offset 0
            IrInsn::with_output(
                IrOp::Load,
                vtable_ptr,
                smallvec![Varnode::constant(1, 4), this_ptr],
                0x1000,
            ),
            // method_addr = vtable_ptr + 16
            IrInsn::with_output(
                IrOp::IntAdd,
                method_addr,
                smallvec![vtable_ptr, Varnode::constant(16, 8)],
                0x1008,
            ),
            // method_ptr = LOAD(ram, method_addr)
            IrInsn::with_output(
                IrOp::Load,
                method_ptr,
                smallvec![Varnode::constant(1, 4), method_addr],
                0x1010,
            ),
            // CALLIND(method_ptr)
            IrInsn::without_output(IrOp::Callind, smallvec![method_ptr], 0x1018),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let changed = CppVtablePass.run(&mut ssa).expect("pass succeeds");
        assert!(changed, "should detect C++ vtable dispatch");

        let key = (BlockId(0), 3); // CALLIND at insn index 3
        let info = ssa
            .cpp_vtable_calls
            .get(&key)
            .expect("vtable call recorded");
        assert_eq!(info.vtable_offset, 16);
        assert_eq!(info.slot_index, 2);
        assert_eq!(info.base_varnode.base, this_ptr);
    }

    // ── C++ slot 0: LOAD(this+0) → vtable; LOAD(vtable+0) → method; CALLIND(method) ──
    #[test]
    fn test_detect_cpp_vtable_slot_zero() {
        let this_ptr = Varnode::reg(0, 8);
        let vtable_ptr = Varnode::unique(0, 8);
        let method_ptr = Varnode::unique(8, 8);

        let insns = vec![
            // vtable_ptr = LOAD(ram, this_ptr)
            IrInsn::with_output(
                IrOp::Load,
                vtable_ptr,
                smallvec![Varnode::constant(1, 4), this_ptr],
                0x1000,
            ),
            // method_ptr = LOAD(ram, vtable_ptr)  — offset 0
            IrInsn::with_output(
                IrOp::Load,
                method_ptr,
                smallvec![Varnode::constant(1, 4), vtable_ptr],
                0x1008,
            ),
            // CALLIND(method_ptr)
            IrInsn::without_output(IrOp::Callind, smallvec![method_ptr], 0x1010),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let changed = CppVtablePass.run(&mut ssa).expect("pass succeeds");
        assert!(changed, "should detect C++ vtable slot 0");

        let key = (BlockId(0), 2);
        let info = ssa
            .cpp_vtable_calls
            .get(&key)
            .expect("vtable call recorded");
        assert_eq!(info.vtable_offset, 0);
        assert_eq!(info.slot_index, 0);
    }

    // ── Rust-style fat pointer (base+8) should NOT be detected by C++ pass ──
    #[test]
    fn test_rust_fat_pointer_not_detected() {
        let base = Varnode::reg(0, 8);
        let vtable_ptr = Varnode::unique(0, 8);
        let vtable_addr = Varnode::unique(8, 8);
        let method_ptr = Varnode::unique(16, 8);

        let insns = vec![
            // vtable_addr = base + 8  (Rust fat pointer layout)
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
            // method_ptr = LOAD(ram, vtable_ptr)
            IrInsn::with_output(
                IrOp::Load,
                method_ptr,
                smallvec![Varnode::constant(1, 4), vtable_ptr],
                0x1010,
            ),
            // CALLIND(method_ptr)
            IrInsn::without_output(IrOp::Callind, smallvec![method_ptr], 0x1018),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let changed = CppVtablePass.run(&mut ssa).expect("pass succeeds");
        assert!(
            !changed,
            "Rust fat pointer (offset 8) should not be detected by C++ vtable pass"
        );
        assert!(ssa.cpp_vtable_calls.is_empty());
    }

    // ── PTRADD variant: PTRADD(vtable, 2, 8) → offset 16, slot 2 ──
    #[test]
    fn test_cpp_vtable_via_ptradd() {
        let this_ptr = Varnode::reg(0, 8);
        let vtable_ptr = Varnode::unique(0, 8);
        let method_ptr = Varnode::unique(8, 8);
        let method_addr = Varnode::unique(16, 8);

        let insns = vec![
            IrInsn::with_output(
                IrOp::Load,
                vtable_ptr,
                smallvec![Varnode::constant(1, 4), this_ptr],
                0x1000,
            ),
            // PTRADD(vtable_ptr, 2, 8) → offset = 2 * 8 = 16
            IrInsn::with_output(
                IrOp::Ptradd,
                method_addr,
                smallvec![vtable_ptr, Varnode::constant(2, 8), Varnode::constant(8, 8)],
                0x1008,
            ),
            IrInsn::with_output(
                IrOp::Load,
                method_ptr,
                smallvec![Varnode::constant(1, 4), method_addr],
                0x1010,
            ),
            IrInsn::without_output(IrOp::Callind, smallvec![method_ptr], 0x1018),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let changed = CppVtablePass.run(&mut ssa).expect("pass succeeds");
        assert!(changed);

        let info = ssa.cpp_vtable_calls.get(&(BlockId(0), 3)).expect("found");
        assert_eq!(info.slot_index, 2);
        assert_eq!(info.vtable_offset, 16);
    }

    // ── Branchind variant: tail-jmp through the vtable (slot 0). ──
    //
    // `int use_base(Base* b) { return b->value(); }` lowers to
    //   mov  rax, [rdi]    ; vtable = LOAD(this)
    //   jmp  qword ptr [rax]  ; tail-jmp through slot 0
    // → `BRANCHIND` instead of `CALLIND`. Both should be recognised.
    #[test]
    fn test_detect_cpp_vtable_tail_jmp() {
        let this_ptr = Varnode::reg(0, 8);
        let vtable_ptr = Varnode::unique(0, 8);
        let method_ptr = Varnode::unique(8, 8);

        let insns = vec![
            IrInsn::with_output(
                IrOp::Load,
                vtable_ptr,
                smallvec![Varnode::constant(1, 4), this_ptr],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::Load,
                method_ptr,
                smallvec![Varnode::constant(1, 4), vtable_ptr],
                0x1008,
            ),
            // BRANCHIND(method_ptr) — tail-jmp through slot 0.
            IrInsn::without_output(IrOp::Branchind, smallvec![method_ptr], 0x1010),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let changed = CppVtablePass.run(&mut ssa).expect("pass succeeds");
        assert!(changed, "should detect tail-jmp through C++ vtable");

        let info = ssa
            .cpp_vtable_calls
            .get(&(BlockId(0), 2))
            .expect("tail-jmp vtable call recorded");
        assert_eq!(info.slot_index, 0);
        assert_eq!(info.vtable_offset, 0);

        // VtableSlot should also be stamped in indirect_call_targets.
        assert!(
            ssa.indirect_call_targets.contains_key(&(BlockId(0), 2)),
            "indirect_call_targets should have a VtableSlot entry"
        );
    }

    // ── COPY-chain: LOAD → COPY → LOAD → BRANCHIND. Tests that find_load_def
    //    follows COPY instructions so real-world `-O2` output (where the
    //    compiler inserts a COPY between the two LOADs) is still matched.
    //    This reproduces the `_Z8use_baseP4Base` pattern from cpp_vtable.elf.
    #[test]
    fn test_cpp_vtable_through_copy_chain() {
        let this_ptr = Varnode::reg(0, 8);
        let vtable_ptr = Varnode::unique(0, 8);
        let vtable_ptr_copy = Varnode::unique(32, 8); // COPY of vtable_ptr
        let method_ptr = Varnode::unique(8, 8);

        let insns = vec![
            // vtable_ptr = LOAD(ram, this_ptr)
            IrInsn::with_output(
                IrOp::Load,
                vtable_ptr,
                smallvec![Varnode::constant(1, 4), this_ptr],
                0x1000,
            ),
            // vtable_ptr_copy = COPY(vtable_ptr) — compiler-generated copy
            IrInsn::with_output(
                IrOp::Copy,
                vtable_ptr_copy,
                smallvec![vtable_ptr],
                0x1008,
            ),
            // method_ptr = LOAD(ram, vtable_ptr_copy) — load via the copy
            IrInsn::with_output(
                IrOp::Load,
                method_ptr,
                smallvec![Varnode::constant(1, 4), vtable_ptr_copy],
                0x1010,
            ),
            // BRANCHIND(method_ptr) — tail-jmp through slot 0.
            IrInsn::without_output(IrOp::Branchind, smallvec![method_ptr], 0x1018),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let changed = CppVtablePass.run(&mut ssa).expect("pass succeeds");
        assert!(
            changed,
            "should detect vtable tail-jmp through COPY chain"
        );

        let info = ssa
            .cpp_vtable_calls
            .get(&(BlockId(0), 3))
            .expect("vtable call recorded through COPY chain");
        assert_eq!(info.slot_index, 0);
        assert_eq!(info.vtable_offset, 0);
        assert_eq!(info.base_varnode.base, this_ptr);

        // VtableSlot stamped.
        assert!(
            ssa.indirect_call_targets.contains_key(&(BlockId(0), 3)),
            "indirect_call_targets should have VtableSlot"
        );
    }
}
