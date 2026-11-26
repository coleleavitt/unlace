use super::*;

fn function() -> FuncResult {
    FuncResult {
        name: "f".into(),
        address: 0x401000,
        byte_address: 0x401000,
        size: 12,
        code: Some("int f(int x)\n{\n  return x;\n}".into()),
        error: None,
        proto: None,
        emitted_c_name: None,
        call_declarations: Vec::new(),
        callwide_prototypes: Vec::new(),
        variables: vec![VarInfo {
            name: "x".into(),
            type_name: "int".into(),
            stack_offset: None,
            size: 4,
            is_param: true,
            arg_index: Some(0),
            line_numbers: vec![3],
            addresses: vec![0x401004],
            split_piece: false,
            storage: Vec::new(),
        }],
        types: vec![TypeInfo {
            name: "mystruct".into(),
            definition: "struct mystruct {\n    int a;\n};\n".into(),
            size: 4,
        }],
        stack_objects: Vec::new(),
        globals: Vec::new(),
        field_calls: Vec::new(),
        line_mappings: vec![LineMapping {
            line_number: 3,
            addresses: vec![0x401004, 0x401008],
        }],
        aliases: Vec::new(),
        object_location: None,
        callee_hints: Vec::new(),
        synth: None,
        pointerargs: None,
        warnings: Vec::new(),
        detail: None,
    }
}

fn render(omit: Omit) -> serde_json::Value {
    let text = dumps_indent2(&result_json(
        "fixture",
        &[function()],
        "c-language",
        None,
        None,
        None,
        &[],
        &Default::default(),
        omit,
        Default::default(),
    ));
    serde_json::from_str(&text).unwrap()
}

#[test]
fn result_schema_adds_line_and_variable_provenance() {
    let rendered = dumps_indent2(&result_json(
        "fixture",
        &[function()],
        "c-language",
        None,
        None,
        None,
        &[],
        &Default::default(),
        Default::default(),
        Default::default(),
    ));
    assert!(!rendered.contains("\"omitted\""));
    assert!(rendered.contains("\"address\": 4198400"));
    assert!(rendered.contains("\"code\": \"int f(int x)\\n{\\n  return x;\\n}\""));
    assert!(rendered.contains("\"line_mappings\": ["));
    assert!(rendered.contains("\"line_number\": 3"));
    assert!(rendered.contains("\"line_numbers\": [\n            3"));
    assert!(rendered.contains("\"addresses\": [\n            4198404"));
    // (unlace `structdefs`) The layout side of the record, additive to every
    // key above it.
    assert!(rendered.contains("\"types\": ["));
    assert!(rendered.contains("\"definition\": \"struct mystruct {"));
}

#[test]
fn the_written_document_is_the_whole_one() {
    let mut omit = Omit::default();
    omit.add("types").unwrap();
    let funcs = [
        function(),
        FuncResult {
            code: None,
            error: Some("boom".into()),
            ..function()
        },
    ];
    for (funcs, error, total, omit) in [
        (&funcs[..], None, None, Omit::default()),
        (&funcs[..1], Some("x"), Some(9), omit),
        (&[][..], None, None, omit),
    ] {
        let whole = dumps_indent2(&result_json(
            "fixture",
            funcs,
            "c-language",
            None,
            error,
            total,
            &[],
            &Default::default(),
            omit,
            Default::default(),
        ));
        assert_eq!(
            render_selected_json(
                "fixture",
                funcs,
                &[],
                error,
                total,
                &[],
                &Default::default(),
                &Default::default(),
                omit,
                Default::default(),
                None,
            ),
            whole + "\n"
        );
    }
}

#[test]
fn omitted_collections_leave_every_record_and_are_named() {
    let mut omit = Omit::default();
    omit.add("line_mappings,types").unwrap();
    let doc = render(omit);
    assert_eq!(
        doc["omitted"],
        serde_json::json!(["line_mappings", "types"])
    );
    let record = doc["functions"][0].as_object().unwrap();
    assert!(!record.contains_key("line_mappings") && !record.contains_key("types"));
    assert_eq!(
        record["variables"][0]["line_numbers"],
        serde_json::json!([3])
    );
    for key in [
        "name",
        "address",
        "code",
        "error",
        "unstructured_gotos",
        "warnings",
    ] {
        assert!(record.contains_key(key), "{key} must survive --omit");
    }
    assert_eq!(doc["language"], "c-language");

    omit.add("variables").unwrap();
    let doc = render(omit);
    assert_eq!(
        doc["omitted"],
        serde_json::json!(["line_mappings", "variables", "types", "stack_objects"])
    );
    assert!(
        !doc["functions"][0]
            .as_object()
            .unwrap()
            .contains_key("variables")
    );
}

#[test]
fn a_record_lists_its_warnings_and_a_failed_one_none() {
    use unlace_decomp::functionwarnings::Warning;
    let warned = FuncResult {
        warnings: vec![
            Warning {
                address: Some(0x401000),
                text: "WARNING: Subroutine does not return".into(),
                line: 1,
            },
            Warning {
                address: Some(0x401010),
                text: "WARNING: Function flows out of bounds".into(),
                line: 4,
            },
            Warning {
                address: None,
                text: "WARNING: structured blocks unavailable".into(),
                line: 5,
            },
        ],
        ..function()
    };
    let failed = FuncResult {
        code: None,
        error: Some("boom".into()),
        ..function()
    };
    let text = dumps_indent2(&result_json(
        "fixture",
        &[warned, failed],
        "c-language",
        None,
        None,
        None,
        &[],
        &Default::default(),
        Omit::default(),
        Default::default(),
    ));
    let doc: serde_json::Value = serde_json::from_str(&text).unwrap();
    assert_eq!(
        doc["functions"][0]["warnings"],
        serde_json::json!([
            {"kind": "no-return", "message": "Subroutine does not return", "line": 1, "address": 0x401000},
            {"kind": "out-of-bounds", "message": "Function flows out of bounds", "line": 4, "address": 0x401010},
            {"kind": "structuring-declined", "message": "structured blocks unavailable", "line": 5, "address": null},
        ])
    );
    assert_eq!(doc["functions"][1]["warnings"], serde_json::json!([]));
    assert_eq!(
        doc["warning_kinds"],
        serde_json::json!({"no-return": 1, "out-of-bounds": 1, "structuring-declined": 1})
    );
}

#[test]
fn warning_kinds_totals_each_kind_over_the_records() {
    use unlace_decomp::functionwarnings::Warning;
    let gap = |text: &str| Warning {
        address: Some(0x401000),
        text: text.into(),
        line: 1,
    };
    let first = FuncResult {
        warnings: vec![
            gap(
                "WARNING: notmodelled: `vpdpbusd` has no p-code semantics; stepped over as a no-op",
            ),
            gap("WARNING: Bad instruction - Truncating control flow here"),
        ],
        ..function()
    };
    let second = FuncResult {
        warnings: vec![gap(
            "WARNING: notmodelled: `rdrand` has no p-code semantics; stepped over as a no-op",
        )],
        ..function()
    };
    let text = dumps_indent2(&result_json(
        "fixture",
        &[first, second, function()],
        "c-language",
        None,
        None,
        None,
        &[],
        &Default::default(),
        Omit::default(),
        Default::default(),
    ));
    let doc: serde_json::Value = serde_json::from_str(&text).unwrap();
    assert_eq!(
        doc["warning_kinds"],
        serde_json::json!({"bad-instruction": 1, "notmodelled": 2})
    );
    let empty = dumps_indent2(&result_json(
        "fixture",
        &[function()],
        "c-language",
        None,
        None,
        None,
        &[],
        &Default::default(),
        Omit::default(),
        Default::default(),
    ));
    let doc: serde_json::Value = serde_json::from_str(&empty).unwrap();
    assert_eq!(doc["warning_kinds"], serde_json::json!({}));
}

#[test]
fn omitted_aliases_leave_the_record_and_keep_its_identity() {
    let aliased = FuncResult {
        aliases: vec!["sub_401000".into()],
        ..function()
    };
    let mut omit = Omit::default();
    omit.add("aliases").unwrap();
    let text = dumps_indent2(&result_json(
        "fixture",
        &[aliased],
        "c-language",
        None,
        None,
        None,
        &[],
        &Default::default(),
        omit,
        Default::default(),
    ));
    let doc: serde_json::Value = serde_json::from_str(&text).unwrap();
    assert_eq!(doc["omitted"], serde_json::json!(["aliases"]));
    let record = doc["functions"][0].as_object().unwrap();
    let keys: Vec<&str> = record.keys().map(String::as_str).take(4).collect();
    assert_eq!(keys, ["name", "address", "address_hex", "object_location"]);
    assert!(record.contains_key("line_mappings") && record.contains_key("variables"));
}
