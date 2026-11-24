//! (unlace `mba`) Mixed boolean-arithmetic simplification.
//!
//! Obfuscators (Tigress, OLLVM) hide `x + y` as `(x ^ y) + 2 * (x & y)`. Such an
//! expression is a *linear MBA*: an integer combination of bitwise functions of
//! the same variables. For that class one theorem does all the work: two linear
//! MBAs are equal at every width when they agree on every input whose variables
//! are each 0 or 1 (SiMBA). So the rule needs no SMT solver:
//!
//! 1. Collect the expression tree under an op of the arithmetic/bitwise set.
//!    Interior ops with one reader are inlined; anything else is a leaf (at
//!    most six). The tree must have the linear shape: `+`, `-`, negation and
//!    multiplication by a constant over bitwise subterms (`&`, `|`, `^`, `~` of
//!    leaves only).
//! 2. Evaluate it on the `2^n` points with each leaf 0 or 1 and Möbius-invert the
//!    values into coefficients of the conjunction basis: `f = b0 + Σ b_S·AND(S)`.
//! 3. Split the multi-leaf terms into groups of leaves that share a term. Each
//!    group is one boolean function `g` of its leaves times a constant, when its
//!    values on the 0/1 points take only two values; the leaves in no group stay
//!    a linear sum. `g` of two or three leaves is the smallest expression of its
//!    truth table, found once by growing expressions from the leaves (IDA's
//!    gooMBA ships the same table as data); `g` of four to six leaves is built by
//!    Shannon expansion on each leaf in turn down to that table, keeping the
//!    cheapest. The result replaces the root only when it has fewer ops, and only
//!    after 64 random full-width evaluations agree.
//!
//! **Polynomial MBA.** A product of two non-constant subterms
//! (`(x & y) * (x | y) + (x & ~y) * (~x & y)`, which is `x * y`) is not linear.
//! Each bitwise subterm is still exactly its conjunction-basis sum at full width
//! (bits are independent), so the tree multiplies out into a polynomial whose
//! variables are the conjunctions `AND(S)` (MBA-Blast). Two trees with the same
//! polynomial are equal; the normal form is rebuilt as the linear part (through
//! step 3) plus each higher-degree monomial as a product of conjunctions, under
//! the same op-count and random-evaluation checks. Degree is capped at 4 and
//! the polynomial at 128 monomials.
//!
//! IDA 9.5's gooMBA (goomba.so 0x3eb60) runs the same truth-table step but proves
//! every candidate with z3; the syntactic linearity check is what makes the proof
//! unnecessary here.
//!
//! **Nonlinear MBA.** An arithmetic op read by a bitwise op is a leaf above, so
//! `((2 * x | c1) - x) + c2 ^ c3`, which is `x ^ c`, has no linear reading. When
//! neither collection folds a tree that mixes bitwise and arithmetic ops, it is
//! collected once more with arithmetic under bitwise ops and the ops of several
//! readers inlined and its constants kept as numbers (at most three leaves).
//! A left shift by a constant is a multiply by its power of two throughout. Its candidates are the linear MBA that agrees with it on the 0/1
//! points, the same for the tree xor its value at zero (then xor-ed back), and
//! for one leaf `x | c` and `x & c`. None is equal by construction, so each
//! needs a proof, the job z3 does in gooMBA: every op but a product of two terms
//! is a bit-serial circuit whose next bit depends on its operands' current bits
//! and a small carry (a multiply by a constant also keeps the last bits of its
//! operand). Both sides run side by side from bit 0 up while the set of carry
//! states some input reaches is followed exactly, so finding no reachable state
//! where their bits differ is a proof at the full width ([`prove_equal`]).

use unlace_base::types::{int4, uintb};
use unlace_num::opcodes::OpCode;

use crate::action::{ActionGroupList, Rule};
use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;

/// Most distinct leaves the truth table covers (`2^6` evaluations).
pub(crate) const MAX_LEAVES: usize = 6;
/// Most distinct leaves of a linear MBA under the `mbawide` option. Its
/// conjunction basis takes `2^n` evaluations of the tree, so the cost stays
/// under `2^16 * MAX_NODES`.
pub(crate) const MAX_WIDE_LEAVES: usize = 16;
/// Highest degree and most monomials of a polynomial MBA.
const MAX_DEGREE: usize = 4;
const MAX_MONOMIALS: usize = 128;
/// Largest tree the rule looks at.
const MAX_NODES: usize = 48;
/// Smallest tree of bitwise ops alone that is looked at, and its most leaves.
const MIN_BITWISE_OPS: usize = 3;
const MAX_BITWISE_LEAVES: usize = 3;
/// Most leaves of a nonlinear tree: its proof tries `2^n` inputs at every bit.
pub(crate) const MAX_NONLINEAR_LEAVES: usize = 3;
/// Widest constant multiplier (or negated multiplier) the proof runs bit by bit.
const MAX_MUL_BITS: u32 = 16;
/// Most reachable carry states the proof follows before it gives up.
const MAX_STATES: usize = 1024;

#[derive(Clone, Debug, PartialEq)]
pub(crate) enum Expr {
    Leaf(usize),
    Const(u64),
    Add(Box<Expr>, Box<Expr>),
    Sub(Box<Expr>, Box<Expr>),
    Neg(Box<Expr>),
    Mul(Box<Expr>, u64),
    /// A product of two non-constant terms (polynomial MBA).
    Prod(Box<Expr>, Box<Expr>),
    And(Box<Expr>, Box<Expr>),
    Or(Box<Expr>, Box<Expr>),
    Xor(Box<Expr>, Box<Expr>),
    Not(Box<Expr>),
}

impl Expr {
    pub(crate) fn eval(&self, leaves: &[u64], mask: u64) -> u64 {
        let v = match self {
            Expr::Leaf(i) => leaves[*i],
            Expr::Const(c) => *c,
            Expr::Add(a, b) => a.eval(leaves, mask).wrapping_add(b.eval(leaves, mask)),
            Expr::Sub(a, b) => a.eval(leaves, mask).wrapping_sub(b.eval(leaves, mask)),
            Expr::Neg(a) => a.eval(leaves, mask).wrapping_neg(),
            Expr::Mul(a, c) => a.eval(leaves, mask).wrapping_mul(*c),
            Expr::Prod(a, b) => a.eval(leaves, mask).wrapping_mul(b.eval(leaves, mask)),
            Expr::And(a, b) => a.eval(leaves, mask) & b.eval(leaves, mask),
            Expr::Or(a, b) => a.eval(leaves, mask) | b.eval(leaves, mask),
            Expr::Xor(a, b) => a.eval(leaves, mask) ^ b.eval(leaves, mask),
            Expr::Not(a) => !a.eval(leaves, mask),
        };
        v & mask
    }

    pub(crate) fn ops(&self) -> usize {
        match self {
            Expr::Leaf(_) | Expr::Const(_) => 0,
            // `a + b * -1` is the IR's own spelling of `a - b`: the multiply is
            // free, or the rule and the core rules would trade the two forever.
            Expr::Mul(a, c)
                if [8u32, 16, 32, 64].contains(&c.wrapping_add(1).trailing_zeros())
                    && c.wrapping_add(1).count_ones() <= 1 =>
            {
                a.ops()
            }
            Expr::Neg(a) | Expr::Not(a) | Expr::Mul(a, _) => 1 + a.ops(),
            Expr::Add(a, b)
            | Expr::Sub(a, b)
            | Expr::Prod(a, b)
            | Expr::And(a, b)
            | Expr::Or(a, b)
            | Expr::Xor(a, b) => 1 + a.ops() + b.ops(),
        }
    }

    fn is_bitwise_of_leaves(&self) -> bool {
        match self {
            Expr::Leaf(_) => true,
            Expr::Not(a) => a.is_bitwise_of_leaves(),
            Expr::And(a, b) | Expr::Or(a, b) | Expr::Xor(a, b) => {
                a.is_bitwise_of_leaves() && b.is_bitwise_of_leaves()
            }
            _ => false,
        }
    }

    /// A linear combination of bitwise subterms and constants.
    pub(crate) fn is_linear(&self) -> bool {
        match self {
            Expr::Const(_) => true,
            Expr::Add(a, b) | Expr::Sub(a, b) => a.is_linear() && b.is_linear(),
            Expr::Neg(a) | Expr::Mul(a, _) => a.is_linear(),
            e => e.is_bitwise_of_leaves(),
        }
    }

    /// The truth table of each topmost bitwise term.
    fn bitwise_tables(&self, n: usize, out: &mut Vec<u64>) {
        match self {
            Expr::Add(a, b) | Expr::Sub(a, b) | Expr::Prod(a, b) => {
                a.bitwise_tables(n, out);
                b.bitwise_tables(n, out);
            }
            Expr::Neg(a) | Expr::Mul(a, _) => a.bitwise_tables(n, out),
            Expr::And(..) | Expr::Or(..) | Expr::Xor(..) | Expr::Not(_) => {
                out.push(truth_table(self, n));
            }
            Expr::Leaf(_) | Expr::Const(_) => {}
        }
    }

    pub(crate) fn has_arith(&self) -> bool {
        match self {
            Expr::Add(..) | Expr::Sub(..) | Expr::Neg(_) | Expr::Mul(..) | Expr::Prod(..) => true,
            Expr::And(a, b) | Expr::Or(a, b) | Expr::Xor(a, b) => a.has_arith() || b.has_arith(),
            Expr::Not(a) => a.has_arith(),
            _ => false,
        }
    }
}

/// The conjunction-basis coefficients `b[S]` (index = leaf bitmask) of `f`.
fn coefficients(f: &Expr, n: usize, mask: u64) -> Vec<u64> {
    let points = 1usize << n;
    let mut leaves = vec![0u64; n];
    let mut b: Vec<u64> = (0..points)
        .map(|e| {
            for (i, l) in leaves.iter_mut().enumerate() {
                *l = ((e >> i) & 1) as u64;
            }
            f.eval(&leaves, mask)
        })
        .collect();
    for i in 0..n {
        for s in 0..points {
            if s & (1 << i) != 0 {
                b[s] = b[s].wrapping_sub(b[s ^ (1 << i)]) & mask;
            }
        }
    }
    b
}

/// `AND` of the leaves in `s`.
fn conj(s: usize) -> Expr {
    let mut it = (0..usize::BITS as usize)
        .filter(|i| s & (1 << i) != 0)
        .map(Expr::Leaf);
    let first = it.next().expect("non-empty set");
    it.fold(first, |acc, l| Expr::And(Box::new(acc), Box::new(l)))
}

/// `c * term`, with 1 and -1 spelled without a multiply.
fn scaled(term: Expr, c: u64, mask: u64) -> (Expr, bool) {
    if c == 1 {
        (term, false)
    } else if c == mask {
        (term, true)
    } else if (c.wrapping_neg() & mask) < c && (c.wrapping_neg() & mask) != 0 {
        (Expr::Mul(Box::new(term), c.wrapping_neg() & mask), true)
    } else {
        (Expr::Mul(Box::new(term), c), false)
    }
}

/// `k + Σ c_i·term_i` with subtraction for the negative terms.
fn sum(terms: Vec<(Expr, u64)>, k: u64, mask: u64) -> Expr {
    let mut acc: Option<Expr> = None;
    let mut neg: Vec<Expr> = Vec::new();
    for (t, c) in terms.into_iter().filter(|(_, c)| *c != 0) {
        let (e, is_neg) = scaled(t, c, mask);
        if is_neg {
            neg.push(e);
        } else {
            acc = Some(match acc {
                None => e,
                Some(a) => Expr::Add(Box::new(a), Box::new(e)),
            });
        }
    }
    let mut acc = match (acc, neg.is_empty()) {
        (Some(a), _) => a,
        (None, true) => return Expr::Const(k),
        (None, false) => Expr::Neg(Box::new(neg.remove(0))),
    };
    for e in neg {
        acc = Expr::Sub(Box::new(acc), Box::new(e));
    }
    if k == 0 {
        acc
    } else if (k.wrapping_neg() & mask) < k {
        Expr::Sub(
            Box::new(acc),
            Box::new(Expr::Const(k.wrapping_neg() & mask)),
        )
    } else {
        Expr::Add(Box::new(acc), Box::new(Expr::Const(k)))
    }
}

/// A smallest expression (fewest ops) for every non-constant boolean function
/// of `n` variables (`n` is 2 or 3), found once by growing expressions from the
/// leaves with `&`, `|`, `^` and `~` until no truth table gets cheaper.
fn boolean_table(n: usize) -> &'static [Expr] {
    static TABLES: std::sync::OnceLock<[Vec<Expr>; 2]> = std::sync::OnceLock::new();
    let tables = TABLES.get_or_init(|| [minimal_exprs(2), minimal_exprs(3)]);
    &tables[n - 2]
}

fn minimal_exprs(n: usize) -> Vec<Expr> {
    let full = (1u32 << (1usize << n)) - 1;
    let mut best: std::collections::BTreeMap<u32, (usize, Expr)> = (0..n)
        .map(|i| (COLUMNS[i] as u32 & full, (0, Expr::Leaf(i))))
        .collect();
    loop {
        let known: Vec<(u32, usize, Expr)> = best
            .iter()
            .map(|(t, (ops, e))| (*t, *ops, e.clone()))
            .collect();
        let mut changed = false;
        let mut offer = |t: u32, ops: usize, e: &dyn Fn() -> Expr| {
            if t != 0 && t != full && best.get(&t).is_none_or(|b| ops < b.0) {
                best.insert(t, (ops, e()));
                changed = true;
            }
        };
        for (ta, oa, a) in &known {
            offer(!ta & full, oa + 1, &|| Expr::Not(Box::new(a.clone())));
            for (tb, ob, b) in known.iter().filter(|(_, ob, _)| oa + ob + 1 <= 9) {
                let pair = || (Box::new(a.clone()), Box::new(b.clone()));
                offer(ta & tb, oa + ob + 1, &|| {
                    let (x, y) = pair();
                    Expr::And(x, y)
                });
                offer(ta | tb, oa + ob + 1, &|| {
                    let (x, y) = pair();
                    Expr::Or(x, y)
                });
                offer(ta ^ tb, oa + ob + 1, &|| {
                    let (x, y) = pair();
                    Expr::Xor(x, y)
                });
            }
        }
        if !changed {
            break;
        }
    }
    let mut out: Vec<Expr> = best.into_values().map(|(_, e)| e).collect();
    out.sort_by_key(Expr::ops); // stable: ties keep truth-table order
    out
}

/// Rename leaf `i` of a small expression to `p[i]`.
fn remap(e: &Expr, p: &[usize]) -> Expr {
    let r = |e: &Expr| Box::new(remap(e, p));
    match e {
        Expr::Leaf(i) => Expr::Leaf(p[*i]),
        Expr::Const(c) => Expr::Const(*c),
        Expr::Add(a, b) => Expr::Add(r(a), r(b)),
        Expr::Sub(a, b) => Expr::Sub(r(a), r(b)),
        Expr::And(a, b) => Expr::And(r(a), r(b)),
        Expr::Or(a, b) => Expr::Or(r(a), r(b)),
        Expr::Xor(a, b) => Expr::Xor(r(a), r(b)),
        Expr::Neg(a) => Expr::Neg(r(a)),
        Expr::Not(a) => Expr::Not(r(a)),
        Expr::Mul(a, c) => Expr::Mul(r(a), *c),
        Expr::Prod(a, b) => Expr::Prod(r(a), r(b)),
    }
}

/// Bit `p` of column `i` is the value of leaf `i` at point `p`.
const COLUMNS: [u64; MAX_LEAVES] = [
    0xaaaa_aaaa_aaaa_aaaa,
    0xcccc_cccc_cccc_cccc,
    0xf0f0_f0f0_f0f0_f0f0,
    0xff00_ff00_ff00_ff00,
    0xffff_0000_ffff_0000,
    0xffff_ffff_0000_0000,
];

/// The truth table (bit `p` is the value at point `p`) of `e` over `n` leaves.
/// A tree of bitwise ops over leaves is evaluated at every point at once.
fn truth_table(e: &Expr, n: usize) -> u64 {
    if n <= MAX_LEAVES && e.is_bitwise_of_leaves() {
        let points = 1u32 << n;
        return e.eval(&COLUMNS, u64::MAX)
            & if points >= 64 {
                u64::MAX
            } else {
                (1u64 << points) - 1
            };
    }
    (0..1usize << n).fold(0, |acc, p| {
        let leaves: Vec<u64> = (0..n).map(|i| ((p >> i) & 1) as u64).collect();
        acc | ((e.eval(&leaves, 1) & 1) << p)
    })
}

/// The smallest expression of the non-constant boolean function `tt` of one
/// to three leaves.
fn table_expr(n: usize, tt: u64) -> Option<Expr> {
    type Index = std::collections::BTreeMap<u64, Expr>;
    static INDEX: std::sync::OnceLock<[Index; 2]> = std::sync::OnceLock::new();
    let index = INDEX.get_or_init(|| {
        [2, 3].map(|n| {
            boolean_table(n)
                .iter()
                .map(|e| (truth_table(e, n), e.clone()))
                .collect()
        })
    });
    match n {
        1 => match tt {
            0b10 => Some(Expr::Leaf(0)),
            0b01 => Some(Expr::Not(Box::new(Expr::Leaf(0)))),
            _ => None,
        },
        2 | 3 => index[n - 2].get(&tt).cloned(),
        _ => None,
    }
}

/// A boolean function: constant or an expression.
#[derive(Clone)]
enum Bool {
    Zero,
    One,
    E(Expr),
}

/// The two cofactors of the truth table `tt` of `m` leaves on leaf `i`.
fn cofactors(tt: u64, m: usize, i: usize) -> (u64, u64) {
    let (mut t0, mut t1) = (0u64, 0u64);
    for p in 0..1usize << m {
        let bit = (tt >> p) & 1;
        let q = (p & ((1 << i) - 1)) | ((p >> (i + 1)) << i);
        if (p >> i) & 1 == 0 {
            t0 |= bit << q;
        } else {
            t1 |= bit << q;
        }
    }
    (t0, t1)
}

/// A small expression for the boolean function `tt` of the leaves `vars`:
/// the table entry for up to three leaves, else the cheapest of a disjoint
/// bi-decomposition `gA op gB` (`op` is `|`, `&` or `^`, over a split of the
/// leaves into two sets) and a Shannon expansion `x ? f1 : f0` on each leaf.
fn synth(tt: u64, vars: &[usize]) -> Bool {
    synth_memo(tt, vars, &mut std::collections::BTreeMap::new())
}

type Memo = std::collections::BTreeMap<(u64, Vec<usize>), Bool>;

fn synth_memo(tt: u64, vars: &[usize], memo: &mut Memo) -> Bool {
    let m = vars.len();
    let full = if m >= 6 {
        u64::MAX
    } else {
        (1u64 << (1 << m)) - 1
    };
    let tt = tt & full;
    if tt == 0 {
        return Bool::Zero;
    }
    if tt == full {
        return Bool::One;
    }
    if m <= 3 {
        return table_expr(m, tt).map_or(Bool::Zero, |e| Bool::E(remap(&e, vars)));
    }
    if let Some(b) = memo.get(&(tt, vars.to_vec())) {
        return b.clone();
    }
    let mut best: Option<Expr> = None;
    let mut offer = |cand: Expr| {
        if best.as_ref().is_none_or(|b| cand.ops() < b.ops()) {
            best = Some(cand);
        }
    };
    for cand in bi_decompositions(tt, vars, memo) {
        offer(cand);
    }
    for i in 0..m {
        let (t0, t1) = cofactors(tt, m, i);
        let rest: Vec<usize> = vars
            .iter()
            .enumerate()
            .filter(|&(j, _)| j != i)
            .map(|(_, &v)| v)
            .collect();
        let x = Expr::Leaf(vars[i]);
        let (f0, f1) = (synth_memo(t0, &rest, memo), synth_memo(t1, &rest, memo));
        for cand in shannon(x, f0, f1, || synth_memo(t0 ^ t1, &rest, memo)) {
            offer(cand);
        }
    }
    let out = best.map_or(Bool::Zero, Bool::E);
    memo.insert((tt, vars.to_vec()), out.clone());
    out
}

/// The bits of `p` selected by `sel`, packed low.
fn pext(p: usize, sel: usize) -> usize {
    (0..usize::BITS as usize)
        .filter(|&i| sel & (1 << i) != 0)
        .enumerate()
        .fold(0, |r, (k, i)| r | (((p >> i) & 1) << k))
}

/// `tt` as `gA | gB`, `gA & gB` or `gA ^ gB` over each split of `vars` into two
/// sets: OR exists exactly when `tt` equals the OR of its universal projections,
/// AND when it equals the AND of its existential ones, XOR when the cofactors
/// on one side differ by a constant.
fn bi_decompositions(tt: u64, vars: &[usize], memo: &mut Memo) -> Vec<Expr> {
    let m = vars.len();
    let all = (1usize << m) - 1;
    let f = |p: usize| (tt >> p) & 1;
    let mut out = Vec::new();
    for amask in (1..all).filter(|a| a & 1 == 1) {
        let bmask = all ^ amask;
        let (ma, mb) = (amask.count_ones() as usize, bmask.count_ones() as usize);
        let (mut a_all, mut b_all) = ((1u128 << (1 << ma)) - 1, (1u128 << (1 << mb)) - 1);
        let (mut a_any, mut b_any) = (0u128, 0u128);
        let (mut a_x, mut b_x) = (0u128, 0u128);
        for p in 0..=all {
            let (a, b) = (pext(p, amask), pext(p, bmask));
            if f(p) == 0 {
                a_all &= !(1 << a);
                b_all &= !(1 << b);
            } else {
                a_any |= 1 << a;
                b_any |= 1 << b;
            }
            if p & bmask == 0 {
                a_x |= u128::from(f(p)) << a;
            }
            if p & amask == 0 {
                b_x |= u128::from(f(p) ^ f(0)) << b;
            }
        }
        let bit = |t: u128, i: usize| ((t >> i) & 1) as u64;
        let holds = |op: fn(u64, u64) -> u64, ta: u128, tb: u128| {
            (0..=all).all(|p| f(p) == op(bit(ta, pext(p, amask)), bit(tb, pext(p, bmask))))
        };
        let va: Vec<usize> = (0..m)
            .filter(|&j| amask & (1 << j) != 0)
            .map(|j| vars[j])
            .collect();
        let vb: Vec<usize> = (0..m)
            .filter(|&j| bmask & (1 << j) != 0)
            .map(|j| vars[j])
            .collect();
        let forms: [(
            fn(u64, u64) -> u64,
            u128,
            u128,
            fn(Box<Expr>, Box<Expr>) -> Expr,
        ); 3] = [
            (|x, y| x | y, a_all, b_all, Expr::Or),
            (|x, y| x & y, a_any, b_any, Expr::And),
            (|x, y| x ^ y, a_x, b_x, Expr::Xor),
        ];
        for (op, ta, tb, mk) in forms {
            if !holds(op, ta, tb) {
                continue;
            }
            if let (Bool::E(ea), Bool::E(eb)) = (
                synth_memo(ta as u64, &va, memo),
                synth_memo(tb as u64, &vb, memo),
            ) {
                out.push(mk(Box::new(ea), Box::new(eb)));
            }
        }
    }
    out
}

/// The forms of `x ? f1 : f0`.
fn shannon(x: Expr, f0: Bool, f1: Bool, diff: impl FnOnce() -> Bool) -> Vec<Expr> {
    let b = Box::new;
    let not_x = || Expr::Not(b(x.clone()));
    match (f0, f1) {
        (Bool::Zero, Bool::One) => vec![x.clone()],
        (Bool::One, Bool::Zero) => vec![not_x()],
        (Bool::Zero, Bool::E(e1)) => vec![Expr::And(b(x.clone()), b(e1))],
        (Bool::E(e0), Bool::Zero) => vec![Expr::And(b(e0), b(not_x()))],
        (Bool::One, Bool::E(e1)) => vec![Expr::Or(b(e1), b(not_x()))],
        (Bool::E(e0), Bool::One) => vec![Expr::Or(b(x.clone()), b(e0))],
        (Bool::E(e0), Bool::E(e1)) => {
            let mut out = vec![Expr::Or(
                b(Expr::And(b(x.clone()), b(e1.clone()))),
                b(Expr::And(b(e0.clone()), b(not_x()))),
            )];
            match diff() {
                Bool::Zero => out.push(e0),
                Bool::One => out.push(Expr::Xor(b(e0), b(x.clone()))),
                Bool::E(h) => {
                    out.push(Expr::Xor(b(e0), b(Expr::And(b(x.clone()), b(h.clone())))));
                    out.push(Expr::Xor(b(e1), b(Expr::And(b(not_x()), b(h)))));
                }
            }
            out
        }
        _ => Vec::new(),
    }
}

/// The two spellings of `w * g` for the boolean function `tt` of `vars`:
/// `w * g`, and `-w * ~g - w` (`~g` is `-1 - g` at full width). Each is the
/// expression, its coefficient and the constant it adds.
fn bool_terms(
    tt: u64,
    vars: &[usize],
    w: u64,
    mask: u64,
) -> impl Iterator<Item = (Expr, u64, u64)> {
    let width = 1usize << vars.len();
    let not_tt = !tt
        & if width >= 64 {
            u64::MAX
        } else {
            (1u64 << width) - 1
        };
    let neg_w = w.wrapping_neg() & mask;
    [
        (synth(tt, vars), w, 0u64),
        (synth(not_tt, vars), neg_w, neg_w),
    ]
    .into_iter()
    .filter_map(|(g, c, kk)| match g {
        Bool::E(e) => Some((e, c, kk)),
        _ => None,
    })
}

/// The truth table of what is left of `vals` after `Σ lin_j*x_j` is taken
/// away, when that takes only the values 0 and `w`.
fn two_valued(vals: &[u64], lin: &[u64], w: u64, mask: u64) -> Option<u64> {
    let mut tt = 0u64;
    for (p, &v) in vals.iter().enumerate() {
        let l = (0..lin.len())
            .filter(|&j| p & (1 << j) != 0)
            .fold(0u64, |a, j| a.wrapping_add(lin[j]));
        match v.wrapping_sub(l) & mask {
            0 => {}
            r if r == w => tt |= 1 << p,
            _ => return None,
        }
    }
    Some(tt)
}

/// Largest group whose linear part is searched (`3^m` choices).
const MAX_SPLIT_LEAVES: usize = 4;
/// Most boolean-term weights tried per group.
const MAX_WEIGHTS: usize = 8;

/// The cheapest terms for one group of leaves, with the constant they add.
/// `vals[p]` is the group's part at the 0/1 point `p`. The group is solved as
/// `w*g + Σ c_j*x_j`: each leaf's `c_j` is 0, its own value `F_j` or `F_j - w`,
/// and the choice stands when what is left takes only the values 0 and `w`,
/// which makes it `w` times one boolean function `g`. The conjunction terms
/// are the fallback. Choices are compared with the tree's constant added, so
/// one that cancels it wins.
fn group_terms(b: &[u64], vars: &[usize], mask: u64) -> (Vec<(Expr, u64)>, u64) {
    let m = vars.len();
    let abs = |e: usize| -> usize {
        (0..m)
            .filter(|&j| e & (1 << j) != 0)
            .map(|j| 1usize << vars[j])
            .sum()
    };
    let vals: Vec<u64> = (0..1usize << m)
        .map(|e| {
            let top = abs(e);
            let (mut acc, mut s) = (0u64, top);
            while s != 0 {
                acc = acc.wrapping_add(b[s]);
                s = (s - 1) & top;
            }
            acc & mask
        })
        .collect();
    let conj_terms: Vec<(Expr, u64)> = (1..1usize << m)
        .map(|e| (conj(abs(e)), b[abs(e)]))
        .collect();
    let mut best_ops = sum(conj_terms.clone(), b[0], mask).ops();
    let mut best = (conj_terms, 0u64);
    let singles: Vec<u64> = (0..m).map(|j| vals[1 << j]).collect();
    let mut weights: Vec<u64> = Vec::new();
    for (p, &v) in vals.iter().enumerate() {
        let lin = (0..m)
            .filter(|&j| p & (1 << j) != 0)
            .fold(0u64, |a, j| a.wrapping_add(singles[j]));
        for w in [v, v.wrapping_sub(lin) & mask] {
            if w != 0 && !weights.contains(&w) && weights.len() < MAX_WEIGHTS {
                weights.push(w);
            }
        }
    }
    let choices = if m <= MAX_SPLIT_LEAVES {
        3usize.pow(m as u32)
    } else {
        1
    };
    for &w in &weights {
        'choice: for choice in 0..choices {
            let mut lin = vec![0u64; m];
            let mut c = choice;
            for j in 0..m {
                lin[j] = match c % 3 {
                    0 => 0,
                    1 if singles[j] != 0 => singles[j],
                    2 if singles[j] != w => singles[j].wrapping_sub(w) & mask,
                    _ => continue 'choice,
                };
                c /= 3;
            }
            let Some(tt) = two_valued(&vals, &lin, w, mask) else {
                continue;
            };
            for (g, gc, kk) in bool_terms(tt, vars, w, mask) {
                let mut terms = vec![(g, gc)];
                terms.extend(
                    (0..m)
                        .filter(|&j| lin[j] != 0)
                        .map(|j| (Expr::Leaf(vars[j]), lin[j])),
                );
                let ops = sum(terms.clone(), b[0].wrapping_add(kk) & mask, mask).ops();
                if ops < best_ops {
                    best_ops = ops;
                    best = (terms, kk);
                }
            }
        }
    }
    best
}

/// The groups of leaves joined by a shared term in `multi` (the multi-leaf
/// conjunctions with a nonzero coefficient): each group is the union of the
/// leaf sets that chain together.
fn share_groups(multi: &[usize]) -> Vec<usize> {
    let mut groups: Vec<usize> = Vec::new();
    for &s in multi {
        let mut g = s;
        groups.retain(|&h| {
            let joined = h & g != 0;
            if joined {
                g |= h;
            }
            !joined
        });
        groups.push(g);
    }
    groups
}

/// The cheapest expression equal to the linear MBA `f` over `n` leaves.
pub(crate) fn simplify(f: &Expr, n: usize, mask: u64) -> Expr {
    let b = coefficients(f, n, mask);
    let multi: Vec<usize> = (1..b.len())
        .filter(|&s| s.count_ones() > 1 && b[s] != 0)
        .collect();
    let full = sum((1..b.len()).map(|s| (conj(s), b[s])).collect(), b[0], mask);
    if multi.is_empty() {
        return full;
    }
    // Groups of leaves joined by a shared multi-leaf term.
    let groups = share_groups(&multi);
    let mut k = b[0];
    let mut terms: Vec<(Expr, u64)> = Vec::new();
    for &grp in &groups {
        let vars: Vec<usize> = (0..n).filter(|&i| grp & (1 << i) != 0).collect();
        let (t, kk) = group_terms(&b, &vars, mask);
        terms.extend(t);
        k = k.wrapping_add(kk) & mask;
    }
    let grouped = groups.iter().fold(0usize, |a, &g| a | g);
    terms.extend(
        (0..n)
            .filter(|&i| grouped & (1 << i) == 0)
            .map(|i| (Expr::Leaf(i), b[1 << i])),
    );
    let cand = sum(terms, k, mask);
    if cand.ops() < full.ops() { cand } else { full }
}

/// [`simplify`] for a linear MBA over more than [`MAX_LEAVES`] leaves (the
/// `mbawide` option). A group of at most [`MAX_LEAVES`] leaves is solved as in
/// [`simplify`]; a larger group keeps its conjunction terms, which are exact,
/// so the caller keeps the result only when it has fewer ops.
pub(crate) fn simplify_wide(f: &Expr, n: usize, mask: u64) -> Expr {
    let b = coefficients(f, n, mask);
    let multi: Vec<usize> = (1..b.len())
        .filter(|&s| s.count_ones() > 1 && b[s] != 0)
        .collect();
    let groups = share_groups(&multi);
    let mut k = b[0];
    let mut terms: Vec<(Expr, u64)> = Vec::new();
    for &grp in &groups {
        if grp.count_ones() as usize > MAX_LEAVES {
            let mut sub = grp;
            while sub != 0 {
                if b[sub] != 0 {
                    terms.push((conj(sub), b[sub]));
                }
                sub = (sub - 1) & grp;
            }
        } else {
            let vars: Vec<usize> = (0..n).filter(|&i| grp & (1 << i) != 0).collect();
            let (t, kk) = group_terms(&b, &vars, mask);
            terms.extend(t);
            k = k.wrapping_add(kk) & mask;
        }
    }
    let grouped = groups.iter().fold(0usize, |a, &g| a | g);
    terms.extend(
        (0..n)
            .filter(|&i| grouped & (1 << i) == 0)
            .map(|i| (Expr::Leaf(i), b[1 << i])),
    );
    sum(terms, k, mask)
}

/// A polynomial over the conjunctions `AND(S)`: each monomial is the sorted
/// list of its factors' leaf sets (the empty list is the constant term).
pub(crate) type Poly = std::collections::BTreeMap<Vec<usize>, u64>;

fn poly_add(p: &mut Poly, m: Vec<usize>, c: u64, mask: u64) {
    let e = p.entry(m.clone()).or_insert(0);
    *e = e.wrapping_add(c) & mask;
    if *e == 0 {
        p.remove(&m);
    }
}

/// The polynomial of `e`, or `None` past the degree or size cap or for a
/// bitwise operator over arithmetic.
pub(crate) fn to_poly(e: &Expr, n: usize, mask: u64) -> Option<Poly> {
    let mut p = Poly::new();
    match e {
        Expr::Const(c) => poly_add(&mut p, Vec::new(), *c, mask),
        Expr::Leaf(i) => poly_add(&mut p, vec![1 << i], 1, mask),
        e if e.is_bitwise_of_leaves() => {
            let b = coefficients(e, n, mask);
            for (s, &c) in b.iter().enumerate() {
                poly_add(&mut p, if s == 0 { Vec::new() } else { vec![s] }, c, mask);
            }
        }
        Expr::Add(a, b) | Expr::Sub(a, b) => {
            p = to_poly(a, n, mask)?;
            let neg = matches!(e, Expr::Sub(..));
            for (m, c) in to_poly(b, n, mask)? {
                poly_add(&mut p, m, if neg { c.wrapping_neg() } else { c }, mask);
            }
        }
        Expr::Neg(a) | Expr::Mul(a, _) => {
            let k = match e {
                Expr::Mul(_, k) => *k,
                _ => mask,
            };
            for (m, c) in to_poly(a, n, mask)? {
                poly_add(&mut p, m, c.wrapping_mul(k), mask);
            }
        }
        Expr::Prod(a, b) => {
            let (pa, pb) = (to_poly(a, n, mask)?, to_poly(b, n, mask)?);
            for (ma, ca) in &pa {
                for (mb, cb) in &pb {
                    if ma.len() + mb.len() > MAX_DEGREE {
                        return None;
                    }
                    let mut m: Vec<usize> = ma.iter().chain(mb).copied().collect();
                    m.sort_unstable();
                    poly_add(&mut p, m, ca.wrapping_mul(*cb), mask);
                }
            }
        }
        _ => return None,
    }
    (p.len() <= MAX_MONOMIALS).then_some(p)
}

/// The normal form of a polynomial MBA: its linear part through [`simplify`]
/// plus each higher-degree monomial as a product of conjunctions.
pub(crate) fn from_poly(p: &Poly, n: usize, mask: u64) -> Expr {
    let k = p.get(&Vec::new()).copied().unwrap_or(0);
    let linear = sum(
        p.iter()
            .filter(|(m, _)| m.len() == 1)
            .map(|(m, &c)| (conj(m[0]), c))
            .collect(),
        k,
        mask,
    );
    let linear = simplify(&linear, n, mask);
    let mut terms: Vec<(Expr, u64)> = p
        .iter()
        .filter(|(m, _)| m.len() > 1)
        .map(|(m, &c)| {
            let prod = m.iter().skip(1).fold(conj(m[0]), |acc, &s| {
                Expr::Prod(Box::new(acc), Box::new(conj(s)))
            });
            (prod, c)
        })
        .collect();
    match linear {
        Expr::Const(k) => sum(terms, k, mask),
        l => {
            terms.push((l, 1));
            sum(terms, 0, mask)
        }
    }
}

/// A small deterministic PRNG for the random cross-check.
fn splitmix(state: &mut u64) -> u64 {
    *state = state.wrapping_add(0x9e37_79b9_7f4a_7c15);
    let mut z = *state;
    z = (z ^ (z >> 30)).wrapping_mul(0xbf58_476d_1ce4_e5b9);
    z = (z ^ (z >> 27)).wrapping_mul(0x94d0_49bb_1331_11eb);
    z ^ (z >> 31)
}

/// Do `a` and `b` agree on 64 pseudo-random full-width inputs?
pub(crate) fn agree(a: &Expr, b: &Expr, n: usize, mask: u64) -> bool {
    let mut st = 0x6b75_6e61u64;
    (0..64).all(|_| {
        let leaves: Vec<u64> = (0..n).map(|_| splitmix(&mut st) & mask).collect();
        a.eval(&leaves, mask) == b.eval(&leaves, mask)
    })
}

pub(crate) fn is_candidate(op: OpCode) -> bool {
    matches!(
        op,
        OpCode::CPUI_INT_ADD
            | OpCode::CPUI_INT_SUB
            | OpCode::CPUI_INT_2COMP
            | OpCode::CPUI_INT_MULT
            | OpCode::CPUI_INT_AND
            | OpCode::CPUI_INT_OR
            | OpCode::CPUI_INT_XOR
            | OpCode::CPUI_INT_NEGATE
    )
}

fn is_arith(op: OpCode) -> bool {
    matches!(
        op,
        OpCode::CPUI_INT_ADD
            | OpCode::CPUI_INT_SUB
            | OpCode::CPUI_INT_2COMP
            | OpCode::CPUI_INT_MULT
            | OpCode::CPUI_INT_LEFT
    )
}

/// The constant amount of the `INT_LEFT` `op`, below the width of `size`:
/// such a shift is a multiply by `2^k` in the tree.
fn shift_amount(data: &Funcdata, op: OpId, size: int4) -> Option<u64> {
    let o = data.obank().get(op)?;
    let v = data.vbank().get(o.get_in(1)?)?;
    let k = v.get_offset();
    (v.is_constant() && k < 8 * size as u64).then_some(k)
}

/// A leaf of the tree: a varnode, or a constant operand of a bitwise op. The
/// identities hold for every value of a leaf, so a constant can stand as one.
#[derive(Clone, Copy, Debug, PartialEq)]
enum LeafRef {
    Vn(VarnodeId),
    Const(u64),
}

/// Builds an [`Expr`] from the IR, numbering leaves as it meets them.
struct Collector<'a> {
    data: &'a Funcdata,
    size: int4,
    leaves: Vec<LeafRef>,
    /// Most distinct leaves the collection takes: [`MAX_LEAVES`], or
    /// [`MAX_WIDE_LEAVES`] under the `mbawide` option.
    max_leaves: usize,
    nodes: usize,
    /// Inline a bitwise op with several readers too.
    inline_shared: bool,
    /// A bitwise op with several readers was met.
    shared: bool,
    /// A bitwise op was read.
    bitwise: bool,
    /// A complement of an arithmetic term was read.
    not_arith: bool,
    /// The expression of each inlined varnode.
    seen: Vec<(VarnodeId, Expr)>,
    /// Inside the tree of an op with several readers.
    in_shared: bool,
    /// Ops of the tree that lie under an op with several readers. They stay
    /// when another reader keeps that op, so a rewrite may not count on them.
    shared_ops: usize,
    /// The nonlinear reading: arithmetic under a bitwise op and every op with
    /// several readers inlined, constants kept as numbers.
    deep: bool,
    /// An arithmetic op read by a bitwise op was inlined.
    mixed: bool,
}

impl Collector<'_> {
    fn leaf(&mut self, l: LeafRef) -> Option<Expr> {
        let i = match self.leaves.iter().position(|&k| k == l) {
            Some(i) => i,
            None => {
                self.leaves.push(l);
                self.leaves.len() - 1
            }
        };
        (i < self.max_leaves).then_some(Expr::Leaf(i))
    }

    /// A constant under a bitwise op: a leaf, or the complement of one.
    fn const_leaf(&mut self, c: u64) -> Option<Expr> {
        let not_c = !c & mask_of(self.size);
        match self.leaves.iter().position(|&k| k == LeafRef::Const(not_c)) {
            Some(i) => Some(Expr::Not(Box::new(Expr::Leaf(i)))),
            None => self.leaf(LeafRef::Const(c)),
        }
    }

    /// The expression of `vn`, read by a bitwise op when `under`: an arithmetic
    /// op is then a leaf, so `(x + y) | z` is a bitwise term of two leaves.
    fn vn(&mut self, vn: VarnodeId, under: bool) -> Option<Expr> {
        self.nodes += 1;
        if self.nodes > MAX_NODES {
            return None;
        }
        let v = self.data.vbank().get(vn)?;
        if v.get_size() != self.size {
            return None;
        }
        if v.is_constant() {
            return if under && !self.deep {
                self.const_leaf(v.get_offset())
            } else {
                Some(Expr::Const(v.get_offset()))
            };
        }
        let def = v.get_def().filter(|_| v.is_written());
        let code = def
            .and_then(|op| self.data.obank().get(op))
            .map(|o| o.code());
        let (deep, data, size) = (self.deep, self.data, self.size);
        let Some((op, code)) = def.zip(code).filter(|&(op, c)| {
            (is_candidate(c)
                || (c == OpCode::CPUI_INT_LEFT && shift_amount(data, op, size).is_some()))
                && (deep || !(under && is_arith(c)))
        }) else {
            return self.leaf(LeafRef::Vn(vn));
        };
        self.mixed |= under && is_arith(code);
        let lone = self.data.lone_descend(vn).is_some();
        if !lone {
            // A shared sum stays a leaf: its own tree is simplified at its op.
            if is_arith(code) && !deep {
                return self.leaf(LeafRef::Vn(vn));
            }
            self.shared = true;
            if !self.inline_shared {
                return self.leaf(LeafRef::Vn(vn));
            }
        }
        let outer = self.in_shared;
        self.in_shared |= !lone;
        let e = match self.seen.iter().find(|(s, _)| *s == vn) {
            Some((_, e)) => {
                self.nodes += e.ops();
                (self.nodes <= MAX_NODES).then(|| e.clone())
            }
            None => self.op(op, code, under).inspect(|e| {
                if self.inline_shared {
                    self.seen.push((vn, e.clone()));
                }
            }),
        };
        self.in_shared = outer;
        let e = e?;
        if !lone && !outer {
            self.shared_ops += e.ops();
        }
        Some(e)
    }

    /// `~a`: a bitwise complement of a bitwise term, `-1 - a` of an arithmetic one.
    fn not(&mut self, a: VarnodeId, under: bool) -> Option<Expr> {
        self.bitwise = true;
        let e = self.vn(a, under)?;
        Some(match e {
            Expr::Const(_)
            | Expr::Add(..)
            | Expr::Sub(..)
            | Expr::Neg(_)
            | Expr::Mul(..)
            | Expr::Prod(..) => {
                self.not_arith = true;
                Expr::Sub(Box::new(Expr::Const(mask_of(self.size))), Box::new(e))
            }
            e => Expr::Not(Box::new(e)),
        })
    }

    /// Read an arithmetic constant that is also a constant leaf, or the
    /// complement of one, as that leaf: `(x & ~c) + c` is `x | c`.
    fn bind_consts(&self, e: Expr) -> Expr {
        let b = |e: Box<Expr>| Box::new(self.bind_consts(*e));
        match e {
            Expr::Const(c) => {
                let find = |c: u64| {
                    self.leaves
                        .iter()
                        .position(|&k| k == LeafRef::Const(c))
                        .map(Expr::Leaf)
                };
                find(c)
                    .or_else(|| find(!c & mask_of(self.size)).map(|l| Expr::Not(Box::new(l))))
                    .unwrap_or(Expr::Const(c))
            }
            Expr::Add(x, y) => Expr::Add(b(x), b(y)),
            Expr::Sub(x, y) => Expr::Sub(b(x), b(y)),
            Expr::Neg(x) => Expr::Neg(b(x)),
            Expr::Mul(x, c) => Expr::Mul(b(x), c),
            Expr::Prod(x, y) => Expr::Prod(b(x), b(y)),
            e => e,
        }
    }

    fn op(&mut self, op: OpId, code: OpCode, under: bool) -> Option<Expr> {
        let o = self.data.obank().get(op)?;
        let i0 = o.get_in(0)?;
        let i1 = o.get_in(1);
        let all_ones = |vn: VarnodeId| {
            self.data
                .vbank()
                .get(vn)
                .is_some_and(|v| v.is_constant() && v.get_offset() == mask_of(self.size))
        };
        if code == OpCode::CPUI_INT_NEGATE
            || (code == OpCode::CPUI_INT_XOR && i1.is_some_and(all_ones))
        {
            return self.not(i0, under);
        }
        let under = !is_arith(code);
        self.bitwise |= under;
        let a = Box::new(self.vn(i0, under)?);
        if code == OpCode::CPUI_INT_2COMP {
            return Some(Expr::Neg(a));
        }
        if code == OpCode::CPUI_INT_LEFT {
            let k = shift_amount(self.data, op, self.size)?;
            return Some(Expr::Mul(a, (1u64 << k) & mask_of(self.size)));
        }
        let b = Box::new(self.vn(i1?, under)?);
        Some(match code {
            OpCode::CPUI_INT_ADD => Expr::Add(a, b),
            OpCode::CPUI_INT_SUB => Expr::Sub(a, b),
            OpCode::CPUI_INT_AND => Expr::And(a, b),
            OpCode::CPUI_INT_OR => Expr::Or(a, b),
            OpCode::CPUI_INT_XOR => Expr::Xor(a, b),
            OpCode::CPUI_INT_MULT => match (*a, *b) {
                (e, Expr::Const(c)) | (Expr::Const(c), e) => Expr::Mul(Box::new(e), c),
                (a, b) => Expr::Prod(Box::new(a), Box::new(b)),
            },
            _ => return None,
        })
    }
}

/// A replacement for the tree under one op.
pub(crate) struct Rewrite {
    simple: Expr,
    leaves: Vec<LeafRef>,
    seen: Vec<(VarnodeId, Expr)>,
}

/// Collect the tree under `op` and find a smaller equal expression. The second
/// value says a bitwise op with several readers was met.
fn rewrite(
    data: &Funcdata,
    op: OpId,
    code: OpCode,
    size: int4,
    inline_shared: bool,
    wide: bool,
) -> (Option<Rewrite>, bool) {
    let limit = if wide { MAX_WIDE_LEAVES } else { MAX_LEAVES };
    let mut col = Collector {
        data,
        size,
        leaves: Vec::new(),
        nodes: 0,
        max_leaves: limit,
        inline_shared,
        shared: false,
        bitwise: false,
        not_arith: false,
        seen: Vec::new(),
        in_shared: false,
        shared_ops: 0,
        deep: false,
        mixed: false,
    };
    let expr = col.op(op, code, false);
    let shared = col.shared;
    let Some(expr) = expr else {
        return (None, shared);
    };
    let expr = col.bind_consts(expr);
    let n = col.leaves.len();
    if n == 0 || n > limit || !col.bitwise {
        return (None, shared);
    }
    let mask = mask_of(size);
    let simple = if !expr.has_arith() {
        if expr.ops() < MIN_BITWISE_OPS || n > MAX_BITWISE_LEAVES {
            return (None, shared);
        }
        match synth(truth_table(&expr, n), &(0..n).collect::<Vec<_>>()) {
            Bool::Zero => Expr::Const(0),
            Bool::One => Expr::Const(mask),
            Bool::E(e) => e,
        }
    } else if expr.is_linear() {
        if n > MAX_LEAVES {
            simplify_wide(&expr, n, mask)
        } else {
            simplify(&expr, n, mask)
        }
    } else if n > MAX_LEAVES {
        return (None, shared);
    } else {
        match to_poly(&expr, n, mask) {
            Some(p) => from_poly(&p, n, mask),
            None => return (None, shared),
        }
    };
    if simple.ops() >= expr.ops().saturating_sub(col.shared_ops) || !agree(&expr, &simple, n, mask)
    {
        return (None, shared);
    }
    // The same bitwise terms in a different sum is plain arithmetic.
    if expr.has_arith() && !col.not_arith && n <= MAX_LEAVES {
        let (mut before, mut after) = (Vec::new(), Vec::new());
        expr.bitwise_tables(n, &mut before);
        simple.bitwise_tables(n, &mut after);
        before.sort_unstable();
        after.sort_unstable();
        if before == after {
            return (None, shared);
        }
    }
    (
        Some(Rewrite {
            simple,
            leaves: col.leaves,
            seen: col.seen,
        }),
        shared,
    )
}

/// One gate of a bit-serial circuit; its operands are earlier gates.
#[derive(Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
enum Gate {
    Leaf(usize),
    Const(u64),
    Not(usize),
    And(usize, usize),
    Or(usize, usize),
    Xor(usize, usize),
    /// `a + b`; the state slot holds the carry.
    Add(usize, usize, usize),
    /// `a - b`; the state slot holds the borrow.
    Sub(usize, usize, usize),
    /// `a * c` for a constant `c`; the first slot holds the last bits of `a`,
    /// the second the carry.
    Mul(usize, u64, usize),
}

/// Expressions as circuits evaluated one bit at a time from the least
/// significant end: every op of [`Expr`] but a product of two terms gives its
/// next bit from its operands' current bits and a small state. Equal gates
/// over equal operands are built once, so the two sides of a proof share the
/// state of what they have in common.
#[derive(Default)]
struct Circuit {
    gates: Vec<Gate>,
    slots: usize,
    /// Each gate (state slots given as 0) to its index.
    index: std::collections::BTreeMap<Gate, usize>,
}

fn bit_len(c: u64) -> u32 {
    u64::BITS - c.leading_zeros()
}

impl Circuit {
    /// The index of `g`, built with its state slots unless an equal gate is.
    fn gate(&mut self, g: Gate) -> usize {
        if let Some(&i) = self.index.get(&g) {
            return i;
        }
        let mut slot = |k: usize| {
            self.slots += k;
            self.slots - k
        };
        let built = match g {
            Gate::Add(a, b, _) => Gate::Add(a, b, slot(1)),
            Gate::Sub(a, b, _) => Gate::Sub(a, b, slot(1)),
            Gate::Mul(a, c, _) => Gate::Mul(a, c, slot(2)),
            g => g,
        };
        self.gates.push(built);
        self.index.insert(g, self.gates.len() - 1);
        self.gates.len() - 1
    }

    /// The gate computing `e`, or `None` for a product of two terms or a
    /// multiplier too wide.
    fn add(&mut self, e: &Expr, mask: u64) -> Option<usize> {
        let g = match e {
            Expr::Leaf(i) => Gate::Leaf(*i),
            Expr::Const(c) => Gate::Const(*c & mask),
            Expr::Not(a) => Gate::Not(self.add(a, mask)?),
            Expr::And(a, b)
            | Expr::Or(a, b)
            | Expr::Xor(a, b)
            | Expr::Add(a, b)
            | Expr::Sub(a, b) => {
                let (a, b) = (self.add(a, mask)?, self.add(b, mask)?);
                let (lo, hi) = (a.min(b), a.max(b));
                match e {
                    Expr::And(..) => Gate::And(lo, hi),
                    Expr::Or(..) => Gate::Or(lo, hi),
                    Expr::Xor(..) => Gate::Xor(lo, hi),
                    Expr::Add(..) => Gate::Add(lo, hi, 0),
                    _ => Gate::Sub(a, b, 0),
                }
            }
            Expr::Neg(a) => {
                let a = self.add(a, mask)?;
                Gate::Sub(self.gate(Gate::Const(0)), a, 0)
            }
            Expr::Mul(a, c) => {
                let a = self.add(a, mask)?;
                let (c, neg) = (*c & mask, c.wrapping_neg() & mask);
                if bit_len(c) <= MAX_MUL_BITS {
                    Gate::Mul(a, c, 0)
                } else if bit_len(neg) <= MAX_MUL_BITS {
                    let m = self.gate(Gate::Mul(a, neg, 0));
                    Gate::Sub(self.gate(Gate::Const(0)), m, 0)
                } else {
                    return None;
                }
            }
            Expr::Prod(..) => return None,
        };
        Some(self.gate(g))
    }

    /// The bit of every gate at bit `pos` for the leaf bits `inp` (bit `i`
    /// is leaf `i`), advancing the state `st`.
    fn step(&self, st: &mut [u32], inp: usize, pos: u32, val: &mut Vec<u32>) {
        val.clear();
        for g in &self.gates {
            let v = match *g {
                Gate::Leaf(i) => ((inp >> i) & 1) as u32,
                Gate::Const(c) => ((c >> pos) & 1) as u32,
                Gate::Not(a) => 1 ^ val[a],
                Gate::And(a, b) => val[a] & val[b],
                Gate::Or(a, b) => val[a] | val[b],
                Gate::Xor(a, b) => val[a] ^ val[b],
                Gate::Add(a, b, s) => {
                    let t = val[a] + val[b] + st[s];
                    st[s] = t >> 1;
                    t & 1
                }
                Gate::Sub(a, b, s) => {
                    let t = i64::from(val[a]) - i64::from(val[b]) - i64::from(st[s]);
                    st[s] = u32::from(t < 0);
                    (t & 1) as u32
                }
                Gate::Mul(a, c, s) => {
                    let (hist, cur) = (st[s], val[a]);
                    let mut t = st[s + 1] + (c & 1) as u32 * cur;
                    for j in 1..bit_len(c) {
                        t += ((c >> j) & 1) as u32 & (hist >> (j - 1));
                    }
                    let keep = bit_len(c).saturating_sub(1);
                    st[s] = ((hist << 1) | cur) & ((1u32 << keep) - 1);
                    st[s + 1] = t >> 1;
                    t & 1
                }
            };
            val.push(v);
        }
    }
}

/// Are `a` and `b` equal for every value of their `n` leaves at `bits`
/// bits? Both circuits run side by side from bit 0 up while the set of carry
/// states that some input prefix reaches is followed exactly, so `Some(true)`
/// is a proof and `Some(false)` a reachable state where the bits differ.
/// `None`: a product of two terms, a multiplier too wide, or more than
/// [`MAX_STATES`] states.
pub(crate) fn prove_equal(a: &Expr, b: &Expr, n: usize, bits: u32) -> Option<bool> {
    let mask = if bits >= 64 {
        u64::MAX
    } else {
        (1u64 << bits) - 1
    };
    let mut c = Circuit::default();
    let (ra, rb) = (c.add(a, mask)?, c.add(b, mask)?);
    let mut states = std::collections::BTreeSet::from([vec![0u32; c.slots]]);
    let mut val = Vec::with_capacity(c.gates.len());
    for pos in 0..bits {
        let mut next = std::collections::BTreeSet::new();
        for st in &states {
            for inp in 0..1usize << n {
                let mut s = st.clone();
                c.step(&mut s, inp, pos, &mut val);
                if val[ra] != val[rb] {
                    return Some(false);
                }
                next.insert(s);
                if next.len() > MAX_STATES {
                    return None;
                }
            }
        }
        states = next;
    }
    Some(true)
}

/// `e ^ k`, folded when `k` is zero or `e` a constant.
fn xor_const(e: Expr, k: u64) -> Expr {
    if k == 0 {
        return e;
    }
    match e {
        Expr::Const(c) => Expr::Const(c ^ k),
        e => Expr::Xor(Box::new(e), Box::new(Expr::Const(k))),
    }
}

/// A smaller expression than the nonlinear tree `f` of `n` leaves (fewer
/// than `budget` ops), proven equal at `bits` bits. The candidates: the
/// linear MBA that agrees with `f` on the 0/1 points, the same for `f ^ k`
/// xor-ed back with `k = f(0)`, and for one leaf `x | f(0)` and
/// `x & f(-1)`. The cheapest that agrees on random inputs and that
/// [`prove_equal`] proves stands.
pub(crate) fn nonlinear_simplify(f: &Expr, n: usize, bits: u32, budget: usize) -> Option<Expr> {
    let mask = if bits >= 64 {
        u64::MAX
    } else {
        (1u64 << bits) - 1
    };
    let k = f.eval(&[0; MAX_LEAVES], mask);
    let keyed = Expr::Xor(Box::new(f.clone()), Box::new(Expr::Const(k)));
    let mut cands = vec![
        simplify(f, n, mask),
        xor_const(simplify(&keyed, n, mask), k),
    ];
    if n == 1 {
        let ones = f.eval(&[mask; MAX_LEAVES], mask);
        cands.push(Expr::Or(Box::new(Expr::Leaf(0)), Box::new(Expr::Const(k))));
        cands.push(Expr::And(
            Box::new(Expr::Leaf(0)),
            Box::new(Expr::Const(ones)),
        ));
    }
    cands.sort_by_key(Expr::ops);
    cands
        .into_iter()
        .filter(|c| c.ops() < budget)
        .find(|c| agree(f, c, n, mask) && prove_equal(f, c, n, bits) == Some(true))
}

/// The nonlinear path: the tree under `op` collected again with arithmetic
/// under bitwise ops and ops of several readers inlined and constants kept as
/// numbers, tried only when such an arithmetic op was met.
fn rewrite_nonlinear(data: &Funcdata, op: OpId, code: OpCode, size: int4) -> Option<Rewrite> {
    let t = collect_deep(data, op, code, size)?;
    if !t.mixed || t.n == 0 || t.n > MAX_NONLINEAR_LEAVES {
        return None;
    }
    let simple = nonlinear_simplify(&t.expr, t.n, 8 * size as u32, t.budget)?;
    Some(t.into_rewrite(simple))
}

/// The deep reading of the tree under an op ([`rewrite_nonlinear`]'s, and the
/// `egraph` option's): arithmetic under bitwise ops, every op with several
/// readers inlined, constants kept as numbers.
pub(crate) struct DeepTree {
    pub(crate) expr: Expr,
    pub(crate) n: usize,
    /// The tree mixes bitwise and arithmetic ops.
    pub(crate) mixed: bool,
    /// The op count a replacement must stay under: the ops under an op with
    /// several readers stay for the other readers.
    pub(crate) budget: usize,
    leaves: Vec<LeafRef>,
    seen: Vec<(VarnodeId, Expr)>,
}

impl DeepTree {
    /// The tree's value at four inputs where each leaf takes a value hashed
    /// from its identity: the same for every spelling of the tree and every
    /// order its leaves were met in.
    pub(crate) fn fingerprint(&self, mask: u64) -> [u64; 4] {
        let mut fp = [0u64; 4];
        for (k, f) in fp.iter_mut().enumerate() {
            let vals: Vec<u64> = self
                .leaves
                .iter()
                .map(|l| {
                    let mut h = 0xcbf2_9ce4_8422_2325u64 ^ k as u64;
                    for b in format!("{l:?}").bytes() {
                        h = (h ^ u64::from(b)).wrapping_mul(0x0100_0000_01b3);
                    }
                    splitmix(&mut h) & mask
                })
                .collect();
            *f = self.expr.eval(&vals, mask);
        }
        fp
    }

    pub(crate) fn into_rewrite(self, simple: Expr) -> Rewrite {
        Rewrite {
            simple,
            leaves: self.leaves,
            seen: self.seen,
        }
    }
}

/// Collect the tree under `op` the deep way (at most [`MAX_LEAVES`] leaves).
pub(crate) fn collect_deep(
    data: &Funcdata,
    op: OpId,
    code: OpCode,
    size: int4,
) -> Option<DeepTree> {
    let mut col = Collector {
        data,
        size,
        leaves: Vec::new(),
        nodes: 0,
        max_leaves: MAX_LEAVES,
        inline_shared: true,
        shared: false,
        bitwise: false,
        not_arith: false,
        seen: Vec::new(),
        in_shared: false,
        shared_ops: 0,
        deep: true,
        mixed: false,
    };
    let expr = col.op(op, code, false)?;
    let mixed = col.mixed || (col.bitwise && expr.has_arith());
    let budget = expr.ops().saturating_sub(col.shared_ops);
    Some(DeepTree {
        n: col.leaves.len(),
        expr,
        mixed,
        budget,
        leaves: col.leaves,
        seen: col.seen,
    })
}

/// Materialize `rw` before `op` and make `op` a `COPY` of it. Declined,
/// with `op` untouched, when a leaf is a free varnode (one heritage has not
/// reached yet): it already has its one reader, so no new op can read it, and
/// a rewrite to a bare leaf (`(x | y) - (~x & y)` is `x`) would leave `op`
/// a `COPY` with no input for the next rule of its old opcode to read.
pub(crate) fn replace(data: &mut Funcdata, op: OpId, rw: &Rewrite, size: int4) -> int4 {
    let free = |vn: VarnodeId| {
        data.vbank()
            .get(vn)
            .is_none_or(|v| v.is_free() && !v.is_spacebase())
    };
    if rw
        .leaves
        .iter()
        .any(|l| matches!(l, LeafRef::Vn(vn) if free(*vn)))
        || rw.seen.iter().any(|(vn, _)| free(*vn))
    {
        return 0;
    }
    let res = emit(data, op, &rw.simple, rw, size);
    let copy = crate::context::TypeOp::new(OpCode::CPUI_COPY, 0, "COPY");
    data.op_set_opcode(op, copy);
    if data.op_set_all_input(op, &[res]).is_err() {
        return 0;
    }
    1
}

pub(crate) fn mask_of(size: int4) -> u64 {
    if size >= 8 {
        u64::MAX
    } else {
        (1u64 << (8 * size)) - 1
    }
}

/// Materialize `e` as ops before `root`, returning the varnode holding it. A
/// subtree the old tree already computes is reused.
fn emit(data: &mut Funcdata, root: OpId, e: &Expr, rw: &Rewrite, size: int4) -> VarnodeId {
    if let Some((vn, _)) = rw.seen.iter().find(|(_, s)| s == e) {
        return *vn;
    }
    let bin = |data: &mut Funcdata, code: OpCode, a: &Expr, b: VarnodeId| {
        let va = emit(data, root, a, rw, size);
        let op = data.new_op_before(root, code, va, b, None);
        data.obank()
            .get(op)
            .and_then(|o| o.get_out())
            .expect("new_op_before output")
    };
    match e {
        Expr::Leaf(i) => match rw.leaves[*i] {
            LeafRef::Vn(vn) => vn,
            LeafRef::Const(c) => data.new_constant(size, c as uintb),
        },
        Expr::Const(c) => data.new_constant(size, *c as uintb),
        Expr::Add(a, b)
        | Expr::Sub(a, b)
        | Expr::Prod(a, b)
        | Expr::And(a, b)
        | Expr::Or(a, b)
        | Expr::Xor(a, b) => {
            let vb = emit(data, root, b, rw, size);
            let code = match e {
                Expr::Add(..) => OpCode::CPUI_INT_ADD,
                Expr::Sub(..) => OpCode::CPUI_INT_SUB,
                Expr::Prod(..) => OpCode::CPUI_INT_MULT,
                Expr::And(..) => OpCode::CPUI_INT_AND,
                Expr::Or(..) => OpCode::CPUI_INT_OR,
                _ => OpCode::CPUI_INT_XOR,
            };
            bin(data, code, a, vb)
        }
        Expr::Mul(a, c) => {
            let vc = data.new_constant(size, *c as uintb);
            bin(data, OpCode::CPUI_INT_MULT, a, vc)
        }
        Expr::Neg(a) | Expr::Not(a) => {
            let va = emit(data, root, a, rw, size);
            let addr = data
                .obank()
                .get(root)
                .map(|o| o.get_addr().clone())
                .expect("root");
            let op = data.new_op(1, addr);
            data.op_set_opcode_code(
                op,
                if matches!(e, Expr::Neg(_)) {
                    OpCode::CPUI_INT_2COMP
                } else {
                    OpCode::CPUI_INT_NEGATE
                },
            );
            let out = data.new_unique_out(size, op).expect("unique out");
            data.op_set_input(op, va, 0).expect("set input");
            data.op_insert_before(op, root);
            out
        }
    }
}

/// (unlace `mba`) `RuleMbaSimplify`.
pub struct RuleMbaSimplify {
    group: String,
}

impl RuleMbaSimplify {
    pub fn new(g: impl Into<String>) -> RuleMbaSimplify {
        RuleMbaSimplify { group: g.into() }
    }
}

impl Rule for RuleMbaSimplify {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![
            OpCode::CPUI_INT_ADD,
            OpCode::CPUI_INT_SUB,
            OpCode::CPUI_INT_2COMP,
            OpCode::CPUI_INT_MULT,
            OpCode::CPUI_INT_AND,
            OpCode::CPUI_INT_OR,
            OpCode::CPUI_INT_XOR,
            OpCode::CPUI_INT_NEGATE,
        ]
    }

    fn clone_rule(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        grouplist.contains(&self.group).then(|| {
            Box::new(RuleMbaSimplify {
                group: self.group.clone(),
            }) as Box<dyn Rule>
        })
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        if !data.get_arch().unlace_options.get::<crate::mba::Mba>().0 {
            return 0;
        }
        let Some(out) = data.obank().get(op).and_then(|o| o.get_out()) else {
            return 0;
        };
        let Some(size) = data.vbank().get(out).map(|v| v.get_size()) else {
            return 0;
        };
        if size > 8 {
            return 0;
        }
        let Some(code) = data.obank().get(op).map(|o| o.code()) else {
            return 0;
        };
        // A subtree is simplified on its own too: a non-linear reader (an
        // `^ v0` over the whole sum) must not hide a linear tree below it.
        // Each rewrite strictly lowers the op count, so this terminates.
        let wide = data.get_arch().unlace_options.get::<MbaWide>().0;
        let rw = match rewrite(data, op, code, size, false, wide) {
            (Some(rw), _) => Some(rw),
            (None, true) => rewrite(data, op, code, size, true, wide).0,
            (None, false) => None,
        };
        let rw = match rw {
            Some(rw) => rw,
            None => match rewrite_nonlinear(data, op, code, size) {
                Some(rw) => rw,
                None => return 0,
            },
        };
        replace(data, op, &rw, size)
    }
}

crate::unlace_flag!(
    /// (unlace `mba`) Simplify linear mixed boolean-arithmetic expressions.
    Mba,
    "mba",
    "Linear MBA simplification",
    unset: false,
    shipped: false
);

crate::unlace_flag!(
    /// (unlace `mbawide`) Linear MBA simplification over up to 16 leaves; needs `mba on`.
    MbaWide,
    "mbawide",
    "Wide linear MBA simplification",
    unset: false,
    shipped: false
);

#[cfg(test)]
mod tests {
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
}
