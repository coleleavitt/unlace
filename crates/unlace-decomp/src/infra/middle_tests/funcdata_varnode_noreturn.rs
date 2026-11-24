//! Tests moved out of `funcdata_varnode` because they read higher-band modules. They live in the
//! driver so the middle band can become its own crate (unlace-middle).

#![allow(unused_imports, dead_code)]

use crate::context::ArchContext;
use crate::context::OpId;
use crate::context::TypeOp;
use crate::context::VarnodeId;
use crate::dtype::Datatype;
use crate::dtype::type_metatype;
use crate::fspec::effect_type;
use crate::funcdata::Funcdata;
use crate::funcdata_varnode::*;
use crate::noreturnretuse;
use crate::varnode::DefOpInfo;
use crate::varnode::VarnodeBank;
use crate::varnode::varnode_flags;
use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::error::KunaError;
use unlace_base::error::KunaResult;
use unlace_base::space::AddrSpace;
use unlace_base::space::AddrSpaceManager;
use unlace_base::space::ConstantSpace;
use unlace_base::space::FspecSpace;
use unlace_base::space::IopSpace;
use unlace_base::space::UniqueSpace;
use unlace_base::space::addrspace_flags;
use unlace_base::space::spacetype;
use unlace_base::types::Wrap;
use unlace_base::types::int4;
use unlace_base::types::uint1;
use unlace_base::types::uint4;
use unlace_base::types::uintb;
use unlace_base::types::uintm;
use unlace_num::opcodes::OpCode;

/// Build an AddrSpaceManager with constant/unique/iop/fspec/ram spaces.
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

fn build_fd() -> Funcdata {
    let manage = build_manager();
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap()
}

fn ram(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
}

fn append_test_op(
    fd: &mut Funcdata,
    block: crate::context::BlockId,
    offset: u64,
    opcode: OpCode,
    flags: uint4,
) -> OpId {
    let op = fd.new_op(0, Address::new(ram(fd), offset));
    fd.op_set_opcode(op, TypeOp::new(opcode, flags, format!("{opcode:?}")));
    fd.op_insert_end(op, block);
    op
}

#[test]
fn terminal_noreturn_call_shape_requires_an_adjacent_noreturn_halt() {
    let mut fd = build_fd();
    let root = fd.bblocks_root_pub();
    let block = fd.bblocks_mut().new_block_basic(root);
    let call = append_test_op(
        &mut fd,
        block,
        0x1000,
        OpCode::CPUI_CALL,
        crate::op::pcodeop_flags::call,
    );
    append_test_op(
        &mut fd,
        block,
        0x1004,
        OpCode::CPUI_RETURN,
        crate::op::pcodeop_flags::returns | crate::op::pcodeop_flags::noreturn,
    );
    assert!(noreturnretuse::call_ends_in_noreturn_halt(&fd, call));

    let mut ordinary = build_fd();
    let root = ordinary.bblocks_root_pub();
    let block = ordinary.bblocks_mut().new_block_basic(root);
    let call = append_test_op(
        &mut ordinary,
        block,
        0x1000,
        OpCode::CPUI_CALL,
        crate::op::pcodeop_flags::call,
    );
    append_test_op(
        &mut ordinary,
        block,
        0x1004,
        OpCode::CPUI_RETURN,
        crate::op::pcodeop_flags::returns,
    );
    assert!(!noreturnretuse::call_ends_in_noreturn_halt(&ordinary, call));

    let mut nonadjacent = build_fd();
    let root = nonadjacent.bblocks_root_pub();
    let block = nonadjacent.bblocks_mut().new_block_basic(root);
    let call = append_test_op(
        &mut nonadjacent,
        block,
        0x1000,
        OpCode::CPUI_CALL,
        crate::op::pcodeop_flags::call,
    );
    append_test_op(&mut nonadjacent, block, 0x1004, OpCode::CPUI_COPY, 0);
    append_test_op(
        &mut nonadjacent,
        block,
        0x1008,
        OpCode::CPUI_RETURN,
        crate::op::pcodeop_flags::returns | crate::op::pcodeop_flags::noreturn,
    );
    assert!(!noreturnretuse::call_ends_in_noreturn_halt(
        &nonadjacent,
        call
    ));
}
