//! WinDbg Time-Travel Debugging (TTD) trace loader.
//!
//! Parses TTD trace files (.run) to extract execution traces, memory
//! snapshots, and thread state for replay-assisted decompilation.

/// TTD trace file magic (Microsoft TTD format).
pub const TTD_MAGIC: &[u8; 4] = b"TTDx";

/// A TTD trace file header.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TtdTraceHeader {
    /// Format version.
    pub version: u32,
    /// Number of recorded threads.
    pub thread_count: u32,
    /// Total number of recorded events.
    pub event_count: u64,
    /// Timestamp range.
    pub start_position: u64,
    pub end_position: u64,
}

/// A TTD execution position (timestamp).
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub struct TtdPosition {
    pub sequence: u64,
    pub step: u32,
}

/// A TTD memory read/write event.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TtdMemoryEvent {
    pub position: TtdPosition,
    pub address: u64,
    pub size: u32,
    pub is_write: bool,
    pub value: Vec<u8>,
}

/// Detect TTD trace file format.
pub fn detect_ttd(data: &[u8]) -> bool {
    data.len() >= 4 && &data[0..4] == TTD_MAGIC
}

/// Parse TTD header (simplified).
pub fn parse_ttd_header(data: &[u8]) -> Option<TtdTraceHeader> {
    if data.len() < 32 || !detect_ttd(data) {
        return None;
    }
    let version = u32::from_le_bytes(data[4..8].try_into().ok()?);
    let thread_count = u32::from_le_bytes(data[8..12].try_into().ok()?);
    let event_count = u64::from_le_bytes(data[12..20].try_into().ok()?);
    let start_position = u64::from_le_bytes(data[20..28].try_into().ok()?);
    let end_position = u64::from_le_bytes(data[28..36].try_into().ok().unwrap_or([0; 8]));

    Some(TtdTraceHeader {
        version,
        thread_count,
        event_count,
        start_position,
        end_position,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_detect_ttd() {
        let mut data = vec![0u8; 64];
        data[0..4].copy_from_slice(TTD_MAGIC);
        assert!(detect_ttd(&data));
        assert!(!detect_ttd(&[0; 64]));
    }

    #[test]
    fn test_parse_header() {
        let mut data = vec![0u8; 64];
        data[0..4].copy_from_slice(TTD_MAGIC);
        data[4..8].copy_from_slice(&1u32.to_le_bytes()); // version
        data[8..12].copy_from_slice(&4u32.to_le_bytes()); // threads
        data[12..20].copy_from_slice(&1000u64.to_le_bytes()); // events

        let hdr = parse_ttd_header(&data).unwrap();
        assert_eq!(hdr.version, 1);
        assert_eq!(hdr.thread_count, 4);
        assert_eq!(hdr.event_count, 1000);
    }
}
