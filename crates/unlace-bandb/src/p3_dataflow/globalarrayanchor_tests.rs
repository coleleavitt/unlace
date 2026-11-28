//! Tests of `unlace_globalarrayanchor` that read modules of unlace-bandb, the crate above it, so they live here.

/// The imports of `unlace_globalarrayanchor` itself, as a glob so the tests' own imports win.
#[allow(unused_imports)]
mod module_scope {
    pub(super) use crate::{
        context::{OpId, VarnodeId},
        dtype::type_metatype,
        funcdata::Funcdata,
        ruleaction_1::RuleCollectTerms,
        varnode::varnode_flags,
    };
    pub(super) use smallvec::{SmallVec, smallvec};
    pub(super) use unlace_base::{address::Address, types::uintb};
    pub(super) use unlace_num::opcodes::OpCode;
}
#[allow(unused_imports)]
use crate::globalarrayanchor::*;
#[allow(unused_imports)]
use module_scope::*;

use crate::action::Rule;
use crate::context::{ArchContext, GlobalEntry, GlobalQuery};
use crate::dtype::{Datatype, TypeFactory, TypeFactoryImpl};
use crate::ruleaction_3::RuleCollapseConstants;
use std::rc::Rc;
use unlace_base::address::RangeList;
use unlace_base::partmap::PartMap;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};

fn operation(data: &mut Funcdata, code: OpCode, inputs: &[VarnodeId]) -> (OpId, VarnodeId) {
    let op = data.new_op(inputs.len() as i32, data.get_address().clone());
    data.op_set_opcode(op, crate::typeop::type_op_for(code));
    for (slot, &input) in inputs.iter().enumerate() {
        data.op_set_input(op, input, slot as i32).unwrap();
    }
    let out = data.new_unique_out(8, op).unwrap();
    (op, out)
}

fn entry(first: u64, size: u64, name: &str, ty: Rc<Datatype>, flags: u32) -> GlobalEntry {
    GlobalEntry {
        space_index: 2,
        first,
        last: first + size - 1,
        size: size as i32,
        all_flags: flags,
        addrtied: true,
        uselimit: RangeList::new(),
        symbol_name: name.into(),
        symbol_offset: 0,
        symbol_type: Some(ty),
        scope_path: Vec::new(),
        is_function: false,
        func_inject_id: -1,
        func_no_return: false,
        func_extra_pop: None,
        symbol_id: 0,
    }
}

fn address_fixture() -> (Funcdata, OpId, VarnodeId) {
    let types = TypeFactoryImpl::new();
    types.set_default_alignment_map();
    let array = types
        .get_type_array(2, Rc::new(Datatype::new(2, type_metatype::TYPE_INT)))
        .unwrap();
    fixture_with(
        vec![entry(0x400018, 4, "flags", array, 0)],
        0x400018,
        u64::MAX - 1,
    )
}

fn split_fixture(neighbor: bool, base: u64) -> (Funcdata, OpId) {
    let declared = Rc::new(Datatype::new(4, type_metatype::TYPE_UNKNOWN));
    let mut entries = Vec::new();
    if neighbor {
        entries.push(entry(
            base - 0x100,
            0x100,
            "P",
            declared.clone(),
            varnode_flags::namelock,
        ));
    }
    entries.push(entry(base, 4, "S", declared, varnode_flags::namelock));
    let (data, bias, _) = fixture_with(entries, base, 0u64.wrapping_sub(0x100));
    (data, bias)
}

fn fixture_with(
    entries: Vec<GlobalEntry>,
    base_address: u64,
    displacement: u64,
) -> (Funcdata, OpId, VarnodeId) {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    manager
        .insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    let ram = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        2,
        addrspace_flags::hasphysical,
        1,
        1,
    ));
    manager.insert_space(ram.clone()).unwrap();
    let mut arch = ArchContext::new(manager);
    arch.unlace_options
        .set(crate::globalarrayanchor::GlobalArrayAnchor(true));
    arch.infer_pointers = true;
    arch.opbehaviors
        .resize_with(OpCode::CPUI_MAX as usize, || None);
    arch.opbehaviors[OpCode::CPUI_INT_ADD as usize] =
        Some(Rc::new(unlace_num::opbehavior::OpBehaviorIntAdd));
    arch.infer_ptr_spaces.push(ram.clone());
    let mut entries = entries;
    for entry in &mut entries {
        entry.space_index = ram.get_index();
    }
    arch.global_query = Some(Rc::new(GlobalQuery::new(
        entries,
        RangeList::new(),
        PartMap::new(0),
    )));
    let mut data = Funcdata::new(
        "probe",
        "probe",
        Rc::new(arch),
        Address::new(ram.clone(), 0x10000),
        0x10000000,
        0x40,
    )
    .unwrap();
    data.set_type_recovery(true);
    data.unlace_global_array_anchor_passes = Some(0);
    let index = data.new_varnode(8, &Address::new(ram, 0x100), None);
    let two = data.new_constant(8, 2);
    let (_, scaled) = operation(&mut data, OpCode::CPUI_INT_MULT, &[index, two]);
    let base = data.new_constant(8, base_address);
    let negative = data.new_constant(8, displacement);
    let (bias, biased) = operation(&mut data, OpCode::CPUI_INT_ADD, &[base, negative]);
    let (_, copied) = operation(&mut data, OpCode::CPUI_COPY, &[biased]);
    let (_, address) = operation(&mut data, OpCode::CPUI_INT_ADD, &[copied, scaled]);
    let (_, copied_address) = operation(&mut data, OpCode::CPUI_CAST, &[address]);
    let space = data.new_constant(8, 2);
    operation(&mut data, OpCode::CPUI_LOAD, &[space, copied_address]);
    (data, bias, base)
}

#[test]
fn constant_inner_bias_survives_copies_then_folds_after_recovery_budget() {
    let (mut data, bias, _) = address_fixture();
    assert!(preserve_array_base(&data, bias));
    assert_eq!(RuleCollapseConstants.apply_op(bias, &mut data), 0);
    data.unlace_global_array_anchor_passes = Some(4);
    assert_eq!(RuleCollapseConstants.apply_op(bias, &mut data), 1);
    let op = data.obank().get(bias).unwrap();
    assert_eq!(op.code(), OpCode::CPUI_COPY);
    assert_eq!(
        data.vbank()
            .get(op.get_in(0).unwrap())
            .unwrap()
            .get_offset(),
        0x400016
    );
}

#[test]
fn inferred_arrays_do_not_anchor_large_split_displacements() {
    let (mut data, bias, _) = address_fixture();
    let displacement = data.new_constant(8, 0u64.wrapping_sub(0x10000));
    data.op_set_input(bias, displacement, 1).unwrap();
    assert_eq!(RuleCollapseConstants.apply_op(bias, &mut data), 1);
    let op = data.obank().get(bias).unwrap();
    assert_eq!(op.code(), OpCode::CPUI_COPY);
    assert_eq!(
        data.vbank()
            .get(op.get_in(0).unwrap())
            .unwrap()
            .get_offset(),
        0x3f0018
    );
}

#[test]
fn a_split_high_part_at_a_declaration_is_no_reference_to_it() {
    for neighbor in [true, false] {
        let (data, bias) = split_fixture(neighbor, 0x420000);
        assert!(!preserve_array_base(&data, bias));
        let (data, bias) = split_fixture(neighbor, 0x420010);
        assert!(preserve_array_base(&data, bias));
    }
}

#[test]
fn a_declined_pointer_check_or_disabled_types_releases_the_bias() {
    let (mut data, bias, base) = address_fixture();
    assert!(preserve_array_base(&data, bias));
    data.set_type_recovery(false);
    assert!(!preserve_array_base(&data, bias));
    data.set_type_recovery(true);
    data.vbank_mut().get_mut(base).unwrap().set_ptr_check();
    assert_eq!(RuleCollapseConstants.apply_op(bias, &mut data), 1);
}

#[test]
fn shared_address_temporary_does_not_hold_constants() {
    let (mut data, bias, _) = address_fixture();
    assert!(preserve_array_base(&data, bias));
    let output = data.obank().get(bias).unwrap().get_out().unwrap();
    let space = data.new_constant(8, 2);
    operation(&mut data, OpCode::CPUI_LOAD, &[space, output]);
    assert_eq!(RuleCollapseConstants.apply_op(bias, &mut data), 1);
}

#[test]
fn unused_pure_copy_does_not_hide_the_memory_reader() {
    let (mut data, bias, _) = address_fixture();
    let output = data.obank().get(bias).unwrap().get_out().unwrap();
    operation(&mut data, OpCode::CPUI_COPY, &[output]);
    assert!(preserve_array_base(&data, bias));
    assert_eq!(RuleCollapseConstants.apply_op(bias, &mut data), 0);
}

#[test]
fn shared_literal_temporary_is_not_held_for_pointer_recovery() {
    let (mut data, bias, base) = address_fixture();
    let (_, literal) = operation(&mut data, OpCode::CPUI_COPY, &[base]);
    data.op_set_input(bias, literal, 0).unwrap();
    let other = data.new_constant(8, 8);
    operation(&mut data, OpCode::CPUI_INT_MULT, &[literal, other]);
    assert!(!preserve_array_base(&data, bias));
}

#[test]
fn a_filtered_out_pointer_action_does_not_hold_the_bias() {
    let (mut data, bias, _) = address_fixture();
    data.unlace_global_array_anchor_passes = None;
    assert_eq!(RuleCollapseConstants.apply_op(bias, &mut data), 1);
}
