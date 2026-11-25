use super::*;

#[test]
fn competing_signature_spellings_refuse_all_entries_in_either_order() {
    for (first, second) in [
        ("scale_b", "scale_b"),
        ("lib::scale_b", "_ZN3lib7scale_bEv"),
        ("_ZN3lib7scale_bEv", "_ZN3lib7scale_bEi"),
    ] {
        let mut matches = [(0x100, first), (0x200, second), (0x300, "wrap_a")];
        let contested = HashSet::from([0x100, 0x200]);
        assert_eq!(contested_addresses(matches), contested);
        matches.reverse();
        assert_eq!(contested_addresses(matches), contested);
    }
}

#[test]
fn repeated_keys_for_one_address_are_not_cross_address_conflicts() {
    assert!(
        contested_addresses([(0x100, "lib::scale_b"), (0x100, "_ZN3lib7scale_bEv")]).is_empty()
    );
}
