//! Print an [`Expr`] in the printer's canonical spacing.

use std::fmt;

use super::parse::{Expr, IncDec};

impl fmt::Display for Expr {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Expr::Atom(s) => f.write_str(s),
            Expr::Paren(e) => write!(f, "({e})"),
            Expr::Cast { ty, expr } => write!(f, "({ty}){expr}"),
            Expr::Prefix { op, expr } => write!(f, "{}{expr}", op.token()),
            Expr::Postfix { op, expr } => {
                let tok = match op {
                    IncDec::Inc => "++",
                    IncDec::Dec => "--",
                };
                write!(f, "{expr}{tok}")
            }
            Expr::Call { callee, args } => {
                write!(f, "{callee}(")?;
                for (i, arg) in args.iter().enumerate() {
                    if i > 0 {
                        f.write_str(", ")?;
                    }
                    write!(f, "{arg}")?;
                }
                f.write_str(")")
            }
            Expr::Index { base, index } => write!(f, "{base}[{index}]"),
            Expr::Member { base, arrow, field } => {
                write!(f, "{base}{}{field}", if *arrow { "->" } else { "." })
            }
            Expr::Binary { op, lhs, rhs } => write!(f, "{lhs} {} {rhs}", op.token()),
            Expr::Ternary { cond, then, els } => write!(f, "{cond} ? {then} : {els}"),
            Expr::Assign { op, lhs, rhs } => match op {
                Some(op) => write!(f, "{lhs} {}= {rhs}", op.token()),
                None => write!(f, "{lhs} = {rhs}"),
            },
            Expr::Comma { lhs, rhs } => write!(f, "{lhs}, {rhs}"),
        }
    }
}
