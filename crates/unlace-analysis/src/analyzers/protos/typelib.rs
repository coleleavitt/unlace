//! (unlace `typelib`) What the prebuilt type library needs to know about an image.
//!
//! The library itself is read where the C grammar lives, in `unlace-console`
//! (`unlace_typelib`), at the analysis commit. That is after the object file is
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
//!
//! The pass also names the IDA type libraries IDA itself would load for an ELF
//! or Mach-O image ([`til_slots`]), which `typelib auto` reads from
//! `UNLACE_TIL_DIR`: `gnulnx_<arch>` with the `gnuunx` library it builds on for
//! a Linux ELF, `android_<arch>` for one linked against Bionic, and the newest
//! macOS or iOS SDK library not newer than the SDK a Mach-O was built with.

use object::macho;
use object::read::macho::{LoadCommandVariant, MachHeader};
use object::{FileKind, Object, ObjectSection};

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

/// The macOS SDK libraries IDA ships, by the SDK major version they serve,
/// without the arch suffix (`macos14_sdk00` + `_x64` / `_arm64`).
const MACOS_SDKS: &[u32] = &[14, 13, 12, 11];
/// The 64-bit iOS SDK libraries IDA ships, by SDK major version.
const IOS_SDKS: &[u32] = &[17, 16, 15, 14, 13, 12];

/// The Mach-O `PLATFORM_*` and the major SDK version an image's
/// `LC_BUILD_VERSION` or `LC_VERSION_MIN_*` names (an SDK of 10.15 is
/// `(10, 15)`), or `None` when it names neither.
fn macho_build(file: &object::File, bytes: &[u8]) -> Option<(u32, u32, u32)> {
    fn read<Mach: MachHeader<Endian = object::Endianness>>(
        bytes: &[u8],
    ) -> Option<(u32, u32, u32)> {
        let header = Mach::parse(bytes, 0).ok()?;
        let endian = header.endian().ok()?;
        let mut commands = header.load_commands(endian, bytes, 0).ok()?;
        while let Ok(Some(command)) = commands.next() {
            match command.variant() {
                Ok(LoadCommandVariant::BuildVersion(build)) => {
                    let sdk = build.sdk.get(endian);
                    return Some((build.platform.get(endian), sdk >> 16, sdk >> 8 & 0xff));
                }
                Ok(LoadCommandVariant::VersionMin(min)) => {
                    let platform = match command.cmd() {
                        macho::LC_VERSION_MIN_MACOSX => macho::PLATFORM_MACOS,
                        macho::LC_VERSION_MIN_IPHONEOS => macho::PLATFORM_IOS,
                        _ => return None,
                    };
                    let sdk = min.sdk.get(endian);
                    return Some((platform, sdk >> 16, sdk >> 8 & 0xff));
                }
                _ => {}
            }
        }
        None
    }
    match (file.format(), FileKind::parse(bytes)) {
        (object::BinaryFormat::MachO, Ok(FileKind::MachO64)) => {
            read::<macho::MachHeader64<object::Endianness>>(bytes)
        }
        (object::BinaryFormat::MachO, Ok(FileKind::MachO32)) => {
            read::<macho::MachHeader32<object::Endianness>>(bytes)
        }
        _ => None,
    }
}

/// `versions` (newest first) ordered by preference for an image built with
/// SDK `major`: the newest not newer than it first, then older ones, then the
/// newer ones, oldest first.
fn by_preference(versions: &[u32], major: u32) -> Vec<u32> {
    let mut out: Vec<u32> = versions.iter().copied().filter(|&v| v <= major).collect();
    out.extend(versions.iter().rev().copied().filter(|&v| v > major));
    out
}

/// Whether an ELF is linked against Android's Bionic C library: its loader is
/// `/system/bin/linker` or `linker64`, or it imports with Bionic's `LIBC`
/// symbol version.
fn is_bionic(file: &object::File) -> bool {
    let section = |name: &str| file.section_by_name(name).and_then(|s| s.data().ok());
    if section(".interp").is_some_and(|s| s.windows(18).any(|w| w == b"/system/bin/linker")) {
        return true;
    }
    section(".dynstr").is_some_and(|s| {
        let mut names = s.split(|b| *b == 0);
        names.clone().any(|n| n == b"libc.so") && names.any(|n| n == b"LIBC")
    })
}

/// The IDA type libraries IDA would load for an ELF or Mach-O image, as slots
/// of candidate paths relative to an IDA `til` directory: `typelib auto` reads
/// the first candidate of each slot that exists. Empty for a PE (whose choice
/// depends on its subsystem and is made where the library is read) and for any
/// image IDA ships no library for.
pub fn til_slots(file: &object::File, bytes: &[u8]) -> Vec<Vec<String>> {
    use object::Architecture as A;
    use object::BinaryFormat as F;
    let one = |name: &str| vec![name.to_string()];
    match file.format() {
        F::Elf => {
            if is_bionic(file) {
                return match file.architecture() {
                    A::Aarch64 => vec![one("arm/android_arm64.til")],
                    A::Arm => vec![one("arm/android_arm.til")],
                    _ => Vec::new(),
                };
            }
            match file.architecture() {
                A::X86_64 => vec![one("pc/gnulnx_x64.til"), one("gnuunx64.til")],
                A::I386 => vec![one("pc/gnulnx_x86.til"), one("gnuunx.til")],
                A::Aarch64 => vec![one("arm/gnulnx_arm64.til"), one("gnuunx64.til")],
                A::Arm => vec![one("arm/gnulnx_arm.til"), one("gnuunx.til")],
                A::PowerPc => vec![one("ppc/gnulnx_ppc.til"), one("gnuunx.til")],
                A::PowerPc64 => vec![one("ppc/gnulnx_ppc64.til")],
                _ => Vec::new(),
            }
        }
        F::MachO => {
            let (platform, major, minor) =
                macho_build(file, bytes).unwrap_or((macho::PLATFORM_MACOS, 0, 0));
            let ios = matches!(platform, macho::PLATFORM_IOS | macho::PLATFORM_IOSSIMULATOR);
            match (ios, file.architecture()) {
                (true, A::Aarch64) => vec![
                    by_preference(IOS_SDKS, major)
                        .into_iter()
                        .map(|v| format!("arm/iphoneos64_sdk{v}.til"))
                        .collect(),
                ],
                (true, A::Arm) => vec![one("arm/iphoneos_sdk12.til")],
                (false, A::Aarch64) => vec![
                    by_preference(MACOS_SDKS, major.max(11))
                        .into_iter()
                        .map(|v| format!("arm/macos{v}_sdk00_arm64.til"))
                        .collect(),
                ],
                (false, A::X86_64) => {
                    let mut names: Vec<String> = Vec::new();
                    let legacy = ["macosx64_sdk15.til", "macosx64_sdk14.til"];
                    if major <= 10 {
                        if minor < 15 {
                            names.extend(legacy.iter().rev().map(|s| s.to_string()));
                        } else {
                            names.extend(legacy.iter().map(|s| s.to_string()));
                        }
                    }
                    names.extend(
                        by_preference(MACOS_SDKS, major.max(11))
                            .into_iter()
                            .map(|v| format!("macos{v}_sdk00_x64.til")),
                    );
                    if major > 10 {
                        names.extend(legacy.iter().map(|s| s.to_string()));
                    }
                    vec![names]
                }
                _ => Vec::new(),
            }
        }
        _ => Vec::new(),
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
        let flirt_tils = if ctx
            .arch
            .unlace_options
            .get::<unlace_decomp::coreoptions::Flirt>()
            .0
            && ctx
                .arch
                .unlace_options
                .get::<unlace_decomp::analysisgates::FlirtTil>()
                .0
        {
            crate::flirt::autoloaded_tils(ctx.file.format())
        } else {
            Vec::new()
        };
        let subsystem = match ctx.file.format() {
            object::BinaryFormat::Pe => crate::uefi::pe_subsystem(ctx.bytes),
            _ => None,
        };
        out.typelib = Some(TypeLibFacts {
            target,
            glibc,
            imports,
            named,
            subsystem,
            til_slots: til_slots(ctx.file, ctx.bytes),
            flirt_tils,
        });
        out
    }
}

#[cfg(test)]
mod tests;
