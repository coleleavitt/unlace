use super::*;

fn one(spec: &str) -> Directive {
    parse_one(spec).expect("parses")
}

#[test]
fn split_map_noprop_parse_and_are_reported_unapplied() {
    for spec in ["split 0x1000 RDI", "map v2 v3", "noprop 0x1004"] {
        let d = one(spec);
        assert!(console_form(&d, Some("f")).is_err(), "{spec}");
    }
}

#[test]
fn the_three_directives_of_the_acceptance_probe() {
    assert_eq!(
        one("prototype authenticate int4 authenticate(char *user,char *pass)").body,
        Body::Prototype {
            func: "authenticate".into(),
            decl: "int4 authenticate(char *user,char *pass)".into()
        }
    );
    assert_eq!(
        one("type v2 char[16]").body,
        Body::Type {
            func: None,
            symbol: "v2".into(),
            decl: "char[16]".into()
        }
    );
    assert_eq!(
        one("name v2 credbuf").body,
        Body::Name {
            func: None,
            symbol: "v2".into(),
            newname: "credbuf".into()
        }
    );
}

#[test]
fn a_directive_may_name_the_function_it_binds_to() {
    assert_eq!(
        one("name authenticate::v2 credbuf").body,
        Body::Name {
            func: Some("authenticate".into()),
            symbol: "v2".into(),
            newname: "credbuf".into()
        }
    );
    // A C++ name is split at its LAST `::`, so the qualifier keeps its own.
    assert_eq!(
        one("type ns::cls::run::v2 char[8]").body,
        Body::Type {
            func: Some("ns::cls::run".into()),
            symbol: "v2".into(),
            decl: "char[8]".into()
        }
    );
}

#[test]
fn param_and_return_carry_storage_and_a_type() {
    assert_eq!(
        one("param 0 RDI char *user").body,
        Body::Param {
            func: None,
            index: 0,
            storage: "%RDI".into(),
            decl: "char *user".into()
        }
    );
    assert_eq!(
        one("return main::RAX int4").body,
        Body::Return {
            func: Some("main".into()),
            storage: "%RAX".into(),
            decl: "int4".into()
        }
    );
}

#[test]
fn addresses_are_hex_with_or_without_the_prefix() {
    assert_eq!(
        one("data 0x601040 char *sneaky").body,
        Body::Data {
            addr: 0x601040,
            decl: "char *sneaky".into()
        }
    );
    assert_eq!(
        one("comment 400699 open the file").body,
        Body::Comment {
            func: None,
            addr: 0x400699,
            text: "open the file".into()
        }
    );
}

#[test]
fn function_is_the_define_function_spelling() {
    assert_eq!(
        one("function 0x1400-0x1480=decrypt").body,
        Body::Function {
            start: 0x1400,
            end: Some(0x1480),
            name: Some("decrypt".into())
        }
    );
}

/// `flow` takes an address and one of the console's four flow words, and
/// qualifies like every other function-scoped directive.
#[test]
fn flow_takes_an_address_and_one_of_four_words() {
    for kind in ["branch", "call", "callreturn", "return"] {
        assert_eq!(
            one(&format!("flow 0x1405 {kind}")).body,
            Body::Flow {
                func: None,
                addr: 0x1405,
                kind: kind.into()
            }
        );
    }
    // Bare hex is the `--define-function` convention, here too.
    assert_eq!(
        one("flow 1405 return").body,
        Body::Flow {
            func: None,
            addr: 0x1405,
            kind: "return".into()
        }
    );
    assert_eq!(
        one("flow sub_13c9::0x1405 callreturn").body,
        Body::Flow {
            func: Some("sub_13c9".into()),
            addr: 0x1405,
            kind: "callreturn".into()
        }
    );
}

/// `callproto` takes a call address and keeps the declaration verbatim,
/// storage annotations included.
#[test]
fn callproto_takes_a_call_address_and_a_declaration() {
    assert_eq!(
        one("callproto report::0x13b0 void f(char *, char *s @RSI, int)").body,
        Body::CallProto {
            func: Some("report".into()),
            addr: 0x13b0,
            decl: "void f(char *, char *s @RSI, int)".into()
        }
    );
    let form = console_form(&one("callproto 13b0 void f(int a)"), Some("report")).unwrap();
    assert_eq!(form.slot, Slot::Function);
    assert_eq!(form.line, "override prototype 0x13b0 void f(int a);");
}

/// A directive unlace cannot honor must say so rather than be dropped: an
/// accepted-and-inert assertion is the failure mode this plane exists to end.
#[test]
fn a_malformed_directive_is_rejected_naming_itself() {
    for spec in [
        "",
        "rename v2 buf",
        "name v2",
        "name v2 buf extra",
        "type v2",
        "data notahex int4 x",
        "param x RDI int4",
        "prototype authenticate",
        "comment 0x400699",
        "flow 0x1405",
        "flow 0x1405 goto",
        "flow notahex return",
        "flow 0x1405 return extra",
        "callee 0x147a",
        "callee notahex handle_open",
        "callee 0x147a handle_open extra",
        "callproto 0x13b0",
        "callproto report void f(void)",
    ] {
        let err = parse_one(spec).expect_err("refuses");
        assert!(err.starts_with("--assert"), "got {err:?} for {spec:?}");
    }
}

/// The console line names the function the directive TARGETS, not the one
/// the declaration is written around.  `parse line extern <decl>` binds by
/// the declared name, so a declaration that renames the function parked its
/// signature on a fresh symbol and the selected function kept its recovered
/// one, exiting 0 with nothing on stderr
/// (`docs/re-needs/text-output-silently-ignores.md`).
#[test]
fn a_prototype_that_renames_the_function_still_names_its_target() {
    let d = one("prototype sub_1400055e0 void * sha256(void *out,void *input)");
    let form = console_form(&d, Some("sub_1400055e0")).expect("has a console form");
    assert_eq!(
        form.line,
        "map prototype sub_1400055e0 void * sha256(void *out,void *input);"
    );
    assert_eq!(form.slot, Slot::Program);
}

#[test]
fn directives_lower_to_their_console_commands() {
    let lowered = |spec: &str| {
        let d = one(spec);
        let f = console_form(&d, Some("authenticate")).expect("has a console form");
        (f.slot, f.line)
    };
    assert_eq!(
        lowered("prototype authenticate int4 authenticate(char *u,char *p)"),
        (
            Slot::Program,
            "map prototype authenticate int4 authenticate(char *u,char *p);".into()
        )
    );
    assert_eq!(
        lowered("typedef struct pt { int x; int y; };"),
        (
            Slot::Program,
            "parse line struct pt { int x; int y; };".into()
        )
    );
    assert_eq!(
        lowered("data 0x601040 char *sneaky"),
        (Slot::Program, "map address 0x601040 char *sneaky".into())
    );
    assert_eq!(
        lowered("param 0 RDI char *user"),
        (Slot::Function, "map param 0 %RDI char *user".into())
    );
    assert_eq!(
        lowered("return RAX int4"),
        (Slot::Function, "map return %RAX int4".into())
    );
    assert_eq!(
        lowered("comment 0x400699 open the file"),
        (
            Slot::Function,
            "comment instruction 0x400699 open the file".into()
        )
    );
    assert_eq!(
        lowered("flow 0x1405 return"),
        (Slot::Function, "override flow 0x1405 return".into())
    );
    assert_eq!(
        lowered("callee authenticate::0x147a handle_open"),
        (
            Slot::Function,
            "override indirect 0x147a handle_open".into()
        )
    );
    assert_eq!(
        lowered("type v2 char[16]"),
        (Slot::Symbol, "retype v2 char[16]".into())
    );
    assert_eq!(
        lowered("name v2 credbuf"),
        (Slot::Symbol, "rename v2 credbuf".into())
    );
    assert_eq!(
        lowered("function 0x1400-0x1480=decrypt"),
        (
            Slot::Program,
            "function bounds 0x1400 0x1480 as decrypt".into()
        )
    );
    assert_eq!(
        lowered("readonly 0x404028+8"),
        (Slot::Image, "readonly 0x404028 8".into())
    );
    assert_eq!(
        lowered("volatile 0x50000000+4"),
        (Slot::Image, "volatile 0x50000000 4".into())
    );
}

/// `format` names a constant by the instruction that reads it, and by its
/// value where that is needed; `isolate` names a local.
#[test]
fn format_and_isolate_parse_and_lower() {
    assert_eq!(
        one("format is_rwx::0x1304 oct").body,
        Body::Format {
            func: Some("is_rwx".into()),
            addr: 0x1304,
            format: "oct".into(),
            value: None
        }
    );
    assert_eq!(
        one("format 1304 char -1").body,
        Body::Format {
            func: None,
            addr: 0x1304,
            format: "char".into(),
            value: Some(u64::MAX)
        }
    );
    assert_eq!(
        one("isolate f::v1").body,
        Body::Isolate {
            func: Some("f".into()),
            symbol: "v1".into()
        }
    );
    let lowered = |spec: &str| {
        let form = console_form(&one(spec), Some("f")).expect("has a console form");
        (form.slot, form.line)
    };
    assert_eq!(
        lowered("format 0x1304 oct"),
        (Slot::Symbol, "force constant 0x1304 oct".into())
    );
    assert_eq!(
        lowered("format 0x1304 dec 511"),
        (Slot::Symbol, "force constant 0x1304 dec 0x1ff".into())
    );
    assert_eq!(lowered("isolate v1"), (Slot::Symbol, "isolate v1".into()));
    for spec in [
        "format 0x1304",
        "format 0x1304 roman",
        "format oct",
        "format 0x1304 oct x",
        "format 0x1304 oct 1 2",
        "isolate",
        "isolate v1 v2",
    ] {
        assert!(
            parse_one(spec)
                .expect_err("refuses")
                .starts_with("--assert"),
            "{spec:?}"
        );
    }
}

/// `readonly`/`volatile` take `<addr>+<size>`; a whitespace-separated size is
/// accepted too, and the size may be decimal or hex.
#[test]
fn a_range_directive_takes_an_address_and_a_size() {
    assert_eq!(
        one("readonly 0x404028+8").body,
        Body::Readonly {
            addr: 0x404028,
            size: 8
        }
    );
    assert_eq!(
        one("volatile 50000000 4").body,
        Body::Volatile {
            addr: 0x5000_0000,
            size: 4
        }
    );
    assert_eq!(
        one("readonly 0x404028+0x10").body,
        Body::Readonly {
            addr: 0x404028,
            size: 16
        }
    );
}

/// A range with no size, a zero size or a junk size is rejected: a property
/// painted over nothing is the accepted-and-inert failure mode again.
#[test]
fn a_range_directive_without_a_usable_size_is_rejected() {
    for spec in [
        "readonly 0x404028",
        "readonly 0x404028+0",
        "readonly 0x404028+banana",
        "readonly +8",
        "volatile 0x50000000 4 8",
        "volatile",
    ] {
        let err = parse_one(spec).expect_err("refuses");
        assert!(err.starts_with("--assert"), "got {err:?} for {spec:?}");
    }
}

/// A `readonly` range implies read-only propagation for the run; nothing
/// else does.
#[test]
fn only_a_readonly_range_implies_read_only_propagation() {
    use unlace_console::assertions::implies_readonly_propagation;
    assert!(implies_readonly_propagation(&[one("readonly 0x404028+8")]));
    assert!(!implies_readonly_propagation(&[one(
        "volatile 0x50000000+4"
    )]));
    assert!(!implies_readonly_propagation(&[one("name v2 credbuf")]));
}

/// A `param`/`return` qualified with a function OTHER than the selected one
/// is a statement about that function's prototype, so it lowers to the
/// cross-function console spelling and moves to the program slot.  Before
/// this the qualifier was dropped and `param callee::0 ECX char *maze`
/// retyped the CALLER
/// (`docs/re-needs/qualified-parameter-assertions-modify.md`).
#[test]
fn bytes_takes_an_address_and_hex_or_a_file() {
    assert_eq!(
        one("bytes 0x43d0c6 8bd581c21f324000").body,
        Body::Bytes {
            addr: 0x43d0c6,
            data: vec![0x8b, 0xd5, 0x81, 0xc2, 0x1f, 0x32, 0x40, 0x00]
        }
    );
    // The address takes the `--define-function` spellings and the payload an
    // optional 0x, so a copied dump line parses without re-editing.
    assert_eq!(
        one("bytes 43d0c6 0x8bd581c2").body,
        one("bytes 0x43d0c6 8bd581c2").body
    );
    let dir = std::env::temp_dir().join(format!("unlace-assertbytes-{}", std::process::id()));
    std::fs::create_dir_all(&dir).expect("scratch dir");
    let path = dir.join("stage1.bin");
    std::fs::write(&path, [0xb8u8, 0x2a, 0x00, 0x00, 0x00, 0xc3]).expect("write");
    assert_eq!(
        one(&format!("bytes 0x43d0c6 @{}", path.display())).body,
        Body::Bytes {
            addr: 0x43d0c6,
            data: vec![0xb8, 0x2a, 0x00, 0x00, 0x00, 0xc3]
        }
    );
    let _ = std::fs::remove_dir_all(&dir);
}

#[test]
fn a_bytes_directive_without_usable_hex_is_rejected() {
    for spec in [
        "bytes 0x43d0c6",
        "bytes 0x43d0c6 abc",
        "bytes 0x43d0c6 zz",
        "bytes notanaddress 90",
        "bytes 0x43d0c6 90 90",
    ] {
        assert!(parse_one(spec).is_err(), "{spec:?} should be rejected");
    }
}

#[test]
fn bytes_lowers_to_the_console_overlay_in_the_image_slot() {
    let form = console_form(&one("bytes 0x43d0c6 8BD5"), None).expect("lowers");
    assert_eq!(form.slot, Slot::Image);
    assert_eq!(form.line, "override bytes 0x43d0c6 8bd5");
}

#[test]
fn a_qualified_param_lowers_against_the_function_it_names() {
    let d = one("param sub_401c50::0 ECX char *maze");
    let form = console_form(&d, Some("sub_402020")).expect("has a console form");
    assert_eq!(form.slot, Slot::Program);
    assert_eq!(form.line, "map param sub_401c50::0 %ECX char *maze");

    let form = console_form(&d, Some("sub_401c50")).expect("has a console form");
    assert_eq!(form.slot, Slot::Function);
    assert_eq!(form.line, "map param 0 %ECX char *maze");

    let d = one("return sub_401c50::EAX int4");
    let form = console_form(&d, Some("sub_402020")).expect("has a console form");
    assert_eq!(form.slot, Slot::Program);
    assert_eq!(form.line, "map return sub_401c50::%EAX int4");
}

/// `comment`, `flow`, `callproto`, `name` and `type` describe the inside of one
/// function body, so naming a function this run did not decompile cannot be honoured.
/// Rejecting says so; applying it to the SELECTED function silently is the
/// bug.
#[test]
fn a_qualified_body_directive_naming_another_function_is_rejected() {
    for spec in [
        "name sub_401c50::v2 credbuf",
        "type sub_401c50::v2 char[16]",
        "comment sub_401c50::0x401c60 checks the maze",
        "flow sub_401c50::0x401c60 return",
        "callproto sub_401c50::0x401c60 void f(void)",
    ] {
        let d = one(spec);
        let detail = console_form(&d, Some("sub_402020")).expect_err("does not bind");
        assert!(detail.contains("sub_401c50"), "{spec}: {detail}");
        // The same directive against its own function still lowers.
        assert!(console_form(&d, Some("sub_401c50")).is_ok(), "{spec}");
    }
}

/// The second `decompile` is emitted ONLY for a symbol-scoped directive, so
/// every other invocation keeps its current cost.
#[test]
fn only_a_symbol_scoped_directive_forces_a_second_pass() {
    assert!(!needs_second_pass(
        &[one("prototype f int4 f(void)")],
        Some("f")
    ));
    assert!(!needs_second_pass(&[one("param 0 RDI int4 a")], Some("f")));
    assert!(needs_second_pass(&[one("name v2 buf")], Some("f")));
    assert!(needs_second_pass(
        &[one("prototype f int4 f(void)"), one("type v2 char[4]")],
        Some("f"),
    ));
}

#[test]
fn a_file_holds_one_directive_per_line_with_comments() {
    let dir = std::env::temp_dir().join(format!("unlace-assertdecl-{}", std::process::id()));
    std::fs::create_dir_all(&dir).expect("scratch dir");
    let path = dir.join("overrides.unlace");
    std::fs::write(
        &path,
        "# worked out by hand\nname v2 credbuf\n\ntype v2 char[16] # the read buffer\n",
    )
    .expect("write");
    let directives = parse_flag(&format!("@{}", path.display())).expect("parses");
    assert_eq!(directives.len(), 2);
    assert_eq!(directives[0].raw, "name v2 credbuf");
    assert_eq!(
        directives[1].body,
        Body::Type {
            func: None,
            symbol: "v2".into(),
            decl: "char[16]".into()
        }
    );
    let _ = std::fs::remove_dir_all(&dir);
}

#[test]
fn a_missing_file_is_an_error_naming_the_path() {
    let err = parse_flag("@/nonexistent/unlace-asserts.txt").expect_err("refuses");
    assert!(
        err.contains("/nonexistent/unlace-asserts.txt"),
        "got {err:?}"
    );
}
