use std::collections::BTreeSet;

use crate::c_printer::postprocess::{contains_identifier, parse_shadowing_local_decl_name};
use crate::c_printer::{c_printer_pipeline_trace_enabled, trace_pipeline};

use super::{
    identifier_used_as_rvalue, is_backward_goto_use_above, is_cond_family_local,
    is_loop_carried_use_above, parse_dead_compound_assignment_lhs, parse_plain_assignment_lhs,
    segment_rhs_is_pure_flag_store, split_plain_statement_segments,
    trace_prune_plain_assignment_full,
};

pub(in crate::c_printer) fn prune_dead_plain_assignments_once(output: &str, pass: u32) -> String {
    let lines: Vec<&str> = output.lines().collect();
    let temp_decl_names: BTreeSet<String> = lines
        .iter()
        .filter(|line| line.contains("// temp"))
        .filter_map(|line| parse_shadowing_local_decl_name(line).map(str::to_string))
        .collect();
    let mut changed = false;
    let mut pruned_lines = Vec::with_capacity(lines.len());

    for (idx, line) in lines.iter().enumerate() {
        let Some((indent, segments)) = split_plain_statement_segments(line) else {
            pruned_lines.push((*line).to_string());
            continue;
        };

        let mut kept = Vec::new();
        for (seg_idx, segment) in segments.iter().enumerate() {
            let remove = parse_plain_assignment_lhs(segment).is_some_and(|lhs| {
                let is_cond_family = is_cond_family_local(lhs);

                // The backward fixpoint cascade (pass > 0) exists solely to
                // collapse cond-family flag-temp chains. A real register value
                // (`vN`) may only be removed on the FIRST pass, with single-pass
                // `contains_identifier` semantics — its last store is live-out
                // to the caller and must not be cascade-deleted after its lone
                // reader was removed on an earlier pass. This is the precise
                // boundary the v850 register goldens depend on (pre-1e3703d86).
                let is_temp = temp_decl_names.contains(lhs);
                if pass > 0 && !is_cond_family && !is_temp {
                    trace_prune_plain_assignment_full(
                        pass, idx, lhs, segment, true, false, true, false,
                    );
                    return false;
                }

                // A re-assignment to the same lhs counts as a genuine use ONLY
                // for non-cond-family locals that were not explicitly emitted
                // as `// temp`. For `cond`/`cond_N` flag temps and synthetic
                // `vN // temp` scaffolding, a later write does NOT keep an
                // earlier write alive. Real register-commented values (`// r10d`,
                // `// reg?`, etc.) keep the conservative live-out behavior.
                //
                // EXCEPTION: a store whose RHS is a pure EFLAGS flag computation
                // — an overflow macro (`__OFSUB__`/`__OFADD__`) or the parity
                // idiom (`!(__builtin_popcount(...) & 1)`) — is flag, not data.
                // When such a flag register is overwritten before any rvalue
                // read, the intermediate value is never observed, so a later
                // reassignment must NOT keep it alive — the medium.elf `c14 =
                // __OFSUB__(...)` / `c11 = !(__builtin_popcount(...) & 1)`
                // dead-store pattern. Soundness: standard dead-store elimination
                // (no rvalue read before overwrite); the OF macros additionally
                // carry the FlagReconstruct.v `of_elim_sound` certificate. We
                // only relax the reassign-keeps-alive rule (a genuine later
                // rvalue read still pins the store), so this can never delete a
                // live flag value.
                let rhs_is_flag_macro = segment_rhs_is_pure_flag_store(segment);
                let treat_reassign_as_use = !is_cond_family && !is_temp && !rhs_is_flag_macro;
                let is_real_use = |later: &str| {
                    if treat_reassign_as_use {
                        contains_identifier(later, lhs)
                    } else {
                        identifier_used_as_rvalue(later, lhs)
                    }
                };
                let used_later_on_line = segments
                    .iter()
                    .skip(seg_idx + 1)
                    .any(|later| is_real_use(later));
                let used_later = used_later_on_line
                    || lines.iter().skip(idx + 1).any(|later| is_real_use(later));
                let loop_carried_live_in = is_loop_carried_use_above(&lines, idx, lhs)
                    || is_backward_goto_use_above(&lines, idx, lhs);
                let remove = !used_later && !loop_carried_live_in;
                trace_prune_plain_assignment_full(
                    pass,
                    idx,
                    lhs,
                    segment,
                    treat_reassign_as_use,
                    used_later_on_line,
                    used_later,
                    remove,
                );
                // Pipeline trace: `used_later` is a FORWARD-ONLY textual scan. A
                // store whose lhs is read as an rvalue ABOVE it (used_above) but
                // not below (used_later=false) is a loop-carried-store candidate:
                // its real use is at the loop top, reached via the back-edge the
                // forward scan cannot see. Flag that exact blind spot so a wrongly
                // dropped reset (e.g. `c7 = a1`) is visible as it happens.
                if c_printer_pipeline_trace_enabled() {
                    // The cond_family / is_temp / reassign_is_use flags are what
                    // the variable's NAME feeds into: they decide whether a later
                    // re-write counts as a use — this is why the same store
                    // survives as `a6 = a1` but is dropped as `c7 = a1`.
                    trace_pipeline(format!(
                        "prune-decision pass={pass} line={} lhs={lhs} scan=forward-only used_later={used_later} loop_carried_live_in={loop_carried_live_in} cond_family={is_cond_family} is_temp={} reassign_is_use={treat_reassign_as_use} decision={} segment={:?}",
                        idx + 1,
                        is_temp,
                        if remove { "remove" } else { "keep" },
                        segment.trim(),
                    ));
                }
                remove
            });
            // Fallback: a dead compound assignment (`lhs OP= rhs`) to a
            // synthetic local. A compound assign both reads and writes `lhs`,
            // so it is only dead when `lhs` has NO later occurrence at all
            // (no rvalue read, no further write) after this point — the
            // computed value is never observed. This catches e.g. ARCompact
            // `_start`'s tail `v1 += 0x7f;` whose result is unused before
            // return (the golden omits it). Only fires on the first pass.
            let remove = remove
                || (pass == 0
                    && parse_dead_compound_assignment_lhs(segment).is_some_and(|lhs| {
                        let used_on_line = segments
                            .iter()
                            .skip(seg_idx + 1)
                            .any(|later| contains_identifier(later, lhs));
                        let used_below = lines
                            .iter()
                            .skip(idx + 1)
                            .any(|later| contains_identifier(later, lhs));
                        let dead = !used_on_line
                            && !used_below
                            && !is_backward_goto_use_above(&lines, idx, lhs);
                        tracing::debug!(target: "unlace::cprinter::prune",
                            "plain-prune pass={pass} line={} lhs={lhs} decision=remove segment={:?} kind=dead-compound",
                            idx + 1,
                            segment.trim()
                        );
                        dead
                    }));
            if remove {
                changed = true;
            } else {
                kept.push(segment.trim());
            }
        }

        if !kept.is_empty() {
            pruned_lines.push(format!("{}{}", indent, kept.join(" ")));
        }
    }

    if !changed {
        return output.to_string();
    }

    let mut pruned = pruned_lines.join("\n");
    pruned.push('\n');
    pruned
}
