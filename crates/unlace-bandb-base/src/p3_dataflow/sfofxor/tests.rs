//! Tests for `RuleSfOfXor` (unlace `floatidentity`): the zero and one constant
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
use crate::context::{ArchContext, OpId, VarnodeId};
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
    ctx.unlace_options.set(SfOfXor(on));
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
    RuleSfOfXor::new("analysis").apply_op(op, fd)
}

fn code(fd: &Funcdata, op: OpId) -> OpCode {
    fd.obank().get(op).unwrap().code()
}

fn input(fd: &Funcdata, op: OpId, slot: int4) -> Option<VarnodeId> {
    fd.obank().get(op).unwrap().get_in(slot)
}

/// `SF xor OF` for `cmp a, b` on one byte: `SF = (a - b) s< 0`, `OF = a -s b overflow`.
fn cmp_flags(fd: &mut Funcdata, a: VarnodeId, b: VarnodeId) -> (VarnodeId, VarnodeId) {
    let (_, diff) = emit(fd, OpCode::CPUI_INT_SUB, &[a, b], 1);
    let zero = fd.new_constant(1, 0);
    let (_, sf) = emit(fd, OpCode::CPUI_INT_SLESS, &[diff, zero], 1);
    let (_, of) = emit(fd, OpCode::CPUI_INT_SBORROW, &[a, b], 1);
    (sf, of)
}

#[test]
fn sign_xor_overflow_folds_to_signed_less() {
    let mut fd = build_fd(true);
    let a = formal_input(&mut fd, 0x2000, 1);
    let b = formal_input(&mut fd, 0x2008, 1);
    let (sf, of) = cmp_flags(&mut fd, a, b);
    let (op, _) = emit(&mut fd, OpCode::CPUI_INT_XOR, &[sf, of], 1);
    assert_eq!(fire(&mut fd, op), 1);
    assert_eq!(code(&fd, op), OpCode::CPUI_INT_SLESS);
    assert_eq!(input(&fd, op, 0), Some(a));
    assert_eq!(input(&fd, op, 1), Some(b));
}

#[test]
fn overflow_first_operand_order_also_folds() {
    let mut fd = build_fd(true);
    let a = formal_input(&mut fd, 0x2000, 1);
    let b = formal_input(&mut fd, 0x2008, 1);
    let (sf, of) = cmp_flags(&mut fd, a, b);
    let (op, _) = emit(&mut fd, OpCode::CPUI_BOOL_XOR, &[of, sf], 1);
    assert_eq!(fire(&mut fd, op), 1);
    assert_eq!(code(&fd, op), OpCode::CPUI_INT_SLESS);
}

/// `INT_XOR(INT_SLESS(a, b), INT_SBORROW(a, b))` is the sign flag, not `a s< b`: it must not fold.
#[test]
fn slessthan_xor_borrow_is_not_the_idiom() {
    let mut fd = build_fd(true);
    let a = formal_input(&mut fd, 0x2000, 1);
    let b = formal_input(&mut fd, 0x2008, 1);
    let (_, lt) = emit(&mut fd, OpCode::CPUI_INT_SLESS, &[a, b], 1);
    let (_, of) = emit(&mut fd, OpCode::CPUI_INT_SBORROW, &[a, b], 1);
    let (op, _) = emit(&mut fd, OpCode::CPUI_INT_XOR, &[lt, of], 1);
    assert_eq!(fire(&mut fd, op), 0);
    assert_eq!(code(&fd, op), OpCode::CPUI_INT_XOR);
}

#[test]
fn sign_of_a_different_difference_declines() {
    let mut fd = build_fd(true);
    let a = formal_input(&mut fd, 0x2000, 1);
    let b = formal_input(&mut fd, 0x2008, 1);
    let c = formal_input(&mut fd, 0x2010, 1);
    let (sf, _) = cmp_flags(&mut fd, a, c);
    let (_, of) = emit(&mut fd, OpCode::CPUI_INT_SBORROW, &[a, b], 1);
    let (op, _) = emit(&mut fd, OpCode::CPUI_INT_XOR, &[sf, of], 1);
    assert_eq!(fire(&mut fd, op), 0);
    assert_eq!(code(&fd, op), OpCode::CPUI_INT_XOR);
}

#[test]
fn option_off_declines() {
    let mut fd = build_fd(false);
    let a = formal_input(&mut fd, 0x2000, 1);
    let b = formal_input(&mut fd, 0x2008, 1);
    let (sf, of) = cmp_flags(&mut fd, a, b);
    let (op, _) = emit(&mut fd, OpCode::CPUI_INT_XOR, &[sf, of], 1);
    assert_eq!(fire(&mut fd, op), 0);
    assert_eq!(code(&fd, op), OpCode::CPUI_INT_XOR);
}
