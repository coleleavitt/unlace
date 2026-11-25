use super::*;

/// `unlace_pdb_path` is process-global, so every test that sets or clears it
/// holds this for its whole body; cargo runs them on parallel threads in one
/// process and they would otherwise clobber each other.
static ENV_LOCK: std::sync::Mutex<()> = std::sync::Mutex::new(());

fn rsds() -> CodeViewInfo {
    // The pdb_min.exe / pdb_prog GUID raw bytes (Microsoft mixed-endian); its
    // canonical text form is "61AC3963-FF48-9024-4C4C-44205044422E".
    CodeViewInfo::Rsds {
        guid: [
            0x63, 0x39, 0xAC, 0x61, 0x48, 0xFF, 0x24, 0x90, 0x4C, 0x4C, 0x44, 0x20, 0x50, 0x44,
            0x42, 0x2E,
        ],
        age: 1,
        pdb_path: "x.pdb".to_string(),
    }
}

fn rsds_recording(path: &str) -> CodeViewInfo {
    match rsds() {
        CodeViewInfo::Rsds { guid, age, .. } => CodeViewInfo::Rsds {
            guid,
            age,
            pdb_path: path.to_string(),
        },
        other => other,
    }
}

/// The SymStore key is the GUID's hex digits and the age in hex, and the
/// cache path nests the record's file name around it.
#[test]
fn symbol_store_layout() {
    let cv = rsds_recording("C:\\build\\prog.pdb");
    assert_eq!(store_key(&cv), "61AC3963FF4890244C4C44205044422E1");
    assert_eq!(
        store_path(Path::new("/cache"), &cv),
        Some(PathBuf::from(
            "/cache/prog.pdb/61AC3963FF4890244C4C44205044422E1/prog.pdb"
        ))
    );
    let nb10 = CodeViewInfo::Nb10 {
        signature: 0xBEEF,
        age: 0x1a,
        pdb_path: "old.pdb".into(),
    };
    assert_eq!(store_key(&nb10), "0000BEEF1A");
    assert_eq!(
        store_path(Path::new("/cache"), &rsds_recording("../")),
        None
    );
}

#[test]
fn symbol_store_settings() {
    assert_eq!(parse_store("/c"), Some((PathBuf::from("/c"), None)));
    assert_eq!(
        parse_store("srv*/c*https://example.invalid/sym"),
        Some((PathBuf::from("/c"), Some("https://example.invalid/sym")))
    );
    assert_eq!(parse_store("/c*"), Some((PathBuf::from("/c"), None)));
    assert_eq!(parse_store("*https://x"), None);
    assert_eq!(parse_store("  "), None);
}

#[test]
fn matching_guid_and_age_passes() {
    let cv = rsds();
    // The canonical render (uppercase) and a lowercased variant both match.
    assert!(fingerprint_ok(
        &cv,
        "61AC3963-FF48-9024-4C4C-44205044422E",
        1
    ));
    assert!(fingerprint_ok(
        &cv,
        "61ac3963-ff48-9024-4c4c-44205044422e",
        1
    ));
}

#[test]
fn mismatched_guid_fails() {
    let cv = rsds();
    // A different GUID (one nibble off) is rejected — the stale-PDB guard.
    assert!(!fingerprint_ok(
        &cv,
        "00000000-FF48-9024-4C4C-44205044422E",
        1
    ));
}

#[test]
fn mismatched_age_fails() {
    let cv = rsds();
    // Right GUID, wrong age (a rebuilt PDB) is rejected.
    assert!(!fingerprint_ok(
        &cv,
        "61AC3963-FF48-9024-4C4C-44205044422E",
        2
    ));
}

#[test]
fn nb10_record_has_no_guid_to_match() {
    // An NB10 record carries a u32 signature, not a GUID — the GUID-keyed gate
    // cannot match it, so it is rejected (the pass targets RSDS).
    let cv = CodeViewInfo::Nb10 {
        signature: 0xDEAD_BEEF,
        age: 1,
        pdb_path: "x.pdb".into(),
    };
    assert!(!fingerprint_ok(
        &cv,
        "61AC3963-FF48-9024-4C4C-44205044422E",
        1
    ));
}

#[test]
fn env_unset_or_empty_is_none() {
    let _guard = ENV_LOCK.lock().unwrap_or_else(|p| p.into_inner());
    // (Serial-ish: tolerate whatever the ambient env holds by setting + clearing.)
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::remove_var(PDB_PATH_ENV) };
    assert!(explicit_pdb_path().is_none());
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::set_var(PDB_PATH_ENV, "") };
    assert!(explicit_pdb_path().is_none());
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::set_var(PDB_PATH_ENV, "/some/where.pdb") };
    assert_eq!(explicit_pdb_path(), Some(PathBuf::from("/some/where.pdb")));
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::remove_var(PDB_PATH_ENV) };
}

#[test]
fn recorded_name_keeps_only_the_basename() {
    // A Windows build path is reduced to its filename, `\` and `/` alike.
    assert_eq!(recorded_pdb_name(r"C:\src\obj\prog.pdb"), Some("prog.pdb"));
    assert_eq!(
        recorded_pdb_name("/home/u/build/prog.pdb"),
        Some("prog.pdb")
    );
    assert_eq!(recorded_pdb_name("prog.pdb"), Some("prog.pdb"));
    // Case is preserved but the extension check is case-insensitive.
    assert_eq!(recorded_pdb_name(r"D:\Out\Prog.PDB"), Some("Prog.PDB"));
}

#[test]
fn recorded_name_rejects_traversal_and_non_pdb() {
    // Nothing that could escape the image's directory survives: a `..` run is
    // dropped with the rest of the path, leaving a bare filename or nothing.
    assert_eq!(recorded_pdb_name(r"..\..\..\etc\shadow"), None);
    assert_eq!(recorded_pdb_name("../../secrets.pdb"), Some("secrets.pdb"));
    assert_eq!(recorded_pdb_name(".."), None);
    assert_eq!(recorded_pdb_name(r"C:\src\obj\"), None);
    assert_eq!(recorded_pdb_name(""), None);
    // Only a `.pdb` is ever opened.
    assert_eq!(recorded_pdb_name("/etc/passwd"), None);
}

#[test]
fn candidates_are_env_then_record_then_stem() {
    let _guard = ENV_LOCK.lock().unwrap_or_else(|p| p.into_inner());
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::set_var(PDB_PATH_ENV, "/explicit/one.pdb") };
    let cv = rsds_recording(r"C:\build\obj\recorded.pdb");
    let got = pdb_candidates(Some(Path::new("/bin/dir/prog.exe")), &cv);
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::remove_var(PDB_PATH_ENV) };
    assert_eq!(
        got,
        vec![
            PathBuf::from("/explicit/one.pdb"),
            PathBuf::from("/bin/dir/recorded.pdb"),
            PathBuf::from("/bin/dir/prog.pdb"),
        ]
    );
}

#[test]
fn candidates_dedupe_and_need_no_env() {
    let _guard = ENV_LOCK.lock().unwrap_or_else(|p| p.into_inner());
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::remove_var(PDB_PATH_ENV) };
    // The record already names `<stem>.pdb`: one candidate, not two.
    let cv = rsds_recording("prog.pdb");
    assert_eq!(
        pdb_candidates(Some(Path::new("/bin/dir/prog.exe")), &cv),
        vec![PathBuf::from("/bin/dir/prog.pdb")]
    );
    // No image path (an in-memory image) and no env var: nothing to try.
    assert!(pdb_candidates(None, &cv).is_empty());
}

#[test]
fn candidates_fall_back_to_the_stem_when_the_record_is_unusable() {
    let _guard = ENV_LOCK.lock().unwrap_or_else(|p| p.into_inner());
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::remove_var(PDB_PATH_ENV) };
    let cv = rsds_recording(r"..\..\evil");
    assert_eq!(
        pdb_candidates(Some(Path::new("/bin/dir/prog.exe")), &cv),
        vec![PathBuf::from("/bin/dir/prog.pdb")]
    );
}
