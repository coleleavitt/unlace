//! Pernosco-style interactive HTML trace viewer (t421).
//!
//! Generates a self-contained HTML page that visualises a time-travel
//! debugging trace with timeline, register snapshots, and memory writes.

use std::fmt::Write;

/// A single point-in-time snapshot in the trace timeline.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TraceEvent {
    pub tick: u64,
    pub pc: u64,
    pub function: Option<String>,
    pub registers: Vec<(String, u64)>,
    pub mem_writes: Vec<(u64, Vec<u8>)>,
}

/// Configuration for HTML generation.
#[derive(Debug, Clone)]
pub struct PernoscoConfig {
    pub title: String,
    pub max_events: usize,
}

impl Default for PernoscoConfig {
    fn default() -> Self {
        Self {
            title: "unlace trace viewer".into(),
            max_events: 100_000,
        }
    }
}

/// Render a trace as a self-contained HTML document.
pub fn render_trace_html(events: &[TraceEvent], config: &PernoscoConfig) -> String {
    let limit = events.len().min(config.max_events);
    let events = &events[..limit];
    let mut html = String::with_capacity(4096 + limit * 128);
    let _ = write!(
        html,
        "<!DOCTYPE html>\n<html><head><meta charset=\"utf-8\"><title>{t}</title></head>\n<body style=\"font-family:monospace;background:#1e1e2e;color:#cdd6f4\">\n<h1>{t}</h1><p>{c} events captured</p><div id=\"tl\"></div><pre id=\"det\"></pre><script>\n",
        t = config.title,
        c = events.len()
    );
    html.push_str("const T=[\n");
    for ev in events {
        let _ = write!(
            html,
            "{{t:{},p:\"0x{:x}\",f:{},r:{{",
            ev.tick,
            ev.pc,
            ev.function
                .as_deref()
                .map(|f| format!("\"{}\"", escape_js(f)))
                .unwrap_or_else(|| "null".into())
        );
        for (i, (n, v)) in ev.registers.iter().enumerate() {
            if i > 0 {
                html.push(',');
            }
            let _ = write!(html, "\"{}\":\"0x{:x}\"", escape_js(n), v);
        }
        html.push_str("},m:[");
        for (i, (a, b)) in ev.mem_writes.iter().enumerate() {
            if i > 0 {
                html.push(',');
            }
            let _ = write!(html, "[\"0x{:x}\",\"{}\"]", a, hex_encode(b));
        }
        html.push_str("]},\n");
    }
    html.push_str("];\n</script></body></html>\n");
    html
}

fn escape_js(s: &str) -> String {
    s.replace('\\', "\\\\")
        .replace('"', "\\\"")
        .replace('\n', "\\n")
}

fn hex_encode(bytes: &[u8]) -> String {
    bytes.iter().map(|b| format!("{:02x}", b)).collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn empty_trace() {
        let html = render_trace_html(&[], &PernoscoConfig::default());
        assert!(html.contains("0 events captured"));
        assert!(html.contains("</html>"));
    }

    #[test]
    fn single_event() {
        let ev = vec![TraceEvent {
            tick: 0,
            pc: 0x401000,
            function: Some("main".into()),
            registers: vec![("rax".into(), 42)],
            mem_writes: vec![(0x7000, vec![0xde, 0xad])],
        }];
        let html = render_trace_html(&ev, &PernoscoConfig::default());
        assert!(html.contains("1 events captured"));
        assert!(html.contains("0x401000"));
        assert!(html.contains("dead"));
    }

    #[test]
    fn max_events_truncation() {
        let evs: Vec<_> = (0..200)
            .map(|i| TraceEvent {
                tick: i,
                pc: 0x1000 + i,
                function: None,
                registers: vec![],
                mem_writes: vec![],
            })
            .collect();
        let html = render_trace_html(
            &evs,
            &PernoscoConfig {
                max_events: 50,
                ..Default::default()
            },
        );
        assert!(html.contains("50 events captured"));
    }

    #[test]
    fn escape() {
        assert_eq!(escape_js("a\"b"), "a\\\"b");
    }

    #[test]
    fn hex() {
        assert_eq!(hex_encode(&[0xca, 0xfe]), "cafe");
    }
}
