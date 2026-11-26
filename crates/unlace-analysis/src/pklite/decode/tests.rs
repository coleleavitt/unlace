use super::*;

#[test]
fn every_code_table_is_a_complete_prefix_code() {
    for table in [
        &LENGTHS_LARGE[..],
        &LENGTHS_SMALL[..],
        &LENGTHS_V120_LARGE[..],
        &LENGTHS_V120_SMALL[..],
        &OFFSETS[..],
        &OFFSETS_V120[..],
    ] {
        let kraft: u64 = table.iter().map(|e| 1u64 << (12 - (e >> 12))).sum();
        assert_eq!(kraft, 1 << 12, "{table:x?}");
        let tree = Tree::new(table);
        assert!(
            tree.nodes.iter().all(|n| n[0] != 0 && n[1] != 0),
            "{table:x?}"
        );
    }
}
