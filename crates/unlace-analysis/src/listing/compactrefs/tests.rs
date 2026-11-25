use super::*;
use std::collections::BTreeMap;

#[test]
fn queries_match_bucketed_references_including_duplicates_and_extreme_addresses() {
    let mut incoming: BTreeMap<u64, Vec<Reference>> = BTreeMap::new();
    let mut outgoing: BTreeMap<u64, Vec<Reference>> = BTreeMap::new();
    let mut edges = Vec::new();
    let addresses = [0, 1, 4, 0x1000, u64::MAX];
    for (i, &from) in addresses.iter().rev().enumerate() {
        for &to in addresses.iter().rev() {
            for kind in [
                RefKind::Write,
                RefKind::Call,
                RefKind::Read,
                RefKind::Code,
                RefKind::Data,
            ] {
                for op_index in [Some(i as u8), None] {
                    let edge = Reference {
                        from,
                        to,
                        kind,
                        op_index,
                    };
                    incoming.entry(to).or_default().push(edge.clone());
                    outgoing.entry(from).or_default().push(edge.clone());
                    edges.push(edge);
                }
            }
        }
    }
    for bucket in incoming.values_mut() {
        bucket.sort_by_key(|r| (r.from, kind_order(r.kind)));
        bucket.dedup_by(|a, b| a.from == b.from && a.to == b.to && a.kind == b.kind);
    }
    for bucket in outgoing.values_mut() {
        bucket.sort_by_key(|r| (r.to, kind_order(r.kind)));
        bucket.dedup_by(|a, b| a.from == b.from && a.to == b.to && a.kind == b.kind);
    }
    let index = ReferenceIndex::new(edges);
    for address in addresses.into_iter().chain([2, 0xfff, u64::MAX - 1]) {
        assert_eq!(
            index.to(address),
            incoming.get(&address).map(Vec::as_slice).unwrap_or(&[])
        );
        assert_eq!(
            index.from(address),
            outgoing.get(&address).map(Vec::as_slice).unwrap_or(&[])
        );
    }
    assert_eq!(
        index
            .from(0)
            .iter()
            .take(5)
            .map(|r| r.kind)
            .collect::<Vec<_>>(),
        [
            RefKind::Call,
            RefKind::Code,
            RefKind::Data,
            RefKind::Read,
            RefKind::Write
        ]
    );
    assert_eq!(index.sources().collect::<Vec<_>>(), addresses);
    assert!(ReferenceIndex::default().to(u64::MAX).is_empty());
    assert!(ReferenceIndex::default().sources().next().is_none());
}

#[test]
fn a_long_fallthrough_run_uses_two_contiguous_buffers() {
    let count = 16_384;
    let edges = (0..count)
        .map(|from| Reference {
            from,
            to: from + 1,
            kind: RefKind::Code,
            op_index: None,
        })
        .collect();
    let index = ReferenceIndex::new(edges);
    assert_eq!(
        index.from.capacity() + index.to.capacity(),
        2 * count as usize
    );
    assert_eq!(index.sources().count(), count as usize);
    for address in [0, count / 2, count - 1] {
        assert_eq!(index.from(address)[0].to, address + 1);
        assert_eq!(index.to(address + 1)[0].from, address);
    }
    assert!(index.to(0).is_empty());
    assert!(index.from(count).is_empty());
}
