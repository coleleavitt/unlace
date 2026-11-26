use super::*;

/// root -> "_f" (offset 0x100), root -> "_re" (re-export from ordinal 2 as
/// "_impl"), root -> "_a" (absolute 0x40).
fn sample() -> Vec<u8> {
    let mut t = vec![0u8, 3];
    let edges: [(&[u8], usize); 3] = [(b"_f", 0), (b"_re", 1), (b"_a", 2)];
    let header_len = 2 + edges.iter().map(|(e, _)| e.len() + 1 + 1).sum::<usize>();
    let nodes: [Vec<u8>; 3] = [
        vec![3, 0x00, 0x80, 0x02, 0],
        [vec![8, 0x08, 0x02], b"_impl\0".to_vec(), vec![0]].concat(),
        vec![2, 0x02, 0x40, 0],
    ];
    let mut offsets = Vec::new();
    let mut at = header_len;
    for n in &nodes {
        offsets.push(at);
        at += n.len();
    }
    for (edge, i) in edges {
        t.extend_from_slice(edge);
        t.push(0);
        t.push(offsets[i] as u8);
    }
    for n in nodes {
        t.extend(n);
    }
    t
}

#[test]
fn regular_reexport_and_absolute_exports_decode() {
    let mut exports = parse_export_trie(&sample());
    exports.sort_by(|a, b| a.name.cmp(&b.name));
    assert_eq!(
        exports
            .iter()
            .map(|e| (e.name.as_str(), e.target.clone()))
            .collect::<Vec<_>>(),
        [
            ("_a", ExportTarget::Absolute(0x40)),
            ("_f", ExportTarget::Offset(0x100)),
            (
                "_re",
                ExportTarget::Reexport {
                    ordinal: 2,
                    name: Some("_impl".into())
                }
            ),
        ]
    );
}

#[test]
fn a_cyclic_trie_terminates() {
    let trie = [0u8, 1, b'a', 0, 0];
    assert!(parse_export_trie(&trie).is_empty());
    assert!(parse_export_trie(&[]).is_empty());
}
