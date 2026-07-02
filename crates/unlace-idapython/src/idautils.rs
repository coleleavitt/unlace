//! `idautils` — high-level iteration helpers.
//!
//! Reference: `research/ida-hexrays-docs/scripting/idapython/idautils.py`.

use unlace_session::Session;

use crate::{coverage, ida_xref};

/// `idautils.Functions(start=None, end=None)` — iterate function start addresses.
pub fn functions(session: &Session, start: Option<u64>, end: Option<u64>) -> Vec<u64> {
    coverage::mark_implemented("idautils.Functions");
    session
        .with_binary(|img| {
            img.symbols
                .keys()
                .copied()
                .filter(|&ea| start.is_none_or(|s| ea >= s) && end.is_none_or(|e| ea < e))
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
    ida_xref::xrefs_to(session, ea)
        .into_iter()
        .map(|xref| xref.to)
        .collect()
}

/// `idautils.XrefsFrom(ea, flags=0)` — addresses referenced FROM `ea`.
pub fn xrefs_from(session: &Session, ea: u64) -> Vec<u64> {
    coverage::mark_implemented("idautils.XrefsFrom");
    ida_xref::xrefs_from(session, ea)
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::collections::BTreeMap;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};
    use unlace_loader::image::{ArchId, BinaryImage, Endian, RelocKind, Relocation};

    fn session_with_relocs(relocs: Vec<Relocation>) -> Session {
        let mut img = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        img.relocations = relocs;
        let s = Session::new();
        s.set_binary(img);
        s
    }

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

    #[test]
    fn test_idautils_xrefs_to_uses_relocations() {
        let s = session_with_relocs(vec![Relocation {
            addr: 0x4010,
            sym_name: "printf".into(),
            kind: RelocKind::PltJumpSlot,
        }]);
        assert_eq!(xrefs_to(&s, 0x4010), vec![0x4010]);
        assert!(xrefs_to(&s, 0x4020).is_empty());
    }

    #[test]
    fn test_idautils_xrefs_from_uses_instruction_xrefs() {
        let s = Session::new();
        s.add_instruction_xref(0x1000, 0x2000);

        assert_eq!(xrefs_from(&s, 0x1000), vec![0x2000]);
        assert!(xrefs_from(&s, 0x1004).is_empty());
    }

    #[test]
    fn test_idautils_xrefs_from_consumes_ir_instruction_xrefs() {
        let mut func = Function::new("caller", BlockId(0), 0x1000);
        let mut block = BasicBlock::new(BlockId(0));
        block.insns.push(IrInsn::without_output(
            IrOp::Call,
            vec![Varnode::constant(0x2000, 8)],
            0x1010,
        ));
        func.insert_block(block);
        let funcs = BTreeMap::from([(0x1000, func)]);
        let s = Session::new();
        s.add_instruction_xrefs(unlace_ir::xref::build_instruction_xrefs(&funcs));

        assert_eq!(xrefs_from(&s, 0x1010), vec![0x2000]);
    }
}
