use super::*;

/// Encodings as `llvm-objdump` prints them in the images they came from.
#[test]
fn aarch64_adrp_and_adr_are_recomputed_from_the_encoding() {
    // The issue's dylib: `adrp x0, 0x0` at 0x2ec.
    assert_eq!(aarch64(0x2ec, 0x9000_0000), Some(0));
    // ld-linux-aarch64.so.1
    assert_eq!(aarch64(0xae4, 0xf000_0150), Some(0x2b000));
    assert_eq!(aarch64(0x737c, 0xb000_012b), Some(0x2c000));
    assert_eq!(aarch64(0xfbcc, 0xd000_0043), Some(0x19000));
    // `adr x0, #8`, `adr x0, #-8`, `adr x3, #65519`
    assert_eq!(aarch64(0x400, 0x1000_0040), Some(0x408));
    assert_eq!(aarch64(0x404, 0x10ff_ffc0), Some(0x3fc));
    assert_eq!(aarch64(0x410, 0x7007_ff63), Some(0x103ff));
    // `mov x0, #0x2d0` and `add x0, x0, #0x2d0` carry the same constant.
    assert_eq!(aarch64(0x2f0, 0xd280_5a00), None);
    assert_eq!(aarch64(0x2f0, 0x910b_4000), None);
}

#[test]
fn arm_adr_spellings_are_recomputed_from_the_encoding() {
    // A32 `add r12, pc, #0` (a PLT entry's `adr`) and `sub r2, pc, #52`.
    assert_eq!(a32(0x7a0, 0xe28f_c000), Some(0x7a8));
    assert_eq!(a32(0xc70, 0xe24f_2034), Some(0xc44));
    // `add r0, r4, #1328` reads r4.
    assert_eq!(a32(0xc74, 0xe284_0e53), None);
    // Thumb `adr r0, #8`, `adr.w r0, #512`, `adr.w r1, #-24`.
    assert_eq!(thumb16(0xd02, 0xa002), Some(0xd0c));
    assert_eq!(thumb32(0xe00, 0xf20f, 0x2000), Some(0x1004));
    assert_eq!(thumb32(0xe04, 0xf2af, 0x0118), Some(0xdf0));
    // `add.w r0, r4, #16`
    assert_eq!(thumb32(0xe08, 0xf104, 0x0010), None);
}
