use super::*;

fn fixture(name: &str) -> Vec<u8> {
    let path = format!("{}/tests/fixtures/{}", env!("CARGO_MANIFEST_DIR"), name);
    std::fs::read(&path).unwrap_or_else(|_| panic!("read fixture {path}"))
}

fn claim(name: &str) -> Option<(u64, Source)> {
    let bytes = fixture(name);
    let file = object::File::parse(bytes.as_slice()).unwrap_or_else(|e| panic!("{name}: {e}"));
    main_claim(&file, bytes.as_slice())
}

/// The headline, in both link models: crt1 hands `main` over as a
/// PC-relative `lea` in a PIE and as a bare immediate in an `ET_EXEC`, and
/// the claim is the same either way.
#[test]
fn claims_the_libc_start_main_argument_of_a_stripped_elf() {
    // PIE: `lea rdi,[rip+0x286]` at 0x1178.
    assert_eq!(
        claim("stripped_dynamic_x86_64"),
        Some((0x1405, Source::Decoded))
    );
    // ET_EXEC: `mov rdi,0x40137a` at 0x401188.
    assert_eq!(claim("eh_lsda_x86_64"), Some((0x40137a, Source::Decoded)));
}

/// The same decode on the other three architectures oracle 4 covers, so the
/// pass is not an x86-64 feature with three dead arms.
#[test]
fn claims_it_on_every_architecture_oracle_4_decodes() {
    assert_eq!(claim("entrymain_aarch64"), Some((0x714, Source::Decoded)));
    assert_eq!(claim("entrymain_riscv64"), Some((0x608, Source::Decoded)));
    assert_eq!(claim("entrymain_arm"), Some((0x4d8, Source::Decoded)));
}

/// The fixture that carries the cost documented in the module header: a
/// `main` reading argument registers past the third still claims this pass.
#[test]
fn claims_a_main_that_reads_registers_past_the_third() {
    assert_eq!(
        claim("elfmainextra_x86_64"),
        Some((0x1026, Source::Decoded))
    );
}

/// The non-PIE ARM32 shape oracle 4 cannot see: `armlibcmain` owns the entry
/// and the name, so only the prototype is contributed here.
#[test]
fn contributes_only_the_prototype_on_the_non_pie_arm_shape() {
    assert_eq!(
        claim("armlibcmain_le32"),
        Some((0x103dc, Source::ArmLibcMain))
    );
    assert_eq!(
        claim("armlibcmain_got_le32"),
        Some((0x10518, Source::ArmLibcMain))
    );
}

/// An un-stripped image names `main` itself, and that name stays: the pass
/// contributes only the prototype, on the symbol the link resolved crt1's
/// reference to, whether or not oracle 4 can read `_start`.
#[test]
fn declares_an_image_that_names_its_own_main() {
    assert_eq!(
        claim("fmt_x86_64"),
        Some((0x401136, Source::Symbol)),
        "ET_EXEC, not stripped"
    );
    assert_eq!(
        claim("cet_pie_x86_64"),
        Some((0x1405, Source::Symbol)),
        "PIE, not stripped"
    );
    assert_eq!(
        claim("fmt_aarch64"),
        Some((0x754, Source::Symbol)),
        "AArch64 PIE"
    );
    assert_eq!(
        claim("plt_aarch64"),
        Some((0x400604, Source::Symbol)),
        "AArch64 ET_EXEC"
    );
    assert_eq!(
        claim("fmt_arm"),
        Some((0x504, Source::Symbol)),
        "Thumb PIE, the symbol's mode bit cleared"
    );
    assert_eq!(
        claim("fmt_riscv64"),
        Some((0x668, Source::Symbol)),
        "RISC-V PIE"
    );
    assert_eq!(
        claim("i386_pie_nl"),
        Some((0x1190, Source::Symbol)),
        "i386 PIE, which oracle 4 does not decode"
    );
    assert_eq!(
        claim("mips_gp_le32"),
        Some((0x400704, Source::Symbol)),
        "MIPS, which oracle 4 does not decode"
    );
}

/// Structurally inert off ELF, and on an ELF that never names the C runtime
/// entry the claim rests on.
#[test]
fn contributes_nothing_without_the_libc_runtime() {
    assert_eq!(claim("macho_stripped_main"), None, "Mach-O is machomain's");
    assert_eq!(claim("msvc_rtti_x64.exe"), None, "PE is entrymainproto's");
    assert_eq!(
        claim("unmapped_call_x86_64"),
        None,
        "static, stripped, no crt1 name"
    );
    assert_eq!(
        claim("poolref_arm_le32"),
        None,
        "no __libc_start_main anywhere"
    );
}

/// A 64-bit little-endian `ET_DYN` with one `PT_DYNAMIC` header whose
/// section is `DT_FLAGS_1 = flags` then `DT_NULL`.
fn et_dyn_with_flags_1(flags: u64) -> Vec<u8> {
    let mut b = vec![0u8; 0x100];
    b[..4].copy_from_slice(b"\x7fELF");
    b[4] = 2;
    b[5] = 1;
    b[16..18].copy_from_slice(&3u16.to_le_bytes());
    b[32..40].copy_from_slice(&0x40u64.to_le_bytes());
    b[54..56].copy_from_slice(&56u16.to_le_bytes());
    b[56..58].copy_from_slice(&1u16.to_le_bytes());
    b[0x40..0x44].copy_from_slice(&2u32.to_le_bytes());
    b[0x48..0x50].copy_from_slice(&0x80u64.to_le_bytes());
    b[0x60..0x68].copy_from_slice(&32u64.to_le_bytes());
    b[0x80..0x88].copy_from_slice(&0x6fff_fffbu64.to_le_bytes());
    b[0x88..0x90].copy_from_slice(&flags.to_le_bytes());
    b
}

#[test]
fn a_static_pie_is_an_executable_and_a_shared_object_is_not() {
    assert!(
        has_interp_or_pie(&et_dyn_with_flags_1(0x0800_0001)),
        "DF_1_PIE: static-pie"
    );
    assert!(
        !has_interp_or_pie(&et_dyn_with_flags_1(0x1)),
        "no interpreter, no DF_1_PIE: a .so"
    );
    assert!(!has_interp_or_pie(&[0x7f, b'E', b'L']), "truncated header");
}
