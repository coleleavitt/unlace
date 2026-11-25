use super::*;

#[test]
fn intel_hex_flattens_with_the_linear_base_and_entry() {
    let hex = ":020000040800F2\n:0400000001020304F2\n:04000500AABBCCDDE9\n:0400000508000101ED\n:00000001FF\n";
    let Some(Container::Flat(f)) = detect(hex.as_bytes()).unwrap() else {
        panic!()
    };
    assert_eq!(f.base, 0x0800_0000);
    assert_eq!(f.bytes, [1, 2, 3, 4, 0xff, 0xaa, 0xbb, 0xcc, 0xdd]);
    assert_eq!(f.entries, [0x0800_0101]);
}

#[test]
fn uimage_names_processor_base_and_thumb_entry() {
    let mut b = vec![0u8; 64];
    b[..4].copy_from_slice(&[0x27, 0x05, 0x19, 0x56]);
    b[12..16].copy_from_slice(&8u32.to_be_bytes());
    b[16..20].copy_from_slice(&0x8000u32.to_be_bytes());
    b[20..24].copy_from_slice(&0x8001u32.to_be_bytes());
    b[29] = 2;
    b.extend([0x70, 0x47, 0, 0, 0, 0, 0, 0]);
    let Some(Container::Flat(f)) = detect(&b).unwrap() else {
        panic!()
    };
    assert_eq!(
        (f.target.as_deref(), f.base, f.entries.as_slice(), f.thumb),
        (Some("ARM:LE:32:v7"), 0x8000, &[0x8000u64][..], true)
    );
}

#[test]
fn a_bios_image_maps_below_one_megabyte_with_tracked_segments() {
    let mut b = vec![0u8; 0x20000];
    b[0x1fff0..0x1fff5].copy_from_slice(&[0xea, 0x5b, 0xe0, 0x00, 0xf0]);
    let Some(Container::Flat(f)) = detect(&b).unwrap() else {
        panic!()
    };
    assert_eq!(
        (f.base, f.entries.as_slice(), f.bytes.len()),
        (0xe0000, &[0xffff0u64][..], 0x20000)
    );
    assert_eq!(
        f.asserts,
        [
            "register CS 0xf000 0xf0000+0x10000",
            "register CS 0xe000 0xe0000+0x10000"
        ]
    );
    assert_eq!(bios_flash(&b).unwrap().base, 0xfffe_0000);
    b[0x1fff0] = 0x90;
    b[0x1fff1] = 0x90;
    assert!(detect(&b).unwrap().is_none());
}

#[test]
fn srec_reads_s3_data_and_s7_entry() {
    let text = "S30900001000DEADBEEFAE\nS70500001000EA\n";
    let Some(Container::Flat(f)) = detect(text.as_bytes()).unwrap() else {
        panic!()
    };
    assert_eq!(
        (f.base, f.bytes.as_slice(), f.entries.as_slice()),
        (0x1000, &[0xde, 0xad, 0xbe, 0xef][..], &[0x1000u64][..])
    );
}
