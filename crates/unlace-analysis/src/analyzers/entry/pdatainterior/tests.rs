use super::*;
use crate::entry::fdeinterior::is_interior;

const DISPATCH: u64 = 0x140001020; // a RUNTIME_FUNCTION BeginAddress
const LABEL: u64 = 0x140001040; // strictly inside dispatch's record
const HANDLER: u64 = 0x140001060; // dispatch's exclusive EndAddress
const PAYLOAD: u64 = 0x1400010a0; // past every record

fn fixture() -> Vec<u8> {
    let path = format!(
        "{}/tests/fixtures/pe_reloctable_x86_64.exe",
        env!("CARGO_MANIFEST_DIR")
    );
    std::fs::read(&path).unwrap_or_else(|e| panic!("read {path}: {e}"))
}

/// The headline: the exception table's own `[Begin, End)` rejects a start in
/// the middle of a body, and endorses one at either boundary.
#[test]
fn interior_of_a_runtime_function_is_not_a_start() {
    let bodies = eligible_pdata_bodies(&fixture());
    assert_eq!(bodies.len(), 3, "expected three bodies, got {bodies:#x?}");
    assert!(
        is_interior(&bodies, LABEL),
        "{LABEL:#x} not seen as interior"
    );
    assert!(!is_interior(&bodies, DISPATCH), "a BeginAddress is a start");
    assert!(!is_interior(&bodies, HANDLER), "an EndAddress is exclusive");
    assert!(!is_interior(&bodies, PAYLOAD), "outside every body");
}

/// Suppression runs through `fdeinterior`'s shared commit helper, so the two
/// passes cannot disagree about what "strictly inside" means.
#[test]
fn suppression_drops_only_the_interior_entry() {
    let bodies = eligible_pdata_bodies(&fixture());
    let mut entries = vec![DISPATCH, LABEL, HANDLER, PAYLOAD];
    let dropped = crate::entry::fdeinterior::suppress_interior_entries(&mut entries, &bodies);
    assert_eq!(dropped, vec![LABEL]);
    assert_eq!(entries, vec![DISPATCH, HANDLER, PAYLOAD]);
}

/// A record that swallows another record's start is not one function — the
/// `.pdata` analogue of the linker's single whole-PLT FDE.
#[test]
fn range_containing_another_start_is_not_eligible() {
    let all = [(0x1000, 0x2000), (0x1400, 0x1500), (0x3000, 0x3100)];
    assert_eq!(
        eligible(&all, &[]),
        vec![(0x1400, 0x1500), (0x3000, 0x3100)]
    );
}

/// A named function inside a range means the range covers more than one
/// function, whatever the table says.
#[test]
fn range_containing_a_named_function_is_not_eligible() {
    let all = [(0x1000, 0x2000), (0x3000, 0x3100)];
    assert_eq!(eligible(&all, &[0x1800]), vec![(0x3000, 0x3100)]);
}

/// An image whose exception directory is zeroed vouches for no code region,
/// so the pass abstains rather than guess.
#[test]
fn no_exception_directory_abstains() {
    let mut bytes = fixture();
    let lfanew = u32::from_le_bytes(bytes[0x3c..0x40].try_into().unwrap()) as usize;
    let dir3 = lfanew + 24 + 112 + 3 * 8;
    bytes[dir3..dir3 + 8].fill(0);
    assert!(eligible_pdata_bodies(&bytes).is_empty());
}

/// The 8-byte ARM64 `RUNTIME_FUNCTION` carries no `EndAddress`, so the
/// machine filter abstains before the records are read as 12-byte ones.
#[test]
fn non_x86_machine_abstains() {
    let mut bytes = fixture();
    let lfanew = u32::from_le_bytes(bytes[0x3c..0x40].try_into().unwrap()) as usize;
    bytes[lfanew + 4..lfanew + 6]
        .copy_from_slice(&object::pe::IMAGE_FILE_MACHINE_ARM64.to_le_bytes());
    assert!(eligible_pdata_bodies(&bytes).is_empty());
}

/// An ELF has no exception directory to read; the pass is PE-only.
#[test]
fn non_pe_abstains() {
    assert!(eligible_pdata_bodies(b"\x7fELF\x02\x01\x01").is_empty());
}
