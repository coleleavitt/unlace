use super::*;

#[test]
fn note_round_trips() {
    let xrefs = vec![
        Xref {
            addr: 0x1_8c99_b570,
            kind: XrefKind::Call,
            name: b"___stack_chk_fail".to_vec(),
        },
        Xref {
            addr: 0x1_dc07_f118,
            kind: XrefKind::Slot,
            name: b"_objc_debug_isa_class_mask".to_vec(),
        },
    ];
    assert_eq!(decode(&encode(&xrefs)), xrefs);
    assert!(decode(&[1, 0]).is_empty());
    assert!(decode(&encode(&xrefs)[..20]).is_empty());
}

#[test]
fn adrp_immediates_decode_with_sign() {
    assert_eq!(sign_extend(0x1F_FFFF, 21), -1);
    assert_eq!(sign_extend(0x03FF_FFFF, 26) << 2, -4);
}
