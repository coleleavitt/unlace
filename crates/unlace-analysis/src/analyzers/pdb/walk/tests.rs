use super::*;

#[test]
fn pdb_func_eq() {
    let a = PdbFunc {
        vma: 0x401000,
        name: "main".into(),
    };
    let b = PdbFunc {
        vma: 0x401000,
        name: "main".into(),
    };
    assert_eq!(a, b);
}

/// Global and local procedure records both come back, and a code length that
/// overflows the RVA space yields a start with no end.
#[test]
fn procedures_carry_their_extent_or_none() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/pe_pdbinterior_x86_64.pdb"
    );
    let file = std::fs::File::open(path).expect("open the fixture pdb");
    let mut pdb = pdb::PDB::open(file).expect("parse the fixture pdb");
    let procs = walk_procedures(&mut pdb, 0x140000000);
    assert_eq!(procs.len(), 34, "{procs:#x?}");
    for (start, end) in [
        (0x1400011c0, Some(0x1400011f8)),
        (0x140001340, Some(0x140001378)),
        (0x140001540, None),
        (0x140001548, Some(0x140001568)),
        (0x140002008, Some(0x140002010)),
    ] {
        assert!(
            procs.contains(&PdbProcedure { start, end }),
            "{start:#x}: {procs:#x?}"
        );
    }
}
