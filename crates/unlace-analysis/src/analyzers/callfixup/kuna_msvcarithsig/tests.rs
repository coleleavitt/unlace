use super::*;

#[test]
fn every_helper_matches_at_its_entry() {
    for (i, &(bytes, name)) in SIGNATURES.iter().enumerate() {
        let mut code = vec![0xcc; 0x10];
        code.extend_from_slice(bytes);
        code.extend_from_slice(&[0xcc; 4]);
        assert_eq!(
            scan_bytes(&code, 0x1000_0000 + 0x100 * i as u64),
            vec![(0x1000_0010 + 0x100 * i as u64, name)],
            "{name}"
        );
    }
}

#[test]
fn tpm_layout_names_allmul_and_aulldiv() {
    let mut code = ALLMUL.to_vec();
    code.resize(0x40, 0xcc);
    code.extend_from_slice(AULLDIV);
    assert_eq!(
        scan_bytes(&code, 0x1010_6380),
        vec![(0x1010_6380, "__allmul"), (0x1010_63c0, "__aulldiv")]
    );
}

#[test]
fn one_changed_byte_rejects() {
    let mut code = ALLMUL.to_vec();
    code[0x0e] = 0x74;
    assert!(scan_bytes(&code, 0).is_empty());
    let mut code = AULLSHR.to_vec();
    code[0x0b] = 0xa5;
    assert!(scan_bytes(&code, 0).is_empty());
}

#[test]
fn truncated_stream_is_ignored() {
    assert!(scan_bytes(&ALLDVRM[..ALLDVRM.len() - 1], 0).is_empty());
}

#[test]
fn signatures_are_distinct() {
    for (i, &(a, _)) in SIGNATURES.iter().enumerate() {
        for &(b, _) in &SIGNATURES[i + 1..] {
            assert!(memmem::find(a, b).is_none() && memmem::find(b, a).is_none());
        }
    }
}
