//! ARM/Thumb mapping-symbol → decode-mode (`TMode`) painting — the unlace analog
//! of Ghidra's ARM ELF-loader extension + `ArmSymbolAnalyzer`.
//!
//! Ghidra recovers the ARM/Thumb decode mode from **two** distinct ELF
//! conventions, and the named analyzer is not the only (or even the primary)
//! source:
//!
//! - **ARM mapping symbols** (`$t`/`$a`/`$d`, ARM ELF ABI): `$t` marks the start
//!   of a Thumb run, `$a` an ARM (A32) run, `$d` a data run. Ghidra paints the
//!   `TMode` processor-context variable per range:
//!   `Ghidra/Processors/ARM/.../elf/extend/ARM_ElfExtension.java:166-196`
//!   `evaluateElfSymbol`: the `$t`/`$t.` branch (`:166`) does
//!   `programContext.setValue(TMode, addr, addr, 1)`, `$a`/`$a.` (`:176`) sets
//!   `TMode=0`, `$d`/`$d.` (`:189`) lays undefined data (listing-only markup).
//! - **The STT_FUNC odd-address (LSB) convention**: a Thumb function symbol is
//!   recorded at `entry|1`. `ARM_ElfExtension.java:197-204` (the STT_FUNC
//!   fallback) and `creatingFunction:117-141` mask the LSB off and set
//!   `TMode=1` at the (even) entry. `Features/Base/.../analysis/ArmSymbolAnalyzer.java:48-100`
//!   is a separate later pass that re-applies only this LSB convention
//!   (`getProgramContext().setValue(TMode, newAddr, newAddr, 1)`); its
//!   `canAnalyze:172-177` requires `processor==ARM && getRegister("TMode")!=null`.
//!
//! This pass ports BOTH mechanisms as additive [`ContextPaint`] facts:
//! `$t`/STT_FUNC-LSB → `TMode=1` (Thumb), `$a` → `TMode=0` (ARM). The commit boundary
//! (`unlace-console`'s `commit_analysis_output`) paints each over the engine's
//! `ContextDatabase`, the exact analog of `programContext.setValue(TMode,…)`.
//! `TMode` defaults to 0 (ARM) — registered by the ARM `.pspec`
//! (`ARMt.pspec` `<context_data><set name="TMode" val="0">`, applied by
//! `Architecture::parse_processor_config`), so painting 1 = Thumb.
//!
//! ## Gating (faithful to `ArmSymbolAnalyzer.canAnalyze`)
//!
//! The pass only fires on an ARM object (`object::Architecture::Arm`); on any
//! other language it returns an empty output, mirroring `canAnalyze == false`.
//! Belt-and-suspenders: the commit boundary additionally swallows the
//! "`TMode` not registered" error so painting can never regress a non-ARM
//! decompile (see `commit_analysis_output`).
//!
//! ## LOSS / divergences from upstream
//!
//! - **`$d` data runs are a no-op.** Ghidra's `$d` branch lays *undefined data*
//!   (listing markup that protects the bytes from disassembly); unlace has no
//!   `createUndefinedData` equivalent at this tier, and the protection has
//!   negligible decompiler payoff (it only matters for the listing view). We do
//!   not emit a fact for `$d`/`$b`. Documented LOSS.
//! - **The Thumb-FUNC address shift is now re-homed.** Ghidra *moves* a Thumb
//!   `FUNC` symbol from `entry|1` to `entry` (`moveFunction`/`setElfSymbolAddress`)
//!   and renames it; unlace's `read_loader_symbols` installs the `FUNC` at the odd
//!   address. This pass additionally emits a [`SymFact`] (`SymKind::Function`) at
//!   the normalized (even) entry — the address the `TMode=1` paint and the engine's
//!   decode use — so `load function <name>` and a CALL resolve there. The commit
//!   boundary's symbol arm is idempotent (it skips an already-installed function), so
//!   the odd- and even-address installs coexist without a double-symbol collision.
//! - **MIPS `$gp` / MIPS16 `ISA_MODE` are out of scope.** MIPS `$gp` is not a
//!   decode-mode context paint at all — it is a *tracked register value* set at
//!   each function entry (`MipsAddressAnalyzer.flowConstants`,
//!   `MIPS_ElfExtension.java:508-515` sources `_mips_gp_value`) and consumed by
//!   constant propagation (S3). MIPS16 `ISA_MODE` is the exact `$t`/STT_FUNC-LSB
//!   analog (`MIPS_ElfExtension.applyIsaMode:412-432`) and could be added here
//!   with the identical mechanism (var `"ISA_MODE"`) given a MIPS16 fixture.
//!   Both are deferred — see `docs/history/analysis-port-plan.md` (`arch-markers` risks).

use object::SymbolKind;
use object::read::{Object, ObjectSymbol};

use crate::pass::{
    AnalysisCtx, AnalysisOutput, AnalysisPass, ContextPaint, Phase, SymFact, SymKind,
};

/// The SLEIGH processor-context variable steering ARM/Thumb instruction decode.
/// Defined by the ARM `.pspec` (`ARMt.pspec` `<context_data>`); `0` = ARM (A32),
/// `1` = Thumb (T16/T32). Faithful to `ARM_ElfExtension.java`'s `TMode`.
const TMODE: &str = "TMode";

/// Port of the ARM mapping-symbol + STT_FUNC-LSB → `TMode` decode-mode painting
/// (`ARM_ElfExtension.evaluateElfSymbol` + `ArmSymbolAnalyzer`). Additive,
/// never-failing: emits [`ContextPaint`] facts the commit boundary applies to the
/// engine's `ContextDatabase`. Fires only on an ARM object (the
/// `canAnalyze == processor==ARM` gate); empty on any other language.
#[derive(Clone, Copy, Default)]
pub struct ArmMarkerPass;

/// `true` if `name` is an ARM Thumb mapping symbol: exactly `$t` or a `$t.`
/// prefix (`$t.0`, `$t.1`, …). Faithful to `ARM_ElfExtension.java:166`
/// (`symName.equals("$t") || symName.startsWith("$t.")`).
fn is_thumb_marker(name: &str) -> bool {
    name == "$t" || name.starts_with("$t.")
}

/// `true` if `name` is an ARM (A32) mapping symbol: `$a` or `$a.` prefix.
/// Faithful to `ARM_ElfExtension.java:176`.
fn is_arm_marker(name: &str) -> bool {
    name == "$a" || name.starts_with("$a.")
}

/// Scan an ELF object's symbols for the two ARM decode-mode conventions and emit
/// [`ContextPaint`] facts. Shared by [`AnalysisPass::run`] and the unit tests.
///
/// Two passes over the symbol streams (`.symtab` + `.dynsym`, the same chain
/// `noreturn.rs` uses):
/// 1. **Mapping symbols** (`$t`/`$a`), matched by name regardless of `st_type`
///    (the ARM ABI records them as `STT_NOTYPE` local symbols). `$d`/`$b` are a
///    documented no-op (no `createUndefinedData` at this tier).
/// 2. **STT_FUNC with `st_value & 1`** (the Thumb odd-address convention): emit
///    `TMode=1` at the normalized even address `value & !1`.
pub(crate) fn scan_arm_markers(file: &object::File) -> AnalysisOutput {
    let mut out = AnalysisOutput::default();
    // canAnalyze gate: ARM only. Mirrors ArmSymbolAnalyzer.canAnalyze:172-177
    // (processor==ARM && getRegister("TMode")!=null). On any other language the
    // pass contributes nothing (== canAnalyze false).
    if file.architecture() != object::Architecture::Arm {
        return out;
    }
    // Only ARM ELF objects carry these conventions (the only format unlace loads).
    if !matches!(file.format(), object::BinaryFormat::Elf) {
        return out;
    }

    for sym in file.symbols().chain(file.dynamic_symbols()) {
        let Ok(name) = sym.name() else { continue };
        let addr = sym.address();

        // (1) ARM mapping symbols — name-matched (STT_NOTYPE local symbols, so
        // `kind()` is not Text; do NOT filter on kind here).
        if is_thumb_marker(name) {
            // ARM_ElfExtension.java:166-175 — setValue(TMode, addr, addr, 1).
            out.context_paints.push(ContextPaint {
                addr,
                end: None,
                var: TMODE,
                value: 1,
            });
            continue;
        }
        if is_arm_marker(name) {
            // ARM_ElfExtension.java:176-185 — setValue(TMode, addr, addr, 0).
            out.context_paints.push(ContextPaint {
                addr,
                end: None,
                var: TMODE,
                value: 0,
            });
            continue;
        }
        // `$d`/`$d.` (data, :189) and `$b` (:186): LOSS — no createUndefinedData
        // equivalent at this tier; emit nothing.

        // (2) STT_FUNC with the Thumb odd-address (LSB) convention. ARM records a
        // Thumb function symbol at `entry|1`. ARM_ElfExtension.java:197-204 (the
        // STT_FUNC fallback) + creatingFunction:117-141 mask the LSB and set
        // TMode=1 at the even entry, AND *move* the FUNC symbol from `entry|1` to
        // `entry` (moveFunction/setElfSymbolAddress).
        if sym.kind() == SymbolKind::Text && (addr & 1) != 0 {
            let even = addr & !1;
            out.context_paints.push(ContextPaint {
                addr: even,
                end: None,
                var: TMODE,
                value: 1,
            });
            // Thumb-FUNC re-home: emit the FunctionSymbol at the EVEN entry so
            // `load function <name>` / a CALL resolves at the address the `TMode`
            // paint uses (the engine decodes at the even address). Ghidra moves the
            // symbol; unlace's `read_loader_symbols` installs it at the ODD address,
            // so this additive SymFact makes the even entry known too. The commit
            // boundary's symbol arm is idempotent (it skips an already-installed
            // function), so the odd-address install and this even-address one
            // coexist without a double-symbol collision. Named symbols only — an
            // unnamed `.symtab` entry has no name to re-home (a NUL name is skipped
            // by the `is_empty` guard, exactly as Ghidra leaves an unnamed FUNC).
            if !name.is_empty() {
                out.symbols.push(SymFact {
                    addr: even,
                    name: name.to_string(),
                    kind: SymKind::Function,
                });
            }
        }
    }

    out
}

impl AnalysisPass for ArmMarkerPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "arm_markers"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        scan_arm_markers(ctx.file)
    }
}

#[cfg(test)]
mod tests;
