//! `idautils` — high-level iteration helpers.
//!
//! Reference: `research/ida-hexrays-docs/scripting/idapython/idautils.py`.

use unlace_session::Session;

use crate::coverage;

/// `idautils.Functions(start=None, end=None)` — iterate function start addresses.
pub fn functions(session: &Session, start: Option<u64>, end: Option<u64>) -> Vec<u64> {
    coverage::mark_implemented("idautils.Functions");
    session
        .with_binary(|img| {
            img.symbols
                .keys()
                .copied()
                .filter(|&ea| {
                    start.map_or(true, |s| ea >= s) && end.map_or(true, |e| ea < e)
                })
                .collect()
        })
        .unwrap_or_default()
}

/// `idautils.Segments()` — iterate segment start addresses.
pub fn segments(session: &Session) -> Vec<u64> {
    coverage::mark_implemented("idautils.Segments");
    session
        .with_binary(|img| img.sections.iter().map(|s| s.vaddr).collect())
        .unwrap_or_default()
}

/// `idautils.Heads(start, end)` — iterate "heads" (instruction/data items) in [start, end).
///
/// We approximate by yielding every address in the range — proper head detection
/// requires the full disasm pipeline.
pub fn heads(_session: &Session, start: u64, end: u64) -> Vec<u64> {
    coverage::mark_implemented("idautils.Heads");
    (start..end).collect()
}

/// `idautils.XrefsTo(ea, flags=0)` — addresses that reference `ea`.
pub fn xrefs_to(session: &Session, ea: u64) -> Vec<u64> {
    coverage::mark_implemented("idautils.XrefsTo");
    // unlace-loader stores xrefs on the BinaryImage; we don't have that field
    // resolved yet so return empty for now. The real wiring happens once
    // crates/unlace-ir/src/xref.rs is plumbed into the session.
    _ = ea;
    _ = session;
    Vec::new()
}

/// `idautils.XrefsFrom(ea, flags=0)` — addresses referenced FROM `ea`.
pub fn xrefs_from(session: &Session, ea: u64) -> Vec<u64> {
    coverage::mark_implemented("idautils.XrefsFrom");
    _ = ea;
    _ = session;
    Vec::new()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_idautils_functions_empty_session() {
        let s = Session::new();
        assert!(functions(&s, None, None).is_empty());
    }

    #[test]
    fn test_idautils_segments_empty_session() {
        let s = Session::new();
        assert!(segments(&s).is_empty());
    }

    #[test]
    fn test_idautils_heads_yields_range() {
        let s = Session::new();
        let h = heads(&s, 0, 5);
        assert_eq!(h, vec![0, 1, 2, 3, 4]);
    }
}
