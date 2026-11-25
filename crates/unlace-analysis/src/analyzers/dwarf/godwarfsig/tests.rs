use super::*;
use std::io::Write;

fn insert(facts: &mut Facts, offset: usize, die: DieSnap, kind: Option<u64>) {
    facts.dies.insert(offset, die);
    facts.extras.insert(
        offset,
        Extra {
            kind,
            ..Extra::default()
        },
    );
}
fn scalar_facts() -> Facts {
    let mut facts = Facts::default();
    let mut scalar = DieSnap::new(gimli::DW_TAG_base_type, 1);
    scalar.byte_size = Some(8);
    scalar.encoding = Some(gimli::DW_ATE_signed);
    insert(&mut facts, 1, scalar, Some(6));
    facts
}
fn accepts(facts: &Facts, offset: usize) -> bool {
    facts
        .scalar(offset, &mut BTreeSet::new(), &mut 256)
        .is_some()
}

#[test]
fn malformed_scalar_graphs_are_refused() {
    let mut facts = scalar_facts();
    assert!(accepts(&facts, 1));
    let mut alias = DieSnap::new(gimli::DW_TAG_typedef, 1);
    alias.type_ref = Some(1);
    insert(&mut facts, 2, alias, Some(6));
    assert!(accepts(&facts, 2));
    facts.extras.get_mut(&2).unwrap().kind = Some(21);
    assert!(!accepts(&facts, 2), "a map kind cannot alias an integer");
    facts.extras.get_mut(&2).unwrap().kind = None;
    facts.dies.get_mut(&2).unwrap().type_ref = Some(2);
    assert!(!accepts(&facts, 2), "typedef cycle");
    let mut pointer = DieSnap::new(gimli::DW_TAG_pointer_type, 1);
    pointer.type_ref = Some(3);
    insert(&mut facts, 3, pointer, Some(22));
    assert!(!accepts(&facts, 3), "pointer cycle");
    facts.dies.get_mut(&3).unwrap().type_ref = Some(9999);
    assert!(!accepts(&facts, 3), "missing target");
    facts.dies.get_mut(&3).unwrap().type_ref = None;
    assert!(
        !accepts(&facts, 3),
        "untyped pointer without unsafe.Pointer evidence"
    );
    facts.dies.get_mut(&3).unwrap().name = "unsafe.Pointer".into();
    facts.extras.get_mut(&3).unwrap().kind = None;
    assert!(accepts(&facts, 3));
    facts.extras.get_mut(&3).unwrap().invalid = true;
    assert!(!accepts(&facts, 3));
    facts.dies.get_mut(&1).unwrap().byte_size = Some(16);
    assert!(!accepts(&facts, 1));
}

#[test]
fn record_pointees_require_grounded_nonoverlapping_fields() {
    let mut facts = scalar_facts();
    let mut member = DieSnap::new(gimli::DW_TAG_member, 2);
    member.name = "value".into();
    member.type_ref = Some(1);
    member.data_member_location = Some(0);
    insert(&mut facts, 3, member, None);
    let mut record = DieSnap::new(gimli::DW_TAG_structure_type, 1);
    record.name = "main.Record".into();
    record.byte_size = Some(8);
    record.children = vec![3];
    insert(&mut facts, 2, record, Some(25));
    let mut pointer = DieSnap::new(gimli::DW_TAG_pointer_type, 1);
    pointer.type_ref = Some(2);
    insert(&mut facts, 4, pointer, Some(22));
    assert!(accepts(&facts, 4));
    assert!(!accepts(&facts, 2), "by-value records remain unsupported");
    facts.dies.get_mut(&3).unwrap().data_member_location = Some(1);
    assert!(!accepts(&facts, 4), "field outside the record");
    facts.dies.get_mut(&3).unwrap().data_member_location = Some(0);
    facts.dies.get_mut(&3).unwrap().bit_size = Some(2);
    assert!(!accepts(&facts, 4), "bitfield");
    facts.dies.get_mut(&3).unwrap().bit_size = None;
    facts.dies.get_mut(&2).unwrap().children.push(3);
    assert!(!accepts(&facts, 4), "overlapping fields");
    facts.dies.get_mut(&2).unwrap().children.pop();
    facts.dies.get_mut(&3).unwrap().type_ref = Some(4);
    assert!(!accepts(&facts, 4), "recursive record terminates");
}

fn compressed(bytes: &[u8]) -> Deferred {
    let mut encoder = flate2::write::ZlibEncoder::new(Vec::new(), flate2::Compression::default());
    encoder.write_all(bytes).unwrap();
    Deferred {
        sections: vec![(
            gimli::SectionId::DebugInfo,
            StoredSection {
                bytes: encoder.finish().unwrap(),
                size: bytes.len(),
                format: object::CompressionFormat::Zlib,
            },
        )],
        arm64_entries: None,
    }
}

#[test]
fn compressed_debug_requires_exact_size_checksum_and_stream() {
    let empty = compressed(&[]);
    assert!(empty.decode(NameChars::Off).unwrap().is_empty());
    let mut larger = compressed(&[]);
    larger.sections[0].1.size = 1;
    assert!(larger.decode(NameChars::Off).is_none());
    let mut smaller = compressed(&[0; 4096]);
    smaller.sections[0].1.size = 1;
    assert!(smaller.decode(NameChars::Off).is_none());
    let mut trailing = compressed(&[]);
    trailing.sections[0].1.bytes.push(0);
    assert!(trailing.decode(NameChars::Off).is_none());
    let mut corrupt = compressed(&[]);
    *corrupt.sections[0].1.bytes.last_mut().unwrap() ^= 1;
    assert!(corrupt.decode(NameChars::Off).is_none());
    let mut truncated = compressed(&[]);
    truncated.sections[0].1.bytes.pop();
    assert!(truncated.decode(NameChars::Off).is_none());
    assert!(compressed(&[1, 2, 3]).decode(NameChars::Off).is_none());
}

#[test]
fn compressed_section_limits_precede_decompression() {
    let path = std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
        .join("../../tests/fixtures/go-dwarf-signatures/compressed");
    let mut bytes = std::fs::read(path).unwrap();
    let file = object::File::parse(bytes.as_slice()).unwrap();
    let captured = capture_sections(&file, true).unwrap();
    let facts = captured.decode(NameChars::Off).unwrap();
    assert!(facts.dies.values().any(|die| die.name == "main.fromWord"));
    let offset = file
        .section_by_name(".debug_info")
        .unwrap()
        .file_range()
        .unwrap()
        .0 as usize;
    bytes[offset + 8..offset + 16].copy_from_slice(&(DEBUG_LIMIT as u64 + 1).to_le_bytes());
    let oversized = object::File::parse(bytes.as_slice()).unwrap();
    assert!(capture_sections(&oversized, true).is_none());
}

#[test]
fn hidden_context_suffixes_do_not_match_ordinary_names() {
    for name in [
        "main.f.func1",
        "main.f.func1.2",
        "main.f.gowrap2",
        "main.f.deferwrap1",
        "main.f-range1",
        "main.f-fm",
        "main.f.abi0",
    ] {
        assert!(hidden_context(name), "{name}");
    }
    for name in [
        "main.function",
        "main.func1x",
        "main.f-range",
        "main.f.func1.",
        "main.Func1",
    ] {
        assert!(!hidden_context(name), "{name}");
    }
}
