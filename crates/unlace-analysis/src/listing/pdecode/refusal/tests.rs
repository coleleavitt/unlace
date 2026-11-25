use super::Refusal;

#[test]
fn public_order_and_spellings_stay_compatible() {
    assert_eq!(
        Refusal::ALL.map(Refusal::reason),
        [
            "no threads on this target",
            "no rebuildable decode engine",
            "language commits context",
            "language has delay slots",
            "loader cannot share its bytes",
            "per-address decode context",
            "no seeds",
            "executable range not fully mapped",
            "executable image too small",
            "engine rebuild failed",
            "rebuilt engine disagrees",
            "thread spawn failed",
            "lane fault",
            "unmapped fetch",
            "merge collision",
            "round limit",
            "context moved",
        ]
    );
}
