//! (kuna `typelib`) What the prebuilt type library needs to know about an image.
//!
//! The library itself is read where the C grammar lives, in `kuna-console`
//! (`kuna_typelib`), at the analysis commit. That is after the object file is
//! out of reach, so this pass carries forward the two facts only the object
//! file states: which library target the image is, and which functions it
//! imports at which addresses. It interns nothing and types nothing.
//!
//! A target is an object format, an operating system, a machine and a C
//! library. Built-in libraries serve an x86-64 Linux ELF dynamically linked
//! against glibc or musl, and an x86 or x64 PE (`windows x86`,
//! `windows x86_64`, the Windows API). Every other image is named by its
//! format and machine ([`any_target`]), which no built-in library matches, so
//! only a text library of that target or an IDA type library (`.til`), which
//! is rendered for whatever target reads it, declares its imports.

use object::{Object, ObjectSection};

use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase, TypeLibFacts};

pub struct TypeLibPass;

/// The library target of an x86-64 ELF and whether its C library is glibc, or
/// `None` when the image names neither glibc nor musl.
fn target(file: &object::File) -> Option<(&'static str, bool)> {
    if file.format() != object::BinaryFormat::Elf
        || file.architecture() != object::Architecture::X86_64
    {
        return None;
    }
    let section = |name: &str| file.section_by_name(name).and_then(|s| s.data().ok());
    let mut names = section(".dynstr")?.split(|b| *b == 0);
    if names
        .clone()
        .any(|s| s == b"libc.so.6" || s.starts_with(b"GLIBC_"))
    {
        return Some(("linux x86_64", true));
    }
    let musl_loader = section(".interp").is_some_and(|s| s.windows(8).any(|w| w == b"/ld-musl"));
    (musl_loader || names.any(|s| s.starts_with(b"libc.musl-"))).then_some(("linux x86_64", false))
}

/// The target of an image no built-in library serves: its format and machine.
fn any_target(file: &object::File) -> &'static str {
    use object::Architecture as A;
    use object::BinaryFormat as F;
    match (file.format(), file.architecture()) {
        (F::Pe | F::Coff, A::I386) => "windows x86",
        (F::Pe | F::Coff, A::X86_64) => "windows x86_64",
        (F::Pe | F::Coff, A::Aarch64) => "windows aarch64",
        (F::Pe | F::Coff, A::Arm) => "windows arm",
        (F::MachO, A::X86_64) => "macho x86_64",
        (F::MachO, A::Aarch64) => "macho aarch64",
        (F::MachO, A::Arm) => "macho arm",
        (F::Elf, A::X86_64) => "elf x86_64",
        (F::Elf, A::I386) => "elf x86",
        (F::Elf, A::Aarch64) => "elf aarch64",
        (F::Elf, A::Arm) => "elf arm",
        (F::Elf, A::Mips) => "elf mips",
        (F::Elf, A::Mips64) => "elf mips64",
        (F::Elf, A::PowerPc) => "elf ppc",
        (F::Elf, A::PowerPc64) => "elf ppc64",
        (F::Elf, A::Riscv32) => "elf riscv32",
        (F::Elf, A::Riscv64) => "elf riscv64",
        _ => "other",
    }
}

impl AnalysisPass for TypeLibPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "typelib"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = AnalysisOutput::default();
        let (target, glibc) = target(ctx.file).unwrap_or_else(|| (any_target(ctx.file), false));
        let Some(image) = ctx.image else {
            return out;
        };
        let (imports, reloc_imports) = super::loaded_import_addrs(ctx.file, ctx.bytes, image);
        let mut named: Vec<String> =
            super::loaded_function_names(ctx.file, ctx.bytes, &reloc_imports, true)
                .into_iter()
                .collect();
        named.sort_unstable();
        out.typelib = Some(TypeLibFacts {
            target,
            glibc,
            imports,
            named,
        });
        out
    }
}

#[cfg(test)]
mod tests {
    use super::{any_target, target};

    fn fixture(name: &str) -> Vec<u8> {
        let path = std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
            .join("tests/fixtures")
            .join(name);
        std::fs::read(&path).unwrap_or_else(|e| panic!("{}: {e}", path.display()))
    }

    #[test]
    fn only_an_x86_64_elf_naming_its_c_library_is_a_target() {
        let glibc = fixture("libctypes_glibc_x86_64");
        let file = object::File::parse(&*glibc).unwrap();
        assert_eq!(target(&file), Some(("linux x86_64", true)));
        let musl = fixture("typelib_musl_x86_64");
        let file = object::File::parse(&*musl).unwrap();
        assert_eq!(target(&file), Some(("linux x86_64", false)));
        let mips = fixture("libctypes_mips32_glibc_le32");
        let file = object::File::parse(&*mips).unwrap();
        assert_eq!(target(&file), None);
        assert_eq!(any_target(&file), "elf mips");
    }

    #[test]
    fn a_pe_is_named_for_the_built_in_windows_library() {
        for (name, expected) in [
            ("importcall_pe_x86_64.exe", "windows x86_64"),
            ("aifbracket_pe_i386.exe", "windows x86"),
        ] {
            let pe = fixture(name);
            let file = object::File::parse(&*pe).unwrap();
            assert_eq!(target(&file), None, "{name}");
            assert_eq!(any_target(&file), expected, "{name}");
        }
    }
}
