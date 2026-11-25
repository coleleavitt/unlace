//! Auto-apply cspec call-fixups — the unlace analog of Ghidra's
//! `CallFixupAnalyzer` (the "Call-Fixup Installer").
//!
//! # What this is
//!
//! A processor cspec ships named `<callfixup>` payloads, each with one or more
//! `<target>` symbol names: e.g. `x86-64-gcc.cspec` registers
//! `<callfixup name="mcount"><target name="mcount"/>` (body `temp:1 = 0;`), the
//! profiling stub gcc `-pg` plants in every prologue. A call-fixup *replaces* the
//! CALL to that target with the payload's p-code body, so the bogus
//! `mcount()`/`__fentry__()` profiling call dissolves out of the decompiled
//! output.
//!
//! In the Ghidra application, **`CallFixupAnalyzer`** is the piece that *installs*
//! a fixup: it enumerates the registered call-fixups' `<target>` names, matches
//! them against the program's functions by name, and tags each match with the
//! fixup (`function.setCallFixup(name)`). The decompiler then applies the tagged
//! fixup at flow time. unlace inherits the whole *apply* path (see "Inherited vs
//! gap" below); this pass is the missing *installer*.
//!
//! # Inherited vs gap
//!
//! **Inherited** (already in the engine, do not re-build): the cspec
//! `<callfixup name=…><target name=…>` decode at bootstrap
//! (`architecture.rs::decode_call_fixups`); per-payload `target_symbol_names`
//! retention on `SleighPayload::Callfixup` (`inject_sleigh.rs`); the entire
//! inject/weave pipeline — `func_inject_id → FuncProto::set_inject_id →
//! inject_sub_function` (`seams.rs`, `flow.rs`); and the per-function applier
//! primitive `Database::set_function_inject_id` (`database.rs`), already called by
//! hand in the console `fixup apply` command (`IfcFixupApply`, `ifacedecomp.rs`).
//!
//! **The gap this fills**: nothing auto-iterates the registered fixups' `<target>`
//! names and applies them to matching FunctionSymbols. unlace only had the manual
//! `fixup apply <fixup> <function>` console path. Ghidra's `CallFixupAnalyzer` is
//! exactly that auto-installer; this pass ports it.
//!
//! # Origin (upstream Ghidra, the tree unlace was ported from)
//!
//! - `Ghidra/Features/Base/src/main/java/ghidra/app/plugin/core/disassembler/CallFixupAnalyzer.java`
//!   — `AnalyzerType.FUNCTION_ANALYZER`, `setDefaultEnablement(true)` (line 51).
//!   The decompiler-relevant logic ported here:
//!   - `getTargetFixupMap` (lines 436-459): enumerate `getCallFixupNames()`, read
//!     each `InjectPayloadCallfixup.getTargets()`, build `map[target] = fixupName`.
//!   - `getCallFixupNameForFunction` (lines 200-222): probe the target map with
//!     `funcName`, then `"_"+funcName`, then `"__"+funcName` (the underscore
//!     retries); first hit wins; a leading `libID_conflict_` is stripped first.
//!   - the `added` install loop (lines 81-91): for each function, if a fixup
//!     matches and `getCallFixup()==null`, `function.setCallFixup(fixupName)`.
//! - `InjectPayloadCallfixup.getTargets()` (`.../InjectPayloadCallfixup.java:60-61`,
//!   `targetSymbolNames`).
//!
//! # Scope / LOSS
//!
//! Only the *install* half is ported (target-match → set the fixup). The rest of
//! `CallFixupAnalyzer.added` (lines 93-175) and all of
//! `repairLocationsForNonReturningFunction`/`setNoFallThru`/`clearAndRepairFlows`
//! (lines 234-434) is **post-disassembly listing flow-repair** (FlowOverride,
//! ClearFlowAndRepairCmd) and is **not portable at this tier** — there is no
//! pre-decompile Listing / FlowOverride here. unlace handles fixup fallthrough
//! inside the engine's flow/inject path. Thunk-following
//! (`addInThunkedFunctionsToList`, lines 177-198) is part of that flow-repair half
//! and is likewise out of scope. This is the same tier constraint already
//! documented for `FindNoReturnFunctionsAnalyzer` (see `loader/noreturn.rs`).

use object::SymbolKind;
use object::read::{Object, ObjectSymbol};

use unlace_decomp::architecture::Architecture;
use unlace_decomp::inject_sleigh::SleighPayload;

use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase};

pub mod armgscookiesig;
pub mod msvcarithsig;
pub mod msvcftolsig;
pub mod thumb1casesig;

/// Prefix Ghidra strips from a conflicting library-imported function name before
/// the target-map probe (`CallFixupAnalyzer.java:207-209`,
/// `LIBRARY_ID_CONFLICT_PREFIX`).
const LIB_CONFLICT_PREFIX: &str = "libID_conflict_";

/// Build the `(target_name, fixup_name)` map from the engine's registered
/// call-fixups — the port of `getTargetFixupMap` (`CallFixupAnalyzer.java:436-459`).
///
/// For each registered `SleighPayload::Callfixup`, for each of its
/// `<target>` names, record `map[target] = fixupName`. The fixup's name is its
/// payload `core.name` (the `<callfixup name=…>` attribute); the targets are the
/// `<target name=…>` symbols (`InjectPayloadCallfixup::target_symbol_names`). The
/// data lives on `arch.pcodeinjectlib` (decoded at bootstrap by
/// `Architecture::decode_call_fixups`).
///
/// Returned as a `Vec<(target, fixup)>` (no `HashMap` per project convention);
/// probed by [`call_fixup_name_for_function`]. Targets/fixup names are UTF-8
/// strings (cspec symbol names are ASCII); a non-UTF-8 name is skipped.
///
/// `pub` so the commit seam (`unlace-console`'s `commit_analysis_output`) can
/// rebuild the same map and re-derive a [`crate::pass::CallFixupFact`]'s fixup —
/// the fact carries only the function name (the install loop applies by inject id,
/// which the commit re-resolves the same way the pass matched it).
pub fn target_fixup_map(arch: &Architecture) -> Vec<(String, String)> {
    fixup_map(arch, true)
}

/// [`target_fixup_map`], with the unlace fixup families' option gates applied
/// only when `gated`. The load-time scan matches against every family: it runs
/// before the run's `--option`s reach the architecture, so a default-off family
/// (`aeabifloat`) would never match a relocatable object's undefined helpers,
/// which no later stream names. The commit re-derives each fact's fixup through
/// the gated map, so a family that is off still installs nothing.
fn fixup_map(arch: &Architecture, gated: bool) -> Vec<(String, String)> {
    let mut map: Vec<(String, String)> = Vec::new();
    for payload in &arch.pcodeinjectlib.injection {
        let SleighPayload::Callfixup(cf) = payload else {
            continue;
        };
        let Ok(fixup_name) = std::str::from_utf8(&cf.payload.core.name) else {
            continue;
        };
        if gated
            && fixup_name.starts_with(unlace_decomp::arithhelpers::FIXUP_PREFIX)
            && !arch
                .unlace_options
                .get::<unlace_decomp::arithhelpers::ArithHelpers>()
                .0
        {
            continue;
        }
        if gated
            && fixup_name.starts_with(unlace_decomp::aeabifloat::FIXUP_PREFIX)
            && !arch
                .unlace_options
                .get::<unlace_decomp::aeabifloat::AeabiFloat>()
                .0
        {
            continue;
        }
        if gated
            && fixup_name.starts_with(unlace_decomp::objcarc::FIXUP_PREFIX)
            && !arch
                .unlace_options
                .get::<unlace_decomp::objcarc::ObjcArc>()
                .0
        {
            continue;
        }
        for target in &cf.target_symbol_names {
            if let Ok(target) = std::str::from_utf8(target) {
                map.push((target.to_string(), fixup_name.to_string()));
            }
        }
    }
    map
}

/// Find the call-fixup name a function maps to, or `None` — the port of
/// `getCallFixupNameForFunction` (`CallFixupAnalyzer.java:200-222`).
///
/// Strip a leading `libID_conflict_` if present (lines 207-209), then probe the
/// target map for `funcName`, then `"_"+funcName`, then `"__"+funcName` (lines
/// 211-219, the underscore-prefix retries). First hit wins. Returns the matched
/// *fixup* name (e.g. `"mcount"`).
///
/// `pub` for the commit seam (see [`target_fixup_map`]).
pub fn call_fixup_name_for_function<'a>(
    func_name: &str,
    map: &'a [(String, String)],
) -> Option<&'a str> {
    let name = func_name
        .strip_prefix(LIB_CONFLICT_PREFIX)
        .unwrap_or(func_name);
    // Probe order: bare name, then one leading underscore, then two — faithful to
    // the Java retries (a cspec `<target name="__fentry__">` must match a function
    // installed as `fentry` or `_fentry` or `__fentry__`).
    for probe in [name.to_string(), format!("_{name}"), format!("__{name}")] {
        if let Some((_, fixup)) = map.iter().find(|(target, _)| *target == probe) {
            return Some(fixup.as_str());
        }
    }
    None
}

/// Scan an object's function symbols for registered call-fixup targets,
/// emitting a [`CallFixupFact`](crate::pass::CallFixupFact) per match. The
/// **original installed name** is carried (not the matched fixup name), so the
/// commit's `query_global_function` resolves the FunctionSymbol that actually
/// exists and re-derives the fixup the same way (mirrors `noreturn`). Shared by
/// [`AnalysisPass::run`] and the unit tests.
fn scan_call_fixups(file: &object::File, bytes: &[u8], arch: &Architecture) -> AnalysisOutput {
    let mut out = AnalysisOutput::default();
    // Format-agnostic (PR-10): a cspec `<callfixup>` `<target>` is a function NAME
    // (`mcount`/`__fentry__`/`__x86_indirect_thunk_*`), matched against the object's
    // FUNC symbols — neutral data on every format. The map comes from the loaded
    // arch's cspec (the Windows cspec ships its own fixups), so this fires on a
    // PE/Mach-O whose toolchain emitted a fixup'd stub, with no format branch.
    let map = fixup_map(arch, false);
    if map.is_empty() {
        return out;
    }
    let mut seen = std::collections::HashSet::new();
    // The same FUNC streams the loader installs as FunctionSymbols (a `-pg`
    // `mcount` may be a `.symtab` FUNC, a weak symbol, or a `.dynsym` import);
    // both streams are scanned, with version suffixes stripped (`mcount@GLIBC…`),
    // exactly as `noreturn.rs` does. A relocatable object's undefined symbols
    // carry no type (a kernel module's `__fentry__` and `__x86_return_thunk` are
    // `NOTYPE UND`); the loader binds each one a call reaches as an extern
    // function, so those are scanned too.
    for sym in file.symbols().chain(file.dynamic_symbols()) {
        let untyped_extern = sym.is_undefined() && sym.kind() == SymbolKind::Unknown;
        if sym.kind() != SymbolKind::Text && !untyped_extern {
            continue;
        }
        let Ok(n) = sym.name() else { continue };
        let Ok(n) = String::from_utf8(crate::loader::elf_plt::strip_version(n.as_bytes())) else {
            continue;
        };
        if call_fixup_name_for_function(&n, &map).is_some() && seen.insert(n.clone()) {
            out.call_fixups.push(crate::pass::CallFixupFact {
                func_name: n,
                addr: None,
            });
        }
    }
    // A Mach-O import is a `__stubs` entry (and a pointer slot) the loader names
    // after the symbol without its leading underscore; the FunctionSymbol there
    // keeps its `sub_` name under that alias, so the fact carries the address.
    if file.format() == object::BinaryFormat::MachO {
        for imp in crate::loader::macho_stubs::resolve_macho_imports(file, bytes) {
            if imp.kind != crate::loader::format::ImportSymKind::Import {
                continue;
            }
            let Ok(n) = String::from_utf8(imp.name) else {
                continue;
            };
            if call_fixup_name_for_function(&n, &map).is_some() {
                out.call_fixups.push(crate::pass::CallFixupFact {
                    func_name: n,
                    addr: Some(imp.addr),
                });
            }
        }
    }
    out
}

/// Port of `CallFixupAnalyzer` (the install half): tag every program function
/// whose name matches a cspec call-fixup `<target>` so the engine applies that
/// fixup at flow time. Ghidra ships it default-on (`setDefaultEnablement(true)`,
/// CallFixupAnalyzer.java:51), so it is always on.
#[derive(Clone, Copy, Default)]
pub struct CallFixupPass;

impl AnalysisPass for CallFixupPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "callfixup"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = scan_call_fixups(ctx.file, ctx.bytes, ctx.arch);
        msvcftolsig::scan(ctx.file, &mut out);
        msvcarithsig::scan(ctx.file, &mut out);
        thumb1casesig::scan(ctx.file, &mut out);
        armgscookiesig::scan(ctx.file, &mut out);
        out
    }
}

#[cfg(test)]
mod tests;
