use super::*;

fn sites(bitness: u32, code: &[u8]) -> Vec<(usize, u64)> {
    near_branches(bitness, 0x1000, code)
        .into_iter()
        .map(|b| (b.site, b.target))
        .collect()
}

#[test]
fn call_displacement_resolves_from_the_next_instruction() {
    assert_eq!(
        sites(32, &[0xE8, 0x00, 0x01, 0x00, 0x00]),
        vec![(1, 0x1105)]
    );
}

#[test]
fn branches_after_a_frame_setup_and_a_rip_relative_load_are_found() {
    // push rbp; mov rbp, rsp; mov rax, [rip+0]; call -16 (back to 0x1000); ret
    let code = [
        0x55, 0x48, 0x89, 0xE5, 0x48, 0x8B, 0x05, 0, 0, 0, 0, 0xE8, 0xF0, 0xFF, 0xFF, 0xFF, 0xC3,
    ];
    assert_eq!(sites(64, &code), vec![(12, 0x1000)]);
}

#[test]
fn conditional_near_branch_and_sib_addressing() {
    // mov eax, [0x1000] (SIB, no base); jne +0; jmp rel32 to its next insn
    let code = [
        0x8B, 0x04, 0x25, 0x00, 0x10, 0x00, 0x00, 0x0F, 0x85, 0x00, 0x00, 0x00, 0x00, 0xE9, 0, 0,
        0, 0,
    ];
    assert_eq!(sites(32, &code), vec![(9, 0x1000 + 13), (14, 0x1000 + 18)]);
}

#[test]
fn short_branches_have_no_displacement_field() {
    assert_eq!(sites(64, &[0xEB, 0x05, 0x74, 0x01, 0x90]), Vec::new());
}

#[test]
fn an_unknown_encoding_stops_the_scan() {
    // nop; VEX-prefixed instruction (not decoded); call
    assert_eq!(
        sites(64, &[0x90, 0xC5, 0xF8, 0x77, 0xE8, 0, 0, 0, 0]),
        Vec::new()
    );
}

#[test]
fn operand_size_prefix_on_a_branch_stops_the_scan() {
    assert_eq!(sites(64, &[0x66, 0xE8, 0, 0, 0, 0]), Vec::new());
}
