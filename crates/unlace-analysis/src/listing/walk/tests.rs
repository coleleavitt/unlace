use super::*;

#[test]
fn callback_evidence_cap_is_deduplicated_and_order_independent() {
    let count = super::super::callbackentry::MAX_CALLBACK_EVIDENCE + 32;
    let mut forward = CallbackEvidence::default();
    let mut reverse = CallbackEvidence::default();
    for target in 0..count as u64 {
        forward.file(0x2000 + target, 0x1000 + target);
    }
    for target in (0..count as u64).rev() {
        reverse.file(0x3000 + target, 0x1000 + target);
    }
    assert_eq!(
        forward.refs.len(),
        super::super::callbackentry::MAX_CALLBACK_EVIDENCE
    );
    assert_eq!(
        forward.refs.keys().collect::<Vec<_>>(),
        reverse.refs.keys().collect::<Vec<_>>()
    );

    let retained = *forward.refs.keys().next().unwrap();
    forward.file(1, retained);
    assert_eq!(forward.refs[&retained], 1);
}
