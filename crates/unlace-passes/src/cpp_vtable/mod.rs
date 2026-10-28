//! C++ vtable dispatch detection.
//!
//! Recognises the single-pointer pattern used by C++ virtual calls and
//! annotates the `CALLIND` (and tail-dispatch `BRANCHIND`) instructions that
//! dispatch through a vtable slot.
//!
//! Pattern: `CALLIND(LOAD(LOAD(obj + 0) + N))`. The vptr lives at offset 0
//! of the object (contrast with Rust trait objects, where the vtable pointer
//! is the second word of a fat pointer). Slot index = N / 8.
//!
//! The chain is followed through SSA definitions, so it may span blocks:
//! `-O2` code often loads the method pointer, compares it against a known
//! override (speculative devirtualization) and only dispatches on the
//! mismatch edge. Tail calls that compile to `jmp *(*(obj) + N)` end in
//! `BRANCHIND` instead of `CALLIND`.
//!
//! [`resolve_virtual_calls`] later names each dispatch from RTTI: the
//! receiver's static class and the method in that vtable slot.

mod naming;

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, TargetSet, VarnodeSlot, VtableCallInfo};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId};

use crate::pass::{Pass, PassError};

pub use naming::resolve_virtual_calls;

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
        let found = detect_dispatches(func);
        let before_targets = func.indirect_call_targets.clone();
        let before_calls = std::mem::take(&mut func.cpp_vtable_calls);
        stamp_dispatches(func, &found);
        func.cpp_vtable_calls = found;
        Ok(before_targets != func.indirect_call_targets || before_calls != func.cpp_vtable_calls)
    }
}

/// Every vtable dispatch in `func`, keyed by the dispatching instruction.
fn detect_dispatches(func: &SsaFunction) -> BTreeMap<(BlockId, usize), VtableCallInfo> {
    let defs = DefSites::new(func);
    let mut found = BTreeMap::new();
    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if !matches!(insn.op, IrOp::Callind | IrOp::Branchind) {
                continue;
            }
            if let Some(info) = defs.match_dispatch(bid, idx) {
                found.insert((bid, idx), info);
            }
        }
    }
    found
}

/// Record `found` as `TargetSet::VtableSlot` entries, replacing entries from
/// earlier rounds. Instruction indices shift as passes delete instructions,
/// so stale keys are dropped rather than trusted. A class or method name an
/// earlier round attached to the same dispatch is kept.
fn stamp_dispatches(func: &mut SsaFunction, found: &BTreeMap<(BlockId, usize), VtableCallInfo>) {
    let mut previous = BTreeMap::new();
    func.indirect_call_targets.retain(|&key, target| {
        if let TargetSet::VtableSlot { .. } = target {
            previous.insert(key, target.clone());
            false
        } else {
            true
        }
    });
    for (&key, info) in found {
        let slot_idx = u16::try_from(info.slot_index).unwrap_or(u16::MAX);
        let receiver = Some(info.base_varnode);
        let (class_name, method) = match previous.remove(&key) {
            Some(TargetSet::VtableSlot {
                receiver: prev_receiver,
                class_name,
                slot_idx: prev_slot,
                method,
            }) if prev_receiver == receiver && prev_slot == slot_idx => (class_name, method),
            _ => (String::new(), None),
        };
        func.indirect_call_targets.insert(
            key,
            TargetSet::VtableSlot {
                receiver,
                class_name,
                slot_idx,
                method,
            },
        );
    }
}

/// SSA definition sites of one function, for walking value chains across
/// blocks.
struct DefSites<'a> {
    func: &'a SsaFunction,
    sites: BTreeMap<SsaVarnode, (BlockId, usize)>,
}

impl<'a> DefSites<'a> {
    fn new(func: &'a SsaFunction) -> Self {
        let sites = func
            .var_map
            .iter()
            .filter(|((_, _, slot), _)| matches!(slot, VarnodeSlot::Output))
            .map(|(&(bid, idx, _), &sv)| (sv, (bid, idx)))
            .collect();
        Self { func, sites }
    }

    fn input(&self, bid: BlockId, idx: usize, input: usize) -> Option<SsaVarnode> {
        self.func
            .var_map
            .get(&(bid, idx, VarnodeSlot::Input(input)))
            .copied()
    }

    fn def(&self, sv: SsaVarnode) -> Option<(BlockId, usize, &'a IrInsn)> {
        let &(bid, idx) = self.sites.get(&sv)?;
        let insn = self.func.function.blocks.get(&bid)?.insns.get(idx)?;
        Some((bid, idx, insn))
    }

    /// Follow `COPY` chains back to the value they forward.
    fn origin(&self, mut sv: SsaVarnode) -> SsaVarnode {
        // SSA copy chains are acyclic; the bound only guards malformed IR.
        for _ in 0..32 {
            let Some((bid, idx, insn)) = self.def(sv) else {
                break;
            };
            if insn.op != IrOp::Copy || insn.inputs.len() != 1 {
                break;
            }
            let Some(src) = self.input(bid, idx, 0) else {
                break;
            };
            sv = src;
        }
        sv
    }

    /// The address `sv` was loaded from, when `sv` is the result of a `LOAD`.
    fn loaded_from(&self, sv: SsaVarnode) -> Option<SsaVarnode> {
        let (bid, idx, insn) = self.def(self.origin(sv))?;
        if insn.op != IrOp::Load {
            return None;
        }
        // `LOAD space, addr` or `LOAD addr`.
        let addr_input = match insn.inputs.as_slice() {
            [space, _] if space.space == SpaceId::Const => 1,
            [_] => 0,
            _ => return None,
        };
        self.input(bid, idx, addr_input)
    }

    /// Split `sv` into `base + constant`; a plain value is `sv + 0`.
    fn base_offset(&self, sv: SsaVarnode) -> Option<(SsaVarnode, u64)> {
        let sv = self.origin(sv);
        if sv.base.space == SpaceId::Const {
            return None;
        }
        let Some((bid, idx, insn)) = self.def(sv) else {
            return Some((sv, 0));
        };
        let constant = |k: usize| {
            insn.inputs
                .get(k)
                .filter(|vn| vn.space == SpaceId::Const)
                .map(|vn| vn.offset)
        };
        let split = match insn.op {
            IrOp::IntAdd if insn.inputs.len() == 2 => match (constant(0), constant(1)) {
                (None, Some(off)) => self.input(bid, idx, 0).map(|base| (base, off)),
                (Some(off), None) => self.input(bid, idx, 1).map(|base| (base, off)),
                _ => None,
            },
            IrOp::Ptradd if insn.inputs.len() >= 2 => match (constant(0), constant(1)) {
                (None, Some(index)) => {
                    let elem_size = constant(2).unwrap_or(1);
                    self.input(bid, idx, 0)
                        .map(|base| (base, index.wrapping_mul(elem_size)))
                }
                _ => None,
            },
            _ => None,
        };
        Some(split.map_or((sv, 0), |(base, off)| (self.origin(base), off)))
    }

    /// Match `CALLIND/BRANCHIND(LOAD(LOAD(obj + 0) + N))` at `(bid, idx)`.
    fn match_dispatch(&self, bid: BlockId, idx: usize) -> Option<VtableCallInfo> {
        let target = self.input(bid, idx, 0)?;
        let slot_addr = self.loaded_from(target)?;
        let (vptr, vtable_offset) = self.base_offset(slot_addr)?;
        if vtable_offset % PTR_SIZE != 0 {
            return None;
        }
        let vptr_addr = self.loaded_from(vptr)?;
        let (object, vptr_offset) = self.base_offset(vptr_addr)?;
        if vptr_offset != VTABLE_PTR_OFFSET {
            return None;
        }
        Some(VtableCallInfo {
            base_varnode: object,
            vtable_offset,
            slot_index: usize::try_from(vtable_offset / PTR_SIZE).ok()?,
        })
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
            IrInsn::with_output(IrOp::Copy, vtable_ptr_copy, smallvec![vtable_ptr], 0x1008),
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
        assert!(changed, "should detect vtable tail-jmp through COPY chain");

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

    // ── Speculative devirtualization: the method pointer is loaded in one
    //    block and dispatched from another. ──
    #[test]
    fn test_cpp_vtable_dispatch_across_blocks() {
        let this_ptr = Varnode::reg(56, 8);
        let vtable_ptr = Varnode::unique(0, 8);
        let method_ptr = Varnode::unique(8, 8);

        let mut load_block = BasicBlock::new(BlockId(0));
        load_block.insns = vec![
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
                0x1004,
            ),
            IrInsn::without_output(IrOp::Branch, smallvec![], 0x1008),
        ];
        load_block.successors.push(BlockId(1));
        let mut dispatch_block = BasicBlock::new(BlockId(1));
        dispatch_block.insns = vec![IrInsn::without_output(
            IrOp::Branchind,
            smallvec![method_ptr],
            0x1010,
        )];
        let mut func = Function::new("test", BlockId(0), 0x1000);
        func.insert_block(load_block);
        func.insert_block(dispatch_block);
        let mut ssa = build_ssa(func);

        assert!(CppVtablePass.run(&mut ssa).expect("pass succeeds"));
        let info = ssa
            .cpp_vtable_calls
            .get(&(BlockId(1), 0))
            .expect("cross-block dispatch recorded");
        assert_eq!(info.slot_index, 0);
        assert_eq!(info.base_varnode.base, this_ptr);
        assert!(
            !CppVtablePass.run(&mut ssa).expect("pass succeeds"),
            "a second run over unchanged IR reports no change"
        );
    }
}
