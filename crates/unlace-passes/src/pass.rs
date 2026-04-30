//! The [`Pass`] trait and fixed-point runner.

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
pub fn run_to_fixedpoint(
    passes: &[&dyn Pass],
    func: &mut SsaFunction,
) -> Result<usize, PassError> {
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
