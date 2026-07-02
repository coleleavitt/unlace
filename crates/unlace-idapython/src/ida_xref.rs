//! `ida_xref` — cross-reference iteration.
//!
//! `XrefsTo` is backed by the binary's relocation table
//! (`BinaryImage::relocations`). `XrefsFrom` is backed by the session's bounded
//! instruction-xref index. This is still not IDA's complete instruction-operand
//! xref database; it only surfaces edges the current unlace analysis has staged
//! into the session.

use unlace_session::Session;

use crate::coverage;

/// Kind of cross-reference.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum XrefKind {
    Code,
    Data,
}

/// A single cross-reference: a relocation that targets `to`, with the
/// resolved symbol name when known.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Xref {
    pub to: u64,
    pub name: String,
    pub kind: XrefKind,
}

/// All relocation-derived cross-references targeting `ea`, in deterministic
/// (relocation-table) order.
pub fn xrefs_to(session: &Session, ea: u64) -> Vec<Xref> {
    coverage::mark_implemented("ida_xref.xrefs_to");
    session
        .with_binary(|img| {
            img.relocations
                .iter()
                .filter(|r| r.addr == ea)
                .map(|r| Xref {
                    to: r.addr,
                    name: r.sym_name.clone(),
                    kind: reloc_xref_kind(r.kind),
                })
                .collect()
        })
        .unwrap_or_default()
}

/// All code cross-references (PLT jump slots) targeting `ea`.
pub fn code_xrefs_to(session: &Session, ea: u64) -> Vec<Xref> {
    coverage::mark_implemented("ida_xref.code_xrefs_to");
    xrefs_to(session, ea)
        .into_iter()
        .filter(|x| x.kind == XrefKind::Code)
        .collect()
}

/// All data cross-references targeting `ea`.
pub fn data_xrefs_to(session: &Session, ea: u64) -> Vec<Xref> {
    coverage::mark_implemented("ida_xref.data_xrefs_to");
    xrefs_to(session, ea)
        .into_iter()
        .filter(|x| x.kind == XrefKind::Data)
        .collect()
}

pub fn xrefs_from(session: &Session, ea: u64) -> Vec<u64> {
    coverage::mark_implemented("ida_xref.xrefs_from");
    session.instruction_xrefs_from(ea)
}

fn reloc_xref_kind(kind: unlace_loader::image::RelocKind) -> XrefKind {
    use unlace_loader::image::RelocKind;
    match kind {
        RelocKind::PltJumpSlot => XrefKind::Code,
        _ => XrefKind::Data,
    }
}

// ── Legacy single-step iterator shims (IDA's get_first_*/get_next_* API). ──
// These return the first / next target address matching `ea`, backed by the
// same relocation data.

pub fn get_first_cref_to(session: &Session, ea: u64) -> Option<u64> {
    coverage::mark_implemented("ida_xref.get_first_cref_to");
    code_xrefs_to(session, ea).first().map(|x| x.to)
}

pub fn get_next_cref_to(session: &Session, ea: u64, prev: u64) -> Option<u64> {
    coverage::mark_implemented("ida_xref.get_next_cref_to");
    code_xrefs_to(session, ea)
        .into_iter()
        .map(|x| x.to)
        .find(|&to| to > prev)
}

pub fn get_first_cref_from(session: &Session, ea: u64) -> Option<u64> {
    coverage::mark_implemented("ida_xref.get_first_cref_from");
    xrefs_from(session, ea).first().copied()
}

pub fn get_first_dref_to(session: &Session, ea: u64) -> Option<u64> {
    coverage::mark_implemented("ida_xref.get_first_dref_to");
    data_xrefs_to(session, ea).first().map(|x| x.to)
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_loader::image::{ArchId, BinaryImage, Endian, RelocKind, Relocation};

    fn session_with_relocs(relocs: Vec<Relocation>) -> Session {
        let mut img = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        img.relocations = relocs;
        let s = Session::new();
        s.set_binary(img);
        s
    }

    fn reloc(addr: u64, name: &str, kind: RelocKind) -> Relocation {
        Relocation {
            addr,
            sym_name: name.to_string(),
            kind,
        }
    }

    #[test]
    fn code_xref_from_plt_jump_slot() {
        let s = session_with_relocs(vec![reloc(0x4010, "printf", RelocKind::PltJumpSlot)]);
        let crefs = code_xrefs_to(&s, 0x4010);
        assert_eq!(crefs.len(), 1);
        assert_eq!(crefs[0].name, "printf");
        assert_eq!(crefs[0].kind, XrefKind::Code);
        assert_eq!(get_first_cref_to(&s, 0x4010), Some(0x4010));
    }

    #[test]
    fn data_xref_from_glob_dat() {
        let s = session_with_relocs(vec![reloc(0x4020, "stdout", RelocKind::GlobDat)]);
        let drefs = data_xrefs_to(&s, 0x4020);
        assert_eq!(drefs.len(), 1);
        assert_eq!(drefs[0].kind, XrefKind::Data);
        // A data reloc is not a code xref.
        assert!(code_xrefs_to(&s, 0x4020).is_empty());
        assert_eq!(get_first_dref_to(&s, 0x4020), Some(0x4020));
    }

    #[test]
    fn empty_session_yields_no_xrefs() {
        let s = Session::new();
        assert!(xrefs_to(&s, 0x1000).is_empty());
        assert_eq!(get_first_cref_to(&s, 0x1000), None);
        assert_eq!(get_first_cref_from(&s, 0x1000), None);
        assert_eq!(get_first_dref_to(&s, 0x1000), None);
    }

    #[test]
    fn instruction_xrefs_from_session_index() {
        let s = Session::new();
        s.add_instruction_xref(0x1000, 0x2000);
        s.add_instruction_xref(0x1000, 0x3000);

        assert_eq!(xrefs_from(&s, 0x1000), vec![0x2000, 0x3000]);
        assert_eq!(get_first_cref_from(&s, 0x1000), Some(0x2000));
        assert!(xrefs_from(&s, 0x1004).is_empty());
    }
}
