use super::*;

#[test]
fn only_a_bare_absolute_bracket_is_a_literal_reference() {
    assert_eq!(absolute_literal_target("r0,[0x80001c8]"), Some(0x80001c8));
    assert_eq!(absolute_literal_target("r3,[r7,#0x4]"), None);
    assert_eq!(absolute_literal_target("r3,[r3,#0x0]"), None);
    assert_eq!(
        absolute_literal_target("r0,r1,[0x8000200]"),
        Some(0x8000200)
    );
    assert_eq!(absolute_literal_target("r0,[0x]"), None);
}

/// The `[pc,#imm]` form, and the two register-indexed `[pc` shapes that print
/// the same prefix and must NOT be read as literal references — `tbb`/`tbh`
/// jump tables, which would otherwise be inferred as pools.
#[test]
fn pcrel_reads_the_immediate_form_only() {
    // Thumb: base is the word-aligned PC (addr + 4).
    assert_eq!(
        pcrel_literal_target(0x8000102, "d0,[pc,#0x18]", || Some(4)),
        Some(0x800011c)
    );
    // A32: addr + 8, already word-aligned.
    assert_eq!(
        pcrel_literal_target(0x60800100, "d0,[pc,#0x20]", || Some(8)),
        Some(0x60800128)
    );
    assert_eq!(
        pcrel_literal_target(0x8000100, "r0,r1,[pc,#-0x10]", || Some(4)),
        Some(0x80000f4)
    );
    assert_eq!(pcrel_literal_target(0x8000100, "[pc,r3]", || Some(4)), None);
    assert_eq!(
        pcrel_literal_target(0x8000100, "[pc,r3,lsl #1]", || Some(4)),
        None
    );
    // Post-indexed and write-back forms (a Thumb body decoded as A32 spells
    // `ldrmi r4,[pc],-r2,lsl #0xd`) read no fixed literal.
    assert_eq!(
        pcrel_literal_target(0x52ac0, "r4,[pc],-r2,lsl #0xd", || Some(8)),
        None
    );
    assert_eq!(
        pcrel_literal_target(0x8000100, "r0,[pc],#0x4", || Some(4)),
        None
    );
    assert_eq!(
        pcrel_literal_target(0x8000100, "r0,[pc,#0x4]!", || Some(4)),
        None
    );
    assert_eq!(absolute_literal_target("r0,[0x8000200],#0x4"), None);
    // Off ARM there is no decode mode, so the form is disabled outright.
    assert_eq!(
        pcrel_literal_target(0x8000100, "d0,[pc,#0x18]", || None),
        None
    );
}

/// A run breaks at the first unreferenced word — no bridging (measured: any
/// bridging swallows short real functions).
#[test]
fn runs_are_exactly_adjacent() {
    let words: BTreeSet<u64> = [0x1000, 0x1004, 0x1008, 0x1010, 0x1014]
        .into_iter()
        .collect();
    assert_eq!(
        runs(&words),
        vec![
            Pool {
                lo: 0x1000,
                hi: 0x100c
            },
            Pool {
                lo: 0x1010,
                hi: 0x1018
            }
        ]
    );
}

/// The additive gate reads the return class, and tolerates the two bytes of
/// Thumb alignment padding between a `bx lr` and a word-aligned pool.
#[test]
fn follows_return_wants_a_return_class_terminal() {
    let mut ends = CodeEnds::new();
    ends.insert(0x1000, true); // a `bx lr` ends here
    ends.insert(0x2000, false); // an unconditional `b` over an intra-function pool
    assert!(follows_return(&ends, 0x1000));
    assert!(
        follows_return(&ends, 0x1002),
        "2 bytes of Thumb alignment padding"
    );
    assert!(
        !follows_return(&ends, 0x2000),
        "a `b` over the pool is the split shape"
    );
    assert!(!follows_return(&ends, 0x3000));
}
