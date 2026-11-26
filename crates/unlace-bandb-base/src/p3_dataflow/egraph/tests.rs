use egg::{Applier, Searcher};

use super::*;

fn l(i: usize) -> Box<Expr> {
    Box::new(Expr::Leaf(i))
}

fn k(c: u64) -> Box<Expr> {
    Box::new(Expr::Const(c))
}

fn bx(e: Expr) -> Box<Expr> {
    Box::new(e)
}

#[test]
fn xor_plus_twice_and_is_add() {
    let f = Expr::Add(
        bx(Expr::Xor(l(0), l(1))),
        bx(Expr::Mul(bx(Expr::And(l(0), l(1))), 2)),
    );
    let (s, _) = saturate(&f, 2, 32, f.ops(), bitwise_ops(&f)).expect("saturates");
    assert_eq!(s.ops(), 1);
    assert!(mba::agree(&f, &s, 2, 0xffff_ffff));
}

#[test]
fn constant_key_folds_through_the_identity() {
    let f = Expr::Add(
        bx(Expr::Xor(l(0), k(0x3039))),
        bx(Expr::Mul(bx(Expr::And(l(0), k(0x3039))), 2)),
    );
    let (s, proof) = saturate(&f, 1, 32, f.ops(), bitwise_ops(&f)).expect("saturates");
    assert_eq!(proof, Proof::Proved);
    assert_eq!(s.ops(), 1);
    assert_eq!(mba::prove_equal(&f, &s, 1, 32), Some(true));
}

#[test]
fn composed_identities_cancel() {
    // (x | y) + (x & y) and (x ^ y) + 2 * (x & y) are both x + y.
    let a = Expr::Add(bx(Expr::Or(l(0), l(1))), bx(Expr::And(l(0), l(1))));
    let b = Expr::Add(
        bx(Expr::Xor(l(0), l(1))),
        bx(Expr::Mul(bx(Expr::And(l(0), l(1))), 2)),
    );
    let f = Expr::Sub(bx(a), bx(b));
    let (s, _) = saturate(&f, 2, 64, f.ops(), bitwise_ops(&f)).expect("saturates");
    assert_eq!(s, Expr::Const(0));
}

#[test]
fn nested_substitution_over_three_leaves() {
    // ((x & ~y) + y) is x | y; (t ^ z) + 2 * (t & z) is t + z.
    let t = Expr::Add(bx(Expr::And(l(0), bx(Expr::Not(l(1))))), l(1));
    let f = Expr::Add(
        bx(Expr::Xor(bx(t.clone()), l(2))),
        bx(Expr::Mul(bx(Expr::And(bx(t), l(2))), 2)),
    );
    let (s, proof) = saturate(&f, 3, 32, f.ops(), bitwise_ops(&f)).expect("saturates");
    assert_eq!(proof, Proof::Proved);
    assert_eq!(s.ops(), 2);
    assert!(mba::agree(&f, &s, 3, 0xffff_ffff));
    assert_eq!(mba::prove_equal(&f, &s, 3, 32), Some(true));
}

#[test]
fn regrouping_arithmetic_alone_is_refused() {
    // ((x & y) + (z + 3)) + 4 folds to (x & y) + z + 7, but keeps its one
    // bitwise op: the core rules own that regrouping.
    let f = Expr::Add(
        bx(Expr::Add(
            bx(Expr::And(l(0), l(1))),
            bx(Expr::Add(l(2), k(3))),
        )),
        k(4),
    );
    assert!(saturate(&f, 3, 32, f.ops(), bitwise_ops(&f)).is_none());
}

#[test]
fn a_tree_without_a_smaller_form_is_left() {
    let f = Expr::Add(l(0), bx(Expr::And(l(0), l(1))));
    assert!(saturate(&f, 2, 32, f.ops(), bitwise_ops(&f)).is_none());
}

#[test]
fn exhaustive_check_refutes_a_near_miss() {
    let a = Expr::Add(l(0), l(1));
    let b = Expr::Or(l(0), l(1));
    assert!(exhaustive_witness(&a, &b, 2).is_some());
    assert!(exhaustive_witness(&a, &a, 2).is_none());
    assert!(exhaustive_witness_at(&a, &b, 2, 8).is_some());
}

#[test]
fn exhaustive_witness_is_a_differing_input() {
    let a = Expr::Add(l(0), l(1));
    let b = Expr::Or(l(0), l(1));
    let w = exhaustive_witness(&a, &b, 2).expect("differs");
    assert_ne!(a.eval(&w, 0x3f), b.eval(&w, 0x3f));
}

#[test]
fn every_rule_is_an_identity() {
    // Each rule's sides, read back as expressions over the pattern variables,
    // agree at random inputs, at every small-width input, and at every 8-bit
    // input over the leaves the rule names.
    for r in rules() {
        let (Some(lhs), Some(rhs)) = (r.searcher.get_pattern_ast(), r.applier.get_pattern_ast())
        else {
            panic!("rule {} is not a pattern", r.name);
        };
        let (a, b) = (pattern_expr(lhs), pattern_expr(rhs));
        assert!(mba::agree(&a, &b, 3, u64::MAX), "rule {}", r.name);
        assert!(exhaustive_witness(&a, &b, 3).is_none(), "rule {}", r.name);
        let n = leaves_used(&a).max(leaves_used(&b));
        assert!(
            exhaustive_witness_at(&a, &b, n, 8).is_none(),
            "rule {} at 8 bits",
            r.name
        );
    }
}

/// The number of leaves `e` names: one more than its highest leaf index.
fn leaves_used(e: &Expr) -> usize {
    match e {
        Expr::Leaf(i) => i + 1,
        Expr::Const(_) => 0,
        Expr::Neg(a) | Expr::Not(a) | Expr::Mul(a, _) => leaves_used(a),
        Expr::Add(a, b)
        | Expr::Sub(a, b)
        | Expr::Prod(a, b)
        | Expr::And(a, b)
        | Expr::Or(a, b)
        | Expr::Xor(a, b) => leaves_used(a).max(leaves_used(b)),
    }
}

fn pattern_expr(p: &egg::PatternAst<Bv>) -> Expr {
    fn go(p: &egg::PatternAst<Bv>, id: Id) -> Expr {
        let b = |i: Id| Box::new(go(p, i));
        match &p[id] {
            egg::ENodeOrVar::Var(v) => {
                let name = v.to_string();
                Expr::Leaf(match name.as_str() {
                    "?a" => 0,
                    "?b" => 1,
                    _ => 2,
                })
            }
            egg::ENodeOrVar::ENode(n) => match n {
                Bv::Num(c) => Expr::Const(*c),
                Bv::Leaf(_) => unreachable!("rules name no leaf"),
                Bv::Add([x, y]) => Expr::Add(b(*x), b(*y)),
                Bv::Sub([x, y]) => Expr::Sub(b(*x), b(*y)),
                Bv::Mul([x, y]) => Expr::Prod(b(*x), b(*y)),
                Bv::And([x, y]) => Expr::And(b(*x), b(*y)),
                Bv::Or([x, y]) => Expr::Or(b(*x), b(*y)),
                Bv::Xor([x, y]) => Expr::Xor(b(*x), b(*y)),
                Bv::Neg(x) => Expr::Neg(b(*x)),
                Bv::Not(x) => Expr::Not(b(*x)),
            },
        }
    }
    go(p, p.root())
}
