use super::*;

fn detect(name: &str) -> Option<Compiler> {
    let path = std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
        .join("tests/fixtures")
        .join(name);
    let bytes = std::fs::read(path).unwrap();
    let file = object::File::parse(&*bytes).unwrap();
    dwarf_compiler(&file)
}

#[test]
fn producer_and_language_name_the_toolchain() {
    assert_eq!(
        detect("dwarfglobaltypes_gcc_O1_x86_64"),
        Some(Compiler::Gcc)
    );
    assert_eq!(detect("dwarfscopes_clang_O0_x86_64"), Some(Compiler::Clang));
    assert_eq!(detect("dwarfvariants_x86_64"), Some(Compiler::Rustc));
}
