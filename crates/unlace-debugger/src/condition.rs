//! Conditional-breakpoint expressions (ROADMAP Phase G.3).
//!
//! A debugger conditional breakpoint fires only when a small predicate over the
//! current register state evaluates true (e.g. `rax == 0`, `rbx > 0x10`,
//! `rcx != rdx`). This module parses and evaluates that predicate against a
//! [`RegisterSet`], so a backend's stop loop can resume automatically when the
//! condition is unmet.
//!
//! Grammar (deliberately tiny — extend as backends need it):
//! ```text
//! condition := operand OP operand
//! operand   := register-name | hex-or-dec integer
//! OP        := == | != | < | <= | > | >=
//! ```
//! Comparisons are unsigned 64-bit. An unknown register name makes evaluation
//! fail open (the breakpoint fires) rather than silently skipping a stop.

use crate::regs::RegisterSet;

/// A parsed comparison operator.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum CmpOp {
    Eq,
    Ne,
    Lt,
    Le,
    Gt,
    Ge,
}

/// One side of a comparison: a register name or a literal value.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum Operand {
    Register(String),
    Literal(u64),
}

/// A parsed conditional-breakpoint predicate.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Condition {
    pub lhs: Operand,
    pub op: CmpOp,
    pub rhs: Operand,
}

impl Condition {
    /// Parse a condition string like `"rax == 0"` or `"rbx > 0x10"`.
    /// Returns `None` if the syntax is unrecognised.
    pub fn parse(src: &str) -> Option<Self> {
        let s = src.trim();
        // Try two-char operators first so `<=`/`>=`/`==`/`!=` win over `<`/`>`.
        for (sym, op) in [
            ("==", CmpOp::Eq),
            ("!=", CmpOp::Ne),
            ("<=", CmpOp::Le),
            (">=", CmpOp::Ge),
        ] {
            if let Some((l, r)) = s.split_once(sym) {
                return Some(Self {
                    lhs: parse_operand(l)?,
                    op,
                    rhs: parse_operand(r)?,
                });
            }
        }
        for (sym, op) in [("<", CmpOp::Lt), (">", CmpOp::Gt)] {
            if let Some((l, r)) = s.split_once(sym) {
                return Some(Self {
                    lhs: parse_operand(l)?,
                    op,
                    rhs: parse_operand(r)?,
                });
            }
        }
        None
    }

    /// Evaluate the predicate against `regs`. An operand referencing an unknown
    /// register evaluates `true` (fail-open: never silently swallow a stop).
    pub fn evaluate(&self, regs: &RegisterSet) -> bool {
        let (Some(l), Some(r)) = (resolve(&self.lhs, regs), resolve(&self.rhs, regs)) else {
            return true;
        };
        match self.op {
            CmpOp::Eq => l == r,
            CmpOp::Ne => l != r,
            CmpOp::Lt => l < r,
            CmpOp::Le => l <= r,
            CmpOp::Gt => l > r,
            CmpOp::Ge => l >= r,
        }
    }
}

fn resolve(op: &Operand, regs: &RegisterSet) -> Option<u64> {
    match op {
        Operand::Register(name) => regs.get(name),
        Operand::Literal(v) => Some(*v),
    }
}

fn parse_operand(s: &str) -> Option<Operand> {
    let t = s.trim();
    if t.is_empty() {
        return None;
    }
    if let Some(hex) = t.strip_prefix("0x").or_else(|| t.strip_prefix("0X")) {
        return u64::from_str_radix(hex, 16).ok().map(Operand::Literal);
    }
    if t.chars().all(|c| c.is_ascii_digit()) {
        return t.parse::<u64>().ok().map(Operand::Literal);
    }
    // A register name: lowercase alphanumerics (rax, x0, eip, …).
    if t.chars().all(|c| c.is_ascii_alphanumeric() || c == '_') {
        return Some(Operand::Register(t.to_string()));
    }
    None
}

#[cfg(test)]
mod tests {
    use super::*;

    fn regs(pairs: &[(&str, u64)]) -> RegisterSet {
        let mut r = RegisterSet::new();
        for (n, v) in pairs {
            r.set(n, *v);
        }
        r
    }

    #[test]
    fn parses_and_evaluates_register_vs_literal() {
        let c = Condition::parse("rax == 0").unwrap();
        assert!(c.evaluate(&regs(&[("rax", 0)])));
        assert!(!c.evaluate(&regs(&[("rax", 1)])));
    }

    #[test]
    fn parses_hex_literal_and_gt() {
        let c = Condition::parse("rbx > 0x10").unwrap();
        assert!(c.evaluate(&regs(&[("rbx", 0x20)])));
        assert!(!c.evaluate(&regs(&[("rbx", 0x10)])));
    }

    #[test]
    fn register_vs_register() {
        let c = Condition::parse("rcx != rdx").unwrap();
        assert!(c.evaluate(&regs(&[("rcx", 1), ("rdx", 2)])));
        assert!(!c.evaluate(&regs(&[("rcx", 5), ("rdx", 5)])));
    }

    #[test]
    fn le_ge_operators() {
        assert!(
            Condition::parse("rax <= 10")
                .unwrap()
                .evaluate(&regs(&[("rax", 10)]))
        );
        assert!(
            Condition::parse("rax >= 10")
                .unwrap()
                .evaluate(&regs(&[("rax", 10)]))
        );
    }

    #[test]
    fn unknown_register_fails_open() {
        // Missing register → fire the breakpoint rather than swallow the stop.
        let c = Condition::parse("rsi == 0").unwrap();
        assert!(c.evaluate(&regs(&[("rax", 0)])));
    }

    #[test]
    fn rejects_malformed_condition() {
        assert!(Condition::parse("not a condition").is_none());
        assert!(Condition::parse("rax").is_none());
    }
}
