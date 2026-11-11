use crate::c_printer::postprocess::{is_prunable_synthetic_local, parse_shadowing_local_decl_name};

use super::prune_dead_plain_assignments_once;

pub(in crate::c_printer) fn prune_dead_plain_assignments(output: String) -> String {
    // Fixpoint iteration exists ONLY to collapse cond-family flag-temp chains:
    //     cond = 0; ... cond = a < b; ...
    // where every later reference to `cond` is itself a write, so one pass
    // removes the last write and a second sees the earlier ones are dead.
    //
    // That backward cascade is WRONG for real register values: a `vN` named
    // after a hardware register (`// r10d`) whose last store reaches a return
    // is live-out to the caller and must survive even though no *intra-function*
    // statement reads it. The single-pass `contains_identifier` semantics (any
    // later textual reference is a use) already protects those; the fixpoint
    // defeated it by deleting the lone reader first, then cascading backward.
    //
    // So: iterate to a fixpoint only when the text actually contains a
    // cond-family temp. Register-only functions take exactly one pass, matching
    // the pre-1e3703d86 behaviour the v850/register goldens depend on.
    let max_passes = if output_has_cond_family_temp(&output) || output_has_plain_temp_decl(&output)
    {
        8
    } else {
        1
    };
    tracing::debug!(target: "unlace::cprinter::prune",
        "plain-prune begin max_passes={max_passes} has_cond_family={}",
        output_has_cond_family_temp(&output)
    );
    let mut current = output;
    for pass in 0..max_passes {
        let next = prune_dead_plain_assignments_once(&current, pass);
        if next == current {
            tracing::debug!(target: "unlace::cprinter::prune", "plain-prune fixpoint reached after pass={pass}");
            return next;
        }
        current = next;
    }
    if max_passes > 1 {
        tracing::debug!(target: "unlace::cprinter::prune", "plain-prune hit {max_passes}-pass cap without fixpoint");
    }
    current
}

/// Cheap scan: does the emitted function *body* declare or assign any
/// cond-family flag temporary (`cond` / `cond_N`)? Gates the dead-assignment
/// fixpoint so a register-only function takes a single, non-cascading pass.
///
/// CRITICAL: only the function body is scanned, not the shared IDA prelude —
/// the prelude's SSE helpers (`memory_order_consume`, the `_mm_srli_epi64`
/// ternary, etc.) contain the substring `cond`, which would otherwise make
/// every function (even register-only ones like v850 `sub_10118`) take the
/// 8-pass cascade and re-trigger the live-out over-prune this gate prevents.
pub(in crate::c_printer) fn output_has_cond_family_temp(output: &str) -> bool {
    // The body is everything from the first function-signature line (`… ) {`)
    // onward; the prelude precedes it. A line that opens the body both
    // contains `(` and ends with `{` and is not a comment.
    let mut in_body = false;
    for line in output.lines() {
        if !in_body {
            let t = line.trim_start();
            if t.contains('(') && line.trim_end().ends_with('{') && !t.starts_with("//") {
                in_body = true;
            }
            continue;
        }
        let t = line.trim_start();
        if t.starts_with("cond =")
            || t.starts_with("cond;")
            || t.starts_with("_BOOL cond")
            || t.starts_with("char cond")
            || t.starts_with("int cond")
            || t.starts_with("__int64 cond")
            || t.contains(" cond ")
            || t.contains(" cond;")
            || t.contains(" cond =")
            || t.contains("cond_")
        {
            return true;
        }
    }
    false
}

pub(in crate::c_printer) fn output_has_plain_temp_decl(output: &str) -> bool {
    output.lines().any(|line| {
        line.contains("// temp")
            && parse_shadowing_local_decl_name(line).is_some_and(is_prunable_synthetic_local)
    })
}

/// Does this `lhs = rhs` segment's right-hand side consist of a pure EFLAGS
/// flag computation with no data semantics — either an overflow macro
/// (`__OFSUB__(...)` / `__OFADD__(...)`) or the parity-flag idiom
/// (`!(__builtin_popcount(...) & 1)`)? Such a store sets a single EFLAGS bit;
/// when the flag register is overwritten before any rvalue read, the
/// intermediate value is never observed, so the store is dead and the pruner may
/// drop it.
///
/// Soundness: for both kinds the removal is justified by standard dead-store
/// elimination — a side-effect-free store with no rvalue read before its
/// overwrite is semantics-preserving. For the OF macros there is additionally a
/// machine-checked reconstruction certificate (`FlagReconstruct.v`
/// `of_elim_sound`: OF is recoverable from SF + the recovered comparison), which
/// would license removal even WITH a consumer; the parity flag (PF) has no such
/// reconstruction and rests purely on the no-consumer dead-store analysis. The
/// pruner only relaxes the reassign-keeps-alive rule here (a genuine later
/// rvalue read still pins the store), so this never deletes a live flag value.
///
/// Conservative: requires the RHS to be EXACTLY one flag expression (no
/// surrounding arithmetic / XOR consumer), so a flag combined into a larger
/// expression is never matched.
pub(in crate::c_printer) fn segment_rhs_is_pure_flag_store(segment: &str) -> bool {
    let Some(eq) = segment.find('=') else {
        return false;
    };
    let rhs = segment[eq + 1..].trim().trim_end_matches(';').trim();

    // Parity flag: `!(__builtin_popcount(<balanced>) & 1)` consuming the whole
    // RHS. IDA emits this for PF; it is junk unless a `jp`/`jnp` consumes it.
    if let Some(inner) = rhs.strip_prefix("!(__builtin_popcount(") {
        // Find the close paren matching the popcount argument list, then require
        // exactly ` & 1)` to follow and end the RHS.
        let mut depth = 1usize;
        let bytes = inner.as_bytes();
        for (i, &b) in bytes.iter().enumerate() {
            match b {
                b'(' => depth += 1,
                b')' => {
                    depth -= 1;
                    if depth == 0 {
                        return &inner[i + 1..] == " & 1)";
                    }
                }
                _ => {}
            }
        }
        return false;
    }

    // Overflow macros: `__OFSUB__(<balanced>)` / `__OFADD__(<balanced>)`
    // consuming the whole RHS.
    for macro_name in ["__OFSUB__(", "__OFADD__("] {
        let Some(inner) = rhs.strip_prefix(macro_name) else {
            continue;
        };
        // The macro call must consume the ENTIRE rhs: walk balanced parens from
        // the opening `(` and require its matching close paren to be the final
        // character. This rejects compound forms like
        // `__OFSUB__(a,b) + __OFADD__(c,d)` or `__OFSUB__(a,b) ^ c13` where the
        // flag value is combined into a larger (data- or condition-bearing)
        // expression — only a bare, single overflow-macro store is a dead flag.
        let mut depth = 1usize; // already inside the opening paren
        let bytes = inner.as_bytes();
        for (i, &b) in bytes.iter().enumerate() {
            match b {
                b'(' => depth += 1,
                b')' => {
                    depth -= 1;
                    if depth == 0 {
                        // Matched the macro's close paren; pure iff it is the
                        // last character of the rhs (nothing trails it).
                        return i == bytes.len() - 1;
                    }
                }
                _ => {}
            }
        }
    }
    false
}
