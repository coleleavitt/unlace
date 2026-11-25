use super::{Byte, def_facing_pointer, expression, named, safe_global_source};
use crate::context::ArchContext;
use crate::database::SymbolId;
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata::Funcdata;
use crate::varnode::varnode_flags;
use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, IopSpace, SpacebaseSpace, UniqueSpace,
    addrspace_flags, spacetype,
};
use unlace_num::opcodes::OpCode;

fn global_read_fixture(
    with_write: bool,
) -> (
    Funcdata,
    crate::context::VarnodeId,
    crate::context::OpId,
    crate::context::OpId,
) {
    let mut spaces = AddrSpaceManager::new();
    spaces.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    spaces
        .insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    spaces.insert_space(Rc::new(IopSpace::new(2))).unwrap();
    let register = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false,
        8,
        1,
        3,
        addrspace_flags::hasphysical,
        1,
        1,
    ));
    spaces.insert_space(Rc::clone(&register)).unwrap();
    let ram = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        4,
        addrspace_flags::hasphysical,
        1,
        1,
    ));
    spaces.insert_space(Rc::clone(&ram)).unwrap();
    spaces.set_default_code_space(ram.get_index()).unwrap();
    spaces.set_default_data_space(ram.get_index()).unwrap();
    let stack = Rc::new(SpacebaseSpace::new(
        "stack", 5, 8, &register, 1, true, false,
    ));
    spaces.insert_space(stack).unwrap();

    let arch = Rc::new(ArchContext::new(spaces));
    let mut fd = Funcdata::new(
        "build",
        "build",
        arch,
        Address::new(Rc::clone(&ram), 0x1000),
        0x1000,
        0x40,
    )
    .unwrap();
    let root = fd.bblocks_ref().root.expect("function block root");
    let block = fd.bblocks_mut().new_block_basic(root);
    let make_copy = |fd: &mut Funcdata, addr| {
        let op = fd.new_op(1, Address::new(Rc::clone(&ram), addr));
        fd.op_set_opcode(op, crate::typeop::type_op_for(OpCode::CPUI_COPY));
        op
    };
    let global = fd.new_varnode(1, &Address::new(Rc::clone(&ram), 0x2000), None);
    let read = make_copy(&mut fd, 0x1001);
    fd.op_set_input(read, global, 0).unwrap();
    fd.new_varnode_out(1, &Address::new(Rc::clone(&register), 0x40), read)
        .unwrap();
    fd.op_insert(read, block, None);
    if with_write {
        let write = make_copy(&mut fd, 0x1002);
        let out = fd
            .new_varnode_out(1, &Address::new(Rc::clone(&ram), 0x3000), write)
            .unwrap();
        fd.vbank_mut()
            .get_mut(out)
            .unwrap()
            .set_flags_pub(varnode_flags::persist);
        fd.op_insert(write, block, None);
    }
    let use_op = make_copy(&mut fd, 0x1003);
    fd.op_insert(use_op, block, None);
    (fd, global, read, use_op)
}

#[test]
fn an_intervening_physical_write_blocks_a_mutable_global_read() {
    let (fd, global, read, use_op) = global_read_fixture(true);
    assert!(safe_global_source(&fd, global, use_op, Some(read)).is_none());
}

#[test]
fn a_mutable_read_can_be_reemitted_when_no_effect_intervenes() {
    let (fd, global, read, use_op) = global_read_fixture(false);
    assert_eq!(
        safe_global_source(&fd, global, use_op, Some(read)),
        Some(global)
    );
}

#[test]
fn a_call_between_a_mutable_read_and_use_blocks_reemission() {
    let (mut fd, global, read, use_op) = global_read_fixture(false);
    let ram = Rc::clone(
        fd.get_arch()
            .manage()
            .get_space_by_name("ram")
            .expect("default data space"),
    );
    let block = fd.obank().get(read).unwrap().get_parent().unwrap();
    let call = fd.new_op(1, Address::new(Rc::clone(&ram), 0x1002));
    fd.op_set_opcode(call, crate::typeop::type_op_for(OpCode::CPUI_CALL));
    let target = fd.new_constant(8, 0x401000);
    fd.op_set_input(call, target, 0).unwrap();
    fd.op_insert(call, block, Some(use_op));

    assert!(fd.obank().get(call).unwrap().is_call());
    assert!(safe_global_source(&fd, global, use_op, Some(read)).is_none());
}

#[test]
fn subpiece_offset_and_zext_zero_bytes_survive_projection() {
    let (mut fd, _, _, use_op) = global_read_fixture(false);
    let ram = Rc::clone(
        fd.get_arch()
            .manage()
            .get_space_by_name("ram")
            .expect("default data space"),
    );
    let register = Rc::clone(
        fd.get_arch()
            .manage()
            .get_space_by_name("register")
            .expect("register space"),
    );
    let block = fd.obank().get(use_op).unwrap().get_parent().unwrap();
    let global = fd.new_varnode(4, &Address::new(ram, 0x2100), None);

    let copy = fd.new_op(1, Address::new(Rc::clone(&register), 0x60));
    fd.op_set_opcode(copy, crate::typeop::type_op_for(OpCode::CPUI_COPY));
    fd.op_set_input(copy, global, 0).unwrap();
    let copied = fd
        .new_varnode_out(4, &Address::new(Rc::clone(&register), 0x60), copy)
        .unwrap();
    fd.op_insert(copy, block, Some(use_op));

    let subpiece = fd.new_op(2, Address::new(Rc::clone(&register), 0x64));
    fd.op_set_opcode(subpiece, crate::typeop::type_op_for(OpCode::CPUI_SUBPIECE));
    fd.op_set_input(subpiece, copied, 0).unwrap();
    let offset = fd.new_constant(4, 2);
    fd.op_set_input(subpiece, offset, 1).unwrap();
    let narrowed = fd
        .new_varnode_out(2, &Address::new(Rc::clone(&register), 0x64), subpiece)
        .unwrap();
    fd.op_insert(subpiece, block, Some(use_op));

    let zext = fd.new_op(1, Address::new(Rc::clone(&register), 0x68));
    fd.op_set_opcode(zext, crate::typeop::type_op_for(OpCode::CPUI_INT_ZEXT));
    fd.op_set_input(zext, narrowed, 0).unwrap();
    fd.new_varnode_out(4, &Address::new(register, 0x68), zext)
        .unwrap();
    fd.op_insert(zext, block, Some(use_op));

    let bytes = expression(
        &fd,
        fd.obank().get(zext).unwrap().get_out().unwrap(),
        true,
        32,
        use_op,
        SymbolId::default(),
        None,
    )
    .expect("projectable source");
    assert_eq!(bytes.len(), 4);
    assert!(matches!(
        bytes[0],
        Byte::Value {
            source,
            byte: 2,
            read_op: Some(op),
        } if source == global && op == copy
    ));
    assert!(matches!(
        bytes[1],
        Byte::Value {
            source,
            byte: 3,
            read_op: Some(op),
        } if source == global && op == copy
    ));
    assert!(matches!(bytes[2], Byte::Constant(0)));
    assert!(matches!(bytes[3], Byte::Constant(0)));
}

#[test]
fn pointer_constant_is_not_flattened_into_native_address_bytes() {
    let (mut fd, _, _, use_op) = global_read_fixture(false);
    let pointer = fd.new_constant(8, 0x402008);
    let pointer_type = Rc::new(Datatype::new_with_align(8, -1, type_metatype::TYPE_PTR));
    fd.vbank_mut()
        .get_mut(pointer)
        .unwrap()
        .copy_symbol_fields(pointer_type, 0);

    assert!(expression(&fd, pointer, true, 16, use_op, SymbolId::default(), None,).is_none());
}

fn needing_resolution(size: i32, meta: type_metatype) -> Rc<Datatype> {
    let mut datatype = Datatype::new_with_align(size, -1, meta);
    datatype.flags |= crate::dtype::flags::needs_resolution;
    Rc::new(datatype)
}

#[test]
fn unwritten_values_needing_resolution_classify_without_a_definition() {
    let (mut fd, global, _, use_op) = global_read_fixture(false);
    fd.vbank_mut()
        .get_mut(global)
        .unwrap()
        .copy_symbol_fields(needing_resolution(1, type_metatype::TYPE_UNION), 0);
    assert!(!def_facing_pointer(&fd, global));

    let pointer = fd.new_constant(8, 0x402008);
    fd.vbank_mut()
        .get_mut(pointer)
        .unwrap()
        .copy_symbol_fields(needing_resolution(8, type_metatype::TYPE_PTR), 0);
    assert!(def_facing_pointer(&fd, pointer));
    assert!(expression(&fd, pointer, true, 16, use_op, SymbolId::default(), None).is_none());
}

#[test]
fn a_byte_source_must_be_a_declared_variable() {
    let (mut fd, _, read, _) = global_read_fixture(false);
    let register = fd.obank().get(read).unwrap().get_out().unwrap();
    assert!(!named(&fd, register));
    let high = fd.high_bank_mut().new_high(register);
    fd.vbank_mut().get_mut(register).unwrap().set_high(high, 0);
    assert!(!named(&fd, register));
    fd.high_bank_mut()
        .get_mut(high)
        .unwrap()
        .set_unlace_name("v1");
    assert!(named(&fd, register));
}
