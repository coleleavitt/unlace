use super::*;

#[test]
fn md5_known_vector() {
    assert_eq!(hex(&md5(b"abc")), "900150983cd24fb0d6963f7d28e17f72");
}

#[test]
fn masked_bits_do_not_change_the_key() {
    // push ebp; mov ebp,esp; call rel32; mov eax,[abs32]; pop ebp; ret
    let build = |call: [u8; 4], abs: [u8; 4]| {
        let mut b = CalcrelBuilder::new();
        b.push(&[0x55], &[]);
        b.push(&[0x89, 0xE5], &[0, 0]);
        b.push(
            &[0xE8, call[0], call[1], call[2], call[3]],
            &[0, 0xFF, 0xFF, 0xFF, 0xFF],
        );
        b.push(
            &[0xA1, abs[0], abs[1], abs[2], abs[3]],
            &[0, 0xFF, 0xFF, 0xFF, 0xFF],
        );
        b.push(&[0x5D, 0xC3], &[]);
        b
    };
    let a = build([0x73, 0x56, 0x34, 0x12], [0, 0x10, 0x40, 0]);
    let b = build([0x11, 0x22, 0x33, 0x44], [0, 0x20, 0x40, 0]);
    assert_eq!(
        a.normalized(),
        vec![
            0x55, 0x89, 0xE5, 0xE8, 0, 0, 0, 0, 0xA1, 0, 0, 0, 0, 0x5D, 0xC3
        ]
    );
    assert_eq!(a.finish(), b.finish());
    let mut c = a.clone();
    c.push(&[0x90], &[]);
    assert_ne!(a.finish(), c.finish());
}

#[test]
fn the_mask_is_part_of_the_key() {
    let mut a = CalcrelBuilder::new();
    a.push(&[0xE8, 0, 0, 0, 0], &[0, 0, 0, 0, 0]);
    let mut b = CalcrelBuilder::new();
    b.push(&[0xE8, 0, 0, 0, 0], &[0, 0xFF, 0xFF, 0xFF, 0xFF]);
    assert_eq!(a.normalized(), b.normalized());
    assert_ne!(a.finish(), b.finish());
}

#[test]
fn hex_roundtrips() {
    let bytes = [0x00, 0x7F, 0xAB, 0xFF];
    assert_eq!(parse_hex(&hex(&bytes)).unwrap(), bytes);
    assert_eq!(parse_hex("0x0a0B").unwrap(), vec![0x0A, 0x0B]);
    assert!(parse_hex("abc").is_none());
    assert!(parse_hex("zz").is_none());
}
