//! Decompiler output quality measurement (plan.md Batch 0).
//!
//! This module exists to *prevent fake progress*. Before changing large
//! recovery systems (stack vars, lvar allocation, type inference, …) we need
//! a repeatable, honest way to see whether output is getting closer to
//! IDA-like C or merely changing.
//!
//! It runs the existing load → lift → SSA → passes → structure pipeline per
//! function and collects feature counters off the resulting [`SsaFunction`]
//! and [`HirFunction`]. It changes no decompilation behaviour — it only
//! observes.
//!
//! Each counter is classified into one of three buckets so the report can
//! distinguish:
//! - **not implemented** — the lifter/pass has no handler (`Unimplemented`).
//! - **not wired** — a handler exists but the value leaked through as an
//!   opaque `Callother`, or recovery did not run.
//! - **implemented but wrong** — recovery ran but produced low-quality output
//!   (raw temporaries, `Unknown` types).

use std::path::Path;

use anyhow::{Context, Result, bail};
use serde::Serialize;

use unlace_ir::ssa::{PrimitiveType, SsaFunction};
use unlace_ir::{IrOp, Lifter};
use unlace_lift::get_lifter;
use unlace_loader::{ElfLoader, Loader, MachoLoader, PeLoader};
use unlace_struct::{HirFunction, HirNode};

use crate::pipeline::{self, FunctionEntry};

/// Per-function feature counters. Higher is better for `*_recovered` /
/// `*_resolved`; lower is better for everything else.
#[derive(Debug, Clone, Default, Serialize, PartialEq, Eq)]
pub struct FunctionQuality {
    /// Function name.
    pub name: String,
    /// Entry virtual address.
    pub addr: u64,
    /// Total IR instructions after the pass pipeline.
    pub ir_insns: usize,

    // --- "not implemented" bucket ---
    /// `IrOp::Unimplemented` ops — the lifter had no handler at all.
    pub unimplemented_ops: usize,

    // --- "not wired" bucket ---
    /// `IrOp::Callother` ops — opaque intrinsics that leaked into output
    /// instead of being lowered or recognised.
    pub callother_ops: usize,

    // --- recovery results (higher = better) ---
    /// Stack variables recovered (`ssa.stack_vars`).
    pub stack_vars_recovered: usize,
    /// Frame holes detected (`ssa.stack_holes`) — gaps in the recovered frame.
    pub frame_holes: usize,
    /// Struct fields recovered across stack composites + array-of-structs.
    pub struct_fields_recovered: usize,
    /// `switch` statements in the structured output.
    pub switch_statements: usize,
    /// Indirect calls resolved to a concrete target
    /// (`ssa.resolved_indirect_calls`).
    pub indirect_calls_resolved: usize,

    // --- "implemented but wrong" bucket ---
    /// `goto` statements emitted (irreducible-CFG fallback).
    pub gotos_emitted: usize,
    /// `label` targets emitted.
    pub labels_emitted: usize,
    /// SSA varnodes whose inferred type is still `Unknown`.
    pub unknown_types: usize,
    /// Raw `__asm { }` blocks the structurer could not lower.
    pub asm_blocks: usize,
}

impl FunctionQuality {
    /// Collect counters for one already-built SSA + HIR pair.
    fn collect(name: &str, addr: u64, ssa: &SsaFunction, hir: &HirFunction) -> Self {
        let mut q = FunctionQuality {
            name: name.to_string(),
            addr,
            ..Default::default()
        };

        // --- SSA-derived counters ---
        for block in ssa.function.blocks.values() {
            for insn in &block.insns {
                q.ir_insns += 1;
                match insn.op {
                    IrOp::Unimplemented => q.unimplemented_ops += 1,
                    IrOp::Callother => q.callother_ops += 1,
                    _ => {}
                }
            }
        }
        q.stack_vars_recovered = ssa.stack_vars.len();
        q.frame_holes = ssa.stack_holes.len();
        q.indirect_calls_resolved = ssa.resolved_indirect_calls.len();
        q.unknown_types = ssa
            .var_types
            .values()
            .filter(|t| **t == PrimitiveType::Unknown)
            .count();
        // Stack-frame composites contribute their field count; array-of-structs
        // layouts contribute theirs.
        for ty in ssa.inferred_structs.values() {
            q.struct_fields_recovered += struct_field_count(ty);
        }
        for layout in ssa.array_struct_layouts.values() {
            q.struct_fields_recovered += layout.fields.len();
        }

        // --- HIR-derived counters ---
        count_hir_nodes(&hir.body, &mut q);

        q
    }
}

/// Recursively count structural features in a HIR body.
fn count_hir_nodes(body: &[HirNode], q: &mut FunctionQuality) {
    for node in body {
        match node {
            HirNode::Switch {
                cases, default, ..
            } => {
                q.switch_statements += 1;
                for (_, arm, _) in cases {
                    count_hir_nodes(arm, q);
                }
                if let Some(d) = default {
                    count_hir_nodes(d, q);
                }
            }
            HirNode::Goto(_) => q.gotos_emitted += 1,
            HirNode::Label(_) => q.labels_emitted += 1,
            HirNode::Asm { .. } => q.asm_blocks += 1,
            HirNode::Block(inner) => count_hir_nodes(inner, q),
            HirNode::If {
                then_body,
                else_body,
                ..
            }
            | HirNode::IfCmp {
                then_body,
                else_body,
                ..
            } => {
                count_hir_nodes(then_body, q);
                if let Some(e) = else_body {
                    count_hir_nodes(e, q);
                }
            }
            HirNode::GuardedIf {
                then_body,
                else_body,
                ..
            } => {
                count_hir_nodes(then_body, q);
                count_hir_nodes(else_body, q);
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => count_hir_nodes(body, q),
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                count_hir_nodes(try_body, q);
                for (_, arm) in catch_arms {
                    count_hir_nodes(arm, q);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                count_hir_nodes(try_body, q);
                count_hir_nodes(finally_body, q);
            }
            HirNode::Commented { inner, .. } => count_hir_nodes(std::slice::from_ref(inner), q),
            // Leaf / expression-shaped nodes carry no nested bodies of interest.
            _ => {}
        }
    }
}

/// Count the leaf fields of a recovered struct/union type, recursing into
/// nested struct/union members.
fn struct_field_count(ty: &unlace_ir::types::Type) -> usize {
    use unlace_ir::types::Type;
    match ty {
        Type::Struct { fields, .. } | Type::Union { fields, .. } => fields
            .iter()
            .map(|f| struct_field_count(&f.ty).max(1))
            .sum(),
        _ => 1,
    }
}

/// Whole-binary quality report.
#[derive(Debug, Clone, Serialize)]
pub struct BinaryQuality {
    /// Path to the analysed binary.
    pub binary: String,
    /// Detected architecture.
    pub arch: String,
    /// Number of functions that decompiled without error.
    pub functions_ok: usize,
    /// Number of functions that errored or panicked-safely during analysis.
    pub functions_failed: usize,
    /// Per-function counters.
    pub functions: Vec<FunctionQuality>,
    /// Workspace-wide totals (sum across `functions`).
    pub totals: QualityTotals,
}

/// Sum of every [`FunctionQuality`] counter across a binary.
#[derive(Debug, Clone, Default, Serialize, PartialEq, Eq)]
pub struct QualityTotals {
    pub ir_insns: usize,
    pub unimplemented_ops: usize,
    pub callother_ops: usize,
    pub stack_vars_recovered: usize,
    pub frame_holes: usize,
    pub struct_fields_recovered: usize,
    pub switch_statements: usize,
    pub indirect_calls_resolved: usize,
    pub gotos_emitted: usize,
    pub labels_emitted: usize,
    pub unknown_types: usize,
    pub asm_blocks: usize,
}

impl QualityTotals {
    fn accumulate(&mut self, q: &FunctionQuality) {
        self.ir_insns += q.ir_insns;
        self.unimplemented_ops += q.unimplemented_ops;
        self.callother_ops += q.callother_ops;
        self.stack_vars_recovered += q.stack_vars_recovered;
        self.frame_holes += q.frame_holes;
        self.struct_fields_recovered += q.struct_fields_recovered;
        self.switch_statements += q.switch_statements;
        self.indirect_calls_resolved += q.indirect_calls_resolved;
        self.gotos_emitted += q.gotos_emitted;
        self.labels_emitted += q.labels_emitted;
        self.unknown_types += q.unknown_types;
        self.asm_blocks += q.asm_blocks;
    }
}

/// Load a binary and run the quality analysis over every discovered function.
///
/// Mirrors the [`pipeline`] flow but stops after structuring rather than C
/// emission, and tolerates per-function failure (the malformed-input safety
/// gate: one bad function must not abort the report).
pub fn analyze_binary(binary_path: &Path) -> Result<BinaryQuality> {
    let data = std::fs::read(binary_path)
        .with_context(|| format!("failed to read '{}'", binary_path.display()))?;

    let image = if ElfLoader::can_load(&data) {
        ElfLoader::load(&data)
    } else if MachoLoader::can_load(&data) {
        MachoLoader::load(&data)
    } else if PeLoader::can_load(&data) {
        PeLoader::load(&data)
    } else {
        bail!(
            "'{}' is not a recognized binary format (ELF, Mach-O, or PE)",
            binary_path.display(),
        );
    }
    .with_context(|| format!("failed to parse '{}'", binary_path.display()))?;

    let lifter = get_lifter(image.arch);
    let functions = pipeline::discover_functions(&image, None)?;

    let mut report = BinaryQuality {
        binary: binary_path.display().to_string(),
        arch: image.arch.to_string(),
        functions_ok: 0,
        functions_failed: 0,
        functions: Vec::new(),
        totals: QualityTotals::default(),
    };

    for entry in &functions {
        match analyze_function(&image, lifter.as_ref(), entry) {
            Ok(q) => {
                report.totals.accumulate(&q);
                report.functions.push(q);
                report.functions_ok += 1;
            }
            Err(e) => {
                tracing::debug!(func = %entry.name, err = %e, "quality: function analysis failed");
                report.functions_failed += 1;
            }
        }
    }

    Ok(report)
}

/// Run lift → SSA → passes → structure for one function and collect counters.
fn analyze_function(
    image: &unlace_loader::BinaryImage,
    lifter: &dyn Lifter,
    entry: &FunctionEntry,
) -> Result<FunctionQuality> {
    let mut ir_func = pipeline::lift_function(image, lifter, entry)?;
    unlace_struct::merge_linear_blocks(&mut ir_func);
    unlace_struct::tail_duplicate_small_blocks(&mut ir_func);
    unlace_struct::split_irreducible_entries(&mut ir_func);

    let mut ssa = unlace_ir::ssa::build_ssa(ir_func);
    if let Err(e) = pipeline::run_passes(&mut ssa) {
        // Match the pipeline's behaviour: a failed pass run still yields a
        // measurable (unoptimised) function rather than aborting.
        tracing::debug!(func = %entry.name, err = %e, "quality: pass pipeline failed");
    }

    let hir = unlace_struct::structure(&ssa).context("control-flow structuring failed")?;
    Ok(FunctionQuality::collect(&entry.name, entry.addr, &ssa, &hir))
}

/// Render a [`BinaryQuality`] report as a Markdown table.
pub fn render_markdown(report: &BinaryQuality) -> String {
    use std::fmt::Write;
    let mut s = String::new();

    let _ = writeln!(s, "# Quality report: {}", report.binary);
    let _ = writeln!(s);
    let _ = writeln!(s, "- architecture: `{}`", report.arch);
    let _ = writeln!(
        s,
        "- functions: {} ok, {} failed",
        report.functions_ok, report.functions_failed
    );
    let _ = writeln!(s);

    render_table(report, &mut s);
    let _ = writeln!(s);
    render_classification(&report.totals, &mut s);

    s
}

/// Per-function counter table plus the `TOTAL` row.
fn render_table(report: &BinaryQuality, s: &mut String) {
    use std::fmt::Write;
    let _ = writeln!(
        s,
        "| function | insns | unimpl | callother | stkvars | holes | fields | switch | indcall | goto | label | unktype | asm |"
    );
    let _ = writeln!(
        s,
        "|----------|------:|-------:|----------:|--------:|------:|-------:|-------:|--------:|-----:|------:|--------:|----:|"
    );
    for q in &report.functions {
        let _ = writeln!(
            s,
            "| `{}` | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} |",
            q.name,
            q.ir_insns,
            q.unimplemented_ops,
            q.callother_ops,
            q.stack_vars_recovered,
            q.frame_holes,
            q.struct_fields_recovered,
            q.switch_statements,
            q.indirect_calls_resolved,
            q.gotos_emitted,
            q.labels_emitted,
            q.unknown_types,
            q.asm_blocks,
        );
    }
    let t = &report.totals;
    let _ = writeln!(
        s,
        "| **TOTAL** | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} |",
        t.ir_insns,
        t.unimplemented_ops,
        t.callother_ops,
        t.stack_vars_recovered,
        t.frame_holes,
        t.struct_fields_recovered,
        t.switch_statements,
        t.indirect_calls_resolved,
        t.gotos_emitted,
        t.labels_emitted,
        t.unknown_types,
        t.asm_blocks,
    );
}

/// The three-bucket classification summary (not implemented / not wired /
/// implemented but wrong).
fn render_classification(t: &QualityTotals, s: &mut String) {
    use std::fmt::Write;
    let _ = writeln!(s, "## Classification");
    let _ = writeln!(s);
    let _ = writeln!(
        s,
        "- **not implemented** (lifter has no handler): {} `Unimplemented` op(s)",
        t.unimplemented_ops
    );
    let _ = writeln!(
        s,
        "- **not wired** (handler exists but value leaked opaque): {} `Callother` op(s)",
        t.callother_ops
    );
    let _ = writeln!(
        s,
        "- **implemented but wrong** (recovery ran, low quality): {} unknown type(s), {} goto(s), {} asm block(s)",
        t.unknown_types, t.gotos_emitted, t.asm_blocks
    );
}

/// Render a [`BinaryQuality`] report as pretty-printed JSON for automation.
pub fn render_json(report: &BinaryQuality) -> Result<String> {
    serde_json::to_string_pretty(report).context("failed to serialize quality report as JSON")
}
