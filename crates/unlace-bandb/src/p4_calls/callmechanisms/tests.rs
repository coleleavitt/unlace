use super::*;
#[test]
fn auto_fires_only_on_the_elfv1_toc_fact() {
    let parse = |value| OptionCallMechanisms.apply(value).unwrap().0;
    for (value, mode) in [
        ("off", CallMechanismMode::Off),
        ("auto", CallMechanismMode::Auto),
        ("on", CallMechanismMode::On),
    ] {
        assert_eq!(parse(value), mode);
        assert_eq!(mode.as_str(), value);
    }
    assert_eq!(parse(""), CallMechanismMode::On);
    assert!(OptionCallMechanisms.apply("").unwrap().1.ends_with(" on"));
    assert!(OptionCallMechanisms.apply("full").is_err());
    assert_eq!(
        [false, true].map(|fact| CallMechanismMode::Auto.fires(fact)),
        [false, true]
    );
    assert_eq!(
        [false, true].map(|fact| CallMechanismMode::Off.fires(fact)),
        [false; 2]
    );
    assert_eq!(
        [false, true].map(|fact| CallMechanismMode::On.fires(fact)),
        [true; 2]
    );
}

#[test]
fn unasserted_function_uses_the_effective_default_entry_model() {
    use unlace_base::address::Address;
    use unlace_base::space::{AddrSpace, ConstantSpace, UniqueSpace, spacetype};
    use unlace_num::opcodes::OpCode::CPUI_COPY;
    use unlace_sleigh::semantics::{ConstTpl, ConstType, ConstructTpl, OpTpl, VarnodeTpl};
    let mut manager = AddrSpaceManager::new();
    let constant = Rc::new(ConstantSpace::new());
    manager.insert_space(constant.clone()).unwrap();
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
        0,
        1,
        1,
    ));
    manager.insert_space(ram.clone()).unwrap();
    manager.set_default_code_space(2).unwrap();
    let real = |value| ConstTpl::new_real(ConstType::Real, value);
    let mut operation = OpTpl::new(CPUI_COPY);
    operation.set_output(VarnodeTpl::new(
        ConstTpl::new_space(ram.clone()),
        real(0x20),
        real(8),
    ));
    operation.add_input(VarnodeTpl::new(
        ConstTpl::new_space(constant),
        real(7),
        real(8),
    ));
    let mut template = ConstructTpl::new();
    assert!(template.add_op(operation));
    let payload = crate::inject_sleigh::SleighPayload::Sleigh(
        crate::inject_sleigh::InjectPayloadSleigh::new(b"test", b"entry", CALLMECHANISM_TYPE),
    );
    let mechanisms = Mechanisms {
        payloads: [(0, (payload, Some(template)))].into(),
    };
    let mut model = crate::fspec::ProtoModel::new(&manager);
    model.set_inject_ids(0, -1);
    let mut context = crate::context::ArchContext::new(manager);
    context.evalfp_current = Some(Rc::new(model));
    context.unlace_states.set(Rc::new(mechanisms));
    context.call_mechanism_effects = true;
    let address = Address::new(ram.clone(), 0x1000);
    let mut data = crate::funcdata::Funcdata::new(
        "sample",
        "sample",
        Rc::new(context),
        address.clone(),
        0x10000000,
        0x40,
    )
    .unwrap();
    let root = data.bblocks_root_pub();
    let block = data.bblocks_mut().new_block_basic(root);
    if let crate::block::BlockKind::Basic(basic) = data.bblocks_mut().arena[block].kind_mut() {
        basic.cover.insert_range(ram.clone(), 0x1000, 0x1000);
    }
    let anchor = data.new_op(1, address);
    data.op_set_opcode_code(anchor, CPUI_COPY);
    let read = data.new_varnode_space_off(8, ram.clone(), 0x20);
    data.op_set_input(anchor, read, 0).unwrap();
    data.new_varnode_out(8, &Address::new(ram, 0x28), anchor)
        .unwrap();
    data.op_insert_end(anchor, block);
    assert!(!data.get_func_proto().has_model());
    apply_entry(&mut data).unwrap();
    let injected = data
        .obank()
        .get(anchor)
        .unwrap()
        .basic_neighbours()
        .0
        .unwrap();
    let input = data.obank().get(injected).unwrap().get_in(0).unwrap();
    assert_eq!(data.vbank().get(input).unwrap().get_addr().get_offset(), 7);
    apply_entry(&mut data).unwrap();
    assert_eq!(
        data.obank().get(anchor).unwrap().basic_neighbours().0,
        Some(injected)
    );
}

#[test]
fn instruction_context_placeholders_are_rejected_before_emission() {
    use unlace_num::opcodes::OpCode::CPUI_COPY;
    use unlace_sleigh::semantics::{ConstTpl, ConstType, ConstructTpl, OpTpl, VarnodeTpl};
    for kind in [
        ConstType::JStart,
        ConstType::JNext,
        ConstType::JNext2,
        ConstType::JRelative,
        ConstType::JFlowref,
        ConstType::JFlowdest,
    ] {
        let mut operation = OpTpl::new(CPUI_COPY);
        operation.add_input(VarnodeTpl::new(
            ConstTpl::new(),
            ConstTpl::new_type(kind),
            ConstTpl::new_real(ConstType::Real, 8),
        ));
        let mut template = ConstructTpl::new();
        assert!(template.add_op(operation));
        assert!(validate_template(&template).is_err());
    }
}

#[test]
fn late_prototype_changes_reflow_for_added_removed_or_different_effects() {
    let manager = AddrSpaceManager::new();
    let prototype = |id| {
        let mut model = crate::fspec::ProtoModel::new(&manager);
        model.set_inject_ids(-1, id);
        let mut proto = crate::fspec::FuncProto::new();
        proto.set_model(Some(Rc::new(model)));
        proto
    };
    let empty = crate::fspec::FuncProto::new();
    let ordinary = prototype(-1);
    let first = prototype(0);
    let second = prototype(1);
    assert!(!requires_reflow(&empty, &ordinary));
    assert!(!requires_reflow(&first, &first));
    for (old, new) in [
        (&empty, &first),
        (&ordinary, &first),
        (&first, &ordinary),
        (&first, &second),
        (&second, &first),
    ] {
        assert!(requires_reflow(old, new));
    }
}

#[test]
fn repeated_installations_preserve_partial_temporary_aliases_without_sharing() {
    use unlace_base::address::Address;
    use unlace_base::space::{AddrSpace, ConstantSpace, UniqueSpace, spacetype};
    use unlace_num::opcodes::OpCode::CPUI_COPY;
    use unlace_num::pcoderaw::VarnodeData;
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
        0,
        1,
        1,
    ));
    manager.insert_space(ram.clone()).unwrap();
    manager.set_default_code_space(2).unwrap();
    let temporary = manager.get_unique_space().unwrap().clone();
    let context = Rc::new(crate::context::ArchContext::new(manager));
    let address = Address::new(ram.clone(), 0x1000);
    let mut data = crate::funcdata::Funcdata::new(
        "sample",
        "sample",
        context,
        address.clone(),
        0x10000000,
        0x40,
    )
    .unwrap();
    let root = data.bblocks_root_pub();
    let block = data.bblocks_mut().new_block_basic(root);
    let anchor = data.new_op(1, address.clone());
    data.op_set_opcode_code(anchor, CPUI_COPY);
    let input = data.new_constant(8, 3);
    data.op_set_input(anchor, input, 0).unwrap();
    data.new_varnode_out(8, &Address::new(ram.clone(), 0x20), anchor)
        .unwrap();
    data.op_insert_end(anchor, block);
    let storage = |space: Rc<AddrSpace>, offset, size| VarnodeData {
        space: Some(space),
        offset,
        size,
    };
    let operations = vec![
        Operation {
            address: address.clone(),
            opcode: CPUI_COPY,
            output: Some(storage(temporary.clone(), 0x100, 8)),
            inputs: vec![storage(ram.clone(), 0x20, 8)],
        },
        Operation {
            address,
            opcode: CPUI_COPY,
            output: Some(storage(ram, 0x28, 4)),
            inputs: vec![storage(temporary, 0x104, 4)],
        },
    ];
    let installed_range = |data: &crate::funcdata::Funcdata| {
        let first = data
            .obank()
            .get(anchor)
            .unwrap()
            .basic_neighbours()
            .1
            .unwrap();
        let second = data
            .obank()
            .get(first)
            .unwrap()
            .basic_neighbours()
            .1
            .unwrap();
        let output = data.obank().get(first).unwrap().get_out().unwrap();
        let input = data.obank().get(second).unwrap().get_in(0).unwrap();
        let lo = data.vbank().get(output).unwrap().get_addr().get_offset();
        assert_eq!(
            data.vbank().get(input).unwrap().get_addr().get_offset(),
            lo + 4
        );
        (lo, lo + 8)
    };
    install_after(&mut data, anchor, &operations).unwrap();
    let first = installed_range(&data);
    install_after(&mut data, anchor, &operations).unwrap();
    let second = installed_range(&data);
    assert!(first.1 <= second.0 || second.1 <= first.0);
}

#[test]
fn collection_keeps_memory_effects_and_rejects_control_flow() {
    use unlace_base::address::Address;
    use unlace_base::space::{AddrSpace, ConstantSpace, spacetype};
    use unlace_num::opcodes::OpCode::*;
    use unlace_num::pcoderaw::VarnodeData;
    use unlace_sleigh::translate::PcodeEmit;
    let register = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false,
        8,
        1,
        2,
        0,
        0,
        0,
    ));
    let constant = Rc::new(ConstantSpace::new());
    let address = Address::new(register.clone(), 0x100);
    let value = VarnodeData {
        space: Some(register),
        offset: 0x20,
        size: 8,
    };
    let displacement = VarnodeData {
        space: Some(constant),
        offset: u64::MAX,
        size: 8,
    };
    let mut output = Operations::default();
    output.dump(
        &address,
        CPUI_INT_ADD,
        Some(&value),
        &[value.clone(), displacement],
    );
    output.dump(
        &address,
        CPUI_STORE,
        None,
        &[value.clone(), value.clone(), value],
    );
    assert_eq!(output.0.len(), 2);
    assert!(validate_operations(&output.0).is_ok());
    for opcode in [
        CPUI_BRANCH,
        CPUI_CBRANCH,
        CPUI_BRANCHIND,
        CPUI_CALL,
        CPUI_CALLIND,
        CPUI_RETURN,
        CPUI_MULTIEQUAL,
        CPUI_INDIRECT,
    ] {
        output.dump(&address, opcode, None, &[]);
        assert!(validate_operations(&output.0).is_err());
        output.0.pop();
    }
    output.0[0].inputs[0].space = None;
    assert!(validate_operations(&output.0).is_err());
}

#[test]
fn absent_or_uncompiled_mechanisms_are_errors() {
    let manager = AddrSpaceManager::new();
    let mut context = crate::pcodeinject::InjectContext::default();
    assert!(
        Mechanisms::default()
            .operations(0, &manager, &mut context)
            .is_err()
    );
    let mut library = PcodeInjectLibrarySleigh::new(0x1000);
    register(
        Some(
            r#"<compiler_spec><prototype name="pair">
          <pcode inject="uponreturn"><body>R0=R1;</body></pcode>
        </prototype></compiler_spec>"#,
        ),
        &manager,
        &mut library,
    )
    .unwrap();
    let mechanisms = Mechanisms::from_library(&library);
    assert_eq!(mechanisms.payloads.len(), 1);
    assert!(mechanisms.operations(0, &manager, &mut context).is_err());
}

#[test]
fn prototype_payloads_have_distinct_boundary_and_model_identities() {
    let manager = AddrSpaceManager::new();
    let mut library = PcodeInjectLibrarySleigh::new(0x1000);
    register(Some(r#"<compiler_spec>
          <default_proto><prototype name="first">
            <pcode inject="uponreturn"><body>R0=R1;</body></pcode>
            <pcode inject="uponentry"><body>R2=R3;</body></pcode>
          </prototype></default_proto>
          <prototype name="second"><pcode inject="uponreturn"><body>R4=R5;</body></pcode></prototype>
        </compiler_spec>"#), &manager, &mut library).unwrap();
    assert_eq!(ids(&library, "first"), (1, 0));
    assert_eq!(ids(&library, "second"), (-1, 2));
    assert_eq!(ids(&library, "missing"), (-1, -1));
    assert_eq!(compiled_ids(&library, "first"), (-1, -1));
    assert_eq!(compiled_ids(&library, "second"), (-1, -1));
    assert!(register(Some(r#"<compiler_spec><prototype name="bad"><pcode inject="other"><body>R0=R1;</body></pcode></prototype></compiler_spec>"#), &manager, &mut library).is_err());
}
