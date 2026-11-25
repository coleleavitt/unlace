use super::*;

fn x() -> Box<Expr> {
    Box::new(Expr::Leaf(0))
}
fn y() -> Box<Expr> {
    Box::new(Expr::Leaf(1))
}

#[test]
fn xor_plus_twice_and_is_add() {
    let m = u32::MAX as u64;
    let f = Expr::Add(
        Box::new(Expr::Xor(x(), y())),
        Box::new(Expr::Mul(Box::new(Expr::And(x(), y())), 2)),
    );
    assert!(f.is_linear());
    assert_eq!(simplify(&f, 2, m), Expr::Add(x(), y()));
}

#[test]
fn or_minus_and_is_xor() {
    let m = u64::MAX;
    let f = Expr::Sub(Box::new(Expr::Or(x(), y())), Box::new(Expr::And(x(), y())));
    let s = simplify(&f, 2, m);
    assert_eq!(s, Expr::Xor(x(), y()));
    assert!(agree(&f, &s, 2, m));
}

#[test]
fn sub_via_not() {
    // x - y == x + ~y + 1
    let m = u64::MAX;
    let f = Expr::Add(
        Box::new(Expr::Add(x(), Box::new(Expr::Not(y())))),
        Box::new(Expr::Const(1)),
    );
    assert_eq!(simplify(&f, 2, m), Expr::Sub(x(), y()));
}

#[test]
fn pair_function_plus_linear_rest() {
    // (x & ~y) + y + z == (x | y) + z
    let m = u32::MAX as u64;
    let z = Box::new(Expr::Leaf(2));
    let f = Expr::Add(
        Box::new(Expr::Add(
            Box::new(Expr::And(x(), Box::new(Expr::Not(y())))),
            y(),
        )),
        z.clone(),
    );
    assert_eq!(
        simplify(&f, 3, m),
        Expr::Add(Box::new(Expr::Or(x(), y())), z)
    );
}

#[test]
fn three_variable_function() {
    // (x & y) + (x & z) - (x & y & z) == x & (y | z)
    let m = u32::MAX as u64;
    let z = || Box::new(Expr::Leaf(2));
    let and = |a: Box<Expr>, b: Box<Expr>| Box::new(Expr::And(a, b));
    let f = Expr::Sub(
        Box::new(Expr::Add(and(x(), y()), and(x(), z()))),
        and(and(x(), y()), z()),
    );
    let s = simplify(&f, 3, m);
    assert_eq!(s.ops(), 2, "{s:?}");
    assert!(agree(&f, &s, 3, m));
}

#[test]
fn wide_linear_mba_over_seven_leaves_folds() {
    let pair = |a: usize, b: usize| {
        Expr::Add(
            Box::new(Expr::Xor(leaf(a), leaf(b))),
            Box::new(Expr::Mul(and(leaf(a), leaf(b)), 2)),
        )
    };
    let f = Expr::Add(
        Box::new(Expr::Add(Box::new(pair(0, 1)), Box::new(pair(5, 6)))),
        leaf(3),
    );
    let mask = u64::MAX;
    let s = simplify_wide(&f, 7, mask);
    assert!(agree(&f, &s, 7, mask));
    assert!(s.ops() < f.ops());
}

#[test]
fn tables_cover_every_function() {
    assert_eq!(boolean_table(2).len(), 14);
    assert_eq!(boolean_table(3).len(), 254);
}

fn leaf(i: usize) -> Box<Expr> {
    Box::new(Expr::Leaf(i))
}
fn and(a: Box<Expr>, b: Box<Expr>) -> Box<Expr> {
    Box::new(Expr::And(a, b))
}

#[test]
fn four_leaf_group_is_one_boolean_function() {
    // (x & y) + (z & w) - (x & y & z & w) == (x & y) | (z & w)
    let m = u32::MAX as u64;
    let f = Expr::Sub(
        Box::new(Expr::Add(and(leaf(0), leaf(1)), and(leaf(2), leaf(3)))),
        and(and(leaf(0), leaf(1)), and(leaf(2), leaf(3))),
    );
    let s = simplify(&f, 4, m);
    assert_eq!(s.ops(), 3, "{s:?}");
    assert!(agree(&f, &s, 4, m));
}

#[test]
fn six_leaves_in_three_groups() {
    // (a ^ b) + 2(a & b) + (c & ~d) + d + (e | f) - (e & f) == a + b + (c | d) + (e ^ f)
    let m = u64::MAX;
    let not = |e: Box<Expr>| Box::new(Expr::Not(e));
    let f = [
        Box::new(Expr::Mul(and(leaf(0), leaf(1)), 2)),
        and(leaf(2), not(leaf(3))),
        leaf(3),
        Box::new(Expr::Sub(
            Box::new(Expr::Or(leaf(4), leaf(5))),
            and(leaf(4), leaf(5)),
        )),
    ]
    .into_iter()
    .fold(Expr::Xor(leaf(0), leaf(1)), |acc, t| {
        Expr::Add(Box::new(acc), t)
    });
    assert!(f.is_linear());
    let s = simplify(&f, 6, m);
    assert_eq!(s.ops(), 5, "{s:?}");
    assert!(agree(&f, &s, 6, m));
}

#[test]
fn synthesized_functions_match_their_truth_tables() {
    let mut st = 7u64;
    for m in 4..=6 {
        let vars: Vec<usize> = (0..m).collect();
        for _ in 0..40 {
            let width = 1usize << m;
            let tt = splitmix(&mut st)
                & if width == 64 {
                    u64::MAX
                } else {
                    (1u64 << width) - 1
                };
            match synth(tt, &vars) {
                Bool::E(e) => assert_eq!(truth_table(&e, m), tt, "{e:?}"),
                Bool::Zero => assert_eq!(tt, 0),
                Bool::One => assert_eq!(tt.count_ones() as usize, width),
            }
        }
    }
}

#[test]
fn linear_part_search_finds_leaf_plus_xor() {
    // 2(x | y) - (x ^ y) - (x & y) + (x & ~y) == x + (x ^ y)
    let m = u32::MAX as u64;
    let not = |e: Box<Expr>| Box::new(Expr::Not(e));
    let f = Expr::Add(
        Box::new(Expr::Sub(
            Box::new(Expr::Sub(
                Box::new(Expr::Mul(Box::new(Expr::Or(x(), y())), 2)),
                Box::new(Expr::Xor(x(), y())),
            )),
            and(x(), y()),
        )),
        and(x(), not(y())),
    );
    let s = simplify(&f, 2, m);
    assert_eq!(s.ops(), 2, "{s:?}");
    assert!(agree(&f, &s, 2, m));
}

#[test]
fn group_search_agrees_on_random_linear_mbas() {
    let mut st = 11u64;
    for n in 2..=4usize {
        for _ in 0..200 {
            let terms: Vec<(Expr, u64)> = (1..1usize << n)
                .map(|s| (conj(s), splitmix(&mut st) % 7))
                .collect();
            let f = sum(terms, splitmix(&mut st) % 3, u64::MAX);
            let s = simplify(&f, n, u64::MAX);
            assert!(agree(&f, &s, n, u64::MAX), "{f:?} -> {s:?}");
            assert!(s.ops() <= f.ops(), "{f:?} -> {s:?}");
        }
    }
}

#[test]
fn complemented_boolean_term_carries_its_constant() {
    // (x & y) + ~y == x | ~y
    let m = u32::MAX as u64;
    let f = Expr::Add(and(x(), y()), Box::new(Expr::Not(y())));
    let s = simplify(&f, 2, m);
    assert_eq!(s.ops(), 2, "{s:?}");
    assert!(agree(&f, &s, 2, m));
}

#[test]
fn polynomial_mba_normalizes_to_the_product() {
    // (x & y) * (x | y) + (x & ~y) * (~x & y) == x * y
    let m = u64::MAX;
    let not = |e: Box<Expr>| Box::new(Expr::Not(e));
    let f = Expr::Add(
        Box::new(Expr::Prod(and(x(), y()), Box::new(Expr::Or(x(), y())))),
        Box::new(Expr::Prod(and(x(), not(y())), and(not(x()), y()))),
    );
    assert!(!f.is_linear());
    let s = from_poly(&to_poly(&f, 2, m).expect("polynomial"), 2, m);
    assert_eq!(s, Expr::Prod(x(), y()));
    assert!(agree(&f, &s, 2, m));
}

#[test]
fn bitwise_over_arithmetic_is_not_a_polynomial() {
    let f = Expr::Prod(Box::new(Expr::And(Box::new(Expr::Add(x(), y())), x())), y());
    assert!(to_poly(&f, 2, u64::MAX).is_none());
}

fn c(v: u64) -> Box<Expr> {
    Box::new(Expr::Const(v))
}

#[test]
fn proof_accepts_an_identity_and_refutes_a_near_miss() {
    let f = Expr::Add(
        Box::new(Expr::Xor(x(), y())),
        Box::new(Expr::Mul(and(x(), y()), 2)),
    );
    assert_eq!(prove_equal(&f, &Expr::Add(x(), y()), 2, 64), Some(true));
    assert_eq!(prove_equal(&f, &Expr::Xor(x(), y()), 2, 64), Some(false));
    // A multiply by -1 runs as the negation of a multiply by 1.
    assert_eq!(
        prove_equal(&Expr::Mul(x(), u64::MAX), &Expr::Neg(x()), 1, 64),
        Some(true)
    );
    assert_eq!(
        prove_equal(&Expr::Prod(x(), y()), &Expr::Prod(y(), x()), 2, 64),
        None
    );
}

#[test]
fn proof_names_the_input_that_refutes() {
    let f = Expr::Add(
        Box::new(Expr::Xor(x(), y())),
        Box::new(Expr::Mul(and(x(), y()), 2)),
    );
    let g = Expr::Xor(x(), y());
    let FullWidth::Refuted(Some(w)) = prove_equal_witness(&f, &g, 2, 64) else {
        panic!("refuted with an input");
    };
    assert_ne!(f.eval(&w, u64::MAX), g.eval(&w, u64::MAX));
}

#[test]
fn proof_confirms_linear_simplifications() {
    let mut st = 5u64;
    for n in 1..=2usize {
        for _ in 0..30 {
            let terms: Vec<(Expr, u64)> = (1..1usize << n)
                .map(|s| (conj(s), splitmix(&mut st) % 4))
                .collect();
            let f = sum(terms, splitmix(&mut st) % 3, u64::MAX);
            let s = simplify(&f, n, u64::MAX);
            assert_eq!(prove_equal(&f, &s, n, 64), Some(true), "{f:?} -> {s:?}");
        }
    }
}

#[test]
fn shifted_leaf_under_or_hides_an_xor_key() {
    // ((2x | 0x6c36fd7a) - x) + 0xc9e48143 ^ 0xf8c05b04 == x ^ 0xcedb25b9
    // (Apple CoreADI, x86-64 Android build)
    let f = Expr::Xor(
        Box::new(Expr::Add(
            Box::new(Expr::Sub(
                Box::new(Expr::Or(Box::new(Expr::Mul(x(), 2)), c(0x6c36fd7a))),
                x(),
            )),
            c(0xc9e48143),
        )),
        c(0xf8c05b04),
    );
    let s = nonlinear_simplify(&f, 1, 32, f.ops()).expect("proven");
    assert_eq!(s, Expr::Xor(x(), c(0xcedb25b9)));
}

#[test]
fn chained_masked_doubles_hide_an_xor_key() {
    // v = ((2x & 0xff9fb7f8) ^ 0xd5101720) + (x ^ 0x1547f06d);
    // (v - ((2v + 0x604808) & 0x4cc9184e)) + 0x2694b02b == x ^ 0xcceca7b6
    let v = || {
        Box::new(Expr::Add(
            Box::new(Expr::Xor(
                and(Box::new(Expr::Mul(x(), 2)), c(0xff9fb7f8)),
                c(0xd5101720),
            )),
            Box::new(Expr::Xor(x(), c(0x1547f06d))),
        ))
    };
    let f = Expr::Add(
        Box::new(Expr::Sub(
            v(),
            and(
                Box::new(Expr::Add(Box::new(Expr::Mul(v(), 2)), c(0x604808))),
                c(0x4cc9184e),
            ),
        )),
        c(0x2694b02b),
    );
    let s = nonlinear_simplify(&f, 1, 32, f.ops()).expect("proven");
    assert_eq!(s, Expr::Xor(x(), c(0xcceca7b6)));
}

#[test]
fn negated_sum_of_ors_is_an_xor_key() {
    // -((~x | 0x4cee331d) + (x | 0xb311cce2)) - 2 ^ 0x53a5c4e9 == x ^ 0x1f4bf7f4
    let f = Expr::Xor(
        Box::new(Expr::Sub(
            Box::new(Expr::Neg(Box::new(Expr::Add(
                Box::new(Expr::Or(Box::new(Expr::Not(x())), c(0x4cee331d))),
                Box::new(Expr::Or(x(), c(0xb311cce2))),
            )))),
            c(2),
        )),
        c(0x53a5c4e9),
    );
    let s = nonlinear_simplify(&f, 1, 32, f.ops()).expect("proven");
    assert_eq!(s, Expr::Xor(x(), c(0x1f4bf7f4)));
}

#[test]
fn keys_a_compiler_split_are_one_constant_again() {
    // (x ^ 0xc0d76561) + (x & 0x40d76561) * 2 == x + 0xc0d76561 at 32 bits
    let f = Expr::Add(
        Box::new(Expr::Xor(x(), c(0xc0d76561))),
        Box::new(Expr::Mul(and(x(), c(0x40d76561)), 2)),
    );
    let s = nonlinear_simplify(&f, 1, 32, f.ops()).expect("proven");
    assert_eq!(s.ops(), 1, "{s:?}");
    assert!(agree(&f, &s, 1, u32::MAX as u64));
    // (x ^ 0x40d76561) + 0x80000000 == x ^ 0xc0d76561 at 32 bits
    let f = Expr::Add(Box::new(Expr::Xor(x(), c(0x40d76561))), c(0x8000_0000));
    let s = nonlinear_simplify(&f, 1, 32, f.ops()).expect("proven");
    assert_eq!(s, Expr::Xor(x(), c(0xc0d76561)));
}

#[test]
fn nonlinear_tree_without_a_smaller_form_is_left() {
    let f = Expr::Xor(Box::new(Expr::Add(x(), c(5))), c(3));
    assert_eq!(nonlinear_simplify(&f, 1, 64, f.ops()), None);
}

#[test]
fn non_linear_shape_is_refused() {
    let f = Expr::And(Box::new(Expr::Add(x(), y())), x());
    assert!(!f.is_linear());
}
