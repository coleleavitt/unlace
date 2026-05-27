//! `idaapi` — IDA's main module aggregator.
//!
//! Reference: `research/ida-hexrays-docs/scripting/idapython/idaapi.py` —
//! historically a `from ida_* import *` namespace + a handful of unique
//! helpers (image base, decompile entry point, next/prev addr).

use unlace_session::Session;

use crate::coverage;

/// `idaapi.get_imagebase()` — the binary's image base address.
pub fn get_imagebase(session: &Session) -> Option<u64> {
    coverage::mark_implemented("idaapi.get_imagebase");
    session.with_binary(|img| img.sections.iter().map(|s| s.vaddr).min().unwrap_or(0))
}

/// `idaapi.get_imagename()` — the binary's filename.
pub fn get_imagename(session: &Session) -> Option<String> {
    coverage::mark_implemented("idaapi.get_imagename");
    session.binary_path().map(|p| {
        p.file_name()
            .and_then(|n| n.to_str())
            .unwrap_or("")
            .to_string()
    })
}

/// `idaapi.next_addr(ea)` — the next valid address after ea (we just +1).
pub fn next_addr(session: &Session, ea: u64) -> u64 {
    coverage::mark_implemented("idaapi.next_addr");
    _ = session;
    ea.saturating_add(1)
}

/// `idaapi.prev_addr(ea)` — the previous valid address before ea.
pub fn prev_addr(session: &Session, ea: u64) -> u64 {
    coverage::mark_implemented("idaapi.prev_addr");
    _ = session;
    ea.saturating_sub(1)
}

/// `idaapi.decompile(ea)` — decompile the function containing ea.
///
/// Stub: returns Some(text) when a function is found; full ctree integration
/// follows in B27.6.
pub fn decompile(session: &Session, ea: u64) -> Option<String> {
    coverage::mark_implemented("idaapi.decompile");
    _ = (session, ea);
    None
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_idaapi_next_prev_addr() {
        let s = Session::new();
        assert_eq!(next_addr(&s, 0x1000), 0x1001);
        assert_eq!(prev_addr(&s, 0x1000), 0x0FFF);
        assert_eq!(prev_addr(&s, 0), 0); // saturating
    }
}
