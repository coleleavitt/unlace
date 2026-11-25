use super::*;

/// The vendored fixture's first block: 226 compressed bytes that decode to
/// the original `Elf64_Ehdr` + 13 `Elf64_Phdr`s. Its opening bit word
/// `0xff21fbf6` spends eight 1-bits on literals (`\x7fELF\x02\x01\x01\x00`)
/// and then a length-8 match at offset 1, which lays down `e_ident`'s zero
/// padding -- the shortest end-to-end proof that the bit order, the offset
/// coding and the length coding are all right.
#[test]
fn nrv2b_le32_decodes_the_fixtures_elf_header_block() {
    let image = std::fs::read(
        std::path::Path::new(env!("CARGO_MANIFEST_DIR")).join("tests/fixtures/upx_packed_x86_64"),
    )
    .expect("fixture");
    let out = decompress(
        Variant::Nrv2b,
        BitOrder::Le32,
        &image[0x10c..0x10c + 226],
        792,
    )
    .expect("first block decodes");
    assert_eq!(out.len(), 792);
    assert_eq!(&out[..8], b"\x7fELF\x02\x01\x01\x00");
    assert_eq!(&out[8..16], &[0u8; 8]);
    // e_phnum == 13, and 64 + 13*56 == 792 -- the block is exactly the
    // header table it claims to be.
    assert_eq!(u16::from_le_bytes([out[56], out[57]]), 13);
}

#[test]
fn a_short_block_is_an_error_not_a_short_read() {
    let src = [0xf6, 0xfb, 0x21, 0xff, 0x7f, 0x45];
    assert_eq!(
        decompress(Variant::Nrv2b, BitOrder::Le32, &src, 16),
        Err(NrvError::InputOverrun)
    );
}

/// A block whose declared size is smaller than what the stream produces is
/// an error: silently truncating would be a corrupt image.
#[test]
fn a_declared_length_that_is_too_small_is_rejected() {
    let src = [
        0xf6, 0xfb, 0x21, 0xff, 0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00,
    ];
    assert!(matches!(
        decompress(Variant::Nrv2b, BitOrder::Le32, &src, 4),
        Err(NrvError::OutputOverrun)
    ));
}
