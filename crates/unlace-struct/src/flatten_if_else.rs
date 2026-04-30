//! If-else chain flattening post-pass.
//!
//! Walks the HIR and rewrites
//!
//! ```c
//! if (a) X else { if (b) Y else Z }
//! ```
//!
//! as
//!
//! ```c
//! if (a) X else if (b) Y else Z
//! ```
//!
//! by unwrapping `else_body: Some(vec![If { ... }])` whose only child is a
//! single `If`. Repeated to a fixed point so a 5-level nested chain becomes a
//! flat else-if cascade.
//!
//! Run **after** the main structurer and **before** the C printer.

use crate::hir::{HirFunction, HirNode};

/// Flatten every nested if-else chain in `func.body`.
pub fn flatten_if_else_chains(func: &mut HirFunction) {
    func.body = flatten_nodes(std::mem::take(&mut func.body));
}

fn flatten_nodes(nodes: Vec<HirNode>) -> Vec<HirNode> {
    nodes.into_iter().map(flatten_node).collect()
}

fn flatten_node(node: HirNode) -> HirNode {
    match node {
        HirNode::If {
            cond,
            then_body,
            else_body,
        } => {
            let then_body = flatten_nodes(then_body);
            let else_body = else_body.map(|eb| {
                let eb = flatten_nodes(eb);
                unwrap_single_if(eb)
            });
            HirNode::If {
                cond,
                then_body,
                else_body,
            }
        }
        HirNode::Block(children) => HirNode::Block(flatten_nodes(children)),
        HirNode::While { cond, body } => HirNode::While {
            cond,
            body: flatten_nodes(body),
        },
        HirNode::DoWhile { body, cond } => HirNode::DoWhile {
            body: flatten_nodes(body),
            cond,
        },
        HirNode::For {
            init,
            cond,
            update,
            body,
        } => HirNode::For {
            init,
            cond,
            update,
            body: flatten_nodes(body),
        },
        HirNode::Switch {
            cond,
            cases,
            default,
        } => HirNode::Switch {
            cond,
            cases: cases
                .into_iter()
                .map(|(c, body, ft)| (c, flatten_nodes(body), ft))
                .collect(),
            default: default.map(flatten_nodes),
        },
        HirNode::TryCatch {
            try_body,
            catch_body,
        } => HirNode::TryCatch {
            try_body: flatten_nodes(try_body),
            catch_body: flatten_nodes(catch_body),
        },
        other => other,
    }
}

/// If `else_body` is `[Block([If { .. }])]` or `[If { .. }]`, replace the
/// outer wrapper with the inner If as the sole element of the else.
///
/// `Block` unwrapping handles structurer output that wraps single nodes; the
/// C printer then sees `else if (..) { .. }` directly.
fn unwrap_single_if(else_body: Vec<HirNode>) -> Vec<HirNode> {
    if else_body.len() != 1 {
        return else_body;
    }

    let inner = match &else_body[0] {
        HirNode::Block(children) if children.len() == 1 => Some(children[0].clone()),
        HirNode::If { .. } => Some(else_body[0].clone()),
        _ => None,
    };

    match inner {
        Some(if_node @ HirNode::If { .. }) => vec![if_node],
        _ => else_body,
    }
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;
    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
    use unlace_ir::{IrInsn, IrOp, Varnode};

    use super::*;

    fn sv(version: u32) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(256, 1),
            version,
        }
    }

    fn stmt(addr: u64) -> HirNode {
        HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(8, 4),
            smallvec![Varnode::constant(0, 4)],
            addr,
        ))
    }

    fn make_hir(body: Vec<HirNode>) -> HirFunction {
        HirFunction {
            name: "test".into(),
            params: vec![],
            return_type: PrimitiveType::Int(4),
            body,
            addr: 0x1000,
            foldable_exprs: BTreeSet::new(),
            panic_sites: BTreeMap::new(),
            noreturn: false,
        }
    }

    /// Count the maximum nesting depth of `If.else_body` wrappers.
    /// A flat else-if chain has depth equal to the chain length but each
    /// nested If is the *only* node in its else, never wrapped in Block.
    fn else_body_block_wrap_depth(node: &HirNode) -> usize {
        match node {
            HirNode::If { else_body: Some(eb), .. } => {
                let here = match &eb[..] {
                    [HirNode::Block(_)] => 1,
                    _ => 0,
                };
                let inner_depth = eb.iter().map(else_body_block_wrap_depth).max().unwrap_or(0);
                here + inner_depth
            }
            _ => 0,
        }
    }

    #[test]
    fn flattens_two_level_nesting_wrapped_in_block() {
        // if (a) X else { Block { if (b) Y else Z } }
        let inner_if = HirNode::If {
            cond: sv(2),
            then_body: vec![stmt(0x2010)],
            else_body: Some(vec![stmt(0x2020)]),
        };
        let outer = HirNode::If {
            cond: sv(1),
            then_body: vec![stmt(0x2000)],
            else_body: Some(vec![HirNode::Block(vec![inner_if])]),
        };

        let mut hir = make_hir(vec![outer]);
        flatten_if_else_chains(&mut hir);

        let HirNode::If { else_body: Some(eb), .. } = &hir.body[0] else {
            panic!("expected If at top, got {:?}", hir.body[0]);
        };
        assert_eq!(eb.len(), 1, "else body should have a single child");
        assert!(
            matches!(&eb[0], HirNode::If { .. }),
            "else body should be a bare If, got {:?}",
            eb[0]
        );
        assert_eq!(else_body_block_wrap_depth(&hir.body[0]), 0);
    }

    #[test]
    fn flattens_already_bare_if_unchanged() {
        let inner = HirNode::If {
            cond: sv(2),
            then_body: vec![stmt(0x3010)],
            else_body: None,
        };
        let outer = HirNode::If {
            cond: sv(1),
            then_body: vec![stmt(0x3000)],
            else_body: Some(vec![inner]),
        };

        let mut hir = make_hir(vec![outer.clone()]);
        flatten_if_else_chains(&mut hir);

        assert_eq!(hir.body[0], outer, "already-flat chain must be untouched");
    }

    #[test]
    fn flattens_three_level_chain_recursively() {
        // if a X else { Block [ if b Y else { Block [ if c Z else W ] } ] }
        let level3 = HirNode::If {
            cond: sv(3),
            then_body: vec![stmt(0x4030)],
            else_body: Some(vec![stmt(0x4040)]),
        };
        let level2 = HirNode::If {
            cond: sv(2),
            then_body: vec![stmt(0x4020)],
            else_body: Some(vec![HirNode::Block(vec![level3])]),
        };
        let level1 = HirNode::If {
            cond: sv(1),
            then_body: vec![stmt(0x4010)],
            else_body: Some(vec![HirNode::Block(vec![level2])]),
        };

        let mut hir = make_hir(vec![level1]);
        flatten_if_else_chains(&mut hir);

        assert_eq!(else_body_block_wrap_depth(&hir.body[0]), 0);

        let HirNode::If { else_body: Some(eb1), .. } = &hir.body[0] else { panic!() };
        let HirNode::If { else_body: Some(eb2), .. } = &eb1[0] else { panic!() };
        assert!(matches!(&eb2[0], HirNode::If { .. }));
    }

    #[test]
    fn does_not_flatten_else_with_multiple_statements() {
        // if (a) X else { if (b) Y; Z }    ← else has If + extra stmt
        let inner_if = HirNode::If {
            cond: sv(2),
            then_body: vec![stmt(0x5010)],
            else_body: None,
        };
        let outer = HirNode::If {
            cond: sv(1),
            then_body: vec![stmt(0x5000)],
            else_body: Some(vec![inner_if, stmt(0x5020)]),
        };

        let mut hir = make_hir(vec![outer.clone()]);
        flatten_if_else_chains(&mut hir);

        let HirNode::If { else_body: Some(eb), .. } = &hir.body[0] else { panic!() };
        assert_eq!(eb.len(), 2, "two-element else must stay multi-stmt");
    }
}
