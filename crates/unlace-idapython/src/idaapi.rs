//! `idaapi` — IDA's main module aggregator.
//!
//! Reference: `research/ida-hexrays-docs/scripting/idapython/idaapi.py` —
//! historically a `from ida_* import *` namespace + a handful of unique
//! helpers (image base, decompile entry point, next/prev addr).

use unlace_session::Session;

use crate::coverage;
use crate::ida_hexrays;

pub(crate) fn image_base_or_min_section(img: &unlace_loader::BinaryImage) -> Option<u64> {
    img.image_base
        .or_else(|| img.sections.iter().map(|s| s.vaddr).min())
}

/// `idaapi.get_imagebase()` — the binary's image base address.
pub fn get_imagebase(session: &Session) -> Option<u64> {
    coverage::mark_implemented("idaapi.get_imagebase");
    session.with_binary(image_base_or_min_section).flatten()
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
/// Returns staged pseudocode text when the hosting session populated a
/// decompiled-function cache. This is a text subset, not Hex-Rays ctree parity.
pub fn decompile(session: &Session, ea: u64) -> Option<String> {
    coverage::mark_implemented("idaapi.decompile");
    ida_hexrays::decompile(session, ea).map(|cfunc| cfunc.as_text())
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_loader::{ArchId, BinaryImage, Endian, Section, SectionFlags};

    #[test]
    fn test_idaapi_next_prev_addr() {
        let s = Session::new();
        assert_eq!(next_addr(&s, 0x1000), 0x1001);
        assert_eq!(prev_addr(&s, 0x1000), 0x0FFF);
        assert_eq!(prev_addr(&s, 0), 0); // saturating
    }

    #[test]
    fn imagebase_uses_loader_base_not_entry_or_min_section() {
        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        image.entry = 0x401080;
        image.image_base = Some(0x400000);
        image.sections.push(Section {
            name: ".text".into(),
            vaddr: 0x401000,
            size: 0x100,
            data: vec![0; 0x100],
            flags: SectionFlags::READ | SectionFlags::EXEC,
        });
        let session = Session::new();
        session.set_binary(image);

        assert_eq!(get_imagebase(&session), Some(0x400000));
    }

    #[test]
    fn imagebase_falls_back_to_min_section_when_loader_base_absent() {
        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        image.entry = 0x500000;
        image.sections.push(Section {
            name: ".data".into(),
            vaddr: 0x402000,
            size: 0x10,
            data: vec![0; 0x10],
            flags: SectionFlags::READ,
        });
        image.sections.push(Section {
            name: ".text".into(),
            vaddr: 0x401000,
            size: 0x100,
            data: vec![0; 0x100],
            flags: SectionFlags::READ | SectionFlags::EXEC,
        });
        let session = Session::new();
        session.set_binary(image);

        assert_eq!(get_imagebase(&session), Some(0x401000));
    }

    #[test]
    fn decompile_reads_staged_session_text() {
        let s = Session::new();
        s.set_decompiled_function(0x1000, 0x20, "main".into(), "int main(void) {}".into());

        assert_eq!(decompile(&s, 0x1010).as_deref(), Some("int main(void) {}"));
        assert!(decompile(&s, 0x2000).is_none());
    }
}
