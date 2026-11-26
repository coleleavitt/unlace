use super::*;

#[test]
fn conflicting_arm_decode_context_is_unavailable_and_scoped() {
    let root = std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
        .join("../..")
        .canonicalize()
        .unwrap();
    let binary = root.join("crates/unlace-analysis/tests/fixtures/arm_interwork_le32");
    let path = binary.to_str().unwrap();
    let bytes = std::fs::read(&binary).unwrap();
    let file = object::File::parse(&*bytes).unwrap();
    let image = ObjectLoadImage::from_bytes(path, &bytes).unwrap();
    let roots = vec![root.join("specs").to_str().unwrap().to_string()];
    let prog = bootstrap_from_object(path, "", &roots).unwrap();
    let arch = prog.arch();
    let seeds = unlace_analysis::passes::listing_seeds(&file, &bytes);
    let listing = Listing::build(&file, &image, arch, arch.translate(), &seeds);
    let db = FidDb::from_records("ARM:LE:32:v8", "default", vec![]);
    let query = || {
        fid_candidate(
            path,
            "test.fid",
            &db,
            "ARM:LE:32:v8",
            &listing,
            &prog,
            0x2000080,
        )
        .unwrap()
    };
    let before = query();
    assert_eq!(before["reason"], "too_short");
    let conflict = prog.with_thumb_pointer(0x2000080, query).unwrap();
    assert_eq!(conflict["status"], "unavailable");
    assert_eq!(conflict["reason"], "decode_context_mismatch");
    assert_eq!(query(), before);
}
