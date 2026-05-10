//! x64 SEH `.pdata` / `.xdata` parsers (header MVP).
//!
//! Decodes the on-disk `RUNTIME_FUNCTION` table and `UNWIND_INFO` records.
//! Live PE-loader integration (resolving the exception directory, walking
//! chained unwind info) is deferred — see `pe.rs` `parse_pdata` which already
//! handles a different code path via the `object` crate. These standalone
//! parsers exist for synthetic / fuzzing use and future raw-RVA decode paths.

pub const UNW_FLAG_EHANDLER: u8 = 0x1;
pub const UNW_FLAG_UHANDLER: u8 = 0x2;
pub const UNW_FLAG_CHAININFO: u8 = 0x4;

#[derive(Debug, Clone, Copy)]
pub struct RuntimeFunction {
    pub begin_addr: u32,
    pub end_addr: u32,
    pub unwind_info_addr: u32,
}

#[derive(Debug, Clone)]
pub struct SehInfo {
    pub functions: Vec<SehFunction>,
}

#[derive(Debug, Clone)]
pub struct SehFunction {
    pub begin: u64,
    pub end: u64,
    pub unwind_info: UnwindInfo,
    pub handler: Option<u64>,
}

#[derive(Debug, Clone)]
pub struct UnwindInfo {
    pub version: u8,
    pub flags: u8,
    pub size_of_prolog: u8,
    pub count_of_codes: u8,
    pub frame_register: u8,
    pub frame_offset: u8,
    pub unwind_codes_raw: Vec<u16>,
    pub handler_rva: Option<u32>,
}

fn read_u32(buf: &[u8], off: usize) -> Option<u32> {
    let slice = buf.get(off..off + 4)?;
    Some(u32::from_le_bytes([slice[0], slice[1], slice[2], slice[3]]))
}

fn read_u16(buf: &[u8], off: usize) -> Option<u16> {
    let slice = buf.get(off..off + 2)?;
    Some(u16::from_le_bytes([slice[0], slice[1]]))
}

pub fn parse_runtime_function_table(buf: &[u8]) -> Vec<RuntimeFunction> {
    let mut out = Vec::with_capacity(buf.len() / 12);
    let mut off = 0;
    while off + 12 <= buf.len() {
        let begin = read_u32(buf, off).unwrap();
        let end = read_u32(buf, off + 4).unwrap();
        let uw = read_u32(buf, off + 8).unwrap();
        if begin == 0 && end == 0 && uw == 0 {
            break;
        }
        out.push(RuntimeFunction {
            begin_addr: begin,
            end_addr: end,
            unwind_info_addr: uw,
        });
        off += 12;
    }
    out
}

pub fn parse_unwind_info(buf: &[u8]) -> Option<UnwindInfo> {
    if buf.len() < 4 {
        return None;
    }
    let byte0 = buf[0];
    let version = byte0 & 0x7;
    let flags = (byte0 >> 3) & 0x1F;
    let size_of_prolog = buf[1];
    let count_of_codes = buf[2];
    let frame_byte = buf[3];
    let frame_register = frame_byte & 0x0F;
    let frame_offset = (frame_byte >> 4) & 0x0F;

    let codes_start = 4usize;
    let codes_end = codes_start.checked_add((count_of_codes as usize).checked_mul(2)?)?;
    if buf.len() < codes_end {
        return None;
    }
    let mut unwind_codes_raw = Vec::with_capacity(count_of_codes as usize);
    for i in 0..count_of_codes as usize {
        unwind_codes_raw.push(read_u16(buf, codes_start + i * 2)?);
    }

    // Each unwind code slot is u16; pad to a u32 boundary if count is odd.
    let padded_codes = if count_of_codes % 2 == 1 {
        count_of_codes as usize + 1
    } else {
        count_of_codes as usize
    };
    let after_codes = codes_start + padded_codes * 2;

    let handler_rva = if flags & (UNW_FLAG_EHANDLER | UNW_FLAG_UHANDLER) != 0 {
        read_u32(buf, after_codes)
    } else {
        None
    };

    Some(UnwindInfo {
        version,
        flags,
        size_of_prolog,
        count_of_codes,
        frame_register,
        frame_offset,
        unwind_codes_raw,
        handler_rva,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn parse_runtime_function_table_two_entries() {
        let mut buf = Vec::with_capacity(24);
        buf.extend_from_slice(&0x1000u32.to_le_bytes());
        buf.extend_from_slice(&0x1050u32.to_le_bytes());
        buf.extend_from_slice(&0x4000u32.to_le_bytes());
        buf.extend_from_slice(&0x1060u32.to_le_bytes());
        buf.extend_from_slice(&0x1080u32.to_le_bytes());
        buf.extend_from_slice(&0x4010u32.to_le_bytes());

        let entries = parse_runtime_function_table(&buf);
        assert_eq!(entries.len(), 2);
        assert_eq!(entries[0].begin_addr, 0x1000);
        assert_eq!(entries[0].end_addr, 0x1050);
        assert_eq!(entries[0].unwind_info_addr, 0x4000);
        assert_eq!(entries[1].begin_addr, 0x1060);
        assert_eq!(entries[1].end_addr, 0x1080);
        assert_eq!(entries[1].unwind_info_addr, 0x4010);
    }

    #[test]
    fn parse_unwind_info_basic() {
        // version=1, flags=0, prolog=5, count=0, frameReg=0, frameOff=0.
        let buf = [0x01u8, 0x05, 0x00, 0x00];
        let ui = parse_unwind_info(&buf).unwrap();
        assert_eq!(ui.version, 1);
        assert_eq!(ui.flags, 0);
        assert_eq!(ui.size_of_prolog, 5);
        assert_eq!(ui.count_of_codes, 0);
        assert_eq!(ui.frame_register, 0);
        assert_eq!(ui.frame_offset, 0);
        assert!(ui.unwind_codes_raw.is_empty());
        assert!(ui.handler_rva.is_none());
    }

    #[test]
    fn parse_unwind_info_with_handler() {
        // version=1, flags=EHANDLER(<<3)=0x08, prolog=3, count=0.
        let mut buf = vec![0x01 | (UNW_FLAG_EHANDLER << 3), 0x03, 0x00, 0x00];
        buf.extend_from_slice(&0xABCD_1234u32.to_le_bytes());
        let ui = parse_unwind_info(&buf).unwrap();
        assert_eq!(ui.version, 1);
        assert_eq!(ui.flags, UNW_FLAG_EHANDLER);
        assert_eq!(ui.handler_rva, Some(0xABCD_1234));
    }
}
