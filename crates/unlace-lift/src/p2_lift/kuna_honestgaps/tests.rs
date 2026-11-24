use super::*;

#[test]
fn names_the_instruction_from_the_sleigh_explain_text() {
    let explain =
        "Instruction not implemented in pcode:\n ram:00401000: vpdpbusd  ymm0, ymm1, ymm2";
    assert_eq!(instruction_name(explain), "`vpdpbusd ymm0, ymm1, ymm2`");
    assert_eq!(
        not_modelled_text(explain),
        "notmodelled: `vpdpbusd ymm0, ymm1, ymm2` has no p-code semantics; stepped over as a no-op"
    );
}

#[test]
fn an_explain_without_an_instruction_says_instruction() {
    assert_eq!(instruction_name(""), "instruction");
    assert_eq!(
        instruction_name("Instruction not implemented in pcode:\n"),
        "instruction"
    );
}

#[test]
fn an_explain_without_an_address_keeps_the_line() {
    assert_eq!(instruction_name("custom  op"), "`custom op`");
}

#[test]
fn unbound_local_names_the_local_and_its_start() {
    assert_eq!(
        unbound_debug_local_text("count", 0x401a2c),
        "debuginfo: DWARF local count (range from 0x401a2c) not bound: no write of its register reaches it"
    );
}

#[test]
fn a_withheld_prototype_is_found_by_address_then_by_name() {
    let mut table = WithheldPrototypes::default();
    assert!(table.is_empty());
    table.record(Some(0x1000), "strtod", WithheldCause::FloatConvention);
    table.record(None, "sqrt", WithheldCause::FloatConvention);
    table.record(None, "", WithheldCause::DwarfType);
    table.record(Some(0x2000), "parse", WithheldCause::DwarfType);
    assert_eq!(
        table.lookup(Some(0x1000), "other"),
        Some(("strtod".to_string(), WithheldCause::FloatConvention))
    );
    assert_eq!(
        table.lookup(Some(0x3000), "sqrt"),
        Some(("sqrt".to_string(), WithheldCause::FloatConvention))
    );
    assert_eq!(
        table.lookup(None, "sqrt"),
        Some(("sqrt".to_string(), WithheldCause::FloatConvention))
    );
    assert_eq!(table.lookup(None, ""), None);
    assert_eq!(table.lookup(Some(0x3000), "strtod"), None);
    assert_eq!(
        table.lookup(Some(0x2000), "parse"),
        Some(("parse".to_string(), WithheldCause::DwarfType))
    );
}

#[test]
fn the_first_record_of_an_address_wins() {
    let mut table = WithheldPrototypes::default();
    table.record(Some(0x1000), "a", WithheldCause::DwarfType);
    table.record(Some(0x1000), "b", WithheldCause::FloatConvention);
    assert_eq!(
        table.lookup(Some(0x1000), ""),
        Some(("a".to_string(), WithheldCause::DwarfType))
    );
}

#[test]
fn withheld_texts_name_the_function_and_the_cause() {
    assert_eq!(
        withheld_prototype_text("strtod", WithheldCause::FloatConvention),
        "withheldproto: the library prototype of strtod declares a float or double this target's convention does not return whole; not applied"
    );
    assert_eq!(
        withheld_prototype_text("parse", WithheldCause::DwarfType),
        "withheldproto: the DWARF signature of parse names a type that could not be built; not applied"
    );
}

#[test]
fn the_tags_are_warning_kinds() {
    for text in [
        not_modelled_text("x: nop"),
        unbound_debug_local_text("v", 0),
        withheld_prototype_text("f", WithheldCause::FloatConvention),
        withheld_prototype_text("f", WithheldCause::DwarfType),
    ] {
        let (tag, _) = text.split_once(": ").unwrap();
        assert!(tag.bytes().all(|b| b.is_ascii_lowercase()), "{tag}");
    }
}

#[test]
fn a_buffered_warning_is_found_by_type_address_and_text() {
    use crate::architecture::comment_type;
    use unlace_base::address::Address;
    let text = withheld_prototype_text("strtod", WithheldCause::FloatConvention);
    let at = Address::new_invalid();
    let pending = vec![(
        comment_type::warningheader,
        at.clone(),
        format!("WARNING: {text}"),
    )];
    assert!(is_pending(
        &pending,
        comment_type::warningheader,
        &at,
        &text
    ));
    assert!(!is_pending(&pending, comment_type::warning, &at, &text));
    let other = withheld_prototype_text("sqrt", WithheldCause::FloatConvention);
    assert!(!is_pending(
        &pending,
        comment_type::warningheader,
        &at,
        &other
    ));
    assert!(!is_pending(&[], comment_type::warningheader, &at, &text));
}
