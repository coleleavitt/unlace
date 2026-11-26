//! Avoid four-byte refinement pieces that partially overlap known inputs.

use unlace_base::types::int4;

/// Unlace variant of upstream `Heritage::remove13Refinement`: preserve a 1+3 or
/// 3+1 junction only when joining it would straddle a known input.
#[doc(hidden)]
pub fn coalesce(refine: &mut [int4], straddles_input: &mut dyn FnMut(usize, usize, usize) -> bool) {
    if refine.is_empty() {
        return;
    }
    let mut last = refine[0];
    let mut pos = last as usize;
    while pos < refine.len() {
        let current = refine[pos];
        if current == 0 {
            break;
        }
        let start = pos - last as usize;
        let end = pos + current as usize;
        if matches!((last, current), (1, 3) | (3, 1)) && !straddles_input(start, pos, end) {
            refine[start] = 4;
            last = 4;
            pos += current as usize;
        } else {
            last = current;
            pos += last as usize;
        }
    }
}

#[doc(hidden)]
pub fn span_straddles_join(
    span: (usize, usize),
    start: usize,
    junction: usize,
    end: usize,
) -> bool {
    (span.0 == junction && span.1 > end) || (span.1 == junction && span.0 < start)
}

/// Fill this pass's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::UnlaceHookSlots) {
    hooks.inputrefinement_coalesce = Some(coalesce);
    hooks.inputrefinement_span_straddles_join = Some(span_straddles_join);
}

#[cfg(test)]
mod tests;
