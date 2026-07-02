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

/// `ida_funcs.get_func_end(ea)` — end EA (exclusive) of the function containing ea.
///
/// Backed by the symbol's recorded size: `addr + size`. Returns `None` when no
/// function precedes/contains `ea`.
pub fn get_func_end(session: &Session, ea: u64) -> Option<u64> {
    coverage::mark_implemented("ida_funcs.get_func_end");
    session.with_binary(|img| {
        img.symbols
            .range(..=ea)
            .next_back()
            .map(|(start, s)| start.saturating_add(s.size))
    })?
}

/// `ida_funcs.func_contains(func_ea, ea)` — is `ea` within the function that
/// starts at (or contains) `func_ea`?
///
/// Backed by the symbol table: resolves the function whose start is `<= func_ea`,
/// then checks `start <= ea < start + size`. Symbols with size 0 contain only
/// their own start address.
pub fn func_contains(session: &Session, func_ea: u64, ea: u64) -> bool {
    coverage::mark_implemented("ida_funcs.func_contains");
    session
        .with_binary(|img| {
            img.symbols.range(..=func_ea).next_back().map(|(start, s)| {
                let end = start.saturating_add(s.size);
                ea >= *start && (ea < end || (s.size == 0 && ea == *start))
            })
        })
        .flatten()
        .unwrap_or(false)
}

/// `ida_funcs.get_next_func(ea)` — start EA of the first function strictly after ea.
pub fn get_next_func(session: &Session, ea: u64) -> Option<u64> {
    coverage::mark_implemented("ida_funcs.get_next_func");
    let next = ea.checked_add(1)?;
    session.with_binary(|img| img.symbols.range(next..).next().map(|(k, _)| *k))?
}

/// `ida_funcs.get_prev_func(ea)` — start EA of the last function strictly before ea.
pub fn get_prev_func(session: &Session, ea: u64) -> Option<u64> {
    coverage::mark_implemented("ida_funcs.get_prev_func");
    session.with_binary(|img| img.symbols.range(..ea).next_back().map(|(k, _)| *k))?
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_loader::{ArchId, BinaryImage, Endian, Symbol, SymbolKind};

    fn fixture_session() -> Session {
        let mut img = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        img.symbols.insert(
            0x1000,
            Symbol {
                name: "func_a".into(),
                addr: 0x1000,
                size: 0x40,
                kind: SymbolKind::Function,
            },
        );
        img.symbols.insert(
            0x1040,
            Symbol {
                name: "func_b".into(),
                addr: 0x1040,
                size: 0x20,
                kind: SymbolKind::Function,
            },
        );
        let s = Session::new();
        s.set_binary(img);
        s
    }

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

    #[test]
    fn test_ida_funcs_fixture_qty_and_getn() {
        let s = fixture_session();
        assert_eq!(get_func_qty(&s), 2);
        assert_eq!(getn_func(&s, 0), Some(0x1000));
        assert_eq!(getn_func(&s, 1), Some(0x1040));
        assert_eq!(getn_func(&s, 2), None);
    }

    #[test]
    fn test_get_func_name_and_get_func() {
        let s = fixture_session();
        // An address inside func_a resolves back to func_a.
        assert_eq!(get_func(&s, 0x1010), Some(0x1000));
        assert_eq!(get_func_name(&s, 0x1010).as_deref(), Some("func_a"));
        assert_eq!(get_func_name(&s, 0x1050).as_deref(), Some("func_b"));
    }

    #[test]
    fn test_get_func_end() {
        let s = fixture_session();
        assert_eq!(get_func_end(&s, 0x1000), Some(0x1040));
        assert_eq!(get_func_end(&s, 0x1010), Some(0x1040));
        assert_eq!(get_func_end(&s, 0x1040), Some(0x1060));
        // Before any function.
        assert_eq!(get_func_end(&s, 0x0), None);
    }

    #[test]
    fn test_func_contains() {
        let s = fixture_session();
        // 0x1010 is inside func_a [0x1000, 0x1040).
        assert!(func_contains(&s, 0x1000, 0x1010));
        // 0x1040 is the start of func_b — NOT inside func_a's range.
        assert!(!func_contains(&s, 0x1000, 0x1040));
        // func_ea inside func_b, target inside func_b.
        assert!(func_contains(&s, 0x1050, 0x1055));
        // Out of every range.
        assert!(!func_contains(&s, 0x1000, 0x2000));
    }

    #[test]
    fn test_get_next_prev_func() {
        let s = fixture_session();
        assert_eq!(get_next_func(&s, 0x1000), Some(0x1040));
        assert_eq!(get_next_func(&s, 0x1010), Some(0x1040));
        assert_eq!(get_next_func(&s, 0x1040), None);
        assert_eq!(get_prev_func(&s, 0x1040), Some(0x1000));
        assert_eq!(get_prev_func(&s, 0x1050), Some(0x1040));
        assert_eq!(get_prev_func(&s, 0x1000), None);
    }

    #[test]
    fn test_get_next_func_is_strict_at_max_address() {
        let mut img = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        img.symbols.insert(
            u64::MAX,
            Symbol {
                name: "max_func".into(),
                addr: u64::MAX,
                size: 0,
                kind: SymbolKind::Function,
            },
        );
        let s = Session::new();
        s.set_binary(img);

        assert_eq!(get_next_func(&s, u64::MAX), None);
    }
}
