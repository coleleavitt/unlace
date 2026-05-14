//! Hex view with cross-references (t446).
//!
//! Renders binary data in the classic hex-dump format with optional
//! cross-reference annotations, ASCII sidebar, and configurable width.

use std::fmt::Write;

/// Configuration for hex view rendering.
#[derive(Debug, Clone)]
pub struct HexConfig {
    /// Bytes per row (typically 16).
    pub bytes_per_row: usize,
    /// Whether to show ASCII representation.
    pub show_ascii: bool,
    /// Base address for display.
    pub base_address: u64,
    /// Cross-reference annotations: (offset, label).
    pub xrefs: Vec<(usize, String)>,
}

impl Default for HexConfig {
    fn default() -> Self {
        Self { bytes_per_row: 16, show_ascii: true, base_address: 0, xrefs: Vec::new() }
    }
}

/// Render binary data as a hex dump string.
pub fn render_hex_view(data: &[u8], config: &HexConfig) -> String {
    let mut out = String::with_capacity(data.len() * 4);
    let bpr = config.bytes_per_row.max(1);

    for (row_idx, chunk) in data.chunks(bpr).enumerate() {
        let row_offset = row_idx * bpr;
        let addr = config.base_address + row_offset as u64;

        // Address column
        let _ = write!(out, "{:08x}  ", addr);

        // Hex bytes
        for (i, &byte) in chunk.iter().enumerate() {
            let _ = write!(out, "{:02x} ", byte);
            if i == bpr / 2 - 1 { out.push(' '); }
        }
        // Pad short last line
        if chunk.len() < bpr {
            let missing = bpr - chunk.len();
            for i in 0..missing {
                out.push_str("   ");
                if chunk.len() + i == bpr / 2 - 1 { out.push(' '); }
            }
        }

        // ASCII sidebar
        if config.show_ascii {
            out.push(' ');
            out.push('|');
            for &byte in chunk {
                out.push(if byte.is_ascii_graphic() || byte == b' ' { byte as char } else { '.' });
            }
            out.push('|');
        }

        // Xref annotation
        for (xref_offset, label) in &config.xrefs {
            if *xref_offset >= row_offset && *xref_offset < row_offset + bpr {
                let _ = write!(out, "  ; → {}", label);
                break;
            }
        }

        out.push('\n');
    }
    out
}

/// Highlight a range in hex view output with markers.
pub fn highlight_range(data: &[u8], start: usize, end: usize, config: &HexConfig) -> String {
    let adjusted_config = HexConfig {
        xrefs: vec![(start, format!("highlight [{:x}..{:x}]", start, end))],
        ..config.clone()
    };
    render_hex_view(data, &adjusted_config)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn basic_hex_dump() {
        let data = b"Hello, World!123";
        let out = render_hex_view(data, &HexConfig::default());
        assert!(out.contains("00000000"));
        assert!(out.contains("48 65 6c 6c")); // "Hell"
        assert!(out.contains("|Hello, World!123|"));
    }

    #[test]
    fn custom_base_address() {
        let data = &[0u8; 16];
        let config = HexConfig { base_address: 0x401000, ..Default::default() };
        let out = render_hex_view(data, &config);
        assert!(out.contains("00401000"));
    }

    #[test]
    fn xref_annotation() {
        let data = &[0xffu8; 32];
        let config = HexConfig { xrefs: vec![(4, "call_target".into())], ..Default::default() };
        let out = render_hex_view(data, &config);
        assert!(out.contains("→ call_target"));
    }

    #[test]
    fn short_data() {
        let data = &[0x41, 0x42, 0x43];
        let out = render_hex_view(data, &HexConfig::default());
        assert!(out.contains("41 42 43"));
        assert!(out.contains("|ABC|"));
    }

    #[test]
    fn non_ascii_dots() {
        let data = &[0x00, 0x01, 0x7f, 0x80, 0xff];
        let out = render_hex_view(data, &HexConfig::default());
        assert!(out.contains("|.....|"));
    }
}
