use super::*;
use crate::dtype::{DatatypeKind, flags, sub_metatype};

fn ptr_to(ptrto: &Rc<Datatype>) -> Rc<Datatype> {
    let mut p = Datatype::new(8, type_metatype::TYPE_PTR);
    p.submeta = sub_metatype::SUB_PTR;
    p.kind = DatatypeKind::Pointer {
        ptrto: Rc::clone(ptrto),
        spaceid: None,
        truncate: None,
        wordsize: 1,
    };
    Rc::new(p)
}

fn named(size: i32, meta: type_metatype, name: &str) -> Rc<Datatype> {
    let mut t = Datatype::new(size, meta);
    t.name = name.to_string();
    Rc::new(t)
}

fn char_t() -> Rc<Datatype> {
    let mut c = Datatype::new(1, type_metatype::TYPE_INT);
    c.flags |= flags::chartype;
    c.name = "char".to_string();
    Rc::new(c)
}

fn acc(ts: &[&Rc<Datatype>]) -> Vec<(Option<Rc<Datatype>>, Option<VarnodeId>)> {
    ts.iter().map(|t| (Some(Rc::clone(t)), None)).collect()
}

fn no_decl(_: &Datatype, _: Option<VarnodeId>) -> bool {
    false
}

#[test]
fn option_parses_on_and_off_and_rejects_anything_else() {
    assert!(OptionFieldType.apply("on").unwrap().0);
    assert!(!OptionFieldType.apply("off").unwrap().0);
    assert!(OptionFieldType.apply("pointer").is_err());
}

/// `sort`'s `fillbuf`: an integer add first, then `memmove`'s `void *` and a
/// compare with a `char *`.  The character pointer is the field.
#[test]
fn a_pointer_beside_an_integer_wins_and_a_scalar_pointee_outranks_void() {
    let long = named(8, type_metatype::TYPE_INT, "long");
    let void = named(0, type_metatype::TYPE_VOID, "void");
    let (charp, voidp) = (ptr_to(&char_t()), ptr_to(&void));
    let got = choose(8, &acc(&[&long, &voidp, &long, &charp]), no_decl).unwrap();
    assert!(same(&got, &charp));
    let got = choose(8, &acc(&[&long, &voidp]), no_decl).unwrap();
    assert!(same(&got, &voidp), "a void pointer still beats an integer");
    assert!(
        choose(8, &acc(&[&long, &long]), no_decl).is_none(),
        "no pointer, no decision"
    );
}

/// A called field is code; a record or named aggregate outranks a scalar.
#[test]
fn code_and_records_outrank_scalars_and_undefined_pointees_outrank_void() {
    let code = named(1, type_metatype::TYPE_CODE, "code");
    let file = named(0xd8, type_metatype::TYPE_STRUCT, "FILE");
    let undef = named(8, type_metatype::TYPE_UNKNOWN, "undefined8");
    let void = named(0, type_metatype::TYPE_VOID, "void");
    let ulong = named(8, type_metatype::TYPE_UINT, "ulong");
    let (codep, filep, undefp, voidp) =
        (ptr_to(&code), ptr_to(&file), ptr_to(&undef), ptr_to(&void));
    assert!(same(
        &choose(8, &acc(&[&ulong, &codep]), no_decl).unwrap(),
        &codep
    ));
    assert!(same(
        &choose(8, &acc(&[&ptr_to(&char_t()), &filep]), no_decl).unwrap(),
        &filep
    ));
    assert!(same(
        &choose(8, &acc(&[&voidp, &undefp]), no_decl).unwrap(),
        &undefp
    ));
}

/// Two different pointers of the same rank are not agreement, unless exactly
/// one of them is what a declared parameter the value is passed to names.
#[test]
fn two_pointers_of_one_rank_settle_only_on_a_declared_parameter() {
    let uchar = named(1, type_metatype::TYPE_UINT, "uchar");
    let (charp, ucharp) = (ptr_to(&char_t()), ptr_to(&uchar));
    let a = acc(&[&ucharp, &charp]);
    assert!(choose(8, &a, no_decl).is_none());
    let got = choose(8, &a, |t, _| same(t, &charp)).unwrap();
    assert!(same(&got, &charp));
    assert!(
        choose(8, &a, |_, _| true).is_none(),
        "both declared is still two answers"
    );
}

/// A pointer the first access already carries is kept over a proven one that
/// says less about the pointee, and replaced by one that says more.
#[test]
fn a_first_pointer_is_kept_over_a_proven_pointer_of_lower_rank() {
    let void = named(0, type_metatype::TYPE_VOID, "void");
    let file = named(0xd8, type_metatype::TYPE_STRUCT, "FILE");
    let long = named(8, type_metatype::TYPE_INT, "long");
    let (charp, voidp, filep) = (ptr_to(&char_t()), ptr_to(&void), ptr_to(&file));
    assert!(
        outranks(Some(&charp), &voidp),
        "fillbuf -O2: char * is not replaced by memmove's void *"
    );
    assert!(!outranks(Some(&charp), &filep));
    assert!(!outranks(Some(&charp), &charp));
    assert!(
        !outranks(Some(&long), &voidp),
        "an integer first access is replaced by any proven pointer"
    );
    assert!(!outranks(None, &voidp));
}

/// A float beside a pointer is a union member: the field stays raw bytes.
/// A pointer of another width is not this field's.
#[test]
fn a_float_or_a_pointer_of_another_width_declines() {
    let dbl = named(8, type_metatype::TYPE_FLOAT, "double");
    let charp = ptr_to(&char_t());
    assert!(choose(8, &acc(&[&dbl, &charp]), no_decl).is_none());
    assert!(choose(4, &acc(&[&charp]), no_decl).is_none());
}
