//! The layout of one decompiled function in unlace's C listing: the engine's leading warning
//! comments, then the `/* Function: <name> | Address: 0x<addr> | ... */` header that unlace's
//! tooling (`xtask corpus`, `xtask semantic-report`) locates functions by, then the signature on
//! one line, then the body.

use crate::pipeline::FunctionEntry;

/// Lay out the engine text of `function` as a listing entry.
pub fn function_text(function: &FunctionEntry, text: &str) -> String {
    let mut lines = text.lines().peekable();
    let mut out = String::from("\n");
    while let Some(line) = lines.next_if(|line| line.is_empty() || line.starts_with("/*")) {
        if !line.is_empty() {
            out.push_str(line);
            out.push('\n');
        }
    }
    out.push_str(&format!(
        "/* Function: {} | Address: {:#x} | Engine: ghidra */\n",
        function.name, function.addr
    ));
    let mut depth = 0i32;
    let mut signature = Vec::new();
    for line in lines.by_ref() {
        depth += line.matches('(').count() as i32 - line.matches(')').count() as i32;
        signature.push(line.trim());
        if depth <= 0 {
            break;
        }
    }
    out.push_str(&signature.join(" "));
    out.push('\n');
    for line in lines.skip_while(|line| line.is_empty()) {
        out.push_str(line);
        out.push('\n');
    }
    out.truncate(out.trim_end().len() + 1);
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn header_precedes_one_line_signature() {
        let function = FunctionEntry {
            name: "f".to_string(),
            addr: 0x1140,
            size: 0,
        };
        let text = "\n/* WARNING: Removing unreachable block (ram,0x00001150) */\n\n\
                    int f(int a1,\n     int a2)\n\n{\n  return a1 + a2;\n}\n\n";
        assert_eq!(
            function_text(&function, text),
            "\n/* WARNING: Removing unreachable block (ram,0x00001150) */\n\
             /* Function: f | Address: 0x1140 | Engine: ghidra */\n\
             int f(int a1, int a2)\n{\n  return a1 + a2;\n}\n"
        );
    }
}
