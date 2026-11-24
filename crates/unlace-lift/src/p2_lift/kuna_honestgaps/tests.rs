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
fn the_tags_are_warning_kinds() {
    for text in [
        not_modelled_text("x: nop"),
        unbound_debug_local_text("v", 0),
    ] {
        let (tag, _) = text.split_once(": ").unwrap();
        assert!(tag.bytes().all(|b| b.is_ascii_lowercase()), "{tag}");
    }
}
