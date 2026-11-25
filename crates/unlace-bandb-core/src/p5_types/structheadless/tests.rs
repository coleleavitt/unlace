use super::*;

#[test]
fn option_parses_both_modes_and_rejects_anything_else() {
    assert_eq!(
        OptionStructHeadless.apply("off").unwrap().0,
        StructHeadlessMode::Off
    );
    assert_eq!(
        OptionStructHeadless.apply("closed").unwrap().0,
        StructHeadlessMode::Closed
    );
    assert!(OptionStructHeadless.apply("on").is_err());
    assert!(!StructHeadlessMode::Off.fires());
    assert!(StructHeadlessMode::Closed.fires());
    assert_eq!(StructHeadlessMode::default(), StructHeadlessMode::Closed);
}

fn ptr_to(ptrto: std::rc::Rc<Datatype>) -> Datatype {
    use crate::dtype::{DatatypeKind, sub_metatype, type_metatype};
    let mut p = Datatype::new(8, type_metatype::TYPE_PTR);
    p.submeta = sub_metatype::SUB_PTR;
    p.kind = DatatypeKind::Pointer {
        ptrto,
        spaceid: None,
        truncate: None,
        wordsize: 1,
    };
    p
}

/// A `char **` a caller passes, a `char *` and a declared record give their
/// value a pointee no synthesized record may replace; `void *` and a record
/// `structsynth` minted do not.
#[test]
fn a_declared_character_vector_gives_a_pointee_and_void_does_not() {
    use crate::dtype::{DatatypeKind, TypeField, flags, type_metatype};
    use std::rc::Rc;
    let mut ch = Datatype::new(1, type_metatype::TYPE_INT);
    ch.flags |= flags::chartype;
    let ch = Rc::new(ch);
    let charp = Rc::new(ptr_to(Rc::clone(&ch)));
    assert!(gives_a_pointee(&ptr_to(Rc::clone(&charp))));
    assert!(gives_a_pointee(&charp));
    let mut named = Datatype::new(0x20, type_metatype::TYPE_STRUCT);
    named.name = "group".to_string();
    assert!(gives_a_pointee(&ptr_to(Rc::new(named))));
    assert!(!gives_a_pointee(&ptr_to(Rc::new(Datatype::new(
        0,
        type_metatype::TYPE_VOID
    )))));
    let mut minted = Datatype::new(0x18, type_metatype::TYPE_STRUCT);
    minted.name = "struct_19".to_string();
    let field = |offset: i32| TypeField {
        ident: offset,
        offset,
        name: format!("field_0x{offset:x}"),
        field_type: Rc::new(Datatype::new(8, type_metatype::TYPE_INT)),
    };
    minted.kind = DatatypeKind::Struct {
        field: vec![field(8), field(0x10)],
        bitfield: Vec::new(),
    };
    let minted = ptr_to(Rc::new(minted));
    assert!(!gives_a_pointee(&minted));
    assert!(crate::structsynth::points_at_headless_record(&minted));
    assert!(!gives_a_pointee(&Datatype::new(8, type_metatype::TYPE_INT)));

    // `ws_head` copied as a word by one headless reader is no member for a
    // function that walks the list from it; a declared record's word is its
    // own.
    let word = Datatype::new(8, type_metatype::TYPE_INT);
    assert!(minted_word(&minted, &word, 8));
    assert!(minted_word(
        &minted,
        &Datatype::new(8, type_metatype::TYPE_UNKNOWN),
        8
    ));
    assert!(!minted_word(
        &minted,
        &Datatype::new(4, type_metatype::TYPE_INT),
        8
    ));
    assert!(!minted_word(&minted, &charp, 8));
    let mut group = Datatype::new(0x20, type_metatype::TYPE_STRUCT);
    group.name = "group".to_string();
    assert!(!minted_word(&ptr_to(Rc::new(group)), &word, 8));
}

#[test]
fn two_offsets_past_the_start_are_headless_and_one_or_a_zero_is_not() {
    assert!(is_headless([0x30, 0xac, 0xb9].iter()));
    assert!(is_headless([8, 0x10].iter()));
    assert!(!is_headless([0x18].iter()));
    assert!(!is_headless([0, 8].iter()));
    assert!(!is_headless([].iter()));
}
