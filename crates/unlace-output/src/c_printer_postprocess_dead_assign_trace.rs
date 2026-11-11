use super::is_cond_family_local;

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
    tracing::debug!(target: "unlace::cprinter::prune",
        "plain-prune pass={pass} line={} lhs={lhs} cond_family={} reassign_is_use={treat_reassign_as_use} used_on_line={used_on_line} used_later={used_later} decision={} segment={:?}",
        line_idx + 1,
        is_cond_family_local(lhs),
        if remove { "remove" } else { "keep" },
        segment.trim()
    );
}
