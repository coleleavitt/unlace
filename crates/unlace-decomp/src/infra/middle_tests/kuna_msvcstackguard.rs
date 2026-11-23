//! Tests moved out of `kuna_msvcstackguard` because they read higher-band modules. They live in the
//! driver so the middle band can become its own crate (unlace-middle).

#![allow(unused_imports, dead_code)]

use crate::action::Action;
use crate::action::ActionBase;
use crate::action::ActionContext;
use crate::action::ActionGroupList;
use crate::action::ApplyResult;
use crate::context::ArchContext;
use crate::context::BlockId;
use crate::context::OpId;
use crate::context::TypeOp;
use crate::context::VarnodeId;
use crate::dtype::Datatype;
use crate::dtype::type_metatype;
use crate::fspec::FuncCallSpecs;
use crate::fspec::ProtoModel;
use crate::funcdata::Funcdata;
use crate::funcdata_spacebase::FuncdataSpacebaseExt;
use crate::kuna_msvcstackguard::*;
use crate::kuna_stackguard::collect_value_slots;
use crate::kuna_stackguard::release_canary_slots;
use std::collections::BTreeMap;
use std::collections::BTreeSet;
use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::space::AddrSpace;
use unlace_base::space::AddrSpaceManager;
use unlace_base::space::ConstantSpace;
use unlace_base::space::SpacebaseSpace;
use unlace_base::space::UniqueSpace;
use unlace_base::space::VarnodeStorage;
use unlace_base::space::addrspace_flags;
use unlace_base::space::spacetype;
use unlace_base::types::int4;
use unlace_base::types::uintb;
use unlace_num::opcodes::OpCode;

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
    ctx.kuna_options
        .set(crate::kuna_msvcstackguard::StripMsvcStackGuard(on));
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

/// A register Varnode written by a binary op placed in `bl`.
fn binop(
    fd: &mut Funcdata,
    bl: BlockId,
    at: u64,
    opc: OpCode,
    a: VarnodeId,
    b: VarnodeId,
    out_reg: u64,
) -> VarnodeId {
    let op = mk_op(fd, 2, at, opc);
    fd.op_set_input(op, a, 0).unwrap();
    fd.op_set_input(op, b, 1).unwrap();
    let addr = reg(fd, out_reg);
    let out = fd.vbank_mut().create(8, addr, unk(8));
    fd.op_set_output(op, out).unwrap();
    fd.op_insert_end(op, bl);
    out
}

/// `out = <base> + cst`, the shape stack-pointer normalization leaves behind.
fn frame_ptr(
    fd: &mut Funcdata,
    bl: BlockId,
    at: u64,
    base: VarnodeId,
    cst: u64,
    out_reg: u64,
) -> VarnodeId {
    let c = fd.new_constant(8, cst);
    binop(fd, bl, at, OpCode::CPUI_PTRSUB, base, c, out_reg)
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

/// `phi = MULTIEQUAL(a, b)` placed at the head of `bl`.
fn phi(
    fd: &mut Funcdata,
    bl: BlockId,
    at: u64,
    a: VarnodeId,
    b: VarnodeId,
    out_reg: u64,
) -> VarnodeId {
    let op = mk_op(fd, 2, at, OpCode::CPUI_MULTIEQUAL);
    fd.op_set_input(op, a, 0).unwrap();
    fd.op_set_input(op, b, 1).unwrap();
    let addr = reg(fd, out_reg);
    let out = fd.vbank_mut().create(8, addr, unk(8));
    fd.op_set_output(op, out).unwrap();
    fd.op_insert_begin(op, bl);
    out
}

/// The function's entry stack-pointer Varnode.
fn sp_input(fd: &mut Funcdata) -> VarnodeId {
    let a = reg(fd, SP_OFF);
    let vn = fd.new_varnode(SP_SIZE, &a, None);
    let vn = fd.set_input_varnode(vn).unwrap();
    fd.spacebase();
    vn
}

#[test]
fn entry_stack_pointer_is_offset_zero() {
    let mut fd = build_fd();
    let spin = sp_input(&mut fd);
    let sp = sp(&fd);
    let mut budget = MAX_MATCH_STEPS;
    assert_eq!(
        stack_pointer_offset(spin, WALK_DEPTH, &fd, &sp, &mut budget),
        Some(0)
    );
}

#[test]
fn ptrsub_chain_reports_signed_frame_offset() {
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let spin = sp_input(&mut fd);
    // `sub rsp,0x48` normalized to SP - 0x48.
    let frame = frame_ptr(&mut fd, bl, 0x10, spin, (-0x48i64) as u64, 0x100);
    let sp = sp(&fd);
    let mut budget = MAX_MATCH_STEPS;
    assert_eq!(
        stack_pointer_offset(frame, WALK_DEPTH, &fd, &sp, &mut budget),
        Some(-0x48)
    );
}

#[test]
fn cast_between_the_chain_is_peeled() {
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let spin = sp_input(&mut fd);
    let frame = frame_ptr(&mut fd, bl, 0x10, spin, (-0x48i64) as u64, 0x100);
    let op = mk_op(&mut fd, 1, 0x14, OpCode::CPUI_CAST);
    fd.op_set_input(op, frame, 0).unwrap();
    let addr = reg(&fd, 0x108);
    let out = fd.vbank_mut().create(8, addr, unk(8));
    fd.op_set_output(op, out).unwrap();
    fd.op_insert_end(op, bl);
    let sp = sp(&fd);
    let mut budget = MAX_MATCH_STEPS;
    assert_eq!(
        stack_pointer_offset(out, WALK_DEPTH, &fd, &sp, &mut budget),
        Some(-0x48)
    );
}

#[test]
fn a_cookie_carried_across_many_calls_still_matches() {
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let spin = sp_input(&mut fd);
    let k = cookie_read(&mut fd, bl, 0x10, 0x100);
    let f1 = frame_ptr(&mut fd, bl, 0x14, spin, (-0x48i64) as u64, 0x108);
    let mut saved = binop(&mut fd, bl, 0x18, OpCode::CPUI_INT_XOR, k, f1, 0x110);
    let init = fd.vbank().get(saved).unwrap().get_def().unwrap();
    for i in 0..300u64 {
        let op = mk_op(&mut fd, 2, 0x40 + i, OpCode::CPUI_INDIRECT);
        fd.op_set_input(op, saved, 0).unwrap();
        let blocker = fd.new_constant(8, i);
        fd.op_set_input(op, blocker, 1).unwrap();
        let out_addr = reg(&fd, 0x200 + i * 8);
        let out = fd.vbank_mut().create(8, out_addr, unk(8));
        fd.op_set_output(op, out).unwrap();
        fd.op_insert_end(op, bl);
        saved = out;
    }
    let f2 = frame_ptr(&mut fd, bl, 0x90, spin, (-0x48i64) as u64, 0x500);
    let out = binop(&mut fd, bl, 0x94, OpCode::CPUI_INT_XOR, saved, f2, 0x508);
    let mut budget = MAX_MATCH_STEPS;
    assert_eq!(
        cookie_cancel(out, &fd, &sp(&fd), &mut budget),
        Some(vec![init])
    );
}

#[test]
fn a_loop_carried_cookie_phi_uses_its_entry_scramble() {
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let spin = sp_input(&mut fd);
    let k = cookie_read(&mut fd, bl, 0x10, 0x100);
    let f1 = frame_ptr(&mut fd, bl, 0x14, spin, (-0x48i64) as u64, 0x108);
    let saved = binop(&mut fd, bl, 0x18, OpCode::CPUI_INT_XOR, k, f1, 0x110);
    let init = fd.vbank().get(saved).unwrap().get_def().unwrap();

    let phi_op = mk_op(&mut fd, 2, 0x1c, OpCode::CPUI_MULTIEQUAL);
    let phi_addr = reg(&fd, 0x118);
    let carried = fd.vbank_mut().create(8, phi_addr, unk(8));
    fd.op_set_output(phi_op, carried).unwrap();
    fd.op_set_input(phi_op, saved, 0).unwrap();
    fd.op_set_input(phi_op, carried, 1).unwrap();
    fd.op_insert_begin(phi_op, bl);

    let f2 = frame_ptr(&mut fd, bl, 0x20, spin, (-0x48i64) as u64, 0x120);
    let out = binop(&mut fd, bl, 0x24, OpCode::CPUI_INT_XOR, carried, f2, 0x128);
    let mut budget = MAX_MATCH_STEPS;
    assert_eq!(
        cookie_cancel(out, &fd, &sp(&fd), &mut budget),
        Some(vec![init])
    );
}

#[test]
fn a_seedless_multi_phi_cycle_declines() {
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let spin = sp_input(&mut fd);

    let phi_a_op = mk_op(&mut fd, 2, 0x10, OpCode::CPUI_MULTIEQUAL);
    let phi_a_addr = reg(&fd, 0x100);
    let phi_a = fd.vbank_mut().create(8, phi_a_addr, unk(8));
    fd.op_set_output(phi_a_op, phi_a).unwrap();
    fd.op_insert_begin(phi_a_op, bl);

    let phi_b_op = mk_op(&mut fd, 2, 0x14, OpCode::CPUI_MULTIEQUAL);
    let phi_b_addr = reg(&fd, 0x108);
    let phi_b = fd.vbank_mut().create(8, phi_b_addr, unk(8));
    fd.op_set_output(phi_b_op, phi_b).unwrap();
    fd.op_insert_begin(phi_b_op, bl);

    fd.op_set_input(phi_a_op, phi_b, 0).unwrap();
    fd.op_set_input(phi_a_op, phi_b, 1).unwrap();
    fd.op_set_input(phi_b_op, phi_a, 0).unwrap();
    fd.op_set_input(phi_b_op, phi_a, 1).unwrap();

    let frame = frame_ptr(&mut fd, bl, 0x18, spin, (-0x48i64) as u64, 0x110);
    let out = binop(&mut fd, bl, 0x1c, OpCode::CPUI_INT_XOR, phi_a, frame, 0x118);
    let mut budget = MAX_MATCH_STEPS;
    assert_eq!(cookie_cancel(out, &fd, &sp(&fd), &mut budget), None);
}

#[test]
fn a_seedless_cycle_alongside_a_valid_scramble_declines() {
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let spin = sp_input(&mut fd);
    let k = cookie_read(&mut fd, bl, 0x10, 0x100);
    let f1 = frame_ptr(&mut fd, bl, 0x14, spin, (-0x48i64) as u64, 0x108);
    let saved = binop(&mut fd, bl, 0x18, OpCode::CPUI_INT_XOR, k, f1, 0x110);

    let loop_op = mk_op(&mut fd, 2, 0x1c, OpCode::CPUI_MULTIEQUAL);
    let loop_addr = reg(&fd, 0x118);
    let loop_value = fd.vbank_mut().create(8, loop_addr, unk(8));
    fd.op_set_output(loop_op, loop_value).unwrap();
    fd.op_set_input(loop_op, loop_value, 0).unwrap();
    fd.op_set_input(loop_op, loop_value, 1).unwrap();
    fd.op_insert_begin(loop_op, bl);

    let joined = phi(&mut fd, bl, 0x20, saved, loop_value, 0x120);
    let f2 = frame_ptr(&mut fd, bl, 0x24, spin, (-0x48i64) as u64, 0x128);
    let out = binop(&mut fd, bl, 0x28, OpCode::CPUI_INT_XOR, joined, f2, 0x130);
    let mut budget = MAX_MATCH_STEPS;
    assert_eq!(cookie_cancel(out, &fd, &sp(&fd), &mut budget), None);
}

#[test]
fn a_constant_scrambled_with_the_stack_pointer_is_not_a_cookie() {
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let spin = sp_input(&mut fd);
    let k = fd.new_constant(8, 0x1234_5678);
    let f1 = frame_ptr(&mut fd, bl, 0x14, spin, (-0x48i64) as u64, 0x108);
    let saved = binop(&mut fd, bl, 0x18, OpCode::CPUI_INT_XOR, k, f1, 0x110);
    let f2 = frame_ptr(&mut fd, bl, 0x20, spin, (-0x48i64) as u64, 0x118);
    let out = binop(&mut fd, bl, 0x24, OpCode::CPUI_INT_XOR, saved, f2, 0x120);
    let sp = sp(&fd);
    let mut budget = MAX_MATCH_STEPS;
    assert_eq!(cookie_cancel(out, &fd, &sp, &mut budget), None);
}

#[test]
fn one_xor_is_not_a_cancel() {
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let spin = sp_input(&mut fd);
    let k = cookie_read(&mut fd, bl, 0x10, 0x100);
    let f1 = frame_ptr(&mut fd, bl, 0x14, spin, (-0x48i64) as u64, 0x108);
    let saved = binop(&mut fd, bl, 0x18, OpCode::CPUI_INT_XOR, k, f1, 0x110);
    let sp = sp(&fd);
    let mut budget = MAX_MATCH_STEPS;
    assert_eq!(cookie_cancel(saved, &fd, &sp, &mut budget), None);
}

#[test]
fn a_cookie_carried_through_more_than_walk_depth_phis_matches() {
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let spin = sp_input(&mut fd);
    let k = cookie_read(&mut fd, bl, 0x10, 0x100);
    let f1 = frame_ptr(&mut fd, bl, 0x14, spin, (-0x48i64) as u64, 0x108);
    let first = binop(&mut fd, bl, 0x18, OpCode::CPUI_INT_XOR, k, f1, 0x110);
    let init = fd.vbank().get(first).unwrap().get_def().unwrap();
    let mut carried = first;
    for i in 0..40u64 {
        carried = phi(&mut fd, bl, 0x200 + i * 4, carried, carried, 0x600 + i * 8);
    }
    let f2 = frame_ptr(&mut fd, bl, 0x400, spin, (-0x48i64) as u64, 0x900);
    let out = binop(&mut fd, bl, 0x404, OpCode::CPUI_INT_XOR, carried, f2, 0x908);
    let mut budget = MAX_MATCH_STEPS;
    assert_eq!(
        cookie_cancel(out, &fd, &sp(&fd), &mut budget),
        Some(vec![init])
    );
}

#[test]
fn a_transparent_cycle_in_the_cookie_operand_declines() {
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let spin = sp_input(&mut fd);

    let copy = mk_op(&mut fd, 1, 0x10, OpCode::CPUI_COPY);
    let cookie_addr = reg(&fd, 0x100);
    let cookie = fd.vbank_mut().create(8, cookie_addr, unk(8));
    fd.op_set_output(copy, cookie).unwrap();
    fd.op_set_input(copy, cookie, 0).unwrap();
    fd.op_insert_begin(copy, bl);

    let f1 = frame_ptr(&mut fd, bl, 0x14, spin, (-0x48i64) as u64, 0x108);
    let saved = binop(&mut fd, bl, 0x18, OpCode::CPUI_INT_XOR, cookie, f1, 0x110);
    let f2 = frame_ptr(&mut fd, bl, 0x1c, spin, (-0x48i64) as u64, 0x118);
    let out = binop(&mut fd, bl, 0x20, OpCode::CPUI_INT_XOR, saved, f2, 0x120);

    let mut budget = MAX_MATCH_STEPS;
    assert_eq!(cookie_cancel(out, &fd, &sp(&fd), &mut budget), None);
}
