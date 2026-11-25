use super::*;

fn patch(r_type: u32, addend: i64, bytes: &[u8], symbol: u64, place: u64) -> Vec<u8> {
    let info = RelocationInfo {
        kind: RelocationKind::Unknown,
        encoding: RelocationEncoding::Unknown,
        size: 0,
        addend,
        implicit_addend: false,
        r_type: Some(r_type),
    };
    let spec = classify_info(Architecture::LoongArch64, info)
        .unwrap()
        .expect("not a no-op");
    let mut field = bytes.to_vec();
    assert_eq!(field.len(), spec.width());
    apply_info(spec, info, &mut field, true, symbol, place, None, None).unwrap();
    field
}

fn word(v: u32) -> Vec<u8> {
    v.to_le_bytes().to_vec()
}

// Words as ld.lld --no-relax writes them for the sweep's loongarch64 object.
#[test]
fn pcala_pair_and_call36_match_the_linker() {
    assert_eq!(
        patch(
            elf::R_LARCH_PCALA_HI20,
            76,
            &word(0x1a00_0005),
            0x2_0630,
            0x1_00dc
        ),
        word(0x1a00_0205)
    );
    assert_eq!(
        patch(
            elf::R_LARCH_PCALA_LO12,
            76,
            &word(0x02c0_00a5),
            0x2_0630,
            0x1_00e0
        ),
        word(0x02d9_f0a5)
    );
    let call = [word(0x1e00_0014), word(0x4c00_0280)].concat();
    assert_eq!(
        patch(elf::R_LARCH_CALL36, 0, &call, 0x1_01a0, 0x1_015c),
        [word(0x1e00_0014), word(0x4c00_4680)].concat()
    );
}

#[test]
fn branches_split_their_word_displacement() {
    assert_eq!(
        patch(elf::R_LARCH_B26, 0, &word(0x5400_0000), 0x1100, 0x1000),
        word(0x5401_0000)
    );
    assert_eq!(
        patch(
            elf::R_LARCH_B26,
            0,
            &word(0x5400_0000),
            0x20_0000,
            0x30_0000
        ),
        word(0x5400_03fc)
    );
    assert_eq!(
        patch(elf::R_LARCH_B21, 0, &word(0x4000_0080), 0x1040, 0x1000),
        word(0x4000_4080)
    );
    assert_eq!(
        patch(elf::R_LARCH_B16, 0, &word(0x5800_0085), 0x0ff0, 0x1000),
        word(0x5bff_f085)
    );
    assert!(
        classify_info(
            Architecture::LoongArch64,
            RelocationInfo {
                kind: RelocationKind::Unknown,
                encoding: RelocationEncoding::Unknown,
                size: 0,
                addend: 0,
                implicit_addend: false,
                r_type: Some(elf::R_LARCH_RELAX),
            },
        )
        .unwrap()
        .is_none()
    );
}
