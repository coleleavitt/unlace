//! (kuna `egraph`) Equality saturation over mixed boolean-arithmetic trees.
//!
//! The `mba` option solves classes of MBA in closed form (linear MBA by
//! its 0/1 truth table, polynomial MBA by its conjunction-basis polynomial,
//! a small nonlinear table under a bit-serial proof). An expression an
//! obfuscator built by composing several rewrites, or one that mixes those
//! classes, has no closed form; equality saturation searches for it instead.
//!
//! 1. The tree under the root op is collected the deep way (see
//!    [`kuna_mba::collect_deep`]: arithmetic under bitwise ops, ops of several
//!    readers inlined, constants as numbers, at most six leaves and 48 nodes)
//!    and added to an e-graph ([egg](https://egraphs-good.github.io/)), one
//!    e-class per distinct subterm.
//! 2. Every subterm the `mba` solvers fold (linear or polynomial) is merged
//!    with its folded form, and the root with [`kuna_mba::nonlinear_simplify`]'s
//!    proven candidate, so the closed forms are rewrites of the search too.
//! 3. The e-graph is saturated with [`rules`]: ring and boolean-algebra
//!    identities and the MBA identities obfuscators use, each an identity of
//!    the integers modulo `2^w` for every width `w`, with constant folding at the
//!    root's width. Saturation stops at [`NODE_LIMIT`] nodes or [`ITER_LIMIT`]
//!    iterations (with `egg`'s `deterministic` hashing, so the same tree always
//!    gives the same result; the time limit is a guard only).
//! 4. The expression with the fewest ops is extracted. It replaces the tree
//!    only when it has fewer ops than the tree keeps for itself, agrees on 64
//!    random full-width inputs and on every input at a small width (2^16
//!    combinations at most), and is not refuted by [`kuna_mba::prove_equal`]
//!    (run for at most three leaves, where it proves equality at the full
//!    width). The checks guard the lowering in both directions; equality
//!    itself follows from the rules being identities.

use std::collections::BTreeSet;
use std::sync::OnceLock;
use std::time::Duration;

use egg::{
    Analysis, CostFunction, DidMerge, EGraph, Extractor, Id, Language, RecExpr, Rewrite, Runner,
    StopReason, Symbol, define_language, rewrite,
};
use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

use crate::action::{ActionGroupList, Rule};
use crate::context::OpId;
use crate::funcdata::Funcdata;
use crate::kuna_mba::{self, Expr, MAX_LEAVES, MAX_NONLINEAR_LEAVES};

/// Most e-nodes saturation grows to.
const NODE_LIMIT: usize = 4000;
/// Most rounds of rule application.
const ITER_LIMIT: usize = 12;
/// A guard against a pathological search; the node limit stops it first.
const TIME_LIMIT: Duration = Duration::from_secs(2);
/// Most input combinations of the small-width check.
const EXHAUSTIVE_BITS: usize = 12;

define_language! {
    /// The p-code integer ops of an MBA tree as e-graph nodes.
    enum Bv {
        "+" = Add([Id; 2]),
        "-" = Sub([Id; 2]),
        "*" = Mul([Id; 2]),
        "neg" = Neg(Id),
        "&" = And([Id; 2]),
        "|" = Or([Id; 2]),
        "^" = Xor([Id; 2]),
        "~" = Not(Id),
        Num(u64),
        Leaf(Symbol),
    }
}

/// Constant folding at the tree's width.
struct Fold {
    mask: u64,
}

impl Analysis<Bv> for Fold {
    type Data = Option<u64>;

    fn make(egraph: &mut EGraph<Bv, Self>, enode: &Bv, _id: Id) -> Option<u64> {
        let mask = egraph.analysis.mask;
        let c = |i: &Id| egraph[*i].data;
        let v = match enode {
            Bv::Num(n) => *n,
            Bv::Leaf(_) => return None,
            Bv::Add([a, b]) => c(a)?.wrapping_add(c(b)?),
            Bv::Sub([a, b]) => c(a)?.wrapping_sub(c(b)?),
            Bv::Mul([a, b]) => c(a)?.wrapping_mul(c(b)?),
            Bv::Neg(a) => c(a)?.wrapping_neg(),
            Bv::And([a, b]) => c(a)? & c(b)?,
            Bv::Or([a, b]) => c(a)? | c(b)?,
            Bv::Xor([a, b]) => c(a)? ^ c(b)?,
            Bv::Not(a) => !c(a)?,
        };
        Some(v & mask)
    }

    fn merge(&mut self, to: &mut Option<u64>, from: Option<u64>) -> DidMerge {
        egg::merge_option(to, from, |_, _| DidMerge(false, false))
    }

    fn modify(egraph: &mut EGraph<Bv, Self>, id: Id) {
        if let Some(c) = egraph[id].data {
            let k = egraph.add(Bv::Num(c));
            egraph.union(id, k);
        }
    }
}

/// The op count of [`Expr::ops`] (leaves and constants free), then the
/// bitwise op count, so of two forms with as many ops the one with fewer
/// bitwise ops is extracted.
struct OpCount;

impl CostFunction<Bv> for OpCount {
    type Cost = (usize, usize);

    fn cost<C>(&mut self, enode: &Bv, mut costs: C) -> (usize, usize)
    where
        C: FnMut(Id) -> (usize, usize),
    {
        let bitwise = matches!(enode, Bv::And(_) | Bv::Or(_) | Bv::Xor(_) | Bv::Not(_));
        let own = (usize::from(!enode.is_leaf()), usize::from(bitwise));
        enode.fold(own, |(o, b), i| {
            let (co, cb) = costs(i);
            (o.saturating_add(co), b.saturating_add(cb))
        })
    }
}

type Rw = Rewrite<Bv, Fold>;

/// The rewrite set, built once. Each rule is an identity modulo `2^w` at every
/// width `w`.
fn rules() -> &'static [Rw] {
    static RULES: OnceLock<Vec<Rw>> = OnceLock::new();
    RULES.get_or_init(|| {
        let mut r: Vec<Rw> = vec![
            // Commutativity and associativity.
            rewrite!("add-comm"; "(+ ?a ?b)" => "(+ ?b ?a)"),
            rewrite!("mul-comm"; "(* ?a ?b)" => "(* ?b ?a)"),
            rewrite!("and-comm"; "(& ?a ?b)" => "(& ?b ?a)"),
            rewrite!("or-comm"; "(| ?a ?b)" => "(| ?b ?a)"),
            rewrite!("xor-comm"; "(^ ?a ?b)" => "(^ ?b ?a)"),
            rewrite!("add-assoc"; "(+ ?a (+ ?b ?c))" => "(+ (+ ?a ?b) ?c)"),
            rewrite!("mul-assoc"; "(* ?a (* ?b ?c))" => "(* (* ?a ?b) ?c)"),
            rewrite!("and-assoc"; "(& ?a (& ?b ?c))" => "(& (& ?a ?b) ?c)"),
            rewrite!("or-assoc"; "(| ?a (| ?b ?c))" => "(| (| ?a ?b) ?c)"),
            rewrite!("xor-assoc"; "(^ ?a (^ ?b ?c))" => "(^ (^ ?a ?b) ?c)"),
            // Ring identities.
            rewrite!("neg-neg"; "(neg (neg ?a))" => "?a"),
            rewrite!("sub-swap"; "(- ?a ?b)" => "(neg (- ?b ?a))"),
            rewrite!("add-0"; "(+ ?a 0)" => "?a"),
            rewrite!("mul-1"; "(* ?a 1)" => "?a"),
            rewrite!("mul-0"; "(* ?a 0)" => "0"),
            rewrite!("add-neg-self"; "(+ ?a (neg ?a))" => "0"),
            rewrite!("factor-self"; "(+ ?a (* ?a ?b))" => "(* ?a (+ ?b 1))"),
            // Boolean identities.
            rewrite!("not-not"; "(~ (~ ?a))" => "?a"),
            rewrite!("and-0"; "(& ?a 0)" => "0"),
            rewrite!("or-0"; "(| ?a 0)" => "?a"),
            rewrite!("xor-0"; "(^ ?a 0)" => "?a"),
            rewrite!("and-ones"; "(& ?a (~ 0))" => "?a"),
            rewrite!("or-ones"; "(| ?a (~ 0))" => "(~ 0)"),
            rewrite!("xor-ones"; "(^ ?a (~ 0))" => "(~ ?a)"),
            rewrite!("and-self"; "(& ?a ?a)" => "?a"),
            rewrite!("or-self"; "(| ?a ?a)" => "?a"),
            rewrite!("xor-self"; "(^ ?a ?a)" => "0"),
            rewrite!("and-not-self"; "(& ?a (~ ?a))" => "0"),
            rewrite!("or-not-self"; "(| ?a (~ ?a))" => "(~ 0)"),
            rewrite!("xor-not-self"; "(^ ?a (~ ?a))" => "(~ 0)"),
            rewrite!("and-absorb"; "(& ?a (| ?a ?b))" => "?a"),
            rewrite!("or-absorb"; "(| ?a (& ?a ?b))" => "?a"),
            rewrite!("or-and-factor"; "(| (& ?a ?b) (& ?a ?c))" => "(& ?a (| ?b ?c))"),
            rewrite!("and-or-factor"; "(& (| ?a ?b) (| ?a ?c))" => "(| ?a (& ?b ?c))"),
            rewrite!("xor-and-factor"; "(^ (& ?a ?b) (& ?a ?c))" => "(& ?a (^ ?b ?c))"),
            rewrite!("xor-of-masks"; "(| (& ?a (~ ?b)) (& (~ ?a) ?b))" => "(^ ?a ?b)"),
            rewrite!("xor-or-nand"; "(& (| ?a ?b) (~ (& ?a ?b)))" => "(^ ?a ?b)"),
            rewrite!("or-and-xor"; "(| (& ?a ?b) (^ ?a ?b))" => "(| ?a ?b)"),
            rewrite!("xnor-and"; "(& (^ ?a (~ ?b)) ?a)" => "(& ?a ?b)"),
            rewrite!("xor-or-and"; "(^ (| ?a ?b) (& ?a ?b))" => "(^ ?a ?b)"),
            rewrite!("xor-or-b"; "(^ (| ?a ?b) ?b)" => "(& ?a (~ ?b))"),
            rewrite!("xor-and-b"; "(^ (& ?a ?b) ?b)" => "(& (~ ?a) ?b)"),
            rewrite!("or-xor-b"; "(| (^ ?a ?b) ?b)" => "(| ?a ?b)"),
            rewrite!("and-xor-b"; "(& (^ ?a ?b) ?b)" => "(& (~ ?a) ?b)"),
            rewrite!("and-xnor-b"; "(& (~ (^ ?a ?b)) ?b)" => "(& ?a ?b)"),
            rewrite!("or-mask-b"; "(| (& ?a (~ ?b)) ?b)" => "(| ?a ?b)"),
            rewrite!("and-or-notb"; "(& (| ?a ?b) (~ ?b))" => "(& ?a (~ ?b))"),
            // Complement and negation: ~a = -a - 1.
            rewrite!("neg-not"; "(neg (~ ?a))" => "(+ ?a 1)"),
            rewrite!("not-neg"; "(~ (neg ?a))" => "(- ?a 1)"),
            rewrite!("sub-via-not"; "(+ (+ ?a (~ ?b)) 1)" => "(- ?a ?b)"),
            rewrite!("add-via-not"; "(- (- ?a (~ ?b)) 1)" => "(+ ?a ?b)"),
            // Linear MBA identities.
            rewrite!("mba-add-xor"; "(+ (^ ?a ?b) (* (& ?a ?b) 2))" => "(+ ?a ?b)"),
            rewrite!("mba-add-or"; "(+ (| ?a ?b) (& ?a ?b))" => "(+ ?a ?b)"),
            rewrite!("mba-add-2or"; "(- (* (| ?a ?b) 2) (^ ?a ?b))" => "(+ ?a ?b)"),
            rewrite!("mba-xor-or"; "(- (| ?a ?b) (& ?a ?b))" => "(^ ?a ?b)"),
            rewrite!("mba-xor-add"; "(- (+ ?a ?b) (* (& ?a ?b) 2))" => "(^ ?a ?b)"),
            rewrite!("mba-or-xor"; "(+ (^ ?a ?b) (& ?a ?b))" => "(| ?a ?b)"),
            rewrite!("mba-or-add"; "(- (+ ?a ?b) (& ?a ?b))" => "(| ?a ?b)"),
            rewrite!("mba-or-mask"; "(+ (& ?a (~ ?b)) ?b)" => "(| ?a ?b)"),
            rewrite!("mba-and-or"; "(- (| ?a ?b) (^ ?a ?b))" => "(& ?a ?b)"),
            rewrite!("mba-and-add"; "(- (+ ?a ?b) (| ?a ?b))" => "(& ?a ?b)"),
            rewrite!("mba-andnot-or"; "(- (| ?a ?b) ?b)" => "(& ?a (~ ?b))"),
            rewrite!("mba-andnot-and"; "(- ?a (& ?a ?b))" => "(& ?a (~ ?b))"),
            rewrite!("mba-sub-xor"; "(- (^ ?a ?b) (* (& (~ ?a) ?b) 2))" => "(- ?a ?b)"),
            rewrite!("mba-sub-masks"; "(- (& ?a (~ ?b)) (& (~ ?a) ?b))" => "(- ?a ?b)"),
            rewrite!("mba-sub-2mask"; "(- (* (& ?a (~ ?b)) 2) (^ ?a ?b))" => "(- ?a ?b)"),
        ];
        r.extend(rewrite!("sub-canon"; "(- ?a ?b)" <=> "(+ ?a (neg ?b))"));
        r.extend(rewrite!("not-arith"; "(~ ?a)" <=> "(- (neg ?a) 1)"));
        r.extend(rewrite!("neg-add"; "(neg (+ ?a ?b))" <=> "(+ (neg ?a) (neg ?b))"));
        r.extend(rewrite!("neg-mul"; "(neg (* ?a ?b))" <=> "(* (neg ?a) ?b)"));
        r.extend(rewrite!("double"; "(+ ?a ?a)" <=> "(* ?a 2)"));
        r.extend(rewrite!("distribute"; "(* ?a (+ ?b ?c))" <=> "(+ (* ?a ?b) (* ?a ?c))"));
        r.extend(rewrite!("demorgan-and"; "(~ (& ?a ?b))" <=> "(| (~ ?a) (~ ?b))"));
        r.extend(rewrite!("demorgan-or"; "(~ (| ?a ?b))" <=> "(& (~ ?a) (~ ?b))"));
        r.extend(rewrite!("xor-not"; "(^ ?a (~ ?b))" <=> "(~ (^ ?a ?b))"));
        r
    })
}

fn has_bitwise(e: &Expr) -> bool {
    match e {
        Expr::And(..) | Expr::Or(..) | Expr::Xor(..) | Expr::Not(_) => true,
        Expr::Add(a, b) | Expr::Sub(a, b) | Expr::Prod(a, b) => has_bitwise(a) || has_bitwise(b),
        Expr::Neg(a) | Expr::Mul(a, _) => has_bitwise(a),
        Expr::Leaf(_) | Expr::Const(_) => false,
    }
}

/// What the `mba` closed forms make of the subterm `e`: its linear MBA or its
/// polynomial normal form, when that has fewer ops and agrees on random inputs.
fn mba_seed(e: &Expr, n: usize, mask: u64) -> Option<Expr> {
    if !e.has_arith() || !has_bitwise(e) {
        return None;
    }
    let s = if e.is_linear() {
        kuna_mba::simplify(e, n, mask)
    } else {
        kuna_mba::from_poly(&kuna_mba::to_poly(e, n, mask)?, n, mask)
    };
    (s.ops() < e.ops() && kuna_mba::agree(e, &s, n, mask)).then_some(s)
}

fn leaf_symbol(i: usize) -> Symbol {
    Symbol::from(format!("l{i}"))
}

/// Add `e` to the e-graph, merging each subterm with its `mba` seed when `seed`.
fn add(eg: &mut EGraph<Bv, Fold>, e: &Expr, n: usize, mask: u64, seed: bool) -> Id {
    let two = |eg: &mut EGraph<Bv, Fold>, a: &Expr, b: &Expr| {
        [add(eg, a, n, mask, seed), add(eg, b, n, mask, seed)]
    };
    let id = match e {
        Expr::Leaf(i) => eg.add(Bv::Leaf(leaf_symbol(*i))),
        Expr::Const(c) => eg.add(Bv::Num(*c & mask)),
        Expr::Add(a, b) => {
            let ids = two(eg, a.as_ref(), b.as_ref());
            eg.add(Bv::Add(ids))
        }
        Expr::Sub(a, b) => {
            let ids = two(eg, a.as_ref(), b.as_ref());
            eg.add(Bv::Sub(ids))
        }
        Expr::Prod(a, b) => {
            let ids = two(eg, a.as_ref(), b.as_ref());
            eg.add(Bv::Mul(ids))
        }
        Expr::And(a, b) => {
            let ids = two(eg, a.as_ref(), b.as_ref());
            eg.add(Bv::And(ids))
        }
        Expr::Or(a, b) => {
            let ids = two(eg, a.as_ref(), b.as_ref());
            eg.add(Bv::Or(ids))
        }
        Expr::Xor(a, b) => {
            let ids = two(eg, a.as_ref(), b.as_ref());
            eg.add(Bv::Xor(ids))
        }
        Expr::Mul(a, c) => {
            let a = add(eg, a, n, mask, seed);
            let k = eg.add(Bv::Num(*c & mask));
            eg.add(Bv::Mul([a, k]))
        }
        Expr::Neg(a) => {
            let a = add(eg, a, n, mask, seed);
            eg.add(Bv::Neg(a))
        }
        Expr::Not(a) => {
            let a = add(eg, a, n, mask, seed);
            eg.add(Bv::Not(a))
        }
    };
    if seed
        && bitwise_ops(e) >= 2
        && let Some(s) = mba_seed(e, n, mask)
    {
        let s = add(eg, &s, n, mask, false);
        eg.union(id, s);
    }
    id
}

/// The [`Expr`] of the extracted node `id`.
fn lower(rec: &RecExpr<Bv>, id: Id) -> Option<Expr> {
    let b = |i: Id| lower(rec, i).map(Box::new);
    Some(match &rec[id] {
        Bv::Num(c) => Expr::Const(*c),
        Bv::Leaf(s) => Expr::Leaf(s.as_str().strip_prefix('l')?.parse().ok()?),
        Bv::Add([x, y]) => Expr::Add(b(*x)?, b(*y)?),
        Bv::Sub([x, y]) => Expr::Sub(b(*x)?, b(*y)?),
        Bv::And([x, y]) => Expr::And(b(*x)?, b(*y)?),
        Bv::Or([x, y]) => Expr::Or(b(*x)?, b(*y)?),
        Bv::Xor([x, y]) => Expr::Xor(b(*x)?, b(*y)?),
        Bv::Mul([x, y]) => match (&rec[*x], &rec[*y]) {
            (_, Bv::Num(k)) => Expr::Mul(b(*x)?, *k),
            (Bv::Num(k), _) => Expr::Mul(b(*y)?, *k),
            _ => Expr::Prod(b(*x)?, b(*y)?),
        },
        Bv::Neg(x) => Expr::Neg(b(*x)?),
        Bv::Not(x) => Expr::Not(b(*x)?),
    })
}

/// Do `a` and `b` agree on every input of their `n` leaves at the widest
/// width (at most 8 bits) with at most `2^EXHAUSTIVE_BITS` combinations? Every op is
/// a ring or bitwise op, so truncation to that width commutes with it and the
/// check is a necessary condition for equality at the full width.
fn agree_exhaustive(a: &Expr, b: &Expr, n: usize) -> bool {
    let bits = (EXHAUSTIVE_BITS / n.max(1)).clamp(1, 8);
    let mask = (1u64 << bits) - 1;
    let mut leaves = [0u64; MAX_LEAVES];
    (0..1u64 << (bits * n.min(MAX_LEAVES))).all(|p| {
        for (i, l) in leaves.iter_mut().enumerate().take(n) {
            *l = (p >> (bits * i)) & mask;
        }
        a.eval(&leaves, mask) == b.eval(&leaves, mask)
    })
}

/// The bitwise ops of `e`.
fn bitwise_ops(e: &Expr) -> usize {
    match e {
        Expr::Leaf(_) | Expr::Const(_) => 0,
        Expr::Not(a) => 1 + bitwise_ops(a),
        Expr::Neg(a) | Expr::Mul(a, _) => bitwise_ops(a),
        Expr::And(a, b) | Expr::Or(a, b) | Expr::Xor(a, b) => 1 + bitwise_ops(a) + bitwise_ops(b),
        Expr::Add(a, b) | Expr::Sub(a, b) | Expr::Prod(a, b) => bitwise_ops(a) + bitwise_ops(b),
    }
}

/// The first round's budget: most trees that simplify do so in a small
/// e-graph, and most that do not saturate it without finding anything.
const QUICK_NODE_LIMIT: usize = 500;
const QUICK_ITER_LIMIT: usize = 5;
/// Fewest bitwise ops of a tree whose first round hit its limit for a second,
/// full round to run: obfuscated trees are dense in them, ordinary code is not.
const ESCALATE_BITWISE: usize = 3;

fn run(eg: EGraph<Bv, Fold>, mask: u64, nodes: usize, iters: usize) -> Runner<Bv, Fold, ()> {
    Runner::new(Fold { mask })
        .with_egraph(eg)
        .with_node_limit(nodes)
        .with_iter_limit(iters)
        .with_time_limit(TIME_LIMIT)
        .run(rules())
}

/// The cheapest expression equal to `f` (`n` leaves, `bits` wide) that saturation
/// finds, when it has fewer than `budget` ops and fewer than `bit_budget`
/// bitwise ops and passes the checks. Saturation runs in two rounds: a quick
/// one ([`QUICK_NODE_LIMIT`] nodes, [`QUICK_ITER_LIMIT`] iterations), and, when
/// that finds nothing and stopped at its limit rather than saturating, the full
/// one on the same e-graph for a tree with at least [`ESCALATE_BITWISE`] bitwise
/// ops.
pub(crate) fn saturate(
    f: &Expr,
    n: usize,
    bits: u32,
    budget: usize,
    bit_budget: usize,
) -> Option<Expr> {
    if n == 0 || n > MAX_LEAVES {
        return None;
    }
    let mask = if bits >= 64 {
        u64::MAX
    } else {
        (1u64 << bits) - 1
    };
    let mut eg: EGraph<Bv, Fold> = EGraph::new(Fold { mask });
    let root = add(&mut eg, f, n, mask, true);
    if n <= MAX_NONLINEAR_LEAVES
        && let Some(s) = kuna_mba::nonlinear_simplify(f, n, bits, budget)
    {
        let s = add(&mut eg, &s, n, mask, false);
        eg.union(root, s);
    }
    let check = |runner: &Runner<Bv, Fold, ()>| -> Option<Expr> {
        let root = runner.egraph.find(root);
        let (_, best) = Extractor::new(&runner.egraph, OpCount).find_best(root);
        let simple = lower(&best, best.root())?;
        if simple.ops() >= budget
            || bitwise_ops(&simple) >= bit_budget
            || !kuna_mba::agree(f, &simple, n, mask)
        {
            return None;
        }
        // A proof at the full width makes the small-width check redundant.
        let proof = (n <= MAX_NONLINEAR_LEAVES)
            .then(|| kuna_mba::prove_equal(f, &simple, n, bits))
            .flatten();
        let ok = match proof {
            Some(p) => p,
            None => agree_exhaustive(f, &simple, n),
        };
        ok.then_some(simple)
    };
    let quick = run(eg, mask, QUICK_NODE_LIMIT, QUICK_ITER_LIMIT);
    if let Some(s) = check(&quick) {
        return Some(s);
    }
    if matches!(quick.stop_reason, Some(StopReason::Saturated)) || bitwise_ops(f) < ESCALATE_BITWISE
    {
        return None;
    }
    let full = run(quick.egraph, mask, NODE_LIMIT, ITER_LIMIT);
    check(&full)
}

/// (kuna `egraph`) `RuleEgraphSimplify`.
pub struct RuleEgraphSimplify {
    group: String,
    /// Fingerprints of the trees rewritten in this function without removing
    /// a bitwise op.
    regrouped: BTreeSet<[u64; 4]>,
    /// Trees saturated in this function without a replacement (fingerprint,
    /// op count, budget): the pool visits every op again on each pass, and an
    /// unchanged tree would be saturated again for nothing.
    barren: BTreeSet<([u64; 4], usize, usize)>,
}

impl RuleEgraphSimplify {
    pub fn new(g: impl Into<String>) -> RuleEgraphSimplify {
        RuleEgraphSimplify {
            group: g.into(),
            regrouped: BTreeSet::new(),
            barren: BTreeSet::new(),
        }
    }
}

impl Rule for RuleEgraphSimplify {
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
        grouplist
            .contains(&self.group)
            .then(|| Box::new(RuleEgraphSimplify::new(self.group.clone())) as Box<dyn Rule>)
    }

    fn reset(&mut self, _data: &mut Funcdata) {
        self.regrouped.clear();
        self.barren.clear();
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        if !data.get_arch().kuna_options.get::<Egraph>().0 {
            return 0;
        }
        let Some(out) = data.obank().get(op).and_then(|o| o.get_out()) else {
            return 0;
        };
        let Some(size) = data.vbank().get(out).map(|v| v.get_size()) else {
            return 0;
        };
        let Some(code) = data.obank().get(op).map(|o| o.code()) else {
            return 0;
        };
        if size > 8 || !kuna_mba::is_candidate(code) {
            return 0;
        }
        // A tree whose one reader is an op of the set is part of that reader's
        // tree, and the reader's saturation extracts its best form too.
        let in_reader = data
            .lone_descend(out)
            .and_then(|r| data.obank().get(r))
            .is_some_and(|r| {
                kuna_mba::is_candidate(r.code())
                    && r.get_out()
                        .and_then(|o| data.vbank().get(o))
                        .is_some_and(|v| v.get_size() == size)
            });
        if in_reader {
            return 0;
        }
        let Some(t) = kuna_mba::collect_deep(data, op, code, size) else {
            return 0;
        };
        if !t.mixed || t.budget < 2 {
            return 0;
        }
        // The ops under an op with several readers stay; count them all as bitwise.
        let kept = t.expr.ops().saturating_sub(t.budget);
        let bit_budget = bitwise_ops(&t.expr).saturating_sub(kept);
        let fp = t.fingerprint(kuna_mba::mask_of(size));
        let key = (fp, t.expr.ops(), t.budget);
        if self.barren.contains(&key) {
            return 0;
        }
        // A tree with one bitwise op has no MBA identity to compose; the
        // closed forms of `mba` are all it gets, without an e-graph.
        let simple = if bitwise_ops(&t.expr) < 2 {
            mba_seed(&t.expr, t.n, kuna_mba::mask_of(size)).filter(|s| s.ops() < t.budget)
        } else {
            // A tree already regrouped once may only lose bitwise ops now,
            // which saturation checks before the evaluations do.
            let bits_cap = if self.regrouped.contains(&fp) {
                bit_budget
            } else {
                usize::MAX
            };
            saturate(&t.expr, t.n, 8 * size as u32, t.budget, bits_cap)
        };
        let Some(simple) = simple else {
            self.barren.insert(key);
            return 0;
        };
        // A rewrite that keeps every bitwise op regroups arithmetic the core
        // rules may regroup back, which would show this tree again: it is
        // done once per tree value.
        if bitwise_ops(&simple) >= bit_budget && !self.regrouped.insert(fp) {
            self.barren.insert(key);
            return 0;
        }
        let rw = t.into_rewrite(simple);
        kuna_mba::replace(data, op, &rw, size)
    }
}

crate::kuna_flag!(
    /// (kuna `egraph`) Simplify MBA trees by equality saturation.
    Egraph,
    "egraph",
    "E-graph MBA simplification",
    unset: false,
    shipped: false
);

#[cfg(test)]
mod tests {
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
        let s = saturate(&f, 2, 32, f.ops(), bitwise_ops(&f)).expect("saturates");
        assert_eq!(s.ops(), 1);
        assert!(kuna_mba::agree(&f, &s, 2, 0xffff_ffff));
    }

    #[test]
    fn constant_key_folds_through_the_identity() {
        let f = Expr::Add(
            bx(Expr::Xor(l(0), k(0x3039))),
            bx(Expr::Mul(bx(Expr::And(l(0), k(0x3039))), 2)),
        );
        let s = saturate(&f, 1, 32, f.ops(), bitwise_ops(&f)).expect("saturates");
        assert_eq!(s.ops(), 1);
        assert_eq!(kuna_mba::prove_equal(&f, &s, 1, 32), Some(true));
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
        let s = saturate(&f, 2, 64, f.ops(), bitwise_ops(&f)).expect("saturates");
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
        let s = saturate(&f, 3, 32, f.ops(), bitwise_ops(&f)).expect("saturates");
        assert_eq!(s.ops(), 2);
        assert!(kuna_mba::agree(&f, &s, 3, 0xffff_ffff));
        assert_eq!(kuna_mba::prove_equal(&f, &s, 3, 32), Some(true));
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
        assert!(!agree_exhaustive(&a, &b, 2));
        assert!(agree_exhaustive(&a, &a, 2));
    }

    #[test]
    fn every_rule_is_an_identity() {
        // Each rule's sides, read back as expressions over the pattern variables,
        // agree at random inputs and at every small-width input.
        for r in rules() {
            let (Some(lhs), Some(rhs)) =
                (r.searcher.get_pattern_ast(), r.applier.get_pattern_ast())
            else {
                panic!("rule {} is not a pattern", r.name);
            };
            let (a, b) = (pattern_expr(lhs), pattern_expr(rhs));
            assert!(kuna_mba::agree(&a, &b, 3, u64::MAX), "rule {}", r.name);
            assert!(agree_exhaustive(&a, &b, 3), "rule {}", r.name);
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
}
