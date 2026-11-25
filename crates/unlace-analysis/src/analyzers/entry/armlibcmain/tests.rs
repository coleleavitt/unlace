use super::*;

fn fixture(name: &str) -> Vec<u8> {
    let path = format!("{}/tests/fixtures/{}", env!("CARGO_MANIFEST_DIR"), name);
    std::fs::read(&path).unwrap_or_else(|_| panic!("read fixture {path}"))
}

fn claim(name: &str) -> Option<u64> {
    let bytes = fixture(name);
    let file = object::File::parse(bytes.as_slice()).unwrap_or_else(|e| panic!("{name}: {e}"));
    main_vma(&file, bytes.as_slice())
}

/// The headline shape: the classic `crt1.o` hands `main` over in a literal
/// pool word, and nothing in the image relocates it.
#[test]
fn claims_main_from_the_literal_pool_of_a_non_pie_start() {
    assert_eq!(claim("armlibcmain_le32"), Some(0x103dc));
}

/// The shape a modern `-no-pie` link supplies: the pool word is a `.got`
/// offset and the slot the linker filled holds `main`.
#[test]
fn claims_main_from_a_statically_filled_got_slot() {
    assert_eq!(claim("armlibcmain_got_le32"), Some(0x10518));
}

/// The refusal that keeps this off the PIE ARM images oracle 4 already
/// resolves through their `R_ARM_RELATIVE` table, and off a static link with
/// no `__libc_start_main` stub to anchor the decode.
#[test]
fn defers_to_the_pie_and_static_arm_shapes() {
    assert_eq!(claim("entrymain_arm"), None, "PIE crt1 is oracle 4's own");
    assert_eq!(claim("poolref_arm_le32"), None, "no PLT stub to anchor on");
    assert_eq!(
        claim("arm_thumb_linked_le32"),
        None,
        "static, and already named"
    );
}

/// Structurally inert off 32-bit ARM ELF, which is why no parity assertion
/// on any other target can move.
#[test]
fn contributes_nothing_off_arm32_elf() {
    assert_eq!(claim("cet_pie_x86_64"), None, "x86-64 ELF");
    assert_eq!(claim("entrymain_aarch64"), None, "AArch64 ELF");
    assert_eq!(claim("macho_imports_arm64"), None, "Mach-O");
    assert_eq!(claim("armv4t_thumb_pe.exe"), None, "ARM PE");
}

/// The three A32 decoders, on the exact words the witness `_start` carries
/// (`arm_kgme1` @0x8380/0x838c) and the GOT-indexed fixture (@0x10450).
#[test]
fn decodes_the_a32_words_the_idiom_is_built_from() {
    // ldr r0,[pc,#0x10] at 0x8380 -> the pool word at 0x8398.
    assert_eq!(ldr_literal(0xe59f_0010, 0x8380, 0), Some(0x8398));
    // The same encoding with U=0 subtracts.
    assert_eq!(ldr_literal(0xe51f_0010, 0x8380, 0), Some(0x8378));
    // r12, not r0.
    assert_eq!(ldr_literal(0xe59f_c024, 0x8368, 0), None);
    // bl 0x8320 at 0x838c (a backwards branch).
    assert_eq!(bl_target(0xebff_ffe3, 0x838c), Some(0x8320));
    // blx is not a PLT-stub entry.
    assert_eq!(bl_target(0xfbff_ffe3, 0x838c), None);
    // ldr r0,[r10,r0] — the GOT index.
    assert!(is_ldr_reg_offset_r0(0xe79a_0000));
    // ldr r3,[r10,r3] writes r3, not r0.
    assert!(!is_ldr_reg_offset_r0(0xe79a_3003));
}
