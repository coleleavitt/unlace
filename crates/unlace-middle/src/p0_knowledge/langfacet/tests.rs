use super::*;

#[test]
fn text_facets() {
    assert!(LangFacet::RustStr.is_text());
    assert!(LangFacet::GoString.is_text());
    assert!(!LangFacet::RustSlice { elem: "u64".into() }.is_text());
    assert!(!LangFacet::GoSlice { elem: "u64".into() }.is_text());
    assert!(!LangFacet::GoIface { eface: true }.is_text());
    assert!(
        !LangFacet::GoPairResults {
            signed: [true, false]
        }
        .is_text()
    );
    assert!(!LangFacet::GoIntErrorResults.is_text());
}

#[test]
fn pair_metadata_rejects_inconsistent_storage() {
    use crate::dtype::{Datatype, TypeField, type_metatype::*};
    use std::rc::Rc;
    let facet = LangFacet::GoPairResults {
        signed: [true, false],
    };
    let pair = |size, align, second_offset, second_name, second_size, second_meta| {
        let mut ty = Datatype::new_with_align(size, align, TYPE_STRUCT);
        ty.set_struct_fields(
            vec![
                TypeField::new(
                    0,
                    0,
                    "result0",
                    Rc::new(Datatype::new_with_align(8, 8, TYPE_INT)),
                ),
                TypeField::new(
                    8,
                    second_offset,
                    second_name,
                    Rc::new(Datatype::new_with_align(second_size, 8, second_meta)),
                ),
            ],
            Vec::new(),
            size,
            align,
        );
        ty
    };
    let valid = pair(16, 8, 8, "result1", 8, TYPE_UINT);
    assert!(facet.go_pair_fields(&valid).is_some());
    for malformed in [
        pair(24, 8, 8, "result1", 8, TYPE_UINT),
        pair(16, 4, 8, "result1", 8, TYPE_UINT),
        pair(16, 8, 0, "result1", 8, TYPE_UINT),
        pair(16, 8, 8, "second", 8, TYPE_UINT),
        pair(16, 8, 8, "result1", 4, TYPE_UINT),
        pair(16, 8, 8, "result1", 8, TYPE_INT),
        pair(16, 8, 8, "result1", 8, TYPE_FLOAT),
    ] {
        assert!(facet.go_pair_fields(&malformed).is_none());
    }
    assert!(
        LangFacet::GoIface { eface: false }
            .go_pair_fields(&valid)
            .is_none()
    );
}

fn int_error_carrier() -> crate::dtype::Datatype {
    use crate::dtype::{Datatype, DatatypeKind, TypeField, type_metatype::*};
    use std::rc::Rc;
    let mut pointer = Datatype::new_with_align(8, 8, TYPE_PTR);
    pointer.kind = DatatypeKind::Pointer {
        ptrto: Rc::new(Datatype::new_with_align(0, 1, TYPE_VOID)),
        spaceid: None,
        truncate: None,
        wordsize: 1,
    };
    let pointer = Rc::new(pointer);
    let mut carrier = Datatype::new_with_align(24, 8, TYPE_STRUCT);
    carrier.set_struct_fields(
        vec![
            TypeField::new(
                0,
                0,
                "result0",
                Rc::new(Datatype::new_with_align(8, 8, TYPE_INT)),
            ),
            TypeField::new(8, 8, "error_tab", Rc::clone(&pointer)),
            TypeField::new(16, 16, "error_data", pointer),
        ],
        Vec::new(),
        24,
        8,
    );
    carrier
}

#[test]
fn int_error_metadata_is_distinct_from_interface_and_integer_pairs() {
    let carrier = int_error_carrier();
    let fields = LangFacet::GoIntErrorResults
        .go_int_error_fields(&carrier)
        .unwrap();
    assert_eq!(fields.len(), 3);
    assert!(
        LangFacet::GoIface { eface: false }
            .go_int_error_fields(&carrier)
            .is_none()
    );
    assert!(
        LangFacet::GoIface { eface: true }
            .go_int_error_fields(&carrier)
            .is_none()
    );
    assert!(
        LangFacet::GoPairResults {
            signed: [true, true]
        }
        .go_int_error_fields(&carrier)
        .is_none()
    );
    assert!(
        LangFacet::GoIntErrorResults
            .go_pair_fields(&carrier)
            .is_none()
    );
}

#[test]
fn int_error_metadata_rejects_incomplete_or_changed_carriers() {
    use crate::dtype::{DatatypeKind, TypeBitField, flags, type_metatype::*};
    use std::rc::Rc;
    for change in 0..9 {
        let mut carrier = int_error_carrier();
        match change {
            0 => carrier.size = 16,
            1 => carrier.alignment = 4,
            2 => carrier.metatype = TYPE_UNION,
            3 => carrier.flags |= flags::type_incomplete,
            4 => carrier.flags |= flags::has_bitfields,
            5 => carrier.qualifiers = crate::typequal::VOLATILE,
            6 => carrier.kind = DatatypeKind::Base,
            _ => {
                let DatatypeKind::Struct { field, bitfield } = &mut carrier.kind else {
                    unreachable!()
                };
                if change == 7 {
                    field.pop();
                } else {
                    bitfield.push(TypeBitField::new(
                        0,
                        1,
                        false,
                        "extra",
                        Rc::clone(&field[0].field_type),
                    ));
                }
            }
        }
        assert!(
            LangFacet::GoIntErrorResults
                .go_int_error_fields(&carrier)
                .is_none(),
            "mutation {change}"
        );
    }
}

#[test]
fn int_error_metadata_rejects_changed_fields_and_pointer_targets() {
    use crate::dtype::{Datatype, DatatypeKind, flags, type_metatype::*};
    use std::rc::Rc;
    for index in 0..3 {
        for change in 0..10 {
            let mut carrier = int_error_carrier();
            let DatatypeKind::Struct { field, .. } = &mut carrier.kind else {
                unreachable!()
            };
            let member = &mut field[index];
            let ty = Rc::make_mut(&mut member.field_type);
            match change {
                0 => member.offset += 8,
                1 => member.name = "other".into(),
                2 => ty.size = 4,
                3 => ty.metatype = TYPE_UINT,
                4 => ty.flags |= flags::type_incomplete,
                5 => ty.qualifiers = crate::typequal::VOLATILE,
                6 => ty.flags |= flags::has_bitfields,
                _ if index == 0 => continue,
                _ => {
                    let DatatypeKind::Pointer {
                        ptrto, wordsize, ..
                    } = &mut ty.kind
                    else {
                        unreachable!()
                    };
                    match change {
                        7 => *ptrto = Rc::new(Datatype::new_with_align(8, 8, TYPE_INT)),
                        8 => Rc::make_mut(ptrto).qualifiers = crate::typequal::VOLATILE,
                        _ => *wordsize = 2,
                    }
                }
            }
            assert!(
                LangFacet::GoIntErrorResults
                    .go_int_error_fields(&carrier)
                    .is_none(),
                "field {index}, mutation {change}"
            );
        }
    }
}
