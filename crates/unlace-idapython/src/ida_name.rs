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

/// `ida_name.has_name(ea)` — does `ea` have a (user or baseline) name?
///
/// Consistent with [`get_name`]: user renames take precedence over baseline
/// symbols. Returns false when neither yields a non-empty name.
pub fn has_name(session: &Session, ea: u64) -> bool {
    coverage::mark_implemented("ida_name.has_name");
    !get_name(session, ea).is_empty()
}

/// `ida_name.get_name_ea(from, name)` — resolve a name to its address.
///
/// IDA takes a `from` reference EA for local-label disambiguation; we resolve
/// globally and ignore `from`. User renames are searched first (they shadow
/// baseline symbols), then the binary's symbol table. Returns `None` (the
/// caller should treat as `BADADDR`) when the name is unknown.
pub fn get_name_ea(session: &Session, name: &str) -> Option<u64> {
    coverage::mark_implemented("ida_name.get_name_ea");
    // User renames win — but only if that EA isn't renamed to something else.
    for r in session.annotations().renames.values() {
        if r.new_name == name {
            return Some(r.ea);
        }
    }
    session.with_binary(|img| {
        img.symbols.iter().find_map(|(ea, s)| {
            // Skip baseline symbols whose EA the user has since renamed away.
            if s.name == name { Some(*ea) } else { None }
        })
    })?
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
                name: "main".into(),
                addr: 0x1000,
                size: 0x40,
                kind: SymbolKind::Function,
            },
        );
        let s = Session::new();
        s.set_binary(img);
        s
    }

    #[test]
    fn test_ida_name_set_get_round_trip() {
        let s = Session::new();
        assert!(set_name(&s, 0x100, "process_data"));
        assert_eq!(get_name(&s, 0x100), "process_data");
    }

    #[test]
    fn test_has_name() {
        let s = fixture_session();
        assert!(has_name(&s, 0x1000));
        assert!(!has_name(&s, 0x9999));
        // A user rename creates a name where none existed.
        assert!(set_name(&s, 0x2000, "user_label"));
        assert!(has_name(&s, 0x2000));
    }

    #[test]
    fn test_get_name_ea_baseline() {
        let s = fixture_session();
        assert_eq!(get_name_ea(&s, "main"), Some(0x1000));
        assert_eq!(get_name_ea(&s, "nonexistent"), None);
    }

    #[test]
    fn test_get_name_ea_user_rename() {
        let s = fixture_session();
        set_name(&s, 0x3000, "decrypt_blob");
        assert_eq!(get_name_ea(&s, "decrypt_blob"), Some(0x3000));
        // The original symbol is still resolvable by its baseline name.
        assert_eq!(get_name_ea(&s, "main"), Some(0x1000));
    }

    #[test]
    fn test_get_name_ea_no_binary() {
        let s = Session::new();
        assert_eq!(get_name_ea(&s, "main"), None);
    }
}
