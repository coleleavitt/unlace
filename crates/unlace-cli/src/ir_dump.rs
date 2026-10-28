//! `ir-dump`: SSA snapshots of discovered functions at a chosen pipeline milestone.

use std::str::FromStr;

use anyhow::{Result, bail};
use unlace_lift::get_lifter;
use unlace_loader::BinaryImage;

use crate::pipeline;
use crate::profiling::{self, TraceField};

/// Pipeline milestone selected by `ir-dump --phase`.
///
/// `Lift` snapshots the SSA function immediately after construction (no
/// optimisation passes have run). `PostPasses` is the default and matches
/// the IR the C printer would receive. `PostStructuring` re-runs
/// `structure_preserve_returns`, which may rewrite the SSA in place
/// (eager-return splitting, etc.), then dumps the resulting IR.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub enum IrDumpPhase {
    Lift,
    #[default]
    PostPasses,
    PostStructuring,
    /// Batch 18: emit the lvar audit table instead of raw SSA.
    Lvars,
    /// Batch 20: emit the type-recovery audit table instead of raw SSA.
    Types,
}

impl FromStr for IrDumpPhase {
    type Err = anyhow::Error;

    fn from_str(s: &str) -> Result<Self> {
        match s {
            "lift" => Ok(IrDumpPhase::Lift),
            "post-passes" | "passes" => Ok(IrDumpPhase::PostPasses),
            "post-structuring" | "structuring" | "post-struct" => Ok(IrDumpPhase::PostStructuring),
            "lvars" => Ok(IrDumpPhase::Lvars),
            "types" | "type-audit" => Ok(IrDumpPhase::Types),
            other => bail!(
                "unknown --phase '{other}' (expected: lift, post-passes, post-structuring, lvars, types)"
            ),
        }
    }
}

/// Dump every function discovered in `image` (only those matching `filter`
/// when set) at `phase`. Functions that fail to lift contribute a
/// `// [ir-dump] lift failed ...` line instead of IR.
pub fn dump_functions(
    image: &BinaryImage,
    filter: Option<&str>,
    phase: IrDumpPhase,
) -> Result<String> {
    let lifter = {
        let _span = profiling::phase("ir-dump.get-lifter");
        get_lifter(image.arch)
    };
    let functions = {
        let _span = profiling::phase("ir-dump.discover-functions");
        let functions = pipeline::discover_functions(image, filter)?;
        profiling::record_items("ir-dump.discover-functions", functions.len() as u64);
        functions
    };

    let mut out = String::new();
    for entry in &functions {
        let _profile_function = profiling::phase("ir-dump.function");
        let _profile_trace = profiling::trace_fields(
            "ir-dump.function",
            [
                TraceField::text("function", entry.name.clone()),
                TraceField::addr("addr", entry.addr),
                TraceField::count("size", entry.size),
            ],
        );
        profiling::record_items("ir-dump.function", 1);
        let lift_result = {
            let _span = profiling::phase("ir-dump.lift");
            pipeline::lift_function(image, lifter.as_ref(), entry)
        };
        let ir_func = match lift_result {
            Ok(f) => f,
            Err(e) => {
                profiling::diagnostic(
                    "warn",
                    "ir-dump lift failed; skipping",
                    [
                        TraceField::text("function", entry.name.clone()),
                        TraceField::text("err", e.to_string()),
                    ],
                );
                out.push_str(&format!(
                    "// [ir-dump] lift failed for '{}': {}\n",
                    entry.name, e
                ));
                continue;
            }
        };

        let mut ssa = {
            let _span = profiling::phase("ir-dump.build-ssa");
            unlace_ir::ssa::build_ssa(ir_func)
        };
        ssa.arch = image.arch;

        match phase {
            IrDumpPhase::Lift => {}
            IrDumpPhase::PostPasses
            | IrDumpPhase::PostStructuring
            | IrDumpPhase::Lvars
            | IrDumpPhase::Types => {
                let pass_result = {
                    let _span = profiling::phase("ir-dump.run-passes");
                    pipeline::run_passes(&mut ssa)
                };
                if let Err(e) = pass_result {
                    profiling::diagnostic(
                        "warn",
                        "ir-dump pass pipeline failed; dumping unoptimized",
                        [
                            TraceField::text("function", entry.name.clone()),
                            TraceField::text("err", format!("{e:#}")),
                        ],
                    );
                }
                if matches!(phase, IrDumpPhase::PostStructuring)
                    && let Err(e) = {
                        let _span = profiling::phase("ir-dump.structure-preserve-returns");
                        unlace_struct::structure_preserve_returns(&mut ssa)
                    }
                {
                    profiling::diagnostic(
                        "warn",
                        "ir-dump structurer failed; dumping post-passes IR",
                        [
                            TraceField::text("function", entry.name.clone()),
                            TraceField::text("err", format!("{e:?}")),
                        ],
                    );
                }
            }
        }

        match phase {
            IrDumpPhase::Lvars => {
                let _span = profiling::phase("ir-dump.emit-lvars");
                out.push_str(&unlace_output::dump_lvars(&ssa));
            }
            IrDumpPhase::Types => {
                let _span = profiling::phase("ir-dump.emit-types");
                out.push_str(&unlace_output::dump_type_audit(&ssa));
            }
            _ => {
                let _span = profiling::phase("ir-dump.emit-ir");
                out.push_str(&unlace_output::dump_ir(&ssa));
            }
        }
    }
    Ok(out)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn phase_names_and_aliases_parse() {
        assert_eq!("lift".parse::<IrDumpPhase>().unwrap(), IrDumpPhase::Lift);
        assert_eq!(
            "passes".parse::<IrDumpPhase>().unwrap(),
            IrDumpPhase::PostPasses
        );
        assert_eq!(
            "post-struct".parse::<IrDumpPhase>().unwrap(),
            IrDumpPhase::PostStructuring
        );
        assert_eq!(
            "type-audit".parse::<IrDumpPhase>().unwrap(),
            IrDumpPhase::Types
        );
        assert_eq!(IrDumpPhase::default(), IrDumpPhase::PostPasses);
        assert!("bogus".parse::<IrDumpPhase>().is_err());
    }
}
