use super::*;
use object::{RelocationEncoding, RelocationKind};

fn reloc(r_type: u32, implicit: bool) -> RelocationInfo {
    RelocationInfo {
        kind: RelocationKind::Unknown,
        encoding: RelocationEncoding::Unknown,
        size: 0,
        addend: 0,
        implicit_addend: implicit,
        r_type: Some(r_type),
    }
}

#[test]
fn riscv_split_immediates_encode_branch_jal_and_call_pairs() {
    let branch = reloc(elf::R_RISCV_BRANCH, false);
    let spec = classify_info(Architecture::Riscv64, branch)
        .unwrap()
        .unwrap();
    let mut bytes = 0x0000_0063u32.to_le_bytes(); // beq x0, x0, 0
    apply_info(
        spec,
        branch,
        &mut bytes,
        true,
        0x1000 - 0x10,
        0x1000,
        None,
        None,
    )
    .unwrap();
    assert_eq!(u32::from_le_bytes(bytes), 0xfe00_08e3); // beq x0, x0, -16
    let jal = reloc(elf::R_RISCV_JAL, false);
    let spec = classify_info(Architecture::Riscv64, jal).unwrap().unwrap();
    let mut bytes = 0x0000_00efu32.to_le_bytes(); // jal ra, 0
    apply_info(spec, jal, &mut bytes, true, 0x1800, 0x1000, None, None).unwrap();
    assert_eq!(u32::from_le_bytes(bytes), 0x0010_00ef); // +0x800: imm[11] is bit 20
    let call = reloc(elf::R_RISCV_CALL_PLT, false);
    let spec = classify_info(Architecture::Riscv64, call).unwrap().unwrap();
    assert_eq!(spec.width(), 8);
    let mut bytes = [0x97, 0x00, 0x00, 0x00, 0xe7, 0x80, 0x00, 0x00]; // auipc ra,0; jalr ra
    apply_info(
        spec,
        call,
        &mut bytes,
        true,
        0x2000 + 0x1ff8,
        0x2000,
        None,
        None,
    )
    .unwrap();
    assert_eq!(
        u32::from_le_bytes(bytes[..4].try_into().unwrap()),
        0x0000_2097
    ); // %hi = 2
    assert_eq!(
        u32::from_le_bytes(bytes[4..].try_into().unwrap()) >> 20,
        0xff8
    ); // %lo = -8
}

#[test]
fn aarch64_movw_groups_and_short_branches() {
    let g1 = reloc(elf::R_AARCH64_MOVW_UABS_G1, false);
    let spec = classify_info(Architecture::Aarch64, g1).unwrap().unwrap();
    let mut bytes = 0xd2a0_000au32.to_le_bytes(); // movz x10, #0, lsl 16
    apply_info(spec, g1, &mut bytes, true, 0x0012_3456, 0, None, None).unwrap();
    assert_eq!(u32::from_le_bytes(bytes), 0xd2a0_024a); // #0x12, lsl 16
    assert_eq!(
        apply_info(
            spec,
            g1,
            &mut 0xd2a0_000au32.to_le_bytes(),
            true,
            0x1_0000_0000,
            0,
            None,
            None
        ),
        Err(RelocationFailure::OutOfRange)
    );
    let tbz = reloc(elf::R_AARCH64_TSTBR14, false);
    let spec = classify_info(Architecture::Aarch64, tbz).unwrap().unwrap();
    let mut bytes = 0x3718_0000u32.to_le_bytes(); // tbnz w0, #3, .
    apply_info(spec, tbz, &mut bytes, true, 0x1020, 0x1000, None, None).unwrap();
    assert_eq!(u32::from_le_bytes(bytes), 0x3718_0100);
}

#[test]
fn ppc32_half_relocations_split_the_address() {
    let ha = reloc(elf::R_PPC_ADDR16_HA, false);
    let spec = classify_info(Architecture::PowerPc, ha).unwrap().unwrap();
    assert_eq!(spec.width(), 2);
    let mut bytes = [0, 0];
    apply_info(spec, ha, &mut bytes, false, 0x1234_8000, 0, None, None).unwrap();
    assert_eq!(bytes, [0x12, 0x35]);
}
