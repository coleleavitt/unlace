//! GDB Remote Serial Protocol — wire-format encoder/decoder.
//!
//! This is the offline-testable core: packet framing, checksum, hex
//! encoding for `g`/`G` (registers), `m`/`M` (memory), and `?`/`c`/`s`/
//! `z`/`Z` packet builders. Actual TCP socket wiring lives in
//! `backends.rs` and is feature-gated under `gdb-stub`.
//!
//! Reference: GDB manual "Remote Serial Protocols", and
//! references/ida/plugins/gdb_user/all/ (984 decompiled fns).

use thiserror::Error;

#[derive(Debug, Error)]
pub enum GdbRspError {
    #[error("packet missing $ prefix")]
    MissingDollar,
    #[error("packet missing # terminator")]
    MissingHash,
    #[error("checksum mismatch: expected {expected:#04x}, got {got:#04x}")]
    ChecksumMismatch { expected: u8, got: u8 },
    #[error("invalid hex digit: {0}")]
    BadHex(char),
}

pub type Result<T> = std::result::Result<T, GdbRspError>;

/// Encode a raw payload string as a complete GDB RSP packet
/// (`$payload#xx` with two-hex-digit checksum).
pub fn encode_packet(payload: &str) -> String {
    let sum: u8 = payload.bytes().fold(0u8, |a, b| a.wrapping_add(b));
    format!("${payload}#{sum:02x}")
}

/// Decode a complete `$payload#xx` packet to its payload.
/// Verifies the checksum.
pub fn decode_packet(packet: &str) -> Result<String> {
    let stripped = packet.strip_prefix('$').ok_or(GdbRspError::MissingDollar)?;
    let (payload, csum_hex) = stripped.split_once('#').ok_or(GdbRspError::MissingHash)?;
    if csum_hex.len() < 2 {
        return Err(GdbRspError::MissingHash);
    }
    let expected = u8::from_str_radix(&csum_hex[..2], 16)
        .map_err(|_| GdbRspError::BadHex(csum_hex.chars().next().unwrap_or('?')))?;
    let got: u8 = payload.bytes().fold(0u8, |a, b| a.wrapping_add(b));
    if expected != got {
        return Err(GdbRspError::ChecksumMismatch { expected, got });
    }
    Ok(payload.to_string())
}

/// Encode bytes as lowercase hex (GDB convention for memory data).
pub fn hex_encode(bytes: &[u8]) -> String {
    let mut out = String::with_capacity(bytes.len() * 2);
    for b in bytes {
        out.push_str(&format!("{:02x}", b));
    }
    out
}

/// Decode a GDB hex string back to raw bytes.
pub fn hex_decode(hex: &str) -> Result<Vec<u8>> {
    if !hex.len().is_multiple_of(2) {
        return Err(GdbRspError::BadHex('?'));
    }
    let mut out = Vec::with_capacity(hex.len() / 2);
    for chunk in hex.as_bytes().chunks(2) {
        let s = std::str::from_utf8(chunk).map_err(|_| GdbRspError::BadHex('?'))?;
        out.push(
            u8::from_str_radix(s, 16)
                .map_err(|_| GdbRspError::BadHex(s.chars().next().unwrap_or('?')))?,
        );
    }
    Ok(out)
}

/// Build a `m addr,length` (read memory) packet.
pub fn read_memory_packet(addr: u64, length: usize) -> String {
    encode_packet(&format!("m{:x},{:x}", addr, length))
}

/// Build a `M addr,length:data` (write memory) packet.
pub fn write_memory_packet(addr: u64, data: &[u8]) -> String {
    encode_packet(&format!(
        "M{:x},{:x}:{}",
        addr,
        data.len(),
        hex_encode(data)
    ))
}

/// Build a `Zkind,addr,kind` (insert breakpoint) packet.
///
/// `kind` 0 = sw breakpoint, 1 = hw breakpoint, 2 = write watchpoint,
/// 3 = read watchpoint, 4 = access watchpoint.
pub fn insert_breakpoint_packet(kind: u8, addr: u64, size: u8) -> String {
    encode_packet(&format!("Z{},{:x},{}", kind, addr, size))
}

/// Build a `zkind,addr,kind` (remove breakpoint) packet.
pub fn remove_breakpoint_packet(kind: u8, addr: u64, size: u8) -> String {
    encode_packet(&format!("z{},{:x},{}", kind, addr, size))
}

/// Build a `c` (continue) packet.
pub fn cont_packet() -> String {
    encode_packet("c")
}

/// Build an `s` (step) packet.
pub fn step_packet() -> String {
    encode_packet("s")
}

/// Build a `?` (halt reason) packet.
pub fn halt_reason_packet() -> String {
    encode_packet("?")
}

/// Build a `g` (read all regs) packet.
pub fn read_regs_packet() -> String {
    encode_packet("g")
}

/// Parse a stop reply packet (e.g. `T05thread:1;`).
/// Returns the signal number that caused the stop.
pub fn parse_stop_reply(payload: &str) -> Option<u8> {
    if let Some(rest) = payload.strip_prefix('T')
        && rest.len() >= 2
    {
        return u8::from_str_radix(&rest[..2], 16).ok();
    }
    if let Some(rest) = payload.strip_prefix('S')
        && rest.len() >= 2
    {
        return u8::from_str_radix(&rest[..2], 16).ok();
    }
    None
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_packet_round_trip_simple() {
        let pkt = encode_packet("OK");
        assert_eq!(pkt, "$OK#9a");
        let payload = decode_packet(&pkt).unwrap();
        assert_eq!(payload, "OK");
    }

    #[test]
    fn test_packet_round_trip_complex_payload() {
        let original = "T05thread:01;rax:000000000000002a;";
        let pkt = encode_packet(original);
        let recovered = decode_packet(&pkt).unwrap();
        assert_eq!(recovered, original);
    }

    #[test]
    fn test_decode_rejects_bad_checksum() {
        let err = decode_packet("$OK#00").unwrap_err();
        assert!(matches!(err, GdbRspError::ChecksumMismatch { .. }));
    }

    #[test]
    fn test_decode_rejects_missing_dollar() {
        let err = decode_packet("OK#9a").unwrap_err();
        assert!(matches!(err, GdbRspError::MissingDollar));
    }

    #[test]
    fn test_decode_rejects_missing_hash() {
        let err = decode_packet("$OK").unwrap_err();
        assert!(matches!(err, GdbRspError::MissingHash));
    }

    #[test]
    fn test_hex_encode_decode_round_trip() {
        let raw = vec![0x55, 0x48, 0x89, 0xE5, 0xC3];
        let hex = hex_encode(&raw);
        assert_eq!(hex, "554889e5c3");
        let back = hex_decode(&hex).unwrap();
        assert_eq!(back, raw);
    }

    #[test]
    fn test_read_memory_packet_format() {
        let pkt = read_memory_packet(0x401000, 16);
        let payload = decode_packet(&pkt).unwrap();
        assert_eq!(payload, "m401000,10");
    }

    #[test]
    fn test_write_memory_packet_format() {
        let pkt = write_memory_packet(0x500, &[0x90, 0x90]);
        let payload = decode_packet(&pkt).unwrap();
        assert_eq!(payload, "M500,2:9090");
    }

    #[test]
    fn test_insert_breakpoint_packet() {
        let pkt = insert_breakpoint_packet(0, 0x401000, 1);
        let payload = decode_packet(&pkt).unwrap();
        assert_eq!(payload, "Z0,401000,1");
    }

    #[test]
    fn test_remove_breakpoint_packet() {
        let pkt = remove_breakpoint_packet(1, 0x500, 1);
        let payload = decode_packet(&pkt).unwrap();
        assert_eq!(payload, "z1,500,1");
    }

    #[test]
    fn test_simple_packets_have_correct_payload() {
        assert_eq!(decode_packet(&cont_packet()).unwrap(), "c");
        assert_eq!(decode_packet(&step_packet()).unwrap(), "s");
        assert_eq!(decode_packet(&halt_reason_packet()).unwrap(), "?");
        assert_eq!(decode_packet(&read_regs_packet()).unwrap(), "g");
    }

    #[test]
    fn test_parse_stop_reply_extracts_signal() {
        assert_eq!(parse_stop_reply("T05thread:01;"), Some(5));
        assert_eq!(parse_stop_reply("S0b"), Some(11));
        assert_eq!(parse_stop_reply("OK"), None);
    }
}
