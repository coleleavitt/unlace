use std::rc::Rc;

use super::*;
use crate::listing::FlowKind;

fn insn(mnemonic: &str, operands: &str) -> ProbedInsn {
    ProbedInsn {
        len: 1,
        kind: FlowKind::Fallthrough,
        is_call: false,
        is_terminal: false,
        fall_through: None,
        flows: Vec::new(),
        mnemonic: Rc::from(mnemonic),
        operands: operands.to_string(),
        reusable: None,
    }
}

#[test]
fn zero_fill_forms() {
    assert!(is_zero_fill(&insn("ADD", "byte ptr [EAX],AL")));
    assert!(is_zero_fill(&insn("ADD", "byte ptr [RAX],AL")));
    assert!(is_zero_fill(&insn("andeq", "r0,r0,r0")));
    assert!(is_zero_fill(&insn("movs", "r0,r0")));
    assert!(!is_zero_fill(&insn("movs", "r6,r6")));
    assert!(!is_zero_fill(&insn("ADD", "byte ptr [EAX + 0x1],AL")));
    assert!(!is_zero_fill(&insn("ADD", "dword ptr [EAX],EAX")));
}

#[test]
fn padding_forms() {
    for wide in [false, true] {
        assert!(is_padding(&insn("NOP", ""), wide));
        assert!(is_padding(
            &insn("NOP", "word ptr CS:[EAX + EAX*0x1]"),
            wide
        ));
        assert!(is_padding(&insn("INT3", ""), wide));
        assert!(is_padding(&insn("nop.w", ""), wide));
        assert_eq!(is_padding(&insn("LEA", "ESI,[ESI]"), wide), !wide);
        assert_eq!(is_padding(&insn("LEA", "ESI,[ESI + 0x0]"), wide), !wide);
        assert!(!is_padding(&insn("LEA", "ESI,[ESI + 0x8]"), wide));
        assert!(!is_padding(&insn("LEA", "ECX,[ESP + 0x4]"), wide));
        assert!(!is_padding(&insn("MOV", "EBP,ESP"), wide));
        assert!(!is_padding(&insn("MOV", "EDI,EDI"), wide));
        assert!(!is_padding(&insn("PUSH", "EBP"), wide));
        assert!(!is_padding(&insn("movs", "r0,r0"), wide));
    }
    assert!(is_padding(&insn("MOV", "ESI,ESI"), false));
    assert!(is_padding(&insn("XCHG", "AX,AX"), false));
    assert!(is_padding(&insn("mov", "r8,r8"), false));
    assert!(!is_padding(&insn("MOV", "ESI,ESI"), true));
    assert!(!is_padding(&insn("XCHG", "EAX,EAX"), true));
    assert!(!is_padding(&insn("LEA", "ESI,[RSI + 0x0]"), true));
}

#[test]
fn wide_self_lea_preserves_the_whole_register() {
    for register in [
        "RAX", "RBX", "RCX", "RDX", "RSI", "RDI", "RBP", "RSP", "R8", "R9", "R10", "R11", "R12",
        "R13", "R14", "R15",
    ] {
        for displacement in ["", " + 0x0"] {
            let operands = format!("{register},[{register}{displacement}]");
            assert!(is_padding(&insn("LEA", &operands), true), "{operands}");
            assert!(is_padding(
                &insn("lea", &operands.to_ascii_lowercase()),
                true
            ));
        }
    }
    for register in [
        "EAX", "EBX", "ECX", "EDX", "ESI", "EDI", "EBP", "ESP", "R8D", "R9D", "R10D", "R11D",
        "R12D", "R13D", "R14D", "R15D",
    ] {
        for displacement in ["", " + 0x0"] {
            let operands = format!("{register},[{register}{displacement}]");
            assert!(!is_padding(&insn("LEA", &operands), true), "{operands}");
            assert!(!is_padding(
                &insn("lea", &operands.to_ascii_lowercase()),
                true
            ));
        }
    }
}
