//! (unlace `ctree`) The C syntax tree of one printed function (`docs/architecture/ctree.md`).
//!
//! Hex-Rays' ctree is the model: statements (`cinsn_t`) and expressions (`cexpr_t`) in one tree
//! whose maturity (`ctree_maturity_t`) only rises. Here the nodes live in two arenas indexed by
//! [`StmtId`] and [`ExprId`]. An expression leaf names the op or the condition block the printer
//! renders with its existing expression code; only the shapes a statement rewrite creates (`!`,
//! `&&`, `||`, `?:`, an assignment of one, a constant) are nodes of their own. Every statement
//! keeps the structured block it was built from, so markup, comments, labels and the fallback
//! printer key on it.

use std::collections::BTreeMap;
use std::fmt::Write as _;

use unlace_base::types::uint4;

use crate::context::{BlockId, OpId, VarnodeId};

crate::unlace_flag!(
    /// (unlace `boolreturn`) Print an `if` whose two arms only return `1` and `0` as
    /// `return c;` (or `return !c;`), a rewrite of the C syntax tree.
    Boolreturn,
    "boolreturn",
    "boolean results returned directly",
    unset: false,
    shipped: true
);

pub use crate::coreoptions::Noretfirst;

crate::unlace_flag!(
    /// (unlace `nestedand`) Print an `if` whose whole body is another `if` (neither with an
    /// else) as one `if` over `a && b`, a rewrite of the C syntax tree.
    Nestedand,
    "nestedand",
    "nested ifs folded into &&",
    unset: false,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace `retternary`) Print an `if` whose two arms only return a constant or a variable
    /// as one `return c ? A : B;` (or `c || x`-style for a `bool` variable against `0`/`1`),
    /// a rewrite of the C syntax tree.
    Retternary,
    "retternary",
    "returns of cheap values joined into one",
    unset: false,
    shipped: false
);

crate::unlace_flag!(
    /// (unlace `orexit`) Fold adjacent `if`s without else that leave the same way into one
    /// `if` over `a || b`, a rewrite of the C syntax tree.
    Orexit,
    "orexit",
    "same-exit ifs folded into ||",
    unset: false,
    shipped: false
);

/// A statement of a [`CTree`].
#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct StmtId(u32);

/// An expression of a [`CTree`].
#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct ExprId(u32);

impl StmtId {
    /// The arena index.
    pub fn index(self) -> usize {
        self.0 as usize
    }
}

impl ExprId {
    /// The arena index.
    pub fn index(self) -> usize {
        self.0 as usize
    }
}

/// How far the tree has been taken. It only rises: printing never restarts analysis, and each
/// print builds a new tree.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, PartialOrd, Ord)]
pub enum CMaturity {
    /// One statement per structured block (Hex-Rays `CMAT_BUILT`).
    #[default]
    Built,
    /// Each leaf is split into the statements it prints (`CMAT_TRANS1`).
    Statements,
    /// The structural rewrites have run (`CMAT_TRANS2`/`CMAT_TRANS3`).
    Rewritten,
    /// The function's tail and its labels are settled: ready to print (`CMAT_FINAL`).
    Final,
}

impl CMaturity {
    /// The level's name, as `phase status` prints it.
    pub fn name(self) -> &'static str {
        match self {
            CMaturity::Built => "built",
            CMaturity::Statements => "statements",
            CMaturity::Rewritten => "rewritten",
            CMaturity::Final => "final",
        }
    }
}

/// A statement.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Stmt {
    pub kind: StmtKind,
    /// The structured block it was built from.
    pub origin: Option<BlockId>,
}

/// The statement kinds.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum StmtKind {
    /// A `BlockList` or `BlockGraph`: statements in order.
    Seq(Vec<StmtId>),
    /// A basic-block leaf whose statements the printer still selects from its ops.
    Ops { leaf: BlockId },
    /// A leaf split into its ops in order (`CMaturity::Statements`); the printer prints the
    /// ones that make statements, in this order.
    Stmts { leaf: BlockId, ops: Vec<OpId> },
    /// One expression statement.
    Expr(ExprId),
    /// `if`. `pre` holds the statements printed above the test (the condition block's
    /// statements before its branch).
    If {
        pre: Option<StmtId>,
        cond: ExprId,
        then: StmtId,
        els: Option<StmtId>,
    },
    /// `while` (top-tested loop).
    While {
        pre: Option<StmtId>,
        cond: ExprId,
        body: StmtId,
    },
    /// `do { } while` (bottom-tested loop).
    DoWhile { body: StmtId, cond: ExprId },
    /// `for`, from a top-tested loop with an initializer and an iterator op.
    For {
        init: OpId,
        cond: ExprId,
        step: OpId,
        body: StmtId,
    },
    /// An infinite loop.
    Loop { body: StmtId },
    /// A `switch`: the structured switch's components in order, the head first, then the
    /// case blocks.
    Switch { parts: Vec<StmtId> },
    /// An `if` that prints as the structured switch `switch` it was merged into
    /// (`switchmerge`).
    SwitchOf { switch: BlockId },
    /// An unstructured branch: `goto`, `break` or `continue` by the block-goto flags in
    /// `gototype`.
    Goto { target: BlockId, gototype: uint4 },
    /// `return`; `op` is the `RETURN` op the statement's markup points at.
    Return {
        value: Option<ExprId>,
        op: Option<OpId>,
    },
    /// Not modelled yet: printed from its origin block.
    Opaque,
}

/// An expression.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Expr {
    pub kind: ExprKind,
}

/// The expression kinds.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum ExprKind {
    /// The expression rooted at an op, printed by the existing expression printer.
    Op(OpId),
    /// The branch test of a condition block (a `CBRANCH`, or a `BlockCondition` chain).
    Branch(BlockId),
    Not(ExprId),
    And(ExprId, ExprId),
    Or(ExprId, ExprId),
    Ternary(ExprId, ExprId, ExprId),
    /// `dest = value`; `op` is the op the statement's markup points at.
    Assign {
        dest: VarnodeId,
        value: ExprId,
        op: OpId,
    },
    Const {
        value: u64,
        size: u32,
    },
}

/// The C syntax tree of one function.
#[derive(Clone, Debug, Default)]
pub struct CTree {
    stmts: Vec<Stmt>,
    exprs: Vec<Expr>,
    root: Option<StmtId>,
    maturity: CMaturity,
    by_origin: BTreeMap<BlockId, StmtId>,
}

impl CTree {
    /// An empty tree at [`CMaturity::Built`].
    pub fn new() -> CTree {
        CTree::default()
    }

    /// Add a statement. The first statement added for an origin block is the one
    /// [`node_for`](CTree::node_for) answers.
    pub fn add_stmt(&mut self, kind: StmtKind, origin: Option<BlockId>) -> StmtId {
        let id = StmtId(u32::try_from(self.stmts.len()).expect("ctree statement count"));
        self.stmts.push(Stmt { kind, origin });
        if let Some(block) = origin {
            self.by_origin.entry(block).or_insert(id);
        }
        id
    }

    /// Add an expression.
    pub fn add_expr(&mut self, kind: ExprKind) -> ExprId {
        let id = ExprId(u32::try_from(self.exprs.len()).expect("ctree expression count"));
        self.exprs.push(Expr { kind });
        id
    }

    /// Set the function body.
    pub fn set_root(&mut self, root: StmtId) {
        self.root = Some(root);
    }

    /// The function body, once built.
    pub fn root(&self) -> Option<StmtId> {
        self.root
    }

    pub fn stmt(&self, id: StmtId) -> &Stmt {
        &self.stmts[id.index()]
    }

    pub fn stmt_mut(&mut self, id: StmtId) -> &mut Stmt {
        &mut self.stmts[id.index()]
    }

    pub fn expr(&self, id: ExprId) -> &Expr {
        &self.exprs[id.index()]
    }

    pub fn expr_mut(&mut self, id: ExprId) -> &mut Expr {
        &mut self.exprs[id.index()]
    }

    /// Every statement, in the order they were added.
    pub fn stmt_ids(&self) -> Vec<StmtId> {
        (0..self.stmts.len())
            .map(|i| StmtId(u32::try_from(i).expect("ctree statement count")))
            .collect()
    }

    /// The number of statements.
    pub fn stmt_count(&self) -> usize {
        self.stmts.len()
    }

    /// The number of expressions.
    pub fn expr_count(&self) -> usize {
        self.exprs.len()
    }

    /// The statement printed for the structured block `blk`: [`node_for`](CTree::node_for), or,
    /// when a rewrite wrapped that statement in a sequence led by a statement built from the
    /// same block (an `if` with an arm moved after it), that first statement.
    pub fn stmt_for(&self, blk: BlockId) -> Option<StmtId> {
        let id = self.node_for(blk)?;
        if let StmtKind::Seq(list) = &self.stmt(id).kind
            && let Some(&first) = list.first()
            && self.stmt(first).origin == Some(blk)
        {
            return Some(first);
        }
        Some(id)
    }

    /// The statement built from a structured block.
    pub fn node_for(&self, block: BlockId) -> Option<StmtId> {
        self.by_origin.get(&block).copied()
    }

    pub fn maturity(&self) -> CMaturity {
        self.maturity
    }

    /// Record that the tree reached `level`; a lower level changes nothing.
    pub fn advance(&mut self, level: CMaturity) {
        if level > self.maturity {
            self.maturity = level;
        }
    }

    /// The tree as indented text, one statement per line, for the console and tests.
    pub fn dump(&self) -> String {
        let mut out = String::new();
        let _ = writeln!(out, "ctree ({})", self.maturity.name());
        if let Some(root) = self.root {
            let mut stack = vec![(root, 1usize)];
            while let Some((id, depth)) = stack.pop() {
                let stmt = self.stmt(id);
                let _ = writeln!(
                    out,
                    "{:indent$}{}",
                    "",
                    self.stmt_line(stmt),
                    indent = depth * 2
                );
                for child in self.children(id).into_iter().rev() {
                    stack.push((child, depth + 1));
                }
            }
        }
        out
    }

    /// Component `k` of the structured block `id` was built from, as the statement the tree
    /// holds in its place: the `k`-th statement of a sequence or switch, an `if`'s body (1) and
    /// else (2), a top-tested loop's body (1), a bottom-tested or infinite loop's body (0).
    /// `None` for a component the tree does not hold (a condition block, an if-goto's body).
    pub fn part(&self, id: StmtId, k: usize) -> Option<StmtId> {
        match &self.stmt(id).kind {
            StmtKind::Seq(list) | StmtKind::Switch { parts: list } => list.get(k).copied(),
            StmtKind::If { then, els, .. } => match k {
                1 => Some(*then).filter(|then| self.stmt(*then).origin.is_some()),
                2 => *els,
                _ => None,
            },
            StmtKind::While { body, .. } | StmtKind::For { body, .. } => (k == 1).then_some(*body),
            StmtKind::DoWhile { body, .. } | StmtKind::Loop { body } => (k == 0).then_some(*body),
            _ => None,
        }
    }

    /// The statements directly under `id`, in print order.
    pub fn children(&self, id: StmtId) -> Vec<StmtId> {
        match &self.stmt(id).kind {
            StmtKind::Seq(list) | StmtKind::Switch { parts: list } => list.clone(),
            StmtKind::If { pre, then, els, .. } => {
                pre.iter().copied().chain([*then]).chain(*els).collect()
            }
            StmtKind::While { pre, body, .. } => pre.iter().copied().chain([*body]).collect(),
            StmtKind::DoWhile { body, .. }
            | StmtKind::For { body, .. }
            | StmtKind::Loop { body } => vec![*body],
            StmtKind::Ops { .. }
            | StmtKind::Stmts { .. }
            | StmtKind::Expr(_)
            | StmtKind::Goto { .. }
            | StmtKind::Return { .. }
            | StmtKind::SwitchOf { .. }
            | StmtKind::Opaque => Vec::new(),
        }
    }

    fn stmt_line(&self, stmt: &Stmt) -> String {
        let head = match &stmt.kind {
            StmtKind::Seq(list) => format!("seq[{}]", list.len()),
            StmtKind::Ops { .. } => "ops".to_string(),
            StmtKind::Stmts { ops, .. } => format!("stmts[{}]", ops.len()),
            StmtKind::Expr(e) => format!("expr {}", self.expr_text(*e)),
            StmtKind::If { cond, els, .. } => format!(
                "if {}{}",
                self.expr_text(*cond),
                if els.is_some() { " else" } else { "" }
            ),
            StmtKind::While { cond, .. } => format!("while {}", self.expr_text(*cond)),
            StmtKind::DoWhile { cond, .. } => format!("do-while {}", self.expr_text(*cond)),
            StmtKind::For { cond, .. } => format!("for {}", self.expr_text(*cond)),
            StmtKind::Loop { .. } => "loop".to_string(),
            StmtKind::Switch { parts } => format!("switch[{}]", parts.len()),
            StmtKind::Goto { gototype, .. } => format!("goto type={gototype:#x}"),
            StmtKind::Return { value: None, .. } => "return".to_string(),
            StmtKind::Return { value: Some(e), .. } => format!("return {}", self.expr_text(*e)),
            StmtKind::SwitchOf { switch } => format!("switch-of {switch:?}"),
            StmtKind::Opaque => "opaque".to_string(),
        };
        match stmt.origin {
            Some(block) => format!("{head} @{block:?}"),
            None => head,
        }
    }

    fn expr_text(&self, id: ExprId) -> String {
        match &self.expr(id).kind {
            ExprKind::Op(op) => format!("op{op:?}"),
            ExprKind::Branch(block) => format!("branch{block:?}"),
            ExprKind::Not(e) => format!("!{}", self.expr_text(*e)),
            ExprKind::And(a, b) => format!("({} && {})", self.expr_text(*a), self.expr_text(*b)),
            ExprKind::Or(a, b) => format!("({} || {})", self.expr_text(*a), self.expr_text(*b)),
            ExprKind::Ternary(c, a, b) => format!(
                "({} ? {} : {})",
                self.expr_text(*c),
                self.expr_text(*a),
                self.expr_text(*b)
            ),
            ExprKind::Assign { dest, value, .. } => {
                format!("{dest:?} = {}", self.expr_text(*value))
            }
            ExprKind::Const { value, size } => format!("{value:#x}:{size}"),
        }
    }
}

#[cfg(test)]
mod tests;
