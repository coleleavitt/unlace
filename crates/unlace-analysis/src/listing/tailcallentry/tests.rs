use super::*;

fn entries() -> Vec<u64> {
    vec![0x100, 0x200, 0x300]
}

#[test]
fn region_lookup_is_entry_ordered() {
    let e = entries();
    assert_eq!(region_of(&e, 0x0ff), None);
    assert_eq!(region_of(&e, 0x100), Some(0x100));
    assert_eq!(region_of(&e, 0x1ff), Some(0x100));
    assert_eq!(region_of(&e, 0x300), Some(0x300));
    assert_eq!(next_entry(&e, 0x100), Some(0x200));
    assert_eq!(next_entry(&e, 0x300), None);
}

/// The containment guard: a branch that stays inside its own region is
/// intra-function flow; one that crosses a discovered entry is a tail call.
#[test]
fn containment_is_the_region_crossing() {
    let e = entries();
    assert!(
        in_caller_region(&e, 0x110, 0x180),
        "same region ⇒ not a tail call"
    );
    assert!(
        !in_caller_region(&e, 0x110, 0x280),
        "crosses 0x200 ⇒ tail call"
    );
    assert!(
        !in_caller_region(&e, 0x310, 0x180),
        "backward across entries"
    );
    assert!(
        in_caller_region(&e, 0x310, 0x380),
        "last region has no upper bound"
    );
    assert!(
        in_caller_region(&e, 0x010, 0x080),
        "no containing entry ⇒ reject"
    );
}

fn insn(mnemonic: &str, operands: &str) -> Insn {
    Insn {
        addr: 0,
        len: 2,
        fall_through: None,
        flow: Default::default(),
        flows: Vec::new(),
        mnemonic: mnemonic.into(),
        operands: operands.into(),
        pcode: None,
    }
}

#[test]
fn epilogue_starts_are_recognised() {
    assert!(restores_frame(&insn("pop", "{r4,pc}")));
    assert!(restores_frame(&insn("pop.w", "{r4,r5,lr}")));
    assert!(restores_frame(&insn("ldmia.w", "sp!,{r4,pc}")));
    assert!(restores_frame(&insn("add", "sp,#0x14")));
    assert!(!restores_frame(&insn("push", "{r4,lr}")));
    assert!(!restores_frame(&insn("add", "r0,r1")));
    assert!(!restores_frame(&insn("ldr", "r0,[sp,#4]")));
    assert!(!restores_frame(&insn("ldmia", "r3!,{r0,r1}")));
    assert!(restores_frame(&insn("POP", "RBP")));
    assert!(restores_frame(&insn("LEAVE", "")));
    assert!(restores_frame(&insn("ADD", "RSP,0x18")));
    assert!(!restores_frame(&insn("SUB", "RSP,0x18")));
    assert!(!restores_frame(&insn("PUSH", "RBP")));
    assert!(restores_frame(&insn("ldp", "x29, x30, [sp], #0x10")));
    assert!(restores_frame(&insn("ldr", "x19, [sp], #0x10")));
    assert!(!restores_frame(&insn("stp", "x29, x30, [sp, #-0x10]!")));
    assert!(!restores_frame(&insn("ldr", "x0, [x1, #8]")));
    assert!(restores_frame(&insn("ld", "ra,8(sp)")));
    assert!(restores_frame(&insn("addi", "sp,sp,16")));
    assert!(!restores_frame(&insn("addi", "sp,sp,-16")));
}
