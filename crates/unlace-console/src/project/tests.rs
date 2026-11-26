use super::{
    AssemblyScratch, FuncResult, contains_identifier, prune_unreferenced_synth_types, redo_replaces,
};

fn global_declarations(results: &[FuncResult]) -> String {
    super::global_declarations(
        results,
        &super::GlobalAliasNames::from_results(results),
        &[],
    )
}

#[test]
fn named_globals_do_not_collapse_distinct_storage_or_split_aliases() {
    let mut result = streamed("void sample(void)", "int");
    let object = |name: &str, address| super::GlobalInfo {
        address,
        name: name.into(),
        declaration: format!("unsigned int {name}"),
        size: 4,
        unknown: false,
        direct: true,
        aggregate: false,
        elem: false,
        integer: true,
    };
    result.globals = vec![object("counter", 0x5000), object("counter", 0x5000)];
    assert_eq!(
        global_declarations(std::slice::from_ref(&result)),
        "extern unsigned int counter;\n"
    );
    result.globals.push(object("counter", 0x6000));
    let declarations = global_declarations(std::slice::from_ref(&result));
    assert!(
        declarations.contains("multiple storage addresses"),
        "{declarations}"
    );
    assert!(!declarations.contains("extern "), "{declarations}");
    result.globals = vec![object("counter", 0x5000), object("alias", 0x5000)];
    let declarations = global_declarations(&[result]);
    assert!(
        declarations.contains("aliases require shared storage"),
        "{declarations}"
    );
    assert!(!declarations.contains("extern "), "{declarations}");
    let mut whole = object("whole", 0x5000);
    whole.size = 8;
    whole.declaration = "unsigned long whole".into();
    let mut result = streamed("void sample(void)", "int");
    result.globals = vec![whole, object("interior", 0x5004)];
    let declarations = global_declarations(&[result]);
    assert!(declarations.contains("overlapped"), "{declarations}");
    assert!(!declarations.contains("extern "), "{declarations}");
}

#[test]
fn named_globals_take_the_integer_type_other_functions_read_them_at() {
    let named = |declaration: &str, unknown: bool, integer: bool| super::GlobalInfo {
        address: 0x5000,
        name: "count".into(),
        declaration: declaration.into(),
        size: 8,
        unknown,
        direct: true,
        aggregate: false,
        elem: false,
        integer,
    };
    let mut agnostic = streamed("void bump(void)", "int");
    agnostic.globals = vec![named("unsigned long count", true, true)];
    let mut signed = streamed("int test(void)", "int");
    signed.globals = vec![named("long count", false, true)];
    let declarations = global_declarations(&[agnostic.clone(), signed]);
    assert_eq!(declarations, "extern long count;\n");
    let mut pointer = streamed("char *name(void)", "int");
    pointer.globals = vec![named("char *count", false, false)];
    let declarations = global_declarations(&[agnostic.clone(), pointer]);
    assert!(declarations.contains("read at two types"), "{declarations}");
    assert!(!declarations.contains("extern "), "{declarations}");
    let declarations = global_declarations(std::slice::from_ref(&agnostic));
    assert_eq!(declarations, "extern unsigned long count;\n");
}

#[test]
fn scalar_global_declarations_keep_conflicting_direct_types_diagnostic() {
    let mut result = streamed("void sample(void)", "int");
    let direct = |ty: &str| super::GlobalInfo {
        address: 0x5000,
        name: "dat_5000".into(),
        declaration: format!("{ty} dat_5000"),
        size: 4,
        unknown: false,
        direct: true,
        aggregate: false,
        elem: false,
        integer: ty != "float",
    };
    result.globals = vec![direct("unsigned int")];
    assert_eq!(
        global_declarations(std::slice::from_ref(&result)),
        "extern unsigned int dat_5000;\n"
    );
    result.globals.push(direct("float"));
    let declarations = global_declarations(&[result]);
    assert!(!declarations.contains("extern "), "{declarations}");
    assert!(declarations.contains("read at two types"), "{declarations}");
    assert!(
        declarations.contains("unsigned int dat_5000"),
        "{declarations}"
    );
    assert!(declarations.contains("float dat_5000"), "{declarations}");
}

#[test]
fn overlapping_direct_globals_are_not_split_into_two_objects() {
    let global = |address: u64, ty: &str, size: i64, direct: bool| super::GlobalInfo {
        address,
        name: format!("dat_{address:x}"),
        declaration: format!("{ty} dat_{address:x}"),
        size,
        unknown: false,
        direct,
        aggregate: false,
        elem: false,
        integer: true,
    };
    let mut result = streamed("void sample(void)", "int");
    result.globals = vec![
        global(0x5000, "unsigned int", 4, true),
        global(0x5004, "unsigned int", 4, true),
    ];
    let adjacent = global_declarations(std::slice::from_ref(&result));
    assert_eq!(
        adjacent,
        "extern unsigned int dat_5000;\nextern unsigned int dat_5004;\n"
    );
    result.globals = vec![
        global(0x5000, "unsigned long", 8, true),
        global(0x5004, "unsigned int", 4, true),
    ];
    let split = global_declarations(std::slice::from_ref(&result));
    assert!(!split.contains("extern "), "{split}");
    assert!(
        split.contains("dat_5000 is overlapped by dat_5004"),
        "{split}"
    );
    assert!(
        split.contains("dat_5004 is overlapped by dat_5000"),
        "{split}"
    );
    result.globals = vec![
        global(0x5000, "long", 8, false),
        global(0x5004, "int", 4, true),
    ];
    let taken = global_declarations(&[result]);
    assert!(taken.starts_with("extern long dat_5000;\n"), "{taken}");
    assert!(
        taken.contains("dat_5004 is overlapped by dat_5000"),
        "{taken}"
    );
    assert!(!taken.contains("extern int dat_5004"), "{taken}");
}

#[test]
fn overlapping_string_arrays_share_one_declared_owner() {
    let string = |name: &str, address, size| super::GlobalInfo {
        address,
        name: name.into(),
        declaration: format!("char {name}[{size}]"),
        size,
        unknown: false,
        direct: true,
        aggregate: false,
        elem: false,
        integer: false,
    };
    let mut result = streamed("void sample(void)", "int");
    result.globals = vec![string("whole", 0x5000, 16), string("part", 0x5004, 8)];
    result.code = Some("void sample(void) { consume(whole,part); }".into());
    assert_eq!(
        global_declarations(&[result]),
        "extern char whole[16];\n#define part (*(char (*)[8])((unsigned char *)&whole + 0x4))\n",
    );
}

#[test]
fn overlapping_string_aliases_keep_shadowed_names_diagnostic() {
    let string = |name: &str, address, size| super::GlobalInfo {
        address,
        name: name.into(),
        declaration: format!("char {name}[{size}]"),
        size,
        unknown: false,
        direct: true,
        aggregate: false,
        elem: false,
        integer: false,
    };
    let mut result = streamed("void sample(void)", "int");
    result.globals = vec![string("whole", 0x5000, 16), string("part", 0x5004, 8)];
    for (prototype, code) in [
        ("void sample(char *part);", "void sample(char *part) {}"),
        (
            "void sample(void);",
            "void sample(void) {\n  char whole[16]; // local\n  consume(part);\n}",
        ),
        (
            "void sample(void);",
            "void sample(void) {\n  consume(other->part);\n}",
        ),
    ] {
        result.proto = Some(prototype.into());
        result.code = Some(code.into());
        let declarations = global_declarations(std::slice::from_ref(&result));
        assert!(
            declarations.contains("whole is overlapped by part"),
            "{declarations}"
        );
        assert!(!declarations.contains("#define"), "{declarations}");
    }
}

#[test]
fn overlapping_string_aliases_retain_name_evidence_after_streaming() {
    let string = |name: &str, address, size| super::GlobalInfo {
        address,
        name: name.into(),
        declaration: format!("char {name}[{size}]"),
        size,
        unknown: false,
        direct: true,
        aggregate: false,
        elem: false,
        integer: false,
    };
    let mut result = streamed("char *sample(void)", "int");
    result.globals = vec![string("whole", 0x5000, 16), string("part", 0x5004, 8)];
    for body in [
        "char *sample(void) {\n  return part;\n}",
        "char *sample(void) {\n  char whole[16]; // local\n  return part;\n}",
    ] {
        result.code = Some(body.into());
        let records = std::slice::from_ref(&result);
        let buffered = super::build_header("sample", "", "", records).unwrap();
        let names = super::GlobalAliasNames::from_results(records);
        result.code = None;
        let streamed =
            super::build_header_with_names("sample", "", "", std::slice::from_ref(&result), &names)
                .unwrap();
        assert_eq!(streamed, buffered);
        assert_eq!(
            streamed.contains("#define part"),
            !body.contains("char whole")
        );
        let missing = super::build_header("sample", "", "", std::slice::from_ref(&result)).unwrap();
        assert!(!missing.contains("#define part"), "{missing}");
    }
}

#[test]
fn overlapping_string_aliases_respect_header_and_call_names() {
    let string = |name: &str, address, size| super::GlobalInfo {
        address,
        name: name.into(),
        declaration: format!("char {name}[{size}]"),
        size,
        unknown: false,
        direct: true,
        aggregate: false,
        elem: false,
        integer: false,
    };
    let mut result = streamed("void sample(void)", "int");
    result.globals = vec![string("whole", 0x5000, 16), string("part", 0x5004, 8)];
    result.code = Some("void sample(void) { consume(whole, part); }".into());
    for (prelude, types, calls) in [
        ("#define part 3\n", "", vec![]),
        ("", "typedef int whole;\n", vec![]),
        ("", "", vec!["int helper(int part);".into()]),
    ] {
        result.call_declarations = calls;
        let header =
            super::build_header("sample", prelude, types, std::slice::from_ref(&result)).unwrap();
        assert!(header.contains("whole is overlapped by part"), "{header}");
        assert!(!header.contains("#define part (*"), "{header}");
    }
}

#[test]
fn complete_project_checks_actual_c_names_after_bodies_are_streamed() {
    let conflicts = |types: &str, records: &[FuncResult]| {
        crate::projectfunctionnames::conflicts(records, &super::typedef_names(types)).len()
    };
    let mut first = streamed("void linked(void)", "int");
    first.name = "source_one".into();
    first.emitted_c_name = Some("linked".into());
    first.byte_address = 0x1000;
    let mut second = first.clone();
    second.name = "source_two".into();
    second.byte_address = 0x2000;
    assert_eq!(conflicts("", &[first.clone(), first.clone()]), 0);
    let records = [first.clone(), second];
    assert_eq!(conflicts("", &records), 1);
    let header = super::build_header("fresh.so", "", "", &records).unwrap();
    assert!(
        header.contains("/* C function name has multiple owning entries, including 0x1000 */"),
        "{header}"
    );
    assert!(!header.contains("#error"), "{header}");
    assert_eq!(conflicts("typedef int linked;", &[first.clone()]), 1);
    first.globals.push(super::GlobalInfo {
        address: 0x5000,
        name: "linked".into(),
        declaration: "int linked".into(),
        size: 4,
        unknown: false,
        direct: false,
        aggregate: false,
        elem: false,
        integer: false,
    });
    assert_eq!(conflicts("", &[first]), 1);
}

#[test]
fn streamed_call_declarations_keep_types_and_avoid_repeating_definitions() {
    let mut result = streamed("int local(int a0);", "int");
    result.call_declarations = vec![
        "int local(int);".into(),
        "int external_value(struct_42 *value);".into(),
        "int external_value(struct_42 *value);".into(),
        "int split(int);".into(),
        "long split(long);".into(),
    ];
    assert!(super::names_any_type(&result, &["struct_42".into()]));
    let header = super::build_header("fresh", "", "", &[result]).unwrap();
    assert_eq!(header.matches("extern int external_value").count(), 1);
    assert!(!header.contains("extern int local"));
    assert!(
        !header.contains("extern int split") && !header.contains("extern long split"),
        "{header}"
    );
}

fn wide_call() -> FuncResult {
    let mut result = streamed("unsigned long long caller(void);", "unsigned long long");
    result.call_declarations = vec!["unsigned long long producer(int,int,int,int);".into()];
    result.callwide_prototypes = vec![unlace_decomp::callwide::ExportPrototype {
        name: "producer".into(),
        entry: 0x2000,
        signed: false,
        inputs: vec![true; 4],
        definition: false,
    }];
    result
}

#[test]
fn wide_call_header_conflicts_refuse_instead_of_omitting_the_declaration() {
    let result = wide_call();
    let header = super::build_header("fresh", "", "", std::slice::from_ref(&result)).unwrap();
    assert!(header.contains("extern unsigned long long producer(int,int,int,int);"));
    let mut missing = result.clone();
    missing.call_declarations.clear();
    assert!(super::build_header("fresh", "", "", &[missing]).is_err());
    let mut conflicting = result.clone();
    conflicting
        .call_declarations
        .push("long long producer(int,int,int,int);".into());
    assert!(super::build_header("fresh", "", "", &[conflicting]).is_err());
    for types in ["typedef int producer;", ""] {
        let prelude = if types.is_empty() {
            "typedef int producer;"
        } else {
            ""
        };
        assert!(
            super::build_header("fresh", prelude, types, std::slice::from_ref(&result)).is_err()
        );
    }
    let mut data_collision = result.clone();
    data_collision.globals.push(super::GlobalInfo {
        address: 0x5000,
        name: "producer".into(),
        declaration: "int producer".into(),
        size: 4,
        unknown: false,
        direct: false,
        aggregate: false,
        elem: false,
        integer: false,
    });
    assert!(super::build_header("fresh", "", "", &[data_collision]).is_err());
    for change in 0..3 {
        let mut another = result.clone();
        match change {
            0 => another.callwide_prototypes[0].signed = true,
            1 => another.callwide_prototypes[0]
                .inputs
                .pop()
                .map(|_| ())
                .unwrap(),
            _ => another.callwide_prototypes[0].entry += 4,
        }
        assert!(super::build_header("fresh", "", "", &[result.clone(), another]).is_err());
    }
    let mut buffered = result.clone();
    buffered.code = Some("unsigned long long caller(void) { return producer(1,2,3,4); }".into());
    assert_eq!(
        super::build_header("fresh", "", "", &[buffered]).unwrap(),
        header
    );
}

#[test]
fn selected_wide_definition_requires_the_exact_typed_contract() {
    let caller = wide_call();
    let mut definition = streamed(
        "unsigned long long producer(int a,int b,int c,int d);",
        "int",
    );
    definition.address = 0x2000;
    definition.byte_address = 0x2000;
    definition.callwide_prototypes = caller.callwide_prototypes.clone();
    definition.callwide_prototypes[0].definition = true;
    let header =
        super::build_header("fresh", "", "", &[caller.clone(), definition.clone()]).unwrap();
    assert!(!header.contains("extern unsigned long long producer"));
    assert!(header.contains("producer(int a,int b,int c,int d)"));
    let mut duplicate = definition.clone();
    duplicate.byte_address = 0x3000;
    duplicate.callwide_prototypes.clear();
    assert!(super::build_header("fresh", "", "", &[definition.clone(), duplicate]).is_err());
    let mut missing = definition.clone();
    missing.callwide_prototypes.clear();
    assert!(super::build_header("fresh", "", "", &[caller.clone(), missing]).is_err());
    let mut unsigned_input = definition.clone();
    unsigned_input.proto =
        Some("unsigned long long producer(int a,int b,int c,unsigned int d);".into());
    unsigned_input.callwide_prototypes[0].inputs[3] = false;
    let mut unsigned_caller = caller.clone();
    unsigned_caller.call_declarations =
        vec!["unsigned long long producer(unsigned int,int,int,int);".into()];
    unsigned_caller.callwide_prototypes[0].inputs[0] = false;
    assert!(
        super::build_header("fresh", "", "", &[caller.clone(), unsigned_caller.clone()]).is_err()
    );
    let header = super::build_header(
        "fresh",
        "",
        "",
        &[caller.clone(), unsigned_caller, unsigned_input],
    )
    .unwrap();
    assert!(header.contains("producer(int a,int b,int c,unsigned int d)"));
    assert!(!header.contains("extern unsigned long long producer"));
    for change in 0..3 {
        let mut wrong = definition.clone();
        match change {
            0 => wrong.callwide_prototypes[0].signed = true,
            1 => wrong.callwide_prototypes[0].inputs.push(true),
            _ => wrong.callwide_prototypes[0].entry += 4,
        }
        assert!(super::build_header("fresh", "", "", &[caller.clone(), wrong]).is_err());
    }
}

/// A result carrying only what the streaming export keeps.
fn streamed(proto: &str, param_type: &str) -> FuncResult {
    FuncResult {
        name: "sub_1000".into(),
        address: 0x1000,
        byte_address: 0x1000,
        size: 0x20,
        // `StreamWriter::record` nulls the body once it is appended to the
        // `.c`, long before the header is built from these records.
        code: None,
        error: None,
        proto: Some(proto.into()),
        emitted_c_name: None,
        call_declarations: Vec::new(),
        callwide_prototypes: Vec::new(),
        variables: vec![super::VarInfo {
            name: "a0".into(),
            type_name: param_type.into(),
            stack_offset: None,
            size: 8,
            is_param: true,
            arg_index: Some(0),
            line_numbers: vec![],
            addresses: vec![],
            split_piece: false,
            storage: Vec::new(),
        }],
        types: vec![],
        stack_objects: Vec::new(),
        globals: vec![],
        field_calls: Vec::new(),
        line_mappings: vec![],
        aliases: vec![],
        object_location: None,
        callee_hints: vec![],
        synth: None,
        pointerargs: None,
        warnings: Vec::new(),
        detail: None,
    }
}

#[test]
fn a_register_local_has_no_asm_variable_comment() {
    let row = |name: &str, stack_offset: Option<i64>| super::VarInfo {
        name: name.into(),
        type_name: "long".into(),
        stack_offset,
        size: 8,
        is_param: false,
        arg_index: None,
        line_numbers: vec![],
        addresses: vec![],
        split_piece: false,
        storage: Vec::new(),
    };
    let mut r = streamed("long sub_1000(long);", "long");
    r.variables
        .extend([row("local_18", Some(-0x18)), row("v1", None)]);
    assert_eq!(
        super::var_header_lines(&r),
        "; arg:   a0 (long)\n; stack: local_18 @ [stack-0x18] (long)\n"
    );
    r.variables.retain(|v| v.kind() == "register");
    assert_eq!(super::var_header_lines(&r), "");
    assert_eq!(
        crate::project_stream::render_variables_section(&[r]),
        "\n; --- variables ---\n"
    );
}

#[test]
fn pointer_arguments_use_only_the_final_successful_results() {
    use unlace_decomp::pointerargs::{Call, Parameter, Position, Record};
    let storage = (("register".into(), 0x38), 8);
    let mut callee = streamed("void sink(unsigned char *);", "unsigned char *");
    callee.code = Some("void sink(unsigned char *p) {}".into());
    callee.pointerargs = Some(Record {
        entry: ("ram".into(), 0x1000),
        parameters: vec![Some(Parameter {
            storage: storage.clone(),
            spelling: "unsigned char *".into(),
        })],
        calls: vec![],
    });
    let mut caller = streamed("long caller(void);", "long");
    caller.code = Some("sink(&v1);".into());
    caller.pointerargs = Some(Record {
        entry: ("ram".into(), 0x2000),
        parameters: vec![],
        calls: vec![Call {
            callee: ("ram".into(), 0x1000),
            index: 0,
            storage,
            actual: "long *".into(),
            position: Position { line: 1, column: 5 },
            expression: "&v1".into(),
        }],
    });
    for failed in [false, true] {
        let mut results = vec![caller.clone(), callee.clone()];
        if failed {
            results[1].error = Some("timeout".into());
        }
        super::reconcile_pointer_arguments(&mut results);
        let expected = if failed {
            "sink(&v1);"
        } else {
            "sink((unsigned char *)&v1);"
        };
        assert_eq!(results[0].code.as_deref(), Some(expected));
        super::reconcile_pointer_arguments(&mut results);
        assert_eq!(results[0].code.as_deref(), Some(expected));
    }
    callee.pointerargs.as_mut().unwrap().parameters[0]
        .as_mut()
        .unwrap()
        .spelling = "char *".into();
    let mut results = vec![caller.clone(), callee.clone()];
    super::reconcile_pointer_arguments(&mut results);
    assert_eq!(results[0].code.as_deref(), Some("sink((char *)&v1);"));

    // A site that drifted from its text costs only that cast: the body,
    // its line mappings and the callee's declarations all stand.
    let record = caller.pointerargs.as_mut().unwrap();
    let mut drifted = record.calls[0].clone();
    drifted.position = Position { line: 2, column: 1 };
    record.calls.push(drifted);
    let mut later = record.calls[0].clone();
    later.position.line = 3;
    record.calls.push(later);
    caller.code = Some("sink(&v1);\nsink(&v1);\nsink(&v1);".into());
    caller.line_mappings = vec![unlace_decomp::decompile_drive::LineMapping {
        line_number: 1,
        addresses: vec![0x2040],
    }];
    caller.detail = Some(Box::default());
    let mut results = vec![caller, callee];
    super::reconcile_pointer_arguments(&mut results);
    assert_eq!(
        results[0].code.as_deref(),
        Some("sink((char *)&v1);\nsink(&v1);\nsink((char *)&v1);")
    );
    assert!(results[0].error.is_none());
    assert_eq!(results[0].line_mappings.len(), 1);
    let detail = results[0].detail.as_ref().unwrap();
    assert!(
        detail.tokens.is_empty() && detail.tokens_error.is_some(),
        "a stale token map is withdrawn"
    );
    assert!(
        results
            .iter()
            .all(|r| r.pointerargs.as_ref().is_some_and(|p| p.calls.is_empty()))
    );
}

/// (unlace `structsynth`) The header prune must decide "referenced" without a
/// body: the streaming writer sets `code = None` on every record before the
/// set reaches `build_header`, so a definition the export still names has to
/// survive on the prototype and the variable rows alone.
#[test]
fn a_streamed_record_keeps_the_definition_its_prototype_names() {
    let types = concat!(
        "struct struct_0 {\n    unsigned char *field_0x0;\n    int field_0x8;\n};\n",
        "\n",
        "struct struct_1 {\n    unsigned long field_0x0;\n};\n",
    );
    let kept = prune_unreferenced_synth_types(
        types,
        &[streamed("void sub_1000(struct_0 *a0);", "struct_0 *")],
    );
    assert!(kept.contains("struct struct_0 {"), "{kept}");
    assert!(!kept.contains("struct struct_1 {"), "{kept}");
    // Nothing names either one: both go.
    let none =
        prune_unreferenced_synth_types(types, &[streamed("void sub_1000(long a0);", "long")]);
    assert!(!none.contains("struct struct_0 {"), "{none}");
}

/// (unlace `structsynth`) Under `--mode fast` the sweep's redo can run out of
/// the watchdog budget the first pass fit in; the body that succeeded stays.
#[test]
fn a_failed_redo_never_replaces_a_body_that_succeeded() {
    let good = streamed("void sub_1000(struct_0 *a0);", "struct_0 *");
    let mut failed = streamed("void sub_1000(struct_1 *a0);", "struct_1 *");
    failed.error = Some("timed out".into());
    assert!(!redo_replaces(&good, &failed));
    assert!(redo_replaces(&good, &good));
    assert!(redo_replaces(&failed, &good));
    assert!(redo_replaces(&failed, &failed));
}

/// (unlace `structsynth`) The convergence sweep decides which results to
/// decompile again by looking for a superseded type name in their text, so
/// `struct_1` must not answer for `struct_10` or for `my_struct_1`.
#[test]
fn a_type_name_is_matched_as_a_whole_identifier() {
    assert!(contains_identifier("void f(struct_1 *a0)", "struct_1"));
    assert!(contains_identifier("  struct_1 field;", "struct_1"));
    assert!(!contains_identifier("void f(struct_10 *a0)", "struct_1"));
    assert!(!contains_identifier("void f(my_struct_1 *a0)", "struct_1"));
    assert!(!contains_identifier("void f(struct_1x *a0)", "struct_1"));
    assert!(contains_identifier("struct_1", "struct_1"));
    assert!(!contains_identifier("nothing here", "struct_1"));
    // The first hit is not the only one considered.
    assert!(contains_identifier("struct_10 a; struct_1 b;", "struct_1"));
}

/// Every typedef shape `field_decl_text` composes must yield its name, or a
/// function sharing that spelling is declared next to it and the header
/// stops compiling. Function-pointer and array typedefs do not end in their
/// own name.
#[test]
fn typedef_names_reads_every_declarator_shape() {
    let block = concat!(
        "typedef struct stat stat;\n",
        "typedef char *mystr;\n",
        "typedef char buf[8];\n",
        "typedef int (*fnptr)(void);\n",
        "typedef void (*sighandler_t)(int); /* opaque */\n",
        "typedef int (*table[4])(char *, int);\n",
        "typedef int plain(void);\n",
        "struct notatypedef { int x; };\n",
    );
    let got = super::typedef_names(block);
    let want: std::collections::BTreeSet<String> = [
        "stat",
        "mystr",
        "buf",
        "fnptr",
        "sighandler_t",
        "table",
        "plain",
    ]
    .iter()
    .map(|s| s.to_string())
    .collect();
    assert_eq!(got, want);
}

fn legacy_instruction_line(addr: u64, raw: &[u8], mnem: &str, body: &str) -> String {
    let hex = raw
        .iter()
        .map(|b| format!("{b:02x}"))
        .collect::<Vec<_>>()
        .join(" ");
    let line = format!("  {addr:08x}: {hex:<24}  {mnem:<10} {body}");
    format!("{}\n", line.trim_end())
}

#[test]
fn assembly_scratch_formats_exactly_without_reallocating() {
    let mut scratch = AssemblyScratch::new();
    let capacities = (
        scratch.mnem.capacity(),
        scratch.body.capacity(),
        scratch.raw.capacity(),
        scratch.line.capacity(),
        scratch.db.capacity(),
    );
    let pointers = (
        scratch.mnem.as_ptr(),
        scratch.body.as_ptr(),
        scratch.raw.as_ptr(),
        scratch.line.as_ptr(),
        scratch.db.as_ptr(),
    );
    let mut out = String::new();

    scratch.mnem.push_str("PUSH");
    scratch.body.push_str("RBP");
    scratch.raw.push(0x55);
    scratch.emit_instruction(0x40071d, &mut out);

    scratch.mnem.clear();
    scratch.body.clear();
    scratch.raw.clear();
    scratch.mnem.push_str("RET");
    scratch.raw.push(0xc3);
    scratch.emit_instruction(0x40071e, &mut out);

    for (idx, byte) in [0x00, 0x0f, 0xa5, 0xff].into_iter().enumerate() {
        scratch.push_db(0x400720 + idx as u64, byte, &mut out);
    }
    scratch.flush_db(&mut out);

    assert_eq!(
        out,
        concat!(
            "  0040071d: 55                        PUSH       RBP\n",
            "  0040071e: c3                        RET\n",
            "  00400720: db 0x00, 0x0f, 0xa5, 0xff\n",
        )
    );
    assert_eq!(
        capacities,
        (
            scratch.mnem.capacity(),
            scratch.body.capacity(),
            scratch.raw.capacity(),
            scratch.line.capacity(),
            scratch.db.capacity(),
        )
    );
    assert_eq!(
        pointers,
        (
            scratch.mnem.as_ptr(),
            scratch.body.as_ptr(),
            scratch.raw.as_ptr(),
            scratch.line.as_ptr(),
            scratch.db.as_ptr(),
        )
    );
}

#[test]
fn assembly_scratch_matches_legacy_format_edge_cases() {
    let cases: &[(&[u8], &str, &str)] = &[
        (&[], "", ""),
        (&[0x00, 0x01, 0x7f, 0x80, 0xfe, 0xff], "LOAD", "R0,0xff "),
        (
            &[0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99],
            "TENLETTERS",
            "",
        ),
        (&[0xab], "é", "operand"),
    ];
    let mut scratch = AssemblyScratch::new();
    for (idx, &(raw, mnem, body)) in cases.iter().enumerate() {
        scratch.raw.clear();
        scratch.raw.extend_from_slice(raw);
        scratch.mnem.clear();
        scratch.mnem.push_str(mnem);
        scratch.body.clear();
        scratch.body.push_str(body);
        let mut actual = String::new();
        let addr = 0x400700 + idx as u64;
        scratch.emit_instruction(addr, &mut actual);
        assert_eq!(actual, legacy_instruction_line(addr, raw, mnem, body));
    }
}
