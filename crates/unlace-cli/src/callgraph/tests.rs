use super::*;

#[test]
fn established_entries_preserve_distant_callers_in_graph_queries() {
    use unlace_console::engine::{ArmIsa, bootstrap_from_object_with_isa};
    let root = std::path::Path::new(env!("CARGO_MANIFEST_DIR"));
    let dir = tempfile::tempdir().unwrap();
    let path = dir.path().join("split-body.elf");
    let specs = root.join("../../specs");
    for (endian, target) in [("little", "ARM:LE:32:v8"), ("big", "ARM:BE:32:v8")] {
        assert!(
            std::process::Command::new("python3")
                .arg(root.join("../unlace-analysis/tests/fixtures/arm_xref_bodies.py"))
                .arg(&path)
                .arg(endian)
                .status()
                .unwrap()
                .success()
        );
        let mut prog = bootstrap_from_object_with_isa(
            path.to_str().unwrap(),
            target,
            &[specs.to_str().unwrap().into()],
            Some(ArmIsa::Arm),
        )
        .unwrap();
        for (name, value) in [
            ("listing", "on"),
            ("funcstart_patterns", "on"),
            ("aif", "off"),
            ("tailcallentry", "off"),
        ] {
            prog.arch_mut().set_unlace_option(name, value).unwrap();
        }
        prog.commit_pending_analysis().unwrap();
        let bytes = std::fs::read(&path).unwrap();
        let file = object::File::parse(&*bytes).unwrap();
        for measured in [false, true] {
            let mut graph = CallGraph::walk(&prog, &file, measured);
            assert!(graph.is_entry(0x1600));
            assert_eq!(graph.direct_callers(0x1100), Some(vec![0x1500]));
            assert_eq!(graph.owner_of(0x1754), Some(0x1500));
            assert_eq!(graph.owner_of(0x1604), Some(0x1600));
            assert_eq!(graph.callees_of(0x1500), vec![(0x1100, XrefKind::Call)]);
            assert!(graph.callees_of(0x1600).is_empty());
            assert!(graph.has_indirect_calls(0x1500));
            assert!(!graph.has_indirect_calls(0x1600));
            assert_eq!(
                graph.direct_call_sites(0x1100, &BTreeSet::new()),
                Some(vec![0x1750])
            );
            assert_eq!(
                graph.reachable_from(&prog, "0x1500").unwrap(),
                BTreeSet::from([0x1100, 0x1500])
            );
            graph.entries.push((0x1900, 0));
            assert_eq!(graph.owner_of(0x1900), Some(0x1900));
            assert_eq!(graph.owner_of(0x1901), None);
            assert_eq!(graph.owner_of(0x18fc), None);
        }
    }
}

#[test]
fn recovered_frames_preserve_distant_callers_in_graph_queries() {
    use unlace_console::engine::{ArmIsa, bootstrap_from_object_with_isa};
    let root = std::path::Path::new(env!("CARGO_MANIFEST_DIR"));
    let dir = tempfile::tempdir().unwrap();
    let path = dir.path().join("split-body.elf");
    let specs = root.join("../../specs");
    for (endian, target) in [("little", "ARM:LE:32:v8"), ("big", "ARM:BE:32:v8")] {
        assert!(
            std::process::Command::new("python3")
                .arg(root.join("../unlace-analysis/tests/fixtures/arm_xref_roots.py"))
                .arg(&path)
                .args(["arm", endian, "splitbody"])
                .status()
                .unwrap()
                .success()
        );
        let mut prog = bootstrap_from_object_with_isa(
            path.to_str().unwrap(),
            target,
            &[specs.to_str().unwrap().into()],
            Some(ArmIsa::Arm),
        )
        .unwrap();
        for (name, value) in [
            ("listing", "on"),
            ("funcstart_patterns", "on"),
            ("armframes", "on"),
            ("aif", "off"),
            ("tailcallentry", "off"),
        ] {
            prog.arch_mut().set_unlace_option(name, value).unwrap();
        }
        prog.commit_pending_analysis().unwrap();
        let bytes = std::fs::read(&path).unwrap();
        let file = object::File::parse(&*bytes).unwrap();
        for measured in [false, true] {
            let mut graph = CallGraph::walk(&prog, &file, measured);
            assert!(graph.is_entry(0x1600));
            assert_eq!(graph.direct_callers(0x1100), Some(vec![0x1500]));
            assert_eq!(graph.owner_of(0x1754), Some(0x1500));
            assert_eq!(graph.owner_of(0x1604), Some(0x1600));
            assert_eq!(graph.callees_of(0x1500), vec![(0x1100, XrefKind::Call)]);
            assert!(graph.callees_of(0x1600).is_empty());
            assert!(graph.has_indirect_calls(0x1500));
            assert!(!graph.has_indirect_calls(0x1600));
            assert_eq!(
                graph.direct_call_sites(0x1100, &BTreeSet::new()),
                Some(vec![0x1750])
            );
            assert_eq!(
                graph.reachable_from(&prog, "0x1500").unwrap(),
                BTreeSet::from([0x1100, 0x1500])
            );
            graph.entries.push((0x1900, 0));
            assert_eq!(graph.owner_of(0x1900), Some(0x1900));
            assert_eq!(graph.owner_of(0x1901), None);
            assert_eq!(graph.owner_of(0x18fc), None);
        }
    }
}

fn fixture(name: &str) -> Vec<u8> {
    let path = std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
        .join("../unlace-analysis/tests/fixtures")
        .join(name);
    std::fs::read(path).expect("the fixture is checked in")
}

/// Only aligned words are read, and a word one past an entry is not that
/// entry.
#[test]
fn only_an_aligned_word_equal_to_an_entry_stores_it() {
    let mut scan = StoredScan::new(&[0x68f0, 0x7000]);
    let mut data = vec![0u8; 4];
    data.extend_from_slice(&0x68f1u64.to_le_bytes());
    data.extend_from_slice(&0x7000u64.to_le_bytes());
    scan.words(0x3ffc, &data, 8, true);
    assert_eq!(scan.out.into_iter().collect::<Vec<_>>(), vec![0x7000]);
}

/// A relocatable object's table words are zero until a relocation fills
/// them, so no function in it has every caller known.
#[test]
fn every_function_of_a_relocatable_object_is_open() {
    let bytes = fixture("calleevote_ops_x86_64.o");
    let file = unlace_analysis::loadimage_object::parse_object(&*bytes).expect("an ELF object");
    let entries = [0x400000, 0x400010, 0x400020, 0x400040, 0x400060];
    assert_eq!(
        open_function_entries(&file, &bytes, &entries).len(),
        entries.len()
    );
}

/// MIPS builds a function's address from `lui`+`addiu`, which the
/// one-instruction reference walk does not see, so off x86-64 no function
/// has every caller known, even one whose address no data word holds.
#[test]
fn every_function_off_x86_64_is_open() {
    let bytes = fixture("calleevote_callback_mipsel");
    let file = unlace_analysis::loadimage_object::parse_object(&*bytes).expect("an ELF image");
    let entries = [0x400110, 0x40011c, 0x400144, 0x400168, 0x40018c];
    assert_eq!(
        open_function_entries(&file, &bytes, &entries).len(),
        entries.len()
    );
}

/// A const table in a `.text` loaded at address 0: the section is read
/// because the image loads it, so both functions the table names are
/// stored, and the ones it does not name are not.
#[test]
fn a_table_in_code_loaded_at_zero_stores_its_entries() {
    let bytes = fixture("calleevote_zero_x86_64");
    let file = unlace_analysis::loadimage_object::parse_object(&*bytes).expect("an ELF image");
    let entries = [0x10, 0x20, 0x30, 0x60, 0x80];
    let open = open_function_entries(&file, &bytes, &entries);
    assert_eq!(open.into_iter().collect::<Vec<_>>(), vec![0x10, 0x20]);
}
