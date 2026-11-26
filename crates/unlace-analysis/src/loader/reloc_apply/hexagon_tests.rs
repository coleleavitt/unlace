use super::*;

fn patch(
    r_type: u32,
    addend: i64,
    insn: u32,
    symbol: u64,
    place: u64,
) -> Result<u32, RelocationFailure> {
    let info = RelocationInfo {
        kind: RelocationKind::Unknown,
        encoding: RelocationEncoding::Unknown,
        size: 0,
        addend,
        implicit_addend: false,
        r_type: Some(r_type),
    };
    let spec = classify_info(Architecture::Hexagon, info)?.expect("not a no-op");
    let mut field = insn.to_le_bytes();
    apply_info(spec, info, &mut field, true, symbol, place, None, None)?;
    Ok(u32::from_le_bytes(field))
}

// ld.lld 22.1.8 on a non-duplex `0x7c` `Rd = ##` word: the consumer's low six bits sit at 15..20, and the
// `immext` carries the value above bit 5 (scattered over 13..0 and 27..16).
#[test]
fn low_six_bits_of_a_0x7c_immediate_match_the_linker() {
    assert_eq!(
        patch(R_HEX_32_6_X, 0, 0x0000_4000, 0x1_00b4, 0),
        Ok(0x0000_4402)
    );
    assert_eq!(
        patch(R_HEX_6_X, 0, 0x7c80_4020, 0x1_00b4, 0),
        Ok(0x7c9a_4020)
    );
    assert_eq!(
        patch(R_HEX_6_X, 0, 0x7c80_4080, 0x41_0464, 0),
        Ok(0x7c92_4080)
    );
}

// Words as ld.lld writes them for the sweep's hexagon objects.
#[test]
fn branches_extenders_and_low_six_bits_match_the_linker() {
    assert_eq!(
        patch(R_HEX_B9_PCREL_X, 0, 0x1701_c000, 0x1_0164, 0x1_013c),
        Ok(0x1701_c050)
    );
    assert_eq!(
        patch(R_HEX_16_X, 0, 0x4880_c000, 0x3_0738, 0),
        Ok(0x4880_c038)
    );
    assert_eq!(
        patch(R_HEX_16_X, 0, 0x4980_c000, 0x2_1324, 0),
        Ok(0x4980_c480)
    );
    assert_eq!(
        patch(R_HEX_16_X, 0, 0x7800_c001, 0x3_06fc, 0),
        Ok(0x7800_c781)
    );
    assert_eq!(
        patch(R_HEX_6_X, 0, 0x6802_3c40, 0x3_06fc, 0),
        Ok(0x6bc2_3c40)
    );
    assert_eq!(
        patch(R_HEX_6_X, 0, 0x9d83_f000, 0x2_0568, 0),
        Ok(0x9d83_fa00)
    );
    assert_eq!(
        patch(R_HEX_32_6_X, 0, 0x0000_4000, 0x3_06fc, 0),
        Ok(0x0000_4000 | scatter_bits(0x0fff_3fff, 0x3_06fc >> 6))
    );
    assert_eq!(
        patch(R_HEX_B22_PCREL, 0, 0x5a00_c000, 0x1_0400, 0x1_0000),
        Ok(0x5a00_c000 | scatter_bits(0x01ff_3ffe, 0x100))
    );
    assert_eq!(
        patch(R_HEX_B22_PCREL, 0, 0x5a00_c000, 0x1_0402, 0x1_0000),
        Err(RelocationFailure::Misaligned)
    );
    assert_eq!(
        patch(R_HEX_B22_PCREL, 0, 0x5a00_c000, 0x100_0000, 0),
        Err(RelocationFailure::OutOfRange)
    );
    assert_eq!(
        patch(R_HEX_16_X, 0, 0x1100_c000, 0x3_0738, 0),
        Err(RelocationFailure::Unsupported)
    );
    assert_eq!(scatter_bits(0x0000_0ff0, 0x5), 0x50);
    assert_eq!(scatter_bits(0x0000_1f18, 0x7f), 0x1f18);
}
