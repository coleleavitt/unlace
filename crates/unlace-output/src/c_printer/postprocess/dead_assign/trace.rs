use crate::c_printer::{c_printer_trace_enabled, trace_text_matches_filter};

use super::is_cond_family_local;

/// Whether the dead-assignment / dead-decl pruners should emit trace lines.
/// Enabled by either `UNLACE_CPRINTER_PRUNE_TRACE` (focused) or the global
/// `UNLACE_CPRINTER_TRACE`.
pub(in crate::c_printer) fn prune_trace_enabled() -> bool {
    std::env::var_os("UNLACE_CPRINTER_PRUNE_TRACE").is_some() || c_printer_trace_enabled()
}

#[allow(clippy::too_many_arguments)]
pub(in crate::c_printer) fn trace_prune_plain_assignment_full(
    pass: u32,
    line_idx: usize,
    lhs: &str,
    segment: &str,
    treat_reassign_as_use: bool,
    used_on_line: bool,
    used_later: bool,
    remove: bool,
) {
    if !prune_trace_enabled() {
        return;
    }
    let text = format!(
        "plain-prune pass={pass} line={} lhs={lhs} cond_family={} reassign_is_use={treat_reassign_as_use} used_on_line={used_on_line} used_later={used_later} decision={} segment={:?}",
        line_idx + 1,
        is_cond_family_local(lhs),
        if remove { "remove" } else { "keep" },
        segment.trim()
    );
    if trace_text_matches_filter(&text) {
        eprintln!("[unlace-output] {text}");
    }
}
