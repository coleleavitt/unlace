//! Tests moved out of `funcdata` because they reach pass hooks a higher crate
//! provides. They live in the driver, which links every hook.

#![allow(unused_imports, dead_code)]

/// The imports of `funcdata` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::block::{BasicData, BlockGraph, BlockKind, FlowBlock, block_flags};
    pub(super) use crate::context::{ArchHandle, BlockId, OpId, VarnodeId};
    pub(super) use crate::dtype::Datatype;
    pub(super) use crate::fspec::{FuncCallSpecs, FuncProto, ParamActive};
    pub(super) use crate::op::PcodeOpBank;
    pub(super) use crate::variable::{CompareNameView, HighContext, VarnodeView, VarnodeViewLoc};
    pub(super) use crate::varnode::{DefOpInfo, VarnodeBank};
    pub(super) use std::rc::Rc;
    pub(super) use unlace_base::error::UnlaceResult;
    pub(super) use unlace_base::types::{Wrap, int2, int4, uint4, uint8, uintm};
    pub(super) use unlace_num::opcodes::OpCode;
}
use crate::context::{ArchContext, TypeOp};
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata::*;
use crate::funcdata_merge::FuncdataMergeExt;
use module_scope::*;
use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};
use unlace_num::opcodes::OpCode;

/// Build an AddrSpaceManager with constant/unique/ram spaces, mirroring the
/// op.rs/block.rs test harness.
fn build_manager() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        2,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    m
}

fn unk_type() -> Rc<Datatype> {
    Rc::new(Datatype::new(4, type_metatype::TYPE_UNKNOWN))
}

#[test]
fn build_dynamic_local_preserves_inferred_type_and_is_idempotent() {
    let mut manager = build_manager();
    let register = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false,
        8,
        1,
        5,
        addrspace_flags::hasphysical,
        1,
        1,
    ));
    manager.insert_space(Rc::clone(&register)).unwrap();
    manager
        .insert_space(Rc::new(unlace_base::space::SpacebaseSpace::new(
            "stack", 6, 8, &register, 1, true, false,
        )))
        .unwrap();
    let arch = Rc::new(ArchContext::new(manager));
    let ram = Rc::clone(arch.manage().get_space_by_name("ram").unwrap());
    let mut fd = Funcdata::new(
        "func",
        "func",
        arch,
        Address::new(Rc::clone(&ram), 0x1000),
        0,
        0x40,
    )
    .unwrap();
    let root = fd.bblocks_root_pub();
    let block = fd.bblocks_mut().new_block_basic(root);
    let input = fd.new_varnode(4, &Address::new(Rc::clone(&ram), 0x100), None);
    let input = fd.set_input_varnode(input).unwrap();
    let op = fd.new_op(2, Address::new(Rc::clone(&ram), 0x1000));
    fd.op_set_opcode(op, TypeOp::new(OpCode::CPUI_INT_ADD, 0, "ADD"));
    let out = fd
        .new_varnode_out(4, &Address::new(ram, 0x200), op)
        .unwrap();
    fd.op_set_input(op, input, 0).unwrap();
    fd.op_set_input(op, input, 1).unwrap();
    fd.op_insert(op, block, None);
    fd.structure_reset();
    fd.set_high_level();
    let dtype = fd.vbank().get(out).unwrap().get_type().clone();

    fd.build_dynamic_symbol(out, 8, unk_type()).unwrap();
    let symbol = fd.vbank().get(out).unwrap().unlace_symbol_entry().unwrap();
    assert_eq!(fd.dynamic_symbol_specs().len(), 1);
    assert!(Rc::ptr_eq(fd.vbank().get(out).unwrap().get_type(), &dtype));
    assert!(!fd.vbank().get(out).unwrap().is_type_lock());
    fd.build_dynamic_symbol(out, 8, unk_type()).unwrap();
    assert_eq!(fd.dynamic_symbol_specs().len(), 1);
    assert_eq!(
        fd.vbank().get(out).unwrap().unlace_symbol_entry(),
        Some(symbol)
    );
}
