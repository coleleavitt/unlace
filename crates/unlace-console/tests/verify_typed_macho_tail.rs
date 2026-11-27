//! Precedence regression for the typed Mach-O import tail: a prototype forced
//! at the CALLIND instruction must win over the callable type on its slot.

use std::rc::Rc;

use unlace_base::address::Address;
use unlace_console::decompile_step::{DecompileSeed, decompile_one};
use unlace_console::engine::{EntrySelector, bootstrap_from_object};
use unlace_console::grammar::{DataOrg, parse_protopieces};
use unlace_decomp::dtype::type_metatype;

use unlace_testkit::repo_root;

#[test]
fn callsite_prototype_override_wins_over_slot_prototype() {
    let root = repo_root();
    let fixture = root.join("crates/unlace-analysis/tests/fixtures/macho_imports");
    let spec_roots = vec![root.join("specs").to_str().unwrap().to_string()];
    let mut prog = bootstrap_from_object(fixture.to_str().unwrap(), "", &spec_roots)
        .expect("bootstrap fixture with built processor specs");
    prog.commit_pending_analysis().expect("analysis commit");
    let entry = prog
        .resolve_entry(&EntrySelector::Name("printf".to_string()))
        .expect("printf stub entry");
    let (addr_size, word_size) = prog.arch().data_org();
    let override_pieces = parse_protopieces(
        "int override(long x);",
        prog.arch().types(),
        DataOrg {
            addr_size,
            word_size,
        },
    )
    .expect("override declaration");
    let code = Rc::clone(prog.arch().manage().get_default_code_space().unwrap());
    let callpoint = Address::new(code, 0x1000005cc);
    let overrides = vec![(callpoint, override_pieces)];
    let seed = DecompileSeed::plain(&[], &[]);
    let step = decompile_one(
        prog.arch_mut(),
        &entry.name,
        entry.addr,
        entry.size as i32,
        &seed,
        &overrides,
    );
    let fd = step.result.expect("decompile printf stub");

    assert_eq!(fd.num_calls(), 1, "the veneer should contain one CALLIND");
    let call = fd.get_call_specs(0);
    assert!(
        call.is_input_locked(),
        "call-site override must remain locked"
    );
    assert!(
        !call.is_dotdotdot(),
        "slot's variadic printf prototype replaced the override"
    );
    assert_eq!(call.proto().num_params(), 1);
    let ty = call
        .proto()
        .get_param(0)
        .and_then(|param| param.get_type())
        .expect("override parameter");
    assert_eq!(ty.get_metatype(), type_metatype::TYPE_INT);
    assert_eq!(
        ty.get_size(),
        8,
        "the `long` override, not slot `char *`, must win"
    );
}
