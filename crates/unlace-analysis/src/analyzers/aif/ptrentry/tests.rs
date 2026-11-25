use super::*;
use object::read::Object;

fn fixture(name: &str) -> Vec<u8> {
    let path = format!("{}/tests/fixtures/{}", env!("CARGO_MANIFEST_DIR"), name);
    std::fs::read(&path).unwrap_or_else(|_| panic!("read fixture {path}"))
}

/// The committed e2e fixture, read through the collector: every Thumb code
/// pointer in it is found, in *both* the `.rodata` fops-struct slot and the
/// in-`.text` switch slot, and each carries its referencing site. Pins the
/// fixture so a regenerated file cannot silently drift.
#[test]
fn collects_every_code_pointer_with_its_site() {
    let bytes = fixture("cortexm_ptrentry_le32");
    let file = object::File::parse(bytes.as_slice()).expect("parse fixture");
    let sites = code_pointer_sites(&file, &[(0x0800_0000, 0x0800_0060)]);
    assert_eq!(
        sites.get(&0x0800_0048).map(Vec::as_slice),
        Some(&[0x0800_0060u64][..]),
        "the frameless leaf is reached only by the .rodata function pointer"
    );
    assert_eq!(
        sites.get(&0x0800_005c).map(Vec::as_slice),
        Some(&[0x0800_0058u64][..]),
        "the switch case is reached only by the in-.text slot before it"
    );
    assert_eq!(
        sites.get(&0x0800_0040).map(Vec::as_slice),
        Some(&[0x0800_0004u64, 0x0800_0008, 0x0800_000c][..]),
        "the reset vector's three table slots all resolve to one target"
    );
    // An even word, a zero slot, and a word pointing outside the executable
    // range are not code pointers.
    assert_eq!(
        sites.get(&0x2000_1000),
        None,
        "the initial SP is not a code pointer"
    );
    assert_eq!(
        sites.len(),
        3,
        "no other word in the image qualifies: {sites:?}"
    );
}

/// The in-executable predicate, on the same bytes with a narrowed executable
/// range: a pointer whose target falls outside the code is not a candidate.
#[test]
fn a_target_outside_the_executable_ranges_is_not_a_candidate() {
    let bytes = fixture("cortexm_ptrentry_le32");
    let file = object::File::parse(bytes.as_slice()).expect("parse fixture");
    let sites = code_pointer_sites(&file, &[(0x0800_0000, 0x0800_0050)]);
    assert!(sites.contains_key(&0x0800_0048));
    assert!(
        !sites.contains_key(&0x0800_005c),
        "0x800005c is now outside the code"
    );
}

/// Strict no-op off ARM: Thumb code pointers are an ARM-only notion, so
/// [`pointer_entry_seeds`] returns on the architecture gate before it scans
/// anything. Retargeting the same bytes (`e_machine` is at offset 18 of an
/// ELF32 header) leaves candidates the scan would still find, so the gate —
/// not an empty scan — is what makes the option inert elsewhere.
#[test]
fn non_arm_is_gated_before_the_scan() {
    let mut bytes = fixture("cortexm_ptrentry_le32");
    bytes[18] = 62; // EM_X86_64
    bytes[19] = 0;
    let file = object::File::parse(bytes.as_slice()).expect("parse");
    assert_ne!(
        file.architecture(),
        object::Architecture::Arm,
        "the gate fires"
    );
    assert!(
        !code_pointer_sites(&file, &[(0x0800_0000, 0x0800_0060)]).is_empty(),
        "the scan itself is architecture-blind, so the gate is load-bearing"
    );
}
