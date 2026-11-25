use super::*;

fn fixture(name: &str) -> Vec<u8> {
    let path = format!("{}/tests/fixtures/{}", env!("CARGO_MANIFEST_DIR"), name);
    std::fs::read(&path).unwrap_or_else(|_| panic!("read fixture {path}"))
}

fn claim(name: &str) -> Option<(u64, &'static str)> {
    let bytes = fixture(name);
    let file = object::File::parse(bytes.as_slice()).unwrap_or_else(|e| panic!("{name}: {e}"));
    pe_main(&file, bytes.as_slice())
}

/// A stripped MinGW image: `__tmainCRTStartup` stores `envp` through
/// `.refptr.__imp___initenv` and then calls `main`, which its unstripped twin
/// `pe_imports.exe` names at the same address.
#[test]
fn names_the_mingw_main_of_a_stripped_image() {
    assert_eq!(
        claim("pe_imports_stripped.exe"),
        Some((0x140001592, "main"))
    );
}

/// The unstripped twin already names `main` from its COFF symbols.
#[test]
fn defers_to_a_symbol_table_name() {
    assert_eq!(claim("pe_imports.exe"), None);
}

/// Structurally inert off PE.
#[test]
fn contributes_nothing_off_pe() {
    assert_eq!(claim("cet_pie_x86_64"), None, "ELF");
    assert_eq!(claim("macho_stripped_main"), None, "Mach-O");
}
