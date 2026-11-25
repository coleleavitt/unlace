use super::*;

fn fixture(name: &str) -> Vec<u8> {
    let path = format!("{}/tests/fixtures/{}", env!("CARGO_MANIFEST_DIR"), name);
    std::fs::read(&path).unwrap_or_else(|_| panic!("read fixture {path}"))
}

fn claim(name: &str) -> Option<u64> {
    let bytes = fixture(name);
    let file = object::File::parse(bytes.as_slice()).unwrap_or_else(|e| panic!("{name}: {e}"));
    entry_main_vma(&file, bytes.as_slice())
}

/// The headline: a stripped Mach-O executable's `LC_MAIN` entry is claimed,
/// at the address the load command states.
#[test]
fn claims_the_lc_main_entry_of_a_stripped_executable() {
    assert_eq!(claim("macho_stripped_main"), Some(0x1000005b0));
}

/// The guard that keeps this from overwriting better knowledge: the very same
/// image with its symbol table intact names that address `_main` itself, and
/// a named entry is left alone.
#[test]
fn defers_to_an_entry_that_already_carries_a_symbol() {
    assert_eq!(
        claim("macho_imports"),
        None,
        "the named twin must be refused"
    );
    assert_eq!(
        claim("macho_imports_arm64"),
        None,
        "arch-independent refusal"
    );
}

/// Structurally inert off Mach-O: an ELF executable and a PE both contribute
/// nothing, which is why no ELF/PE parity assertion can move.
#[test]
fn contributes_nothing_off_mach_o() {
    assert_eq!(claim("cet_pie_x86_64"), None, "ELF");
    assert_eq!(claim("msvc_rtti_x64.exe"), None, "PE");
}
