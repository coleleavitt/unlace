//! `ida_name` — symbol naming.

use unlace_session::Session;

use crate::coverage;

/// `ida_name.get_name(ea)` — get the symbol name at ea (empty if none).
pub fn get_name(session: &Session, ea: u64) -> String {
    coverage::mark_implemented("ida_name.get_name");
    // Check user renames first (they take precedence over baseline symbols).
    if let Some(r) = session.annotations().renames.get(&ea) {
        return r.new_name.clone();
    }
    session
        .with_binary(|img| img.symbols.get(&ea).map(|s| s.name.clone()))
        .flatten()
        .unwrap_or_default()
}

/// `ida_name.set_name(ea, name, flags=0)` — rename a symbol.
pub fn set_name(session: &Session, ea: u64, name: &str) -> bool {
    coverage::mark_implemented("ida_name.set_name");
    let old_name = get_name(session, ea);
    session.rename(unlace_session::Rename {
        ea,
        old_name,
        new_name: name.to_string(),
    });
    true
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_ida_name_set_get_round_trip() {
        let s = Session::new();
        assert!(set_name(&s, 0x100, "process_data"));
        assert_eq!(get_name(&s, 0x100), "process_data");
    }
}
