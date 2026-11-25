use super::*;

#[test]
fn parses_every_value_and_rejects_others() {
    for (tok, mode) in [
        ("on", TypeMergeMode::On),
        ("storage", TypeMergeMode::Storage),
        ("off", TypeMergeMode::Off),
    ] {
        let (m, msg) = OptionTypeMerge.apply(tok).unwrap();
        assert_eq!(m, mode);
        assert_eq!(m.as_str(), tok);
        assert!(msg.ends_with(tok));
    }
    assert!(OptionTypeMerge.apply("bogus").is_err());
}

#[test]
fn shipped_default_is_storage() {
    use crate::optionset::UnlaceOption;
    assert_eq!(TypeMergeMode::shipped(), TypeMergeMode::Storage);
    assert_eq!(TypeMergeMode::unset(), TypeMergeMode::On);
}

#[test]
fn joins_follows_the_mode() {
    let a = Some(vec![(Address::default(), 4)]);
    let b = Some(vec![(Address::default(), 8)]);
    let ab = Some(vec![(Address::default(), 4), (Address::default(), 8)]);
    assert!(TypeMergeMode::On.joins(&None, &None));
    assert!(TypeMergeMode::Storage.joins(&ab, &b));
    assert!(TypeMergeMode::Storage.joins(&a, &ab));
    assert!(!TypeMergeMode::Off.joins(&a, &a));
    assert!(TypeMergeMode::Storage.joins(&a, &a));
    assert!(!TypeMergeMode::Storage.joins(&a, &b));
    assert!(!TypeMergeMode::Storage.joins(&None, &None));
    assert!(!TypeMergeMode::Storage.joins(&a, &None));
}
