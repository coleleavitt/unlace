//! No-return known-function detection — the unlace analog of Ghidra's
//! `NoReturnFunctionAnalyzer` ("Non-Returning Functions - Known").
//!
//! Ghidra ships **two** no-return analyzers:
//!
//! - **Known** (`NoReturnFunctionAnalyzer`): name-based. Every symbol whose name
//!   (leading `_`s stripped) matches a shipped list is marked no-return. This is
//!   what we port here.
//! - **Discovered** (`FindNoReturnFunctionsAnalyzer`): flow/heuristic. Counts
//!   CALL-with-no-fallthrough "indications" over the disassembled listing and
//!   marks no-return once the count reaches an evidence threshold (3). This is
//!   **infeasible at the unlace-analysis tier** — it needs the disassembled
//!   Listing / code blocks / references / FlowOverride that only exist *after*
//!   decompilation, which the analyzer tier (object view only) does not have. It
//!   is documented here as a deferred hook; see `docs/missing-analyses.md`.
//!
//! Origin (upstream Ghidra, the tree unlace was ported from):
//! - matcher: `Ghidra/Features/Base/.../analysis/NoReturnFunctionAnalyzer.java`
//!   (the `added` loop + `makeNoReturnFunction` namespace guard).
//! - name set: `Ghidra/Features/Base/data/ElfFunctionsThatDoNotReturn`, vendored with GNU Fortran additions at `crates/unlace-analysis/data/ElfFunctionsThatDoNotReturn`.
//! - source-language selection: `Ghidra/Features/Base/data/noReturnFunctionConstraints.xml`
//!   adds a per-compiler list to the match set for an ELF whose compiler is
//!   detected. The `compiler name="rustc"` arm adds `RustFunctionsThatDoNotReturn`;
//!   the `compiler id="golang"` arm adds `GolangFunctionsThatDoNotReturn`; the base
//!   `ElfFunctionsThatDoNotReturn` always applies. unlace mirrors this: when
//!   [`crate::sourcelang::detect_compiler`] reports `Rustc` (resp. `Go`), the
//!   Rust wildcard list (vendored at `data/RustFunctionsThatDoNotReturn`) (resp.
//!   the Go list at `data/GolangFunctionsThatDoNotReturn`) is parsed **in addition**
//!   to the base ELF list. See [`NoReturnKnownPass::for_compiler`].
//!
//! Rust paths: the Rust list's mangled prefixes match only legacy symbols, so it
//! also lists hash-less Rust paths (`core::option::unwrap_failed`), compared
//! against the demangling of each symbol of a Rust ELF ([`rust_path`]) so a v0
//! symbol matches too.
//!
//! Effect: marking `exit`/`abort`/… no-return inserts an artificial halt at the
//! call site (the engine's `flow.rs` artificialHalt path), so the dead
//! fall-through after a tail `exit()` disappears from the decompiled output. For
//! a Rust binary this additionally elides the dead code after a tail
//! `core::panicking::panic` / `handle_alloc_error` / `rust_begin_unwind`; for a Go
//! binary, after a tail `runtime.gopanic` / `runtime.throw` / `runtime.goexit`.
//!
//! [`IMPORT_NORETURN`] names the no-return helpers matched only as IMPORTS and
//! only by exact spelling, never against a function the image defines.

use object::SymbolKind;
use object::read::{Object, ObjectSymbol};

use super::noretrules::{NoRetRule, parse_rules, rename_for_noreturn};
use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, NoReturnFact, Phase};
use crate::sourcelang::Compiler;

#[path = "rustnoreturn.rs"]
mod rustnoreturn;

/// The known-no-return name list, extended from Ghidra
/// `Ghidra/Features/Base/data/ElfFunctionsThatDoNotReturn`.
const ELF_NORETURN_LIST: &str = include_str!("../../data/ElfFunctionsThatDoNotReturn");

/// The PE (Windows-CRT) / Mach-O (macOS) no-return name list — the per-format arm
/// of `noReturnFunctionConstraints.xml` for the non-ELF executable formats. The
/// shared C names (`exit`/`abort`/…) also appear in [`ELF_NORETURN_LIST`], but a
/// PE/COFF/Mach-O selects THIS list instead of the ELF one (the base C names are
/// duplicated here so a PE still flags `exit`), plus the Windows-CRT specifics
/// (`__fastfail`/`_invoke_watson`/`quick_exit`/…) the ELF list does not name.
const PE_MAC_NORETURN_LIST: &str = include_str!("../../data/PeMacFunctionsThatDoNotReturn");
/// The Windows-only names (`crate::loader::peimportcall` matches them at
/// load); [`listed_noreturn`] reads them for names a later rename gives.
const PE_WIN32_NORETURN_LIST: &str = include_str!("../../data/PEFunctionsThatDoNotReturn");

/// No-return helpers matched by exact name on import addresses only: glibc
/// `debug/stack_chk_fail_local.c` declares `__stack_chk_fail_local` `noreturn`.
const IMPORT_NORETURN: &[&str] = &["__stack_chk_fail_local"];

/// The Swift runtime's exported entry points that never return
/// (`SWIFT_NORETURN` in `swift/Runtime/Error.h`, `NoReturn` in
/// `swift/Runtime/RuntimeFunctions.def`), matched on a Swift image in any format:
/// `try!` failing ends in `swift_unexpectedError`.
const SWIFT_NORETURN: &[&str] = &[
    "swift_unexpectedError",
    "swift_errorInMain",
    "swift_onceClosureDestroyedError",
];

/// Port of `NoReturnFunctionAnalyzer` ("Known"): flag every imported/defined
/// function whose name matches the shipped ELF no-return list.
///
/// `compiler` selects which (if any) per-compiler no-return list is matched **in
/// addition** to the base ELF list, faithful to `noReturnFunctionConstraints.xml`'s
/// per-`<compiler>` arms for the ELF executable format:
/// - [`Compiler::Rustc`] → also match `RustFunctionsThatDoNotReturn`
///   (`compiler name="rustc"`),
/// - [`Compiler::Go`] → also match `GolangFunctionsThatDoNotReturn`
///   (`compiler id="golang"`),
/// - everything else (`Gcc`/`Clang`/`Unknown`) → base ELF list only, as Ghidra
///   does for an ELF with no per-compiler arm.
///
/// The default ([`NoReturnKnownPass::elf`]) matches only the base ELF list.
#[derive(Clone, Copy, Default)]
pub struct NoReturnKnownPass {
    /// The detected source-language compiler, selecting the extra per-compiler
    /// no-return list (Rust / Golang) to fold into the base ELF list.
    pub compiler: Compiler,
}

impl NoReturnKnownPass {
    /// The base ELF pass (no per-compiler list) — Ghidra's default for an ELF
    /// with no matching `<compiler>` arm. Equivalent to
    /// [`NoReturnKnownPass::for_compiler`] with `Gcc`/`Clang`/`Unknown`.
    pub fn elf() -> Self {
        NoReturnKnownPass {
            compiler: Compiler::Unknown,
        }
    }

    /// The pass for a Rust-detected ELF: base ELF list + the Rust wildcard list.
    pub fn rust() -> Self {
        NoReturnKnownPass {
            compiler: Compiler::Rustc,
        }
    }

    /// The pass for a Go-detected ELF: base ELF list + the Golang list.
    pub fn golang() -> Self {
        NoReturnKnownPass {
            compiler: Compiler::Go,
        }
    }

    /// The pass for the given detected [`Compiler`] — the unlace analog of selecting
    /// the matching `<compiler>` arm of `noReturnFunctionConstraints.xml`.
    pub fn for_compiler(compiler: Compiler) -> Self {
        NoReturnKnownPass { compiler }
    }
}

/// Strip **all** leading underscores (faithful to
/// `NoReturnFunctionAnalyzer.java:84-91` — a loop, not a single strip: so
/// `__stack_chk_fail` -> `stack_chk_fail` and `_exit` -> `exit`).
fn strip_leading_underscores(s: &str) -> &str {
    s.trim_start_matches('_')
}

/// Split a (possibly namespaced) symbol name into `(base, namespace)`.
/// unlace installs `::`-split namespaces, so a demangled `Menu::exit` has base
/// `exit` in namespace `Menu`; a flat C import `exit` has no namespace.
fn base_and_namespace(name: &str) -> (&str, Option<&str>) {
    match name.rfind("::") {
        Some(i) => (&name[i + 2..], Some(&name[..i])),
        None => (name, None),
    }
}

/// Does the base ELF list (without per-compiler additions) name `name`? The
/// single no-return predicate for PPC32 PIC imports in every recovery mode.
pub(crate) fn elf_name_is_noreturn(name: &str) -> bool {
    static NAMES: std::sync::OnceLock<(Vec<String>, Vec<String>)> = std::sync::OnceLock::new();
    let (exact, wildcard) = NAMES.get_or_init(|| parse_list(ELF_NORETURN_LIST));
    name_matches(name, exact, wildcard)
}

/// Parse the vendored list into `(exact, wildcard_prefixes)` (mirrors the Java
/// reader, `NoReturnFunctionAnalyzer.java:220-245`): skip `#`/blank lines, strip
/// leading `_`, a trailing `*` makes a prefix (wildcard) entry. The shipped ELF
/// list has no wildcards (those are Rust/Golang only), but the parse is faithful.
pub(crate) fn parse_list(text: &str) -> (Vec<String>, Vec<String>) {
    let mut exact = Vec::new();
    let mut wildcard = Vec::new();
    for line in text.lines() {
        let line = line.trim();
        if line.is_empty() || line.starts_with('#') {
            continue;
        }
        let line = strip_leading_underscores(line);
        if let Some(prefix) = line.strip_suffix('*') {
            wildcard.push(prefix.to_string());
        } else {
            exact.push(line.to_string());
        }
    }
    (exact, wildcard)
}

/// `true` if `name` (after stripping leading `_` from its base) matches the list,
/// honoring the namespace guard (only global / `std` — never a C++ class method
/// like `Menu::_exit`; faithful to `makeNoReturnFunction`, NoReturnFunctionAnalyzer.java:121-132).
pub(crate) fn name_matches(name: &str, exact: &[String], wildcard: &[String]) -> bool {
    let (base, ns) = base_and_namespace(name);
    // Namespace guard: skip class methods. Global (no namespace) is allowed; the
    // sole allowed non-global namespace is exactly `std`.
    if let Some(ns) = ns {
        if ns != "std" {
            return false;
        }
    }
    let stripped = strip_leading_underscores(base);
    if stripped.is_empty() {
        return false;
    }
    exact.iter().any(|e| e == stripped) || wildcard.iter().any(|w| stripped.starts_with(w.as_str()))
}

/// The hash-less Rust path of a legacy or v0 mangled `name`, with a trailing
/// generic argument list removed: `_ZN4core6option13unwrap_failed17h..E` and
/// `_RNvNtCs.._4core6option13unwrap_failed` are both `core::option::unwrap_failed`,
/// and `core::panicking::assert_failed::<i64, i64>` is `core::panicking::assert_failed`.
fn rust_path(name: &str) -> Option<String> {
    let mut path = format!("{:#}", rustc_demangle::try_demangle(name).ok()?);
    if path.ends_with('>') {
        let mut depth = 0usize;
        for (i, c) in path.char_indices().rev() {
            match c {
                '>' => depth += 1,
                '<' => {
                    depth -= 1;
                    if depth == 0 {
                        if path[..i].ends_with("::") {
                            path.truncate(i - 2);
                        }
                        break;
                    }
                }
                _ => {}
            }
        }
    }
    Some(path)
}

/// Does a Rust path match one of the list's `::` entries?
fn path_matches(path: &str, exact: &[String], wildcard: &[String]) -> bool {
    exact.iter().any(|e| e == path)
        || wildcard
            .iter()
            .any(|w| w.contains("::") && path.starts_with(w.as_str()))
}

/// [`name_matches`], retried under the `nameladder` fallback spellings
/// (`j_exit`, `__imp_abort`, `exit_0`) when `ladder` is set.
pub(crate) fn name_matches_ladder(
    name: &str,
    exact: &[String],
    wildcard: &[String],
    ladder: bool,
) -> bool {
    name_matches(name, exact, wildcard)
        || (ladder
            && crate::analyzers::protos::nameladder::fallbacks(name)
                .iter()
                .any(|f| name_matches(f, exact, wildcard)))
}

/// Does the shipped no-return list (the ELF, PE/Mach-O and Windows-only lists
/// together) name `name` under any `nameladder` spelling? For a name a rename
/// gave a function after the load-time scan: a FLIRT or FID match names a
/// statically linked MSVC CRT routine (`__CxxThrowException@8`,
/// `___report_gsfailure`), which only the Windows list carries.
pub fn listed_noreturn(name: &str) -> bool {
    let (mut exact, mut wildcard) = parse_list(ELF_NORETURN_LIST);
    for list in [PE_MAC_NORETURN_LIST, PE_WIN32_NORETURN_LIST] {
        let (e, w) = parse_list(list);
        exact.extend(e);
        wildcard.extend(w);
    }
    name_matches_ladder(name, &exact, &wildcard, true)
}

/// Scan an ELF object's FUNC symbols (`.symtab` + `.dynsym`) for known no-return
/// names. Emits a [`NoReturnFact`] carrying the symbol **address** alongside its
/// **original installed name** (not the stripped form) for each hit. The address
/// is the stable resolution key: the demangle pass renames the funcsym before it
/// is installed, so a mangled C++ no-return symbol (`_ZSt9terminatev`) is
/// installed as `std::terminate` — the commit resolves it by address
/// (`find_function_across_scopes`) and falls back to the name only when nothing is
/// installed at that address. Shared by [`AnalysisPass::run`] and the unit tests.
///
/// `compiler` selects the extra per-compiler no-return list to fold into the base
/// ELF list (faithful to `noReturnFunctionConstraints.xml`'s per-`<compiler>`
/// arms): `Rustc` → `RustFunctionsThatDoNotReturn`, `Go` →
/// `GolangFunctionsThatDoNotReturn`, everything else → base ELF list only.
fn scan_noreturn(
    file: &object::File,
    bytes: &[u8],
    compiler: Compiler,
    ladder: bool,
    rules: &[NoRetRule],
) -> AnalysisOutput {
    let mut out = AnalysisOutput::default();
    // Per-format base list (PR-10): an ELF gets the vendored ELF list (+ the
    // per-compiler Rust/Go widening); a PE/COFF/Mach-O gets the PE/Mac list
    // (Windows-CRT + macOS no-return names, with the shared C names duplicated so
    // a PE still flags `exit`/`abort`). The names are format-neutral; only *which*
    // shipped list applies differs — the unlace analog of
    // noReturnFunctionConstraints.xml's per-executable-format arms.
    let (mut exact, wildcard) = match file.format() {
        object::BinaryFormat::Elf => {
            let (mut e, mut w) = parse_list(ELF_NORETURN_LIST);
            // Per-compiler source language (ELF only): append the matching list,
            // faithful to the `<compiler>` arms of noReturnFunctionConstraints.xml.
            if let Some(list) = match compiler {
                // Rust: the panic/abort/oom wildcard list.
                Compiler::Rustc => Some(crate::sourcelang::rust_noreturn_list()),
                // Go: the runtime.gopanic/throw/goexit/… exact-name list.
                Compiler::Go => Some(crate::sourcelang::golang_noreturn_list()),
                // No per-compiler arm for the ELF format (Gcc/Clang/Unknown;
                // Swift adds `SWIFT_NORETURN` below, in every format).
                Compiler::Gcc | Compiler::Clang | Compiler::Swift | Compiler::Unknown => None,
            } {
                let (extra_exact, extra_wildcard) = parse_list(list);
                e.extend(extra_exact);
                w.extend(extra_wildcard);
            }
            (e, w)
        }
        // PE / COFF / Mach-O: the Windows-CRT + macOS no-return list.
        object::BinaryFormat::Pe | object::BinaryFormat::Coff | object::BinaryFormat::MachO => {
            parse_list(PE_MAC_NORETURN_LIST)
        }
        // Any other (unsupported) format: no list, no facts.
        _ => return out,
    };
    if compiler == Compiler::Swift {
        exact.extend(SWIFT_NORETURN.iter().map(|n| n.to_string()));
    }
    let rust_paths = compiler == Compiler::Rustc && file.format() == object::BinaryFormat::Elf;
    let mut seen = std::collections::HashSet::new();
    let rust_exit = file.format() == object::BinaryFormat::Elf && compiler == Compiler::Rustc;
    let mut emit = |out: &mut AnalysisOutput, addr: u64, n: String| {
        let hit = name_matches_ladder(&n, &exact, &wildcard, ladder)
            || renamed_hit(&n, rules, &exact, &wildcard, ladder)
            || (rust_paths && rust_path(&n).is_some_and(|p| path_matches(&p, &exact, &wildcard)))
            || (rust_exit && rustnoreturn::process_exit(&n));
        if hit && seen.insert((addr, n.clone())) {
            out.noreturn.push(NoReturnFact { addr, name: n });
        }
    };

    // Mirror exactly the three FUNC streams `loadimage_object::from_bytes`
    // installs as FunctionSymbols, so the emitted ADDRESS is the install address
    // the commit's `find_function_across_scopes` resolves against.
    //
    // 1. `.symtab` + `.dynsym` **defined** functions (`sym.address()`). A defined
    //    C++ no-return method surfaces here at its real code address. A UND import
    //    entry has `address()==0` (the funcsym install skips these too); its real
    //    FunctionSymbol comes from the PLT stub (arm 2), so skip the 0 address
    //    here rather than emit a useless `addr==0` fact.
    for sym in file.symbols().chain(file.dynamic_symbols()) {
        if sym.kind() != SymbolKind::Text {
            continue;
        }
        let addr = sym.address();
        if addr == 0 {
            continue; // UND / absolute import stub, not a code address
        }
        let Ok(n) = sym.name() else { continue };
        let Ok(n) = String::from_utf8(crate::loader::elf_plt::strip_version(n.as_bytes())) else {
            continue;
        };
        emit(&mut out, addr, n);
    }

    // 2. PLT stubs (`elf_plt::resolve_plt_imports`): a dynamic import like `exit`
    //    or `_ZSt9terminatev` has a UND (`address()==0`) `.dynsym` entry — its
    //    only real FunctionSymbol is the PLT stub `elf_plt` names. Emitting the
    //    STUB address (not 0) is what lets the address path resolve a *demangled*
    //    import: `_ZSt9terminatev` is installed at the stub as `std::terminate`,
    //    so a name lookup of the raw mangled string misses, but the stub address
    //    matches. The name is matched on the raw (pre-demangle) `.dynstr` form,
    //    exactly as the `.symtab`/`.dynsym` arm does.
    for p in crate::loader::format::resolve_imports(file, bytes) {
        let Ok(n) = String::from_utf8(p.name) else {
            continue;
        };
        emit(&mut out, p.addr, n);
    }
    out
}

/// The rename rules of the file `UNLACE_NORET_RULES` (or the load options) names.
/// A file that does not parse is reported on stderr and gives no rules.
fn noret_rule_file() -> Vec<NoRetRule> {
    use unlace_decomp::loadoptions::{env, scoped};
    let Some(path) = scoped(|o| o.noret_rules.clone()).unwrap_or_else(env::noret_rules) else {
        return Vec::new();
    };
    match std::fs::read_to_string(&path)
        .map_err(|e| e.to_string())
        .and_then(|text| parse_rules(&text))
    {
        Ok(rules) => rules,
        Err(e) => {
            eprintln!("noreturn: {}: {e}; no rename rules applied", path.display());
            Vec::new()
        }
    }
}

/// Whether the function `name` counts as a listed no-return name once the first
/// rule of `rules` that matches it renames it.
fn renamed_hit(
    name: &str,
    rules: &[NoRetRule],
    exact: &[String],
    wildcard: &[String],
    ladder: bool,
) -> bool {
    rename_for_noreturn(name, rules)
        .is_some_and(|rpl| name_matches_ladder(rpl, exact, wildcard, ladder))
}

/// (unlace `armfuncmode`) The addresses (Thumb bit cleared) of the image's
/// functions and PLT stubs the base ELF list names as never returning.
pub(crate) fn known_noreturn_addrs(file: &object::File) -> std::collections::BTreeSet<u64> {
    scan_noreturn(file, &[], Compiler::Unknown, false, &[])
        .noreturn
        .iter()
        .map(|fact| fact.addr & !1)
        .collect()
}

impl AnalysisPass for NoReturnKnownPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "noreturn_known"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = scan_noreturn(
            ctx.file,
            ctx.bytes,
            self.compiler,
            unlace_decomp::loadoptions::nameladder_enabled(),
            &noret_rule_file(),
        );
        if let Some(image) = ctx.image {
            let (imports, _) = crate::protos::loaded_import_addrs(ctx.file, ctx.bytes, image);
            out.noreturn.extend(
                imports
                    .into_iter()
                    .filter(|(name, _)| IMPORT_NORETURN.contains(&name.as_str()))
                    .map(|(name, addr)| NoReturnFact { addr, name }),
            );
        }
        out
    }
}

#[cfg(test)]
mod tests;
