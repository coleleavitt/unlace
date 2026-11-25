use super::*;

fn patch(
    r_type: u32,
    addend: i64,
    bytes: [u8; 4],
    symbol: u64,
    place: u64,
) -> Result<[u8; 4], RelocationFailure> {
    let info = RelocationInfo {
        kind: RelocationKind::Unknown,
        encoding: RelocationEncoding::Unknown,
        size: 0,
        addend,
        implicit_addend: false,
        r_type: Some(r_type),
    };
    let spec = classify_arc(info)?.expect("not a no-op");
    let mut field = bytes;
    apply_info(spec, info, &mut field, true, symbol, place, None, None)?;
    Ok(field)
}

// Words as GNU ld 2.45 writes them for arc-elf-gcc 15.3 -mcpu=hs objects.
#[test]
fn calls_branches_and_long_immediates_match_the_linker() {
    assert_eq!(
        patch(
            R_ARC_S25W_PCREL_PLT,
            0,
            [0x02, 0x08, 0, 0],
            0x1_0000,
            0x1_0078
        ),
        Ok([0x8a, 0x0f, 0xcf, 0xff])
    );
    assert_eq!(
        patch(
            R_ARC_S25H_PCREL_PLT,
            0,
            [0x01, 0x00, 0x20, 0x00],
            0x1_0000,
            0x1_0074
        ),
        Ok([0x8d, 0x07, 0xef, 0xff])
    );
    assert_eq!(
        patch(R_ARC_32_ME, 0, [0; 4], 0x1_216c, 0x1_0020),
        Ok([0x01, 0x00, 0x6c, 0x21])
    );
    assert_eq!(
        patch(R_ARC_32, 376, [0; 4], 0x1_0000, 0x1_0274),
        Ok([0x78, 0x01, 0x01, 0x00])
    );
    assert_eq!(
        patch(R_ARC_S25W_PCREL, 0, [0x02, 0x08, 0, 0], 0x1_0002, 0x1_0078),
        Err(RelocationFailure::Misaligned)
    );
    assert_eq!(
        patch(R_ARC_S25W_PCREL, 0, [0x01, 0x00, 0, 0], 0x1_0000, 0x1_0078),
        Err(RelocationFailure::InvalidEncoding)
    );
    assert_eq!(
        patch(R_ARC_S25W_PCREL, 0, [0x02, 0x08, 0, 0], 0x200_0000, 0),
        Err(RelocationFailure::OutOfRange)
    );
}
