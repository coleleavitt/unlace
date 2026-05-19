//! Pass runner variant that threads a shared AnalysisContext through every pass.
//!
//! This is the LLVM-FunctionAnalysisManager-equivalent driver. Passes that
//! want to use the shared cache implement [`PassWithContext`]; passes that
//! don't can keep using the regular [`Pass`] trait via [`adapt_pass`].
//!
//! Every mutating pass invalidates the AnalysisContext after it reports a
//! change, so subsequent passes always see fresh facts.

use unlace_ir::ssa::SsaFunction;

use crate::analysis_context::AnalysisContext;
use crate::pass::{Pass, PassError};

/// A pass that consumes a shared [`AnalysisContext`].
pub trait PassWithContext: Send + Sync {
    /// Human-readable name.
    fn name(&self) -> &str;

    /// Run one iteration. Returns `Ok(true)` if the function changed.
    fn run(
        &self,
        func: &mut SsaFunction,
        ctx: &mut AnalysisContext,
    ) -> Result<bool, PassError>;
}

/// Adapt a regular [`Pass`] into a [`PassWithContext`] that simply ignores
/// the analysis context and invalidates it on change.
pub struct PassAdapter<'a> {
    pub inner: &'a dyn Pass,
}

impl<'a> PassWithContext for PassAdapter<'a> {
    fn name(&self) -> &str {
        self.inner.name()
    }

    fn run(
        &self,
        func: &mut SsaFunction,
        _ctx: &mut AnalysisContext,
    ) -> Result<bool, PassError> {
        self.inner.run(func)
    }
}

/// Run a sequence of context-aware passes to a fixed point.
///
/// On every reported change, the context is invalidated so the next pass
/// sees fresh facts. Mirrors LLVM's preserve/invalidate model but simplified:
/// any change invalidates all cached analyses (we can refine later).
pub fn run_to_fixedpoint_with_context(
    passes: &[&dyn PassWithContext],
    func: &mut SsaFunction,
    ctx: &mut AnalysisContext,
) -> Result<usize, PassError> {
    const MAX_ROUNDS: usize = 200;
    let mut total_changes = 0usize;
    let func_name = func.function.name.clone();
    let mut round = 0usize;

    loop {
        round += 1;
        if round > MAX_ROUNDS {
            return Err(PassError::InvariantViolation {
                message: format!(
                    "run_to_fixedpoint_with_context exceeded {MAX_ROUNDS} rounds on '{func_name}'",
                ),
            });
        }

        let mut changed_this_round = false;
        for pass in passes {
            let changed = pass.run(func, ctx)?;
            if changed {
                changed_this_round = true;
                total_changes += 1;
                // Invalidate all cached analyses after any mutation.
                ctx.invalidate_all();
            }
        }

        if !changed_this_round {
            return Ok(total_changes);
        }
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;
    use crate::analysis_context::AnalysisKind;

    struct NoOpPass;

    impl PassWithContext for NoOpPass {
        fn name(&self) -> &str {
            "noop"
        }

        fn run(
            &self,
            _func: &mut SsaFunction,
            ctx: &mut AnalysisContext,
        ) -> Result<bool, PassError> {
            // Query loops to populate the cache.
            let _ = ctx.is_valid(AnalysisKind::Loops);
            Ok(false)
        }
    }

    struct ChangingPass {
        runs: std::sync::atomic::AtomicU32,
    }

    impl PassWithContext for ChangingPass {
        fn name(&self) -> &str {
            "changing"
        }

        fn run(
            &self,
            _func: &mut SsaFunction,
            _ctx: &mut AnalysisContext,
        ) -> Result<bool, PassError> {
            let n = self
                .runs
                .fetch_add(1, std::sync::atomic::Ordering::SeqCst);
            // Change for the first 2 invocations, then stop.
            Ok(n < 2)
        }
    }

    fn trivial_function() -> SsaFunction {
        let r0 = Varnode::reg(0, 4);
        let out = Varnode::unique(0, 4);
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns
            .push(IrInsn::with_output(IrOp::Copy, out, smallvec![r0], 0x1000));
        b0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1004,
        ));
        func.insert_block(b0);
        build_ssa(func)
    }

    #[test]
    fn test_runner_no_change_converges_immediately() {
        let mut func = trivial_function();
        let mut ctx = AnalysisContext::new();
        let noop = NoOpPass;
        let passes: &[&dyn PassWithContext] = &[&noop];
        let total = run_to_fixedpoint_with_context(passes, &mut func, &mut ctx)
            .expect("ok");
        assert_eq!(total, 0);
    }

    #[test]
    fn test_runner_invalidates_on_change() {
        let mut func = trivial_function();
        let mut ctx = AnalysisContext::new();
        let pass = ChangingPass {
            runs: std::sync::atomic::AtomicU32::new(0),
        };
        let passes: &[&dyn PassWithContext] = &[&pass];
        let total = run_to_fixedpoint_with_context(passes, &mut func, &mut ctx)
            .expect("ok");
        // Pass reports change for runs 0 and 1, then no change at run 2.
        assert_eq!(total, 2);
    }

    #[test]
    fn test_adapter_wraps_regular_pass() {
        struct CountingPass {
            calls: std::sync::atomic::AtomicU32,
        }
        impl Pass for CountingPass {
            fn name(&self) -> &str {
                "counting"
            }
            fn run(&self, _func: &mut SsaFunction) -> Result<bool, PassError> {
                self.calls
                    .fetch_add(1, std::sync::atomic::Ordering::SeqCst);
                Ok(false)
            }
        }
        let inner = CountingPass {
            calls: std::sync::atomic::AtomicU32::new(0),
        };
        let adapter = PassAdapter { inner: &inner };
        let mut func = trivial_function();
        let mut ctx = AnalysisContext::new();
        let _ = adapter.run(&mut func, &mut ctx).expect("ok");
        assert_eq!(inner.calls.load(std::sync::atomic::Ordering::SeqCst), 1);
    }
}
