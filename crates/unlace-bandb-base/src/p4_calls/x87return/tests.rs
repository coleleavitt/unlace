use super::*;
use crate::{
    context::ArchContext,
    dtype::{Datatype, TypeFactoryImpl},
    fspec::{ParamEntry, ProtoModel},
};
use std::rc::Rc;
use unlace_base::{
    address::Address,
    error::{UnlaceError, UnlaceResult},
    space::{
        AddrSpace, AddrSpaceManager, ConstantSpace, RegisterLookup, UniqueSpace, VarnodeStorage,
        spacetype,
    },
};

struct Lookup(Rc<AddrSpace>);
impl RegisterLookup for Lookup {
    fn get_register(&self, name: &str) -> UnlaceResult<VarnodeStorage> {
        if name != "ST0" {
            return Err(UnlaceError::lowlevel("unknown register"));
        }
        Ok(VarnodeStorage {
            space: Some(self.0.clone()),
            offset: 0x100,
            size: 10,
        })
    }
    fn get_register_name(&self, _: &Rc<AddrSpace>, _: u64, _: i32) -> String {
        String::new()
    }
    fn get_exact_register_name(&self, _: &Rc<AddrSpace>, _: u64, _: i32) -> String {
        String::new()
    }
}

fn sample(
    offset: u64,
    class: type_class,
    metatype: type_metatype,
    locked: bool,
) -> (Funcdata, ParamActive, crate::context::VarnodeId) {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    manager
        .insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    let ram = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        4,
        1,
        2,
        0,
        0,
        0,
    ));
    let register = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false,
        4,
        1,
        3,
        0,
        0,
        0,
    ));
    manager.insert_space(ram.clone()).unwrap();
    manager.insert_space(register.clone()).unwrap();
    manager.set_register_lookup(Rc::new(Lookup(register.clone())));
    let mut model = ProtoModel::new(&manager);
    model.build_param_list("standard").unwrap();
    model.output_mut().push_entry(
        ParamEntry::seed(
            0,
            class,
            register.clone(),
            offset,
            10,
            1,
            0,
            0,
            false,
            false,
            &[],
            &manager,
        )
        .unwrap(),
    );
    let mut arch = ArchContext::new(manager);
    let types = TypeFactoryImpl::new();
    types.set_max_basetype_size(16);
    types.set_default_alignment_map();
    arch.types = Some(Rc::new(types));
    let mut data = Funcdata::new(
        "sample",
        "sample",
        Rc::new(arch),
        Address::new(ram, 0x1000),
        0x10000000,
        0x40,
    )
    .unwrap();
    data.get_func_proto_mut().set_internal(
        Rc::new(model),
        Rc::new(Datatype::new_with_align(0, 1, type_metatype::TYPE_VOID)),
    );
    let address = Address::new(register, offset);
    let value = data.new_varnode(10, &address, None);
    data.vbank_mut().get_mut(value).unwrap().update_type_locked(
        Rc::new(Datatype::new_with_align(10, 1, metatype)),
        locked,
        true,
    );
    if locked {
        data.vbank_mut()
            .get_mut(value)
            .unwrap()
            .set_flags_pub(crate::varnode::varnode_flags::typelock);
    }
    assert_eq!(data.vbank().get(value).unwrap().is_type_lock(), locked);
    let ret = data.new_op(2, data.get_address().clone());
    data.op_set_opcode_code(ret, OpCode::CPUI_RETURN);
    let zero = data.new_constant(4, 0);
    data.op_set_input(ret, zero, 0).unwrap();
    data.op_set_input(ret, value, 1).unwrap();
    data.obank_mut().mark_alive(ret);
    let mut active = ParamActive::new(false);
    active.register_trial(&address, 10);
    active.get_trial_mut(0).mark_used();
    (data, active, value)
}

#[test]
fn finalized_native_float_result_supplies_its_type() {
    let (mut data, active, value) = sample(
        0x100,
        type_class::TYPECLASS_FLOAT,
        type_metatype::TYPE_UNKNOWN,
        false,
    );
    type_returns(&mut data, &active);
    assert_eq!(
        data.vbank().get(value).unwrap().get_type().get_metatype(),
        type_metatype::TYPE_FLOAT
    );
}

#[test]
fn a_result_left_by_a_call_keeps_its_callee_type() {
    let (mut data, active, value) = sample(
        0x100,
        type_class::TYPECLASS_FLOAT,
        type_metatype::TYPE_UNKNOWN,
        false,
    );
    let call = data.new_op(1, data.get_address().clone());
    data.op_set_opcode_code(call, OpCode::CPUI_CALLIND);
    let target = data.new_constant(4, 0x2000);
    data.op_set_input(call, target, 0).unwrap();
    data.op_set_output(call, value).unwrap();
    data.obank_mut().mark_alive(call);
    type_returns(&mut data, &active);
    assert_eq!(
        data.vbank().get(value).unwrap().get_type().get_metatype(),
        type_metatype::TYPE_UNKNOWN
    );
}

#[test]
fn unrelated_storage_and_declared_values_are_preserved() {
    for (offset, class, metatype, locked) in [
        (
            0x110,
            type_class::TYPECLASS_FLOAT,
            type_metatype::TYPE_UNKNOWN,
            false,
        ),
        (
            0x100,
            type_class::TYPECLASS_GENERAL,
            type_metatype::TYPE_UNKNOWN,
            false,
        ),
        (
            0x100,
            type_class::TYPECLASS_FLOAT,
            type_metatype::TYPE_INT,
            false,
        ),
        (
            0x100,
            type_class::TYPECLASS_FLOAT,
            type_metatype::TYPE_UNKNOWN,
            true,
        ),
    ] {
        let (mut data, active, value) = sample(offset, class, metatype, locked);
        type_returns(&mut data, &active);
        assert_eq!(
            data.vbank().get(value).unwrap().get_type().get_metatype(),
            metatype
        );
    }
}
