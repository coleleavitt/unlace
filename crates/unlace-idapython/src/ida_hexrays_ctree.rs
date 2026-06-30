//! `ida_hexrays` ctree access — read-only `citem_t` / `cexpr_t` / `cinsn_t`
//! analogs over unlace's structured HIR.
//!
//! ROADMAP Phase H.2 (Hex-Rays ctree API). IDA's decompiler exposes a
//! per-function *ctree*: a tree of `citem_t` nodes, each either a statement
//! (`cinsn_t`) or an expression (`cexpr_t`). Scripts walk this tree to inspect
//! the recovered C, locate calls/returns, rewrite the pseudocode, etc.
//!
//! Unlace already has an equivalent structured representation: the **HIR**
//! ([`unlace_struct::HirNode`] / [`unlace_struct::HirFunction`]) — a recursive
//! tree of control-flow constructs (`If`/`While`/`Switch`/`Return`/…) plus leaf
//! `Statement` nodes carrying lifted [`IrInsn`]s. This module wraps that
//! existing data in IDA-ctree-shaped, **read-only** value types so compat
//! scripts can navigate it with familiar names.
//!
//! This mirrors the microcode wrapper pattern in
//! [`crate::ida_hexrays_micro`]: it wraps data that already exists, it does not
//! run a new analysis. Everything is built from ordered `Vec`s so output is
//! deterministic.
//!
//! Reference: `research/ida-hexrays-docs/sdk/include/hexrays.hpp`
//! (`citem_t`, `cexpr_t`, `cinsn_t`).

use unlace_struct::hir::{HirFunction, HirNode, SwitchCase};

use crate::coverage;

/// Whether a [`CItem`] is a statement (`cinsn_t`) or an expression
/// (`cexpr_t`).
///
/// IDA's `citem_t` is the common base of both `cinsn_t` (statements) and
/// `cexpr_t` (expressions); the discriminant lives in `citem_t::op` (a `ctype_t`
/// that is `< cot_empty` for statements and `>= cot_empty` for expressions).
/// We surface that split explicitly as a two-variant enum.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum CItemKind {
    /// A `cexpr_t` analog — an expression node (condition, call, value, …).
    Expr,
    /// A `cinsn_t` analog — a statement / control-flow node.
    Statement,
}

/// A `citem_t` / `cexpr_t` / `cinsn_t` analog — one uniform read-only ctree
/// node.
///
/// IDA's ctree nodes are a rich union; for compat purposes the fields scripts
/// reach for first are the kind (statement vs expression), the operation name
/// (`op`, e.g. `"cit_if"` / `"cot_call"`), the address the construct was
/// recovered from (`ea`), and the child nodes. We expose exactly those, as a
/// homogeneous tree so callers can recurse uniformly.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct CItem {
    /// Statement vs expression discriminant (`citem_t::op` class).
    pub kind: CItemKind,
    /// Canonical operation name (e.g. `"cit_if"`, `"cit_return"`,
    /// `"cot_call"`). Mirrors IDA's `ctype_t` mnemonic family with a
    /// `cit_`/`cot_` prefix.
    pub op: String,
    /// Machine address this node was recovered from (`citem_t::ea`), when
    /// known. `None` for synthesized nodes (e.g. the root block) with no
    /// single backing address.
    pub ea: Option<u64>,
    /// Child nodes in source order (statement bodies, expression operands).
    pub children: Vec<CItem>,
}

impl CItem {
    /// Construct a statement (`cinsn_t`) node.
    fn stmt(op: impl Into<String>, ea: Option<u64>, children: Vec<CItem>) -> Self {
        Self {
            kind: CItemKind::Statement,
            op: op.into(),
            ea,
            children,
        }
    }

    /// Construct an expression (`cexpr_t`) node.
    fn expr(op: impl Into<String>, ea: Option<u64>, children: Vec<CItem>) -> Self {
        Self {
            kind: CItemKind::Expr,
            op: op.into(),
            ea,
            children,
        }
    }

    /// Total number of nodes in this subtree, including `self`
    /// (`citem_t` count of a `qty`-style traversal).
    pub fn node_count(&self) -> usize {
        1 + self.children.iter().map(CItem::node_count).sum::<usize>()
    }

    /// Collect every node in this subtree whose [`op`](CItem::op) equals
    /// `op`, in pre-order (self first, then children left-to-right).
    pub fn find_by_op<'a>(&'a self, op: &str) -> Vec<&'a CItem> {
        let mut out = Vec::new();
        self.collect_by_op(op, &mut out);
        out
    }

    fn collect_by_op<'a>(&'a self, op: &str, out: &mut Vec<&'a CItem>) {
        if self.op == op {
            out.push(self);
        }
        for child in &self.children {
            child.collect_by_op(op, out);
        }
    }
}

/// Wrap a slice of [`HirNode`]s as a synthetic `cit_block` statement whose
/// children are the converted nodes, preserving order.
///
/// This is the core entry point: a `cfunc_t`'s body is a top-level block, and
/// every nested body (then/else, loop body, switch case) is likewise a block.
pub fn hir_to_ctree(body: &[HirNode]) -> CItem {
    coverage::mark_implemented("ida_hexrays.ctree");
    block_item(body)
}

/// Wrap a whole [`HirFunction`]'s body as a ctree root (`cfunc_t::body`).
///
/// Convenience over [`hir_to_ctree`] for callers that already hold a
/// `HirFunction`. The root carries the function entry address as its `ea`.
pub fn hir_function_to_ctree(func: &HirFunction) -> CItem {
    let mut root = hir_to_ctree(&func.body);
    root.ea = Some(func.addr);
    root
}

/// Build a `cit_block` statement node from a body slice.
fn block_item(body: &[HirNode]) -> CItem {
    let children = body.iter().map(node_to_item).collect();
    CItem::stmt("cit_block", None, children)
}

/// Convert a single [`HirNode`] into a [`CItem`].
///
/// Control-flow constructs become `cit_*` statements; their conditions become
/// nested `cot_*` expression children, their bodies become nested `cit_block`
/// statements. Leaf `Statement` nodes become a `cit_expr` wrapping the lifted
/// opcode as a `cot_*` expression.
fn node_to_item(node: &HirNode) -> CItem {
    match node {
        HirNode::Block(body) => block_item(body),

        HirNode::Statement(insn) => {
            // A statement-expression: `cit_expr` whose single child is the
            // expression for the lifted opcode.
            let inner = insn_expr(insn.op.name(), insn.addr);
            CItem::stmt("cit_expr", Some(insn.addr), vec![inner])
        }

        HirNode::If {
            cond,
            then_body,
            else_body,
        } => {
            let _ = cond;
            let mut children = vec![cond_expr(), block_item(then_body)];
            if let Some(eb) = else_body {
                children.push(block_item(eb));
            }
            CItem::stmt("cit_if", None, children)
        }

        HirNode::While { cond, body } => {
            let _ = cond;
            CItem::stmt("cit_while", None, vec![cond_expr(), block_item(body)])
        }

        HirNode::DoWhile { body, cond } => {
            let _ = cond;
            CItem::stmt("cit_do", None, vec![block_item(body), cond_expr()])
        }

        HirNode::For {
            init,
            cond,
            update,
            body,
        } => {
            let _ = cond;
            let mut children = Vec::new();
            if let Some(init) = init {
                children.push(insn_expr(init.op.name(), init.addr));
            }
            children.push(cond_expr());
            children.push(insn_expr(update.op.name(), update.addr));
            children.push(block_item(body));
            CItem::stmt("cit_for", None, children)
        }

        HirNode::Switch {
            cond,
            cases,
            default,
            ..
        } => {
            let _ = cond;
            let mut children = vec![cond_expr()];
            for (case, body, _falls_through) in cases {
                let op = match case {
                    SwitchCase::Value(_) => "cot_num",
                    SwitchCase::Range(_, _) => "cot_num",
                };
                children.push(CItem::stmt(
                    "cit_case",
                    None,
                    vec![CItem::expr(op, None, vec![]), block_item(body)],
                ));
            }
            if let Some(def) = default {
                children.push(CItem::stmt("cit_default", None, vec![block_item(def)]));
            }
            CItem::stmt("cit_switch", None, children)
        }

        HirNode::Return(val) => {
            let children = if val.is_some() {
                vec![CItem::expr("cot_var", None, vec![])]
            } else {
                vec![]
            };
            CItem::stmt("cit_return", None, children)
        }

        HirNode::Goto(_) => CItem::stmt("cit_goto", None, vec![]),
        HirNode::Label(_) => CItem::stmt("cit_label", None, vec![]),

        HirNode::Ternary {
            then_insn,
            else_insn,
            ..
        } => CItem::stmt(
            "cit_expr",
            Some(then_insn.addr),
            vec![CItem::expr(
                "cot_tern",
                Some(then_insn.addr),
                vec![
                    cond_expr(),
                    insn_expr(then_insn.op.name(), then_insn.addr),
                    insn_expr(else_insn.op.name(), else_insn.addr),
                ],
            )],
        ),

        HirNode::TailCall { target, .. } => CItem::stmt(
            "cit_expr",
            Some(*target),
            vec![CItem::expr("cot_call", Some(*target), vec![])],
        ),

        HirNode::Break => CItem::stmt("cit_break", None, vec![]),
        HirNode::Continue => CItem::stmt("cit_continue", None, vec![]),

        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            let mut children = vec![block_item(try_body)];
            for (_ty, arm) in catch_arms {
                children.push(CItem::stmt("cit_catch", None, vec![block_item(arm)]));
            }
            CItem::stmt("cit_try", None, children)
        }

        HirNode::TryFinally {
            try_body,
            finally_body,
        } => CItem::stmt(
            "cit_try",
            None,
            vec![
                block_item(try_body),
                CItem::stmt("cit_finally", None, vec![block_item(finally_body)]),
            ],
        ),

        HirNode::Commented { inner, .. } => {
            // Comments are non-structural metadata; pass through the inner node.
            node_to_item(inner)
        }

        HirNode::ObjcBlock { invoke, .. } => CItem::stmt(
            "cit_expr",
            Some(*invoke),
            vec![CItem::expr("cot_obj", Some(*invoke), vec![])],
        ),

        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => {
            let mut children = vec![cond_expr(), block_item(then_body)];
            if !else_body.is_empty() {
                children.push(block_item(else_body));
            }
            CItem::stmt("cit_if", None, children)
        }

        HirNode::GuardedTernary {
            then_insn,
            else_insn,
            ..
        } => CItem::stmt(
            "cit_expr",
            Some(then_insn.addr),
            vec![CItem::expr(
                "cot_tern",
                Some(then_insn.addr),
                vec![
                    cond_expr(),
                    insn_expr(then_insn.op.name(), then_insn.addr),
                    insn_expr(else_insn.op.name(), else_insn.addr),
                ],
            )],
        ),

        HirNode::CselTernary {
            cmp_op,
            true_val: _,
            false_val: _,
            addr,
            ..
        } => CItem::stmt(
            "cit_expr",
            Some(*addr),
            vec![CItem::expr(
                "cot_tern",
                Some(*addr),
                vec![
                    CItem::expr(cmp_op.name(), Some(*addr), vec![]),
                    CItem::expr("cot_var", Some(*addr), vec![]),
                    CItem::expr("cot_var", Some(*addr), vec![]),
                ],
            )],
        ),

        HirNode::IfCmp {
            cmp_op,
            then_body,
            else_body,
            addr,
            ..
        } => {
            let mut children = vec![
                CItem::expr(cmp_op.name(), Some(*addr), vec![]),
                block_item(then_body),
            ];
            if let Some(eb) = else_body {
                children.push(block_item(eb));
            }
            CItem::stmt("cit_if", Some(*addr), children)
        }

        HirNode::Asm { instructions } => {
            let children = instructions
                .iter()
                .map(|_| CItem::expr("cot_asm", None, vec![]))
                .collect();
            CItem::stmt("cit_asm", None, children)
        }
    }
}

/// A `cexpr_t` analog for a condition. Conditions in unlace's HIR are SSA
/// varnode references (the flag/value that decides the branch); we surface them
/// as a `cot_var` expression placeholder. The structure (presence + position)
/// is preserved even though the underlying SSA value is opaque here.
fn cond_expr() -> CItem {
    CItem::expr("cot_var", None, vec![])
}

/// A `cexpr_t` analog for a lifted instruction, named by its opcode.
fn insn_expr(op_name: &str, ea: u64) -> CItem {
    // Render the lifted IR opcode as a lowercased `cot_<op>` expression so the
    // ctree carries the operation identity while staying in the `cot_` family.
    CItem::expr(
        format!("cot_{}", op_name.to_ascii_lowercase()),
        Some(ea),
        vec![],
    )
}

#[cfg(test)]
mod tests {
    use unlace_ir::{IrInsn, IrOp, Varnode};
    use unlace_struct::hir::{HirNode, SwitchCase};

    use super::*;

    // SsaVarnode is `pub struct SsaVarnode { base, version }`; build one
    // directly for conditions.
    fn sv(off: u64) -> unlace_ir::ssa::SsaVarnode {
        unlace_ir::ssa::SsaVarnode {
            base: Varnode::reg(off, 8),
            version: 0,
        }
    }

    fn ret(val: bool) -> HirNode {
        HirNode::Return(if val { Some(sv(0)) } else { None })
    }

    fn assign(addr: u64) -> HirNode {
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::unique(0, 8),
            vec![Varnode::reg(0, 8), Varnode::constant(1, 8)],
            addr,
        ))
    }

    #[test]
    fn empty_body_yields_lone_root_block() {
        let item = hir_to_ctree(&[]);
        assert_eq!(item.kind, CItemKind::Statement);
        assert_eq!(item.op, "cit_block");
        assert_eq!(item.node_count(), 1);
        assert!(item.find_by_op("cit_return").is_empty());
    }

    #[test]
    fn flat_body_node_count_and_find() {
        // { v = a + 1; return v; }
        let body = vec![assign(0x1000), ret(true)];
        let item = hir_to_ctree(&body);

        // root block(1) + cit_expr(1) + its cot_intadd(1)
        //              + cit_return(1) + its cot_var(1) = 5
        assert_eq!(item.node_count(), 5);

        let rets = item.find_by_op("cit_return");
        assert_eq!(rets.len(), 1, "exactly one return statement");
        assert_eq!(rets[0].kind, CItemKind::Statement);
        assert_eq!(rets[0].children.len(), 1, "return value expr child");

        let exprs = item.find_by_op("cit_expr");
        assert_eq!(exprs.len(), 1);
        assert_eq!(exprs[0].ea, Some(0x1000));

        // The lifted opcode surfaced as a cot_ expression.
        assert_eq!(item.find_by_op("cot_int_add").len(), 1);
    }

    #[test]
    fn if_node_builds_cond_then_else() {
        // if (cond) { return 1; } else { return; }
        let body = vec![HirNode::If {
            cond: sv(1),
            then_body: vec![ret(true)],
            else_body: Some(vec![ret(false)]),
        }];
        let item = hir_to_ctree(&body);

        let ifs = item.find_by_op("cit_if");
        assert_eq!(ifs.len(), 1);
        // children: cond expr + then block + else block
        assert_eq!(ifs[0].children.len(), 3);
        assert_eq!(ifs[0].children[0].kind, CItemKind::Expr);
        assert_eq!(ifs[0].children[1].op, "cit_block");
        assert_eq!(ifs[0].children[2].op, "cit_block");

        // two returns total, one in each branch.
        assert_eq!(item.find_by_op("cit_return").len(), 2);
    }

    #[test]
    fn switch_node_emits_cases_and_default() {
        let body = vec![HirNode::Switch {
            cond: sv(2),
            cases: vec![
                (SwitchCase::Value(0), vec![ret(false)], false),
                (SwitchCase::Range(1, 3), vec![ret(false)], false),
            ],
            default: Some(vec![ret(true)]),
            jumptable_addr: None,
            jumptable_cases: None,
        }];
        let item = hir_to_ctree(&body);

        assert_eq!(item.find_by_op("cit_switch").len(), 1);
        assert_eq!(item.find_by_op("cit_case").len(), 2);
        assert_eq!(item.find_by_op("cit_default").len(), 1);
        assert_eq!(item.find_by_op("cit_return").len(), 3);
    }

    #[test]
    fn citem_helpers_on_hand_built_tree() {
        // Build a CItem tree directly (independent of HIR) and exercise the
        // helpers, per the ticket's fallback path.
        let tree = CItem {
            kind: CItemKind::Statement,
            op: "cit_block".into(),
            ea: None,
            children: vec![
                CItem {
                    kind: CItemKind::Statement,
                    op: "cit_return".into(),
                    ea: Some(0x10),
                    children: vec![CItem {
                        kind: CItemKind::Expr,
                        op: "cot_call".into(),
                        ea: Some(0x10),
                        children: vec![],
                    }],
                },
                CItem {
                    kind: CItemKind::Statement,
                    op: "cit_return".into(),
                    ea: Some(0x20),
                    children: vec![],
                },
            ],
        };
        assert_eq!(tree.node_count(), 4);
        let rets = tree.find_by_op("cit_return");
        assert_eq!(rets.len(), 2);
        assert_eq!(rets[0].ea, Some(0x10));
        assert_eq!(tree.find_by_op("cot_call").len(), 1);
        assert!(tree.find_by_op("cit_if").is_empty());
    }
}
