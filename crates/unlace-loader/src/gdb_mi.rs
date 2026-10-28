//! GDB Machine Interface (MI) protocol parser.
//!
//! Parses GDB/MI output records to extract debugging information that
//! can feed back into decompilation (register values, memory contents,
//! breakpoint hits, stack traces).

/// A GDB/MI output record.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum MiRecord {
    /// Result record: `^done`, `^error`, etc.
    Result {
        token: Option<u32>,
        class: String,
        fields: Vec<(String, MiValue)>,
    },
    /// Async exec record: `*stopped`, `*running`.
    Exec {
        class: String,
        fields: Vec<(String, MiValue)>,
    },
    /// Async status record: `+download`.
    Status { class: String },
    /// Async notify record: `=thread-created`.
    Notify {
        class: String,
        fields: Vec<(String, MiValue)>,
    },
    /// Console stream output: `~"text"`.
    Console(String),
    /// Target stream output: `@"text"`.
    Target(String),
    /// Log stream output: `&"text"`.
    Log(String),
}

/// A GDB/MI value.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum MiValue {
    Const(String),
    Tuple(Vec<(String, MiValue)>),
    List(Vec<MiValue>),
}

/// Parse a single GDB/MI output line.
pub fn parse_mi_line(line: &str) -> Option<MiRecord> {
    let line = line.trim();
    if line.is_empty() || line == "(gdb)" {
        return None;
    }

    match line.as_bytes().first()? {
        b'~' => {
            let text = unescape_mi_string(&line[1..])?;
            Some(MiRecord::Console(text))
        }
        b'@' => {
            let text = unescape_mi_string(&line[1..])?;
            Some(MiRecord::Target(text))
        }
        b'&' => {
            let text = unescape_mi_string(&line[1..])?;
            Some(MiRecord::Log(text))
        }
        b'^' => {
            let class = line[1..]
                .split(',')
                .next()
                .unwrap_or(&line[1..])
                .to_string();
            Some(MiRecord::Result {
                token: None,
                class,
                fields: Vec::new(),
            })
        }
        b'*' => {
            let class = line[1..]
                .split(',')
                .next()
                .unwrap_or(&line[1..])
                .to_string();
            Some(MiRecord::Exec {
                class,
                fields: Vec::new(),
            })
        }
        b'=' => {
            let class = line[1..]
                .split(',')
                .next()
                .unwrap_or(&line[1..])
                .to_string();
            Some(MiRecord::Notify {
                class,
                fields: Vec::new(),
            })
        }
        b'+' => {
            let class = line[1..].to_string();
            Some(MiRecord::Status { class })
        }
        _ => {
            // Might have a numeric token prefix.
            let token_end = line.find('^').or_else(|| line.find('*'))?;
            let token: u32 = line[..token_end].parse().ok()?;
            let rest = &line[token_end..];
            if rest.starts_with('^') {
                let class = rest[1..]
                    .split(',')
                    .next()
                    .unwrap_or(&rest[1..])
                    .to_string();
                Some(MiRecord::Result {
                    token: Some(token),
                    class,
                    fields: Vec::new(),
                })
            } else {
                None
            }
        }
    }
}

fn unescape_mi_string(s: &str) -> Option<String> {
    let s = s.trim();
    if !s.starts_with('"') || !s.ends_with('"') {
        return Some(s.to_string());
    }
    let inner = &s[1..s.len() - 1];
    Some(
        inner
            .replace("\\n", "\n")
            .replace("\\t", "\t")
            .replace("\\\"", "\""),
    )
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_parse_result() {
        let record = parse_mi_line("^done").unwrap();
        assert!(matches!(record, MiRecord::Result { class, .. } if class == "done"));
    }

    #[test]
    fn test_parse_console() {
        let record = parse_mi_line("~\"Hello world\\n\"").unwrap();
        if let MiRecord::Console(text) = record {
            assert_eq!(text, "Hello world\n");
        } else {
            panic!("expected Console");
        }
    }

    #[test]
    fn test_parse_exec() {
        let record = parse_mi_line("*stopped,reason=\"breakpoint-hit\"").unwrap();
        assert!(matches!(record, MiRecord::Exec { class, .. } if class == "stopped"));
    }

    #[test]
    fn test_parse_with_token() {
        let record = parse_mi_line("42^done").unwrap();
        assert!(
            matches!(record, MiRecord::Result { token: Some(42), class, .. } if class == "done")
        );
    }
}
