use super::*;
use crate::addrtable::AddrTable;

fn table(addr: u64, elements: Vec<u64>) -> AddrTable {
    AddrTable {
        addr,
        len: elements.len(),
        elements,
        read_only: true,
    }
}

#[test]
fn large_inventories_require_distinct_table_references() {
    let mut tables = vec![table(0, vec![0x1000, 0x1000])];
    tables.extend(
        (0..MAX_SINGLE_REFERENCE_CANDIDATES).map(|i| table(i as u64 + 1, vec![0x2000 + i as u64])),
    );
    assert!(!pointer_candidates(tables.clone()).contains(&0x1000));
    tables.push(table(0x1000, vec![0x1000]));
    assert!(pointer_candidates(tables).contains(&0x1000));
}

#[test]
fn pointer_validation_work_has_a_global_cap() {
    let mut tables = Vec::new();
    for i in 0..=MAX_VALIDATED_POINTER_CANDIDATES {
        let target = 0x1000 + i as u64;
        tables.push(table(i as u64 * 2, vec![target]));
        tables.push(table(i as u64 * 2 + 1, vec![target]));
    }
    let candidates = pointer_candidates(tables);
    assert_eq!(candidates.len(), MAX_VALIDATED_POINTER_CANDIDATES);
    assert_eq!(candidates[0], 0x1000);
}

#[test]
fn oversized_tables_are_ignored() {
    let elements = (0..=MAX_POINTER_TABLE_ENTRIES)
        .map(|i| 0x1000 + i as u64)
        .collect();
    assert!(pointer_candidates(vec![table(0, elements)]).is_empty());
}
