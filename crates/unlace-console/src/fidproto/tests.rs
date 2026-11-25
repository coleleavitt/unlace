#[test]
fn nesting_counts_the_deepest_bracket() {
    assert_eq!(super::nesting("int f(void (*cb)(int a[4]))"), 3);
    assert_eq!(super::nesting("struct s { int a; };"), 1);
    assert_eq!(super::nesting(")))"), 0);
}

#[test]
fn a_record_without_its_definition_is_not_passed_by_value() {
    use std::rc::Rc;

    use unlace_decomp::dtype::{Datatype, DatatypeKind, flags, type_metatype};
    use unlace_decomp::fspec::PrototypePieces;

    let mut shell = Datatype::new_with_align(0, 1, type_metatype::TYPE_STRUCT);
    shell.name = "bits".into();
    shell.display_name = "bits".into();
    shell.flags |= flags::type_incomplete;
    shell.kind = DatatypeKind::Struct {
        field: vec![],
        bitfield: vec![],
    };
    let shell = Rc::new(shell);
    let mut ptr = Datatype::new_with_align(8, 8, type_metatype::TYPE_PTR);
    ptr.kind = DatatypeKind::Pointer {
        ptrto: Rc::clone(&shell),
        spaceid: None,
        truncate: None,
        wordsize: 1,
    };
    let by_pointer = PrototypePieces {
        intypes: vec![Rc::new(ptr)],
        ..Default::default()
    };
    assert_eq!(super::opaque_by_value(&by_pointer), None);
    let returned = PrototypePieces {
        outtype: Some(Rc::clone(&shell)),
        ..Default::default()
    };
    assert_eq!(super::opaque_by_value(&returned).as_deref(), Some("bits"));
}
