use super::matches;

#[test]
fn matched_registers_own_the_native_prefix() {
    for reg in ["g1", "g3", "o0"] {
        assert!(matches(
            &format!("%hi(0xffffdc00),{reg}"),
            &format!("{reg},0x388,{reg}"),
            &format!("sp,{reg},sp")
        ));
    }
    for (high, low) in [
        ("0xffffdc00", "0x2b8"),
        ("0xffffdc00", "0x288"),
        ("0xffffdc00", "0x388"),
        ("0xffffdc00", "0x250"),
        ("0xffffbc00", "0x320"),
        ("0xffffec00", "0x3f8"),
    ] {
        assert!(matches(
            &format!("%hi({high}),g1"),
            &format!("g1,{low},g1"),
            "sp,g1,sp"
        ));
    }
}

#[test]
fn unrelated_constants_and_mismatched_operands_are_not_prefixes() {
    for (sethi, or, save) in [
        ("%hi(0xffffdc00),g1", "g1,0x388,g2", "sp,g1,sp"),
        ("%hi(0xffffdc00),g1", "g2,0x388,g1", "sp,g1,sp"),
        ("%hi(0xffffdc00),g1", "g1,0x388,g1", "sp,g2,sp"),
        ("%hi(0xffffdc00),g1", "g1,0x388,g1", "sp,0x1,sp"),
        ("%hi(0x2000),g1", "g1,0x388,g1", "sp,g1,sp"),
        ("%hi(0xfffffc00),g1", "g1,0x388,g1", "sp,g1,sp"),
        ("%hi(0xffffdc00),g1", "g1,0x788,g1", "sp,g1,sp"),
        ("%hi(0xfffff000),g1", "g1,0x0,g1", "sp,g1,sp"),
        ("%hi(0xffffdc00),g1", "g1,0x400,g1", "sp,g1,sp"),
        ("%hi(0xffffdc00),g1", "g1,0x389,g1", "sp,g1,sp"),
        ("%hi(0xffffdc00),g0", "g0,0x388,g0", "sp,g0,sp"),
        ("%hi(0xffffdc00),sp", "sp,0x388,sp", "sp,sp,sp"),
    ] {
        assert!(!matches(sethi, or, save), "{sethi}; {or}; {save}");
    }
}
