//! Tests for the forward walk behind `calleeiparead`: which ops after a call
//! read the register the call kills, and which end the path first. The
//! end-to-end witness (gcc 15 `loop_calls`, GH-1497) lives in
//! `tests/stages/calleeiparead.toml`.

use super::*;

use std::rc::Rc;

use unlace_base::space::{AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, spacetype};

use crate::context::{ArchContext, TypeOp};

const RDI: (u64, int4) = (0x38, 8);
const RDX: (u64, int4) = (0x10, 8);
const EDX: (u64, int4) = (0x10, 4);

fn build_fd() -> Funcdata {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false,
        4,
        1,
        2,
        0,
        1,
        1,
    )))
    .unwrap();
    let glb = Rc::new(ArchContext::new(m));
    let reg = Rc::clone(glb.manage().get_space_by_name("register").unwrap());
    Funcdata::new(
        "caller",
        "caller",
        glb,
        Address::new(reg, 0x1000),
        0x1000,
        0x40,
    )
    .unwrap()
}

fn reg(fd: &Funcdata, off: u64) -> Address {
    let space = fd
        .get_arch()
        .manage()
        .get_space_by_name("register")
        .unwrap();
    Address::new(Rc::clone(space), off)
}

fn block(fd: &mut Funcdata) -> BlockId {
    let root = fd.bblocks_root_pub();
    let bl = fd.bblocks_mut().new_block_basic(root);
    if fd.bblocks_ref().block(root).get_size() == 1 {
        fd.bblocks_mut().set_start_block(root, bl);
    }
    bl
}

fn op(
    fd: &mut Funcdata,
    bl: BlockId,
    code: OpCode,
    out: Option<(u64, int4)>,
    ins: &[(u64, int4)],
) -> OpId {
    let pc = reg(fd, 0x1000);
    let op = fd.new_op(ins.len() as int4, pc);
    fd.obank_mut()
        .change_opcode(op, TypeOp::new(code, 0, format!("{code:?}")));
    for (slot, &(off, size)) in ins.iter().enumerate() {
        let addr = reg(fd, off);
        let vn = fd.new_varnode(size, &addr, None);
        fd.op_set_input(op, vn, slot as int4).unwrap();
    }
    if let Some((off, size)) = out {
        let addr = reg(fd, off);
        fd.new_varnode_out(size, &addr, op).unwrap();
    }
    fd.op_insert(op, bl, None);
    op
}

fn call(fd: &mut Funcdata, bl: BlockId) -> OpId {
    op(fd, bl, OpCode::CPUI_CALL, None, &[RDI])
}

fn reads_rdx(fd: &Funcdata, call: OpId) -> bool {
    caller_reads_across(fd, call, &reg(fd, RDX.0), RDX.1)
}

#[test]
fn a_read_after_the_call_counts() {
    let mut fd = build_fd();
    let bl = block(&mut fd);
    let c = call(&mut fd, bl);
    op(&mut fd, bl, OpCode::CPUI_INT_ADD, Some(RDX), &[RDX, RDI]);
    assert!(reads_rdx(&fd, c));
}

#[test]
fn a_read_in_a_later_block_counts() {
    let mut fd = build_fd();
    let a = block(&mut fd);
    let b = block(&mut fd);
    fd.bblocks_mut().add_edge(a, b);
    let c = call(&mut fd, a);
    op(&mut fd, b, OpCode::CPUI_COPY, Some(RDI), &[RDX]);
    assert!(reads_rdx(&fd, c));
}

#[test]
fn a_write_of_every_byte_ends_the_path() {
    let mut fd = build_fd();
    let bl = block(&mut fd);
    let c = call(&mut fd, bl);
    op(&mut fd, bl, OpCode::CPUI_COPY, Some(EDX), &[RDI]);
    op(&mut fd, bl, OpCode::CPUI_INT_ZEXT, Some(RDX), &[EDX]);
    op(&mut fd, bl, OpCode::CPUI_INT_ADD, Some(RDX), &[RDX, RDI]);
    assert!(
        !reads_rdx(&fd, c),
        "x86-64 writes EDX, then RDX = zext(EDX)"
    );
}

#[test]
fn a_narrow_write_leaves_the_other_bytes_live() {
    let mut fd = build_fd();
    let bl = block(&mut fd);
    let c = call(&mut fd, bl);
    op(&mut fd, bl, OpCode::CPUI_COPY, Some(EDX), &[RDI]);
    op(&mut fd, bl, OpCode::CPUI_COPY, Some(RDI), &[RDX]);
    assert!(reads_rdx(&fd, c));
}

#[test]
fn a_zeroing_idiom_is_not_a_read() {
    let mut fd = build_fd();
    let bl = block(&mut fd);
    let c = call(&mut fd, bl);
    op(&mut fd, bl, OpCode::CPUI_INT_XOR, Some(EDX), &[EDX, EDX]);
    op(&mut fd, bl, OpCode::CPUI_INT_ZEXT, Some(RDX), &[EDX]);
    op(&mut fd, bl, OpCode::CPUI_COPY, Some(RDI), &[RDX]);
    assert!(!reads_rdx(&fd, c));
}

#[test]
fn the_next_call_answers_for_itself() {
    let mut fd = build_fd();
    let bl = block(&mut fd);
    let c = call(&mut fd, bl);
    call(&mut fd, bl);
    op(&mut fd, bl, OpCode::CPUI_COPY, Some(RDI), &[RDX]);
    assert!(!reads_rdx(&fd, c));
}

#[test]
fn a_read_before_the_call_is_not_across_it() {
    let mut fd = build_fd();
    let bl = block(&mut fd);
    op(&mut fd, bl, OpCode::CPUI_COPY, Some(RDI), &[RDX]);
    let c = call(&mut fd, bl);
    assert!(!reads_rdx(&fd, c));
}
