use super::*;

#[test]
fn candidates_walk_enclosing_bundles() {
    let c = candidates(Path::new("/s/Foo.framework/Versions/A/Foo"));
    assert!(c.contains(&PathBuf::from(
        "/s/Foo.framework.dSYM/Contents/Resources/DWARF/Foo"
    )));
    assert!(c.contains(&PathBuf::from(
        "/s/Foo.framework/Versions/A/Foo.dSYM/Contents/Resources/DWARF/Foo"
    )));
}

#[test]
fn candidates_for_a_bare_binary() {
    let c = candidates(Path::new("/s/Toyota"));
    assert!(c.contains(&PathBuf::from(
        "/s/Toyota.dSYM/Contents/Resources/DWARF/Toyota"
    )));
}

#[test]
fn siblings_are_only_read_beside_a_kext() {
    assert!(kext_siblings(Path::new("/s/Toyota")).is_empty());
    assert!(kext_siblings(Path::new("/s/Foo.framework/Versions/A/Foo")).is_empty());
}

#[test]
fn a_non_macho_has_no_slice() {
    assert!(slice_with_uuid(b"\x7fELF not a macho", &[0; 16]).is_none());
}
