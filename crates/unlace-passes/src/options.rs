//! Configuration for the pass pipeline: which passes run, how they are
//! checked, and the complexity budgets of the expensive analyses.
//!
//! Every struct deserializes from a TOML table with unknown keys rejected,
//! and `Default` is the behaviour of an unconfigured run. A limit of `0`
//! disables that budget.

use std::path::PathBuf;

use serde::{Deserialize, Serialize};

/// Options consumed by [`run_instrumented`](crate::run_instrumented) and the
/// budget-guarded passes.
#[derive(Clone, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
#[serde(default, deny_unknown_fields)]
pub struct PassOptions {
    /// Pass names to skip. `"*"` skips every instrumented pass.
    pub disabled: Vec<String>,
    /// Run only the first N instrumented pass invocations of the process and
    /// skip the rest (opt-bisect).
    pub bisect_limit: Option<usize>,
    /// Run the structural SSA verifier after every successful pass.
    pub verify_each: bool,
    pub sccp: SccpLimits,
    pub iv_opt: IvOptLimits,
    pub variable_merge: VariableMergeLimits,
    pub type_constraint: TypeConstraintLimits,
    pub diagnostics: PassDiagnostics,
}

impl PassOptions {
    /// Whether `name` is listed in [`PassOptions::disabled`].
    pub fn is_disabled(&self, name: &str) -> bool {
        self.disabled
            .iter()
            .any(|entry| entry == "*" || entry == name)
    }
}

/// Work and size budgets for sparse conditional constant propagation.
#[derive(Clone, Copy, Debug, PartialEq, Eq, Serialize, Deserialize)]
#[serde(default, deny_unknown_fields)]
pub struct SccpLimits {
    /// Lattice work items before the solve is abandoned.
    pub max_work: u64,
    /// SSA variables (definitions plus phis) above which SCCP is skipped.
    pub max_vars: usize,
}

impl Default for SccpLimits {
    fn default() -> Self {
        Self {
            max_work: 50_000,
            max_vars: 25_000,
        }
    }
}

/// Size budget shared by induction-variable elimination and strength
/// reduction.
#[derive(Clone, Copy, Debug, PartialEq, Eq, Serialize, Deserialize)]
#[serde(default, deny_unknown_fields)]
pub struct IvOptLimits {
    /// Instructions plus phis above which the loop optimizations are skipped.
    pub max_nodes: usize,
}

impl Default for IvOptLimits {
    fn default() -> Self {
        Self { max_nodes: 20_000 }
    }
}

/// Size budget for interference-graph variable coalescing.
#[derive(Clone, Copy, Debug, PartialEq, Eq, Serialize, Deserialize)]
#[serde(default, deny_unknown_fields)]
pub struct VariableMergeLimits {
    /// Coalescible temporaries above which only per-base naming runs.
    pub max_coalescible_vars: usize,
}

impl Default for VariableMergeLimits {
    fn default() -> Self {
        Self {
            max_coalescible_vars: 5_000,
        }
    }
}

/// Size budget for the TIE-style type constraint solver.
#[derive(Clone, Copy, Debug, PartialEq, Eq, Serialize, Deserialize)]
#[serde(default, deny_unknown_fields)]
pub struct TypeConstraintLimits {
    /// Collected constraints above which solving is skipped.
    pub max_constraints: usize,
}

impl Default for TypeConstraintLimits {
    fn default() -> Self {
        Self {
            max_constraints: 30_000,
        }
    }
}

/// Machine-readable pass-run records the CLI writes when the run finishes.
#[derive(Clone, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
#[serde(default, deny_unknown_fields)]
pub struct PassDiagnostics {
    /// Write per-(function, pass, iteration) wall-clock rows to this CSV.
    pub timing_csv: Option<PathBuf>,
    /// Write the pass-schedule audit (one row per pass decision) to this CSV.
    pub schedule_audit: Option<PathBuf>,
    /// Write a `dump_ir` snapshot per (function, maturity stage, outer
    /// iteration) into this directory.
    pub maturity_dump: Option<PathBuf>,
    /// Open one linkscope phase per pass name while linkscope profiling is on.
    pub linkscope_pass_names: bool,
}
