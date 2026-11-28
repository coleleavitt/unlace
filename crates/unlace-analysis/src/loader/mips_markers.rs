//! MIPS `$gp` (global-pointer) recovery via per-function `t9` register-value
//! tracking — the unlace analog of Ghidra's `MipsAddressAnalyzer`.
//!
//! Unlike ARM `TMode` ([`crate::loader::arm_markers`]), which paints a SLEIGH
//! decode-mode context *bit*, MIPS `$gp` recovery is a **tracked register VALUE**:
//! a constant seeded at a register at a function entry that the decompiler's
//! constant-value analysis then propagates. The boundary it uses is unlace's
//! `TrackedSet`/`TrackedContext` (`globalcontext.rs`), driven exactly like the
//! console `set track <reg> <val> <start> <end>` command (`IfcSettrackedrange`):
//! the commit boundary (`engine.rs::commit_analysis_output`) calls
//! `create_set(func_addr, func_addr+1)` + pushes `TrackedContext{loc, val}`, the
//! per-function `build_arch_handle` snapshots the track base into the handle, and
//! `ActionConstbase` (S3) emits `COPY #val -> reg` at the entry block so constant
//! propagation can resolve `$gp`-relative GOT/`.sdata` loads to real addresses.
//!
//! ## Why `t9`, not `gp`
//!
//! Ghidra's `MipsAddressAnalyzer` recovers `$gp` with **two** register-value
//! mechanisms (`MipsAddressAnalyzer.java`):
//!
//! 1. **`gp` global-assumption** (`checkForGlobalGP:137-191` + `flowConstants:243`):
//!    derive a program-wide `gp_assumption_value` from the `_mips_gp_value` /
//!    `_gp` / `_GP` symbol and `setRegisterValue(func.getEntryPoint(), …, gp=val)`
//!    at every function entry (default-on via `discoverGlobalGPSetting`).
//! 2. **`t9` entry-address assumption** (`assumeT9EntryAddress`, **default true**,
//!    `OPTION_DEFAULT_ASSUME_T9_ENTRY:64`): in the symbolic propagator's
//!    `unknownValue:481-494` callback, an *unknown* `t9` read is assumed to be the
//!    function entry — `setRegisterValue(funcAddr, funcAddr, t9=funcAddr)` — the
//!    MIPS PIC ABI convention (a function is reached via `jalr t9`, so on entry
//!    `t9` holds the callee's own entry address). A PIC prologue then computes
//!    `gp = _gp_disp + t9` (`lui gp; addiu gp; addu gp,gp,t9`), which folds to the
//!    real `$gp`.
//!
//! unlace ports mechanism **(2) `t9 = func_entry`** as the broadly-correct,
//! parity-safe choice for this tier. mechanism (1) — seeding `gp` directly — is
//! **deliberately NOT** ported here, because unlace's `ActionConstbase` is the
//! *unconditional* `COPY #val -> reg` form (it lacks Ghidra's *lazy* `unknownValue`
//! propagator that only assumes a value when the register is genuinely unknown and
//! `clearRegister`s it after a PIC call). An unconditional `COPY #_gp -> gp` at
//! entry is **counterproductive on a PIC function**: such a function recomputes
//! `gp` from `t9` (`addu gp,gp,t9`), and a pre-seeded `gp` interacts with the
//! recompute to poison the value (empirically the `$gp`-relative load then fails to
//! resolve), whereas seeding `t9 = entry` resolves it cleanly. Seeding `t9` is
//! always correct (the ABI guarantees `t9 == entry` on entry) and never poisons a
//! non-PIC function (which ignores `t9`). The `gp`-direct hook (for a non-PIC
//! function that loads `$gp` off the stack and never recomputes it) is a documented
//! follow-up requiring the lazy-`unknownValue` propagator — see LOSS below.
//!
//! ## Recovering the GP value (documentation / cross-check)
//!
//! [`recover_gp_value`] recovers the program-wide `$gp` from the ELF symbol table,
//! the faithful analog of `checkForGlobalGP`: prefer `_mips_gp_value`
//! (`MIPS_ElfExtension.MIPS_GP_VALUE_SYMBOL`), else `_gp`/`_GP`. The MIPS ABI
//! convention is `_gp = .got + 0x7ff0` (the GP bias centring the 16-bit signed
//! `$gp`-relative offset window over the GOT). It is exposed for the `t9`-path's
//! documentation/tests and for a future `gp`-direct hook; the seeded fact uses
//! `t9 = func_entry` (above), not this value.

use object::read::{Object, ObjectSymbol};
use object::{SymbolFlags, SymbolKind};

use crate::pass::{
    AnalysisCtx, AnalysisOutput, AnalysisPass, ContextPaint, Phase, SymFact, SymKind,
    TrackedRegFact,
};

/// The MIPS PIC global-pointer setup register. A function is reached via
/// `jalr t9`, so on entry `t9` holds the callee's own entry address; the PIC
/// prologue computes `gp = _gp_disp + t9`. Faithful to `MipsAddressAnalyzer`'s
/// `t9 = program.getRegister("t9")` (`MipsAddressAnalyzer.java:103`).
const T9: &str = "t9";

/// The MIPS GP bias: `_gp` sits `0x7ff0` past the GOT base so the signed 16-bit
/// `$gp`-relative offset window `[-0x8000, 0x7fff]` is centred over the GOT. A
/// MIPS ABI invariant (`_gp = .got + 0x7ff0`); used by [`recover_gp_value`] only
/// for the documented cross-check, never to seed the `t9` fact.
pub const MIPS_GP_BIAS: u64 = 0x7ff0;

/// Recover the program-wide `$gp` value from the ELF symbol table — the unlace
/// analog of `MipsAddressAnalyzer.checkForGlobalGP` (`:137-191`). Prefers
/// `_mips_gp_value` (`MIPS_ElfExtension.MIPS_GP_VALUE_SYMBOL`), then `_gp`/`_GP`.
/// Returns `None` if no such symbol is present (a stripped binary). This is the
/// global GP; per the module note the seeded fact uses `t9 = func_entry`, not this
/// value, but it is recovered for cross-checking and the future `gp`-direct hook.
pub fn recover_gp_value(file: &object::File) -> Option<u64> {
    let mut gp: Option<u64> = None;
    for sym in file.symbols().chain(file.dynamic_symbols()) {
        let Ok(name) = sym.name() else { continue };
        match name {
            // _mips_gp_value wins outright (the loader-provided value).
            "_mips_gp_value" => return Some(sym.address()),
            "_gp" | "_GP" if gp.is_none() => gp = Some(sym.address()),
            _ => {}
        }
    }
    gp
}

/// Port of `MipsAddressAnalyzer`'s per-function `t9 = func_entry` register-value
/// seeding (the `assumeT9EntryAddress` default-on convention). Emits one
/// [`TrackedRegFact`] (`t9 = addr`) for each MIPS function entry, so a PIC
/// `addu gp,gp,t9` prologue folds to the real `$gp` and `$gp`-relative loads
/// resolve. MIPS-only: empty output on every other language (the analog of
/// `MipsAddressAnalyzer.canAnalyze == processor==MIPS`).
#[derive(Clone, Copy, Default)]
pub struct MipsMarkerPass;

/// Scan an ELF object's FUNC symbols and emit a `t9 = entry` [`TrackedRegFact`]
/// per defined function. Shared by [`AnalysisPass::run`] and the unit tests.
///
/// Mirrors `MipsAddressAnalyzer`'s gate + the `t9 = func.getEntryPoint()`
/// assumption: gated on a MIPS ELF object, one fact per STT_FUNC with a defined
/// (non-zero, non-UND) address. Undefined imports (`.dynsym` address 0) are
/// skipped — a stub has no body to seed. Idempotent against the funcsym stream:
/// the commit boundary keys the tracked set by the entry address.
/// ELF32 pointers sign-extend into a wider selected register; the function's
/// address and native ELF64 values retain their original representation.
fn scan_mips_markers(file: &object::File, t9_size: u32) -> AnalysisOutput {
    let mut out = AnalysisOutput::default();
    // canAnalyze gate: MIPS only. On any other language the pass contributes
    // nothing (== canAnalyze false).
    if !super::mipsabi::is_mips(file.architecture()) {
        return out;
    }
    // Only ELF carries these conventions (the only format unlace loads for MIPS).
    if !matches!(file.format(), object::BinaryFormat::Elf) {
        return out;
    }
    let extend_pointer = !file.is_64() && t9_size > 4;

    for sym in file.symbols().chain(file.dynamic_symbols()) {
        // Only defined functions: STT_FUNC with a real (non-zero, defined)
        // address. An undefined import (`.dynsym` UND, address 0) has no body to
        // seed; a $-prefixed local/section symbol is not a function entry.
        if sym.kind() != SymbolKind::Text {
            continue;
        }
        if sym.is_undefined() {
            continue;
        }
        let addr = sym.address();
        if addr == 0 {
            continue;
        }
        // assumeT9EntryAddress: t9 == the function's own entry address on entry
        // (the MIPS PIC `jalr t9` convention). MipsAddressAnalyzer.unknownValue:492
        // setRegisterValue(funcAddr, funcAddr, t9=funcAddr).
        let value = if extend_pointer {
            i64::from(addr as u32 as i32) as u64
        } else {
            addr
        };
        out.tracked_regs.push(TrackedRegFact {
            func_addr: addr,
            reg: T9,
            value,
        });
    }

    out
}

impl AnalysisPass for MipsMarkerPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "mips_gp"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let Ok(t9) = ctx.arch.get_register_varnode(T9.as_bytes()) else {
            return AnalysisOutput::default();
        };
        scan_mips_markers(ctx.file, t9.size)
    }
}

// ===========================================================================
// MIPS16 / microMIPS ISA_MODE decode-mode painting (the MIPS analog of ARM `$t`)
// ===========================================================================

/// The SLEIGH processor-context variable steering MIPS standard-ISA vs the
/// alternate (MIPS16e/microMIPS) instruction decode. Defined by `mips.sinc`'s
/// `define context contextreg` (`ISA_MODE=(1,1)`, "=1 Decode using alternate
/// ISA, variable") — gated behind `@ifdef ISA_VARIANT`, which the
/// `MIPS:*:32:default` slaspecs (`mips32le.slaspec` etc., resolved by
/// [`crate::loadimage_object`] for a bare MIPS ELF) all `@define` and which then
/// `@include "mips16.sinc"`. `0` = standard MIPS32, `1` = MIPS16e (with the
/// pspec-fixed `RELP=1`) / microMIPS. Faithful to `MIPS_ElfExtension.java`'s
/// `program.getRegister("ISA_MODE")`.
const ISA_MODE: &str = "ISA_MODE";

/// `st_other & 0xf0 == STO_MIPS_MIPS16` (`0xf0`): the binutils marker for a
/// MIPS16e function whose symbol value is the (even) entry. `MIPS_ElfExtension.java:298`.
const STO_MIPS_MIPS16: u8 = 0xf0;
/// `st_other & 0xf0 == STO_MIPS_MICROMIPS` (`0x80`): the microMIPS function
/// marker, the same alternate-ISA decode bit. `MIPS_ElfExtension.java:297`.
const STO_MIPS_MICROMIPS: u8 = 0x80;

/// Port of `MIPS_ElfExtension.applyIsaMode` (`MIPS_ElfExtension.java:412-432`):
/// for each defined STT_FUNC marked MIPS16e/microMIPS, paint `ISA_MODE=1` at the
/// (even) entry so the body decodes in the alternate ISA. The exact MIPS analog
/// of ARM's `$t`/STT_FUNC-LSB → `TMode=1` ([`crate::loader::arm_markers`]) —
/// a decode-mode context BIT, not a tracked register value like
/// [`MipsMarkerPass`]'s `$gp`/`t9`. MIPS-only: empty output on every other
/// language (the `processor==MIPS` gate, `canHandle:331`).
///
/// Two markers enable the alternate ISA (upstream sets `ISA_MODE=1` for either):
/// 1. **LSB-set symbol value** (`(symVal & 1) != 0`): the address-bit-0 Thumb-style
///    convention — re-home to the even entry (`address.previous()`).
/// 2. **`st_other & 0xf0`** = `STO_MIPS_MIPS16`/`STO_MIPS_MICROMIPS`: the binutils
///    `st_other` marker with an even symbol value (what `mips-linux-gnu-gcc 10.3.0
///    -mips16` actually emits — see the fixture).
#[derive(Clone, Copy, Default)]
pub struct MipsIsaModePass;

/// Scan an ELF object's FUNC symbols and emit an `ISA_MODE=1` [`ContextPaint`]
/// (REUSING the existing context-paint commit arm, `engine.rs::commit_analysis_output`
/// step 6 — the same arm the ARM `TMode` paints use) at the even entry of each
/// MIPS16e/microMIPS function, plus a re-home [`SymFact`] (`SymKind::Function`)
/// for an LSB-set symbol (the MIPS analog of Increment 17's Thumb-FUNC re-home).
/// Shared by [`AnalysisPass::run`] and the unit tests.
///
/// Faithful to `applyIsaMode`'s gate + the `setValue(ISA_MODE, addr, addr, 1)`:
/// gated on a MIPS ELF object, one paint per STT_FUNC carrying the alternate-ISA
/// marker. Undefined imports (`.dynsym` UND, address 0) are skipped (no body).
pub(crate) fn scan_mips_isa_markers(file: &object::File) -> AnalysisOutput {
    let mut out = AnalysisOutput::default();
    // canHandle gate: MIPS only (the analog of MIPS_ElfExtension.canHandle:331,
    // e_machine == EM_MIPS). On any other language the pass contributes
    // nothing (the belt half: the commit boundary also swallows an "ISA_MODE not
    // registered" error, so this is a strict no-op off-MIPS).
    if !super::mipsabi::is_mips(file.architecture()) {
        return out;
    }
    // Only ELF carries these conventions (the only format unlace loads for MIPS).
    if !matches!(file.format(), object::BinaryFormat::Elf) {
        return out;
    }

    for sym in file.symbols().chain(file.dynamic_symbols()) {
        // Only defined functions (STT_FUNC with a real address). applyIsaMode is
        // reached only from evaluateElfSymbol's `getType() == STT_FUNC` branch
        // (MIPS_ElfExtension.java:396). An undefined import has no body to decode.
        if sym.kind() != SymbolKind::Text {
            continue;
        }
        if sym.is_undefined() {
            continue;
        }
        let addr = sym.address();
        if addr == 0 {
            continue;
        }

        // The st_other field (the binutils MIPS16/microMIPS marker). The generic
        // ObjectSymbol API surfaces it via SymbolFlags::Elf.
        let st_other = match sym.flags() {
            SymbolFlags::Elf { st_other, .. } => st_other,
            _ => 0,
        };
        let mips_mode = st_other & 0xf0;

        // applyIsaMode:419-431 — enable the alternate ISA if EITHER the symbol
        // value bit-0 is set (re-home to even) OR st_other marks MIPS16/microMIPS.
        let (even, enable_isa, lsb_set) = if (addr & 1) != 0 {
            // (1) LSB-set address (Thumb-style): re-home to the even entry.
            (addr & !1, true, true)
        } else {
            // (2) st_other marker; the symbol value is already the even entry.
            (
                addr,
                mips_mode == STO_MIPS_MIPS16 || mips_mode == STO_MIPS_MICROMIPS,
                false,
            )
        };

        if !enable_isa {
            continue;
        }

        // setValue(ISA_MODE, address, address, 1): paint the alternate-ISA bit at
        // the even entry. REUSES the context-paint commit arm (no new arm).
        out.context_paints.push(ContextPaint {
            addr: even,
            end: None,
            var: ISA_MODE,
            value: 1,
        });

        // MIPS16-FUNC re-home (only for the LSB-set form): emit the FunctionSymbol
        // at the EVEN entry so `load function <name>` / a CALL resolves at the
        // address the `ISA_MODE` paint + the decode use (the engine decodes at the
        // even address). The st_other form already records the symbol at the even
        // value, so its funcsym is already where the paint lands — no re-home
        // needed (and emitting one would be a harmless idempotent duplicate; we
        // skip it to mirror Ghidra, which only moves the LSB-set symbol). Named
        // symbols only — an unnamed entry has no name to re-home.
        if lsb_set
            && let Ok(name) = sym.name()
            && !name.is_empty()
        {
            out.symbols.push(SymFact {
                addr: even,
                name: name.to_string(),
                kind: SymKind::Function,
            });
        }
    }

    out
}

impl AnalysisPass for MipsIsaModePass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "mips_isa"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        scan_mips_isa_markers(ctx.file)
    }
}

#[cfg(test)]
mod tests;
