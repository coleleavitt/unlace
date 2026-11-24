//! Tests of `unlace_calltransport` that read modules of unlace-bandb, the crate above it, so they live here.

/// The imports of `unlace_calltransport` itself, as a glob so the tests' own imports win.
#[allow(unused_imports)]
mod module_scope {
    pub(super) use crate::context::{OpId, VarnodeId};
    pub(super) use crate::fspec::Containment;
    pub(super) use crate::funcdata::Funcdata;
    pub(super) use unlace_base::address::Address;
    pub(super) use unlace_base::space::spacetype;
    pub(super) use unlace_base::types::int4;
    pub(super) use unlace_num::opcodes::OpCode;
}
#[allow(unused_imports)]
use module_scope::*;

use crate::calltransport::*;
use std::rc::Rc;

use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, FspecSpace, IopSpace, RegisterLookup, UniqueSpace,
    VarnodeStorage, addrspace_flags,
};

use crate::action::Rule;
use crate::context::ArchContext;
use crate::fspec::FuncCallSpecs;
use crate::ruleaction_3::RulePropagateCopy;

struct Registers;

impl RegisterLookup for Registers {
    fn get_register(&self, _: &str) -> UnlaceResult<VarnodeStorage> {
        Err(UnlaceError::lowlevel("test registers resolve by storage"))
    }

    fn get_register_name(&self, base: &Rc<AddrSpace>, off: u64, size: int4) -> String {
        if base.get_name() == "register" && matches!(size, 1 | 2 | 4 | 8) {
            format!("r{off}_{size}")
        } else {
            String::new()
        }
    }

    fn get_exact_register_name(&self, base: &Rc<AddrSpace>, off: u64, size: int4) -> String {
        self.get_register_name(base, off, size)
    }
}

fn function() -> Funcdata {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    manager
        .insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    manager.insert_space(Rc::new(IopSpace::new(2))).unwrap();
    manager.insert_space(Rc::new(FspecSpace::new(3))).unwrap();
    for (name, index) in [("ram", 4), ("register", 5)] {
        manager
            .insert_space(Rc::new(AddrSpace::new(
                spacetype::IPTR_PROCESSOR,
                name,
                false,
                8,
                1,
                index,
                addrspace_flags::hasphysical,
                1,
                1,
            )))
            .unwrap();
    }
    manager.set_register_lookup(Rc::new(Registers));
    let architecture = Rc::new(ArchContext::new(manager));
    let memory = Rc::clone(architecture.manage().get_space_by_name("ram").unwrap());
    Funcdata::new(
        "func",
        "func",
        architecture,
        Address::new(memory, 0x1000),
        0x10000000,
        0x40,
    )
    .unwrap()
}

fn register(fd: &Funcdata, offset: u64) -> Address {
    Address::new(
        Rc::clone(
            fd.get_arch()
                .manage()
                .get_space_by_name("register")
                .unwrap(),
        ),
        offset,
    )
}

fn operation(fd: &mut Funcdata, opcode: OpCode, inputs: &[VarnodeId]) -> OpId {
    let address = fd.get_address() + (fd.obank().iter_all().count() * 4) as i64;
    let id = fd.new_op(inputs.len() as int4, address);
    fd.op_set_opcode_code(id, opcode);
    for (slot, input) in inputs.iter().enumerate() {
        fd.op_set_input(id, *input, slot as int4).unwrap();
    }
    id
}

fn input(fd: &mut Funcdata, offset: u64, size: int4) -> VarnodeId {
    let address = register(fd, offset);
    let id = fd.new_varnode(size, &address, None);
    fd.set_input_varnode(id).unwrap()
}

fn copy(fd: &mut Funcdata, source: VarnodeId, offset: u64) -> VarnodeId {
    let size = fd.vbank().get(source).unwrap().get_size();
    let id = operation(fd, OpCode::CPUI_COPY, &[source]);
    let address = register(fd, offset);
    fd.new_varnode_out(size, &address, id).unwrap()
}

fn call(fd: &mut Funcdata, opcode: OpCode, argument: VarnodeId, abi_offset: u64) -> OpId {
    let target = fd.new_constant(8, 0x2000);
    let id = operation(fd, opcode, &[target, argument]);
    let mut specs = FuncCallSpecs::new(id, fd.get_address().clone());
    specs.set_final_input_storage(vec![(
        register(fd, abi_offset),
        fd.vbank().get(argument).unwrap().get_size(),
    )]);
    fd.push_call_specs(specs);
    id
}

#[test]
fn outgoing_copy_is_excluded_before_propagation_and_after_teardown() {
    for opcode in [OpCode::CPUI_CALL, OpCode::CPUI_CALLIND] {
        let mut fd = function();
        let source = input(&mut fd, 0x80, 4);
        let carrier = copy(&mut fd, source, 0x10);
        let call = call(&mut fd, opcode, carrier, 0x10);
        assert!(fd.unlace_is_call_transport(carrier));
        assert_eq!(RulePropagateCopy.apply_op(call, &mut fd), 1);
        assert_eq!(fd.obank().get(call).unwrap().get_in(1), Some(source));
        assert!(fd.unlace_storage_sources(source).is_empty());
        assert!(fd.unlace_is_call_transport(carrier));
        let cloned = fd.clone_varnode(carrier);
        assert!(fd.unlace_is_call_transport(cloned));
        fd.delete_varnode(cloned).unwrap();
        assert!(!fd.unlace_was_call_transport(cloned));
        fd.clear();
        assert!(!fd.unlace_was_call_transport(carrier));
    }
}

#[test]
fn argument_slot_must_match_abi_and_call_target_remains_a_use() {
    let mut fd = function();
    let source = input(&mut fd, 0x80, 8);
    let durable = copy(&mut fd, source, 0x90);
    call(&mut fd, OpCode::CPUI_CALL, durable, 0x10);
    assert!(!fd.unlace_is_call_transport(durable));

    let target = copy(&mut fd, source, 0x10);
    let indirect = call(&mut fd, OpCode::CPUI_CALLIND, target, 0x10);
    fd.op_set_input(indirect, target, 0).unwrap();
    assert!(!fd.unlace_is_call_transport(target));
}

#[test]
fn real_definitions_return_values_and_local_uses_remain_homes() {
    for use_opcode in [
        OpCode::CPUI_RETURN,
        OpCode::CPUI_CALLOTHER,
        OpCode::CPUI_INT_ADD,
    ] {
        let mut fd = function();
        let source = input(&mut fd, 0x80, 4);
        let carrier = copy(&mut fd, source, 0x10);
        call(&mut fd, OpCode::CPUI_CALL, carrier, 0x10);
        let other = fd.new_constant(4, 1);
        operation(&mut fd, use_opcode, &[carrier, other]);
        assert!(!fd.unlace_is_call_transport(carrier));
        fd.unlace_inherit_storage(source, carrier);
        assert_eq!(
            fd.unlace_storage_sources(source)[0].address,
            register(&fd, 0x10)
        );
    }

    let mut fd = function();
    let pointer = input(&mut fd, 0x80, 8);
    let memory = Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap());
    let space = fd.new_varnode_space(&memory);
    let load = operation(&mut fd, OpCode::CPUI_LOAD, &[space, pointer]);
    let loaded = fd.new_unique_out(4, load).unwrap();
    let first_home = copy(&mut fd, loaded, 0x10);
    call(&mut fd, OpCode::CPUI_CALL, first_home, 0x10);
    assert!(!fd.unlace_is_call_transport(first_home));
    fd.unlace_inherit_storage(loaded, first_home);
    assert_eq!(
        fd.unlace_storage_sources(loaded)[0].address,
        register(&fd, 0x10)
    );
}

#[test]
fn extension_teardown_does_not_restore_outgoing_alias_but_keeps_computed_homes() {
    let mut fd = function();
    let source = input(&mut fd, 0x80, 4);
    let carrier = copy(&mut fd, source, 0x10);
    let extension = operation(&mut fd, OpCode::CPUI_INT_ZEXT, &[carrier]);
    let address = register(&fd, 0x10);
    let wide = fd.new_varnode_out(8, &address, extension).unwrap();
    call(&mut fd, OpCode::CPUI_CALL, wide, 0x10);
    assert!(fd.unlace_is_call_transport(carrier));
    assert!(!fd.unlace_is_call_transport(wide));
    fd.op_unset_output(extension);
    assert!(fd.unlace_storage_sources(carrier).is_empty());
    fd.unlace_inherit_storage(source, carrier);
    assert!(fd.unlace_storage_sources(source).is_empty());

    let mut fd = function();
    let source = input(&mut fd, 0x80, 1);
    let extension = operation(&mut fd, OpCode::CPUI_INT_ZEXT, &[source]);
    let address = register(&fd, 0x10);
    let computed = fd.new_varnode_out(4, &address, extension).unwrap();
    call(&mut fd, OpCode::CPUI_CALL, computed, 0x10);
    fd.op_unset_output(extension);
    assert_eq!(fd.unlace_storage_sources(source)[0].address, address);
}

#[test]
fn already_approved_homes_survive_transport_and_unknown_uses_are_kept() {
    let mut fd = function();
    let source = input(&mut fd, 0x80, 4);
    let genuine = input(&mut fd, 0x90, 4);
    let carrier = copy(&mut fd, source, 0x10);
    fd.unlace_inherit_storage(carrier, genuine);
    call(&mut fd, OpCode::CPUI_CALL, carrier, 0x10);
    fd.total_replace(carrier, source).unwrap();
    assert_eq!(fd.unlace_storage_sources(source).len(), 1);
    assert_eq!(
        fd.unlace_storage_sources(source)[0].address,
        register(&fd, 0x90)
    );

    let no_uses = copy(&mut fd, source, 0x20);
    assert!(!fd.unlace_is_call_transport(no_uses));
    let persistent = copy(&mut fd, source, 0x10);
    call(&mut fd, OpCode::CPUI_CALL, persistent, 0x10);
    fd.vbank_mut()
        .get_mut(persistent)
        .unwrap()
        .set_flags_pub(crate::varnode::varnode_flags::persist);
    assert!(!fd.unlace_is_call_transport(persistent));
    let durable = copy(&mut fd, source, 0x30);
    let outgoing = copy(&mut fd, durable, 0x10);
    call(&mut fd, OpCode::CPUI_CALL, outgoing, 0x10);
    assert!(!fd.unlace_is_call_transport(durable));
}

#[test]
fn another_definition_at_the_same_register_does_not_inherit_transport_role() {
    let mut fd = function();
    let constant = fd.new_constant(4, 7);
    let computation = operation(&mut fd, OpCode::CPUI_INT_ADD, &[constant, constant]);
    let address = register(&fd, 0x10);
    let genuine = fd.new_varnode_out(4, &address, computation).unwrap();
    let saved = copy(&mut fd, genuine, 0x80);
    let outgoing = copy(&mut fd, saved, 0x10);
    call(&mut fd, OpCode::CPUI_CALL, outgoing, 0x10);
    assert!(fd.unlace_is_call_transport(outgoing));
    fd.total_replace(outgoing, genuine).unwrap();
    assert!(!fd.unlace_is_call_transport(genuine));
    assert!(!fd.unlace_was_call_transport(genuine));

    let second = copy(&mut fd, saved, 0x10);
    call(&mut fd, OpCode::CPUI_CALL, second, 0x10);
    fd.unlace_inherit_storage(saved, second);
    assert!(fd.unlace_was_call_transport(second));
    let definition = fd.vbank().get(second).unwrap().get_def().unwrap();
    fd.op_set_opcode_code(definition, OpCode::CPUI_INT_ADD);
    assert!(!fd.unlace_was_call_transport(second));

    let third = copy(&mut fd, saved, 0x10);
    call(&mut fd, OpCode::CPUI_CALL, third, 0x10);
    fd.unlace_inherit_storage(saved, third);
    assert!(fd.unlace_was_call_transport(third));
    let constant = fd.new_constant(4, 9);
    let compute = operation(&mut fd, OpCode::CPUI_INT_ADD, &[constant, constant]);
    let unique = fd.new_unique_out(4, compute).unwrap();
    let materialize = operation(&mut fd, OpCode::CPUI_COPY, &[unique]);
    fd.op_set_output(materialize, third).unwrap();
    assert!(!fd.unlace_was_call_transport(third));
    assert!(!fd.unlace_is_call_transport(third));
}

#[test]
fn late_proof_retracts_only_its_native_write_and_preserves_removed_local_reads() {
    let mut fd = function();
    let source = input(&mut fd, 0x80, 4);
    let zero = fd.new_constant(4, 0);
    let computation = operation(&mut fd, OpCode::CPUI_INT_ADD, &[source, zero]);
    let address = register(&fd, 0x10);
    let genuine = fd.new_varnode_out(4, &address, computation).unwrap();
    let genuine_write = fd.obank().get(computation).unwrap().get_addr().clone();
    fd.unlace_inherit_storage(source, genuine);

    let outgoing = copy(&mut fd, source, 0x10);
    fd.unlace_inherit_storage(source, outgoing);
    assert_eq!(fd.unlace_storage_sources(source).len(), 2);
    call(&mut fd, OpCode::CPUI_CALL, outgoing, 0x10);
    fd.total_replace(outgoing, source).unwrap();
    assert_eq!(fd.unlace_storage_sources(source).len(), 1);
    assert_eq!(
        fd.unlace_storage_sources(source)[0].write_address.as_ref(),
        Some(&genuine_write)
    );

    let meaningful = copy(&mut fd, source, 0x10);
    let memory = Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap());
    let space = fd.new_varnode_space(&memory);
    let pointer = input(&mut fd, 0x90, 8);
    let store = operation(&mut fd, OpCode::CPUI_STORE, &[space, pointer, meaningful]);
    call(&mut fd, OpCode::CPUI_CALL, meaningful, 0x10);
    assert!(!fd.unlace_is_call_transport(meaningful));
    assert_eq!(RulePropagateCopy.apply_op(store, &mut fd), 1);
    assert!(!fd.unlace_is_call_transport(meaningful));
    let write = fd.vbank().get(meaningful).unwrap().get_def().unwrap();
    let instruction = fd.obank().get(write).unwrap().get_addr();
    assert!(
        fd.unlace_storage_sources(source)
            .iter()
            .any(|home| home.write_address.as_ref() == Some(instruction))
    );
}

#[test]
fn zero_upper_pieces_project_transport_without_losing_computed_first_homes() {
    let mut fd = function();
    let source = input(&mut fd, 0x80, 4);
    let carrier = copy(&mut fd, source, 0x10);
    let zero = fd.new_constant(4, 0);
    let piece = operation(&mut fd, OpCode::CPUI_PIECE, &[zero, carrier]);
    let address = register(&fd, 0x10);
    let wide = fd.new_varnode_out(8, &address, piece).unwrap();
    call(&mut fd, OpCode::CPUI_CALL, wide, 0x10);
    assert!(fd.unlace_is_call_transport(carrier));
    assert_eq!(RulePropagateCopy.apply_op(piece, &mut fd), 1);
    assert!(fd.unlace_is_call_transport_projection(wide, 0, 4));
    assert!(!fd.unlace_is_call_transport(wide));
    assert!(!fd.unlace_is_call_transport_projection(wide, 0, 8));
    let cloned = fd.clone_varnode(wide);
    assert!(fd.unlace_is_call_transport_projection(cloned, 0, 4));
    fd.delete_varnode(cloned).unwrap();
    assert!(fd.unlace_call_transport_projection_size(cloned).is_none());

    for opcode in [OpCode::CPUI_LOAD, OpCode::CPUI_INT_ADD] {
        for wrapped in [false, true] {
            let mut fd = function();
            let source = input(&mut fd, 0x80, 4);
            let other = fd.new_constant(4, 1);
            let computed = operation(&mut fd, opcode, &[source, other]);
            let value = fd.new_unique_out(4, computed).unwrap();
            let instruction = fd.obank().get(computed).unwrap().get_addr().clone();
            let value = if wrapped {
                let wrapper = fd.new_op(1, instruction.clone());
                fd.op_set_opcode_code(wrapper, OpCode::CPUI_COPY);
                fd.op_set_input(wrapper, value, 0).unwrap();
                fd.new_unique_out(4, wrapper).unwrap()
            } else {
                value
            };
            let materialize = fd.new_op(1, instruction);
            fd.op_set_opcode_code(materialize, OpCode::CPUI_COPY);
            fd.op_set_input(materialize, value, 0).unwrap();
            let address = register(&fd, 0x10);
            let first_home = fd.new_varnode_out(4, &address, materialize).unwrap();
            call(&mut fd, OpCode::CPUI_CALL, first_home, 0x10);
            let later_home = copy(&mut fd, first_home, 0x90);
            fd.unlace_inherit_storage(value, later_home);
            assert!(!fd.unlace_is_call_transport(first_home));
            fd.unlace_inherit_storage(value, first_home);
            assert!(
                fd.unlace_storage_sources(value)
                    .iter()
                    .any(|home| home.address == address)
            );
        }
    }
}
