//! High-level IR (HIR) for structured control flow.
//!
//! [`HirNode`] represents a single structured control-flow construct recovered
//! from the SSA-form CFG. The structurer walks the dominator tree and emits
//! these nodes in a recursive descent, falling back to [`Goto`]/[`Label`] pairs
//! for irreducible regions.

use std::collections::BTreeSet;
use std::fmt;

use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
use unlace_ir::{IrInsn, Varnode};

/// Opaque label identifier for goto/label fallback.
#[derive(Copy, Clone, Debug, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct LabelId(pub u32);

impl fmt::Display for LabelId {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "label_{}", self.0)
    }
}

/// A single case in a switch statement.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum SwitchCase {
    /// Matches a single constant value.
    Value(u64),
    /// Matches a range `[lo, hi]` (inclusive).
    Range(u64, u64),
}

impl fmt::Display for SwitchCase {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Value(v) => write!(f, "case {v}"),
            Self::Range(lo, hi) => write!(f, "case {lo}..={hi}"),
        }
    }
}

/// A structured control-flow node in the HIR.
///
/// The structurer emits a tree of these nodes from the SSA CFG. Irreducible
/// control flow that cannot be expressed as `If`/`While`/`DoWhile`/`Switch`
/// is captured via [`Goto`]/[`Label`] pairs.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum HirNode {
    /// A sequential block of HIR nodes.
    Block(Vec<HirNode>),

    /// A single IR statement (non-control-flow instruction).
    Statement(IrInsn),

    /// An if/else construct.
    If {
        cond: SsaVarnode,
        then_body: Vec<HirNode>,
        else_body: Option<Vec<HirNode>>,
    },

    /// A while loop (condition tested before the body).
    While {
        cond: SsaVarnode,
        body: Vec<HirNode>,
    },

    /// A do-while loop (condition tested after the body).
    DoWhile {
        body: Vec<HirNode>,
        cond: SsaVarnode,
    },

    /// A switch/case construct.
    Switch {
        cond: SsaVarnode,
        cases: Vec<(SwitchCase, Vec<HirNode>)>,
        default: Option<Vec<HirNode>>,
    },

    /// Return from the function.
    Return(Option<SsaVarnode>),

    /// Unconditional jump to a label (irreducible fallback).
    Goto(LabelId),

    /// A label target for goto (irreducible fallback).
    Label(LabelId),

    /// A ternary conditional expression: `output = cond ? then_val : else_val`.
    ///
    /// Recovered from `If { then_body: [Statement(copy → V)], else_body: [Statement(copy → V)] }`
    /// patterns where both branches are single COPY assignments to the same output varnode.
    Ternary {
        cond: SsaVarnode,
        then_insn: IrInsn,
        else_insn: IrInsn,
        /// The output varnode that both branches write to.
        output: Varnode,
    },
}

/// A structured function in the HIR.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct HirFunction {
    pub name: String,
    pub params: Vec<(String, PrimitiveType)>,
    pub return_type: PrimitiveType,
    pub body: Vec<HirNode>,
    /// Machine address of the function entry point.
    pub addr: u64,
    pub foldable_exprs: BTreeSet<SsaVarnode>,
}
