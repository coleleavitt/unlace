use super::*;

fn image(chip_id: u16, entry: u32, segments: &[(u32, &[u8])]) -> Vec<u8> {
    let mut b = vec![0xe9, segments.len() as u8, 2, 0x20];
    b.extend(entry.to_le_bytes());
    b.extend([0xee, 0, 0, 0]);
    b.extend(chip_id.to_le_bytes());
    b.extend([0u8; 10]);
    for (addr, data) in segments {
        b.extend(addr.to_le_bytes());
        b.extend((data.len() as u32).to_le_bytes());
        b.extend(*data);
    }
    b
}

#[test]
fn segments_take_their_regions_properties() {
    let rodata = [&APP_DESC_MAGIC[..], &[0u8; 12]].concat();
    let b = image(
        0,
        0x4008_0004,
        &[
            (0x3f40_0020, &rodata),
            (0x3ffb_0000, &[1; 8]),
            (0x4008_0000, &[2; 8]),
            (0x400d_0020, &[3; 8]),
        ],
    );
    let img = parse(&b).unwrap();
    assert_eq!(
        (img.chip, img.riscv, img.entry),
        (Some(EspChip::Esp32), false, 0x4008_0004)
    );
    let rows: Vec<_> = img
        .segments
        .iter()
        .map(|s| (s.region.unwrap(), s.flags))
        .collect();
    let (code, data, ro) = (
        section_flags::CODE,
        section_flags::DATA,
        section_flags::READONLY,
    );
    assert_eq!(
        rows,
        [
            ("DROM", data | ro),
            ("DRAM", data),
            ("IRAM", code | ro),
            ("IROM", code | ro)
        ]
    );
    assert_eq!(img.segments[0].file_offset, 32);
}

#[test]
fn one_bus_flash_splits_on_the_application_descriptor() {
    let rodata = [&APP_DESC_MAGIC[..], &[0u8; 12]].concat();
    let b = image(
        0x0d,
        0x4080_0000,
        &[
            (0x4201_0020, &rodata),
            (0x4080_0000, &[1; 8]),
            (0x4200_0020, &[2; 8]),
        ],
    );
    let img = parse(&b).unwrap();
    assert_eq!((img.chip, img.riscv), (Some(EspChip::Esp32C6), true));
    let (code, data, ro) = (
        section_flags::CODE,
        section_flags::DATA,
        section_flags::READONLY,
    );
    assert_eq!(
        img.segments.iter().map(|s| s.flags).collect::<Vec<_>>(),
        [data | ro, code, code | ro]
    );
}

#[test]
fn an_image_without_the_extended_header_is_an_esp8266() {
    let mut b = vec![0xe9, 1, 2, 0x20];
    b.extend(0x4010_0004u32.to_le_bytes());
    b.extend(0x4010_0000u32.to_le_bytes());
    b.extend(16u32.to_le_bytes());
    b.extend([0xffu8; 16]);
    let img = parse(&b).unwrap();
    assert_eq!(
        (img.chip, img.target()),
        (Some(EspChip::Esp8266), "Xtensa:LE:32:default")
    );
}

#[test]
fn malformed_images_are_refused() {
    let good = image(5, 0x4038_0000, &[(0x4038_0000, &[0; 8])]);
    assert!(parse(&good).is_some());
    assert!(
        parse(&good[..good.len() - 1]).is_none(),
        "truncated segment"
    );
    let mut huge = good.clone();
    huge[28..32].copy_from_slice(&u32::MAX.to_le_bytes());
    assert!(parse(&huge).is_none(), "length past the file");
    assert!(
        parse(&image(5, 0x4200_0000, &[(0x4038_0000, &[0; 8])])).is_none(),
        "entry outside every segment"
    );
    assert!(
        parse(&image(5, 0x1000, &[(0x1000, &[0; 8])])).is_none(),
        "address below every chip's memory"
    );
    assert!(parse(&[0xe9, 0, 0, 0]).is_none());
    assert!(parse(&[]).is_none());
}

#[test]
fn padding_segments_are_skipped() {
    let b = image(0, 0x4008_0000, &[(0, &[0; 16]), (0x4008_0000, &[1; 8])]);
    assert_eq!(parse(&b).unwrap().segments.len(), 1);
}
