use super::*;

fn program() -> ConsoleProgram {
    image_program("mips32_be_declared.elf")
}

fn image_program(name: &str) -> ConsoleProgram {
    let root = std::path::PathBuf::from(env!("CARGO_MANIFEST_DIR"));
    let fixture = root
        .join("../unlace-cli/tests/fixtures/callwide")
        .join(name);
    let specs = root.join("../..").join("specs");
    crate::engine::bootstrap_from_image_with_isa(
        fixture.to_str().unwrap(),
        "",
        &[specs.to_str().unwrap().to_owned()],
        None,
    )
    .unwrap()
}

#[test]
fn refused_producer_does_not_publish_other_strict_dwarf_contracts() {
    use crate::engine::EntrySelector;
    let mut prog = image_program("mips32_be_dwarf.elf");
    prog.arch_mut()
        .unlace_options
        .set(unlace_decomp::callwide::CallWide(true));
    prog.arch_mut()
        .unlace_options
        .set(unlace_decomp::analysisgates::Dwarf(true));
    prog.arch_mut()
        .unlace_options
        .set(unlace_decomp::narrowext::NarrowExtMode::Compiler);
    prog.commit_pending_analysis().unwrap();
    let producer = prog
        .resolve_entry(&EntrySelector::Name("produce_sum".into()))
        .unwrap();
    let caller = prog
        .resolve_entry(&EntrySelector::Name("caller64".into()))
        .unwrap();
    assert!(
        prog.arch()
            .symboltab
            .function_proto_pieces_across_scopes(&caller.addr)
            .is_none()
    );
    let bytes = prog.callwide.image.as_ref().unwrap();
    assert!(facts(&prog, bytes).is_some());
    let strict = unlace_analysis::dwarf::callwide_declarations(
        &unlace_analysis::loadimage_object::parse_object(bytes).unwrap(),
        prog.arch(),
        &declaration_inventory(&prog),
    )
    .unwrap();
    assert!(
        strict
            .iter()
            .any(|(entry, _)| *entry == caller.addr.get_offset())
    );
    let narrow = prog
        .arch()
        .types()
        .get_base(4, unlace_decomp::dtype::type_metatype::TYPE_UINT)
        .unwrap();
    declaration(
        &mut prog,
        producer.addr.get_offset(),
        &PrototypePieces {
            name: "produce_sum".into(),
            outtype: Some(narrow),
            first_var_arg_slot: -1,
            ..Default::default()
        },
        None,
        DeclarationSource::Assertion,
    );
    prepare(&mut prog);
    assert!(
        prog.arch()
            .unlace_tables
            .get::<unlace_decomp::callwide::ProofSlot>()
            .is_empty()
    );
    assert!(
        prog.arch()
            .symboltab
            .function_proto_pieces_across_scopes(&caller.addr)
            .is_none()
    );
    assert!(prog.arch().function_prototype_model("caller64").is_none());
}

#[test]
fn positive_proof_publishes_only_its_used_strict_contracts() {
    use crate::engine::EntrySelector;
    let mut prog = image_program("mips32_be_dwarf.elf");
    prog.arch_mut()
        .unlace_options
        .set(unlace_decomp::callwide::CallWide(true));
    prog.arch_mut()
        .unlace_options
        .set(unlace_decomp::analysisgates::Dwarf(true));
    prog.arch_mut()
        .unlace_options
        .set(unlace_decomp::narrowext::NarrowExtMode::Compiler);
    prog.commit_pending_analysis().unwrap();
    let caller = prog
        .resolve_entry(&EntrySelector::Name("caller64".into()))
        .unwrap();
    let ignored = prog
        .resolve_entry(&EntrySelector::Name("caller_ignored".into()))
        .unwrap();
    let unused = prog
        .resolve_entry(&EntrySelector::Name("consume_two32".into()))
        .unwrap();
    assert!(
        prog.arch()
            .symboltab
            .function_proto_pieces_across_scopes(&caller.addr)
            .is_none()
    );
    assert!(
        prog.arch()
            .function_prototype_model("consume_two32")
            .is_none()
    );
    prepare(&mut prog);
    assert!(
        !prog
            .arch()
            .unlace_tables
            .get::<unlace_decomp::callwide::ProofSlot>()
            .is_empty()
    );
    assert!(
        prog.arch()
            .unlace_tables
            .get::<unlace_decomp::callwide::ProofSlot>()
            .needed_declaration(caller.addr.get_offset())
    );
    assert!(
        prog.arch()
            .unlace_tables
            .get::<unlace_decomp::callwide::ProofSlot>()
            .needed_declaration(ignored.addr.get_offset())
    );
    assert!(
        !prog
            .arch()
            .unlace_tables
            .get::<unlace_decomp::callwide::ProofSlot>()
            .needed_declaration(unused.addr.get_offset())
    );
    let ignored_contract = prog
        .arch()
        .symboltab
        .function_proto_pieces_across_scopes(&ignored.addr)
        .unwrap();
    assert_eq!(
        ignored_contract
            .intypes
            .iter()
            .map(|ty| ty.get_size())
            .collect::<Vec<_>>(),
        [8, 8]
    );
    assert_eq!(ignored_contract.outtype.as_ref().unwrap().get_size(), 4);
    assert_eq!(
        prog.arch()
            .symboltab
            .function_proto_pieces_across_scopes(&caller.addr)
            .unwrap()
            .outtype
            .as_ref()
            .unwrap()
            .get_size(),
        8
    );
    assert!(
        prog.arch()
            .function_prototype_model("consume_two32")
            .is_none()
    );
}

#[test]
fn missing_narrow_extension_policy_declines_without_contract_publication() {
    use crate::engine::EntrySelector;
    use unlace_decomp::narrowext::NarrowExtMode;
    for mode in [NarrowExtMode::Abi, NarrowExtMode::Off] {
        let mut prog = image_program("mips32_be_dwarf.elf");
        prog.arch_mut()
            .unlace_options
            .set(unlace_decomp::callwide::CallWide(true));
        prog.arch_mut()
            .unlace_options
            .set(unlace_decomp::analysisgates::Dwarf(true));
        prog.arch_mut().unlace_options.set(mode);
        prog.commit_pending_analysis().unwrap();
        let caller = prog
            .resolve_entry(&EntrySelector::Name("caller64".into()))
            .unwrap();
        assert!(
            prog.arch()
                .symboltab
                .function_proto_pieces_across_scopes(&caller.addr)
                .is_none()
        );
        let bytes = prog.callwide.image.as_ref().unwrap();
        assert!(facts(&prog, bytes).is_some());
        prepare(&mut prog);
        assert!(
            prog.arch()
                .unlace_tables
                .get::<unlace_decomp::callwide::ProofSlot>()
                .is_empty(),
            "{}",
            mode.as_str()
        );
        assert!(
            prog.arch()
                .symboltab
                .function_proto_pieces_across_scopes(&caller.addr)
                .is_none()
        );
        assert!(prog.arch().function_prototype_model("caller64").is_none());
    }
}

#[test]
fn external_option_model_mode_and_kassert_commands_reopen_preflight() {
    use crate::ifacedecomp::{DECOMPILE_MODULE, IfaceDecompData, register_decomp_commands};
    use crate::ifaceterm::ConsoleCommands;
    let commands = [
        "option callwide off",
        "option callwide on",
        "option protoeval __stdcall",
        "option bejoin off",
        "option bejoin evidence",
        "mode reliable",
        "option callwide on",
        "option bejoin evidence",
        "kassert P3 comparison-canonicalization original",
    ];
    let mut status = ConsoleCommands::into_status(
        commands
            .iter()
            .map(|command| (*command).to_owned())
            .collect(),
    );
    register_decomp_commands(&mut status);
    crate::console::register_unlace_commands(&mut status);
    let mut prog = program();
    prog.arch_mut()
        .unlace_options
        .set(unlace_decomp::callwide::CallWide(true));
    prog.arch_mut()
        .unlace_options
        .set(unlace_decomp::analysisgates::Dwarf(false));
    status
        .get_data_mut(DECOMPILE_MODULE)
        .unwrap()
        .as_any_mut()
        .downcast_mut::<IfaceDecompData>()
        .unwrap()
        .conf = Some(prog);
    for command in commands {
        let data = status
            .get_data_mut(DECOMPILE_MODULE)
            .unwrap()
            .as_any_mut()
            .downcast_mut::<IfaceDecompData>()
            .unwrap();
        let prog = data.conf.as_mut().unwrap();
        if prog
            .arch()
            .unlace_options
            .get::<unlace_decomp::callwide::CallWide>()
            .0
            && prog
                .arch()
                .unlace_options
                .get::<unlace_decomp::bejoin::BeJoinMode>()
                .proves()
        {
            prepare(prog);
            assert!(prog.callwide.frozen, "completed preflight before {command}");
        }
        status
            .run_command()
            .unwrap_or_else(|error| panic!("{command}: {error}"));
        let prog = status
            .get_data_mut(DECOMPILE_MODULE)
            .unwrap()
            .as_any_mut()
            .downcast_mut::<IfaceDecompData>()
            .unwrap()
            .conf
            .as_ref()
            .unwrap();
        assert!(
            !prog.callwide.frozen,
            "external command left preflight frozen: {command}"
        );
    }
}

#[test]
fn partial_storage_cannot_publish_an_unproven_recovered_sibling_type() {
    use crate::assertions::{Body, Directive};
    let mut prog = program();
    let wide = prog
        .arch()
        .types()
        .get_base(8, unlace_decomp::dtype::type_metatype::TYPE_UINT)
        .unwrap();
    let pieces = PrototypePieces {
        name: "consume64".into(),
        outtype: Some(wide.clone()),
        intypes: vec![wide],
        innames: vec!["recovered".into()],
        first_var_arg_slot: -1,
        ..Default::default()
    };
    prog.arch_mut()
        .set_function_prototype_pieces("consume64", pieces.clone());
    prog.set_pending_prototype("consume64", pieces);
    assert!(prog.callwide.declarations.is_empty());
    prog.set_assertions(vec![Directive {
        raw: "param consume64::0 %a0 unsigned int supplied".into(),
        body: Body::Param {
            func: Some("consume64".into()),
            index: 0,
            storage: "%a0".into(),
            decl: "unsigned int supplied".into(),
        },
    }]);
    crate::assertions::apply_program_scoped(&mut prog);
    assert_eq!(
        prog.assertion_outcomes()[0].status,
        "applied",
        "{:?}",
        prog.assertion_outcomes()[0].detail
    );
    assert_eq!(
        prog.pending_prototype("consume64")
            .unwrap()
            .outtype
            .as_ref()
            .unwrap()
            .get_size(),
        8
    );
    assert!(prog.callwide.declarations.is_empty());
    assert!(prog.callwide.unavailable.is_some());
    assert!(
        prog.arch()
            .unlace_tables
            .get::<unlace_decomp::callwide::ProofSlot>()
            .is_empty()
    );
}

fn record(target: Target, name: &str, source: DeclarationSource) -> Record {
    Record {
        target,
        pieces: PrototypePieces {
            name: name.to_owned(),
            ..Default::default()
        },
        model: Rc::new(ProtoModel::new(&unlace_base::space::AddrSpaceManager::new())),
        source,
    }
}

#[test]
fn arm_image_cannot_supply_sealed_mips_frontend_authority() {
    let fixture = std::path::PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../unlace-cli/tests/fixtures/callwide/arm32_be_declared.elf");
    let bytes = std::fs::read(fixture).unwrap();
    assert!(!State::object(&bytes).supported());
}

#[test]
fn mips_symbol_mode_markers_refuse_legacy_image_authority() {
    let fixture = std::path::PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../unlace-cli/tests/fixtures/callwide/mips32_be_declared.elf");
    let original = std::fs::read(fixture).unwrap();
    let file = unlace_analysis::loadimage_object::parse_object(&original).unwrap();
    assert!(mips_container(&original, &file));
    let word = |at| u32::from_be_bytes(original[at..at + 4].try_into().unwrap()) as usize;
    let shoff = word(32);
    let shnum = u16::from_be_bytes(original[48..50].try_into().unwrap()) as usize;
    let mut function = None;
    for index in 0..shnum {
        let at = shoff + index * 40;
        if word(at + 4) != 2 {
            continue;
        }
        for symbol in (word(at + 16)..word(at + 16) + word(at + 20)).step_by(16) {
            if original[symbol + 12] & 15 == 2 {
                function = Some(symbol);
                break;
            }
        }
    }
    let function = function.unwrap();
    for mode in [0xf0, 0x80, 0x04] {
        let mut bytes = original.clone();
        bytes[function + 13] = (bytes[function + 13] & 3) | mode;
        let file = unlace_analysis::loadimage_object::parse_object(&bytes).unwrap();
        assert!(!mips_container(&bytes, &file), "st_other={mode:#x}");
    }
    let mut bytes = original;
    bytes[function + 7] |= 1;
    let file = unlace_analysis::loadimage_object::parse_object(&bytes).unwrap();
    assert!(!mips_container(&bytes, &file), "odd function address");
}

#[test]
fn normalized_mips_language_keeps_only_the_legacy_default_compiler() {
    use unlace_decomp::sleigh_arch::normalize_architecture;
    let normalized = normalize_architecture("MIPS:BE:32:default").unwrap();
    assert!(supported_language(&normalized));
    for id in [
        "MIPS:BE:32:R6:default",
        "MIPS:BE:32:micro:default",
        "MIPS:BE:32:default:eabi",
        "MIPS:LE:32:default:default",
        "ARM:BE:32:v7:default",
    ] {
        assert!(!supported_language(id));
    }
}

#[test]
fn named_origin_waits_for_complete_inventory_and_resolves_unique_alias() {
    let records = [record(
        Target::Named("sink".into()),
        "decl",
        DeclarationSource::Dwarf,
    )];
    assert!(resolve_declarations(&records, []).is_none());
    let resolved =
        resolve_declarations(&records, [(0x1000, "renamed".into(), vec!["sink".into()])]).unwrap();
    assert_eq!(resolved[0].entry, 0x1000);
    assert_eq!(resolved[0].source, DeclarationSource::Dwarf);
    assert!(
        resolve_declarations(
            &records,
            [
                (0x1000, "sink".into(), vec![]),
                (0x2000, "sink".into(), vec![])
            ]
        )
        .is_none()
    );
}

#[test]
fn explicit_origin_wins_when_strict_dwarf_is_extracted_later() {
    let records = [
        record(
            Target::Entry(0x1000),
            "explicit",
            DeclarationSource::Assertion,
        ),
        record(
            Target::Named("sink".into()),
            "dwarf",
            DeclarationSource::Dwarf,
        ),
    ];
    let resolved = resolve_declarations(&records, [(0x1000, "sink".into(), vec![])]).unwrap();
    assert_eq!(resolved.len(), 1);
    assert_eq!(resolved[0].pieces.name, "explicit");
    assert_eq!(resolved[0].source, DeclarationSource::Assertion);
    assert!(resolve_declarations(&records, [(0x2000, "sink".into(), vec![])]).is_none());
}
