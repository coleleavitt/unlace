use super::*;

#[test]
fn branch_targets_decode() {
    // bl #-0x10 at 0x1000; b #+8 at 0x2000.
    assert_eq!(branch26(0x1000, 0x97ff_fffc), 0x0ff0);
    assert_eq!(branch26(0x2000, 0x1400_0002), 0x2008);
    // call rel32 -0x20 at 0x3000.
    let call = [0xe8, 0xe0, 0xff, 0xff, 0xff];
    assert_eq!(rel32(0x3000, &call, 0), Some(0x2fe5));
}

fn member_of(symbol: &str) -> Option<(SelfIs, bool)> {
    let tree = demangle_swift_tree(symbol)?;
    let [entity] = tree.children.as_slice() else {
        return None;
    };
    member(entity).map(|(_, is, throws)| (is, throws))
}

#[test]
fn property_observers_take_self() {
    assert!(member_of("$s1m1KC1vSivw") == Some((SelfIs::Instance, false)));
    assert!(member_of("$s1m1KC1vSivW") == Some((SelfIs::Instance, false)));
    assert!(member_of("$s1m1SV1wSivW") == Some((SelfIs::Instance, false)));
    assert!(member_of("$s1m1gSivW").is_none());
}

#[test]
fn async_imports_are_named_both_ways() {
    let names = [
        "$sScTss5NeverORszABRs_rlE5yieldyyYaFZ",
        "$sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ",
        "$sSS9hasPrefixySbSSF",
        "swift_task_alloc",
    ];
    let found = async_imports(names.into_iter());
    let get = |n: &str| {
        found
            .iter()
            .find(|(name, _)| name == n)
            .map(|(_, throws)| *throws)
    };
    assert_eq!(get(names[0]), Some(false));
    assert_eq!(get(names[1]), Some(true));
    assert_eq!(get("Swift.Task.yield()"), Some(false));
    assert_eq!(get(names[2]), None);
    assert_eq!(found.len(), 4);
}

#[test]
fn imported_requirement_thunks_that_throw_bind() {
    let thunk =
        "$ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj";
    assert_eq!(
        throwing_import(thunk),
        Some(Imported::Member { maybe_self: false })
    );
    assert_eq!(
        throwing_import(
            "$ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj"
        ),
        None
    );
}
