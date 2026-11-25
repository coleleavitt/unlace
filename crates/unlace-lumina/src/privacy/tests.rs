use super::*;

const EMPTY_SHA256: &str = "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855";

#[test]
fn default_policy_denies_everything() {
    let policy = PrivacyPolicy::default();
    assert!(!is_sharing_allowed(&policy, EMPTY_SHA256));
    assert!(policy.anonymize);
}

#[test]
fn allowlist_needs_the_global_switch() {
    let mut policy = PrivacyPolicy {
        allowed_binaries: vec![EMPTY_SHA256.into()],
        ..PrivacyPolicy::default()
    };
    assert!(!is_sharing_allowed(&policy, EMPTY_SHA256));
    policy.sharing_enabled = true;
    assert!(is_sharing_allowed(&policy, EMPTY_SHA256));
    assert!(!is_sharing_allowed(&policy, "00"));
}

#[test]
fn digest_match_ignores_case() {
    let policy = PrivacyPolicy {
        sharing_enabled: true,
        allowed_binaries: vec![EMPTY_SHA256.to_ascii_uppercase()],
        anonymize: true,
    };
    assert!(is_sharing_allowed(&policy, EMPTY_SHA256));
}

#[test]
fn parses_a_policy_file() {
    let text = format!(
        "# shared corpus\nsharing on\nanonymize off  # keep names\nallow {}\n",
        EMPTY_SHA256.to_ascii_uppercase()
    );
    let policy = PrivacyPolicy::parse(&text).expect("parse");
    assert!(policy.sharing_enabled);
    assert!(!policy.anonymize);
    assert!(is_sharing_allowed(&policy, EMPTY_SHA256));
}

#[test]
fn empty_file_is_the_default_policy() {
    assert_eq!(
        PrivacyPolicy::parse("").expect("parse"),
        PrivacyPolicy::default()
    );
}

#[test]
fn rejects_unknown_or_malformed_lines() {
    assert!(PrivacyPolicy::parse("share on").is_err());
    assert!(PrivacyPolicy::parse("sharing maybe").is_err());
    assert!(PrivacyPolicy::parse("allow abc123").is_err());
    assert!(PrivacyPolicy::parse("sharing on extra").is_err());
}

#[test]
fn sha256_of_empty_input() {
    assert_eq!(binary_sha256(b""), EMPTY_SHA256);
}
