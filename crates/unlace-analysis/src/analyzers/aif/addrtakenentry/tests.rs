use super::materialized;

#[test]
fn rip_relative_lea_names_its_target() {
    // lea rax,[rip+0x9] at 0x140001030 (the GH-1039 registration stub)
    let lea = [0x48, 0x8d, 0x05, 0x09, 0x00, 0x00, 0x00];
    assert_eq!(materialized(0x1_4000_1030, &lea), Some(0x1_4000_1040));
    // lea rcx,[rip-0x10]
    let back = [0x48, 0x8d, 0x0d, 0xf0, 0xff, 0xff, 0xff];
    assert_eq!(materialized(0x1000, &back), Some(0x1007 - 0x10));
}

#[test]
fn register_based_lea_names_nothing() {
    // lea eax,[rcx+rcx*4]
    assert_eq!(materialized(0x1000, &[0x8d, 0x04, 0x89]), None);
    // lea rax,[rbx+0x10]
    assert_eq!(materialized(0x1000, &[0x48, 0x8d, 0x43, 0x10]), None);
}

#[test]
fn immediates_are_read_at_their_width() {
    // mov edi,0x401136
    assert_eq!(
        materialized(0x1000, &[0xbf, 0x36, 0x11, 0x40, 0x00]),
        Some(0x401136)
    );
    // movabs rax,0x140001040
    let movabs = [0x48, 0xb8, 0x40, 0x10, 0x00, 0x40, 0x01, 0x00, 0x00, 0x00];
    assert_eq!(materialized(0x1000, &movabs), Some(0x1_4000_1040));
    // mov qword [rip+0x100],0x401136
    let store = [
        0x48, 0xc7, 0x05, 0x00, 0x01, 0x00, 0x00, 0x36, 0x11, 0x40, 0x00,
    ];
    assert_eq!(materialized(0x1000, &store), Some(0x401136));
    // push 0x401000
    assert_eq!(
        materialized(0x1000, &[0x68, 0x00, 0x10, 0x40, 0x00]),
        Some(0x401000)
    );
    // lea eax,[rip+0x10]: a 32-bit lea keeps the low half
    assert_eq!(
        materialized(0x1_0000_1000, &[0x8d, 0x05, 0x10, 0x00, 0x00, 0x00]),
        Some(0x1016)
    );
}

fn insn(mnemonic: &str, operands: &str) -> super::ProbedInsn {
    super::ProbedInsn {
        len: 1,
        kind: crate::listing::FlowKind::Fallthrough,
        is_call: false,
        is_terminal: false,
        fall_through: None,
        flows: Vec::new(),
        mnemonic: std::rc::Rc::from(mnemonic),
        operands: operands.to_string(),
        reusable: None,
    }
}

fn walk(insns: &[(&str, &str)]) -> Option<Option<i64>> {
    let mut stack = super::Stack {
        depth: Some(0),
        frame: super::Frame::None,
    };
    for (m, o) in insns {
        stack = stack.step(&insn(m, o))?;
    }
    Some(stack.depth)
}

/// gcc `-O0`'s computed-goto exit label reads the frame and `leave`s it
/// without having built it; a function that builds its frame balances.
#[test]
fn a_frame_torn_down_but_never_built_is_refused() {
    assert_eq!(
        walk(&[("MOV", "RAX,qword ptr [RBP + -0x30]"), ("LEAVE", "")]),
        None
    );
    assert_eq!(walk(&[("POP", "RBP")]), Some(Some(8)));
    assert_eq!(walk(&[("ADD", "RSP,0x38")]), Some(Some(0x38)));
    assert_eq!(
        walk(&[
            ("PUSH", "RBP"),
            ("MOV", "RBP,RSP"),
            ("SUB", "RSP,0x20"),
            ("LEAVE", "")
        ]),
        Some(Some(0))
    );
    assert_eq!(
        walk(&[("SUB", "RSP,0x28"), ("ADD", "RSP,0x28")]),
        Some(Some(0))
    );
}

#[test]
fn indirect_jumps_are_read_off_the_opcode() {
    assert!(super::is_indirect_jmp(&[0xff, 0xe0])); // jmp rax
    assert!(super::is_indirect_jmp(&[0x41, 0xff, 0xe3])); // jmp r11
    assert!(super::is_indirect_jmp(&[0x3e, 0xff, 0xe0])); // notrack jmp rax
    assert!(super::is_indirect_jmp(&[0xff, 0x24, 0xc5, 0, 0, 0, 0])); // jmp [rax*8+disp]
    assert!(!super::is_indirect_jmp(&[0xff, 0xd0])); // call rax
    assert!(!super::is_indirect_jmp(&[0x0f, 0x0b])); // ud2
    assert!(!super::is_indirect_jmp(&[0xe9, 0, 0, 0, 0])); // jmp rel32
    assert!(!super::is_indirect_jmp(&[0x48, 0xff, 0x25, 0, 0, 0, 0])); // jmp [rip+slot]
}

#[test]
fn narrowed_and_unrelated_forms_name_nothing() {
    // mov ax,0x1234
    assert_eq!(materialized(0x1000, &[0x66, 0xb8, 0x34, 0x12]), None);
    // xbegin (c7 f8 rel32)
    assert_eq!(
        materialized(0x1000, &[0xc7, 0xf8, 0x00, 0x00, 0x00, 0x00]),
        None
    );
    // call rel32
    assert_eq!(materialized(0x1000, &[0xe8, 0x00, 0x00, 0x00, 0x00]), None);
}
