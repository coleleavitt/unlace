use super::*;

#[test]
fn padding_forms() {
    assert!(is_padding("NOP", ""));
    assert!(is_padding("NOP", "dword ptr [EAX + EAX*0x1]"));
    assert!(is_padding("INT3", ""));
    assert!(is_padding("MOV", "ESI,ESI"));
    assert!(is_padding("MOV", "EDI,EDI"));
    assert!(is_padding("LEA", "ESI,[ESI]"));
    assert!(is_padding("LEA", "ESI,[ESI + 0x0]"));
    assert!(is_padding("mov", "r8,r8"));
    assert!(is_padding("nop", ""));
    assert!(!is_padding("MOV", "EBP,ESP"));
    assert!(!is_padding("LEA", "ECX,[ESP + 0x4]"));
    assert!(!is_padding("LEA", "ESI,[ESI + 0x8]"));
    assert!(!is_padding("PUSH", "EBP"));
    assert!(!is_padding("movs", "r0,r0"));
}
