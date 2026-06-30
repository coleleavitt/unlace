//! `ida_bytes` — byte / word / dword / qword read+write.
//!
//! Reference: `research/ida-hexrays-docs/scripting/idapython/ida_bytes.py`.

use unlace_session::Session;

use crate::coverage;

fn read_n(session: &Session, ea: u64, n: usize) -> Option<u64> {
    session.with_binary(|img| {
        for section in &img.sections {
            if ea >= section.vaddr && ea + n as u64 <= section.vaddr + section.size {
                let off = (ea - section.vaddr) as usize;
                let slice = &section.data[off..off + n];
                let mut buf = [0u8; 8];
                buf[..n].copy_from_slice(slice);
                return Some(u64::from_le_bytes(buf));
            }
        }
        None
    })?
}

pub fn get_byte(session: &Session, ea: u64) -> Option<u8> {
    coverage::mark_implemented("ida_bytes.get_byte");
    read_n(session, ea, 1).map(|v| v as u8)
}

pub fn get_word(session: &Session, ea: u64) -> Option<u16> {
    coverage::mark_implemented("ida_bytes.get_word");
    read_n(session, ea, 2).map(|v| v as u16)
}

pub fn get_dword(session: &Session, ea: u64) -> Option<u32> {
    coverage::mark_implemented("ida_bytes.get_dword");
    read_n(session, ea, 4).map(|v| v as u32)
}

pub fn get_qword(session: &Session, ea: u64) -> Option<u64> {
    coverage::mark_implemented("ida_bytes.get_qword");
    read_n(session, ea, 8)
}

/// `ida_bytes.get_bytes(ea, length)` — read `length` bytes starting at ea.
pub fn get_bytes(session: &Session, ea: u64, length: usize) -> Option<Vec<u8>> {
    coverage::mark_implemented("ida_bytes.get_bytes");
    session.with_binary(|img| {
        for section in &img.sections {
            if ea >= section.vaddr && ea + length as u64 <= section.vaddr + section.size {
                let off = (ea - section.vaddr) as usize;
                return Some(section.data[off..off + length].to_vec());
            }
        }
        None
    })?
}

/// `ida_bytes.get_strlit_contents(ea, length, strtype)` — read a C string.
///
/// `strtype` is ignored for now (we always assume UTF-8 C strings).
pub fn get_strlit_contents(session: &Session, ea: u64, max_length: usize) -> Option<String> {
    coverage::mark_implemented("ida_bytes.get_strlit_contents");
    let raw = get_bytes(session, ea, max_length)?;
    let end = raw.iter().position(|&b| b == 0).unwrap_or(raw.len());
    String::from_utf8(raw[..end].to_vec()).ok()
}

/// `ida_bytes.is_loaded(ea)` — does `ea` fall within a mapped section?
///
/// Backed by the section table: true iff `ea` is inside `[vaddr, vaddr+size)`
/// of any loaded section.
pub fn is_loaded(session: &Session, ea: u64) -> bool {
    coverage::mark_implemented("ida_bytes.is_loaded");
    session
        .with_binary(|img| {
            img.sections
                .iter()
                .any(|s| ea >= s.vaddr && ea < s.vaddr + s.size)
        })
        .unwrap_or(false)
}

/// `ida_bytes.is_code(ea)` — is `ea` in an executable section?
///
/// Approximation: IDA classifies code per-item; we classify by section
/// permissions, returning true iff `ea` lies in an executable mapped section.
pub fn is_code(session: &Session, ea: u64) -> bool {
    coverage::mark_implemented("ida_bytes.is_code");
    session
        .with_binary(|img| {
            img.sections.iter().any(|s| {
                ea >= s.vaddr
                    && ea < s.vaddr + s.size
                    && s.flags.contains(unlace_loader::SectionFlags::EXEC)
            })
        })
        .unwrap_or(false)
}

/// `ida_bytes.is_data(ea)` — is `ea` in a mapped, non-executable section?
///
/// Approximation (see [`is_code`]): true iff `ea` lies in a mapped section that
/// is *not* marked executable (data / rodata / bss).
pub fn is_data(session: &Session, ea: u64) -> bool {
    coverage::mark_implemented("ida_bytes.is_data");
    session
        .with_binary(|img| {
            img.sections.iter().any(|s| {
                ea >= s.vaddr
                    && ea < s.vaddr + s.size
                    && !s.flags.contains(unlace_loader::SectionFlags::EXEC)
            })
        })
        .unwrap_or(false)
}

/// `ida_bytes.next_head(ea, maxea=BADADDR)` — start EA of the next defined item
/// strictly after `ea`.
///
/// IDA tracks per-byte item boundaries; we don't carry that granularity, so we
/// approximate "defined items" by the symbol table — the next symbol address
/// strictly greater than `ea` (and, if provided, strictly less than `max_ea`).
/// Returns `None` when there is no such item.
pub fn next_head(session: &Session, ea: u64, max_ea: u64) -> Option<u64> {
    coverage::mark_implemented("ida_bytes.next_head");
    session.with_binary(|img| {
        img.symbols
            .range(ea.saturating_add(1)..)
            .map(|(k, _)| *k)
            .find(|&k| k < max_ea)
    })?
}

/// `ida_bytes.prev_head(ea, minea=0)` — start EA of the previous defined item
/// strictly before `ea`.
///
/// Same approximation as [`next_head`]: backed by the symbol table. Returns the
/// nearest symbol address strictly less than `ea` and `>= min_ea`, else `None`.
pub fn prev_head(session: &Session, ea: u64, min_ea: u64) -> Option<u64> {
    coverage::mark_implemented("ida_bytes.prev_head");
    session.with_binary(|img| img.symbols.range(min_ea..ea).next_back().map(|(k, _)| *k))?
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_loader::{ArchId, BinaryImage, Endian, Section, SectionFlags, Symbol, SymbolKind};

    fn fixture_session() -> Session {
        let mut img = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        // Executable .text at 0x1000..0x1010 (16 bytes).
        img.sections.push(Section {
            name: ".text".into(),
            vaddr: 0x1000,
            size: 0x10,
            data: vec![0xCC; 0x10],
            flags: SectionFlags::READ | SectionFlags::EXEC,
        });
        // Read-only data .rodata at 0x2000..0x2010.
        img.sections.push(Section {
            name: ".rodata".into(),
            vaddr: 0x2000,
            size: 0x10,
            data: vec![0u8; 0x10],
            flags: SectionFlags::READ,
        });
        img.symbols.insert(
            0x1000,
            Symbol {
                name: "func_a".into(),
                addr: 0x1000,
                size: 0x10,
                kind: SymbolKind::Function,
            },
        );
        img.symbols.insert(
            0x2000,
            Symbol {
                name: "g_data".into(),
                addr: 0x2000,
                size: 0x10,
                kind: SymbolKind::Object,
            },
        );
        let s = Session::new();
        s.set_binary(img);
        s
    }

    #[test]
    fn test_ida_bytes_out_of_range_returns_none() {
        let s = Session::new();
        assert_eq!(get_byte(&s, 0x1000), None);
        assert_eq!(get_dword(&s, 0x1000), None);
    }

    #[test]
    fn test_ida_bytes_strlit_no_binary() {
        let s = Session::new();
        assert_eq!(get_strlit_contents(&s, 0, 16), None);
    }

    #[test]
    fn test_is_loaded() {
        let s = fixture_session();
        assert!(is_loaded(&s, 0x1000));
        assert!(is_loaded(&s, 0x200F));
        assert!(!is_loaded(&s, 0x1010)); // end exclusive
        assert!(!is_loaded(&s, 0x9999));
        // No binary → never loaded.
        assert!(!is_loaded(&Session::new(), 0x1000));
    }

    #[test]
    fn test_is_code_is_data() {
        let s = fixture_session();
        assert!(is_code(&s, 0x1000));
        assert!(!is_data(&s, 0x1000));
        assert!(is_data(&s, 0x2000));
        assert!(!is_code(&s, 0x2000));
        // Unmapped is neither.
        assert!(!is_code(&s, 0x9999));
        assert!(!is_data(&s, 0x9999));
    }

    #[test]
    fn test_next_prev_head() {
        let s = fixture_session();
        assert_eq!(next_head(&s, 0x1000, u64::MAX), Some(0x2000));
        assert_eq!(next_head(&s, 0x0, u64::MAX), Some(0x1000));
        assert_eq!(next_head(&s, 0x2000, u64::MAX), None);
        // max_ea clamps the result.
        assert_eq!(next_head(&s, 0x1000, 0x1500), None);
        assert_eq!(prev_head(&s, 0x2000, 0), Some(0x1000));
        assert_eq!(prev_head(&s, 0x1000, 0), None);
        // min_ea clamps the result.
        assert_eq!(prev_head(&s, 0x2000, 0x1500), None);
    }
}
