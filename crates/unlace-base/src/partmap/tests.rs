use super::*;

#[test]
fn test_partmap_upstream_doc_example() {
    // Transcribes the `#if 0` main() at the bottom of partmap.hh.
    let mut data: PartMap<i32, u32> = PartMap::new(0);
    *data.default_value_mut() = 0;
    *data.split(&5) = 5;
    *data.split(&2) = 2;
    *data.split(&3) = 4;
    *data.split(&3) = 3; // exact re-split overwrites the same slot
    assert_eq!(*data.get_value(&6), 5);
    assert_eq!(*data.get_value(&8), 5);
    assert_eq!(*data.get_value(&4), 3);
    assert_eq!(*data.get_value(&1), 0);
    // iter = data.begin(3); walk to end
    let walked: Vec<u32> = data.iter_from(&3).map(|(_, v)| *v).collect();
    assert_eq!(walked, vec![3, 5]);
}

#[test]
fn test_partmap_get_value_default_when_empty() {
    let mut pm: PartMap<u64, String> = PartMap::new("dflt".to_string());
    assert!(pm.empty());
    assert_eq!(pm.get_value(&0), "dflt");
    assert_eq!(pm.get_value(&u64::MAX), "dflt");
    // non-const getValue can hand back the default value object itself
    pm.get_value_mut(&42).push('!');
    assert_eq!(pm.default_value(), "dflt!");
}

#[test]
fn test_partmap_split_copies_previous_value() {
    let mut pm: PartMap<u64, u32> = PartMap::new(7);
    *pm.split(&10) = 100;
    // split point after 10 copies the value of the partition it lands in
    assert_eq!(*pm.split(&20), 100);
    // split point before the first split copies defaultvalue
    assert_eq!(*pm.split(&5), 7);
    // exact match returns the existing object, does not reset it
    *pm.split(&20) = 200;
    assert_eq!(*pm.split(&20), 200);
    assert_eq!(*pm.get_value(&25), 200);
    assert_eq!(*pm.get_value(&12), 100);
    assert_eq!(*pm.get_value(&7), 7);
    assert_eq!(*pm.get_value(&0), 7);
    assert_eq!(pm.iter().count(), 3);
}

#[test]
fn test_partmap_clear_range() {
    let mut pm: PartMap<u64, u32> = PartMap::new(0);
    *pm.split(&10) = 1;
    *pm.split(&20) = 2;
    *pm.split(&30) = 3;
    *pm.split(&40) = 4;
    // Clearing [10,40) keeps boundary splits at 10 and 40, removes 20/30,
    // and the left boundary's value covers the whole range.
    let v = pm.clear_range(&10, &40);
    assert_eq!(*v, 1);
    assert_eq!(*pm.get_value(&25), 1);
    assert_eq!(*pm.get_value(&39), 1);
    assert_eq!(*pm.get_value(&40), 4);
    let keys: Vec<u64> = pm.iter().map(|(k, _)| *k).collect();
    assert_eq!(keys, vec![10, 40]);
    // Degenerate range: boundary split introduced, nothing erased.
    let mut pm2: PartMap<u64, u32> = PartMap::new(9);
    *pm2.clear_range(&5, &5) = 55;
    assert_eq!(*pm2.get_value(&5), 55);
    assert_eq!(*pm2.get_value(&4), 9);
}

#[test]
fn test_partmap_bounds_valid_codes() {
    let mut pm: PartMap<u64, u32> = PartMap::new(0);
    // empty: neither bound
    let (v, before, after, valid) = pm.bounds(&50);
    assert_eq!((*v, before, after, valid), (0, None, None, 3));
    *pm.split(&10) = 1;
    *pm.split(&20) = 2;
    // before the first split point: no lower bound, after = first split
    let (v, before, after, valid) = pm.bounds(&5);
    assert_eq!(
        (*v, before.copied(), after.copied(), valid),
        (0, None, Some(10), 1)
    );
    // fully bounded
    let (v, before, after, valid) = pm.bounds(&15);
    assert_eq!(
        (*v, before.copied(), after.copied(), valid),
        (1, Some(10), Some(20), 0)
    );
    // past the last split point: no upper bound
    let (v, before, after, valid) = pm.bounds(&25);
    assert_eq!(
        (*v, before.copied(), after.copied(), valid),
        (2, Some(20), None, 2)
    );
    // a point sitting exactly on a split belongs to the range it starts
    let (v, before, after, valid) = pm.bounds(&10);
    assert_eq!(
        (*v, before.copied(), after.copied(), valid),
        (1, Some(10), Some(20), 0)
    );
}

#[test]
fn test_partmap_boundaries_at_u64_max() {
    let mut pm: PartMap<u64, u32> = PartMap::new(1);
    *pm.split(&u64::MAX) = 99;
    *pm.split(&0) = 5;
    assert_eq!(*pm.get_value(&u64::MAX), 99);
    assert_eq!(*pm.get_value(&(u64::MAX - 1)), 5);
    assert_eq!(*pm.get_value(&0), 5);
    let (v, before, after, valid) = pm.bounds(&u64::MAX);
    assert_eq!(
        (*v, before.copied(), after.copied(), valid),
        (99, Some(u64::MAX), None, 2)
    );
    let cleared = pm.clear_range(&0, &u64::MAX);
    assert_eq!(*cleared, 5);
    let keys: Vec<u64> = pm.iter().map(|(k, _)| *k).collect();
    assert_eq!(keys, vec![0, u64::MAX]);
}

#[test]
fn test_partmap_iter_from_is_lower_bound() {
    let mut pm: PartMap<u64, u32> = PartMap::new(0);
    *pm.split(&10) = 1;
    *pm.split(&20) = 2;
    // at-or-after semantics: starting exactly on a split point includes it
    let keys: Vec<u64> = pm.iter_from(&10).map(|(k, _)| *k).collect();
    assert_eq!(keys, vec![10, 20]);
    let keys: Vec<u64> = pm.iter_from(&11).map(|(k, _)| *k).collect();
    assert_eq!(keys, vec![20]);
    let keys: Vec<u64> = pm.iter_from(&21).map(|(k, _)| *k).collect();
    assert!(keys.is_empty());
    // mutable flavor
    for (_, v) in pm.iter_from_mut(&10) {
        *v += 100;
    }
    assert_eq!(*pm.get_value(&15), 101);
    pm.clear();
    assert!(pm.empty());
}
