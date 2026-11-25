use super::*;

#[test]
fn comments_and_line_breaks_leave_one_declaration() {
    assert_eq!(
        one_line("struct hdr {\n    uint4 magic; /* le */\n    uint4 len;\n};\n"),
        "struct hdr { uint4 magic; uint4 len; };"
    );
    assert_eq!(
        one_line("typedef struct FILE FILE; /* opaque */\n"),
        "typedef struct FILE FILE;"
    );
    assert_eq!(one_line("int a; /* unterminated"), "int a;");
}

#[test]
fn only_a_c_identifier_is_spelled() {
    assert_eq!(identifier("parse_header"), Some("parse_header"));
    assert_eq!(identifier("Account::deposit"), None);
    assert_eq!(identifier("9lives"), None);
    assert_eq!(identifier(""), None);
}

fn scalar(size: int4, name: &str) -> Rc<Datatype> {
    let mut t = Datatype::new_with_align(size, size, type_metatype::TYPE_INT);
    t.name = name.into();
    t.display_name = name.into();
    t.flags |= crate::dtype::flags::coretype;
    Rc::new(t)
}

fn record(name: &str, size: int4, fields: &[(int4, &Rc<Datatype>)]) -> Datatype {
    let mut s = Datatype::new_with_align(size, 8, type_metatype::TYPE_STRUCT);
    s.name = name.into();
    s.display_name = name.into();
    s.id = Datatype::hash_name(name);
    let field = fields
        .iter()
        .enumerate()
        .map(|(i, (off, t))| {
            crate::dtype::TypeField::new(i as int4, *off, format!("m{i}"), Rc::clone(t))
        })
        .collect();
    s.kind = DatatypeKind::Struct {
        field,
        bitfield: vec![],
    };
    s
}

#[test]
fn a_record_is_stored_whole_only_when_the_parser_lays_it_out_the_same() {
    let (i4, i8) = (scalar(4, "int4"), scalar(8, "int8"));
    let padded = record("padded", 16, &[(0, &i4), (8, &i8)]);
    assert!(laid_out_again(&padded));
    assert!(!laid_out_again(&record(
        "packed",
        12,
        &[(0, &i4), (4, &i8)]
    )));
    assert!(!laid_out_again(&record(
        "overlap",
        16,
        &[(0, &i8), (4, &i4)]
    )));
    assert!(!laid_out_again(&record("short", 12, &[(0, &i8), (8, &i4)])));
    let mut bits = record("bits", 8, &[(0, &i4)]);
    if let DatatypeKind::Struct { bitfield, .. } = &mut bits.kind {
        bitfield.push(crate::dtype::TypeBitField::new(
            1,
            3,
            false,
            "b",
            Rc::clone(&i4),
        ));
    }
    assert!(!laid_out_again(&bits));

    let mut ptr = Datatype::new_with_align(8, 8, type_metatype::TYPE_PTR);
    ptr.kind = DatatypeKind::Pointer {
        ptrto: Rc::new(padded),
        spaceid: None,
        truncate: None,
        wordsize: 1,
    };
    let pieces = PrototypePieces {
        name: "f".into(),
        intypes: vec![Rc::new(ptr)],
        innames: vec!["p".into()],
        first_var_arg_slot: -1,
        ..Default::default()
    };
    let declared = declaration(&pieces).unwrap();
    assert_eq!(
        declared.typedefs,
        [
            "typedef struct padded padded;",
            "struct padded { int4 m0; uint1 _pad4[4]; int8 m1; };"
        ]
    );
}

#[test]
fn an_enum_is_stored_at_its_width() {
    use crate::dtype::TypeFactory;
    let types = crate::dtype::TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(8), 8, 4);
    let _ = types.cache_core_types();
    let shell = types
        .get_type_enum_sized("kind", 1, type_metatype::TYPE_ENUM_UINT)
        .unwrap();
    let names = std::collections::BTreeMap::from([(0, "K_A".to_string()), (1, "K_B".to_string())]);
    let kind = types.set_enum_values(&shell, names).unwrap();
    let pieces = PrototypePieces {
        name: "f".into(),
        intypes: vec![kind],
        innames: vec!["k".into()],
        first_var_arg_slot: -1,
        ..Default::default()
    };
    assert_eq!(
        declaration(&pieces).unwrap().typedefs,
        ["typedef enum kind : uint1 { K_A = 0x0, K_B = 0x1 } kind;"]
    );
}
