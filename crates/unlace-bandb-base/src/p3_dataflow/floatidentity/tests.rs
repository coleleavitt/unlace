//! Tests for `RuleFloatIdentity` (unlace `floatidentity`): the zero and one constant
//! folds, the negation folds, the `x + (+0.0)` decline and the option gate.

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
    let mut ctx = ArchContext::new(build_manager());
    ctx.nan_ignore_compare = true;
    ctx.unlace_options.set(FloatIdentity(on));
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
    let out = fd
        .vbank_mut()
        .set_def(
            out,
            DefOpInfo {
                id: op,
                seqnum: seq,
            },
            &mut no_replace(),
        )
        .unwrap();
    fd.obank_mut().get_mut(op).unwrap().set_output(Some(out));
    (op, out)
}

fn fire(fd: &mut Funcdata, op: OpId) -> int4 {
    RuleFloatIdentity::new("analysis").apply_op(op, fd)
}

fn code(fd: &Funcdata, op: OpId) -> OpCode {
    fd.obank().get(op).unwrap().code()
}

fn input(fd: &Funcdata, op: OpId, slot: int4) -> Option<VarnodeId> {
    fd.obank().get(op).unwrap().get_in(slot)
}

const NEG_ZERO_8: u64 = 0x8000_0000_0000_0000;
const POS_ZERO_8: u64 = 0;
const ONE_8: u64 = 0x3ff0_0000_0000_0000;

#[test]
fn add_negative_zero_becomes_copy() {
    let mut fd = build_fd(true);
    let x = formal_input(&mut fd, 0x2000, 8);
    let nz = fd.new_constant(8, NEG_ZERO_8);
    let (op, _) = emit(&mut fd, OpCode::CPUI_FLOAT_ADD, &[x, nz], 8);
    assert_eq!(fire(&mut fd, op), 1);
    assert_eq!(code(&fd, op), OpCode::CPUI_COPY);
    assert_eq!(input(&fd, op, 0), Some(x));
}

#[test]
fn add_positive_zero_is_left_alone() {
    let mut fd = build_fd(true);
    let x = formal_input(&mut fd, 0x2000, 8);
    let pz = fd.new_constant(8, POS_ZERO_8);
    let (op, _) = emit(&mut fd, OpCode::CPUI_FLOAT_ADD, &[x, pz], 8);
    assert_eq!(fire(&mut fd, op), 0);
    assert_eq!(code(&fd, op), OpCode::CPUI_FLOAT_ADD);
}

#[test]
fn sub_positive_zero_becomes_copy() {
    let mut fd = build_fd(true);
    let x = formal_input(&mut fd, 0x2000, 8);
    let pz = fd.new_constant(8, POS_ZERO_8);
    let (op, _) = emit(&mut fd, OpCode::CPUI_FLOAT_SUB, &[x, pz], 8);
    assert_eq!(fire(&mut fd, op), 1);
    assert_eq!(code(&fd, op), OpCode::CPUI_COPY);
    assert_eq!(input(&fd, op, 0), Some(x));
}

#[test]
fn mult_by_one_becomes_copy_on_either_side() {
    let mut fd = build_fd(true);
    let x = formal_input(&mut fd, 0x2000, 8);
    let one_r = fd.new_constant(8, ONE_8);
    let (right, _) = emit(&mut fd, OpCode::CPUI_FLOAT_MULT, &[x, one_r], 8);
    let one_l = fd.new_constant(8, ONE_8);
    let (left, _) = emit(&mut fd, OpCode::CPUI_FLOAT_MULT, &[one_l, x], 8);
    assert_eq!(fire(&mut fd, right), 1);
    assert_eq!(input(&fd, right, 0), Some(x));
    assert_eq!(fire(&mut fd, left), 1);
    assert_eq!(input(&fd, left, 0), Some(x));
    assert_eq!(code(&fd, left), OpCode::CPUI_COPY);
}

#[test]
fn div_by_one_becomes_copy() {
    let mut fd = build_fd(true);
    let x = formal_input(&mut fd, 0x2000, 8);
    let one = fd.new_constant(8, ONE_8);
    let (op, _) = emit(&mut fd, OpCode::CPUI_FLOAT_DIV, &[x, one], 8);
    assert_eq!(fire(&mut fd, op), 1);
    assert_eq!(code(&fd, op), OpCode::CPUI_COPY);
}

#[test]
fn add_of_negation_becomes_sub() {
    let mut fd = build_fd(true);
    let x = formal_input(&mut fd, 0x2000, 8);
    let z = formal_input(&mut fd, 0x2008, 8);
    let (_, neg) = emit(&mut fd, OpCode::CPUI_FLOAT_NEG, &[x], 8);
    let (op, _) = emit(&mut fd, OpCode::CPUI_FLOAT_ADD, &[z, neg], 8);
    assert_eq!(fire(&mut fd, op), 1);
    assert_eq!(code(&fd, op), OpCode::CPUI_FLOAT_SUB);
    assert_eq!(input(&fd, op, 0), Some(z));
    assert_eq!(input(&fd, op, 1), Some(x));
}

#[test]
fn sub_of_negation_becomes_add() {
    let mut fd = build_fd(true);
    let x = formal_input(&mut fd, 0x2000, 8);
    let z = formal_input(&mut fd, 0x2008, 8);
    let (_, neg) = emit(&mut fd, OpCode::CPUI_FLOAT_NEG, &[x], 8);
    let (op, _) = emit(&mut fd, OpCode::CPUI_FLOAT_SUB, &[z, neg], 8);
    assert_eq!(fire(&mut fd, op), 1);
    assert_eq!(code(&fd, op), OpCode::CPUI_FLOAT_ADD);
    assert_eq!(input(&fd, op, 1), Some(x));
}

#[test]
fn option_off_declines() {
    let mut fd = build_fd(false);
    let x = formal_input(&mut fd, 0x2000, 8);
    let nz = fd.new_constant(8, NEG_ZERO_8);
    let (op, _) = emit(&mut fd, OpCode::CPUI_FLOAT_ADD, &[x, nz], 8);
    assert_eq!(fire(&mut fd, op), 0);
    assert_eq!(code(&fd, op), OpCode::CPUI_FLOAT_ADD);
}
