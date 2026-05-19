//! `ida_xref` — cross-reference iteration.
//!
//! Currently a stub: returns empty iterators. Real xref tables live on
//! the BinaryImage; the proper wiring follows once xref construction is
//! plumbed into the session.

use unlace_session::Session;

use crate::coverage;

pub fn get_first_cref_to(session: &Session, ea: u64) -> Option<u64> {
    coverage::mark_implemented("ida_xref.get_first_cref_to");
    let _ = (session, ea);
    None
}

pub fn get_next_cref_to(session: &Session, ea: u64, prev: u64) -> Option<u64> {
    coverage::mark_implemented("ida_xref.get_next_cref_to");
    let _ = (session, ea, prev);
    None
}

pub fn get_first_cref_from(session: &Session, ea: u64) -> Option<u64> {
    coverage::mark_implemented("ida_xref.get_first_cref_from");
    let _ = (session, ea);
    None
}

pub fn get_first_dref_to(session: &Session, ea: u64) -> Option<u64> {
    coverage::mark_implemented("ida_xref.get_first_dref_to");
    let _ = (session, ea);
    None
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_ida_xref_stubs_return_none() {
        let s = Session::new();
        assert_eq!(get_first_cref_to(&s, 0), None);
        assert_eq!(get_first_dref_to(&s, 0), None);
    }
}
