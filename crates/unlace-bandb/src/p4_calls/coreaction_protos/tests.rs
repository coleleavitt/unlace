use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};
use unlace_base::types::int4;

use super::*;
use crate::action::ruleflags;
use crate::context::ArchContext;
use crate::dtype::{Datatype, type_metatype};

// Mirrors the coreaction_early.rs test harness (funcdata_block fixtures).
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

fn build_fd() -> Funcdata {
    let manage = build_manager();
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap()
}

/// Build a `(name, flags)` pair from a boxed action's base.
fn name_flags(a: &dyn Action) -> (String, u32) {
    (a.get_name().to_string(), a.base().flags)
}

fn callind(fd: &mut Funcdata, target: crate::context::VarnodeId) -> crate::context::OpId {
    let ram = Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap());
    let op = fd.new_op(1, Address::new(ram, 0x1010));
    fd.op_set_opcode_code(op, OpCode::CPUI_CALLIND);
    fd.op_set_input(op, target, 0).unwrap();
    op
}

#[test]
fn exact_indirect_slot_accepts_direct_unwritten_memory_varnode() {
    let mut fd = build_fd();
    let ram = Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap());
    let target = fd.vbank_mut().create(
        8,
        Address::new(Rc::clone(&ram), 0x3000),
        Rc::new(Datatype::new(8, type_metatype::TYPE_UNKNOWN)),
    );
    let call = callind(&mut fd, target);

    let (slot, size) = exact_indirect_target_slot(&fd, call).expect("exact RAM target");
    assert_eq!(slot.get_offset(), 0x3000);
    assert_eq!(size, 8);
}

#[test]
fn exact_indirect_slot_accepts_only_literal_load_definition() {
    let mut fd = build_fd();
    let ram = Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap());
    let load = fd.new_op(2, Address::new(Rc::clone(&ram), 0x1008));
    fd.op_set_opcode_code(load, OpCode::CPUI_LOAD);
    let space_id = fd.new_constant(4, ram.get_index() as u64);
    let pointer = fd.new_constant(8, 0x3000);
    fd.op_set_input(load, space_id, 0).unwrap();
    fd.op_set_input(load, pointer, 1).unwrap();
    let loaded = fd.new_unique_out(8, load).unwrap();
    let call = callind(&mut fd, loaded);

    let (slot, size) = exact_indirect_target_slot(&fd, call).expect("literal LOAD target");
    assert_eq!(slot.get_offset(), 0x3000);
    assert_eq!(size, 8);

    let copy = fd.new_op(1, Address::new(ram, 0x100c));
    fd.op_set_opcode_code(copy, OpCode::CPUI_COPY);
    fd.op_set_input(copy, pointer, 0).unwrap();
    let copied = fd.new_unique_out(8, copy).unwrap();
    let copied_call = callind(&mut fd, copied);
    assert!(exact_indirect_target_slot(&fd, copied_call).is_none());
}

fn temp_loaded_at(fd: &mut Funcdata, at: u64) -> crate::context::VarnodeId {
    let ram = Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap());
    let copy = fd.new_op(1, Address::new(Rc::clone(&ram), at));
    fd.op_set_opcode_code(copy, OpCode::CPUI_COPY);
    fd.obank_mut()
        .get_mut(copy)
        .unwrap()
        .set_flag(crate::op::pcodeop_flags::startmark);
    let ty = Rc::new(Datatype::new(8, type_metatype::TYPE_UNKNOWN));
    let word = fd
        .vbank_mut()
        .create(8, Address::new(ram, 0x3000), Rc::clone(&ty));
    fd.op_set_input(copy, word, 0).unwrap();
    let temp = fd.new_unique_out(8, copy).unwrap();
    let addr = fd.vbank().get(temp).unwrap().get_addr().clone();
    fd.vbank_mut().create(8, addr, ty)
}

#[test]
fn exact_indirect_slot_reads_the_slot_its_own_instruction_loads() {
    let mut fd = build_fd();
    let target = temp_loaded_at(&mut fd, 0x1010);
    let call = callind(&mut fd, target);
    let (slot, size) = exact_indirect_target_slot(&fd, call).expect("own-instruction load");
    assert_eq!(slot.get_offset(), 0x3000);
    assert_eq!(size, 8);

    let mut fd = build_fd();
    let target = temp_loaded_at(&mut fd, 0x1008);
    let call = callind(&mut fd, target);
    assert!(exact_indirect_target_slot(&fd, call).is_none());
}

#[test]
fn names_and_groups_match_cpp() {
    // Exact name() strings and group from the C++ constructors.
    let cases: Vec<(Box<dyn Action>, &str)> = vec![
        (ActionPrototypeTypes::boxed("g0"), "prototypetypes"),
        (ActionDefaultParams::boxed("g0"), "defaultparams"),
        (ActionFuncLink::boxed("g0"), "funclink"),
        (ActionFuncLinkOutOnly::boxed("g0"), "funclink_outonly"),
        (ActionParamDouble::boxed("g0"), "paramdouble"),
        (ActionActiveParam::boxed("g0"), "activeparam"),
        (ActionActiveReturn::boxed("g0"), "activereturn"),
        (ActionReturnRecovery::boxed("g0"), "returnrecovery"),
        (ActionRestrictLocal::boxed("g0"), "restrictlocal"),
        (ActionInputPrototype::boxed("g0"), "inputprototype"),
        (ActionOutputPrototype::boxed("g0"), "outputprototype"),
        (ActionPrototypeWarnings::boxed("g0"), "prototypewarnings"),
    ];
    for (act, expect) in &cases {
        assert_eq!(act.get_name(), *expect);
        assert_eq!(act.get_group(), "g0");
    }
    // ActionExtraPopSetup is constructed with a stack space argument.
    let ep = ActionExtraPopSetup::boxed("g0", Some(3));
    assert_eq!(ep.get_name(), "extrapopsetup");
    assert_eq!(ep.get_group(), "g0");
}

#[test]
fn flags_match_cpp_constructors() {
    // rule_onceperfunc actions.
    for a in [
        ActionPrototypeTypes::boxed("g"),
        ActionDefaultParams::boxed("g"),
        ActionFuncLink::boxed("g"),
        ActionFuncLinkOutOnly::boxed("g"),
        ActionInputPrototype::boxed("g"),
        ActionOutputPrototype::boxed("g"),
        ActionPrototypeWarnings::boxed("g"),
        ActionExtraPopSetup::boxed("g", None),
    ] {
        assert_eq!(name_flags(&*a).1, ruleflags::rule_onceperfunc);
    }
    // flags == 0 actions.
    for a in [
        ActionParamDouble::boxed("g"),
        ActionActiveParam::boxed("g"),
        ActionActiveReturn::boxed("g"),
        ActionReturnRecovery::boxed("g"),
        ActionRestrictLocal::boxed("g"),
    ] {
        assert_eq!(name_flags(&*a).1, 0);
    }
}

#[test]
fn clone_filtered_respects_grouplist() {
    let gl = ActionGroupList::from_names(["protorecovery"]);
    // In-group clone succeeds and preserves name/group.
    let a = ActionFuncLink::boxed("protorecovery");
    let c = a.clone_filtered(&gl).expect("in-group clone");
    assert_eq!(c.get_name(), "funclink");
    assert_eq!(c.get_group(), "protorecovery");
    // Out-of-group clone is filtered out (C++ returns null).
    let b = ActionFuncLink::boxed("notenabled");
    assert!(b.clone_filtered(&gl).is_none());
}

#[test]
fn extrapop_clone_carries_stackspace() {
    let gl = ActionGroupList::from_names(["protorecovery"]);
    let a = ActionExtraPopSetup::boxed("protorecovery", Some(7));
    let c = a.clone_filtered(&gl).expect("in-group clone");
    assert_eq!(c.get_name(), "extrapopsetup");
    // The clone is still an ExtraPopSetup with a non-null stack space, so a
    // second clone must also succeed in-group (structural round-trip).
    let c2 = c.clone_filtered(&gl).expect("re-clone");
    assert_eq!(c2.get_name(), "extrapopsetup");
}

#[test]
fn proto_actions_enumerates_in_cpp_order() {
    let acts = proto_actions("g");
    let names: Vec<&str> = acts.iter().map(|a| a.get_name()).collect();
    assert_eq!(
        names,
        vec![
            "prototypetypes",
            "defaultparams",
            "funclink",
            "funclink_outonly",
            "paramdouble",
            "activeparam",
            "activereturn",
            "returnrecovery",
            "restrictlocal",
            "inputprototype",
            "outputprototype",
            "prototypewarnings",
        ]
    );
}

#[test]
fn extrapop_null_stackspace_applies_no_change() {
    // C++ first line: `if (stackspace == (AddrSpace *)0) return 0;`
    // This is the one realized control-path; verify it returns 0 changes.
    let mut act = ActionExtraPopSetup {
        base: ActionBase::new(ruleflags::rule_onceperfunc, "extrapopsetup", "g"),
        stackspace: None,
    };
    let mut data = build_fd();
    let mut ctx = ActionContext::new();
    let res: int4 = act.apply(&mut data, &mut ctx);
    assert_eq!(res, 0);
    assert_eq!(act.base().count, 0);
}
