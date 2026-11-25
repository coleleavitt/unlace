//! Source-language / compiler detection — the unlace analog of Ghidra's
//! `SourceLanguageAnalyzer` + the per-language `SourceLanguage.existsIn`
//! extension points.
//!
//! In the Ghidra application `SourceLanguageAnalyzer.added` runs early (priority
//! `FORMAT_ANALYSIS.before()`), calls `SourceLanguageService.find(program)` to
//! collect the IDs whose `existsIn` predicate is true, and records them on the
//! program; downstream language-specific analyzers (the Rust string/demangle
//! analyzers, the Go markup, …) then gate on those IDs. unlace ports the
//! **detection half** (the `existsIn` predicates) and uses the result to shape
//! pass selection — concretely, to widen the no-return list for Rust binaries
//! (see [`rust_noreturn_list`] and `loader/noreturn.rs`). The Ghidra
//! spec-extension / `.gdt`-data-archive application machinery (`addSpecExtensions`,
//! `getDataArchives`) is **out of scope** — unlace has no SpecExtension subsystem.
//! This is therefore a PARTIAL port (detection only), in the same spirit as the
//! demangle pass's name-only scope (`demangle/mod.rs`).
//!
//! Origin (upstream Ghidra, the tree unlace was ported from):
//! - analyzer shell:
//!   `Ghidra/Features/Base/.../analysis/SourceLanguageAnalyzer.java`
//! - dispatcher:
//!   `Ghidra/Framework/SoftwareModeling/.../sourcelanguage/SourceLanguageService.java`
//!   (`find()` = iterate `SourceLanguage`s, collect IDs whose `existsIn` is true).
//! - Rust detection: `Ghidra/Features/Rust/.../sourcelanguage/ElfRustSourceLanguage.java:34`
//!   (`ELF_COMMENT_REGEX = "^rustc version .*$"` over `.comment`, then a `.rodata`
//!   byte-signature fallback) + `RustSourceLanguage.java` (`isRust` rodata scan,
//!   `RUST_ID = "Rust"`) + `RustConstants.java:29-33`
//!   (`RUST_SIGNATURES = {"RUST_BACKTRACE","RUST_MIN_STACK","/rustc/"}`).
//! - Golang detection: `Ghidra/Features/Base/.../golang/GoBuildInfo.java:45`
//!   (`.go.buildinfo`) + `NoteGoBuildId.java:30` (`.note.go.buildid`);
//!   `GolangElfInfoProducer.java:45-47` keys markup off exactly those two sections.
//!
//! # Faithfulness notes
//!
//! - The `^rustc version .*$` regex reduces to a line/record-prefix test: the
//!   `.comment` section is a sequence of NUL-delimited records, each a whole
//!   toolchain line, so an anchored "starts with `rustc version `" match is
//!   exact (no regex crate needed — same move as `noreturn.rs`'s `*` wildcards).
//! - The `Gcc`/`Clang` arms are a **unlace convenience**, not faithful Ghidra IDs:
//!   Ghidra ships only Rust/Swift/ObjC `SourceLanguage` extension points for ELF,
//!   there is no generic "C/GCC" one. They are derived from the same `.comment`
//!   toolchain string and exist only to give a non-Rust/Go ELF a meaningful
//!   [`Compiler`] instead of `Unknown`; nothing downstream gates on them. They are
//!   documented here so a future faithfulness audit is not misled.
//!
//! # Multi-format expansion (design `docs/history/multiformat-loader-design.md` §5.3 / §8
//! PR-14)
//!
//! The detection above is ELF-specific in its *signal sources* (the `.comment`
//! section, the `.go.buildinfo`/`.note.go.buildid` sections), but the *contract*
//! ([`detect_compiler`] → [`Compiler`], gating the Rust/Go no-return lists + the
//! Go pclntab pass) is format-neutral. [`detect_compiler`] therefore dispatches on
//! `file.format()`:
//!
//! - **ELF** — [`detect_compiler_elf`], the original logic, **byte-identical**.
//! - **PE** ([`detect_compiler_pe`]) — the MSVC `Rich` header / `@comp.id`
//!   records (the toolchain fingerprint MSVC's linker stamps between the DOS stub
//!   and the PE header → MSVC vs Clang), plus the MinGW `GCC: (...)` record.
//!   MinGW emits **no `.comment` section** in a PE; the `GCC: (…)` records live
//!   NUL-delimited in `.rdata`, so the PE arm reuses the same NUL-record reader
//!   over `.rdata`/`.comment`.
//! - **Mach-O** ([`detect_compiler_macho`]) — `LC_BUILD_VERSION` / the
//!   `LC_VERSION_MIN_*` family (the platform + build-tool fingerprint; an Apple
//!   platform is a clang/LLVM toolchain ⇒ [`Compiler::Clang`]), plus any embedded
//!   `clang version`/`GCC:` text in a `__comment`/`__DWARF`-analog section.
//!
//! Two detection paths are **format-neutral and shared by every arm** so a Rust
//! or Go PE / Mach-O is recognized — which then correctly enables the Rust/Go
//! no-return lists (`loader/noreturn.rs`) and the Go pclntab pass
//! (`pclntab`) on those formats too:
//!
//! - **Rust** — a Rust-mangled symbol (`_R…` v0 / `_ZN…17h<hex>E` legacy:
//!   [`symbols_indicate_rust`] over `file.symbols()`/`dynamic_symbols()`, which
//!   are format-neutral in `object`). The v0 arm parses the name against the
//!   scheme's grammar and knows which formats prepend a platform underscore, so
//!   an ordinary C `_Runtime`/`_RC4_set_key` on Mach-O is not taken for one.
//! - **Go** — a Go build-info section under *any* format's naming
//!   (`.go.buildinfo`/`.note.go.buildid` on ELF, `__go_buildinfo` on Mach-O):
//!   [`golang_section_present`]. A PE has no such section (the Windows linker
//!   folds the blob into `.data`), so its arm also validates the blob in place.
//!
//! The format-specific arms are **detection-only**: nothing in the output changes
//! unless a language-specific pass acts, and those passes act only for
//! `Rustc`/`Go` — so a PE/Mach-O detecting as `Gcc`/`Clang`/`Unknown` produces
//! byte-identical output, and the **ELF path is untouched**.

mod dwarfproducer;
pub use dwarfproducer::dwarf_compiler;
mod legacy_llvm;
mod rustversion;
pub use rustversion::{fmt_pieces_layout, rustc_version_label, stable_rustc_version};
mod rustcrates;
mod rustreleases;
pub use rustcrates::registry_crates;
mod rustfmtio;
mod rustfmtstr;
mod rustfmtwrite;
mod rustformatters;
pub use rustformatters::{
    FormatterMetadata, formatter_metadata, integer_formatters, primitive_display_formatters,
};

use object::macho::{MachHeader32, MachHeader64};
use object::read::macho::{
    FatArch, LoadCommandVariant, MachHeader, MachOFatFile32, MachOFatFile64,
};
use object::read::{Object, ObjectSection, ObjectSymbol};
use object::{BinaryFormat, Endianness, FileKind, SymbolKind};

/// The Rust no-return wildcard list, vendored verbatim from Ghidra
/// `Ghidra/Features/Base/data/RustFunctionsThatDoNotReturn` (the
/// `compiler name="rustc"` arm of `noReturnFunctionConstraints.xml`). Applied
/// **in addition** to `ElfFunctionsThatDoNotReturn` when [`detect_compiler`]
/// reports [`Compiler::Rustc`].
const RUST_NORETURN_LIST: &str = include_str!("../../../data/RustFunctionsThatDoNotReturn");

/// The Golang no-return list, adapted from Ghidra
/// `Ghidra/Features/Base/data/GolangFunctionsThatDoNotReturn` (the
/// `compiler id="golang"` arm of `noReturnFunctionConstraints.xml`). Applied
/// **in addition** to `ElfFunctionsThatDoNotReturn` when [`detect_compiler`]
/// reports [`Compiler::Go`]. Unlike the Rust list these are all **exact**
/// dotted `runtime.*` names (no `*` wildcards); the same list parser handles them.
const GOLANG_NORETURN_LIST: &str = include_str!("../../../data/GolangFunctionsThatDoNotReturn");

/// The Rust `.rodata` byte signatures, ported verbatim from
/// `RustConstants.java:29-33` (`RustConstants.RUST_SIGNATURES`). Used as the
/// fallback detection path when the `.comment` `rustc version` record is absent
/// (e.g. a non-standard toolchain or an aggressively post-processed binary).
const RUST_SIGNATURES: [&[u8]; 3] = [b"RUST_BACKTRACE", b"RUST_MIN_STACK", b"/rustc/"];

/// Section names Ghidra's Golang markup keys off, across formats. ELF uses
/// `.go.buildinfo` (`GoBuildInfo.java:45`) / `.note.go.buildid`
/// (`NoteGoBuildId.java:30`); a Mach-O Go binary carries the same build-info blob
/// in a `__go_buildinfo` section of the `__DATA` segment (Ghidra's
/// `GoBuildInfo`/`MachoGolangSection` analog). The detection is the same: any of
/// these present ⇒ Go. `object` surfaces the Mach-O section name as
/// `__go_buildinfo` (segment-qualified names collapse to the bare section name).
const GO_SECTIONS: [&str; 3] = [".go.buildinfo", ".note.go.buildid", "__go_buildinfo"];

/// Section-name prefixes of the Swift 5 reflection metadata, across formats:
/// `__swift5_types`/`__swift5_proto`/… inside `__TEXT` on Mach-O, the same
/// names without the segment underscores (`swift5_typeref`, `swift5_fieldmd`,
/// …) on ELF, and the abbreviated `.sw5…` spellings (`.sw5tymd`, `.sw5prt`,
/// `.sw5tyrf`, …) the Windows toolchain emits in a PE. Any section opening
/// with one of these prefixes is Swift metadata the compiler emitted — no
/// other toolchain uses the namespace — so a prefix test is exact.
const SWIFT_SECTION_PREFIXES: [&str; 3] = ["__swift5_", "swift5_", ".sw5"];

/// Swift runtime entry points a Swift binary calls (or exports, for the
/// runtime library itself) even when fully stripped of its own symbols: the
/// ARC and metadata hooks every nontrivial Swift function emits. Matched
/// exactly against the symbol tables (dynamic imports included), the same
/// role `RUST_SIGNATURES` plays for a `.comment`-less rustc image.
const SWIFT_RUNTIME_SYMBOLS: [&str; 6] = [
    "swift_retain",
    "swift_release",
    "swift_beginAccess",
    "swift_endAccess",
    "swift_allocObject",
    "swift_getTypeByMangledNameInContext",
];

/// The MSVC `Rich` header end marker. MSVC's linker stamps an obfuscated block
/// between the DOS stub and the PE header listing every tool (`@comp.id`) that
/// contributed object code; the block ends with the literal `"Rich"` tag
/// followed by the 4-byte XOR key used to (de)obfuscate it. Absent ⇒ not an MSVC
/// link (MinGW/Clang-direct PEs have no `Rich` header). Ghidra:
/// `PortableExecutable`/`RichHeader`.
const RICH_END: &[u8; 4] = b"Rich";

/// The de-obfuscated `Rich` header start marker (`"DanS"`), recovered by XOR-ing
/// the block with the key. Its presence confirms a real MSVC `Rich` header.
const RICH_BEGIN: u32 = u32::from_le_bytes(*b"DanS");

/// `@comp.id` *product* ids (the high 16 bits of a `Rich` `@comp.id` record's
/// `prodid` field) that indicate a **clang/LLVM** front end rather than the MSVC
/// C/C++ compiler. clang-cl emits records tagged with the LLVM build-tool product
/// ids; MSVC `cl.exe` emits `[C|CPP]_Compiler` ids. The full Microsoft product-id
/// table is large and undocumented; we key off the small, stable LLVM subset and
/// default any other populated `Rich` header to MSVC. (Detection-only — nothing
/// downstream gates on `Clang` vs `Gcc` vs MSVC, so an imperfect split is safe.)
const RICH_LLVM_PRODIDS: [u16; 2] = [
    0x0103, // [LTCG ] clang/llvm import (observed on clang-cl links)
    0x0105, // llvm/clang front-end record (observed on clang-cl links)
];

/// The detected source-language toolchain.
///
/// `Rustc` and `Go` are faithful Ghidra `SourceLanguage` IDs (Rust/Golang).
/// `Gcc`/`Clang` are unlace conveniences derived from the `.comment` toolchain
/// string (Ghidra has no generic C SourceLanguage). `Unknown` is the default
/// when no signal is present (matching `SourceLanguageService.find` returning an
/// empty set).
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub enum Compiler {
    /// GCC (from a `GCC: (...)` `.comment` record) — unlace convenience.
    Gcc,
    /// Clang/LLVM (from a `clang version ...` `.comment` record) — unlace convenience.
    Clang,
    /// rustc (faithful `RustSourceLanguage.RUST_ID`).
    Rustc,
    /// Go (faithful — `.go.buildinfo` / `.note.go.buildid` present).
    Go,
    /// Swift (unlace — `swift5` reflection metadata sections, Swift-mangled
    /// symbols, or the Swift runtime import set; Ghidra has no Swift
    /// `SourceLanguage` extension point to port).
    Swift,
    /// No recognized toolchain signal.
    #[default]
    Unknown,
}

impl Compiler {
    /// `true` for [`Compiler::Rustc`] — the gate the no-return widening uses
    /// (mirrors `noReturnFunctionConstraints.xml`'s `compiler name="rustc"` arm).
    pub fn is_rust(self) -> bool {
        matches!(self, Compiler::Rustc)
    }

    /// `true` for [`Compiler::Go`].
    pub fn is_golang(self) -> bool {
        matches!(self, Compiler::Go)
    }

    /// `true` for [`Compiler::Swift`].
    pub fn is_swift(self) -> bool {
        matches!(self, Compiler::Swift)
    }

    /// The engine-plane [`SourceLang`] this verdict records on the
    /// `Architecture` (toolchain conveniences collapse to `C`).
    pub fn to_source_lang(self) -> unlace_decomp::sourcelang::SourceLang {
        use unlace_decomp::sourcelang::SourceLang;
        match self {
            Compiler::Gcc | Compiler::Clang => SourceLang::C,
            Compiler::Rustc => SourceLang::Rust,
            Compiler::Go => SourceLang::Go,
            Compiler::Swift => SourceLang::Swift,
            Compiler::Unknown => SourceLang::Unknown,
        }
    }

    /// The detection verdict a forced [`SourceLang`] stands in for — the
    /// inverse of [`Compiler::to_source_lang`] up to the toolchain
    /// conveniences (`c` forces the generic C arm, reported as `Gcc`).
    pub fn from_forced_lang(lang: unlace_decomp::sourcelang::SourceLang) -> Compiler {
        use unlace_decomp::sourcelang::SourceLang;
        match lang {
            SourceLang::C => Compiler::Gcc,
            SourceLang::Rust => Compiler::Rustc,
            SourceLang::Go => Compiler::Go,
            SourceLang::Swift => Compiler::Swift,
            SourceLang::Unknown => Compiler::Unknown,
        }
    }
}

/// The compiler verdict every consumer should act on: the load's forced
/// `sourcelang` when it has one (`LoadOptions::sourcelang`, or the
/// `UNLACE_SOURCELANG` the CLI sets before `load file`), else detection.
pub fn effective_compiler(file: &object::File, bytes: &[u8]) -> Compiler {
    match unlace_decomp::sourcelang::forced() {
        Some(lang) => Compiler::from_forced_lang(lang),
        None => detect_compiler(file, bytes),
    }
}

/// [`effective_compiler`] over raw image bytes (the `load file` entry point).
pub fn effective_compiler_bytes(bytes: &[u8]) -> Compiler {
    match unlace_decomp::sourcelang::forced() {
        Some(lang) => Compiler::from_forced_lang(lang),
        None => detect_compiler_bytes(bytes),
    }
}

/// Detect the compiler/source-language that produced `file`, dispatching on the
/// object format. `bytes` is the raw image (needed for the PE `Rich` header and
/// the Mach-O load commands — `object::File` does not surface either).
///
/// - **ELF** — [`detect_compiler_elf`] (the original logic, byte-identical).
/// - **PE** — [`detect_compiler_pe`].
/// - **Mach-O** — [`detect_compiler_macho`].
/// - any other format (COFF object, raw, …) — [`Compiler::Unknown`].
///
/// Pure over `(file, bytes)`. The format-neutral Rust (`symbols_indicate_rust`)
/// and Go (`golang_section_present`) paths are shared by the PE/Mach-O arms, so a
/// Rust or Go binary in any supported format is detected.
pub fn detect_compiler(file: &object::File, bytes: &[u8]) -> Compiler {
    match file.format() {
        BinaryFormat::Elf => detect_compiler_elf(file),
        BinaryFormat::Pe => detect_compiler_pe(file, bytes),
        BinaryFormat::MachO => detect_compiler_macho(file, bytes),
        // COFF objects / anything else carry no reliable toolchain fingerprint we
        // model yet (a COFF `.obj` is pre-link). Stay `Unknown` (no behavior
        // change), but still honour the format-neutral Rust/Go signals if present.
        _ => detect_compiler_generic(file),
    }
}

/// The ELF detection — **byte-identical to the pre-multi-format logic.** Kept as a
/// standalone fn so the ELF path is provably unchanged by the format dispatch.
///
/// Faithful precedence (a binary may carry several toolchain records; we report
/// the most specific source language):
/// 1. **Go** — `.go.buildinfo` / `.note.go.buildid` section present
///    (`GolangElfInfoProducer`).
/// 2. **Rust** — `.comment` has a `rustc version ...` record
///    (`ElfRustSourceLanguage` comment path), OR a Rust-mangled symbol is present
///    (`_R...` v0 / `_ZN...17h<hex>E` legacy — the loader's own demangle gate),
///    OR `.rodata` carries a [`RUST_SIGNATURES`] signature
///    (`RustSourceLanguage.isRust` rodata path).
/// 3. **Clang** — `.comment` has a `clang version ...` record (unlace convenience).
/// 4. **Gcc** — `.comment` has a `GCC: (...)` record (unlace convenience).
/// 5. **Unknown** otherwise.
pub fn detect_compiler_elf(file: &object::File) -> Compiler {
    if golang_section_present(file.sections().filter_map(|s| s.name().ok())) {
        return Compiler::Go;
    }

    // Read the `.comment` section once; it backs both the Rust and the C/C++ arms.
    let comment = file
        .section_by_name(".comment")
        .and_then(|s| s.data().ok())
        .map(<[u8]>::to_vec)
        .unwrap_or_default();

    // Rust: `.comment` `rustc version`, then mangled-symbol heuristic, then
    // `.rodata` byte signatures — three faithful detection paths.
    if comment_indicates_rust(&comment)
        || symbols_indicate_rust(file)
        || rodata_indicates_rust(file)
    {
        return Compiler::Rustc;
    }

    // Swift — before the toolchain conveniences: a Swift ELF links clang/gcc
    // runtime objects, so its `.comment` carries their records too.
    if swift_indicated(file) {
        return Compiler::Swift;
    }

    // C/C++ conveniences (unlace additions; not faithful Ghidra SourceLanguage IDs).
    if comment_contains(&comment, b"clang version ") {
        return Compiler::Clang;
    }
    if comment_contains(&comment, b"GCC: ") {
        return Compiler::Gcc;
    }

    dwarf_compiler(file).unwrap_or(Compiler::Unknown)
}

/// Detect the toolchain that produced a **PE** image.
///
/// Precedence (most-specific source language first, then the toolchain):
/// 1. **Go** — a Go build-info section (`.go.buildinfo` etc.) is present, OR
///    the build-info blob Go's Windows linker merges into `.data` validates
///    there (`loader::gobuildinfo::pe_buildinfo_blob`) AND a pclntab whose
///    table resolves sits in read-only data with the image's own `moduledata`
///    naming it (`pclntab::readonly_table_present`). A `go build` PE has only
///    the plain `.text`/`.rdata`/`.data` sections, so content is its one
///    signal; the pclntab half keeps a C program that merely carries a Go image
///    as data (a dropper's payload, in either data section) from being read as
///    Go. Checked first, as on every format: a cgo build also links C objects
///    whose toolchain records the later arms read.
/// 2. **Rust** — a Rust-mangled symbol, OR a `rustc version` toolchain record in
///    `.rdata`/`.comment` (the format-neutral Rust paths).
/// 3. **Clang** — a `clang version` record, OR an MSVC `Rich` header whose
///    `@comp.id`s are tagged as clang/LLVM (clang-cl).
/// 4. **Gcc** — a MinGW `GCC: (...)` record (MinGW PEs store these NUL-delimited
///    in `.rdata`; there is no `.comment` *section*).
/// 5. **Clang** (MSVC) — any other populated `Rich` header ⇒ an MSVC `cl.exe`
///    link. unlace has no distinct `Msvc` [`Compiler`] variant (nothing gates on
///    one), so we report the closest C/C++-toolchain convenience, `Clang`, only
///    to lift the binary out of `Unknown`; this never changes output.
/// 6. **Unknown** otherwise.
pub fn detect_compiler_pe(file: &object::File, bytes: &[u8]) -> Compiler {
    if golang_section_present(file.sections().filter_map(|s| s.name().ok()))
        || (crate::loader::gobuildinfo::pe_buildinfo_blob(file).is_some()
            && crate::pclntab::readonly_table_present(file))
    {
        return Compiler::Go;
    }

    // The toolchain `GCC:`/`clang version`/`rustc version` records: MinGW puts
    // them NUL-delimited in `.rdata` (no `.comment` section in a PE); a Clang
    // -direct PE may carry `.comment`. Read both and treat as one record stream.
    let comment = file
        .section_by_name(".comment")
        .and_then(|s| s.data().ok())
        .unwrap_or(&[]);
    let rdata = file
        .section_by_name(".rdata")
        .and_then(|s| s.data().ok())
        .unwrap_or(&[]);
    let records = ToolchainRecords::scan_joined(comment, rdata);

    if records.rust || symbols_indicate_rust(file) || rodata_indicates_rust(file) {
        return Compiler::Rustc;
    }
    if swift_indicated(file) {
        return Compiler::Swift;
    }
    if records.clang {
        return Compiler::Clang;
    }
    if records.gcc {
        return Compiler::Gcc;
    }

    // No toolchain text: fall back to the MSVC `Rich` header / `@comp.id` records.
    match detect_rich_header(bytes) {
        RichVerdict::Clang => Compiler::Clang,
        RichVerdict::Msvc => Compiler::Clang, // unlace has no `Msvc` variant; see doc.
        RichVerdict::None => Compiler::Unknown,
    }
}

/// Detect the toolchain that produced a **Mach-O** image.
///
/// Precedence (most-specific source language first, then the toolchain):
/// 1. **Go** — a Go build-info section (`__go_buildinfo`) is present.
/// 2. **Rust** — a Rust-mangled symbol, OR a `rustc version` toolchain record in
///    a `__comment`/`__DWARF`-analog section (the format-neutral Rust paths).
/// 3. **Clang** — a `clang version` toolchain record, OR an `LC_BUILD_VERSION` /
///    `LC_VERSION_MIN_*` load command naming an **Apple platform**. Apple's only
///    system toolchain is clang/LLVM (Ghidra labels the macOS cspec the SysV
///    `gcc` model for ABI purposes, but the *source language*/compiler is clang),
///    so any Apple-platform Mach-O reports [`Compiler::Clang`].
/// 4. **Gcc** — a `GCC: (...)` toolchain record (cross-built MinGW-style).
/// 5. **Unknown** otherwise.
pub fn detect_compiler_macho(file: &object::File, bytes: &[u8]) -> Compiler {
    if golang_section_present(file.sections().filter_map(|s| s.name().ok())) {
        return Compiler::Go;
    }

    // Mach-O keeps any toolchain text in a `__comment`/`__DWARF` section (rare for
    // a linked exe); read what `object` exposes and scan it like a `.comment`.
    let toolchain = ["__comment", ".comment", "__apple_names"]
        .iter()
        .find_map(|n| file.section_by_name(n).and_then(|s| s.data().ok()))
        .map(<[u8]>::to_vec)
        .unwrap_or_default();

    if comment_indicates_rust(&toolchain)
        || symbols_indicate_rust(file)
        || rodata_indicates_rust(file)
    {
        return Compiler::Rustc;
    }
    // Swift — before the Apple-platform fallback: every Swift Mach-O carries
    // `LC_BUILD_VERSION`, so the clang arm would otherwise claim it.
    if swift_indicated(file) {
        return Compiler::Swift;
    }
    if comment_contains(&toolchain, b"clang version ") {
        return Compiler::Clang;
    }
    if comment_contains(&toolchain, b"GCC: ") {
        return Compiler::Gcc;
    }

    // The reliable Mach-O fingerprint: an `LC_BUILD_VERSION` / `LC_VERSION_MIN_*`
    // load command. An Apple platform ⇒ clang/LLVM toolchain.
    if macho_build_version_is_apple(bytes) {
        return Compiler::Clang;
    }

    dwarf_compiler(file).unwrap_or(Compiler::Unknown)
}

/// Format-neutral fallback for the formats we do not fingerprint (COFF object,
/// raw): honour only the universal Rust/Go signals, else `Unknown`. Keeps a Rust
/// or Go COFF object detectable without inventing a toolchain for plain `.obj`s.
fn detect_compiler_generic(file: &object::File) -> Compiler {
    if golang_section_present(file.sections().filter_map(|s| s.name().ok())) {
        return Compiler::Go;
    }
    if symbols_indicate_rust(file) {
        return Compiler::Rustc;
    }
    if swift_indicated(file) {
        return Compiler::Swift;
    }
    Compiler::Unknown
}

/// `true` if any NUL-delimited `.comment` record starts with `"rustc version "`
/// (faithful reduction of `ElfRustSourceLanguage`'s `^rustc version .*$` regex —
/// the records are line-delimited, so an anchored prefix match is exact).
pub fn comment_indicates_rust(comment: &[u8]) -> bool {
    comment_records(comment).any(|r| record_text(r).starts_with("rustc version "))
}

/// `true` if `.comment` contains a record beginning with `needle` (the unlace
/// convenience used for the `clang`/`GCC` arms). `needle` is matched at the
/// **start** of a NUL-delimited record (a `GCC: (...)` / `clang version ...`
/// line), not anywhere in the blob.
fn comment_contains(comment: &[u8], needle: &[u8]) -> bool {
    let needle = core::str::from_utf8(needle).unwrap_or("");
    comment_records(comment).any(|r| record_text(r).starts_with(needle))
}

/// Iterate the NUL-delimited records of a `.comment` blob, skipping empties.
fn comment_records(comment: &[u8]) -> impl Iterator<Item = &[u8]> {
    comment.split(|&b| b == 0).filter(|r| !r.is_empty())
}

/// Lossy-UTF8 view of a `.comment` record, with surrounding whitespace trimmed
/// (some toolchains pad records).
fn record_text(record: &[u8]) -> &str {
    core::str::from_utf8(record).unwrap_or("").trim()
}

/// The toolchain records [`detect_compiler_pe`] reads.
///
/// Each flag is exactly [`comment_indicates_rust`] / [`comment_contains`] over the
/// same stream. A PE's `.rdata` runs to tens of megabytes and the detection runs
/// several times per load, so the scan neither copies it nor walks its records:
/// a record can only open with a needle it contains, so only the records around
/// a substring hit are decoded and tested.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
struct ToolchainRecords {
    rust: bool,
    clang: bool,
    gcc: bool,
}

impl ToolchainRecords {
    /// The records of `first` followed by `second`, read as one stream: a record
    /// left open at the end of `first` continues into `second`.
    fn scan_joined(first: &[u8], second: &[u8]) -> ToolchainRecords {
        if first.last().is_none_or(|&b| b == 0) {
            return Self::scan(first).or(Self::scan(second));
        }
        let tail = first.iter().rposition(|&b| b == 0).map_or(0, |at| at + 1);
        let head = second.iter().position(|&b| b == 0).unwrap_or(second.len());
        let mut joined = first[tail..].to_vec();
        joined.extend_from_slice(&second[..head]);
        Self::scan(&first[..tail])
            .or(Self::scan(&joined))
            .or(Self::scan(&second[head..]))
    }

    fn scan(blob: &[u8]) -> ToolchainRecords {
        ToolchainRecords {
            rust: any_record_opens_with(blob, "rustc version "),
            clang: any_record_opens_with(blob, "clang version "),
            gcc: any_record_opens_with(blob, "GCC: "),
        }
    }

    fn or(self, other: ToolchainRecords) -> ToolchainRecords {
        ToolchainRecords {
            rust: self.rust || other.rust,
            clang: self.clang || other.clang,
            gcc: self.gcc || other.gcc,
        }
    }
}

/// [`comment_contains`] for one needle, visiting only the records that hold it.
fn any_record_opens_with(blob: &[u8], needle: &str) -> bool {
    let mut checked_to = 0;
    for hit in memchr::memmem::find_iter(blob, needle.as_bytes()) {
        if hit < checked_to {
            continue;
        }
        let start = memchr::memrchr(0, &blob[..hit]).map_or(0, |at| at + 1);
        let end = memchr::memchr(0, &blob[hit..]).map_or(blob.len(), |at| hit + at);
        if record_text(&blob[start..end]).starts_with(needle) {
            return true;
        }
        checked_to = end;
    }
    false
}

/// `true` if any symbol name is a Rust-mangled symbol: the v0 scheme (`_R...`) or
/// the legacy scheme (`_ZN...17h<16 lowercase hex>E`). This is the mangled-symbol heuristic
/// — robust on a non-stripped Rust binary even when the `.comment` record was
/// removed, and **format-neutral** (`file.symbols()`/`dynamic_symbols()` work for
/// ELF/PE/Mach-O alike), so it is the shared Rust signal every format arm uses.
/// Mirrors what the loader's demangle gate already recognizes (`rustc_demangle`).
///
/// The test is [`is_rust_mangled_in`], not [`is_rust_mangled`]: the format is in
/// hand here, and on Mach-O it decides whether a `_R…` symbol can be Rust at all.
fn symbols_indicate_rust(file: &object::File) -> bool {
    let format = file.format();
    file.symbols()
        .chain(file.dynamic_symbols())
        .filter(|s| s.kind() == SymbolKind::Text)
        .filter_map(|s| s.name().ok())
        .any(|name| is_rust_mangled_in(name, format))
}

/// Detect the source language straight from an image's bytes.
///
/// The byte-level entry point for callers that hold the image but not a parsed
/// [`object::File`] -- the console's `load file`, which records the verdict on
/// the `Architecture` so per-function engine rules (`option rustabi auto`) can
/// test it. An unparseable image reports [`Compiler::Unknown`].
pub fn detect_compiler_bytes(bytes: &[u8]) -> Compiler {
    match object::File::parse(bytes) {
        Ok(file) => detect_compiler(&file, bytes),
        Err(_) => Compiler::Unknown,
    }
}

/// `true` if `name` is a Rust-mangled symbol name. Recognizes:
/// - **v0**: `_R<path>` (or `__R<path>` with a platform leading underscore),
///   parsed against the scheme's grammar — the prefix alone is not evidence.
/// - **legacy**: `_ZN...17h<hex16>E` — the Itanium-`_ZN` form rustc emits with a
///   trailing `17h…` hash component containing 16 lowercase hex digits.
///
/// Format-agnostic, for a caller holding a bare name (the demangle pass). Where
/// the object format is known, use [`is_rust_mangled_in`].
pub fn is_rust_mangled(name: &str) -> bool {
    is_rust_v0(name, false) || is_rust_legacy(name)
}

/// [`is_rust_mangled`] with the object format in hand — the form the detector uses.
///
/// Mach-O prepends a platform underscore to every symbol it carries, so a rustc
/// v0 symbol is spelled `__R…` there and a single-underscore `_R…` is an ordinary
/// C name (`_Runtime`, `_RC4_set_key`). Every other format spells v0 `_R…`, and
/// for them this is exactly [`is_rust_mangled`].
pub fn is_rust_mangled_in(name: &str, format: BinaryFormat) -> bool {
    is_rust_v0(name, format == BinaryFormat::MachO) || is_rust_legacy(name)
}

/// `true` if `name` is a well-formed v0 symbol; `platform_underscore` demands the
/// `__R…` spelling (see [`is_rust_mangled_in`]).
///
/// The prefix is a necessary condition, never a sufficient one: `_R` opens every
/// Mach-O C symbol whose name starts with `R`, so a prefix-only test reads
/// `_Read`, `_Runtime` and `_RC4_set_key` as rustc output and hands the whole
/// image the Rust output language, the Rust ABI rules and the Rust no-return
/// list. The grammar decides instead, and `rustc_demangle` — the scheme's
/// reference implementation, and the crate the demangle pass already hands these
/// names to — is what parses it.
fn is_rust_v0(name: &str, platform_underscore: bool) -> bool {
    let prefixed = name.starts_with("__R") || (!platform_underscore && name.starts_with("_R"));
    prefixed && rustc_demangle::try_demangle(name).is_ok()
}

/// `true` if `name` is a legacy Rust symbol: an Itanium `_ZN…E` name carrying the
/// `17h<16 hex>` hash component rustc appends and a plain C++ `_ZN…` lacks.
fn is_rust_legacy(name: &str) -> bool {
    let zn = name.strip_prefix('_').unwrap_or(name);
    let zn = zn.strip_prefix('_').unwrap_or(zn);
    if !zn.starts_with("ZN") {
        return false;
    }
    let Some(pos) = name.rfind("17h") else {
        return false;
    };
    name[pos + 3..]
        .strip_suffix('E')
        .is_some_and(is_legacy_rust_hash_digits)
        || legacy_llvm::stem(name).is_some()
}

pub(crate) fn is_legacy_rust_hash_digits(hex: &str) -> bool {
    hex.len() == 16 && hex.bytes().all(|b| matches!(b, b'0'..=b'9' | b'a'..=b'f'))
}

/// `true` if a read-only data section carries any [`RUST_SIGNATURES`] byte
/// signature (`RustSourceLanguage.isRust` fallback path): ELF `.rodata`, PE
/// `.rdata`, Mach-O `__const` and `__cstring` (rustc puts its panic-location
/// paths in either, depending on the target). A plain substring scan — the unlace
/// analog of `MemoryBytePatternSearcher` over literal byte sequences (no pattern
/// engine needed; the LOSS vs Ghidra's searcher is none for literals).
fn rodata_indicates_rust(file: &object::File) -> bool {
    let names: &[&str] = match file.format() {
        BinaryFormat::Elf => &[".rodata"],
        BinaryFormat::Pe => &[".rdata"],
        BinaryFormat::MachO => &["__const", "__cstring"],
        _ => &[],
    };
    file.sections()
        .filter(|s| s.name().is_ok_and(|n| names.contains(&n)))
        .filter_map(|s| s.data().ok())
        .any(|data| {
            RUST_SIGNATURES
                .iter()
                .any(|sig| contains_subslice(data, sig))
        })
}

/// `true` if any section name in the iterator is a Golang marker section
/// (`.go.buildinfo` / `.note.go.buildid`). Factored over a `&str` iterator so it
/// is unit-testable without a Go fixture.
pub fn golang_section_present<'a>(names: impl Iterator<Item = &'a str>) -> bool {
    let mut names = names;
    names.any(|n| GO_SECTIONS.contains(&n))
}

/// `true` if any section name opens a Swift 5 reflection-metadata namespace
/// ([`SWIFT_SECTION_PREFIXES`]). Factored over a `&str` iterator like
/// [`golang_section_present`] so it is unit-testable without a Swift fixture.
pub fn swift_section_present<'a>(names: impl Iterator<Item = &'a str>) -> bool {
    let mut names = names;
    names.any(|n| SWIFT_SECTION_PREFIXES.iter().any(|p| n.starts_with(p)))
}

/// `true` if `name` is a Swift-mangled symbol: the Swift 5 `$s`/`$S` scheme or
/// the Swift 4 `_T0` scheme, each with an optional platform leading underscore
/// (Mach-O spells them `_$s…`/`__T0…`), or an Objective-C runtime type name in
/// the Swift 3 `_Tt` scheme (`_TtC6Sample3Foo`, the form the ObjC metadata
/// carries for Swift classes and protocols).
///
/// The prefix is held to the scheme's own next token — an operator or
/// identifier length — so an assembler local like `$LN3` or a C `_T0mumble`
/// cannot claim the image. No other
/// toolchain emits `$s`-namespace symbols, which keeps a one-symbol test as
/// safe as the Rust v0 grammar parse.
pub fn is_swift_mangled(name: &str) -> bool {
    let bare = name.strip_prefix('_').unwrap_or(name);
    if let Some(rest) = bare.strip_prefix("$s").or_else(|| bare.strip_prefix("$S")) {
        // Any operator may open the body (`$sx…` a generic parameter, `$sy…`
        // the empty list); the demangler itself rejects what is not Swift.
        return rest
            .bytes()
            .next()
            .is_some_and(|b| b.is_ascii_alphanumeric() || b == b'_');
    }
    if let Some(rest) = bare
        .strip_prefix("_T0")
        .or_else(|| name.strip_prefix("_T0"))
    {
        return rest
            .bytes()
            .next()
            .is_some_and(|b| b.is_ascii_digit() || b.is_ascii_uppercase());
    }
    if let Some(rest) = name.strip_prefix("_Tt") {
        // A type kind (class, struct, enum, protocol, bound generic) followed by
        // a context: an identifier length, a nested type kind, or a
        // substitution / stdlib contraction.
        let mut b = rest.bytes();
        return matches!(b.next(), Some(b'C' | b'V' | b'O' | b'P' | b'G'))
            && b.next().is_some_and(|c| {
                c.is_ascii_digit()
                    || matches!(c, b'C' | b'V' | b'O' | b'P' | b'G' | b'S' | b's' | b'E')
            });
    }
    false
}

/// `true` if the image carries a Swift signal: a Swift-mangled text symbol, or
/// one of the Swift runtime entry points ([`SWIFT_RUNTIME_SYMBOLS`]) in either
/// symbol table — the dynamic table included, so a stripped Swift binary that
/// imports `libswiftCore` is still recognized.
fn symbols_indicate_swift(file: &object::File) -> bool {
    file.symbols().chain(file.dynamic_symbols()).any(|s| {
        let Ok(name) = s.name() else { return false };
        (s.kind() == SymbolKind::Text && is_swift_mangled(name))
            || SWIFT_RUNTIME_SYMBOLS.contains(&name.strip_prefix('_').unwrap_or(name))
    })
}

/// The shared Swift arm every format uses: metadata sections first (cheapest,
/// emitted by the compiler itself), then the symbol scan.
fn swift_indicated(file: &object::File) -> bool {
    swift_section_present(file.sections().filter_map(|s| s.name().ok()))
        || symbols_indicate_swift(file)
}

/// Simple substring search (`haystack.contains(needle)` over bytes).
fn contains_subslice(haystack: &[u8], needle: &[u8]) -> bool {
    memchr::memmem::find(haystack, needle).is_some()
}

// ---------------------------------------------------------------------------
// PE `Rich` header / `@comp.id` fingerprint
// ---------------------------------------------------------------------------

/// The verdict of [`detect_rich_header`].
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum RichVerdict {
    /// A valid `Rich` header whose `@comp.id`s are tagged clang/LLVM (clang-cl).
    Clang,
    /// A valid `Rich` header — an MSVC `cl.exe` link (the common case).
    Msvc,
    /// No valid `Rich` header (MinGW / Clang-direct / non-MSVC linker).
    None,
}

/// Parse the MSVC `Rich` header out of the raw PE image and classify the linking
/// toolchain. The header is an obfuscated block in the DOS stub area (before the
/// PE header at `e_lfanew`), terminated by the literal `"Rich"` tag followed by a
/// 4-byte XOR key; XOR-ing the preceding dwords with that key recovers a stream
/// that starts with `"DanS"` and then pairs of `(@comp.id, count)` dwords. We
/// confirm the `DanS` marker (so a coincidental `"Rich"` substring is rejected)
/// and inspect the `@comp.id` product ids to split clang-cl from MSVC.
///
/// Pure & total: any malformed/absent header yields [`RichVerdict::None`].
fn detect_rich_header(bytes: &[u8]) -> RichVerdict {
    // Need at least the DOS header (e_lfanew at 0x3c) to bound the search window.
    if bytes.len() < 0x40 {
        return RichVerdict::None;
    }
    let e_lfanew =
        u32::from_le_bytes([bytes[0x3c], bytes[0x3d], bytes[0x3e], bytes[0x3f]]) as usize;
    // The `Rich` block lives between the DOS stub and the PE header. Bound the
    // search to that window (clamp to the buffer to stay total).
    let end = e_lfanew.min(bytes.len());
    let window = &bytes[..end];

    // Find the `"Rich"` end tag; the 4 bytes after it are the XOR key.
    let Some(rich_pos) = find_subslice(window, RICH_END) else {
        return RichVerdict::None;
    };
    let key_pos = rich_pos + 4;
    if key_pos + 4 > window.len() {
        return RichVerdict::None;
    }
    let key = u32::from_le_bytes([
        window[key_pos],
        window[key_pos + 1],
        window[key_pos + 2],
        window[key_pos + 3],
    ]);

    // Walk backwards from `"Rich"` in 4-byte dwords, XOR-decoding each, until we
    // hit the de-obfuscated `"DanS"` start marker. The records between are
    // `(@comp.id, count)` pairs: `@comp.id` = (prodid << 16) | build.
    let mut prodids: Vec<u16> = Vec::new();
    let mut off = rich_pos;
    let mut found_dans = false;
    // Cap the walk so a malformed buffer cannot loop unboundedly.
    let mut guard = 0;
    while off >= 4 && guard < 4096 {
        off -= 4;
        guard += 1;
        let raw = u32::from_le_bytes([
            window[off],
            window[off + 1],
            window[off + 2],
            window[off + 3],
        ]);
        let dec = raw ^ key;
        if dec == RICH_BEGIN {
            found_dans = true;
            break;
        }
        // A `@comp.id` dword is the first of each (id, count) pair. The pairs run
        // from just after `DanS` up to `Rich`; collecting every other dword from
        // the `Rich` end yields the ids (the in-between dwords are counts). We
        // collect all decoded high-words and dedup; an id of 0 is padding.
        let prodid = (dec >> 16) as u16;
        if prodid != 0 {
            prodids.push(prodid);
        }
    }

    if !found_dans {
        return RichVerdict::None;
    }
    if prodids.iter().any(|p| RICH_LLVM_PRODIDS.contains(p)) {
        RichVerdict::Clang
    } else {
        RichVerdict::Msvc
    }
}

/// First-occurrence byte-substring search (returns the start index).
fn find_subslice(haystack: &[u8], needle: &[u8]) -> Option<usize> {
    if needle.is_empty() || needle.len() > haystack.len() {
        return None;
    }
    haystack.windows(needle.len()).position(|w| w == needle)
}

// ---------------------------------------------------------------------------
// Mach-O `LC_BUILD_VERSION` / `LC_VERSION_MIN_*` fingerprint
// ---------------------------------------------------------------------------

/// `true` if the Mach-O image carries an `LC_BUILD_VERSION` (any platform) or an
/// `LC_VERSION_MIN_*` load command — i.e. it was built for an Apple platform with
/// the Apple/clang toolchain. Walks the load commands with the typed Mach-O
/// parsers (the same pattern as `entry/macho_entry.rs`), dispatching on
/// `FileKind` for thin 32/64 and peeling fat slices.
///
/// Pure & total: a parse failure / non-Mach-O yields `false`.
fn macho_build_version_is_apple(bytes: &[u8]) -> bool {
    match FileKind::parse(bytes) {
        Ok(FileKind::MachO64) => macho_has_version_command::<MachHeader64<Endianness>>(bytes),
        Ok(FileKind::MachO32) => macho_has_version_command::<MachHeader32<Endianness>>(bytes),
        // Fat/universal: any slice being an Apple build is enough (universal
        // binaries are all-Apple in practice). `FatArch::data` peels the slice to
        // a thin image, so we recurse on the slice bytes at offset 0.
        Ok(FileKind::MachOFat32) => match MachOFatFile32::parse(bytes) {
            Ok(fat) => fat
                .arches()
                .iter()
                .filter_map(|a| a.data(bytes).ok())
                .any(macho_build_version_is_apple),
            Err(_) => false,
        },
        Ok(FileKind::MachOFat64) => match MachOFatFile64::parse(bytes) {
            Ok(fat) => fat
                .arches()
                .iter()
                .filter_map(|a| a.data(bytes).ok())
                .any(macho_build_version_is_apple),
            Err(_) => false,
        },
        _ => false,
    }
}

/// `true` if the thin Mach-O `bytes` carries an `LC_BUILD_VERSION` or
/// `LC_VERSION_MIN_*` load command. Generic over the header width.
fn macho_has_version_command<Mach>(bytes: &[u8]) -> bool
where
    Mach: MachHeader<Endian = Endianness>,
{
    let Ok(header) = Mach::parse(bytes, 0) else {
        return false;
    };
    let Ok(endian) = header.endian() else {
        return false;
    };
    let Ok(mut commands) = header.load_commands(endian, bytes, 0) else {
        return false;
    };
    while let Ok(Some(command)) = commands.next() {
        match command.variant() {
            // `LC_BUILD_VERSION` (any platform) or the legacy `LC_VERSION_MIN_*`
            // family — both are Apple-only load commands.
            Ok(LoadCommandVariant::BuildVersion(_)) | Ok(LoadCommandVariant::VersionMin(_)) => {
                return true;
            }
            _ => {}
        }
    }
    false
}

/// The Rust no-return wildcard list text, for the no-return pass to parse and add
/// to its match set when the compiler is detected as Rust. The text is the
/// vendored `RustFunctionsThatDoNotReturn` (Ghidra's `compiler name="rustc"`
/// arm); it is parsed by `noreturn.rs`'s existing list parser (the `*`-suffix
/// wildcard form, e.g. `ZN4core9panicking5panic17h*`).
pub fn rust_noreturn_list() -> &'static str {
    RUST_NORETURN_LIST
}

/// The Golang no-return list text, for the no-return pass to parse and add to its
/// match set when the compiler is detected as Go. The text is the vendored
/// `GolangFunctionsThatDoNotReturn` (Ghidra's `compiler id="golang"` arm); it is
/// parsed by the same `noreturn.rs` list parser — the entries are all exact
/// dotted names (`runtime.gopanic`, `runtime.throw`, `runtime.goexit.abi0`, …)
/// with no `*` wildcards, so they land in the parser's `exact` set.
pub fn golang_noreturn_list() -> &'static str {
    GOLANG_NORETURN_LIST
}

#[cfg(test)]
mod tests;
