use super::*;

fn le(words: &[u16]) -> Vec<u8> {
    words.iter().flat_map(|w| w.to_le_bytes()).collect()
}

#[test]
fn every_helper_is_named_at_its_entry() {
    let mut code = le(&[0x4770]);
    let mut expect = Vec::new();
    for (name, words) in HELPERS {
        expect.push((0x8000 + code.len() as u64, name));
        code.extend(le(words));
        code.extend(le(&[0xbf00]));
    }
    assert_eq!(scan_bytes(&code, 0x8000, false), expect);
}

#[test]
fn big_endian_code_matches_only_when_read_big_endian() {
    let code: Vec<u8> = HELPERS[0].1.iter().flat_map(|w| w.to_be_bytes()).collect();
    assert_eq!(
        scan_bytes(&code, 0, true),
        vec![(0, "__gnu_thumb1_case_uqi")]
    );
    assert!(scan_bytes(&code, 0, false).is_empty());
}

#[test]
fn odd_offset_one_changed_halfword_and_truncation_reject() {
    let mut code = vec![0];
    code.extend(le(HELPERS[0].1));
    assert!(scan_bytes(&code, 0, false).is_empty());
    let mut words = HELPERS[2].1.to_vec();
    words[3] = 0x0080;
    assert!(scan_bytes(&le(&words), 0, false).is_empty());
    let words = HELPERS[4].1;
    assert!(scan_bytes(&le(&words[..words.len() - 1]), 0, false).is_empty());
}

#[test]
fn stripped_cortex_m0_fixture_names_and_tags_every_helper() {
    let path =
        std::path::Path::new(env!("CARGO_MANIFEST_DIR")).join("tests/fixtures/thumb1case_le32");
    let bytes = std::fs::read(path).expect("fixture");
    let file = object::File::parse(&*bytes).expect("parse fixture");
    let mut out = AnalysisOutput::default();
    scan(&file, &mut out);
    let named: Vec<(u64, &str)> = out
        .symbols
        .iter()
        .map(|s| (s.addr, s.name.as_str()))
        .collect();
    assert_eq!(
        named,
        vec![
            (0x20198, "__gnu_thumb1_case_uqi"),
            (0x201aa, "__gnu_thumb1_case_sqi"),
            (0x201bc, "__gnu_thumb1_case_uhi"),
            (0x201d0, "__gnu_thumb1_case_shi"),
            (0x201e4, "__gnu_thumb1_case_si"),
        ]
    );
    assert_eq!(out.fid_names.len(), 5);
    assert_eq!(out.call_fixups.len(), 5);
    assert!(out.call_fixups.iter().all(|f| f.addr.is_none()));
}

#[test]
fn an_image_for_another_architecture_is_not_scanned() {
    let path =
        std::path::Path::new(env!("CARGO_MANIFEST_DIR")).join("tests/fixtures/thumb1case_le32");
    let mut bytes = std::fs::read(path).expect("fixture");
    bytes[18..20].copy_from_slice(&62u16.to_le_bytes());
    let Ok(file) = object::File::parse(&*bytes) else {
        return;
    };
    let mut out = AnalysisOutput::default();
    scan(&file, &mut out);
    assert!(out.symbols.is_empty() && out.call_fixups.is_empty());
}
