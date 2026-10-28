//! `tracing` gates and event helpers for c-printer diagnostics.
//!
//! `unlace::cprinter` is the umbrella target. `EnvFilter` matches targets by
//! prefix, so enabling it also enables every `unlace::cprinter::*` sub-target.

use std::fmt::Display;

use tracing::Level;

pub(in crate::c_printer) fn c_printer_trace_enabled() -> bool {
    tracing::enabled!(target: "unlace::cprinter", Level::DEBUG)
}

pub(in crate::c_printer) fn c_printer_name_trace_enabled() -> bool {
    tracing::enabled!(target: "unlace::cprinter::name", Level::DEBUG)
}

pub(in crate::c_printer) fn c_printer_stack_trace_enabled() -> bool {
    tracing::enabled!(target: "unlace::cprinter::stack", Level::DEBUG)
}

pub(in crate::c_printer) fn c_printer_decision_trace_enabled() -> bool {
    tracing::enabled!(target: "unlace::cprinter::decision", Level::DEBUG)
}

/// The sequence trace is also on whenever the decision trace is.
pub(in crate::c_printer) fn c_printer_sequence_trace_enabled() -> bool {
    tracing::enabled!(target: "unlace::cprinter::sequence", Level::DEBUG)
        || c_printer_decision_trace_enabled()
}

/// `unlace::cprinter::pipeline` follows each statement through emission and
/// every post-emission cleanup stage: which deref form was chosen at emit
/// time, and the exact statements each cleanup stage removed or changed.
/// Pipe through `grep` to follow one variable end-to-end (e.g. `=c7` to see
/// which stage deletes `c7 = a1`).
pub(in crate::c_printer) fn c_printer_pipeline_trace_enabled() -> bool {
    tracing::enabled!(target: "unlace::cprinter::pipeline", Level::DEBUG)
}

pub(in crate::c_printer) fn c_printer_trace_line(func_name: &str, message: impl Display) {
    tracing::debug!(target: "unlace::cprinter", "func={func_name} {message}");
}

pub(in crate::c_printer) fn trace_flow(message: impl Display) {
    tracing::debug!(target: "unlace::cprinter::flow", "flow {message}");
}

pub(in crate::c_printer) fn trace_stack_text(message: impl Display) {
    tracing::debug!(target: "unlace::cprinter::stack", "stack {message}");
}

pub(in crate::c_printer) fn trace_hoist_text(message: impl Display) {
    tracing::debug!(target: "unlace::cprinter::hoist", "hoist {message}");
}

pub(in crate::c_printer) fn trace_temp_text(message: impl Display) {
    tracing::debug!(target: "unlace::cprinter::temp", "temp {message}");
}

pub(in crate::c_printer) fn trace_load_text(message: impl Display) {
    tracing::debug!(target: "unlace::cprinter::load", "load {message}");
}

pub(in crate::c_printer) fn trace_name_text(message: impl Display) {
    tracing::debug!(target: "unlace::cprinter::name", "name {message}");
}

pub(in crate::c_printer) fn trace_pipeline(message: impl Display) {
    tracing::debug!(target: "unlace::cprinter::pipeline", "pipe {message}");
}

pub(in crate::c_printer) fn trace_full(message: impl Display) {
    tracing::trace!(target: "unlace::cprinter::full", "full {message}");
}

pub(in crate::c_printer) fn trace_decision(message: impl Display) {
    tracing::debug!(target: "unlace::cprinter::decision", "decision {message}");
}

pub(in crate::c_printer) fn trace_sequence(message: impl Display) {
    if tracing::enabled!(target: "unlace::cprinter::sequence", Level::DEBUG) {
        tracing::debug!(target: "unlace::cprinter::sequence", "sequence {message}");
    } else {
        tracing::debug!(target: "unlace::cprinter::decision", "sequence {message}");
    }
}

/// Logged under the sequence trace, or under the name trace when only that
/// one is enabled.
pub(in crate::c_printer) fn trace_materialized_source_scan(message: impl Display) {
    if c_printer_sequence_trace_enabled() {
        trace_sequence(format_args!("materialized-source {message}"));
    } else {
        tracing::debug!(
            target: "unlace::cprinter::name",
            "sequence materialized-source {message}"
        );
    }
}
