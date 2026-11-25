use super::is_branch_rel32;

#[test]
fn call_jmp_and_jcc_fields_are_branches() {
    let code = [
        0x6a, 0x03, 0xe8, 0, 0, 0, 0, 0xe9, 0, 0, 0, 0, 0x0f, 0x85, 0, 0, 0, 0,
    ];
    assert!(is_branch_rel32(&code, 3));
    assert!(is_branch_rel32(&code, 8));
    assert!(is_branch_rel32(&code, 14));
}

#[test]
fn a_rip_relative_operand_is_not_a_branch() {
    // lea rdi, [rip + rel32]: 48 8D 3D rel32.
    let code = [0x48, 0x8d, 0x3d, 0, 0, 0, 0];
    assert!(!is_branch_rel32(&code, 3));
    assert!(!is_branch_rel32(&code, 0));
}
