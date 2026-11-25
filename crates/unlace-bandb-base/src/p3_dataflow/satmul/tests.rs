//! Tests for `RuleSaturatedMul` (unlace `satmul`): the `seto; neg; or` and threshold
//! shapes fold to `saturated_mul`, and the gate, the polarity and the bound are checked.

use std::rc::Rc;
use std::sync::atomic::{AtomicU64, Ordering};

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, FspecSpace, IopSpace, UniqueSpace, addrspace_flags,
    spacetype,
};
use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

use super::*;
use crate::action::Rule;
use crate::context::{ArchContext, VarnodeId};
use crate::dtype::{Datatype, type_metatype};
use crate::varnode::{DefOpInfo, VarnodeBank};

fn build_manager() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(IopSpace::new(2))).unwrap();
    m.insert_space(Rc::new(FspecSpace::new(3))).unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        4,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    m
}

fn build_fd(on: bool) -> Funcdata {
    let manage = build_manager();
    let mut ctx = ArchContext::new(manage);
    ctx.unlace_options.set(SatMul(on));
    let glb = Rc::new(ctx);
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap()
}

fn unk(size: int4) -> Rc<Datatype> {
    Rc::new(Datatype::new(size, type_metatype::TYPE_UNKNOWN))
}

fn no_replace()
-> impl FnMut(&mut VarnodeBank, VarnodeId, VarnodeId) -> unlace_base::error::UnlaceResult<()> {
    |_: &mut VarnodeBank, _: VarnodeId, _: VarnodeId| Ok(())
}

/// A formal input `n` at `off` in ram: a free varnode may have only one
/// descendant, and `n` is read by several ops (and gains the call input).
fn formal_input(fd: &mut Funcdata, off: u64, size: int4) -> VarnodeId {
    let ram = Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap());
    let vn = fd.new_varnode(size, &Address::new(ram, off), None);
    fd.set_input_varnode(vn).unwrap()
}

/// `out = opc(inputs)` at a fresh address, `out` a new unique of `size` bytes.
fn emit(fd: &mut Funcdata, opc: OpCode, inputs: &[VarnodeId], size: int4) -> (OpId, VarnodeId) {
    let ram = Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap());
    static NEXT: AtomicU64 = AtomicU64::new(0x100);
    let off = NEXT.fetch_add(4, Ordering::Relaxed);
    let op = fd
        .obank_mut()
        .create_at(inputs.len() as int4, Address::new(ram, off));
    fd.obank_mut().mark_alive(op);
    fd.obank_mut()
        .change_opcode(op, crate::typeop::type_op_for(opc));
    for (slot, &vn) in inputs.iter().enumerate() {
        fd.vbank_mut().add_descend(vn, op).unwrap();
        fd.obank_mut()
            .get_mut(op)
            .unwrap()
            .set_input(Some(vn), slot as int4);
    }
    let out = fd.new_unique(size, Some(unk(size)));
    let seq = fd.obank().get(op).unwrap().get_seq_num().clone();
    let info = DefOpInfo {
        id: op,
        seqnum: seq,
    };
    let out = fd
        .vbank_mut()
        .set_def(out, info, &mut no_replace())
        .unwrap();
    fd.obank_mut().get_mut(op).unwrap().set_output(Some(out));
    (op, out)
}

/// `lo | -zext(guard)` over `n * 4` at 8 bytes; `guard` builds the flag from
/// `(n, lo, P)`. Returns the OR and `n`.
fn build_or(
    fd: &mut Funcdata,
    guard: impl Fn(&mut Funcdata, VarnodeId, VarnodeId) -> VarnodeId,
    wide_low: bool,
) -> (OpId, VarnodeId) {
    let n = formal_input(fd, 0x2000, 8);
    let (_, zn) = emit(fd, OpCode::CPUI_INT_ZEXT, &[n], 16);
    let four = fd.new_constant(16, 4);
    let (_, p) = emit(fd, OpCode::CPUI_INT_MULT, &[zn, four], 16);
    let lo = if wide_low {
        let zero = fd.new_constant(4, 0);
        emit(fd, OpCode::CPUI_SUBPIECE, &[p, zero], 8).1
    } else {
        let four8 = fd.new_constant(8, 4);
        emit(fd, OpCode::CPUI_INT_MULT, &[n, four8], 8).1
    };
    let flag = guard(fd, n, p);
    let (_, z) = emit(fd, OpCode::CPUI_INT_ZEXT, &[flag], 8);
    let (_, m) = emit(fd, OpCode::CPUI_INT_2COMP, &[z], 8);
    let (op, _) = emit(fd, OpCode::CPUI_INT_OR, &[lo, m], 8);
    (op, n)
}

fn high_half_nonzero(fd: &mut Funcdata, _n: VarnodeId, p: VarnodeId) -> VarnodeId {
    let eight = fd.new_constant(4, 8);
    let (_, hi) = emit(fd, OpCode::CPUI_SUBPIECE, &[p, eight], 8);
    let zero = fd.new_constant(8, 0);
    emit(fd, OpCode::CPUI_INT_NOTEQUAL, &[hi, zero], 1).1
}

fn high_half_zero(fd: &mut Funcdata, _n: VarnodeId, p: VarnodeId) -> VarnodeId {
    let eight = fd.new_constant(4, 8);
    let (_, hi) = emit(fd, OpCode::CPUI_SUBPIECE, &[p, eight], 8);
    let zero = fd.new_constant(8, 0);
    emit(fd, OpCode::CPUI_INT_EQUAL, &[hi, zero], 1).1
}

fn threshold(bound: u64) -> impl Fn(&mut Funcdata, VarnodeId, VarnodeId) -> VarnodeId {
    move |fd: &mut Funcdata, n: VarnodeId, _p: VarnodeId| {
        let k = fd.new_constant(8, bound);
        emit(fd, OpCode::CPUI_INT_LESS, &[k, n], 1).1
    }
}

fn assert_folded(fd: &Funcdata, op: OpId, n: VarnodeId) {
    let o = fd.obank().get(op).unwrap();
    assert_eq!(o.code(), OpCode::CPUI_CALLOTHER);
    assert_eq!(o.num_input(), 3);
    let value = |slot: int4| {
        fd.vbank()
            .get(o.get_in(slot).unwrap())
            .unwrap()
            .get_offset()
    };
    assert_eq!(value(0), BUILTIN_SATURATED_MUL as u64);
    assert_eq!(o.get_in(1), Some(n));
    assert_eq!(value(2), 4);
}

#[test]
fn seto_neg_or_over_the_high_half_folds() {
    let mut fd = build_fd(true);
    let (op, n) = build_or(&mut fd, high_half_nonzero, true);
    assert_eq!(RuleSaturatedMul::new("analysis").apply_op(op, &mut fd), 1);
    assert_folded(&fd, op, n);
}

#[test]
fn narrow_low_half_and_threshold_guard_fold() {
    let mut fd = build_fd(true);
    let (op, n) = build_or(&mut fd, threshold(u64::MAX / 4), false);
    assert_eq!(RuleSaturatedMul::new("analysis").apply_op(op, &mut fd), 1);
    assert_folded(&fd, op, n);
}

#[test]
fn wrong_threshold_declines() {
    let mut fd = build_fd(true);
    let (op, _) = build_or(&mut fd, threshold(u64::MAX / 4 - 1), false);
    assert_eq!(RuleSaturatedMul::new("analysis").apply_op(op, &mut fd), 0);
    assert_eq!(fd.obank().get(op).unwrap().code(), OpCode::CPUI_INT_OR);
}

#[test]
fn mask_on_the_no_overflow_outcome_declines() {
    let mut fd = build_fd(true);
    let (op, _) = build_or(&mut fd, high_half_zero, true);
    assert_eq!(RuleSaturatedMul::new("analysis").apply_op(op, &mut fd), 0);
    assert_eq!(fd.obank().get(op).unwrap().code(), OpCode::CPUI_INT_OR);
}

#[test]
fn option_off_leaves_the_or() {
    let mut fd = build_fd(false);
    let (op, _) = build_or(&mut fd, high_half_nonzero, true);
    assert_eq!(RuleSaturatedMul::new("analysis").apply_op(op, &mut fd), 0);
    assert_eq!(fd.obank().get(op).unwrap().code(), OpCode::CPUI_INT_OR);
}

#[test]
fn guard_bounds_match_the_constant_factor() {
    let mut fd = build_fd(true);
    let n = Factor::Var(fd.new_unique(4, Some(unk(4))));
    let g = Guard::Above(n, u64::from(u32::MAX) / 12);
    assert!(guards_product(g, n, Factor::Const(12), 4));
    assert!(guards_product(g, Factor::Const(12), n, 4));
    assert!(!guards_product(g, n, Factor::Const(12), 8));
    let wide = Guard::Wide(n, Factor::Const(4), 8);
    assert!(guards_product(wide, Factor::Const(4), n, 8));
    assert!(!guards_product(wide, n, Factor::Const(8), 8));
}
