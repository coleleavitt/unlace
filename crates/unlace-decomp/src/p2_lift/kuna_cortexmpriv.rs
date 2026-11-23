//! (kuna `cortexmpriv`) Fold the Cortex-M `isCurrentModePrivileged()` guard that
//! the vendored ARM SLEIGH wraps around every MRS/MSR.
//!
//! # The defect
//!
//! `specs/Ghidra/Processors/ARM/data/languages/ARMTHUMBinstructions.sinc` models
//! every VERSION_7M (Cortex-M) special-register move as a *runtime* privilege
//! test rather than as a single operation:
//!
//! ```text
//! b:1 = isCurrentModePrivileged();
//! if (!b) goto <notPriv>;
//! <the real effect>
//! <notPriv>
//! ```
//!
//! Twelve constructors do this (`mrs`/`msr` against `ipsr`, `primask`,
//! `basepri`, `basepri_max`, `faultmask`, `control`). kuna lowers the model
//! literally, so **each MRS/MSR contributes one extra basic block and two extra
//! CFG edges that exist in no source**. On RIOT's `thread_sleep` — four
//! instructions' worth of guard around an `irq_disable`/`irq_restore` pair —
//! that is the entire difference between the recovered CFG and the source's.
//!
//! # The fix
//!
//! Register a `<callotherfixup>` for `isCurrentModePrivileged` whose body is the
//! constant `1`. The guard condition then constant-folds, the `goto` and its
//! block die with it, and the real effect survives unchanged. IDA and Binary
//! Ninja reach the same shape by modelling MRS/MSR as a plain intrinsic with no
//! test at all.
//!
//! Assuming the CPU is privileged is a **modelling judgement**, not a proof:
//! Cortex-M Thread mode can run unprivileged (CONTROL.nPRIV = 1), and in that
//! state the hardware really does make these moves read as zero. It is the right
//! judgement for essentially all decompiled firmware — RTOS kernels, ISRs and
//! `main` all run privileged, and every one of the twelve guarded constructors
//! is a *kernel* operation — but it is exactly the kind of call an option is for,
//! so it ships as one (default off, on in the `aggressive` preset).
//!
//! # Where it is wired
//!
//! The payload is synthesized here rather than added to any `*.cspec` so the
//! vendored spec tree stays byte-identical to upstream (`docs/history.md` sync
//! procedure), and it is registered through the same
//! `UserOpManage::manual_call_other_fixup` path a cspec `<callotherfixup>` uses,
//! right after the cspec's own, so `parse_inject_all` compiles it with the rest.
//!
//! Registration is unconditional (on any language that declares the user-op) for
//! the same reason `kuna_msvcftol`'s is: the architecture is bootstrapped at
//! `load file`, before the `option` lines are applied, so the flag is not
//! readable here. A registered payload is inert until something consumes it, and
//! the consumption gate — `FlowInfo`'s `is_injected_userop` predicate in
//! `infra/decompile_drive.rs`, the one live per-CALLOTHER test that sees the
//! applied options — is where `option cortexmpriv off` takes effect. With the
//! option off the CALLOTHER survives untouched and prints through the ordinary
//! user-op path (which reads only the op's name and display form, never its
//! type), so the emitted C is byte-identical to a build without this module.

use unlace_base::types::int4;

pub use crate::kuna_specnames::CORTEXMPRIV_USEROP as USEROP_NAME;

pub use crate::kuna_specnames::CORTEXMPRIV_OUTPUT as OUTPUT_NAME;

pub use crate::kuna_specnames::CORTEXMPRIV_SNIPPET as SNIPPET;

/// Whether `injectid` is the payload this module registered, given the id parked
/// on the architecture at bootstrap. Used by the consumption gate so that
/// `option cortexmpriv off` suppresses exactly this fixup and no other.
pub fn is_our_fixup(registered: Option<int4>, injectid: int4) -> bool {
    registered == Some(injectid)
}

crate::kuna_flag!(
    /// (kuna `cortexmpriv`) Assume the Cortex-M core is privileged, folding away
    /// the `isCurrentModePrivileged()` guard the vendored ARM SLEIGH wraps around
    /// every VERSION_7M MRS/MSR (`kuna_cortexmpriv`).
    ///
    /// Twelve `ARMTHUMBinstructions.sinc` constructors lower as
    /// `b:1 = isCurrentModePrivileged(); if (!b) goto <notPriv>; <effect>`, so
    /// each MRS/MSR costs one basic block and two CFG edges that exist in no
    /// source. On the guard folds to `1` and only the effect survives.
    ///
    /// Read at the CALLOTHER consumption gate
    /// (`decompile_drive::is_injected_userop`), not at registration: the payload
    /// is installed at architecture bootstrap, before any `option` line.
    Cortexmpriv,
    "cortexmpriv",
    "Cortex-M privileged-mode guard folding",
    unset: false,
    shipped: true
);
