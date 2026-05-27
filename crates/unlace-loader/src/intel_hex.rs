//! Intel HEX and Motorola S-record firmware loaders.
//!
//! These are line-oriented ASCII formats commonly used to flash microcontroller
//! firmware. Both encode an address-tagged byte stream with checksums; this
//! module decodes them into a list of contiguous segments suitable for further
//! analysis.
//!
//! References:
//! - Intel HEX: <https://en.wikipedia.org/wiki/Intel_HEX>
//! - Motorola S-record: <https://en.wikipedia.org/wiki/SREC_(file_format)>

use std::collections::BTreeMap;

use thiserror::Error;

use crate::image::{ArchId, BinaryImage, Endian, Section, SectionFlags};

// ---------------------------------------------------------------------------
// Intel HEX
// ---------------------------------------------------------------------------

/// Decoded Intel HEX image.
///
/// Adjacent data records are coalesced into a single segment; a discontinuity
/// in address (or an Extended Segment/Linear Address record that breaks the
/// run) opens a new segment.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct IntelHexImage {
    /// `(base_address, bytes)` for each contiguous run of data.
    pub segments: Vec<(u32, Vec<u8>)>,
    /// Optional start-execution address from a type-05 record (or type-03,
    /// folded into the same field for convenience).
    pub start_addr: Option<u32>,
}

/// Errors that can occur while parsing an Intel HEX stream.
#[derive(Debug, Error, PartialEq, Eq)]
pub enum IntelHexError {
    #[error("line {line}: missing ':' start code")]
    MissingStartCode { line: usize },
    #[error("line {line}: odd number of hex digits")]
    OddLength { line: usize },
    #[error("line {line}: invalid hex digit")]
    InvalidHex { line: usize },
    #[error("line {line}: record too short ({len} bytes, need ≥5)")]
    RecordTooShort { line: usize, len: usize },
    #[error("line {line}: declared byte count {declared} does not match payload {actual}")]
    LengthMismatch {
        line: usize,
        declared: usize,
        actual: usize,
    },
    #[error("line {line}: checksum mismatch (got 0x{got:02x}, expected 0x{expected:02x})")]
    BadChecksum { line: usize, got: u8, expected: u8 },
    #[error("line {line}: unknown record type 0x{rtype:02x}")]
    UnknownRecordType { line: usize, rtype: u8 },
    #[error("line {line}: type-{rtype:02x} record has wrong payload length {len}")]
    BadPayloadLen { line: usize, rtype: u8, len: usize },
    #[error("no EOF (type-01) record found")]
    NoEof,
}

/// Parse an Intel HEX text stream.
pub fn load_intel_hex(text: &str) -> Result<IntelHexImage, IntelHexError> {
    let mut image = IntelHexImage::default();
    // Upper 16 bits contributed by ESA (type 02, shifted left 4) or ELA
    // (type 04, shifted left 16). They are mutually exclusive in practice; we
    // simply maintain a single u32 upper-address offset.
    let mut upper: u32 = 0;
    let mut saw_eof = false;

    for (idx, raw_line) in text.lines().enumerate() {
        let line_no = idx + 1;
        let line = raw_line.trim();
        if line.is_empty() {
            continue;
        }
        if !line.starts_with(':') {
            return Err(IntelHexError::MissingStartCode { line: line_no });
        }
        let body = &line[1..];
        let bytes = decode_hex(body).map_err(|e| match e {
            HexErr::Odd => IntelHexError::OddLength { line: line_no },
            HexErr::Bad => IntelHexError::InvalidHex { line: line_no },
        })?;
        if bytes.len() < 5 {
            return Err(IntelHexError::RecordTooShort {
                line: line_no,
                len: bytes.len(),
            });
        }
        let count = bytes[0] as usize;
        let addr = u16::from_be_bytes([bytes[1], bytes[2]]);
        let rtype = bytes[3];
        let payload_end = 4 + count;
        if bytes.len() != payload_end + 1 {
            return Err(IntelHexError::LengthMismatch {
                line: line_no,
                declared: count,
                actual: bytes.len().saturating_sub(5),
            });
        }
        let payload = &bytes[4..payload_end];
        let checksum = bytes[payload_end];
        let sum: u8 = bytes[..payload_end]
            .iter()
            .copied()
            .fold(0u8, u8::wrapping_add);
        let expected = (!sum).wrapping_add(1);
        if checksum != expected {
            return Err(IntelHexError::BadChecksum {
                line: line_no,
                got: checksum,
                expected,
            });
        }

        match rtype {
            0x00 => {
                let abs = upper.wrapping_add(addr as u32);
                push_data(&mut image.segments, abs, payload);
            }
            0x01 => {
                saw_eof = true;
                break;
            }
            0x02 => {
                if payload.len() != 2 {
                    return Err(IntelHexError::BadPayloadLen {
                        line: line_no,
                        rtype,
                        len: payload.len(),
                    });
                }
                let seg = u16::from_be_bytes([payload[0], payload[1]]);
                upper = (seg as u32) << 4;
            }
            0x03 => {
                if payload.len() != 4 {
                    return Err(IntelHexError::BadPayloadLen {
                        line: line_no,
                        rtype,
                        len: payload.len(),
                    });
                }
                // CS:IP — fold into start_addr as (CS<<16)|IP for visibility.
                let cs = u16::from_be_bytes([payload[0], payload[1]]) as u32;
                let ip = u16::from_be_bytes([payload[2], payload[3]]) as u32;
                image.start_addr = Some((cs << 16) | ip);
            }
            0x04 => {
                if payload.len() != 2 {
                    return Err(IntelHexError::BadPayloadLen {
                        line: line_no,
                        rtype,
                        len: payload.len(),
                    });
                }
                let hi = u16::from_be_bytes([payload[0], payload[1]]);
                upper = (hi as u32) << 16;
            }
            0x05 => {
                if payload.len() != 4 {
                    return Err(IntelHexError::BadPayloadLen {
                        line: line_no,
                        rtype,
                        len: payload.len(),
                    });
                }
                image.start_addr = Some(u32::from_be_bytes([
                    payload[0], payload[1], payload[2], payload[3],
                ]));
            }
            other => {
                return Err(IntelHexError::UnknownRecordType {
                    line: line_no,
                    rtype: other,
                });
            }
        }
    }

    if !saw_eof {
        return Err(IntelHexError::NoEof);
    }
    Ok(image)
}

fn push_data(segments: &mut Vec<(u32, Vec<u8>)>, addr: u32, payload: &[u8]) {
    if let Some(last) = segments.last_mut() {
        let end = last.0.wrapping_add(last.1.len() as u32);
        if end == addr {
            last.1.extend_from_slice(payload);
            return;
        }
    }
    segments.push((addr, payload.to_vec()));
}

// ---------------------------------------------------------------------------
// Motorola S-record
// ---------------------------------------------------------------------------

/// Decoded Motorola S-record image.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct SRecordImage {
    /// `(base_address, bytes)` for each contiguous run of data.
    pub segments: Vec<(u32, Vec<u8>)>,
    /// Optional start address from an S7/S8/S9 termination record.
    pub start_addr: Option<u32>,
}

/// Errors that can occur while parsing an S-record stream.
#[derive(Debug, Error, PartialEq, Eq)]
pub enum SRecordError {
    #[error("line {line}: missing 'S' start code")]
    MissingStartCode { line: usize },
    #[error("line {line}: odd number of hex digits")]
    OddLength { line: usize },
    #[error("line {line}: invalid hex digit")]
    InvalidHex { line: usize },
    #[error("line {line}: record too short")]
    RecordTooShort { line: usize },
    #[error("line {line}: declared byte count {declared} does not match payload {actual}")]
    LengthMismatch {
        line: usize,
        declared: usize,
        actual: usize,
    },
    #[error("line {line}: checksum mismatch (got 0x{got:02x}, expected 0x{expected:02x})")]
    BadChecksum { line: usize, got: u8, expected: u8 },
    #[error("line {line}: unknown record type 'S{rtype}'")]
    UnknownRecordType { line: usize, rtype: char },
    #[error("line {line}: address field too short for record type")]
    BadAddressLen { line: usize },
}

/// Parse a Motorola S-record text stream.
pub fn load_s_record(text: &str) -> Result<SRecordImage, SRecordError> {
    let mut image = SRecordImage::default();

    for (idx, raw_line) in text.lines().enumerate() {
        let line_no = idx + 1;
        let line = raw_line.trim();
        if line.is_empty() {
            continue;
        }
        let mut chars = line.chars();
        let s = chars.next();
        if s != Some('S') && s != Some('s') {
            return Err(SRecordError::MissingStartCode { line: line_no });
        }
        let rtype_ch = chars
            .next()
            .ok_or(SRecordError::RecordTooShort { line: line_no })?;
        let rest: String = chars.collect();
        let bytes = decode_hex(&rest).map_err(|e| match e {
            HexErr::Odd => SRecordError::OddLength { line: line_no },
            HexErr::Bad => SRecordError::InvalidHex { line: line_no },
        })?;
        if bytes.is_empty() {
            return Err(SRecordError::RecordTooShort { line: line_no });
        }
        let count = bytes[0] as usize;
        if bytes.len() != count + 1 {
            return Err(SRecordError::LengthMismatch {
                line: line_no,
                declared: count,
                actual: bytes.len().saturating_sub(1),
            });
        }
        let checksum = *bytes.last().unwrap();
        let sum: u8 = bytes[..bytes.len() - 1]
            .iter()
            .copied()
            .fold(0u8, u8::wrapping_add);
        let expected = !sum;
        if checksum != expected {
            return Err(SRecordError::BadChecksum {
                line: line_no,
                got: checksum,
                expected,
            });
        }

        // Address width per record type.
        let addr_bytes: usize = match rtype_ch {
            '0' | '1' | '5' | '9' => 2,
            '2' | '6' | '8' => 3,
            '3' | '7' => 4,
            '4' => {
                // Reserved — skip silently.
                continue;
            }
            other => {
                return Err(SRecordError::UnknownRecordType {
                    line: line_no,
                    rtype: other,
                });
            }
        };
        // bytes[0] = count; bytes[1..1+addr_bytes] = address; then data; last = checksum.
        if bytes.len() < 1 + addr_bytes + 1 {
            return Err(SRecordError::BadAddressLen { line: line_no });
        }
        let mut addr: u32 = 0;
        for &b in &bytes[1..1 + addr_bytes] {
            addr = (addr << 8) | b as u32;
        }
        let data = &bytes[1 + addr_bytes..bytes.len() - 1];

        match rtype_ch {
            '0' | '5' | '6' => {
                // Header / count records — ignored for image reconstruction.
            }
            '1' | '2' | '3' => {
                push_data(&mut image.segments, addr, data);
            }
            '7' | '8' | '9' => {
                image.start_addr = Some(addr);
            }
            _ => unreachable!(),
        }
    }

    Ok(image)
}

// ---------------------------------------------------------------------------
// Hex helpers
// ---------------------------------------------------------------------------

enum HexErr {
    Odd,
    Bad,
}

fn decode_hex(s: &str) -> Result<Vec<u8>, HexErr> {
    if !s.len().is_multiple_of(2) {
        return Err(HexErr::Odd);
    }
    let bytes = s.as_bytes();
    let mut out = Vec::with_capacity(bytes.len() / 2);
    for chunk in bytes.chunks_exact(2) {
        let hi = hex_nibble(chunk[0]).ok_or(HexErr::Bad)?;
        let lo = hex_nibble(chunk[1]).ok_or(HexErr::Bad)?;
        out.push((hi << 4) | lo);
    }
    Ok(out)
}

fn hex_nibble(b: u8) -> Option<u8> {
    match b {
        b'0'..=b'9' => Some(b - b'0'),
        b'a'..=b'f' => Some(b - b'a' + 10),
        b'A'..=b'F' => Some(b - b'A' + 10),
        _ => None,
    }
}

// ---------------------------------------------------------------------------
// Converter: IntelHexImage → BinaryImage
// ---------------------------------------------------------------------------

/// Convert a parsed [`IntelHexImage`] into a [`BinaryImage`].
///
/// Each contiguous segment becomes a separate `.text` section (suffixed with
/// the segment index when there are multiple). The entry point is taken from
/// [`IntelHexImage::start_addr`], falling back to the base address of the
/// first segment. The caller supplies the target [`ArchId`] since the HEX
/// format itself carries no architecture metadata.
pub fn intel_hex_to_binary_image(img: &IntelHexImage, arch: ArchId) -> BinaryImage {
    let sections: Vec<Section> = img
        .segments
        .iter()
        .enumerate()
        .map(|(i, (base, data))| {
            let name = if img.segments.len() == 1 {
                ".text".to_string()
            } else {
                format!(".text.{}", i)
            };
            Section {
                name,
                vaddr: *base as u64,
                size: data.len() as u64,
                data: data.clone(),
                flags: SectionFlags::READ.union(SectionFlags::EXEC),
            }
        })
        .collect();

    let entry = img
        .start_addr
        .or(img.segments.first().map(|(base, _)| *base))
        .unwrap_or(0) as u64;

    BinaryImage {
        arch,
        endian: Endian::Little,
        entry,
        sections,
        symbols: BTreeMap::new(),
        plt_symbols: BTreeMap::new(),
        relocations: Vec::new(),
        string_table: BTreeMap::new(),
        tls_callbacks: Vec::new(),
        function_starts: Vec::new(),
        debug_records: Vec::new(),
        load_config: None,
        pe_mitigations: None,
        runtime_functions: Vec::new(),
        resources: Vec::new(),
        bound_imports: Vec::new(),
        delay_imports: Vec::new(),
        forwarded_exports: Vec::new(),
        forwarded_resolutions: BTreeMap::new(),
        rich_header: None,
        dylibs: Vec::new(),
        rpaths: Vec::new(),
        pdb_types: None,
        msvc_rtti: None,
        seh: None,
        go_module: None,
        go_itabs: BTreeMap::new(),
        go_types: BTreeMap::new(),
        swift_info: None,
        auth_pointers: Vec::new(),
        auth_ptr_slots: Vec::new(),
        wasm_component: None,
    }
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;

    /// Compute the Intel HEX checksum for a record's header+payload bytes.
    fn ihex_cksum(bytes: &[u8]) -> u8 {
        let s: u8 = bytes.iter().copied().fold(0u8, u8::wrapping_add);
        (!s).wrapping_add(1)
    }

    fn ihex_line(rtype: u8, addr: u16, payload: &[u8]) -> String {
        let mut hdr = vec![payload.len() as u8, (addr >> 8) as u8, addr as u8, rtype];
        hdr.extend_from_slice(payload);
        let cs = ihex_cksum(&hdr);
        let mut s = String::from(":");
        for b in &hdr {
            s.push_str(&format!("{:02X}", b));
        }
        s.push_str(&format!("{:02X}", cs));
        s
    }

    #[test]
    fn ihex_simple_data_and_eof() {
        let l1 = ihex_line(0x00, 0x0100, &[0xDE, 0xAD, 0xBE, 0xEF]);
        let eof = ihex_line(0x01, 0x0000, &[]);
        let text = format!("{}\n{}\n", l1, eof);
        let img = load_intel_hex(&text).unwrap();
        assert_eq!(
            img.segments,
            vec![(0x0000_0100, vec![0xDE, 0xAD, 0xBE, 0xEF])]
        );
        assert_eq!(img.start_addr, None);
    }

    #[test]
    fn ihex_extended_linear_address_and_start() {
        // ELA 0x0001 -> upper = 0x00010000; data at 0x0200 => 0x00010200.
        let ela = ihex_line(0x04, 0x0000, &[0x00, 0x01]);
        let data = ihex_line(0x00, 0x0200, &[0x11, 0x22]);
        // Start linear address 0x08000123.
        let start = ihex_line(0x05, 0x0000, &[0x08, 0x00, 0x01, 0x23]);
        let eof = ihex_line(0x01, 0x0000, &[]);
        let text = format!("{}\n{}\n{}\n{}\n", ela, data, start, eof);
        let img = load_intel_hex(&text).unwrap();
        assert_eq!(img.segments, vec![(0x0001_0200, vec![0x11, 0x22])]);
        assert_eq!(img.start_addr, Some(0x0800_0123));
    }

    #[test]
    fn ihex_bad_checksum_rejected() {
        // Hand-crafted invalid checksum.
        let bad = ":0401000001020304AA\n:00000001FF\n";
        let err = load_intel_hex(bad).unwrap_err();
        assert!(
            matches!(err, IntelHexError::BadChecksum { .. }),
            "got {err:?}"
        );
    }

    // ----- S-record helpers -----

    fn srec_cksum(bytes: &[u8]) -> u8 {
        let s: u8 = bytes.iter().copied().fold(0u8, u8::wrapping_add);
        !s
    }

    fn srec_line(rtype: char, addr: u32, addr_bytes: usize, payload: &[u8]) -> String {
        let mut body = Vec::new();
        // count = addr_bytes + payload + 1 (checksum)
        let count = (addr_bytes + payload.len() + 1) as u8;
        body.push(count);
        for i in (0..addr_bytes).rev() {
            body.push((addr >> (i * 8)) as u8);
        }
        body.extend_from_slice(payload);
        let cs = srec_cksum(&body);
        let mut s = format!("S{}", rtype);
        for b in &body {
            s.push_str(&format!("{:02X}", b));
        }
        s.push_str(&format!("{:02X}", cs));
        s
    }

    #[test]
    fn srec_s1_data_and_s9_start() {
        let s1 = srec_line('1', 0x1234, 2, &[0xAA, 0xBB, 0xCC]);
        let s9 = srec_line('9', 0x1234, 2, &[]);
        let text = format!("{}\n{}\n", s1, s9);
        let img = load_s_record(&text).unwrap();
        assert_eq!(img.segments, vec![(0x0000_1234, vec![0xAA, 0xBB, 0xCC])]);
        assert_eq!(img.start_addr, Some(0x0000_1234));
    }

    #[test]
    fn srec_s3_32bit_address_and_coalesce() {
        let a = srec_line('3', 0x0800_0000, 4, &[0x01, 0x02]);
        let b = srec_line('3', 0x0800_0002, 4, &[0x03, 0x04]);
        let s7 = srec_line('7', 0x0800_0000, 4, &[]);
        let text = format!("{}\n{}\n{}\n", a, b, s7);
        let img = load_s_record(&text).unwrap();
        assert_eq!(
            img.segments,
            vec![(0x0800_0000, vec![0x01, 0x02, 0x03, 0x04])]
        );
        assert_eq!(img.start_addr, Some(0x0800_0000));
    }

    #[test]
    fn srec_bad_checksum_rejected() {
        // S1 record with corrupted checksum byte.
        // count=04, addr=0000, data=FF, cksum should be !(04+00+00+FF)=00 — we give 11.
        let bad = "S1040000FF11\nS9030000FC\n";
        let err = load_s_record(bad).unwrap_err();
        assert!(
            matches!(err, SRecordError::BadChecksum { .. }),
            "got {err:?}"
        );
    }

    // ----- intel_hex_to_binary_image -----

    #[test]
    fn intel_hex_round_trips_with_known_arch() {
        use crate::image::ArchId;

        // A minimal Intel HEX stream with verified checksums:
        //   - Extended Linear Address 0x0000 (`:020000040000FA`)
        //   - 16 bytes of data at offset 0x0000 (bytes 0x00..0x0F)
        //   - EOF (`:00000001FF`)
        // Data record checksum: 0x78 = (0x100 - (0x10 + 0x00 + 0x00 + 0x00
        // + sum(0x00..=0x0F)) mod 0x100).
        let hex_text = ":020000040000FA\n\
                        :10000000000102030405060708090A0B0C0D0E0F78\n\
                        :00000001FF\n";

        let ihex = load_intel_hex(hex_text).expect("hex stream parses");
        let bin = intel_hex_to_binary_image(&ihex, ArchId::Arm);

        // Architecture is passed through.
        assert_eq!(bin.arch, ArchId::Arm);

        // Entry falls back to the first segment base (no type-05 record).
        assert_eq!(bin.entry, 0x0000_0000);

        // Single section with the expected 16-byte ramp.
        assert_eq!(bin.sections.len(), 1);
        let sec = &bin.sections[0];
        assert_eq!(sec.name, ".text");
        assert_eq!(sec.vaddr, 0);
        assert_eq!(sec.data, (0u8..16).collect::<Vec<u8>>());
    }
}
