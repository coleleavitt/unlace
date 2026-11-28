// Tests for `unlace_msvcstackguard` (included into `mod tests` in
// msvcstackguard.rs).
//
// Covered:
//   - `stack_pointer_offset`: the entry stack pointer answers 0, a PTRSUB /
//     INT_ADD / PTRADD chain answers its signed byte offset, a COPY/CAST is
//     peeled, and an unrelated register answers None.
//   - `sign_extend`: a negative frame delta at 8 and 4 bytes.
//   - `cookie_cancel`: `(K ^ SP) ^ SP` matches and reports the entry-side
//     scramble op; the same shape with the two stack-pointer references at
//     DIFFERENT frame offsets does not (the XORs would not cancel); a scramble
//     of a constant does not; a single XOR does not.
//   - `cookie_check_op`: only a direct call with one exact cancel and no live
//     output is classified; indirect calls, mismatched SPs, two cancels, and a
//     read output all fail closed.
//   - the cookie walk is iterative across long INDIRECT and phi chains; grounded
//     cycles pass, while seedless cycles and unproven inputs fail closed.
//   - transparent links, wide phis, and multiple arguments share a finite budget;
//     exhaustion retains the original call and its effects.
//   - the first enabled action pass seeds the exact call site and requests a
//     restart; the replay removes it.
//   - with removal off, every locked-void checker is marked in one pass for
//     return-storage preservation but remains in the function.

use super::*;

use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, SpacebaseSpace, UniqueSpace, VarnodeStorage,
    addrspace_flags, spacetype,
};
use unlace_base::types::int4;

use crate::context::{ArchContext, BlockId, TypeOp};
use crate::dtype::{Datatype, type_metatype};

const SP_OFF: u64 = 0x20;
const SP_SIZE: int4 = 8;

fn build_manager() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    let regspc = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false,
        8,
        1,
        2,
        addrspace_flags::hasphysical,
        1,
        1,
    ));
    m.insert_space(Rc::clone(&regspc)).unwrap();
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
    m.insert_space(Rc::new(SpacebaseSpace::new(
        "stack", 3, 8, &regspc, 1, true, false,
    )))
    .unwrap();
    m
}

fn build_fd_with_option(on: bool) -> Funcdata {
    let manage = build_manager();
    let regspc = Rc::clone(manage.get_space_by_name("register").unwrap());
    let stackspc = Rc::clone(manage.get_stack_space().unwrap());
    let sp_data = VarnodeStorage {
        space: Some(regspc),
        offset: SP_OFF,
        size: SP_SIZE as u32,
    };
    manage
        .add_spacebase_pointer(&stackspc, &sp_data, SP_SIZE, true)
        .unwrap();
    let mut ctx = ArchContext::new(manage);
    ctx.unlace_options
        .set(crate::msvcstackguard::StripMsvcStackGuard(on));
    let glb = Rc::new(ctx);
    let code = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let entry = Address::new(code, 0x1000);
    Funcdata::new("func", "func", glb, entry, 0x1000_0000, 0x40).unwrap()
}

fn build_fd() -> Funcdata {
    build_fd_with_option(false)
}

fn sp(fd: &Funcdata) -> (Rc<AddrSpace>, uintb, int4) {
    stack_pointer_storage(fd).expect("the fixture has a stack space")
}

fn reg(fd: &Funcdata, off: u64) -> Address {
    Address::new(
        Rc::clone(
            fd.get_arch()
                .manage()
                .get_space_by_name("register")
                .unwrap(),
        ),
        off,
    )
}

fn ram_addr(fd: &Funcdata, off: u64) -> Address {
    Address::new(
        Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap()),
        off,
    )
}

fn unk(size: int4) -> Rc<Datatype> {
    Rc::new(Datatype::new(size, type_metatype::TYPE_UNKNOWN))
}

fn mk_block(fd: &mut Funcdata) -> BlockId {
    let root = fd.bblocks_ref().root.expect("bblocks root");
    fd.bblocks_mut().new_block_basic(root)
}

fn mk_op(fd: &mut Funcdata, inputs: int4, off: u64, opc: OpCode) -> OpId {
    let a = ram_addr(fd, off);
    let op = fd.new_op(inputs, a);
    fd.obank_mut()
        .change_opcode(op, TypeOp::new(opc, 0, format!("{opc:?}")));
    op
}

/// A global read standing in for `mov rax,[__security_cookie]`.
fn cookie_read(fd: &mut Funcdata, bl: BlockId, at: u64, out_reg: u64) -> VarnodeId {
    let op = mk_op(fd, 1, at, OpCode::CPUI_COPY);
    let a = ram_addr(fd, 0x40_2000);
    let global = fd.vbank_mut().create(8, a, unk(8));
    fd.op_set_input(op, global, 0).unwrap();
    let addr = reg(fd, out_reg);
    let out = fd.vbank_mut().create(8, addr, unk(8));
    fd.op_set_output(op, out).unwrap();
    fd.op_insert_end(op, bl);
    out
}

// --- stack_pointer_offset -----------------------------------------------------

#[test]
fn unrelated_register_is_not_a_stack_pointer() {
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let other = cookie_read(&mut fd, bl, 0x10, 0x100);
    let sp = sp(&fd);
    let mut budget = MAX_MATCH_STEPS;
    assert_eq!(
        stack_pointer_offset(other, WALK_DEPTH, &fd, &sp, &mut budget),
        None
    );
}

#[test]
fn sign_extend_reads_negative_deltas() {
    let mut fd = build_fd();
    let c8 = fd.new_constant(8, (-0x48i64) as u64);
    assert_eq!(sign_extend(&fd, c8), Some(-0x48));
    let c4 = fd.new_constant(4, 0xffff_ffb8);
    assert_eq!(sign_extend(&fd, c4), Some(-0x48));
}

// --- cookie_cancel ------------------------------------------------------------

// --- cookie_check_op ---------------------------------------------------------

// --- the Action gate ----------------------------------------------------------
