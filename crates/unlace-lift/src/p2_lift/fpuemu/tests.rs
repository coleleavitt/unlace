use super::*;

#[test]
fn emulated_lengths_follow_the_modrm() {
    assert_eq!(emulated_len(&[0xcd, 0x35, 0xe8], 0), Some(3));
    assert_eq!(emulated_len(&[0xcd, 0x35, 0x06, 0x10, 0x20], 0), Some(5));
    assert_eq!(emulated_len(&[0xcd, 0x37, 0x46, 0xea], 0), Some(4));
    assert_eq!(emulated_len(&[0xcd, 0x39, 0x87, 0x10, 0x20], 0), Some(5));
    assert_eq!(emulated_len(&[0xcd, 0x3c, 0xd9, 0x07], 0), Some(4));
    assert_eq!(emulated_len(&[0xcd, 0x3d], 0), Some(2));
    assert_eq!(emulated_len(&[0xcd, 0x21], 0), None);
    assert_eq!(emulated_len(&[0xcd, 0x3e, 0xee, 0x90], 0), None);
    assert_eq!(emulated_len(&[0xcd, 0x35, 0x06, 0x10], 0), None);
}

#[test]
fn emulator_code_is_evidence() {
    let code = [
        0xcd, 0x37, 0x46, 0xea, 0xcd, 0x3d, 0x83, 0xc4, 0x04, 0xcd, 0x38, 0x0e, 0xa0, 0x04, 0x83,
        0xec, 0x08, 0xcd, 0x39, 0x5e, 0xf8, 0xcd, 0x3d,
    ];
    assert!(emulator_evidence(&code));
    assert!(!emulator_evidence(&code[..9]));
}

#[test]
fn an_interrupt_thunk_table_is_not_evidence() {
    let table: Vec<u8> = (0u8..=0xff).flat_map(|n| [0xcd, n, 0xc3]).collect();
    assert!(!emulator_evidence(&table));
}

#[test]
fn modes_parse_and_round_trip() {
    for mode in [FpuEmuMode::Off, FpuEmuMode::Auto, FpuEmuMode::On] {
        assert_eq!(parse_fpuemu_mode(mode.as_str()).unwrap().0, mode);
        assert_eq!(FpuEmuMode::from_u8(mode.as_u8()), mode);
    }
    assert!(parse_fpuemu_mode("always").is_err());
    assert_eq!(FpuEmuMode::default(), FpuEmuMode::Auto);
}
