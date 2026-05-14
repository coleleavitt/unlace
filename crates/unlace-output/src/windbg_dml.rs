//! WinDbg DML (Debugger Markup Language) output formatter (t422).
//!
//! Generates DML-annotated disassembly output that WinDbg can render as
//! clickable hyperlinks for addresses, symbols, and cross-references.

use std::fmt::Write;

/// A disassembly line that can be rendered as DML.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DmlLine {
    pub address: u64,
    pub mnemonic: String,
    pub operands: String,
    /// Optional cross-reference target address.
    pub xref_target: Option<u64>,
    /// Optional symbol name for the current address.
    pub symbol: Option<String>,
}

/// Render a sequence of disassembly lines as WinDbg DML.
///
/// Each address becomes a clickable `<exec cmd="u ADDR">` link.
/// Cross-reference targets are rendered as `<link cmd="u TARGET">`.
pub fn render_dml(lines: &[DmlLine]) -> String {
    let mut out = String::with_capacity(lines.len() * 80);
    for line in lines {
        // Address as clickable exec link
        let _ = write!(out, "<exec cmd=\"u 0x{:x}\">{:016x}</exec>  ", line.address, line.address);
        // Symbol annotation
        if let Some(ref sym) = line.symbol {
            let _ = write!(out, "<b>{}</b>: ", escape_dml(sym));
        }
        // Mnemonic
        let _ = write!(out, "{:<8}", line.mnemonic);
        // Operands with optional xref
        if let Some(target) = line.xref_target {
            let _ = write!(out, "<link cmd=\"u 0x{:x}\">{}</link>", target, escape_dml(&line.operands));
        } else {
            out.push_str(&escape_dml(&line.operands));
        }
        out.push('\n');
    }
    out
}

/// Escape characters that are special in DML/XML.
pub fn escape_dml(s: &str) -> String {
    s.replace('&', "&amp;").replace('<', "&lt;").replace('>', "&gt;").replace('"', "&quot;")
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_simple_line() {
        let lines = vec![DmlLine {
            address: 0x401000, mnemonic: "push".into(), operands: "rbp".into(),
            xref_target: None, symbol: Some("main".into()),
        }];
        let dml = render_dml(&lines);
        assert!(dml.contains("<exec cmd=\"u 0x401000\">"));
        assert!(dml.contains("<b>main</b>"));
        assert!(dml.contains("push"));
    }

    #[test]
    fn test_xref_link() {
        let lines = vec![DmlLine {
            address: 0x401005, mnemonic: "call".into(), operands: "sub_402000".into(),
            xref_target: Some(0x402000), symbol: None,
        }];
        let dml = render_dml(&lines);
        assert!(dml.contains("<link cmd=\"u 0x402000\">sub_402000</link>"));
    }

    #[test]
    fn test_escape_special_chars() {
        assert_eq!(escape_dml("<test>&\"x\""), "&lt;test&gt;&amp;&quot;x&quot;");
    }

    #[test]
    fn test_empty_input() {
        assert_eq!(render_dml(&[]), "");
    }
}
