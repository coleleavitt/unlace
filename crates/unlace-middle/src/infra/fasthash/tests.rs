use super::*;
use std::hash::{BuildHasher, Hash};

fn hash<T: Hash>(value: &T) -> u64 {
    FxBuildHasher::default().hash_one(value)
}

#[test]
fn hashing_is_fixed_across_builders() {
    assert_eq!(hash(&(3u32, 0x4000u64)), hash(&(3u32, 0x4000u64)));
}

#[test]
fn nearby_keys_spread_over_low_and_high_bits() {
    let hashes: Vec<u64> = (0u64..64).map(|i| hash(&i)).collect();
    let low: std::collections::BTreeSet<u64> = hashes.iter().map(|h| h & 63).collect();
    let high: std::collections::BTreeSet<u64> = hashes.iter().map(|h| h >> 57).collect();
    assert!(low.len() > 32, "low bits collide: {}", low.len());
    assert!(high.len() > 32, "high bits collide: {}", high.len());
}

#[test]
fn byte_strings_of_different_lengths_differ() {
    assert_ne!(hash(&b"ab".to_vec()), hash(&b"ab\0".to_vec()));
}

#[test]
fn a_map_finds_what_it_holds() {
    let mut map: FxHashMap<(i32, u64), &str> = FxHashMap::default();
    for i in 0..1000 {
        map.insert((i, i as u64 * 4), "x");
    }
    assert!((0..1000).all(|i| map.contains_key(&(i, i as u64 * 4))));
    assert!(!map.contains_key(&(5, 4)));
}
