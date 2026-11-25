use super::find_altlink;

fn fixture(name: &str) -> std::path::PathBuf {
    std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
        .join("tests/fixtures")
        .join(name)
}

/// The supplementary file is found next to the debug file that names it,
/// and only when its build-id is the one `.gnu_debugaltlink` records.
#[test]
fn the_altlink_file_is_found_beside_the_debug_file_and_checked() {
    let main = fixture("dwzaltlink_main");
    let bytes = std::fs::read(&main).unwrap();
    let file = object::File::parse(&*bytes).unwrap();
    let (path, sup) = find_altlink(&file, Some(&main)).expect("supplementary file");
    assert_eq!(path, fixture("dwzaltlink_sup.debug"));
    assert_eq!(sup, std::fs::read(fixture("dwzaltlink_sup.debug")).unwrap());
    assert!(find_altlink(&file, None).is_none_or(|(p, _)| p != path));
    let sup_file = object::File::parse(&*sup).unwrap();
    assert!(
        find_altlink(&sup_file, Some(&main)).is_none(),
        "no section, no file"
    );
}
