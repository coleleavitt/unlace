//! Contiguous control-flow references, sorted in each query direction.
//! The walk collects each edge once; indexing adds one copy without allocating
//! a map node and a growable bucket for every fall-through address.

use super::model::{RefKind, Reference};

#[derive(Debug, Default, Clone, PartialEq, Eq)]
pub(super) struct ReferenceIndex {
    from: Vec<Reference>,
    to: Vec<Reference>,
}

impl ReferenceIndex {
    pub fn new(mut edges: Vec<Reference>) -> Self {
        edges.sort_by_key(|r| (r.from, r.to, kind_order(r.kind)));
        edges.dedup_by(|a, b| a.from == b.from && a.to == b.to && a.kind == b.kind);
        edges.shrink_to_fit();
        let mut to = edges.clone();
        to.sort_unstable_by_key(|r| (r.to, r.from, kind_order(r.kind)));
        Self { from: edges, to }
    }

    /// Edges held by only one side, each tagged `true` when it is `self`'s.
    pub fn differences<'a>(&'a self, other: &'a Self) -> Vec<(&'a Reference, bool)> {
        let key = |r: &Reference| (r.from, r.to, kind_order(r.kind));
        let (mut left, mut right) = (self.from.iter().peekable(), other.from.iter().peekable());
        let mut out = Vec::new();
        loop {
            match (left.peek().copied(), right.peek().copied()) {
                (Some(a), Some(b)) => match key(a).cmp(&key(b)) {
                    std::cmp::Ordering::Less => {
                        out.push((a, true));
                        left.next();
                    }
                    std::cmp::Ordering::Greater => {
                        out.push((b, false));
                        right.next();
                    }
                    std::cmp::Ordering::Equal => {
                        if a != b {
                            out.extend([(a, true), (b, false)]);
                        }
                        left.next();
                        right.next();
                    }
                },
                (Some(a), None) => {
                    out.push((a, true));
                    left.next();
                }
                (None, Some(b)) => {
                    out.push((b, false));
                    right.next();
                }
                (None, None) => return out,
            }
        }
    }

    pub fn to(&self, address: u64) -> &[Reference] {
        bucket(&self.to, address, |r| r.to)
    }

    pub fn from(&self, address: u64) -> &[Reference] {
        bucket(&self.from, address, |r| r.from)
    }

    pub fn sources(&self) -> impl Iterator<Item = u64> + '_ {
        let mut previous = None;
        self.from.iter().filter_map(move |edge| {
            if previous == Some(edge.from) {
                None
            } else {
                previous = Some(edge.from);
                Some(edge.from)
            }
        })
    }

    pub fn edges(&self) -> &[Reference] {
        &self.from
    }

    /// The edges, in `from` order, without the `to` index.
    pub fn into_edges(self) -> Vec<Reference> {
        self.from
    }
}

fn bucket(edges: &[Reference], address: u64, key: impl Fn(&Reference) -> u64) -> &[Reference] {
    let first = edges.partition_point(|r| key(r) < address);
    let count = edges[first..].partition_point(|r| key(r) == address);
    &edges[first..first + count]
}

fn kind_order(kind: RefKind) -> u8 {
    match kind {
        RefKind::Call => 0,
        RefKind::Code => 1,
        RefKind::Data => 2,
        RefKind::Read => 3,
        RefKind::Write => 4,
    }
}

#[cfg(test)]
mod tests;
