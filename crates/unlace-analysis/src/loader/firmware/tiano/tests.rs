use super::*;

fn fixture(name: &str) -> Vec<u8> {
    std::fs::read(
        std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
            .join("tests/fixtures")
            .join(name),
    )
    .unwrap()
}

#[test]
fn both_variants_round_trip_edk2_tianocompress_output() {
    let plain = fixture("uefi_diskio_x64.efi");
    assert_eq!(
        decompress(&fixture("uefi_diskio_x64.tiano"), Variant::Tiano).unwrap(),
        plain
    );
    assert_eq!(
        decompress(&fixture("uefi_diskio_x64.eficomp"), Variant::Efi).unwrap(),
        plain
    );
    assert_eq!(
        decompress_either(&fixture("uefi_diskio_x64.tiano"), Variant::Efi).unwrap(),
        plain
    );
}

#[test]
fn a_truncated_stream_is_an_error() {
    let data = fixture("uefi_diskio_x64.tiano");
    assert!(decompress(&data[..data.len() / 2], Variant::Tiano).is_err());
}
