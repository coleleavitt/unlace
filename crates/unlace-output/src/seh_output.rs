//! MSVC SEH (Structured Exception Handling) output rendering.
//!
//! Renders recovered SEH regions as `__try`/`__except`/`__finally` blocks
//! in the C output. Consumes the SEH region annotations from the structurer
//! pass and generates proper C syntax for MSVC-style exception handling.

use std::fmt::Write;

/// An SEH region ready for output.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SehOutputRegion {
    /// The filter expression (exception code or EXCEPTION_EXECUTE_HANDLER).
    pub filter_expr: String,
    /// Whether this is a __finally (true) or __except (false) handler.
    pub is_finally: bool,
    /// Indentation depth for nested try blocks.
    pub nesting_depth: usize,
}

/// Render an SEH try/except block as C source.
pub fn render_try_except(try_body: &str, filter: &str, except_body: &str, indent: usize) -> String {
    let pad = " ".repeat(indent * 4);
    let mut out = String::new();
    writeln!(out, "{pad}__try {{").unwrap();
    for line in try_body.lines() {
        writeln!(out, "{pad}    {line}").unwrap();
    }
    writeln!(out, "{pad}}} __except({filter}) {{").unwrap();
    for line in except_body.lines() {
        writeln!(out, "{pad}    {line}").unwrap();
    }
    writeln!(out, "{pad}}}").unwrap();
    out
}

/// Render an SEH try/finally block as C source.
pub fn render_try_finally(try_body: &str, finally_body: &str, indent: usize) -> String {
    let pad = " ".repeat(indent * 4);
    let mut out = String::new();
    writeln!(out, "{pad}__try {{").unwrap();
    for line in try_body.lines() {
        writeln!(out, "{pad}    {line}").unwrap();
    }
    writeln!(out, "{pad}}} __finally {{").unwrap();
    for line in finally_body.lines() {
        writeln!(out, "{pad}    {line}").unwrap();
    }
    writeln!(out, "{pad}}}").unwrap();
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_try_except_output() {
        let output = render_try_except(
            "x = dangerous_call();",
            "EXCEPTION_EXECUTE_HANDLER",
            "handle_error();",
            0,
        );
        assert!(output.contains("__try {"));
        assert!(output.contains("} __except(EXCEPTION_EXECUTE_HANDLER) {"));
        assert!(output.contains("    x = dangerous_call();"));
        assert!(output.contains("    handle_error();"));
    }

    #[test]
    fn test_try_finally_output() {
        let output = render_try_finally("acquire_lock();", "release_lock();", 1);
        assert!(output.contains("    __try {"));
        assert!(output.contains("    } __finally {"));
        assert!(output.contains("        release_lock();"));
    }
}
