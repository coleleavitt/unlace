use super::*;

#[test]
fn slice_pref_parses_arch_names_and_target_ids() {
    assert_eq!(SlicePref::parse("x86_64").0, Some(Architecture::X86_64));
    assert_eq!(SlicePref::parse("amd64").0, Some(Architecture::X86_64));
    assert_eq!(SlicePref::parse("arm64").0, Some(Architecture::Aarch64));
    assert_eq!(SlicePref::parse("aarch64").0, Some(Architecture::Aarch64));
    assert_eq!(SlicePref::parse("arm64e").0, Some(Architecture::Aarch64));
    assert_eq!(SlicePref::parse("i386").0, Some(Architecture::I386));
    // A `--target` SLEIGH id steers selection by its leading arch stem.
    assert_eq!(
        SlicePref::parse("x86:LE:64:default:gcc").0,
        Some(Architecture::X86_64)
    );
    // Case-insensitive.
    assert_eq!(SlicePref::parse("ARM64").0, Some(Architecture::Aarch64));
    // An unknown token is the default preference (no panic, no error).
    assert_eq!(SlicePref::parse("riscv-banana").0, None);
    assert_eq!(SlicePref::default().0, None);
}

#[test]
fn is_fat_rejects_non_fat() {
    assert!(!is_fat(&[0x7f, b'E', b'L', b'F']));
    assert!(!is_fat(&[0xcf, 0xfa, 0xed, 0xfe])); // thin Mach-O LE64
    assert!(!is_fat(&[]));
    // select_fat_slice on a non-fat input is None (no peel).
    assert!(select_fat_slice(&[0x7f, b'E', b'L', b'F'], SlicePref::default()).is_none());
}

/// The preference order the CLI and the dispatch share. A load scope stands
/// in for the environment, so the ambient `UNLACE_MACHO_SLICE` cannot reach
/// these assertions.
#[test]
fn slice_pref_prefers_an_explicit_slice_over_a_target_stem() {
    let _load = unlace_decomp::loadoptions::LoadOptions::default().enter();
    assert_eq!(
        slice_pref(Some("arm64"), Some("x86:LE:64:default:gcc")).0,
        Some(Architecture::Aarch64),
        "--slice wins over the --target stem"
    );
    assert_eq!(
        slice_pref(None, Some("x86:LE:64:default:gcc")).0,
        Some(Architecture::X86_64),
        "--target alone still steers the slice"
    );
    // A blank token is not an override.
    assert_eq!(
        slice_pref(Some("  "), Some("arm64")).0,
        Some(Architecture::Aarch64)
    );
    assert_eq!(slice_pref(None, None).0, None);
    // An unrecognized --slice stays the DEFAULT rather than falling through
    // to --target: a typo must not be answered by the language override.
    assert_eq!(slice_pref(Some("riscv-banana"), Some("arm64")).0, None);
}

/// A non-fat image is handed back byte for byte -- the ELF / thin-Mach-O /
/// PE / COFF paths must be untouched by a peel that does not apply.
#[test]
fn peel_returns_a_non_fat_image_verbatim() {
    let elf = vec![0x7f, b'E', b'L', b'F', 2, 1, 1, 0];
    assert_eq!(peel_fat_image(elf.clone(), SlicePref::default()), elf);
    // A fat magic with nothing behind it cannot be peeled; it is left for the
    // downstream parse to reject rather than truncated here.
    let stub = vec![0xca, 0xfe, 0xba, 0xbe, 0, 0, 0, 2];
    assert_eq!(peel_fat_image(stub.clone(), SlicePref::default()), stub);
}

// The selection *policy* (override-wins, then x86-64 → arm64 → first) is
// exercised end-to-end on the real 2-slice `macho_fat` fixture by the console
// gate (`verify_macho_fat`), where actual `FatArch` records are present; here
// we cover the pure token-parse + non-fat-reject logic that needs no binary.
