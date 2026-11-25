use super::*;

/// A two-paragraph header, one relocation at module offset 6, entry 0000:0000.
fn image() -> Vec<u8> {
    let code = [
        0xe8, 0x0d, 0x00, // call 0x10
        0x9a, 0x00, 0x00, 0x02, 0x00, // callf 0002:0000 (segment relocated)
        0xb8, 0x00, 0x4c, 0xcd, 0x21, // mov ax,0x4c00 ; int 0x21
    ];
    let mut module = vec![0x90u8; 0x24];
    module[..code.len()].copy_from_slice(&code);
    module[0x10..0x14].copy_from_slice(&[0xb8, 0x07, 0x00, 0xc3]);
    module[0x20..0x24].copy_from_slice(&[0xb8, 0x09, 0x00, 0xcb]);
    let total = 0x20 + module.len();
    let mut h = vec![0u8; 0x20];
    h[..2].copy_from_slice(b"MZ");
    h[2..4].copy_from_slice(&((total % 512) as u16).to_le_bytes());
    h[4..6].copy_from_slice(&(total.div_ceil(512) as u16).to_le_bytes());
    h[6..8].copy_from_slice(&1u16.to_le_bytes());
    h[8..10].copy_from_slice(&2u16.to_le_bytes());
    h[0x0e..0x10].copy_from_slice(&0x0003u16.to_le_bytes());
    h[0x10..0x12].copy_from_slice(&0x0100u16.to_le_bytes());
    h[0x18..0x1a].copy_from_slice(&0x1cu16.to_le_bytes());
    h[0x1c..0x20].copy_from_slice(&[0x06, 0x00, 0x00, 0x00]);
    h.extend_from_slice(&module);
    h.extend_from_slice(b"overlay bytes past the declared image");
    h
}

#[test]
fn the_module_is_relocated_at_the_load_segment() {
    let mz = MzImage::parse(&image()).unwrap();
    assert_eq!(mz.base, 0x10000);
    assert_eq!(mz.entry, 0x10000);
    assert_eq!(mz.stack, 0x10130);
    assert_eq!(
        mz.module.len(),
        0x24,
        "the overlay past the image is not mapped"
    );
    assert_eq!(&mz.module[6..8], &0x1002u16.to_le_bytes());
    assert_eq!(
        (mz.relocations, mz.skipped_relocations, mz.packer),
        (1, 0, None)
    );
    assert_eq!(mz.code_segments, vec![(0x10000, 0x1000), (0x10020, 0x1002)]);
    assert_eq!(mz.relocated_words, vec![0x10006]);
}

#[test]
fn a_far_target_outside_the_module_states_no_segment() {
    let mut bytes = image();
    bytes[0x24..0x26].copy_from_slice(&0x0100u16.to_le_bytes());
    assert_eq!(
        MzImage::parse(&bytes).unwrap().code_segments,
        vec![(0x10000, 0x1000)]
    );
}

/// `mov bx, 0x9a00; mov word [bx], seg 0000` (`bb 00 9a c7 07 ..`) reads
/// as `callf 1000:07c7` from its 9a byte, a target in segment 0x1010,
/// which the real far call names.
#[test]
fn a_far_target_past_the_next_named_segment_states_no_segment() {
    let mut module = vec![0x90u8; 0x800];
    module[..0x0d].copy_from_slice(&[
        0x9a, 0x00, 0x00, 0x10, 0x00, // callf 0010:0000 (segment relocated)
        0xbb, 0x00, 0x9a, // mov bx, 0x9a00
        0xc7, 0x07, 0x00, 0x00, // mov word [bx], seg 0000 (relocated)
        0xcb, // retf
    ]);
    module[0x100..0x104].copy_from_slice(&[0xb8, 0x09, 0x00, 0xcb]);
    let total = 0x30 + module.len();
    let mut h = vec![0u8; 0x30];
    h[..2].copy_from_slice(b"MZ");
    h[2..4].copy_from_slice(&((total % 512) as u16).to_le_bytes());
    h[4..6].copy_from_slice(&(total.div_ceil(512) as u16).to_le_bytes());
    h[6..8].copy_from_slice(&2u16.to_le_bytes());
    h[8..10].copy_from_slice(&3u16.to_le_bytes());
    h[0x18..0x1a].copy_from_slice(&0x1cu16.to_le_bytes());
    h[0x1c..0x24].copy_from_slice(&[0x03, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00]);
    h.extend_from_slice(&module);
    let mz = MzImage::parse(&h).unwrap();
    assert_eq!(&mz.module[0x0a..0x0c], &0x1000u16.to_le_bytes());
    assert_eq!(mz.code_segments, vec![(0x10000, 0x1000), (0x10100, 0x1010)]);
}

#[test]
fn a_relocation_outside_the_module_is_skipped() {
    let mut bytes = image();
    bytes[0x1e..0x20].copy_from_slice(&0x0100u16.to_le_bytes());
    let mz = MzImage::parse(&bytes).unwrap();
    assert_eq!((mz.relocations, mz.skipped_relocations), (0, 1));
    assert_eq!(&mz.module[6..8], &0x0002u16.to_le_bytes());
}

#[test]
fn newer_formats_behind_an_mz_stub_are_not_claimed() {
    let mut bytes = image();
    bytes.resize(0x200, 0);
    assert!(is_mz_dos_image(&bytes));
    for sig in [&b"PE\0\0"[..], b"NE", b"LE", b"LX"] {
        let mut stub = bytes.clone();
        stub[0x08..0x0a].copy_from_slice(&4u16.to_le_bytes());
        stub[0x3c..0x40].copy_from_slice(&0x100u32.to_le_bytes());
        stub[0x100..0x100 + sig.len()].copy_from_slice(sig);
        assert!(!is_mz_dos_image(&stub), "{sig:?}");
    }
    assert!(!is_mz_dos_image(b"MZ"));
    assert!(!is_mz_dos_image(&[0x7f, b'E', b'L', b'F', 0, 0, 0, 0]));
}

/// Bytes 0x3c..0x40 are only `e_lfanew` when the header reaches past them
/// and the relocation table does not cover them.
#[test]
fn an_lfanew_that_is_code_or_a_relocation_is_not_a_newer_header() {
    let mut bytes = image();
    bytes.resize(0x200, 0);
    bytes[0x3c..0x40].copy_from_slice(&0x100u32.to_le_bytes());
    bytes[0x100..0x102].copy_from_slice(b"LE");
    assert!(
        is_mz_dos_image(&bytes),
        "a two-paragraph header ends before e_lfanew"
    );
    bytes[0x08..0x0a].copy_from_slice(&5u16.to_le_bytes());
    assert!(!is_mz_dos_image(&bytes));
    bytes[0x06..0x08].copy_from_slice(&10u16.to_le_bytes());
    assert!(
        is_mz_dos_image(&bytes),
        "the relocation table covers e_lfanew"
    );
}

#[test]
fn an_entry_outside_the_module_is_refused() {
    let mut bytes = image();
    bytes[0x16..0x18].copy_from_slice(&0x0100u16.to_le_bytes());
    assert!(
        MzImage::parse(&bytes)
            .unwrap_err()
            .to_string()
            .contains("outside")
    );
}

#[test]
fn a_packer_stub_is_named() {
    let mut bytes = image();
    assert_eq!(packer(&bytes), None);
    bytes[0x30..0x36].copy_from_slice(b"PKLITE");
    assert_eq!(MzImage::parse(&bytes).unwrap().packer, Some("PKLITE"));
    let mut bytes = image();
    bytes[0x1c..0x20].copy_from_slice(b"LZ91");
    assert_eq!(packer(&bytes), Some("LZEXE"));
}
