use super::*;

/// The `delete this` flag test of an MSVC deleting destructor, found from
/// the slot's entry; a function without one is not taken for one.
#[test]
fn deleting_destructor_flag_tests() {
    // mov dword ptr [esi], vftable; ... test byte ptr [ebp+8], 1; je
    let x86 = [
        0x55, 0x8b, 0xec, 0x56, 0x8b, 0xf1, 0xc7, 0x06, 0xa4, 0x2d, 0x02, 0x10, 0xf6, 0x45, 0x08,
        0x01, 0x74, 0x09,
    ];
    assert!(tests_delete_flag(&[(0x1000, &x86)], 0x1000, false));
    assert!(!tests_delete_flag(&[(0x1000, &x86[..12])], 0x1000, false));
    // mov ebx, edx; ... test bl, 1
    let x64 = [0x8b, 0xda, 0x48, 0x8b, 0xf9, 0xf6, 0xc3, 0x01, 0x74, 0x0a];
    assert!(tests_delete_flag(&[(0x2000, &x64)], 0x2000, true));
    assert!(!tests_delete_flag(&[(0x2000, &x64)], 0x2000, false));
    assert!(!tests_delete_flag(&[(0x2000, &x64)], 0x3000, true));
}

/// A call every `__EH_prolog3`-shaped entry makes is a frame-setup
/// helper; one entry alone does not make it one.
#[test]
fn eh_prolog_helpers_are_found_from_entries() {
    let text = TextRanges::for_test(vec![(0x1000, 0x2000)]);
    // push 4; mov eax, handler; call 0x1800
    let mut code = vec![0xccu8; 0x100];
    for &at in &[0x00usize, 0x40] {
        let rel = (0x1800i64 - (0x1000 + at as i64 + 12)) as i32;
        code[at..at + 7].copy_from_slice(&[0x6a, 0x04, 0xb8, 0xb9, 0x16, 0x3e, 0x10]);
        code[at + 7] = 0xe8;
        code[at + 8..at + 12].copy_from_slice(&rel.to_le_bytes());
    }
    let sections = [(0x1000u64, code.as_slice())];
    let found = frame_setup_helpers(&sections, [0x1000, 0x1040].into_iter(), &text);
    assert_eq!(found, HashSet::from([0x1800]));
    let alone = frame_setup_helpers(&sections, [0x1000].into_iter(), &text);
    assert!(alone.is_empty());
}

#[test]
fn call_targets_follow_rel32() {
    let text = TextRanges::for_test(vec![(0x1000, 0x1100)]);
    let code = [
        0x90, 0xe8, 0x0b, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x10,
    ];
    let targets = call_targets(&[(0x1000, &code)], &text);
    assert_eq!(targets, vec![0x1011]);
}

#[test]
fn x64_lea_rip_references_a_vftable() {
    // lea rcx, [rip+0x10fe] at 0x1400010f3 names 0x1400021f8.
    let code = [
        0x48, 0x89, 0xc8, 0x48, 0x8d, 0x0d, 0xfe, 0x10, 0x00, 0x00, 0x48, 0x89,
    ];
    let owner_of = HashMap::from([(0x1_4000_21f8u64, (0usize, true))]);
    let refs = vftable_references(&[(0x1_4000_10f0, &code)], &owner_of, true);
    assert_eq!(refs, vec![0x1_4000_10f6]);
}

#[test]
fn x86_immediates_reference_a_vftable() {
    // mov dword ptr [eax], 0x4021a8
    let code = [0x89, 0xc8, 0xc7, 0x00, 0xa8, 0x21, 0x40, 0x00, 0xc3];
    let owner_of = HashMap::from([(0x4021a8u64, (0usize, true))]);
    let refs = vftable_references(&[(0x4010c0, &code)], &owner_of, false);
    assert_eq!(refs, vec![0x4010c4]);
}
