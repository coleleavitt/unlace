//! `ida_funcs` — function-management API.
//!
//! Reference: `research/ida-hexrays-docs/scripting/idapython/ida_funcs.py`.

use unlace_session::Session;

use crate::coverage;

/// `ida_funcs.get_func_qty()` — total number of known functions.
pub fn get_func_qty(session: &Session) -> usize {
    coverage::mark_implemented("ida_funcs.get_func_qty");
    session.with_binary(|img| img.symbols.len()).unwrap_or(0)
}

/// `ida_funcs.getn_func(idx)` — get the nth function's start EA.
pub fn getn_func(session: &Session, idx: usize) -> Option<u64> {
    coverage::mark_implemented("ida_funcs.getn_func");
    session.with_binary(|img| img.symbols.keys().nth(idx).copied())?
}

/// `ida_funcs.get_func(ea)` — get the function containing ea (returns its start EA).
pub fn get_func(session: &Session, ea: u64) -> Option<u64> {
    coverage::mark_implemented("ida_funcs.get_func");
    session.with_binary(|img| img.symbols.range(..=ea).next_back().map(|(k, _)| *k))?
}

/// `ida_funcs.get_func_name(ea)` — name of the function containing ea.
pub fn get_func_name(session: &Session, ea: u64) -> Option<String> {
    coverage::mark_implemented("ida_funcs.get_func_name");
    session.with_binary(|img| {
        img.symbols
            .range(..=ea)
            .next_back()
            .map(|(_, s)| s.name.clone())
    })?
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_ida_funcs_qty_empty() {
        let s = Session::new();
        assert_eq!(get_func_qty(&s), 0);
    }

    #[test]
    fn test_ida_funcs_getn_out_of_range() {
        let s = Session::new();
        assert_eq!(getn_func(&s, 0), None);
    }
}
