//! Linear form of an address: `root + Σ coefᵢ·termᵢ + constant`.
//!
//! Hex-Rays splits an address into a root pointer and a list of scaled terms
//! before it decides how to print it (hexx64 `sub_26BEA0` finds the root,
//! `sub_26B8E0` decomposes the offset, `sub_275A30`/`sub_26BCB0` fold the
//! constants out of the terms and sort them). The decomposition is exact
//! integer arithmetic: any operand it cannot see through becomes a term with
//! its coefficient, so the form always sums to the original address.

use std::collections::BTreeMap;

/// Decomposition stops below this many nested definitions. Address trees are
/// shallow; the bound only stops pathological chains.
const MAX_DEPTH: u32 = 12;

/// An operand of an address node: a known constant or another value.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub(super) enum Operand<L> {
    Const(i64),
    Value(L),
}

/// The integer arithmetic that defines a value, as far as the decomposer can
/// see through it. Anything else is opaque and becomes a term.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub(super) enum AddrNode<L> {
    Copy(Operand<L>),
    Add(Operand<L>, Operand<L>),
    Sub(Operand<L>, Operand<L>),
    Mul(Operand<L>, Operand<L>),
    Shl(Operand<L>, Operand<L>),
    Neg(Operand<L>),
    /// `base + index * size` (IR `PTRADD`).
    PtrAdd {
        base: Operand<L>,
        index: Operand<L>,
        size: i64,
    },
}

impl<L> AddrNode<L> {
    /// `false` for a product or shift of two values, which stays a term.
    fn is_linear(&self) -> bool {
        match self {
            AddrNode::Mul(x, y) => matches!(x, Operand::Const(_)) || matches!(y, Operand::Const(_)),
            AddrNode::Shl(_, n) => matches!(n, Operand::Const(n) if (0..63).contains(n)),
            _ => true,
        }
    }
}

/// The definitions an address is built from.
pub(super) trait AddrGraph {
    /// A value as one consumer reads it.
    type Leaf: Copy + Ord;

    /// The arithmetic defining `leaf`, if it may be looked through.
    fn node(&self, leaf: Self::Leaf) -> Option<AddrNode<Self::Leaf>>;

    /// `true` when `leaf` is a pointer with a declared pointee, which makes it
    /// the root of the address rather than part of its offset.
    fn is_root(&self, leaf: Self::Leaf) -> bool;
}

/// `coef * leaf`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub(super) struct Term<L> {
    pub(super) leaf: L,
    pub(super) coef: i64,
}

/// `root + Σ terms + constant`, in bytes. `R` is `Option<L>` for an address
/// whose root may be missing (see [`decompose_unrooted`]).
#[derive(Debug, Clone, PartialEq, Eq)]
pub(super) struct LinearForm<L, R = L> {
    pub(super) root: R,
    /// Distinct leaves with nonzero coefficients, largest coefficient first.
    pub(super) terms: Vec<Term<L>>,
    pub(super) constant: i64,
}

/// Decompose the address `addr` around its single typed root.
///
/// `None` when no typed root is found, when two are (`p - q` is a pointer
/// difference, not an address), when the root is scaled or negated, or when
/// the arithmetic overflows.
pub(super) fn decompose<G: AddrGraph>(graph: &G, addr: G::Leaf) -> Option<LinearForm<G::Leaf>> {
    decompose_unrooted(graph, Operand::Value(addr))?.rooted()
}

/// Decompose `addr` around at most one root. A global object's address has
/// none: its root is the constant.
pub(super) fn decompose_unrooted<G: AddrGraph>(
    graph: &G,
    addr: Operand<G::Leaf>,
) -> Option<LinearForm<G::Leaf, Option<G::Leaf>>> {
    let mut acc = Accumulator::default();
    acc.walk(graph, addr, 1, 0)?;
    Some(acc.finish())
}

/// [`decompose`] for an address computed by `node` itself rather than read
/// from a value.
pub(super) fn decompose_node<G: AddrGraph>(
    graph: &G,
    node: AddrNode<G::Leaf>,
) -> Option<LinearForm<G::Leaf>> {
    let mut acc = Accumulator::default();
    acc.walk_node(graph, node, 1, 0)?;
    acc.finish().rooted()
}

impl<L> LinearForm<L, Option<L>> {
    fn rooted(self) -> Option<LinearForm<L>> {
        Some(LinearForm {
            root: self.root?,
            terms: self.terms,
            constant: self.constant,
        })
    }
}

struct Accumulator<L> {
    root: Option<L>,
    coefs: BTreeMap<L, i64>,
    constant: i64,
}

impl<L> Default for Accumulator<L> {
    fn default() -> Self {
        Self {
            root: None,
            coefs: BTreeMap::new(),
            constant: 0,
        }
    }
}

impl<L: Copy + Ord> Accumulator<L> {
    fn finish(self) -> LinearForm<L, Option<L>> {
        let mut terms: Vec<_> = self
            .coefs
            .into_iter()
            .filter(|&(_, coef)| coef != 0)
            .map(|(leaf, coef)| Term { leaf, coef })
            .collect();
        terms.sort_by_key(|term| std::cmp::Reverse(term.coef));
        LinearForm {
            root: self.root,
            terms,
            constant: self.constant,
        }
    }

    fn walk<G: AddrGraph<Leaf = L>>(
        &mut self,
        graph: &G,
        operand: Operand<L>,
        coef: i64,
        depth: u32,
    ) -> Option<()> {
        let leaf = match operand {
            Operand::Const(value) => {
                self.constant = self.constant.checked_add(coef.checked_mul(value)?)?;
                return Some(());
            }
            Operand::Value(leaf) => leaf,
        };
        if graph.is_root(leaf) {
            if coef != 1 || self.root.is_some() {
                return None;
            }
            self.root = Some(leaf);
            return Some(());
        }
        match graph
            .node(leaf)
            .filter(|node| depth < MAX_DEPTH && node.is_linear())
        {
            Some(node) => self.walk_node(graph, node, coef, depth + 1),
            None => {
                let slot = self.coefs.entry(leaf).or_insert(0);
                *slot = slot.checked_add(coef)?;
                Some(())
            }
        }
    }

    /// Walk a node; a node that is not [linear](AddrNode::is_linear) has no
    /// root and fails.
    fn walk_node<G: AddrGraph<Leaf = L>>(
        &mut self,
        graph: &G,
        node: AddrNode<L>,
        coef: i64,
        depth: u32,
    ) -> Option<()> {
        match node {
            AddrNode::Copy(x) => self.walk(graph, x, coef, depth),
            AddrNode::Add(x, y) => {
                self.walk(graph, x, coef, depth)?;
                self.walk(graph, y, coef, depth)
            }
            AddrNode::Sub(x, y) => {
                self.walk(graph, x, coef, depth)?;
                self.walk(graph, y, coef.checked_neg()?, depth)
            }
            AddrNode::Neg(x) => self.walk(graph, x, coef.checked_neg()?, depth),
            AddrNode::Mul(x, Operand::Const(k)) | AddrNode::Mul(Operand::Const(k), x) => {
                self.walk(graph, x, coef.checked_mul(k)?, depth)
            }
            AddrNode::Shl(x, Operand::Const(n)) if (0..63).contains(&n) => {
                self.walk(graph, x, coef.checked_mul(1i64 << n)?, depth)
            }
            AddrNode::PtrAdd { base, index, size } => {
                self.walk(graph, base, coef, depth)?;
                self.walk(graph, index, coef.checked_mul(size)?, depth)
            }
            AddrNode::Mul(..) | AddrNode::Shl(..) => None,
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Values are numbered; `0` is the typed root.
    struct Graph(BTreeMap<u32, AddrNode<u32>>);

    impl AddrGraph for Graph {
        type Leaf = u32;
        fn node(&self, leaf: u32) -> Option<AddrNode<u32>> {
            self.0.get(&leaf).copied()
        }
        fn is_root(&self, leaf: u32) -> bool {
            leaf == 0
        }
    }

    fn v(leaf: u32) -> Operand<u32> {
        Operand::Value(leaf)
    }

    fn c(value: i64) -> Operand<u32> {
        Operand::Const(value)
    }

    fn graph(nodes: &[(u32, AddrNode<u32>)]) -> Graph {
        Graph(nodes.iter().copied().collect())
    }

    fn terms(form: &LinearForm<u32>) -> Vec<(u32, i64)> {
        form.terms.iter().map(|t| (t.leaf, t.coef)).collect()
    }

    #[test]
    fn scaled_index_and_constant_split_out() {
        // 10 = 0 + (1 << 2) - 4 ; 1 = i
        let g = graph(&[
            (11, AddrNode::Shl(v(1), c(2))),
            (12, AddrNode::Add(v(0), v(11))),
            (10, AddrNode::Add(v(12), c(-4))),
        ]);
        let form = decompose(&g, 10).unwrap();
        assert_eq!(form.root, 0);
        assert_eq!(terms(&form), vec![(1, 4)]);
        assert_eq!(form.constant, -4);
    }

    #[test]
    fn constants_inside_scaled_terms_are_folded() {
        // (i + 1) * 8 + j * 2 + p, with the multiplication on either side.
        let g = graph(&[
            (11, AddrNode::Add(v(1), c(1))),
            (12, AddrNode::Mul(c(8), v(11))),
            (13, AddrNode::Mul(v(2), c(2))),
            (14, AddrNode::Add(v(12), v(13))),
            (10, AddrNode::Add(v(14), v(0))),
        ]);
        let form = decompose(&g, 10).unwrap();
        assert_eq!(terms(&form), vec![(1, 8), (2, 2)]);
        assert_eq!(form.constant, 8);
    }

    #[test]
    fn subtraction_and_negation_flip_coefficients() {
        // p - (i - 3) + -(j)
        let g = graph(&[
            (11, AddrNode::Sub(v(1), c(3))),
            (12, AddrNode::Sub(v(0), v(11))),
            (13, AddrNode::Neg(v(2))),
            (10, AddrNode::Add(v(12), v(13))),
        ]);
        let form = decompose(&g, 10).unwrap();
        assert_eq!(terms(&form), vec![(1, -1), (2, -1)]);
        assert_eq!(form.constant, 3);
    }

    #[test]
    fn repeated_leaves_merge_and_cancel() {
        // p + i*4 + i*4 - i*8 + 2
        let g = graph(&[
            (11, AddrNode::Mul(v(1), c(4))),
            (12, AddrNode::Add(v(11), v(11))),
            (13, AddrNode::Mul(v(1), c(8))),
            (14, AddrNode::Sub(v(12), v(13))),
            (15, AddrNode::Add(v(0), v(14))),
            (10, AddrNode::Add(v(15), c(2))),
        ]);
        let form = decompose(&g, 10).unwrap();
        assert!(form.terms.is_empty());
        assert_eq!(form.constant, 2);
    }

    #[test]
    fn ptradd_scales_its_index() {
        let g = graph(&[(
            10,
            AddrNode::PtrAdd {
                base: v(0),
                index: v(1),
                size: 12,
            },
        )]);
        let form = decompose(&g, 10).unwrap();
        assert_eq!(terms(&form), vec![(1, 12)]);
    }

    #[test]
    fn opaque_products_stay_terms() {
        // p + i*j
        let g = graph(&[
            (11, AddrNode::Mul(v(1), v(2))),
            (10, AddrNode::Add(v(0), v(11))),
        ]);
        let form = decompose(&g, 10).unwrap();
        assert_eq!(terms(&form), vec![(11, 1)]);
    }

    #[test]
    fn root_must_appear_once_unscaled() {
        // p - p: a pointer difference.
        let diff = graph(&[(10, AddrNode::Sub(v(0), v(0)))]);
        assert_eq!(decompose(&diff, 10), None);
        // p * 2
        let scaled = graph(&[(10, AddrNode::Mul(v(0), c(2)))]);
        assert_eq!(decompose(&scaled, 10), None);
        // No typed root at all.
        let untyped = graph(&[(10, AddrNode::Add(v(1), c(8)))]);
        assert_eq!(decompose(&untyped, 10), None);
    }

    #[test]
    fn overflowing_offsets_are_rejected() {
        let g = graph(&[
            (11, AddrNode::Mul(v(1), c(i64::MAX))),
            (10, AddrNode::Add(v(0), v(11))),
            (20, AddrNode::Add(v(10), v(11))),
        ]);
        assert!(decompose(&g, 10).is_some());
        assert_eq!(decompose(&g, 20), None);
    }
}
