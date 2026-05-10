//! The [`Pass`] trait and fixed-point runner.

use std::hash::{Hash, Hasher};

use unlace_ir::ssa::SsaFunction;

/// Error type for optimization passes.
#[derive(Debug, thiserror::Error)]
pub enum PassError {
    /// An instruction referenced a block that does not exist.
    #[error("block {block} not found in function")]
    MissingBlock { block: String },

    /// An instruction had an unexpected number of inputs for its opcode.
    #[error("opcode {opcode} expected {expected} inputs, found {found}")]
    ArityMismatch {
        opcode: &'static str,
        expected: usize,
        found: usize,
    },

    /// An invariant required by the pass was violated.
    #[error("pass invariant violated: {message}")]
    InvariantViolation { message: String },
}

/// An optimization or analysis pass over SSA-form IR.
///
/// Passes are stateless: all mutable state lives in the [`SsaFunction`].
/// A pass returns `Ok(true)` when it changed the function and `Ok(false)`
/// when nothing was modified. The caller iterates to a fixed point.
pub trait Pass: Send + Sync {
    /// Human-readable name for diagnostics and tracing.
    fn name(&self) -> &str;

    /// Run one iteration of the pass.
    ///
    /// Returns `Ok(true)` if the function was modified, `Ok(false)` if
    /// no changes were made. The caller is responsible for iterating
    /// until all passes return `Ok(false)`.
    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError>;
}

/// Run a sequence of passes to a fixed point, returning the total number
/// of individual pass invocations that reported a change.
///
/// Each iteration runs every pass in order. If *any* pass reports a
/// change the whole sequence is re-run. The loop terminates when a full
/// sweep produces no changes.
pub fn run_to_fixedpoint(passes: &[&dyn Pass], func: &mut SsaFunction) -> Result<usize, PassError> {
    const MAX_ROUNDS: usize = 200;
    let mut total_changes = 0usize;
    let func_name = func.function.name.clone();
    let mut round = 0usize;
    loop {
        round += 1;
        if round > MAX_ROUNDS {
            tracing::error!(
                func = %func_name,
                rounds = MAX_ROUNDS,
                "run_to_fixedpoint did not converge — passes are oscillating"
            );
            return Err(PassError::InvariantViolation {
                message: format!(
                    "run_to_fixedpoint exceeded {MAX_ROUNDS} rounds on '{func_name}' — passes oscillating",
                ),
            });
        }
        let mut changed_this_round = false;
        let mut changed_passes: Vec<&str> = Vec::new();
        for pass in passes {
            let pass_start = std::time::Instant::now();
            let changed = pass.run(func)?;
            let elapsed = pass_start.elapsed();
            if elapsed >= std::time::Duration::from_millis(500) {
                tracing::warn!(
                    func = %func_name,
                    pass = pass.name(),
                    round,
                    elapsed_ms = elapsed.as_millis(),
                    "slow pass"
                );
            }
            if changed {
                changed_this_round = true;
                total_changes += 1;
                changed_passes.push(pass.name());
            }
        }
        if changed_this_round {
            tracing::trace!(
                func = %func_name,
                round,
                ?changed_passes,
                "fixedpoint round"
            );
        }
        if !changed_this_round {
            break;
        }
    }
    tracing::debug!(
        func = %func_name,
        rounds = round,
        total_changes,
        "run_to_fixedpoint converged"
    );
    Ok(total_changes)
}

/// Default cap on outer pipeline iterations. Most cascades converge in
/// 1–2 outer rounds; we cap at 5 as a safeguard against runaway cycles.
pub const DEFAULT_OUTER_FIXEDPOINT_CAP: usize = 5;

/// Summary of one outer-fixed-point cycle.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct OuterFixedpointReport {
    /// Number of outer iterations performed (always at least 1).
    pub iterations: usize,
    /// Whether the loop bailed out at the iteration cap without converging.
    pub hit_cap: bool,
    /// Per-iteration: did the type/structural signature change after this iteration?
    pub changed_per_iteration: Vec<bool>,
}

/// Compute a stable signature of *type-recovery state* on an [`SsaFunction`].
///
/// Used by [`run_outer_fixedpoint`] to detect whether a re-run is warranted.
/// The signature folds together fields that downstream IR-level passes care
/// about: `var_types`, `composite_var_types`, `inferred_params`,
/// `inferred_return_type`, `inferred_structs`, plus a coarse structural
/// fingerprint (block ids and per-block instruction count + opcodes) so that
/// pure IR rewrites (CSE/GVN/constant-fold) which don't move types still
/// register as "something changed, worth another type-recovery round".
pub fn ssa_type_signature(func: &SsaFunction) -> u64 {
    let mut hasher = std::collections::hash_map::DefaultHasher::new();

    // Type-recovery state.
    func.var_types.len().hash(&mut hasher);
    for (sv, ty) in &func.var_types {
        sv.hash(&mut hasher);
        ty.hash(&mut hasher);
    }
    func.composite_var_types.len().hash(&mut hasher);
    for (sv, ty) in &func.composite_var_types {
        sv.hash(&mut hasher);
        ty.hash(&mut hasher);
    }
    func.inferred_params.len().hash(&mut hasher);
    for (name, ty) in &func.inferred_params {
        name.hash(&mut hasher);
        ty.hash(&mut hasher);
    }
    func.inferred_return_type.hash(&mut hasher);
    func.inferred_structs.len().hash(&mut hasher);
    for (offset, ty) in &func.inferred_structs {
        offset.hash(&mut hasher);
        ty.hash(&mut hasher);
    }

    // Stack-var recovery (name + ty + offset, but not the access list which
    // can shuffle without semantic change).
    func.stack_vars.len().hash(&mut hasher);
    for (offset, sv) in &func.stack_vars {
        offset.hash(&mut hasher);
        sv.offset.hash(&mut hasher);
        sv.name.hash(&mut hasher);
        sv.ty.hash(&mut hasher);
    }

    // Coarse IR fingerprint — counts + opcodes so pure rewrites are visible.
    func.function.blocks.len().hash(&mut hasher);
    for (bid, block) in &func.function.blocks {
        bid.hash(&mut hasher);
        block.insns.len().hash(&mut hasher);
        for insn in &block.insns {
            insn.op.hash(&mut hasher);
            insn.inputs.len().hash(&mut hasher);
        }
    }

    hasher.finish()
}

/// Run an outer pipeline cycle to a fixed point.
///
/// `cycle` is invoked repeatedly. After each invocation we recompute
/// [`ssa_type_signature`]; if it changed we run again, capped at `max_iters`.
/// This mirrors IDA's outer driver loop (sub_14B8B0 / sub_F9180): IR
/// simplification feeds type recovery, which feeds back into IR
/// simplification. Cascading across the cycle is what makes both halves
/// fully exploit each other's progress.
///
/// `cycle` receives the iteration index (0-based) so it can vary behavior
/// per pass — e.g. emit verbose tracing only on the first pass.
///
/// Returns an [`OuterFixedpointReport`] describing what happened.
pub fn run_outer_fixedpoint<F>(
    func: &mut SsaFunction,
    max_iters: usize,
    mut cycle: F,
) -> Result<OuterFixedpointReport, PassError>
where
    F: FnMut(&mut SsaFunction, usize) -> Result<(), PassError>,
{
    let max_iters = max_iters.max(1);
    let func_name = func.function.name.clone();
    let mut report = OuterFixedpointReport::default();
    let mut prev_sig = ssa_type_signature(func);

    for iter in 0..max_iters {
        cycle(func, iter)?;
        report.iterations = iter + 1;
        let new_sig = ssa_type_signature(func);
        let changed = new_sig != prev_sig;
        report.changed_per_iteration.push(changed);
        tracing::trace!(
            func = %func_name,
            iter = iter + 1,
            changed,
            "outer fixedpoint cycle"
        );
        if !changed {
            return Ok(report);
        }
        prev_sig = new_sig;
    }

    // We hit the cap. Run one final cycle to check whether the *next* pass
    // would have changed anything; if it would, mark `hit_cap`.
    let last_changed = report.changed_per_iteration.last().copied().unwrap_or(false);
    if last_changed {
        report.hit_cap = true;
        tracing::debug!(
            func = %func_name,
            cap = max_iters,
            "outer fixedpoint reached iteration cap without converging"
        );
    }
    Ok(report)
}
