//! `ida_typeinf` — type system.
//!
//! Stub: declaration storage as opaque strings. Full type parsing follows
//! once Batch 31 (TIL imports) lands.

use unlace_session::Session;

use crate::coverage;

/// Analogue of IDA's `tinfo_t` (the type info handle).
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct TInfo {
    pub declaration: String,
}

impl TInfo {
    pub fn from_decl(decl: &str) -> Self {
        Self {
            declaration: decl.to_string(),
        }
    }

    pub fn get_type_str(&self) -> String {
        self.declaration.clone()
    }
}

/// `ida_typeinf.parse_decl("int foo(int)")` → TInfo
pub fn parse_decl(decl: &str) -> Option<TInfo> {
    coverage::mark_implemented("ida_typeinf.parse_decl");
    if decl.is_empty() {
        return None;
    }
    Some(TInfo::from_decl(decl))
}

/// `ida_typeinf.apply_tinfo(ea, tif)` — apply a TInfo to an address.
pub fn apply_tinfo(session: &Session, ea: u64, tif: &TInfo) -> bool {
    coverage::mark_implemented("ida_typeinf.apply_tinfo");
    session.set_type(unlace_session::TypeAnnotation {
        ea,
        declaration: tif.declaration.clone(),
    });
    true
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_tinfo_round_trip() {
        let t = parse_decl("int main(int, char **)").unwrap();
        assert_eq!(t.get_type_str(), "int main(int, char **)");
    }

    #[test]
    fn test_apply_tinfo_persists() {
        let s = Session::new();
        let t = parse_decl("void *malloc(size_t)").unwrap();
        assert!(apply_tinfo(&s, 0x401000, &t));
        assert_eq!(s.annotations().types.len(), 1);
    }
}
