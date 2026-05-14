//! Mozilla rr trace replay loader.
//!
//! Parses rr recording trace directories to extract execution events,
//! checkpoint positions, and memory maps for deterministic replay-assisted
//! decompilation.

use std::path::Path;

/// An rr trace directory layout.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct RrTrace {
    /// Path to the trace directory.
    pub trace_dir: String,
    /// Version of the rr format.
    pub version: u32,
    /// Number of recorded events.
    pub event_count: u64,
    /// Mapped memory regions at recording start.
    pub memory_maps: Vec<RrMemoryMap>,
}

/// A memory mapping from the rr trace.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RrMemoryMap {
    pub start: u64,
    pub end: u64,
    pub permissions: String,
    pub file_path: Option<String>,
}

/// An rr event type.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum RrEvent {
    /// Syscall entry/exit.
    Syscall { number: u32, is_entry: bool },
    /// Signal delivery.
    Signal { signum: u32 },
    /// Scheduling event (context switch).
    Sched { tid: u32 },
}

/// Parse an rr `maps` file (same format as /proc/PID/maps).
pub fn parse_maps_file(content: &str) -> Vec<RrMemoryMap> {
    let mut maps = Vec::new();
    for line in content.lines() {
        let parts: Vec<&str> = line.split_whitespace().collect();
        if parts.len() < 5 {
            continue;
        }
        let (addr_range, perms) = (parts[0], parts[1]);
        let file_path = if parts.len() >= 6 { Some(parts[5].to_string()) } else { None };

        if let Some((start_str, end_str)) = addr_range.split_once('-') {
            let start = u64::from_str_radix(start_str, 16).unwrap_or(0);
            let end = u64::from_str_radix(end_str, 16).unwrap_or(0);
            maps.push(RrMemoryMap {
                start,
                end,
                permissions: perms.to_string(),
                file_path,
            });
        }
    }
    maps
}

/// Detect whether a directory looks like an rr trace.
pub fn detect_rr_trace(dir_contents: &[&str]) -> bool {
    // rr traces contain specific files.
    let required = ["version", "events", "data"];
    required.iter().all(|f| dir_contents.contains(f))
}

/// Parse the rr `version` file.
pub fn parse_version_file(content: &str) -> Option<u32> {
    content.trim().parse().ok()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_parse_maps() {
        let maps = "00400000-00401000 r-xp 00000000 08:01 1234 /usr/bin/test\n\
                    7ffff7a00000-7ffff7bce000 r-xp 00000000 08:01 5678 /lib/libc.so.6\n";
        let parsed = parse_maps_file(maps);
        assert_eq!(parsed.len(), 2);
        assert_eq!(parsed[0].start, 0x400000);
        assert_eq!(parsed[0].end, 0x401000);
        assert_eq!(parsed[0].permissions, "r-xp");
        assert_eq!(parsed[0].file_path.as_deref(), Some("/usr/bin/test"));
        assert_eq!(parsed[1].start, 0x7ffff7a00000);
    }

    #[test]
    fn test_detect_rr_trace() {
        assert!(detect_rr_trace(&["version", "events", "data", "mmaps"]));
        assert!(!detect_rr_trace(&["version", "events"]));
    }

    #[test]
    fn test_parse_version() {
        assert_eq!(parse_version_file("85\n"), Some(85));
        assert_eq!(parse_version_file("invalid"), None);
    }
}
