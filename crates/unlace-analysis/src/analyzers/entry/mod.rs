//! Function-entry / function-start discovery for stripped binaries — the unlace
//! analog of Ghidra's entry-point + function-start analyzers, fused with the
//! `.eh_frame` FDE oracle into ONE additive discovery pass.
//!
//! **Multi-format (PR-12+13):** the ELF oracles below are the original core;
//! [`run`](EntryDiscoveryPass::run) / [`collect_entries`] now **dispatch on the
//! object format** (the `ObjectFormat` seam), running the PE analogs
//! (`.pdata`/TLS/entry — [`pe_entry`]) for a PE and the Mach-O analogs
//! (`LC_FUNCTION_STARTS`/`LC_MAIN`/`__mod_init_func` — [`macho_entry`]) for a
//! Mach-O, so a stripped PE/Mach-O recovers its functions too. The ELF oracles
//! stay unchanged and the PE/Mach-O oracles are no-ops on ELF; the arch-specific
//! oracles (4: libc-start, 5: prologue patterns) are reused where applicable.
//!
//! Ghidra recovers function entries with several cooperating analyzers; this
//! pass ports the **feasible subset** of each (the analyzer tier has only the
//! parsed object — no disassembled Listing / PseudoDisassembler — so the deeply
//! Listing-coupled parts are a documented LOSS, mirroring the same wall
//! `loader/noreturn.rs` documents for the "Discovered" no-return analyzer):
//!
//! - `EntryPointAnalyzer.java` ("Disassemble Entry Points") — disassembles every
//!   *external entry point* the ELF loader seeded (the ELF `e_entry`, `DT_INIT`/
//!   `DT_FINI`, and the `INIT_ARRAY`/`FINI_ARRAY` pointer tables). We extract
//!   those entry addresses directly from the ELF (oracles 1+2 below) — the byte
//!   that Ghidra disassembles into a function.
//! - `ExternalEntryFunctionAnalyzer.java` ("External Entry References") — turns
//!   each external-entry-point-with-code into a function. The commit seam's
//!   `out.entries` path (`engine.rs::commit_analysis_output` step 2: `name_function`,
//!   `add_function`, `register_symbol`) is exactly this step, so the pass need
//!   only emit the VMAs.
//! - `FunctionStartAnalyzer.java` ("Function Start Search") — the prologue
//!   byte-pattern matcher (`DittedBitSequence`). We port the bit matcher
//!   (`DittedBitSequence.initFromDittedStringData`/`isMatch`,
//!   DittedBitSequence.java:365,218) and a *minimal* vendored set of the bare
//!   `<funcstart/>` x86-64 gcc prologue sequences (oracle 5). The `after="defined"`
//!   / `validcode="N"` post-rules need a PseudoDisassembler we do not have —
//!   dropped as a documented LOSS.
//! - `GccExceptionAnalyzer.java` + `ehFrame/{Cie,FrameDescriptionEntry}.java`
//!   (the `.eh_frame` FDE `pcBegin` decode, scoped to FDE-start extraction —
//!   NOT full CFI/LSDA) — oracle 3, the highest-value oracle for C/C++ binaries:
//!   every FDE's initial-location is a function start.
//!
//! The pure core is [`collect_entries`]: it unions five oracles, dedups, and
//! skips any VMA already covered by a real funcsym (`.symtab`/`.dynsym` defined
//! FUNC + PLT stubs) so the pass only ever *adds* unnamed function starts.
//! Every emitted VMA is validated to fall inside an executable section.
//!
//! ## Oracles (unioned, deduped, funcsym-skipped)
//!
//! 1. **ELF entry point** (`e_entry`) — `EntryPointAnalyzer` external entry.
//! 2. **`DT_INIT`/`DT_FINI` + `DT_INIT_ARRAY`/`DT_FINI_ARRAY`** pointer tables —
//!    the loader-seeded external entry points (`ElfProgramBuilder`). These carry
//!    Ghidra-faithful **names** through the `entry_names` overlay (`_INIT_<i>` /
//!    `_FINI_<i>` per array element, `_DT_INIT`/`_DT_FINI` for the single tags) so
//!    the commit seam names them like `ElfProgramBuilder.createDynamicEntryPoints`
//!    instead of the generic `sub_<addr>`; the naming is additive and never changes
//!    which VMAs are discovered.
//! 3. **`.eh_frame` FDE `pcBegin`** addresses — [`scan_eh_frame_starts`].
//! 4. **`_start`→`main` libc-start idiom** (x86-64 / AArch64 / ARM / RISC-V): the
//!    arg-setup instructions that load `main` into the platform's first integer-arg
//!    register right before the `__libc_start_main` call. x86-64 carries `main` as
//!    a PC-relative immediate (`lea rdi,[rip+disp]`); the PIE crt1 of AArch64/ARM/
//!    RISC-V loads it *indirectly* from a GOT slot bearing an `R_*_RELATIVE`
//!    relocation whose target is `main`. The disassembly-free stand-in for the
//!    general call-target sweep, which is infeasible at the analyzer tier (no
//!    Listing) — we recover the single highest-value call target.
//! 5. **Prologue byte patterns** (x86-64 gcc): the `FunctionStartAnalyzer` port,
//!    a conservative subset.
//!
//! ## Scope / LOSS
//!
//! - General undirected call-target sweep is infeasible at the analyzer tier (no
//!   Listing) — substituted by the `_start`→`main` idiom (oracle 4) + prologue
//!   patterns (oracle 5).
//! - The `after="defined"` / `validcode` pattern post-rules are dropped (no
//!   PseudoDisassembler); only bare `<funcstart/>` patterns are ported.
//! - Oracle 4 (`_start`→`main`) covers x86-64 + AArch64 + ARM/Thumb + RISC-V
//!   (Increment 23). MIPS/PPC `_start` idioms are a follow-up (those arches no-op).
//!   Oracle 5 (prologue patterns) remains **x86-64-only** in v1 (the
//!   patternconstraints.xml for ARM/AARCH64/MIPS/PPC are a follow-up).
//!   Oracles 1–3 are arch-independent.
//! - Static-image base-0 PIE assumption for array-pointer / absptr decode: unlace's
//!   `ObjectLoadImage` loads at the file's native vmas and never rebases, so the
//!   AbstractDwarfEHDecoder image-base adjustment is identically 0.

use object::read::{Object, ObjectSection, ObjectSegment, ObjectSymbol};
use object::{SectionKind, SymbolKind};

use crate::loader::format::FormatKind;
use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, ContextPaint, Phase};

pub mod armlibcmain;
pub mod elfmain;
pub mod entrymainproto;
pub mod machomain;
pub mod unwindinfo;
// (unlace `machoehframe`) Mach-O `__eh_frame` FDE function starts.
pub mod armexidx;
pub mod coldentry;
pub mod cortexmvectors;
pub mod ehcold;
pub mod fdeinterior;
mod initterm;
pub mod itaniumeh;
mod macho_entry;
pub mod machoehframe;
pub mod mfcmsgmap;
pub mod msvceh;
pub mod msvcfuncinfo;
pub mod msvcptrentry;
pub mod msvcseh;
pub mod patterns;
pub mod pdatainterior;
mod pe_entry;
pub mod pemain;
pub mod pereloccode;

// ===========================================================================
// The image entry point, as a virtual address
// ===========================================================================

/// The image's declared entry point as a **virtual address**, or `None` when the
/// format declares none.
///
/// `object`'s `File::entry()` returns the raw load-command/header field, which is
/// already a VMA for ELF (`e_entry`), for PE (`AddressOfEntryPoint`, rebased by
/// `object`) and for a Mach-O `LC_UNIXTHREAD` (the thread state's PC) — but is a
/// `__TEXT`-relative **file offset** for `LC_MAIN`, the modern Mach-O entry. The
/// VMA there is `__TEXT.vmaddr + entryoff` ([`macho_entry::macho_main_entry_vma`],
/// which answers only for `LC_MAIN` and so leaves `LC_UNIXTHREAD` and dylibs to
/// the raw field rather than double-counting the segment base).
///
/// Anything that REPORTS the entry, or roots a reachability walk at it, wants this
/// rather than `entry()`: on an `LC_MAIN` image the raw field is an offset into the
/// file that names no function (`0x1ce0` where `main` is at `0x100001ce0`).
///
/// A `0` entry is reported as `None` — a relocatable declares no entry, and `0` is
/// a real address there.
pub fn image_entry_vma(file: &object::File, bytes: &[u8]) -> Option<u64> {
    macho_entry::macho_main_entry_vma(bytes).or(match file.entry() {
        0 => None,
        vma => Some(vma),
    })
}

/// The container's entry as a CODE address: on 32-bit ARM the low bit is
/// Thumb state, not part of the address, so it is folded off and reported
/// separately, and a PowerPC64 ELFv1 entry names a function descriptor, so
/// its validated code word is used. This container-derived hint uses the
/// effective architecture, because the neutral parser leaves the ARM PE
/// machine words `Unknown`. Discovery with a selected decoder uses
/// `collect_entries_for_language`.
pub fn image_code_entry(file: &object::File, bytes: &[u8]) -> Option<(u64, bool)> {
    let vma =
        crate::loader::elfv1::Descriptors::read(file).code_address(image_entry_vma(file, bytes)?);
    let arm =
        crate::loadimage_object::effective_architecture(file, bytes) == object::Architecture::Arm;
    Some(if arm {
        (vma & !1, vma & 1 != 0)
    } else {
        (vma, false)
    })
}

// ===========================================================================
// The pass
// ===========================================================================

/// Port of the entry-point + function-start + `.eh_frame`-FDE analyzers, fused:
/// emit discovered function-entry VMAs into [`AnalysisOutput::entries`].
pub struct EntryDiscoveryPass;

impl AnalysisPass for EntryDiscoveryPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "entry_disc"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = AnalysisOutput::default();
        // Format-dispatched (PR-12/13): ELF runs the eh_frame/dynamic oracles, PE
        // the `.pdata`/TLS/entry oracles, Mach-O the `LC_FUNCTION_STARTS`/`LC_MAIN`
        // oracles. An unsupported format yields an empty output. The oracle
        // *selection* lives in `collect_entries`; here we only gate the whole pass
        // off for formats with no entry oracle at all. Additive contract: never
        // fail — an empty output on any anomaly.
        if !matches!(
            crate::loader::format::detect(ctx.file).map(|f| f.kind()),
            Ok(FormatKind::Elf | FormatKind::Pe | FormatKind::MachO)
        ) {
            return out;
        }
        out.entries = collect_entries_for_language(ctx.file, ctx.bytes, ctx.arch.get_description());
        // ARM/Thumb: a discovered `main` whose libc-start GOT pointer had the
        // Thumb LSB set needs a `TMode=1` decode-mode paint at its (even) entry —
        // this stripped binary carries no `$t` mapping symbol for `arm_markers` to
        // paint from, so without it the engine decodes the Thumb body as A32 and
        // emits a degenerate function. The exact analog of `arm_markers`'
        // STT_FUNC-LSB → `TMode=1` paint, derived here from the GOT pointer LSB.
        out.context_paints = thumb_entry_paints(ctx.file);
        // ARM Cortex-M: once a hardware vector table is confirmed, the whole image
        // is Thumb-only (ARMv6/7/8-M has no A32 state), so region-paint `TMode=1`
        // across every executable section. Per-entry paints are NOT enough here — a
        // Thumb `BL` does not `globalset` the callee's decode mode, so a `main`
        // reached only through the reset→main call tree would still decode as A32
        // without the region paint. Empty on any non-Cortex-M ARM object (and every
        // non-ARM arch); see `cortexm_thumb_paints`.
        out.context_paints
            .extend(cortexm_thumb_paints(ctx.file, false));
        // ARM EHABI: the `.ARM.exidx` functions known to be Thumb.
        out.context_paints.extend(armexidx::thumb_paints(ctx.file));
        // Ghidra-faithful names for the dynamic INIT/FINI entries (oracle 2 only),
        // restricted to the VMAs that actually survived into `out.entries` (a named
        // entry already covered by a funcsym is filtered out above, so its name is
        // moot). The commit seam consults this overlay; entries absent from it keep
        // the generic `sub_<addr>` name. See `AnalysisOutput::entry_names`.
        out.entry_names = collect_entry_names(ctx.file, &out.entries);
        out
    }
}

/// (unlace) `.eh_frame` LSDA landing-pad discovery — the GccExceptionAnalyzer full
/// `.gcc_except_table` markup, factored out of the always-on entry-discovery pass
/// as its OWN gated pass (id `eh_frame_full`, default-OFF). It emits each
/// exception-handler landing pad (catch/cleanup block, reached only by the
/// unwinder) as a discovered function entry — net-new code targets the FDE-pcBegin
/// / prologue / libc-start oracles never see (a landing pad sits mid-function).
///
/// Like every other analysis pass it RUNS at load (the facts are cheap to compute
/// and are stashed per-pass); the **commit** is gated by `--option eh_frame_full
/// on` (`engine.rs::analysis_pass_enabled` → `arch.unlace_options.get::<unlace_decomp::analysisgates::EhFrameFull>().0`). So a
/// default run computes but never COMMITS the landing pads, and the discovery set
/// is byte-identical to the FDE-pcBegin-only behavior — every parity gate is
/// structurally untouched. Output-changing (adds entries) ⇒ default-off.
///
/// CFI (the `DW_CFA_*` call-frame instructions) is INHERITED, not rebuilt: unlace's
/// engine recovers the stack frame from the code (S5 type inference + S7 frame
/// analysis), so the CFA/saved-register rules add nothing at the decompiler tier.
pub struct EhFrameLsdaPass;

impl AnalysisPass for EhFrameLsdaPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "eh_frame_full"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = AnalysisOutput::default();
        // ELF-only (the `.eh_frame`/`.gcc_except_table` exception model). Additive
        // contract: an empty output on any anomaly, never a failure.
        if !matches!(
            crate::loader::format::detect(ctx.file).map(|f| f.kind()),
            Ok(FormatKind::Elf)
        ) {
            return out;
        }
        // The filtered landing-pad entries (exec-section + funcsym-skip + dedup,
        // the SAME gates every other oracle applies). Empty on a non-exception
        // binary (no `.gcc_except_table`), so the pass is a strict no-op there.
        out.entries = collect_landing_pad_entries(ctx.file, ctx.bytes);
        out
    }
}

/// (unlace) The **full upstream byte-pattern function-start** pass — the faithful
/// port of Ghidra's `FunctionStartAnalyzer` over the entire vendored pattern
/// corpus (`entry/patterns/*.xml`, `<patternpairs>` pre/post + bare
/// `<funcstart/>`), as a *separate*, default-**OFF** analysis pass.
///
/// ## Why a separate, DEFERRED pass (not an extra oracle inside `EntryDiscoveryPass`)
///
/// `EntryDiscoveryPass` runs at **bootstrap** (`run_default_analyses_per_pass`),
/// while the `--option funcstart_patterns on|off` flag is applied **later**
/// (before `read symbols`). A pass cannot read its own gate at run time, so this
/// is its own `AnalysisPass` with `id() == "funcstart_patterns"` and an
/// `analysis_funcstart_patterns` gate that defaults **off**, keeping every
/// default-off run byte-identical (the parity contract).
///
/// Unlike the always-on passes it is **not** registered in `passes_for`: a
/// whole-image sweep over the vendored pattern corpus is far too expensive to run
/// and then discard, which is what a load-time registration did on every binary
/// and every subcommand. It runs instead from the console's deferred commit via
/// `passes::run_deferred_entry_passes`, where the flag is finally in effect — the
/// same deferral the Listing consumers use. Output-neutral: the commit boundary's
/// entry arm is idempotent by address and resolves names from the fully merged
/// `entry_names`, so merge position does not change what installs.
///
/// ## What it adds
///
/// The existing oracle 5 (`prologue_pattern_starts`, always-on inside
/// `EntryDiscoveryPass`) matches a hand-written **minimal** set of three bare
/// x86-64 prologues at any aligned offset. This pass instead applies the **full**
/// upstream pattern set with the upstream **pre/post** semantics: a candidate is a
/// function start iff a postpattern matches at it AND a prepattern matches the
/// bytes immediately before it (after a RET/JMP/NOP/…). That gate makes the much
/// larger pattern set both broader (every gcc/clang/MSVC prologue shape) and more
/// precise (the prepattern context). x86/x86-64 are the headline; AArch64/ARM/
/// RISC-V/MIPS/PPC sets are vendored + parsed too (their `<patternpairs>` use the
/// identical mechanism). See [`patterns`].
///
/// The discovered VMAs are emitted into [`AnalysisOutput::entries`] exactly like
/// `EntryDiscoveryPass`, so the same commit seam (`commit_analysis_output` step 2:
/// `name_function` + `add_function`, idempotent against the funcsym stream + any
/// already-discovered entry) names + adds each as `sub_<addr>`. Purely additive:
/// it only ever *adds* new, unnamed starts.
pub struct FuncStartPatternPass;

impl AnalysisPass for FuncStartPatternPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "funcstart_patterns"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = AnalysisOutput::default();
        // Only ELF/PE/Mach-O carry executable sections we sweep; the same format
        // gate `EntryDiscoveryPass` uses. Additive: never fail.
        if !matches!(
            crate::loader::format::detect(ctx.file).map(|f| f.kind()),
            Ok(FormatKind::Elf | FormatKind::Pe | FormatKind::MachO)
        ) {
            return out;
        }
        let starts = full_pattern_starts_with_mode(ctx.file);
        let explicit_isa = ctx.arch.input_arm_isa_override;
        out.context_paints = starts
            .iter()
            .filter(|_| !explicit_isa)
            .filter(|&&(_, mode)| mode == Some(1))
            .map(|&(addr, _)| crate::pass::ContextPaint {
                addr,
                end: None,
                var: "TMode",
                value: 1,
            })
            .collect();
        out.entries = starts.into_iter().map(|(vma, _)| vma).collect();
        out
    }
}

/// Discover function starts via the full vendored pattern set, filtered to the
/// genuinely-new starts (inside an executable section, not already a funcsym, not
/// inside the extent a sized function symbol declares, not the
/// `e_entry`/dynamic/eh-frame/idiom entries `EntryDiscoveryPass` already emits).
/// The returned vec is sorted/deduped.
///
/// This is the testable seam (drive it over fixture bytes); it parallels
/// [`collect_entries`] but is the *full-pattern* superset, gated default-off.
pub fn full_pattern_starts(file: &object::File) -> Vec<u64> {
    full_pattern_starts_with_mode(file)
        .into_iter()
        .map(|(vma, _)| vma)
        .collect()
}

/// [`full_pattern_starts`], with the `TMode` value the matching ARM pattern
/// pair sets (`<setcontext name="TMode">`), so a Thumb start decodes as Thumb.
pub fn full_pattern_starts_with_mode(file: &object::File) -> Vec<(u64, Option<u32>)> {
    let Some(set) = patterns::for_object(file) else {
        return Vec::new();
    };
    let execs = executable_sections(file);
    let funcsyms = existing_function_addrs_for_file(file);
    // A `<possiblefuncstart/>` start is taken only on an ELF and only outside
    // every FDE body: there the unwind table describes the functions it covers,
    // and a Mach-O or PE image's own function tables (LC_FUNCTION_STARTS,
    // .pdata) already list what such a weak hint could add.
    let weak_ok = set.only_weak() && matches!(file.format(), object::BinaryFormat::Elf);
    let bodies = if weak_ok {
        fdeinterior::scan_fde_bodies(file)
    } else {
        Vec::new()
    };
    let sized = sized_function_bodies(file);

    let mut cand: Vec<(u64, Option<u32>)> = Vec::new();
    for (addr, _hi, data) in &execs {
        for hit in set.scan_hits(*addr, data) {
            if hit.weak && (!weak_ok || fdeinterior::is_interior(&bodies, hit.vma)) {
                continue;
            }
            cand.push((hit.vma, hit.mode));
        }
    }

    let mut out: Vec<(u64, Option<u32>)> = cand
        .into_iter()
        .filter(|&(vma, _)| {
            vma != 0
                && in_executable_section(&execs, vma)
                && funcsyms.binary_search(&vma).is_err()
                && !inside_body(&sized, vma)
        })
        .collect();
    out.sort_unstable_by_key(|&(vma, _)| vma);
    out.dedup_by_key(|&mut (vma, _)| vma);
    out
}

/// The extents of every defined function symbol that states its size, as
/// `(start, furthest end of any extent starting at or before it)` sorted by
/// start. A prologue shape inside one (a shrink-wrapped prologue after an early
/// `jr ra`, a loop head) is that function's own code.
pub(crate) fn sized_function_bodies(file: &object::File) -> Vec<(u64, u64)> {
    let mut out: Vec<(u64, u64)> = file
        .symbols()
        .chain(file.dynamic_symbols())
        .filter(|sym| sym.kind() == SymbolKind::Text && !sym.is_undefined() && sym.size() != 0)
        .map(|sym| {
            let start = thumb_masked(file, sym.address());
            (start, start.saturating_add(sym.size()))
        })
        .collect();
    out.sort_unstable();
    let mut reach = 0;
    for body in &mut out {
        reach = reach.max(body.1);
        body.1 = reach;
    }
    out
}

/// Every function start a Mach-O states in its load commands and exports
/// ([`macho_entry::macho_entry_candidates`]), sorted and deduplicated.
pub(crate) fn macho_function_starts(file: &object::File, bytes: &[u8]) -> Vec<u64> {
    let mut out = macho_entry::macho_entry_candidates(file, bytes);
    out.sort_unstable();
    out.dedup();
    out
}

/// Is `vma` strictly inside one of the extents [`sized_function_bodies`] lists?
pub(crate) fn inside_body(bodies: &[(u64, u64)], vma: u64) -> bool {
    let below = bodies.partition_point(|&(start, _)| start < vma);
    below > 0 && vma < bodies[below - 1].1
}

/// The function bodies the image states, sorted and merged so each entry
/// reaches as far as any body starting at or before it: its sized function
/// symbols and, on ELF, the `.eh_frame` FDEs that describe one function
/// ([`fdeinterior::eligible_fde_bodies`]). A point strictly inside one
/// ([`inside_body`]) is code of that function, not a function of its own.
pub(crate) fn stated_function_bodies(file: &object::File, bytes: &[u8]) -> Vec<(u64, u64)> {
    let mut out = sized_function_bodies(file);
    out.extend(fdeinterior::eligible_fde_bodies(file, bytes));
    out.sort_unstable();
    let mut reach = 0;
    for body in &mut out {
        reach = reach.max(body.1);
        body.1 = reach;
    }
    out
}

/// `existing_function_addrs` over a parsed `object::File` only (the pattern pass
/// has no separate `bytes` slice handy for the PE/Mach-O `resolve_imports` re-parse
/// — but those formats' funcsym addresses are already covered by the symbol/PLT
/// scan here, and the commit seam's `find_function` overlap check is the final
/// idempotency guard). Sorted/deduped to support `binary_search`.
fn existing_function_addrs_for_file(file: &object::File) -> Vec<u64> {
    let mut out: Vec<u64> = Vec::new();
    for sym in file.symbols().chain(file.dynamic_symbols()) {
        if sym.kind() != SymbolKind::Text {
            continue;
        }
        let addr = thumb_masked(file, sym.address());
        if addr != 0 {
            out.push(addr);
        }
    }
    out.sort_unstable();
    out.dedup();
    out
}

// ===========================================================================
// The pure core
// ===========================================================================

/// Discover function-entry VMAs from the parsed object: union the five oracles,
/// keep only addresses inside an executable section, drop any already covered by
/// a real funcsym, and dedup. The returned vec is sorted (stable output).
///
/// This is the testable seam (drive it over fixture bytes).
pub fn collect_entries(file: &object::File, bytes: &[u8]) -> Vec<u64> {
    let arm =
        crate::loadimage_object::effective_architecture(file, bytes) == object::Architecture::Arm;
    collect_entries_with_pe_mode(file, bytes, arm)
}

/// Discover entries using the selected decoder's PE address convention. The
/// container-only wrapper retains automatic mode for callers without a decoder.
pub(crate) fn collect_entries_for_language(
    file: &object::File,
    bytes: &[u8],
    language: &str,
) -> Vec<u64> {
    collect_entries_with_pe_mode(
        file,
        bytes,
        crate::loadimage_object::is_arm32_language(language),
    )
}

fn collect_entries_with_pe_mode(file: &object::File, bytes: &[u8], pe_arm: bool) -> Vec<u64> {
    let execs = executable_sections(file);
    let funcsyms = existing_function_addrs(file, bytes);

    let kind = crate::loader::format::detect(file).map(|f| f.kind()).ok();
    let mut cand: Vec<u64> = Vec::new();
    // The one candidate the exec-section gate below is not allowed to reject
    // (PE only; see the arm that sets it).
    let mut exempt: Option<u64> = None;

    match kind {
        // ELF: e_entry, the dynamic INIT/FINI tables, .eh_frame FDEs, and the
        // libc-start idiom (the original oracles, unchanged).
        Some(FormatKind::Elf) => {
            // Oracle 1: ELF entry point (e_entry). EntryPointAnalyzer external entry.
            let entry = file.entry();
            if entry != 0 {
                // ARM/Thumb: `e_entry` carries the Thumb mode bit in bit 0 (a Thumb
                // `_start`/reset vector is recorded at `addr|1`); the function bytes
                // live at the EVEN VMA — the odd address is undecodable. Seed the
                // real instruction (the raw odd `entry` is kept for the libc-start
                // idiom below, whose helpers mask internally). On a stripped
                // Cortex-M image this ALSO unlocks the reset→main call tree: the
                // even reset vector decodes (with the Thumb region paint from
                // `cortexm_thumb_paints`) and the recursive-descent walk follows
                // its `BL`s. Strictly-better on any ARM object; unchanged elsewhere.
                if let Some((seed, _)) = image_code_entry(file, bytes) {
                    cand.push(seed);
                }
            }
            // Oracle 2: DT_INIT/DT_FINI + INIT_ARRAY/FINI_ARRAY pointer tables.
            cand.extend(dynamic_entry_points(file));
            // Oracle 3: .eh_frame FDE pcBegin addresses.
            cand.extend(scan_eh_frame_starts(file));
            // Oracle 4: _start -> main via the libc-start idiom (arch-dispatched).
            if let Some(main) = libc_start_main_target(file, entry) {
                cand.push(main);
            }
            // Oracle 6 (ARM Cortex-M): the reset + exception/IRQ handler pointers
            // from an empirically-detected Cortex-M vector table. A stripped
            // bare-metal firmware image carries no symbols, no `.eh_frame`, no libc
            // idiom, and no `$t` markers — the hardware vector table at the start of
            // the code section is the only entry source. ARM-gated; a strict no-op
            // on any ARM object that does not present the exact table signature
            // (see `cortexm_vector_entries` / `cortexm_vector_table`).
            if file.architecture() == object::Architecture::Arm {
                cand.extend(cortexm_vector_entries(file, false));
                // Oracle 3 on ARM32: the `.ARM.exidx` function starts, the EHABI
                // counterpart of the FDE `pcBegin`s (an ARM ELF has no `.eh_frame`).
                cand.extend(armexidx::starts(file));
            }
        }
        // PE: entry (AddressOfEntryPoint+ImageBase), `.pdata` RUNTIME_FUNCTION
        // begins (the `.eh_frame` analog), TLS callbacks, and exports (PR-12).
        Some(FormatKind::Pe) => {
            // Normalize before filtering and naming, using the selected decoder
            // when available: a non-ARM override can have a real odd entry.
            let code_address = |vma: u64| if pe_arm { vma & !1 } else { vma };
            cand.extend(
                pe_entry::pe_entry_candidates(file, bytes, &execs)
                    .into_iter()
                    .map(code_address),
            );
            // (unlace) The header page is no section, so no section flag ever spoke
            // for the bytes in it: `AddressOfEntryPoint` is the image's only
            // statement about them, and a packer that lays its stub in the slack
            // after the section table makes that statement. An entry inside a
            // section the image flags non-executable is deliberately NOT exempt
            // -- there the flag IS a statement, and unlace answers it by naming the
            // cause and the `--define-function` that overrides it
            // (`docs/re-needs/batch-silently-omits-explicitly.md`).
            exempt = crate::loader::pe_headers::header_entry(file, bytes).map(code_address);
        }
        // Mach-O: entry (`LC_MAIN`/`LC_UNIXTHREAD`), `LC_FUNCTION_STARTS` (the
        // richest, stripped-surviving source), `__mod_init_func`, and exports
        // (PR-13).
        Some(FormatKind::MachO) => {
            cand.extend(macho_entry::macho_entry_candidates(file, bytes));
        }
        // COFF objects (pre-link) and unknown formats: no entry oracle.
        _ => {}
    }

    // Oracle 5: prologue byte patterns — x86-64-only, format-neutral (it scans
    // the executable-section bytes). The vendored gcc pattern subset; the
    // ARM/AARCH64/MIPS/PPC patternconstraints are a follow-up.
    if file.architecture() == object::Architecture::X86_64 {
        cand.extend(prologue_pattern_starts(&execs));
    }

    // Keep only plausible code addresses (inside an executable section, or the one
    // address `exempt` names), drop any already named by a funcsym, dedup, sort.
    let mut out: Vec<u64> = Vec::new();
    for vma in cand {
        if vma == 0 {
            continue;
        }
        if !in_executable_section(&execs, vma) && Some(vma) != exempt {
            continue;
        }
        if funcsyms.binary_search(&vma).is_ok() {
            continue;
        }
        out.push(vma);
    }
    out.sort_unstable();
    out.dedup();
    out
}

/// Ghidra-faithful names for the *dynamic* INIT/FINI entries (oracle 2), as an
/// `(addr, name)` overlay the commit seam consults. Faithful to
/// `ElfProgramBuilder.createDynamicEntryPoints`:
///
/// - single `DT_INIT` / `DT_FINI` → `_DT_INIT` / `_DT_FINI` (Ghidra's
///   `"_" + dynamicEntryType.name`),
/// - each `DT_INIT_ARRAY` element `i` → `_INIT_<i>`,
/// - each `DT_FINI_ARRAY` element `i` → `_FINI_<i>`
///
/// (and `DT_PREINIT_ARRAY` element `i` → `_PREINIT_<i>` — the constant is wired
/// for faithfulness, but unlace's discovery does not currently emit PREINIT_ARRAY
/// entries, so none are produced here; adding PREINIT_ARRAY *discovery* is a
/// separate follow-up that would change the discovery set).
///
/// Only oracle 2 names anything (the other four oracles leave their entries
/// generic `sub_<addr>`). The result is filtered to `kept` — the VMAs that
/// actually survived [`collect_entries`]'s funcsym-skip/dedup — so a name for an
/// entry that was dropped (e.g. it duplicates a real funcsym) is never emitted.
/// This is purely additive: it never changes WHICH entries are discovered.
pub fn collect_entry_names(file: &object::File, kept: &[u64]) -> Vec<(u64, String)> {
    let mut out: Vec<(u64, String)> = Vec::new();
    for (addr, name) in dynamic_entry_names(file) {
        if kept.contains(&addr) {
            out.push((addr, name));
        }
    }
    // A VMA can be named by at most one dynamic source (INIT vs FINI tables are
    // disjoint pointer arrays); dedup defensively to keep the overlay a clean map.
    out.sort_by_key(|a| a.0);
    out.dedup_by(|a, b| a.0 == b.0);
    out
}

// ===========================================================================
// Section / funcsym helpers
// ===========================================================================

/// `(address, address+size, data)` for every executable section. SHF_EXECINSTR
/// or the high-level `SectionKind::Text` (`.text`/`.init`/`.fini`/`.plt`). Used
/// both as the prologue-sweep target and the "is this VMA plausible code?" oracle.
pub(crate) fn executable_sections(file: &object::File) -> Vec<(u64, u64, Vec<u8>)> {
    let mut out = Vec::new();
    for sec in file.sections() {
        if !is_executable(&sec) {
            continue;
        }
        let addr = sec.address();
        let size = sec.size();
        if size == 0 {
            continue;
        }
        let data = sec.data().map(|d| d.to_vec()).unwrap_or_default();
        out.push((addr, addr.saturating_add(size), data));
    }
    // (unlace) An image with NO section table at all presents no sections, so every
    // oracle below would reject its own entry point as "not plausible code" and
    // discovery would return nothing on a file the loader mapped perfectly well
    // (`sstrip`, and the corrupt-`e_shoff` case the loader now tolerates -- see
    // `crate::loader::elf_shdr`). The program header is the other, independent
    // description of the same image, so fall back to it.
    if out.is_empty() && file.sections().next().is_none() {
        let segs = executable_segments(file);
        if !is_packer_stub(&segs) {
            out = segs;
        }
    }
    out
}

/// Does `sec` hold machine code? Per format (PR-12/13): ELF `SHF_EXECINSTR`, PE
/// COFF `IMAGE_SCN_MEM_EXECUTE`, Mach-O instruction attributes, each falling back
/// to the neutral `SectionKind::Text` (`.text`/`__text`/`.plt`/…).
pub(crate) fn is_executable(sec: &object::Section) -> bool {
    const SHF_EXECINSTR: u64 = 0x4;
    const S_ATTR_PURE_INSTRUCTIONS: u32 = 0x8000_0000;
    const S_ATTR_SOME_INSTRUCTIONS: u32 = 0x0000_0400;
    match sec.flags() {
        object::SectionFlags::Elf { sh_flags } => sh_flags & SHF_EXECINSTR != 0,
        object::SectionFlags::Coff { characteristics } => {
            characteristics & object::pe::IMAGE_SCN_MEM_EXECUTE != 0
        }
        object::SectionFlags::MachO { flags } => {
            flags & (S_ATTR_PURE_INSTRUCTIONS | S_ATTR_SOME_INSTRUCTIONS) != 0
                || sec.kind() == SectionKind::Text
        }
        _ => sec.kind() == SectionKind::Text,
    }
}

/// Do these load segments hold a packer stub rather than the program?
///
/// A UPX image is section-less exactly like a stripped one, but its `PF_X`
/// `PT_LOAD` is a decompressor wrapped around a compressed blob: discovering the
/// stub's handful of routines would bury the far more actionable answer unlace
/// already gives such an image -- "image appears UPX-packed; try `unlace unpack`",
/// which a run that discovers nothing is what produces. So decline the fallback
/// and leave that image exactly as it is today.
///
/// The `UPX!` magic is what `zero_discovery_error`'s own packer test looks for,
/// here restricted to the loaded stub. A false positive costs nothing: it only
/// withholds the fallback, which is precisely the behavior every section-less
/// image had before it existed.
fn is_packer_stub(segs: &[(u64, u64, Vec<u8>)]) -> bool {
    segs.iter()
        .any(|(_, _, data)| data.windows(4).any(|w| w == b"UPX!"))
}

/// `(address, address+size, data)` for every `PF_X` `PT_LOAD` segment -- the
/// program header's account of what the loader maps as code. The fallback
/// [`executable_sections`] uses when the section table is gone.
///
/// ELF-only by construction (a PE/Mach-O segment never carries `SegmentFlags::Elf`),
/// and empty for a relocatable object, which has no program headers -- both leave
/// the caller's behavior unchanged. Coarser than the section view: a `PT_LOAD`
/// that is `R E` also contains `.rodata` and the ELF header, so this widens the
/// "plausible code address" oracle to the whole read-execute mapping, which is
/// exactly the guarantee the loader itself works from.
pub(crate) fn executable_segments(file: &object::File) -> Vec<(u64, u64, Vec<u8>)> {
    // ELF program header flag: PF_X (the segment is executable).
    const PF_X: u32 = 0x1;

    let mut out = Vec::new();
    // `object`'s ELF segment iterator already yields only `PT_LOAD`.
    for seg in file.segments() {
        let object::SegmentFlags::Elf { p_flags } = seg.flags() else {
            continue;
        };
        if p_flags & PF_X == 0 || seg.size() == 0 {
            continue;
        }
        let addr = seg.address();
        let data = seg.data().map(|d| d.to_vec()).unwrap_or_default();
        out.push((addr, addr.saturating_add(seg.size()), data));
    }
    out
}

/// True if `vma` lands inside any executable section's `[address, address+size)`.
pub(crate) fn in_executable_section(execs: &[(u64, u64, Vec<u8>)], vma: u64) -> bool {
    execs.iter().any(|&(lo, hi, _)| vma >= lo && vma < hi)
}

/// (unlace) The *delta* between "the section header says executable" and "the loader
/// maps it executable": `(address, address+size, data)` for every allocated ELF
/// section that lies wholly inside a `PF_X` `PT_LOAD` segment yet does **not**
/// carry `SHF_EXECINSTR` — the sections [`executable_sections`] misses.
///
/// The program header is what the loader obeys: a section inside an `RWE`
/// `PT_LOAD` is executable memory whatever its `sh_flags` say. Bare-metal ARM
/// link scripts routinely leave the hardware vector table (`.isr_vector`) flagged
/// `WA` while placing it at the base of the single `RWE` load segment, which is
/// exactly the case [`cortexm_vector_table`] must be able to see.
///
/// ELF-only by construction (a PE/Mach-O `SegmentFlags` never matches, so the
/// result is empty), and empty for a relocatable object, which has no program
/// headers at all — both leave every caller's behavior unchanged.
pub(crate) fn phdr_executable_sections(file: &object::File) -> Vec<(u64, u64, Vec<u8>)> {
    // ELF program header flag: PF_X (the segment is executable).
    const PF_X: u32 = 0x1;
    // ELF section header flags: SHF_ALLOC (occupies memory at run time) and
    // SHF_EXECINSTR (already covered by `executable_sections`).
    const SHF_ALLOC: u64 = 0x2;
    const SHF_EXECINSTR: u64 = 0x4;

    // `object`'s ELF segment iterator already yields only `PT_LOAD`.
    let mut xsegs: Vec<(u64, u64)> = Vec::new();
    for seg in file.segments() {
        let object::SegmentFlags::Elf { p_flags } = seg.flags() else {
            continue;
        };
        if p_flags & PF_X == 0 || seg.size() == 0 {
            continue;
        }
        let addr = seg.address();
        xsegs.push((addr, addr.saturating_add(seg.size())));
    }
    if xsegs.is_empty() {
        return Vec::new();
    }

    let mut out = Vec::new();
    for sec in file.sections() {
        let object::SectionFlags::Elf { sh_flags } = sec.flags() else {
            continue;
        };
        if sh_flags & SHF_ALLOC == 0 || sh_flags & SHF_EXECINSTR != 0 {
            continue;
        }
        let addr = sec.address();
        let size = sec.size();
        if size == 0 {
            continue;
        }
        let end = addr.saturating_add(size);
        if !xsegs.iter().any(|&(lo, hi)| addr >= lo && end <= hi) {
            continue;
        }
        let data = sec.data().map(|d| d.to_vec()).unwrap_or_default();
        out.push((addr, end, data));
    }
    out
}

/// (unlace, issue #197) Fold the ARM/Thumb mode bit out of a **symbol** address.
///
/// On 32-bit ARM a Thumb function's ELF symbol stores the mode bit in bit 0 of
/// `st_value` (this repo's `arm_thumb_linked_le32` fixture records `compute` at
/// `0x100b9` and `_start` at `0x100d7`, while `objdump` shows both functions
/// starting at the even VMA); the odd address is not an instruction boundary at
/// all.  Oracle 1 already masks `e_entry` this way (`collect_entries`); this is
/// the same rule for the symbol-table stream, whose consumers were left unmasked:
///
/// * the raw odd VMA reached `listing_seeds` and became a `DiscoveredFunction`,
///   which `funcdisc_recursive` then re-emitted as a "discovered entry" —
///   the phantom `sub_100b9` that decompiles to an empty `void sub_100b9(void)`;
/// * and because this same vec is the funcsym-skip set `collect_entries` tests
///   against, a masked `e_entry` (`0x100d7` → `0x100d6`) failed to match the
///   *unmasked* `0x100d7` recorded here, so `_start` was re-emitted as a "new"
///   entry and picked up the generic `sub_100d6` alias.  Masking both sides
///   restores that comparison.
///
/// **Strictly gated to `Architecture::Arm` (32-bit).** x86 instructions are
/// byte-aligned, so an odd function address there is a genuine address — in-repo
/// fixtures have real x86-64 functions at `0x40071d` and `0x1357`, and masking
/// those would corrupt every x86 binary.  AArch64 is a distinct `object`
/// architecture with no Thumb state, so it is correctly excluded.  MIPS16 /
/// microMIPS use the same odd-address convention but need an `st_other` test as
/// well, so they are deliberately not folded in here (`mips_markers`).
pub(crate) fn thumb_masked(file: &object::File, addr: u64) -> u64 {
    if file.architecture() == object::Architecture::Arm {
        addr & !1
    } else {
        addr
    }
}

/// Sorted VMAs of every already-named function: `.symtab`/`.dynsym` *defined*
/// FUNC symbols (UND imports have `st_value == 0`) plus PLT import stubs. The
/// commit seam's `find_function` already no-ops a covered address, but skipping
/// these here keeps the emitted set to genuinely *new* starts.
pub(crate) fn existing_function_addrs(file: &object::File, bytes: &[u8]) -> Vec<u64> {
    let mut out: Vec<u64> = Vec::new();
    for sym in file.symbols().chain(file.dynamic_symbols()) {
        if sym.kind() != SymbolKind::Text {
            continue;
        }
        let addr = thumb_masked(file, sym.address());
        if addr != 0 {
            out.push(addr);
        }
    }
    // Import stubs, through the format seam (ELF: PLT/GOT). `bytes` is unused for
    // ELF; PE/Mach-O re-parse it inside their `resolve_imports`.
    for p in crate::loader::format::resolve_imports(file, bytes) {
        out.push(p.addr);
    }
    out.sort_unstable();
    out.dedup();
    out
}

// ===========================================================================
// Oracle 2: dynamic INIT/FINI + INIT_ARRAY/FINI_ARRAY
// ===========================================================================

// DT_* tags (elf.h). Values are vmas.
const DT_NULL: u64 = 0;
const DT_INIT: u64 = 12;
const DT_FINI: u64 = 13;
const DT_INIT_ARRAY: u64 = 25;
const DT_FINI_ARRAY: u64 = 26;
const DT_INIT_ARRAYSZ: u64 = 27;
const DT_FINI_ARRAYSZ: u64 = 28;

/// The loader-seeded external entry-point VMAs from the `.dynamic` table:
/// `DT_INIT`/`DT_FINI` (one each) plus every pointer in the `DT_INIT_ARRAY` /
/// `DT_FINI_ARRAY` tables (faithful to `ElfProgramBuilder` marking these as
/// external entry points). The address-only projection of
/// [`dynamic_entry_points_named`] (which also documents the table decode); the
/// Ghidra-faithful names ride the additive overlay (`dynamic_entry_names`).
pub(crate) fn dynamic_entry_points(file: &object::File) -> Vec<u64> {
    // The address-only projection of the named oracle. Discovery (WHICH VMAs) is
    // defined here; the names are an additive overlay (see `dynamic_entry_names`).
    dynamic_entry_points_named(file)
        .into_iter()
        .map(|(addr, _name)| addr)
        .collect()
}

/// The dynamic INIT/FINI names overlay (oracle 2): the `(addr, name)` pairs for
/// every entry [`dynamic_entry_points_named`] could name. See
/// [`collect_entry_names`] for the Ghidra naming.
fn dynamic_entry_names(file: &object::File) -> Vec<(u64, String)> {
    dynamic_entry_points_named(file)
        .into_iter()
        .filter_map(|(addr, name)| name.map(|n| (addr, n)))
        .collect()
}

/// The loader-seeded external entry points from the `.dynamic` table, each paired
/// with its Ghidra-faithful name (or `None` for the unnamed single-`DT_INIT`/
/// `DT_FINI` shape — see below). The *addresses* are the single source of truth
/// for discovery (`dynamic_entry_points` is exactly `.map(|(a,_)| a)`); the names
/// feed the additive overlay (`dynamic_entry_names`).
///
/// Faithful to `ElfProgramBuilder.createDynamicEntryPoints`:
///   - `DT_INIT`/`DT_FINI` → one entry each, named `_DT_INIT`/`_DT_FINI`
///     (Ghidra's single-entry `"_" + dynamicEntryType.name`),
///   - `DT_INIT_ARRAY`/`DT_FINI_ARRAY` → every nonzero pointer in the table, the
///     `i`-th named `_INIT_<i>`/`_FINI_<i>` (Ghidra's `baseName + i`).
///
/// The dynamic table is read from the `.dynamic` section bytes as `Elf{32,64}_Dyn`
/// (tag/val) pairs; the array bytes come from whichever section contains the array
/// vma (the static-image base-0 assumption: a PIE array pointer is already the
/// file vma, no load bias). A PowerPC64 ELFv1 pointer names a function descriptor
/// and is replaced by its validated code word.
fn dynamic_entry_points_named(file: &object::File) -> Vec<(u64, Option<String>)> {
    let mut out = dynamic_pointers_named(file);
    let pointers: Vec<u64> = out.iter().map(|(addr, _)| *addr).collect();
    let descriptors = crate::loader::elfv1::Descriptors::read_at(file, &pointers);
    for (addr, _) in &mut out {
        *addr = descriptors.code_address(*addr);
    }
    out
}

/// The raw `.dynamic` function pointers, before ELFv1 descriptor resolution.
pub(crate) fn dynamic_function_pointers(file: &object::File) -> Vec<u64> {
    dynamic_pointers_named(file)
        .into_iter()
        .map(|(addr, _)| addr)
        .collect()
}

fn dynamic_pointers_named(file: &object::File) -> Vec<(u64, Option<String>)> {
    let mut out: Vec<(u64, Option<String>)> = Vec::new();

    let Some(dynsec) = file.section_by_name(".dynamic") else {
        return out;
    };
    let Ok(data) = dynsec.data() else {
        return out;
    };
    let is64 = file.is_64();
    let le = file.is_little_endian();
    let entsz = if is64 { 16usize } else { 8usize };

    // Collect tag→val first (we need the *SZ partners for the array tags).
    let mut init_array: Option<u64> = None;
    let mut init_array_sz: u64 = 0;
    let mut fini_array: Option<u64> = None;
    let mut fini_array_sz: u64 = 0;

    let mut off = 0usize;
    while off + entsz <= data.len() {
        let (tag, val) = if is64 {
            (read_u64(&data[off..], le), read_u64(&data[off + 8..], le))
        } else {
            (
                read_u32(&data[off..], le) as u64,
                read_u32(&data[off + 4..], le) as u64,
            )
        };
        off += entsz;
        if tag == DT_NULL {
            break;
        }
        match tag {
            // Single DT_INIT/DT_FINI: Ghidra names these `_DT_INIT`/`_DT_FINI`
            // (createDynamicEntryPoints's `"_" + dynamicEntryType.name`). The VMA
            // is pushed unconditionally (byte-identical to the prior `out.push(val)`);
            // the name rides as the overlay.
            DT_INIT => out.push((val, Some("_DT_INIT".to_string()))),
            DT_FINI => out.push((val, Some("_DT_FINI".to_string()))),
            DT_INIT_ARRAY => init_array = Some(val),
            DT_INIT_ARRAYSZ => init_array_sz = val,
            DT_FINI_ARRAY => fini_array = Some(val),
            DT_FINI_ARRAYSZ => fini_array_sz = val,
            _ => {}
        }
    }

    let ptr = if is64 { 8usize } else { 4usize };
    // Order preserved from the prior implementation: INIT_ARRAY pointers then
    // FINI_ARRAY pointers. The element index `i` drives the `_INIT_<i>`/`_FINI_<i>`
    // name (Ghidra's `baseName + i`).
    for (base, sz, base_name) in [
        (init_array, init_array_sz, "_INIT_"),
        (fini_array, fini_array_sz, "_FINI_"),
    ] {
        let Some(base) = base else { continue };
        out.extend(read_pointer_table(file, base, sz, ptr, le, base_name));
    }

    out
}

/// Read `sz / ptr` pointers from the array at vma `base` by slicing the section
/// that contains `base`. Each nonzero decoded pointer is itself a function entry;
/// the `i`-th surviving element is named `<base_name><i>` (Ghidra's `baseName + i`,
/// where `i` is the element's index in the array — note Ghidra increments `i` over
/// ALL array slots, but a zero pointer is `continue`d, so the named survivors carry
/// their original array index, which we mirror).
/// On PowerPC64 an element is the value its dynamic relocation leaves at zero load
/// bias, and an element that any other relocation writes is left out.
fn read_pointer_table(
    file: &object::File,
    base: u64,
    sz: u64,
    ptr: usize,
    le: bool,
    base_name: &str,
) -> Vec<(u64, Option<String>)> {
    let mut out = Vec::new();
    let Some((sec_addr, data)) = section_bytes_containing(file, base) else {
        return out;
    };
    let start = (base - sec_addr) as usize;
    let n = (sz as usize) / ptr;
    let mut stored = Vec::new();
    for i in 0..n {
        let o = start + i * ptr;
        if o + ptr > data.len() {
            break;
        }
        stored.push(if ptr == 8 {
            read_u64(&data[o..], le)
        } else {
            read_u32(&data[o..], le) as u64
        });
    }
    let values = if file.architecture() == object::Architecture::PowerPc64 && ptr == 8 {
        crate::loader::elfv1::relocated_words(file, base, &stored)
    } else {
        stored.into_iter().map(Some).collect()
    };
    for (i, p) in values.into_iter().enumerate() {
        if let Some(p) = p.filter(|&p| p != 0) {
            // Ghidra names the element by its array index `i` (`baseName + i`).
            out.push((p, Some(format!("{base_name}{i}"))));
        }
    }
    out
}

/// `(section_vma, section_data)` for the section whose `[address, address+size)`
/// contains `vma`. Used to resolve an array vma to its bytes.
fn section_bytes_containing(file: &object::File, vma: u64) -> Option<(u64, Vec<u8>)> {
    for sec in file.sections() {
        let addr = sec.address();
        let size = sec.size();
        if size == 0 {
            continue;
        }
        if vma >= addr
            && vma < addr.saturating_add(size)
            && let Ok(d) = sec.data()
        {
            return Some((addr, d.to_vec()));
        }
    }
    None
}

// ===========================================================================
// Oracle 4: _start -> main via the libc-start idiom (per-architecture)
// ===========================================================================

/// Recover `main` from the `_start`→`__libc_start_main(main, …)` idiom — the
/// disassembly-free stand-in for the general call-target sweep (a pre-decompile
/// Listing is unavailable at the analyzer tier — the same wall `noreturn.rs`
/// documents): unlace recovers the *one* highest-value call target by byte-decoding
/// the instructions that load `main` into the platform's first integer-arg
/// register right before the `__libc_start_main` call.
///
/// The decode is **architecture-dispatched** (each path gated on
/// `file.architecture()`, additive — an unrecognized arch returns `None`):
///
/// - **x86-64** (`main` in `rdi`): `lea rdi,[rip+disp]` (`48 8d 3d <disp32>`)
///   carries `main` as a PC-relative *immediate* — [`x86_64_main_target`].
/// - **AArch64** (`main` in `x0`) / **RISC-V** (`main` in `a0`): PIE crt1 loads
///   `main` *indirectly* from a GOT slot (`adrp x0; ldr x0,[x0,#off]` /
///   `auipc a0; ld a0,off(a0)`). The slot carries an `R_*_RELATIVE` relocation
///   whose target is `main`'s VMA — [`aarch64_main_target`] /
///   [`riscv_main_target`] decode the slot, then resolve it through the
///   RELATIVE-target map ([`relative_targets`]).
/// - **ARM/Thumb** (`main` in `r0`): GOT-relative load
///   (`ldr r0,[GOT_base, #off]`); the GOT slot is `.got + off`, again carrying an
///   `R_ARM_RELATIVE` whose in-place target is `main` (with the Thumb LSB set,
///   masked off) — [`arm_main_target`].
///
/// All non-x86 paths cross-check the decoded slot against the RELATIVE-target map
/// and validate the resolved VMA is inside an executable section *before*
/// emitting, so a misdecode yields `None` rather than a bogus entry.
fn libc_start_main_target(file: &object::File, entry: u64) -> Option<u64> {
    if entry == 0 {
        return None;
    }
    use object::Architecture as A;
    match file.architecture() {
        A::X86_64 | A::X86_64_X32 => x86_64_main_target(file, entry),
        A::Aarch64 | A::Aarch64_Ilp32 => aarch64_main_target(file, entry),
        A::Arm => arm_main_target(file, entry),
        A::Riscv64 | A::Riscv32 => riscv_main_target(file, entry),
        _ => None,
    }
}

/// x86-64 SysV `_start` idiom: `main` is loaded into `rdi` immediately before the
/// `call *__libc_start_main@GOT`. Two encodings carry it, and which one a crt uses
/// is a link-model choice, not a different idiom:
///
/// - **PC-relative** (`lea rdi,[rip+disp]`, `48 8d 3d <disp32>`) — the PIE form,
///   `main = (lea_addr + 7) + sign_extend(disp32)`.
/// - **Absolute immediate** (`mov rdi,imm32`/`mov edi,imm32`/`movabs rdi,imm64`)
///   — the non-PIE form, where `main` *is* the immediate.
///
/// The PC-relative scan runs first and is unchanged, so a PIE image decodes exactly
/// as before; [`x86_64_immediate_main_target`] is consulted only when it misses.
fn x86_64_main_target(file: &object::File, entry: u64) -> Option<u64> {
    let (sec_addr, data) = section_bytes_containing(file, entry)?;
    let start = (entry - sec_addr) as usize;
    // Scan a 64-byte window from _start for `48 8d 3d <disp32>` (lea rdi,[rip+d]).
    let window = data.get(start..(start + 64).min(data.len()))?;
    let mut i = 0usize;
    while i + 7 <= window.len() {
        if window[i] == 0x48 && window[i + 1] == 0x8d && window[i + 2] == 0x3d {
            let disp = read_i32(&window[i + 3..]);
            let lea_addr = entry + i as u64;
            // rip points past the 7-byte instruction.
            let main = (lea_addr.wrapping_add(7)).wrapping_add(disp as i64 as u64);
            return Some(main);
        }
        i += 1;
    }
    x86_64_immediate_main_target(file, window)
}

/// Non-PIE x86-64 `_start`: `main` reaches `rdi` as a bare address immediate
/// rather than a `lea` displacement — `mov edi,imm32` (`bf`, glibc's `-no-pie`
/// crt1), `mov rdi,imm32` (`48 c7 c7`, sign-extended) or `movabs rdi,imm64`
/// (`48 bf`). Same idiom, same register, same following call; only the encoding
/// differs, and matching on the `lea` opcode alone loses `main` outright on an
/// image with no `.eh_frame` to fall back on.
///
/// A bare immediate is a far weaker signal than a `lea` displacement (one opcode
/// byte, and any four bytes read as an address), so a candidate is emitted only
/// when all three of these hold:
///
/// - a `call` follows within [`IMM_CALL_LOOKAHEAD`] bytes (the
///   `__libc_start_main` call the idiom is defined by),
/// - the immediate lands inside an executable section, and
/// - it is the *only* immediate in the window that does — an ambiguous decode is
///   a clean miss, the same rule [`arm_main_target_raw`] applies to its GOT
///   offsets.
fn x86_64_immediate_main_target(file: &object::File, window: &[u8]) -> Option<u64> {
    let execs = executable_sections(file);
    let mut hits: Vec<u64> = Vec::new();
    let mut i = 0usize;
    while i < window.len() {
        // (encoded length, main) for each `main`-into-rdi immediate encoding.
        let hit = if window[i] == 0xbf && i + 5 <= window.len() {
            // mov edi,imm32 — zero-extended into rdi.
            Some((5usize, read_i32(&window[i + 1..]) as u32 as u64))
        } else if window[i] == 0x48
            && i + 7 <= window.len()
            && window[i + 1] == 0xc7
            && window[i + 2] == 0xc7
        {
            // mov rdi,imm32 — sign-extended into rdi.
            Some((7usize, read_i32(&window[i + 3..]) as i64 as u64))
        } else if window[i] == 0x48 && i + 10 <= window.len() && window[i + 1] == 0xbf {
            // movabs rdi,imm64.
            read_u64_opt(&window[i + 2..]).map(|v| (10usize, v))
        } else {
            None
        };
        if let Some((len, main)) = hit
            && main != 0
            && in_executable_section(&execs, main)
            && x86_64_call_follows(window, i + len)
        {
            hits.push(main);
        }
        i += 1;
    }
    hits.sort_unstable();
    hits.dedup();
    match hits.as_slice() {
        [main] => Some(*main),
        _ => None,
    }
}

/// How far past a candidate `main` immediate the `__libc_start_main` call may sit.
/// In every crt form the call is the very next instruction; the slack absorbs an
/// `endbr64`/`nop` or a reordered argument setup without admitting an unrelated
/// call further down `_start`.
const IMM_CALL_LOOKAHEAD: usize = 16;

/// True if a `call` begins within [`IMM_CALL_LOOKAHEAD`] bytes of `off` —
/// `e8 <rel32>` (direct) or `ff /2` (indirect, the `call *__libc_start_main@GOT`
/// form). Byte-level, so it is a necessary condition rather than a decode.
fn x86_64_call_follows(window: &[u8], off: usize) -> bool {
    let end = (off + IMM_CALL_LOOKAHEAD).min(window.len());
    let mut i = off;
    while i < end {
        if window[i] == 0xe8 {
            return true;
        }
        // `ff /2` = CALL r/m: the ModRM reg field selects the opcode extension.
        if window[i] == 0xff
            && let Some(&modrm) = window.get(i + 1)
            && (modrm >> 3) & 0x7 == 2
        {
            return true;
        }
        i += 1;
    }
    false
}

/// AArch64 PIE `_start` idiom: `main` is loaded into `x0` from a GOT slot via the
/// `adrp x0, page ; ldr x0,[x0,#lo12]` pair before the `bl __libc_start_main@plt`.
/// Decode the slot VMA `= (adrp_addr & !0xFFF) + page_off + lo12` (the same A64
/// `adrp`/`ldr` decode `elf_plt::decode_aarch64` uses, here keyed to `x0`), then
/// resolve it through the RELATIVE-target map → `main`.
fn aarch64_main_target(file: &object::File, entry: u64) -> Option<u64> {
    let (sec_addr, data) = section_bytes_containing(file, entry)?;
    let start = (entry - sec_addr) as usize;
    let win_end = (start + 0x80).min(data.len());
    let window = data.get(start..win_end)?;
    let rel = relative_targets(file);

    // A64 is fixed 32-bit LE; scan the `adrp x0` + `ldr x0,[x0,#imm]` pair.
    let mut off = 0usize;
    while off + 8 <= window.len() {
        let adrp = u32::from_le_bytes([
            window[off],
            window[off + 1],
            window[off + 2],
            window[off + 3],
        ]);
        let ldr = u32::from_le_bytes([
            window[off + 4],
            window[off + 5],
            window[off + 6],
            window[off + 7],
        ]);
        // adrp Xd, imm: bit31=1, bits[28:24]=10000; immlo=bits[30:29],
        // immhi=bits[23:5], Rd=bits[4:0].
        let is_adrp = (adrp >> 31) & 1 == 1 && (adrp >> 24) & 0x1f == 0b1_0000;
        let adrp_rd = adrp & 0x1f;
        // ldr Xt,[Xn,#imm] 64-bit unsigned offset: size=11(bits[31:30]),
        // bits[29:24]=111001, opc=01(bits[23:22]), imm12=bits[21:10], Rn=bits[9:5].
        let is_ldr = (ldr >> 30) & 0x3 == 0b11
            && (ldr >> 24) & 0x3f == 0b11_1001
            && (ldr >> 22) & 0x3 == 0b01;
        let ldr_rn = (ldr >> 5) & 0x1f;
        let ldr_rt = ldr & 0x1f;
        // The pair must target x0 (the SysV first integer arg = `main`).
        if is_adrp && adrp_rd == 0 && is_ldr && ldr_rn == 0 && ldr_rt == 0 {
            let immlo = ((adrp >> 29) & 0x3) as i64;
            let immhi = ((adrp >> 5) & 0x7_ffff) as i64; // 19 bits
            let mut imm21 = (immhi << 2) | immlo;
            if imm21 & (1 << 20) != 0 {
                imm21 -= 1 << 21; // sign-extend the 21-bit page offset
            }
            let page_off = imm21 << 12;
            let ldr_off = (((ldr >> 10) & 0xfff) as u64) * 8; // 64-bit scale
            let adrp_addr = sec_addr + (start + off) as u64;
            let slot = (adrp_addr & !0xFFF)
                .wrapping_add(page_off as u64)
                .wrapping_add(ldr_off);
            if let Some(&target) = rel.get(&slot) {
                return Some(target & !1); // mask any thumb-style LSB (defensive)
            }
        }
        off += 4;
    }
    None
}

/// RISC-V PIE `_start` idiom: `main` is loaded into `a0` from a GOT slot via the
/// `auipc a0, hi20 ; ld a0, lo12(a0)` pair before the `jal __libc_start_main@plt`.
/// Decode the slot VMA `= auipc_addr + (hi20<<12) + sign_extend(lo12)` (the same
/// `auipc`/`ld` decode `elf_plt::decode_riscv` uses, here keyed to `a0`=x10), then
/// resolve it through the RELATIVE-target map → `main`.
fn riscv_main_target(file: &object::File, entry: u64) -> Option<u64> {
    let (sec_addr, data) = section_bytes_containing(file, entry)?;
    let start = (entry - sec_addr) as usize;
    let win_end = (start + 0x80).min(data.len());
    let window = data.get(start..win_end)?;
    let rel = relative_targets(file);

    // RISC-V mixes 2- and 4-byte (compressed) insns; the auipc/ld pair is a
    // 32-bit `auipc` immediately followed by a 32-bit `ld`. Scan at 2-byte steps
    // (the minimal insn granularity) so the pair is found regardless of any
    // preceding compressed insns.
    let mut off = 0usize;
    while off + 8 <= window.len() {
        let auipc = u32::from_le_bytes([
            window[off],
            window[off + 1],
            window[off + 2],
            window[off + 3],
        ]);
        // auipc a0, imm: opcode 0x17 (bits[6:0]), rd 10/a0 (bits[11:7]).
        if (auipc & 0x7f) == 0x17 && ((auipc >> 7) & 0x1f) == 10 {
            let load = u32::from_le_bytes([
                window[off + 4],
                window[off + 5],
                window[off + 6],
                window[off + 7],
            ]);
            // ld a0, lo12(a0): opcode 0x03, funct3 3 (ld) [or 2 (lw, RV32)], rd 10,
            // rs1 10.
            let funct3 = (load >> 12) & 0x7;
            let load_ok = (load & 0x7f) == 0x03
                && (funct3 == 2 || funct3 == 3)
                && ((load >> 7) & 0x1f) == 10
                && ((load >> 15) & 0x1f) == 10;
            if load_ok {
                let hi20 = (auipc >> 12) & 0xf_ffff;
                let imm12 = (load >> 20) & 0xfff;
                let lo12 = ((imm12 as i32) << 20) >> 20; // sign-extend 12-bit
                let auipc_addr = sec_addr + (start + off) as u64;
                let slot = auipc_addr
                    .wrapping_add((hi20 as u64) << 12)
                    .wrapping_add(lo12 as i64 as u64);
                if let Some(&target) = rel.get(&slot) {
                    return Some(target & !1);
                }
            }
        }
        off += 2;
    }
    None
}

/// ARM/Thumb PIE `_start` idiom: `main` is loaded into `r0` GOT-*relatively*
/// (`ldr.w r0,[GOT_base, r0]`, the GOT base computed from the literal pool, the
/// index a small per-symbol GOT offset). Rather than fully simulate the
/// two-load+add GOT-base computation (toolchain-fragile), we use the invariant
/// that the GOT base **is** the `.got` section address: for each PC-relative
/// literal-pool word the `_start` window references that is a *small* offset, the
/// candidate slot `= .got_addr + off`; if that slot carries a RELATIVE relocation
/// whose target is in an executable section, that target is `main` (the Thumb LSB
/// masked off). The RELATIVE-map + exec-section cross-check makes the heuristic
/// self-validating (a wrong offset simply misses the map).
fn arm_main_target(file: &object::File, entry: u64) -> Option<u64> {
    // The public oracle masks the Thumb LSB; the raw helper keeps it so the
    // decode-mode paint can tell Thumb (`main|1`) from A32 (`main`).
    arm_main_target_raw(file, entry).map(|raw| raw & !1)
}

/// As [`arm_main_target`] but returns the GOT pointer **un-masked** — the ARM
/// libc-start `main` pointer carries the Thumb mode bit in bit 0 (`main|1` for a
/// Thumb function). The caller masks it for the entry VMA; [`thumb_entry_paints`]
/// inspects it to decide whether to paint `TMode=1`.
fn arm_main_target_raw(file: &object::File, entry: u64) -> Option<u64> {
    // _start's entry LSB is the Thumb mode bit; the bytes live at the even VMA.
    let start_vma = entry & !1;
    let (sec_addr, data) = section_bytes_containing(file, start_vma)?;
    let start = (start_vma - sec_addr) as usize;
    let win_end = (start + 0x80).min(data.len());
    let window = data.get(start..win_end)?;

    let got_addr = file.section_by_name(".got").map(|s| s.address())?;
    let rel = relative_targets(file);
    let execs = executable_sections(file);

    // Collect every aligned 32-bit word in the _start window that, read as a
    // little-endian u32, is a plausible *small* GOT offset (< the .got size, or a
    // modest cap). Each is a candidate `off` for slot = got_addr + off.
    let got_size = file.section_by_name(".got").map(|s| s.size()).unwrap_or(0);
    let cap = got_size.max(0x1000);
    let mut best: Option<u64> = None;
    let mut found = 0usize;
    let mut w = 0usize;
    while w + 4 <= window.len() {
        if (start + w) % 4 == 0 {
            let off = read_u32(&window[w..], true) as u64;
            if off != 0 && off < cap {
                let slot = got_addr.wrapping_add(off);
                if let Some(&target) = rel.get(&slot) {
                    // Validate the *masked* (even) VMA is in an exec section, but
                    // keep the RAW target so the LSB (Thumb mode) survives.
                    if in_executable_section(&execs, target & !1) {
                        // Unique winner: only emit if the GOT-offset literal
                        // resolves to exactly one exec-section RELATIVE target, so
                        // an ambiguous decode is a clean miss (None).
                        if best.is_none() {
                            best = Some(target);
                        }
                        found += 1;
                    }
                }
            }
        }
        w += 2; // Thumb literal pools are halfword-stepped; align-check gates it.
    }
    if found == 1 { best } else { None }
}

/// Decode-mode (`TMode`) paints for ARM-discovered Thumb entries — the analog of
/// `arm_markers`' STT_FUNC-LSB → `TMode=1` paint, but derived from the libc-start
/// `main` GOT pointer's Thumb LSB (a stripped binary has no `$t`/FUNC-LSB symbol
/// for `arm_markers`). Emits `TMode=1` at the discovered `main`'s even VMA when
/// its pointer had bit 0 set (a Thumb function). Empty on every non-ARM arch and
/// when `main` is A32 (the default `TMode=0` already decodes it).
fn thumb_entry_paints(file: &object::File) -> Vec<ContextPaint> {
    let mut out = Vec::new();
    if file.architecture() != object::Architecture::Arm {
        return out;
    }
    let entry = file.entry();
    if entry == 0 {
        return out;
    }
    if let Some(raw) = arm_main_target_raw(file, entry)
        && raw & 1 == 1
    {
        // Thumb `main`: paint TMode=1 at the even (decode) VMA. `end: None` is
        // the point-set shape `arm_markers`/`ArmSymbolAnalyzer` use.
        out.push(ContextPaint {
            addr: raw & !1,
            end: None,
            var: "TMode",
            value: 1,
        });
    }
    out
}

// ===========================================================================
// Oracle 6: ARM Cortex-M hardware vector table (bare-metal firmware discovery)
// ===========================================================================

// The ARMv6/7/8-M initial-SP word (vector table word 0) points at on-chip SRAM.
// The Cortex-M memory map fixes SRAM to the 0x2000_0000..0x3FFF_FFFF region
// (the "SRAM" and "SRAM bit-band" address blocks); a valid reset SP lives there.
const CORTEXM_SRAM_LO: u64 = 0x2000_0000;
const CORTEXM_SRAM_HI: u64 = 0x3FFF_FFFF;
// Defensive upper bound on how many vector-table words we walk (a Cortex-M table
// is tens-to-low-hundreds of entries; this caps a pathological all-conforming
// region so the scan is always O(1)-bounded).
const CORTEXM_MAX_VECTORS: usize = 1024;

/// Detect an ARM Cortex-M hardware vector table *empirically* and return the
/// loaded section that carries it (`(sec_addr, sec_end, data)`).
///
/// A stripped bare-metal Cortex-M image has no symbols, no `.eh_frame`, no libc
/// idiom, and no `$t` mapping symbols — nothing paints the Thumb decode mode and
/// nothing seeds the handlers. The one invariant the hardware guarantees is the
/// **vector table** at the base of the loaded image: on reset the CPU loads word 0
/// into `SP` and word 1 (the reset vector) into `PC`. So the table is confirmed
/// when, at the start of a loaded section, `word[0]` is a plausible SRAM stack
/// pointer (`0x2000_0000..=0x3FFF_FFFF`) AND `word[1] == e_entry` (the reset
/// vector the ELF header also records). That two-word signature is specific enough
/// that a non-Cortex-M ARM object (or any non-firmware image) does not match, so
/// every downstream use is a strict no-op there.
///
/// (unlace) The candidate set is every section the *loader* maps as executable, not
/// just the `SHF_EXECINSTR` ones: the table is DATA that the CPU reads, so
/// demanding an executable section header of the table itself was a category
/// error — what must be executable is what its handler entries POINT AT, which
/// the harvest still checks. Bare-metal link scripts commonly leave `.isr_vector`
/// flagged `WA` inside an `RWE` `PT_LOAD` (every FreeRTOS demo image does), and
/// the flag gate made discovery miss the whole firmware. `SHF_EXECINSTR` sections
/// are still tried first, so an image that already matched matches the same
/// section. See [`phdr_executable_sections`].
///
/// ARM-gated (32-bit ARM ELF only); returns `None` on any other arch/format or
/// when no candidate section presents the signature.
///
/// (unlace) This is the *shipped* signature. [`cortexm_vector_table`] wraps it with
/// the `cortexmvectors` widening (see [`unlace_cortexmvectors`]), which keeps this
/// answer whenever it exists.
fn cortexm_vector_table_shipped(file: &object::File) -> Option<(u64, u64, Vec<u8>)> {
    if file.architecture() != object::Architecture::Arm {
        return None;
    }
    let entry = file.entry();
    if entry == 0 {
        return None;
    }
    let le = file.is_little_endian();
    // word[0] = initial SP in SRAM; word[1] = reset vector == e_entry (both the
    // Thumb-odd and even forms are accepted — `e_entry` carries the same LSB the
    // reset word does, so a raw `==` matches).
    let signature = |data: &Vec<u8>| {
        data.len() >= 8
            && (CORTEXM_SRAM_LO..=CORTEXM_SRAM_HI).contains(&(read_u32(&data[0..], le) as u64))
            && read_u32(&data[4..], le) as u64 == entry
    };
    // `SHF_EXECINSTR` sections first; the program-header-executable delta is only
    // collected when none of them carries the table.
    executable_sections(file)
        .into_iter()
        .find(|(_, _, data)| signature(data))
        .or_else(|| {
            phdr_executable_sections(file)
                .into_iter()
                .find(|(_, _, data)| signature(data))
        })
}

/// The vector-table candidate, optionally widened by `--option cortexmvectors on`
/// (`widen`). With `widen` clear this is exactly
/// [`cortexm_vector_table_shipped`]; with it set the shipped answer still wins
/// and the widened scan only runs when the shipped signature found nothing —
/// see [`unlace_cortexmvectors`].
fn cortexm_vector_table(file: &object::File, widen: bool) -> Option<(u64, u64, Vec<u8>)> {
    cortexmvectors::vector_table(file, widen)
}

/// Oracle 6: harvest the reset + exception/IRQ handler pointers from a detected
/// Cortex-M vector table as function-start seeds.
///
/// Starting at word 1 (word 0 is the initial SP, not a code pointer), each table
/// slot is either `0` (an unused/reserved vector) or a **Thumb** handler pointer
/// (odd, in an executable section). We harvest the masked (even) target of every
/// odd, in-exec pointer and stop at the first slot that is neither `0` nor a valid
/// handler — that is where the table ends and real code/data begins ("up to the
/// start of code"). A `min_target` guard (never read past the lowest handler
/// address) and [`CORTEXM_MAX_VECTORS`] bound the walk defensively. Zero and
/// duplicate entries are skipped; the result is sorted/deduped.
///
/// ARM-gated via [`cortexm_vector_table`]; empty when no table is present. The
/// harvested handlers usually collapse to a few unique addresses (bare-metal
/// firmware points most vectors at a shared default handler), but they seed the
/// recursive-descent walk (§1.6), which then follows their `BL`s to the rest.
fn cortexm_vector_entries(file: &object::File, widen: bool) -> Vec<u64> {
    let Some((sec_addr, _sec_end, data)) = cortexm_vector_table(file, widen) else {
        return Vec::new();
    };
    let le = file.is_little_endian();
    let execs = executable_sections(file);
    harvest_vector_words(
        sec_addr,
        &data,
        le,
        &|vma| in_executable_section(&execs, vma),
        widen,
    )
}

/// The pure vector-table harvest loop (testable without a full ELF): walk the
/// table words starting at word 1, emitting the masked (even) target of every
/// odd, in-executable Thumb handler pointer, skipping zero slots, and stopping at
/// the first slot that is neither `0` nor a valid handler (the end of the table)
/// or once the scan reaches the lowest handler address (start of code). `in_exec`
/// answers "is this masked VMA in an executable section?". Sorted/deduped.
///
/// (unlace) `relocated` is the `cortexmvectors` relaxation of the start-of-code
/// stop: see [`harvest_vector_slots`].
fn harvest_vector_words(
    sec_addr: u64,
    data: &[u8],
    le: bool,
    in_exec: &dyn Fn(u64) -> bool,
    relocated: bool,
) -> Vec<u64> {
    let mut out = harvest_vector_slots(sec_addr, data, le, in_exec, relocated);
    out.sort_unstable();
    out.dedup();
    out
}

/// (unlace) The harvest loop's raw result: one entry per accepted table SLOT, in
/// table order, neither sorted nor deduped. [`harvest_vector_words`] is this,
/// sorted and deduped; the `cortexmvectors` signature counts these slots (a
/// bare-metal table aims most of its vectors at one shared handler, so distinct
/// addresses undercount the run badly).
///
/// `relocated` (set only on the `cortexmvectors` path) additionally requires the
/// lowest handler to lie at or above the table's own base before the
/// start-of-code stop can fire. The stop reads "the scan has walked far enough to
/// reach real instructions", which is only true when the code follows the table
/// in the same address region. betaflight links `.isr_vector` into RAM at
/// `0x2000_0000` while its handlers live in flash at `0x0800_xxxx`, so the
/// unconditional stop fires on the *second* slot and the table looks one word
/// long. With `relocated` clear the stop is exactly as shipped.
fn harvest_vector_slots(
    sec_addr: u64,
    data: &[u8],
    le: bool,
    in_exec: &dyn Fn(u64) -> bool,
    relocated: bool,
) -> Vec<u64> {
    let mut out: Vec<u64> = Vec::new();
    let mut min_target = u64::MAX;
    let mut i = 1usize; // skip word 0 (the initial SP)
    while i < CORTEXM_MAX_VECTORS {
        let off = i * 4;
        if off + 4 > data.len() {
            break;
        }
        let vma = sec_addr + off as u64;
        // Once the scan reaches the lowest handler address, the table has ended and
        // we would be reading real instructions — stop ("up to the start of code").
        if vma >= min_target && (!relocated || min_target >= sec_addr) {
            break;
        }
        let word = read_u32(&data[off..], le) as u64;
        i += 1;
        if word == 0 {
            // Reserved/unused vector slot: keep scanning (Cortex-M tables embed
            // zeros between defined handlers).
            continue;
        }
        // A Cortex-M handler is a Thumb function → an odd pointer into executable
        // memory. Any other nonzero word is not a table entry: the table ended, so
        // stop (a contiguous {zero | Thumb-handler} run defines the table).
        let target = word & !1;
        if word & 1 == 0 || !in_exec(target) {
            break;
        }
        if target < min_target {
            min_target = target;
        }
        out.push(target);
    }
    out
}

/// Decode-mode (`TMode`) region paints for a Cortex-M image: once a vector table
/// is confirmed, paint `TMode=1` (Thumb) across **every executable section**.
///
/// ARMv6/7/8-M is a Thumb-only profile (it has no A32/ARM execution state), so the
/// entire code image decodes as Thumb — a whole-section region paint is exactly
/// correct. This is the region analog of [`thumb_entry_paints`]: a per-entry point
/// paint is NOT sufficient, because a Thumb `BL` does not `globalset` the callee's
/// decode mode, so a function reached only through the reset→main call tree would
/// still decode as A32 without the region paint. Wired into both the analysis
/// commit path (`EntryDiscoveryPass::run` → `context_paints`) and the Listing
/// walk's `ContextPainter` in [`crate::listing::context`].
///
/// Empty on any ARM object without the vector-table signature (and every non-ARM
/// arch), so it is a strict no-op outside stripped Cortex-M firmware.
pub(crate) fn cortexm_thumb_paints(file: &object::File, widen: bool) -> Vec<ContextPaint> {
    if cortexm_vector_table(file, widen).is_none() {
        return Vec::new();
    }
    // Paint each executable section as its own `[addr, end)` region. On Cortex-M
    // every executable section is Thumb, so painting them all is correct (and the
    // usual single `.text` is the common case).
    executable_sections(file)
        .into_iter()
        .map(|(addr, hi, _data)| ContextPaint {
            addr,
            end: Some(hi),
            var: "TMode",
            value: 1,
        })
        .collect()
}

/// Build `got_slot_vma → relative_target_vma` from the dynamic `R_*_RELATIVE`
/// relocations. The "RELATIVE" relocs are the ones `object` surfaces as
/// [`object::RelocationTarget::Absolute`] (no symbol): their *target* is a fixed
/// in-image VMA (an init/fini pointer, a vtable slot, or — for our purposes — the
/// `main` pointer the PIE `_start` loads). The target value is the RELA `addend`
/// when present (AArch64/RISC-V), else the in-place value stored at the slot (ARM
/// REL, `has_implicit_addend`), read from the containing section's bytes.
fn relative_targets(file: &object::File) -> std::collections::HashMap<u64, u64> {
    use object::RelocationTarget;
    use object::read::Object;
    let mut map: std::collections::HashMap<u64, u64> = std::collections::HashMap::new();
    let le = file.is_little_endian();
    let is64 = file.is_64();
    let Some(relocs) = file.dynamic_relocations() else {
        return map;
    };
    for (slot, reloc) in relocs {
        // RELATIVE = a non-symbolic (Absolute) dynamic reloc.
        if !matches!(reloc.target(), RelocationTarget::Absolute) {
            continue;
        }
        let target: u64 = if reloc.has_implicit_addend() {
            // REL (e.g. ARM): the addend is the value already stored at the slot.
            let Some((sec_addr, bytes)) = section_bytes_containing(file, slot) else {
                continue;
            };
            let o = (slot - sec_addr) as usize;
            if is64 {
                if o + 8 > bytes.len() {
                    continue;
                }
                read_u64(&bytes[o..], le)
            } else {
                if o + 4 > bytes.len() {
                    continue;
                }
                read_u32(&bytes[o..], le) as u64
            }
        } else {
            // RELA: the addend carries the target VMA directly.
            let a = reloc.addend();
            if a < 0 {
                continue;
            }
            a as u64
        };
        if target != 0 {
            map.insert(slot, target);
        }
    }
    map
}

// ===========================================================================
// Oracle 5: prologue byte patterns (FunctionStartAnalyzer port, x86-64 gcc)
// ===========================================================================

/// A ditted bit sequence — the matcher core of Ghidra's `DittedBitSequence`
/// (`DittedBitSequence.java`): `bits[i]` is the required value, `dits[i]` the
/// care-mask, so `isMatch(pos,val) == (val & dits[pos]) == bits[pos]`
/// (DittedBitSequence.java:218). A `.` bit is don't-care (`dits` bit 0).
struct DittedSeq {
    /// Required byte values (already masked by `dits`).
    bits: Vec<u8>,
    /// Care mask per byte (`1` = the bit must match).
    dits: Vec<u8>,
}

impl DittedSeq {
    /// Parse a ditted binary string like `"11111111 ........ 01010101"` (space-
    /// separated bytes; `.` = don't-care bit). Faithful to
    /// `DittedBitSequence.initFromDittedStringData` (DittedBitSequence.java:365):
    /// one byte per 8-bit group.
    fn from_binary(s: &str) -> DittedSeq {
        let mut bits = Vec::new();
        let mut dits = Vec::new();
        for tok in s.split_whitespace() {
            let mut b = 0u8;
            let mut d = 0u8;
            for (k, c) in tok.chars().enumerate() {
                let shift = 7 - k;
                match c {
                    '0' => d |= 1 << shift,
                    '1' => {
                        d |= 1 << shift;
                        b |= 1 << shift;
                    }
                    '.' => {}
                    _ => {}
                }
            }
            bits.push(b);
            dits.push(d);
        }
        DittedSeq { bits, dits }
    }

    /// Length in bytes.
    #[cfg(test)]
    fn len(&self) -> usize {
        self.bits.len()
    }

    /// `(val & dits[i]) == bits[i]` for every byte (DittedBitSequence.isMatch).
    fn matches(&self, window: &[u8]) -> bool {
        if window.len() < self.bits.len() {
            return false;
        }
        for i in 0..self.bits.len() {
            if window[i] & self.dits[i] != self.bits[i] {
                return false;
            }
        }
        true
    }
}

/// The vendored x86-64 gcc *bare-`<funcstart/>`* prologue sequences (the subset
/// of `x86-64gcc_patterns.xml` whose post-rule is an unconditional `<funcstart/>`,
/// no `after`/`validcode` — those need a PseudoDisassembler we lack). Kept
/// minimal in v1: the common gcc frame-setup shapes, plain and ENDBR64-prefixed.
fn prologue_patterns() -> Vec<DittedSeq> {
    vec![
        // endbr64 ; push rbp ; mov rbp,rsp   (f3 0f 1e fa 55 48 89 e5)
        DittedSeq::from_binary(
            "11110011 00001111 00011110 11111010 01010101 01001000 10001001 11100101",
        ),
        // push rbp ; mov rbp,rsp             (55 48 89 e5)
        DittedSeq::from_binary("01010101 01001000 10001001 11100101"),
        // endbr64 ; sub rsp, imm8/32         (f3 0f 1e fa 48 83 ec ..)
        DittedSeq::from_binary("11110011 00001111 00011110 11111010 01001000 10000011 11101100"),
    ]
}

/// Scan every executable section's bytes for a prologue pattern hit at an aligned
/// offset, emitting each hit VMA. Faithful to `FunctionStartAnalyzer.applyActionToSet`
/// minus the disassembly post-rules. Conservative: 16-byte function alignment (the
/// x86-64 gcc default; the commit's `find_function` overlap check squashes any hit
/// landing inside an already-named function, so the residual risk is a spurious
/// *new* start in a gap — the small v1 pattern list keeps that minimal).
fn prologue_pattern_starts(execs: &[(u64, u64, Vec<u8>)]) -> Vec<u64> {
    const FUNC_ALIGN: u64 = 16;
    let pats = prologue_patterns();
    let mut out = Vec::new();
    for (addr, _hi, data) in execs {
        let mut off = 0usize;
        while off < data.len() {
            let vma = addr + off as u64;
            if vma.is_multiple_of(FUNC_ALIGN) && pats.iter().any(|p| p.matches(&data[off..])) {
                out.push(vma);
            }
            off += 1;
        }
    }
    out
}

// ===========================================================================
// Oracle 3: .eh_frame FDE pcBegin (GccExceptionAnalyzer, FDE-start scope)
// ===========================================================================

// DWARF exception-handling pointer-encoding constants (DW_EH_PE_*), the modes
// DwarfDecoderFactory.getDecoder splits on (format = enc&0x0f, appl = enc&0x70,
// indirect = enc&0x80).
const DW_EH_PE_ABSPTR: u8 = 0x00;
const DW_EH_PE_ULEB128: u8 = 0x01;
const DW_EH_PE_UDATA2: u8 = 0x02;
const DW_EH_PE_UDATA4: u8 = 0x03;
const DW_EH_PE_UDATA8: u8 = 0x04;
const DW_EH_PE_SLEB128: u8 = 0x09;
const DW_EH_PE_SDATA2: u8 = 0x0a;
const DW_EH_PE_SDATA4: u8 = 0x0b;
const DW_EH_PE_SDATA8: u8 = 0x0c;

const DW_EH_PE_PCREL: u8 = 0x10;
const DW_EH_PE_DATAREL: u8 = 0x30;
const DW_EH_PE_OMIT: u8 = 0xff;

/// Scan `.eh_frame` (a Mach-O's `__eh_frame`) and return every FDE `pcBegin`
/// (each is a function start) —
/// the byproduct of Ghidra's `FrameDescriptionEntry.create`'s
/// `CreateFunctionCmd(pcBeginAddr)` (FrameDescriptionEntry.java:473), scoped to
/// the FDE-start decode (NOT pcRange/CFI/LSDA).
///
/// Walk (faithful to `EhFrameSection.analyzeSection`): each record is
/// `length:u32`, then `cieId:u32`. `cieId == 0` ⇒ CIE (the `.eh_frame`
/// convention) — parse its augmentation to extract the FDE pointer-encoding
/// byte. `cieId != 0` ⇒ FDE — its CIE is at `(o+4) - cieId`
/// (`createCiePointer`:225); decode `pcBegin` at `o+8` with that CIE's encoding.
///
/// Native absolute pointer width follows the ELF class.
pub fn scan_eh_frame_starts(file: &object::File) -> Vec<u64> {
    scan_eh_frame_starts_sized(file, if file.is_64() { 8 } else { 4 })
}

/// As [`scan_eh_frame_starts`] but with an explicit absptr pointer size.
fn scan_eh_frame_starts_sized(file: &object::File, ptr_size: usize) -> Vec<u64> {
    let mut out: Vec<u64> = Vec::new();
    let name = match file.format() {
        object::BinaryFormat::Elf => ".eh_frame",
        object::BinaryFormat::MachO => "__eh_frame",
        _ => return out,
    };
    let Some(sec) = file.section_by_name(name) else {
        return out;
    };
    let sec_vma = sec.address();
    let Ok(data) = sec.data() else {
        return out;
    };
    if data.is_empty() {
        return out;
    }
    let le = file.is_little_endian();

    // CIE-offset -> FDE pointer-encoding byte. A flat Vec lookup (no HashMap),
    // resolved by the FDE's `(o+4) - cieId` back-pointer; faithful given CIEs
    // precede their FDEs in gcc output (and all vendored fixtures). A forward-
    // referencing CIE would be missed — documented LOSS.
    let mut cie_enc: Vec<(usize, u8)> = Vec::new();

    let mut o = 0usize;
    while o + 4 <= data.len() {
        let length = read_u32(&data[o..], le) as usize;
        if length == 0 {
            break; // zero-length record = end-of-frame
        }
        if length == 0xffff_ffff {
            // 64-bit extended length record. Ghidra throws "ExtLength not
            // completely implemented" (Cie.java:520 / FDE :499). SCOPE: read the
            // 8-byte length and skip the record.
            if o + 12 > data.len() {
                break;
            }
            let ext = read_u64(&data[o + 4..], le) as usize;
            o = match o.checked_add(12).and_then(|v| v.checked_add(ext)) {
                Some(v) => v,
                None => break,
            };
            continue;
        }
        let next = o + 4 + length;
        if next > data.len() || length < 4 {
            break;
        }
        let cie_id = read_u32(&data[o + 4..], le);

        if cie_id == 0 {
            // CIE: extract the FDE pointer encoding byte from its augmentation.
            let enc = parse_cie_fde_encoding(&data[o..next], ptr_size).unwrap_or(DW_EH_PE_ABSPTR);
            cie_enc.push((o, enc));
        } else {
            // FDE: locate its CIE by the relative back-pointer.
            let cie_ptr_field = o + 4;
            if (cie_id as usize) <= cie_ptr_field {
                let cie_off = cie_ptr_field - cie_id as usize;
                let enc = cie_enc
                    .iter()
                    .find(|&&(co, _)| co == cie_off)
                    .map(|&(_, e)| e);
                if let Some(enc) = enc {
                    // pcBegin field starts at o+8.
                    let field_vma = sec_vma + (o + 8) as u64;
                    if let Some(pc) = decode_eh_pointer_ordered(
                        enc,
                        field_vma,
                        sec_vma,
                        &data[..next],
                        o + 8,
                        ptr_size,
                        le,
                    ) {
                        out.push(pc);
                    }
                }
            }
        }
        o = next;
    }

    out.sort_unstable();
    out.dedup();
    out
}

// ===========================================================================
// `.eh_frame` LSDA landing pads (GccExceptionAnalyzer, full markup) — GATED
// ===========================================================================
//
// The `--option eh_frame_full on` product: for each FDE whose CIE augmentation
// carries an `L` char, follow the FDE's augmentation-data LSDA pointer into
// `.gcc_except_table`, decode the call-site table, and emit each non-zero
// landing pad (`lpStart + cs_landing_pad`) as a discovered code entry. A landing
// pad is the catch/cleanup block the unwinder jumps to — a real code target that
// the FDE-pcBegin / prologue / call-idiom oracles never see (it sits mid-function).
//
// Faithful to Ghidra's `ghidra.app.plugin.exceptionhandlers.gcc.*`:
//   - `Cie.processAugmentationInfo` records the `L` char's LSDA-encoding byte
//     (and the `P` personality, `R` FDE-encoding) — `getLSDAEncoding()`.
//   - `FrameDescriptionEntry.createAugmentationInfo`/`createLsda` decodes the FDE's
//     own augmentation-data LSDA pointer with that CIE encoding.
//   - `LSDAHeader.create` reads `[lpStartEnc][lpStart?][ttypeEnc][ttypeOff?]
//     [callSiteEnc][callSiteTableLen]`; when `lpStartEnc == omit`, `lpStart`
//     defaults to the FDE's pcBegin (the region/function start).
//   - `LSDACallSiteRecord.create` reads `[cs_start][cs_len][cs_lp][cs_action]`;
//     `getLandingPad()` is `lpStart + cs_lp`, and `cs_lp == 0` ⇒ NO landing pad
//     (cleanup-less call site). `GccExceptionAnalyzer.processCallSiteRecord`
//     disassembles each non-zero landing pad (marks it code) — our entry fact.
//
// CFI (the `DW_CFA_*` call-frame instructions giving CFA/register-save rules) is
// deliberately NOT recovered here: unlace's own engine recovers the stack frame from
// the code (S5 type inference + S7 frame analysis), so the CFA/saved-register
// rules add nothing at the decompiler tier — CFI is INHERITED, not rebuilt. See
// `docs/history/analysis-port-log.md`.

/// Decoded CIE augmentation fields relevant to the LSDA walk: the FDE pointer
/// encoding (`R`), and — when the augmentation carries an `L` — the LSDA pointer
/// encoding (`L`). `has_lsda == false` ⇒ this CIE's FDEs carry no LSDA pointer.
#[derive(Clone, Copy)]
struct CieAug {
    /// The FDE `pcBegin`/`pcRange` pointer encoding (the `R` char payload).
    fde_enc: u8,
    /// True iff the augmentation string contains an `L` char (FDEs carry an LSDA
    /// pointer in their augmentation data).
    has_lsda: bool,
    /// The LSDA pointer encoding (the `L` char payload), valid iff `has_lsda`.
    lsda_enc: u8,
    /// The byte offset, within the FDE augmentation-data block, at which the LSDA
    /// pointer sits. It is the FIRST aug-data field for a `zL`/`zPL`/`zPLR` CIE
    /// (the `L` data is the LSDA pointer; `P`/`R` consume CIE aug-data, not FDE
    /// aug-data) — so always 0 in practice; kept explicit for faithfulness.
    fde_lsda_off: usize,
    /// The `P` personality pointer's encoding and its offset in the CIE record.
    personality: Option<(u8, usize)>,
}

/// As [`scan_eh_frame_starts`] but, for `--option eh_frame_full on`, return the
/// exception-handler **landing-pad** PCs decoded from each FDE's
/// `.gcc_except_table` LSDA (the GccExceptionAnalyzer full-markup product). The
/// raw decode (NOT exec-section/funcsym filtered — see
/// [`collect_landing_pad_entries`] for the filtered entry set).
pub fn scan_eh_frame_landing_pads(file: &object::File) -> Vec<u64> {
    let mut out: Vec<u64> = Vec::new();
    let Some(gcc) = file.section_by_name(".gcc_except_table") else {
        return out;
    };
    let gcc_vma = gcc.address();
    let Ok(gcc_data) = gcc.data() else {
        return out;
    };
    let (ptr_size, little) = (if file.is_64() { 8 } else { 4 }, file.is_little_endian());
    for_each_fde_lsda(file, ptr_size, &mut |pc_begin, lsda_ptr| {
        if let Some(lsda) = decode_lsda(gcc_data, gcc_vma, lsda_ptr, pc_begin, ptr_size, little) {
            out.extend(
                lsda.call_sites
                    .iter()
                    .filter(|cs| cs.pad != 0)
                    .map(|cs| cs.pad),
            );
        }
    });
    out.sort_unstable();
    out.dedup();
    out
}

/// Every LSDA landing pad as `(owning FDE's pcBegin, pad)`.
pub fn scan_eh_frame_landing_pads_owned(file: &object::File) -> Vec<(u64, u64)> {
    let mut out = Vec::new();
    let Some(gcc) = file.section_by_name(".gcc_except_table") else {
        return out;
    };
    let gcc_vma = gcc.address();
    let Ok(gcc_data) = gcc.data() else {
        return out;
    };
    let (ptr_size, little) = (if file.is_64() { 8 } else { 4 }, file.is_little_endian());
    for_each_fde_lsda(file, ptr_size, &mut |pc_begin, lsda_ptr| {
        if let Some(lsda) = decode_lsda(gcc_data, gcc_vma, lsda_ptr, pc_begin, ptr_size, little) {
            out.extend(
                lsda.call_sites
                    .iter()
                    .filter(|cs| cs.pad != 0)
                    .map(|cs| (pc_begin, cs.pad)),
            );
        }
    });
    out
}

/// Call `on_lsda(pc_begin, lsda_ptr)` for every `.eh_frame` FDE that carries a
/// non-null LSDA pointer.
pub(crate) fn for_each_fde_lsda(
    file: &object::File,
    ptr_size: usize,
    on_lsda: &mut dyn FnMut(u64, u64),
) {
    for_each_fde_lsda_classified(file, ptr_size, &mut |pc_begin, lsda, personality| {
        if personality.reads_itanium_lsda() {
            on_lsda(pc_begin, lsda);
        }
    });
}

/// The language runtime an FDE's CIE personality routine belongs to, which
/// decides the LSDA's format (IDA eh_parse 0xab60).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum Personality {
    /// `__gxx_personality_v0`.
    Cxx,
    /// `rust_eh_personality`.
    Rust,
    /// `__objc_personality_v0`.
    ObjC,
    /// `__gnat_personality_v0`.
    Gnat,
    /// `__gcc_personality_v0`: C cleanups (`__attribute__((cleanup))`).
    GccC,
    /// `__gxx_personality_sj0` and friends: setjmp/longjmp unwinding, whose
    /// call-site table holds indices, not code ranges.
    SjLj,
    /// No personality, or one with no name unlace can read.
    Unknown,
}

impl Personality {
    /// Classify a personality routine by name.
    pub fn of_name(name: &str) -> Personality {
        let n = name.strip_prefix("DW.ref.").unwrap_or(name);
        let n = n.split('@').next().unwrap_or(n);
        if n.ends_with("_sj0") {
            Personality::SjLj
        } else if n.contains("gxx_personality") {
            Personality::Cxx
        } else if n.contains("rust_eh_personality") {
            Personality::Rust
        } else if n.contains("objc_personality") {
            Personality::ObjC
        } else if n.contains("gnat_personality") {
            Personality::Gnat
        } else if n.contains("gcc_personality") {
            Personality::GccC
        } else {
            Personality::Unknown
        }
    }

    /// Does the LSDA carry the Itanium call-site ranges the walkers decode?
    /// Everything but SjLj does; an unnamed personality is read as Itanium.
    pub fn reads_itanium_lsda(self) -> bool {
        self != Personality::SjLj
    }

    /// The runtime's name in a note.
    pub fn label(self) -> &'static str {
        match self {
            Personality::Cxx => "C++",
            Personality::Rust => "Rust",
            Personality::ObjC => "Objective-C",
            Personality::Gnat => "Ada",
            Personality::GccC => "C cleanup",
            Personality::SjLj => "SjLj",
            Personality::Unknown => "unknown",
        }
    }
}

/// Symbol names by address and by dynamically relocated slot.
struct PersonalityNames {
    at: std::collections::HashMap<u64, String>,
    slot: std::collections::HashMap<u64, String>,
}

impl PersonalityNames {
    fn new(file: &object::File) -> PersonalityNames {
        use object::ObjectSymbolTable;
        let mut at = std::collections::HashMap::new();
        for sym in file.symbols().chain(file.dynamic_symbols()) {
            if let Ok(name) = sym.name()
                && sym.address() != 0
                && name.contains("personality")
            {
                at.insert(sym.address(), name.to_string());
            }
        }
        let mut slot = std::collections::HashMap::new();
        if let (Some(relocs), Some(dynsym)) =
            (file.dynamic_relocations(), file.dynamic_symbol_table())
        {
            for (off, r) in relocs {
                if let object::RelocationTarget::Symbol(idx) = r.target()
                    && let Some(name) = dynsym
                        .symbol_by_index(idx)
                        .ok()
                        .and_then(|s| s.name().ok().map(str::to_string))
                {
                    slot.insert(off, name);
                }
            }
        }
        PersonalityNames { at, slot }
    }

    fn classify(&self, value: u64, indirect: bool) -> Personality {
        let name = if indirect {
            self.slot.get(&value).or_else(|| self.at.get(&value))
        } else {
            self.at.get(&value)
        };
        name.map_or(Personality::Unknown, |n| Personality::of_name(n))
    }
}

/// [`for_each_fde_lsda`], with the personality of the FDE's CIE, including the
/// SjLj LSDAs it skips.
pub(crate) fn for_each_fde_lsda_classified(
    file: &object::File,
    ptr_size: usize,
    on_lsda: &mut dyn FnMut(u64, u64, Personality),
) {
    if !matches!(file.format(), object::BinaryFormat::Elf) {
        return;
    }
    let Some(sec) = file.section_by_name(".eh_frame") else {
        return;
    };
    let sec_vma = sec.address();
    let Ok(data) = sec.data() else {
        return;
    };
    if data.is_empty() {
        return;
    }
    if file.section_by_name(".gcc_except_table").is_none() {
        return;
    }
    let le = file.is_little_endian();

    // CIE-offset -> decoded augmentation (FDE encoding + LSDA encoding). A flat Vec
    // lookup (no HashMap), resolved by the FDE's `(o+4) - cieId` back-pointer —
    // faithful given CIEs precede their FDEs in gcc output. A forward-referencing
    // CIE is missed (documented LOSS, same as the FDE-start scan).
    let mut cie_aug: Vec<(usize, CieAug)> = Vec::new();
    let mut cie_personality: Vec<(usize, Personality)> = Vec::new();
    let names = PersonalityNames::new(file);

    let mut o = 0usize;
    while o + 4 <= data.len() {
        let length = read_u32(&data[o..], le) as usize;
        if length == 0 {
            break; // zero-length record = end-of-frame
        }
        if length == 0xffff_ffff {
            // 64-bit extended length: read + skip (same scope as the FDE-start scan).
            if o + 12 > data.len() {
                break;
            }
            let ext = read_u64(&data[o + 4..], le) as usize;
            o = match o.checked_add(12).and_then(|v| v.checked_add(ext)) {
                Some(v) => v,
                None => break,
            };
            continue;
        }
        let next = o + 4 + length;
        if next > data.len() || length < 4 {
            break;
        }
        let cie_id = read_u32(&data[o + 4..], le);

        if cie_id == 0 {
            // CIE: decode the FDE + LSDA encodings from its augmentation.
            if let Some(aug) = parse_cie_aug(&data[o..next], ptr_size) {
                let personality = aug.personality.map_or(Personality::Unknown, |(enc, off)| {
                    let field = o + off;
                    decode_eh_pointer_ordered(
                        enc & 0x7f,
                        sec_vma + field as u64,
                        sec_vma,
                        &data[..next],
                        field,
                        ptr_size,
                        le,
                    )
                    .map_or(Personality::Unknown, |v| names.classify(v, enc & 0x80 != 0))
                });
                cie_aug.push((o, aug));
                cie_personality.push((o, personality));
            }
        } else {
            // FDE: locate its CIE by the relative back-pointer.
            let cie_ptr_field = o + 4;
            if (cie_id as usize) > cie_ptr_field {
                o = next;
                continue;
            }
            let cie_off = cie_ptr_field - cie_id as usize;
            let Some(&(_, aug)) = cie_aug.iter().find(|&&(co, _)| co == cie_off) else {
                o = next;
                continue;
            };
            // This FDE carries an LSDA only if its CIE augmentation had an `L`.
            if !aug.has_lsda {
                o = next;
                continue;
            }
            // FDE layout: [length:u32][ciePtr:u32][pcBegin][pcRange][augLen(uleb)]
            //             [augData: lsdaPtr ...][cfi...]. pcBegin starts at o+8.
            let pc_begin_off = o + 8;
            let pc_begin_vma = sec_vma + pc_begin_off as u64;
            let Some(pc_begin) = decode_eh_pointer_ordered(
                aug.fde_enc,
                pc_begin_vma,
                sec_vma,
                &data[..next],
                pc_begin_off,
                ptr_size,
                le,
            ) else {
                o = next;
                continue;
            };
            // Skip pcBegin + pcRange (both the FDE `R` encoding's size), then the
            // augmentation-data length (uleb), to reach the FDE aug-data block.
            let enc_sz = encoded_size(
                aug.fde_enc,
                ptr_size,
                data.get(pc_begin_off..).unwrap_or(&[]),
            );
            let pc_range_off = pc_begin_off + enc_sz;
            let aug_len_off = pc_range_off + enc_sz;
            let Some((_aug_len, aug_data_off)) = read_uleb128(data, aug_len_off) else {
                o = next;
                continue;
            };
            // The LSDA pointer field within the FDE aug-data, decoded with the
            // CIE's `L` encoding. Its VMA is needed for a pcrel `L` encoding.
            let lsda_field_off = aug_data_off + aug.fde_lsda_off;
            let lsda_field_vma = sec_vma + lsda_field_off as u64;
            let Some(lsda_ptr) = decode_eh_pointer_ordered(
                aug.lsda_enc,
                lsda_field_vma,
                sec_vma,
                &data[..next],
                lsda_field_off,
                ptr_size,
                le,
            ) else {
                o = next;
                continue;
            };
            if lsda_ptr == 0 {
                o = next; // no LSDA for this FDE.
                continue;
            }
            // Decode the `.gcc_except_table` LSDA at `lsda_ptr`. lpStart defaults to
            // the FDE's pcBegin when the LSDA omits its own lpStart.
            let personality = cie_personality
                .iter()
                .find(|&&(co, _)| co == cie_off)
                .map_or(Personality::Unknown, |&(_, p)| p);
            on_lsda(pc_begin, lsda_ptr, personality);
        }
        o = next;
    }
}

/// One decoded LSDA call-site record: `[start, start + len)` unwinds to `pad`
/// (0 = no landing pad) with the 1-based action-table index `action` (0 =
/// cleanup only).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(crate) struct LsdaCallSite {
    pub start: u64,
    pub len: u64,
    pub pad: u64,
    pub action: u64,
}

/// A decoded `.gcc_except_table` LSDA: the call-site records plus where the
/// action table starts and where the type table ends (both section offsets).
#[derive(Clone, Debug)]
pub(crate) struct Lsda {
    pub call_sites: Vec<LsdaCallSite>,
    pub action_table: usize,
    /// `(encoding, section offset of the type table's end)`; `None` when omitted.
    pub ttype: Option<(u8, usize)>,
}

/// Decode the `.gcc_except_table` LSDA at VMA `lsda_vma`. `func_pc_begin` is the
/// FDE's pcBegin — the default `lpStart` when the LSDA's `lpStartEncoding` is
/// `omit`. Faithful to `LSDAHeader.create` + `LSDACallSiteRecord.create`.
pub(crate) fn decode_lsda(
    gcc_data: &[u8],
    gcc_vma: u64,
    lsda_vma: u64,
    func_pc_begin: u64,
    ptr_size: usize,
    little: bool,
) -> Option<Lsda> {
    let base = lsda_vma.checked_sub(gcc_vma)? as usize;
    if base >= gcc_data.len() {
        return None;
    }
    let mut p = base;
    let lp_enc = *gcc_data.get(p)?;
    p += 1;
    let lp_start: u64 = if lp_enc == DW_EH_PE_OMIT {
        func_pc_begin
    } else {
        let field_vma = gcc_vma + p as u64;
        let v =
            decode_eh_pointer_ordered(lp_enc, field_vma, gcc_vma, gcc_data, p, ptr_size, little)?;
        p += encoded_size(lp_enc, ptr_size, gcc_data.get(p..).unwrap_or(&[]));
        v
    };
    let tt_enc = *gcc_data.get(p)?;
    p += 1;
    let mut ttype = None;
    if tt_enc != DW_EH_PE_OMIT {
        let (tt_off, np) = read_uleb128(gcc_data, p)?;
        p = np;
        ttype = Some((tt_enc, p + tt_off as usize));
    }
    let cs_enc = *gcc_data.get(p)?;
    p += 1;
    let (cs_table_len, np) = read_uleb128(gcc_data, p)?;
    p = np;
    let table_end = p
        .checked_add(cs_table_len as usize)
        .filter(|&e| e <= gcc_data.len())?;

    let mut call_sites = Vec::new();
    while p < table_end && call_sites.len() < 10_000 {
        let field = |p: usize| {
            decode_eh_pointer_ordered(
                cs_enc,
                gcc_vma + p as u64,
                gcc_vma,
                &gcc_data[..table_end],
                p,
                ptr_size,
                little,
            )
        };
        let Some(start) = field(p) else { break };
        let Some(np) = skip_eh_pointer(cs_enc, gcc_data, p, ptr_size) else {
            break;
        };
        p = np;
        let Some(len) = field(p) else { break };
        let Some(np) = skip_eh_pointer(cs_enc, gcc_data, p, ptr_size) else {
            break;
        };
        p = np;
        let Some(cs_lp) = field(p) else { break };
        let Some(np) = skip_eh_pointer(cs_enc, gcc_data, p, ptr_size) else {
            break;
        };
        p = np;
        let Some((action, np)) = read_uleb128(gcc_data, p) else {
            break;
        };
        p = np;
        call_sites.push(LsdaCallSite {
            start: func_pc_begin.wrapping_add(start),
            len,
            pad: if cs_lp == 0 {
                0
            } else {
                lp_start.wrapping_add(cs_lp)
            },
            action,
        });
    }
    Some(Lsda {
        call_sites,
        action_table: table_end,
        ttype,
    })
}

/// Parse a CIE record's augmentation and return its decoded [`CieAug`] (the FDE
/// `R` encoding plus the LSDA `L` encoding / presence), or `None` on a malformed
/// record. The walk mirrors [`parse_cie_fde_encoding`] but tracks the `L` char's
/// 1-byte LSDA encoding payload (`Cie.processLsdaEncoding`) alongside the `R`
/// char's FDE encoding (`Cie.processFdeEncoding`).
fn parse_cie_aug(rec: &[u8], ptr_size: usize) -> Option<CieAug> {
    let mut p = 8usize; // skip length + cieId
    let version = *rec.get(p)?;
    p += 1;

    let aug_start = p;
    while p < rec.len() && rec[p] != 0 {
        p += 1;
    }
    if p >= rec.len() {
        return None;
    }
    let aug = &rec[aug_start..p];
    p += 1; // skip NUL

    if version >= 4 {
        p += 2; // address_size, segment_selector_size
    }
    let (_, np) = read_uleb128(rec, p)?; // code_alignment_factor
    p = np;
    let (_, np) = read_sleb128(rec, p)?; // data_alignment_factor
    p = np;
    if version == 1 {
        p += 1; // return_address_register (u8)
    } else {
        let (_, np) = read_uleb128(rec, p)?; // return_address_register (uleb)
        p = np;
    }

    // Defaults: no `L`, FDE encoding absptr. Only a `z`-augmentation carries the
    // aug-data block where the `R`/`L`/`P` payloads live.
    let mut fde_enc = DW_EH_PE_ABSPTR;
    let mut has_lsda = false;
    let mut lsda_enc = DW_EH_PE_ABSPTR;
    if aug.first() != Some(&b'z') {
        return Some(CieAug {
            fde_enc,
            has_lsda,
            lsda_enc,
            fde_lsda_off: 0,
            personality: None,
        });
    }
    let (aug_len, np) = read_uleb128(rec, p)?;
    p = np;
    let aug_data_start = p;
    let aug_data_end = (aug_data_start + aug_len as usize).min(rec.len());

    let mut dp = aug_data_start;
    let mut personality = None;
    for &c in &aug[1..] {
        match c {
            b'R' => {
                fde_enc = *rec.get(dp)?;
                dp += 1;
            }
            b'L' => {
                has_lsda = true;
                lsda_enc = *rec.get(dp)?;
                dp += 1;
            }
            b'P' => {
                let enc = *rec.get(dp)?;
                dp += 1;
                personality = Some((enc, dp));
                dp += encoded_size(enc, ptr_size, rec.get(dp..).unwrap_or(&[]));
            }
            b'S' => {}
            _ => {}
        }
        if dp > aug_data_end {
            break;
        }
    }
    // The FDE aug-data LSDA pointer is the FIRST FDE aug-data field for the
    // `zL`/`zPL`/`zPLR` augmentations gcc emits (the `R` char only sizes the FDE
    // pcBegin/pcRange; `P`'s personality is CIE aug-data). Offset 0.
    Some(CieAug {
        fde_enc,
        has_lsda,
        lsda_enc,
        fde_lsda_off: 0,
        personality,
    })
}

/// Advance past a DW_EH_PE-encoded value at `bytes[off..]`, returning the next
/// offset (or `None` past end-of-buffer).
fn skip_eh_pointer(enc: u8, bytes: &[u8], off: usize, ptr_size: usize) -> Option<usize> {
    let sz = encoded_size(enc, ptr_size, bytes.get(off..)?);
    let next = off.checked_add(sz)?;
    if next > bytes.len() {
        return None;
    }
    Some(next)
}

/// The filtered landing-pad entry set: [`scan_eh_frame_landing_pads`] put through
/// the SAME exec-section + funcsym-skip + dedup filter every entry oracle uses, so
/// a landing pad that coincides with a real funcsym (or falls outside an
/// executable section) is dropped. Purely additive — only ever ADDS entries.
pub fn collect_landing_pad_entries(file: &object::File, bytes: &[u8]) -> Vec<u64> {
    let pads = scan_eh_frame_landing_pads(file);
    if pads.is_empty() {
        return Vec::new();
    }
    let execs = executable_sections(file);
    let funcsyms = existing_function_addrs(file, bytes);
    let mut out: Vec<u64> = Vec::new();
    for vma in pads {
        if vma == 0 || !in_executable_section(&execs, vma) {
            continue;
        }
        if funcsyms.binary_search(&vma).is_ok() {
            continue;
        }
        out.push(vma);
    }
    out.sort_unstable();
    out.dedup();
    out
}

/// Parse a CIE record's augmentation and return its FDE pointer-encoding byte
/// (the `R` char's payload), or `None` if the augmentation does not specify one.
/// Faithful to `Cie.processAugmentationString`/`processAugmentationInfo`
/// (Cie.java:204-222, 559-633): walk version / aug-string / [v4: ptrsize,segsize]
/// / code-align(ULEB) / data-align(SLEB) / return-addr-reg / if aug starts with
/// 'z': aug-data-len(ULEB) then the aug-data, in which each aug-string char after
/// 'z' is handled — 'R' → next byte is fdeEncoding; 'L' → 1 byte; 'P' → 1 enc
/// byte + a personality pointer of that enc's size; 'S' → 0.
fn parse_cie_fde_encoding(rec: &[u8], ptr_size: usize) -> Option<u8> {
    // rec = [length:u32][cieId:u32][version:u8][aug-string\0]...
    let mut p = 8usize; // skip length + cieId
    let version = *rec.get(p)?;
    p += 1;

    // Augmentation string (NUL-terminated).
    let aug_start = p;
    while p < rec.len() && rec[p] != 0 {
        p += 1;
    }
    if p >= rec.len() {
        return None;
    }
    let aug = &rec[aug_start..p];
    p += 1; // skip NUL

    if version >= 4 {
        // address_size (u8), segment_selector_size (u8).
        p += 2;
    }

    // code_alignment_factor (ULEB), data_alignment_factor (SLEB).
    let (_, np) = read_uleb128(rec, p)?;
    p = np;
    let (_, np) = read_sleb128(rec, p)?;
    p = np;

    // return_address_register: v1 → u8, else ULEB.
    if version == 1 {
        p += 1;
    } else {
        let (_, np) = read_uleb128(rec, p)?;
        p = np;
    }

    // Only a 'z' augmentation carries aug-data (and thus an encoding byte).
    if aug.first() != Some(&b'z') {
        return None;
    }
    // aug-data length (ULEB), then the aug-data block.
    let (aug_len, np) = read_uleb128(rec, p)?;
    p = np;
    let aug_data_start = p;
    let aug_data_end = (aug_data_start + aug_len as usize).min(rec.len());

    // Walk the aug-string chars after 'z' against the aug-data block.
    let mut dp = aug_data_start;
    for &c in &aug[1..] {
        match c {
            b'R' => {
                // FDE pointer encoding byte.
                return rec.get(dp).copied();
            }
            b'L' => {
                dp += 1; // LSDA encoding byte (ignored).
            }
            b'P' => {
                // personality: 1 encoding byte + a pointer of that enc's size.
                let enc = *rec.get(dp)?;
                dp += 1;
                dp += encoded_size(enc, ptr_size, rec.get(dp..).unwrap_or(&[]));
            }
            b'S' => {} // signal frame: consumes nothing.
            _ => {}
        }
        if dp > aug_data_end {
            break;
        }
    }
    None
}

/// Byte size of a DW_EH_PE-encoded value (for skipping the personality pointer).
/// LEB128 sizes are measured from the trailing bytes.
fn encoded_size(enc: u8, ptr_size: usize, rest: &[u8]) -> usize {
    if enc == DW_EH_PE_OMIT {
        return 0;
    }
    match enc & 0x0f {
        DW_EH_PE_ABSPTR => ptr_size,
        DW_EH_PE_UDATA2 | DW_EH_PE_SDATA2 => 2,
        DW_EH_PE_UDATA4 | DW_EH_PE_SDATA4 => 4,
        DW_EH_PE_UDATA8 | DW_EH_PE_SDATA8 => 8,
        DW_EH_PE_ULEB128 | DW_EH_PE_SLEB128 => read_uleb128(rest, 0).map(|(_, n)| n).unwrap_or(1),
        _ => ptr_size,
    }
}

/// Decode a DW_EH_PE-encoded FDE `pcBegin` pointer at `bytes[field_off..]` whose
/// field lives at `field_vma`. Faithful to `DwarfDecoderFactory` +
/// `AbstractDwarfEHDecoder.resolveRelativeOffset`: read the raw value by `format`,
/// then apply `appl` (pcrel = field_vma + raw; datarel = section_vma + raw;
/// absptr = raw as-is — unlace loads at the file vmas so the image-base adjustment
/// is 0). `indirect` (enc & 0x80) is unresolvable without a runtime relocation —
/// skipped as a documented LOSS (never in the fixtures).
fn decode_eh_pointer_ordered(
    enc: u8,
    field_vma: u64,
    section_vma: u64,
    bytes: &[u8],
    field_off: usize,
    ptr_size: usize,
    little: bool,
) -> Option<u64> {
    if enc == DW_EH_PE_OMIT {
        return None;
    }
    if enc & 0x80 != 0 {
        return None; // indirect — needs the runtime relocated pointer.
    }
    let format = enc & 0x0f;
    let appl = enc & 0x70;
    let slice = bytes.get(field_off..)?;

    let read16 = || {
        let value: [u8; 2] = slice.get(..2)?.try_into().ok()?;
        Some(if little {
            u16::from_le_bytes(value)
        } else {
            u16::from_be_bytes(value)
        })
    };
    let raw: u64 = match format {
        DW_EH_PE_ABSPTR => {
            if ptr_size == 8 {
                read_u64(slice.get(..8)?, little)
            } else {
                read_u32(slice.get(..4)?, little) as u64
            }
        }
        DW_EH_PE_UDATA2 => read16()? as u64,
        DW_EH_PE_SDATA2 => read16()? as i16 as i64 as u64,
        DW_EH_PE_UDATA4 => read_u32(slice.get(..4)?, little) as u64,
        DW_EH_PE_SDATA4 => read_u32(slice.get(..4)?, little) as i32 as i64 as u64,
        DW_EH_PE_UDATA8 => read_u64(slice.get(..8)?, little),
        DW_EH_PE_SDATA8 => read_u64(slice.get(..8)?, little),
        DW_EH_PE_ULEB128 => read_uleb128(bytes, field_off)?.0,
        DW_EH_PE_SLEB128 => read_sleb128(bytes, field_off)?.0 as u64,
        _ => return None,
    };

    let val = match appl {
        DW_EH_PE_PCREL => field_vma.wrapping_add(raw),
        DW_EH_PE_DATAREL => section_vma.wrapping_add(raw),
        0x00 => raw, // absptr (image base is 0 — no rebase).
        _ => raw,    // funcrel/aligned/textrel unused for FDE pcBegin → treat as absptr.
    };
    Some(val)
}

// ===========================================================================
// Little/big-endian + LEB128 byte readers
// ===========================================================================

fn read_u32(b: &[u8], le: bool) -> u32 {
    let a = [b[0], b[1], b[2], b[3]];
    if le {
        u32::from_le_bytes(a)
    } else {
        u32::from_be_bytes(a)
    }
}

fn read_u64(b: &[u8], le: bool) -> u64 {
    let a = [b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7]];
    if le {
        u64::from_le_bytes(a)
    } else {
        u64::from_be_bytes(a)
    }
}

fn read_u64_opt(b: &[u8]) -> Option<u64> {
    if b.len() < 8 {
        return None;
    }
    Some(u64::from_le_bytes([
        b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7],
    ]))
}

fn read_i32(b: &[u8]) -> i32 {
    i32::from_le_bytes([b[0], b[1], b[2], b[3]])
}

/// Read an unsigned LEB128 at `bytes[off..]`, returning `(value, next_off)`.
fn read_uleb128(bytes: &[u8], off: usize) -> Option<(u64, usize)> {
    let mut result: u64 = 0;
    let mut shift = 0u32;
    let mut p = off;
    loop {
        let b = *bytes.get(p)?;
        p += 1;
        result |= ((b & 0x7f) as u64) << shift;
        if b & 0x80 == 0 {
            break;
        }
        shift += 7;
        if shift >= 64 {
            break;
        }
    }
    Some((result, p))
}

/// Read a signed LEB128 at `bytes[off..]`, returning `(value, next_off)`.
fn read_sleb128(bytes: &[u8], off: usize) -> Option<(i64, usize)> {
    let mut result: i64 = 0;
    let mut shift = 0u32;
    let mut p = off;
    let mut byte;
    loop {
        byte = *bytes.get(p)?;
        p += 1;
        result |= ((byte & 0x7f) as i64) << shift;
        shift += 7;
        if byte & 0x80 == 0 {
            break;
        }
        if shift >= 64 {
            break;
        }
    }
    if shift < 64 && byte & 0x40 != 0 {
        result |= -1i64 << shift;
    }
    Some((result, p))
}

// ===========================================================================
// Tests
// ===========================================================================

#[cfg(test)]
mod tests;
