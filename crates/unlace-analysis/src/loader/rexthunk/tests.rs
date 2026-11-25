use super::*;

fn slots(v: &[u64]) -> HashMap<u64, Vec<u8>> {
    v.iter().map(|&s| (s, b"import".to_vec())).collect()
}

fn ff25(at: u64, slot: u64) -> Vec<u8> {
    let mut b = vec![0xFF, 0x25];
    b.extend_from_slice(&((slot.wrapping_sub(at + 6)) as i32).to_le_bytes());
    b
}

fn refs(code: &[(u64, &[u8])], wanted: u64) -> bool {
    referenced(code, &[], &[], &HashSet::from([wanted])).contains(&wanted)
}

/// The cache answers per image: two images of one size that differ only in a
/// pointer, or only in which section holds it, get their own answers.
#[test]
fn cached_answers_follow_the_image_bytes() {
    let target = 0x140001207u64;
    let wanted = HashSet::from([target]);
    let with = target.to_le_bytes();
    let without = (target + 1).to_le_bytes();
    for _ in 0..2 {
        assert_eq!(
            referenced_cached(&[], &[(0x140003000, &with[..])], &[], &wanted),
            wanted
        );
        assert!(referenced_cached(&[], &[(0x140003000, &without[..])], &[], &wanted).is_empty());
        let code = [(0x140001000u64, &without[..])];
        assert!(referenced_cached(&code, &[(0x140001000, &without[..])], &[], &wanted).is_empty());
    }
}

#[test]
fn a_rex_byte_before_ff25_is_a_tail_and_padding_is_not() {
    let vma = 0x140001000;
    let slot = 0x140002000;
    for (prev, tail) in [
        (0x48u8, true),
        (0x40, true),
        (0x4F, true),
        (0xCC, false),
        (0x90, false),
        (0x00, false),
    ] {
        let mut data = vec![prev];
        data.extend(ff25(vma + 1, slot));
        assert_eq!(
            is_rex_tail(vma, &data, 1, &slots(&[slot])),
            tail,
            "prev {prev:#x}"
        );
    }
    let data = ff25(vma, slot);
    assert!(
        !is_rex_tail(vma, &data, 0, &slots(&[slot])),
        "a section-leading FF 25 has no prefix"
    );
}

/// A contiguous link.exe table in a layout over 1 GiB: the previous thunk's
/// displacement high byte is `40`, and the look-back sees that thunk.
#[test]
fn a_thunk_after_a_far_thunk_of_the_same_table_is_not_a_tail() {
    let vma = 0x140001000u64;
    let (s0, s1) = (vma + 0x4000_1000, vma + 0x4000_1008);
    let mut data = ff25(vma, s0);
    assert_eq!(data[5], 0x40);
    data.extend(ff25(vma + 6, s1));
    assert!(!is_rex_tail(vma, &data, 6, &slots(&[s0, s1])));
    assert!(
        is_rex_tail(vma, &data, 6, &slots(&[s1])),
        "an unresolving look-back proves nothing"
    );
}

#[test]
fn rel32_branches_and_rip_relative_lea_are_references() {
    let vma = 0x140001000u64;
    let target = 0x140001100u64;
    for op in [
        &[0xE8u8][..],
        &[0xE9],
        &[0x0F, 0x84],
        &[0x48, 0x8D, 0x0D],
        &[0x4C, 0x8D, 0x05],
    ] {
        let mut code = vec![0x90; 3];
        code.extend_from_slice(op);
        let end = vma + (code.len() + 4) as u64;
        code.extend_from_slice(&((target.wrapping_sub(end)) as i32).to_le_bytes());
        assert!(refs(&[(vma, &code)], target), "{op:x?}");
        assert!(!refs(&[(vma, &code)], target + 1), "{op:x?}");
    }
    let mov = [0x48u8, 0x8B, 0x0D, 0, 0, 0, 0];
    assert!(!refs(&[(vma, &mov)], vma + 7), "a load is not a reference");
    let short = [0xEBu8, 0x10, 0x74, 0x0E];
    assert!(
        !refs(&[(vma, &short)], vma + 0x12),
        "a short branch is not counted"
    );
}

#[test]
fn a_reference_from_another_section_counts() {
    let text = (0x140001000u64, vec![0xCCu8; 16]);
    let call_at = 0x140005000u64;
    let mut stub = vec![0xE8];
    stub.extend_from_slice(&((0x140001008u64.wrapping_sub(call_at + 5)) as i32).to_le_bytes());
    let code = [(text.0, &text.1[..]), (call_at, &stub[..])];
    assert!(refs(&code, 0x140001008));
}

/// An absolute pointer anywhere in any section, at any alignment, and a declared
/// start are references; a pointer one byte off is not.
#[test]
fn eight_byte_pointers_and_declared_starts_are_references() {
    let target = 0x140001207u64;
    let wanted = HashSet::from([target]);
    let mut data = vec![0u8; 3];
    data.extend_from_slice(&target.to_le_bytes());
    let imm64 = [
        &[0x48u8, 0xB8][..],
        &target.to_le_bytes()[..],
        &[0xFF, 0xD0][..],
    ]
    .concat();
    for blob in [&data[..], &imm64[..]] {
        assert_eq!(
            referenced(&[], &[(0x140003000, blob)], &[], &wanted),
            wanted
        );
    }
    let off = (target + 1).to_le_bytes();
    assert!(referenced(&[], &[(0x140003000, &off[..])], &[], &wanted).is_empty());
    assert_eq!(
        referenced(&[], &[], &[0x140001000, target], &wanted),
        wanted
    );
}
