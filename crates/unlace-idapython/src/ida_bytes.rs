//! `ida_bytes` — byte / word / dword / qword read+write.
//!
//! Reference: `research/ida-hexrays-docs/scripting/idapython/ida_bytes.py`.

use unlace_session::Session;

use crate::coverage;

fn read_n(session: &Session, ea: u64, n: usize) -> Option<u64> {
    session.with_binary(|img| {
        for section in &img.sections {
            if ea >= section.vaddr && ea + n as u64 <= section.vaddr + section.size as u64 {
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
            if ea >= section.vaddr && ea + length as u64 <= section.vaddr + section.size as u64
            {
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

#[cfg(test)]
mod tests {
    use super::*;

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
}
