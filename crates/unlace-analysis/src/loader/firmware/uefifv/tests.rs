use super::*;

#[test]
fn guid_strings_use_registry_form() {
    assert_eq!(guid_string(&LZMA), "EE4E5898-3914-4259-9D6E-DC7BD79403CF");
}

fn volume_with(sections: &[u8]) -> Vec<u8> {
    let mut fv = vec![0u8; 0x48];
    fv[0x28..0x2c].copy_from_slice(b"_FVH");
    fv[0x30..0x32].copy_from_slice(&0x48u16.to_le_bytes());
    let mut file = vec![0x22u8; 16];
    file.extend([0, 0, 0x07, 0]);
    file.extend(&((24 + sections.len()) as u32).to_le_bytes()[..3]);
    file.push(0xf8);
    file.extend(sections);
    fv.extend(&file);
    while fv.len() % 8 != 0 {
        fv.push(0xff);
    }
    let total = fv.len() as u64;
    fv[0x20..0x28].copy_from_slice(&total.to_le_bytes());
    fv
}

fn section(kind: u8, body: &[u8]) -> Vec<u8> {
    let mut s = ((4 + body.len()) as u32).to_le_bytes()[..3].to_vec();
    s.push(kind);
    s.extend(body);
    while s.len() % 4 != 0 {
        s.push(0);
    }
    s
}

#[test]
fn an_lzma_section_is_decoded_and_its_name_kept() {
    let mut inner = section(0x10, b"MZ-inner-image");
    let name: Vec<u8> = "DiskIoDxe\0"
        .encode_utf16()
        .flat_map(u16::to_le_bytes)
        .collect();
    inner.extend(section(0x15, &name));
    let mut packed = Vec::new();
    lzma_rs::lzma_compress(&mut std::io::BufReader::new(inner.as_slice()), &mut packed).unwrap();
    let mut guided_body = LZMA.to_vec();
    guided_body.extend(24u16.to_le_bytes());
    guided_body.extend(1u16.to_le_bytes());
    guided_body.extend(&packed);
    let w = walk(&volume_with(&section(0x02, &guided_body)));
    assert_eq!(w.modules.len(), 1, "{:?}", w.undecoded);
    assert_eq!(w.modules[0].image, b"MZ-inner-image");
    assert_eq!(w.modules[0].name.as_deref(), Some("DiskIoDxe"));
}

#[test]
fn standard_and_tiano_compressed_files_are_decoded() {
    let fv = std::fs::read(
        std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
            .join("tests/fixtures/uefi_tiano_efi_compressed.fv"),
    )
    .unwrap();
    let plain = std::fs::read(
        std::path::Path::new(env!("CARGO_MANIFEST_DIR")).join("tests/fixtures/uefi_diskio_x64.efi"),
    )
    .unwrap();
    let w = walk(&fv);
    assert!(w.undecoded.is_empty(), "{:?}", w.undecoded);
    assert_eq!(w.modules.len(), 2);
    assert!(w.modules.iter().all(|m| m.image == plain));
    assert_eq!(w.modules[0].name.as_deref(), Some("DiskIoDxe"));
}

#[test]
fn a_pad_file_does_not_end_the_volume() {
    let pe = b"MZ-after-the-pad";
    let mut fv = vec![0u8; 0x48];
    fv[0x28..0x2c].copy_from_slice(b"_FVH");
    fv[0x30..0x32].copy_from_slice(&0x48u16.to_le_bytes());
    fv[0x2c..0x30].copy_from_slice(&0x800u32.to_le_bytes());
    let mut pad = vec![0xffu8; 16];
    pad.extend([0, 0, 0xf0, 0]);
    pad.extend(&32u32.to_le_bytes()[..3]);
    pad.push(0xf8);
    pad.extend([0xffu8; 8]);
    fv.extend(&pad);
    let mut file = vec![0x33u8; 16];
    file.extend([0, 0, 0x06, 0]);
    file.extend(&((24 + 4 + pe.len()) as u32).to_le_bytes()[..3]);
    file.push(0xf8);
    file.extend(section(0x10, pe));
    fv.extend(&file);
    while fv.len() % 8 != 0 {
        fv.push(0xff);
    }
    let total = fv.len() as u64;
    fv[0x20..0x28].copy_from_slice(&total.to_le_bytes());
    let w = walk(&fv);
    assert_eq!(w.modules.len(), 1, "{:?}", w.undecoded);
    assert_eq!(w.modules[0].file_type, 0x06);
}

#[test]
fn bcj_decode_restores_relative_calls() {
    let mut code = vec![0x90, 0xe8, 0x0b, 0x00, 0x00, 0x00, 0x90, 0x90];
    bcj_x86_decode(&mut code);
    assert_eq!(code, [0x90, 0xe8, 0x05, 0x00, 0x00, 0x00, 0x90, 0x90]);
}

#[test]
fn a_volume_with_one_pe_file_yields_one_module() {
    let mut fv = vec![0u8; 0x48];
    fv[0x28..0x2c].copy_from_slice(b"_FVH");
    fv[0x30..0x32].copy_from_slice(&0x48u16.to_le_bytes());
    let pe = b"MZ-not-really";
    let section_len = 4 + pe.len();
    let file_len = 24 + section_len;
    let mut file = vec![0x11u8; 16];
    file.extend([0, 0, 0x07, 0]);
    file.extend(&(file_len as u32).to_le_bytes()[..3]);
    file.push(0xf8);
    file.extend(&(section_len as u32).to_le_bytes()[..3]);
    file.push(0x10);
    file.extend(pe);
    fv.extend(&file);
    while fv.len() % 8 != 0 {
        fv.push(0xff);
    }
    let total = fv.len() as u64;
    fv[0x20..0x28].copy_from_slice(&total.to_le_bytes());
    let w = walk(&fv);
    assert_eq!(w.volumes, 1);
    assert_eq!(w.modules.len(), 1);
    assert_eq!(w.modules[0].image, pe);
    assert_eq!(w.modules[0].file_type, 0x07);
}
