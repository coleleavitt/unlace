//! Privacy-respecting Lumina annotation client (t434).
//!
//! Opt-in per-binary annotation sharing. Never auto-sends data.
//! The client only uploads annotations when explicitly requested and
//! supports an allowlist of binary hashes that may be shared.

use sha2::{Digest, Sha256};

/// Privacy policy configuration.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PrivacyPolicy {
    /// Whether sharing is globally enabled.
    pub sharing_enabled: bool,
    /// Set of binary SHA-256 hashes (hex) that are allowed to be shared.
    pub allowed_binaries: Vec<String>,
    /// Whether to strip author identity from shared annotations.
    pub anonymize: bool,
}

impl Default for PrivacyPolicy {
    fn default() -> Self {
        Self {
            sharing_enabled: false,
            allowed_binaries: Vec::new(),
            anonymize: true,
        }
    }
}

/// Check whether a binary is allowed to share annotations.
pub fn is_sharing_allowed(policy: &PrivacyPolicy, binary_hash: &str) -> bool {
    if !policy.sharing_enabled {
        return false;
    }
    policy.allowed_binaries.iter().any(|h| h == binary_hash)
}

/// Compute the SHA-256 hash of binary content (for allowlist matching).
pub fn hash_binary(content: &[u8]) -> String {
    let mut hasher = Sha256::new();
    hasher.update(content);
    let result = hasher.finalize();
    hex::encode(result)
}

/// Sanitize an annotation for sharing based on privacy policy.
pub fn sanitize_for_sharing(author: &str, policy: &PrivacyPolicy) -> String {
    if policy.anonymize {
        "anonymous".to_string()
    } else {
        author.to_string()
    }
}

mod hex {
    pub fn encode(bytes: impl AsRef<[u8]>) -> String {
        bytes.as_ref().iter().map(|b| format!("{:02x}", b)).collect()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn default_policy_denies_all() {
        let policy = PrivacyPolicy::default();
        assert!(!is_sharing_allowed(&policy, "abc123"));
    }

    #[test]
    fn explicit_allowlist() {
        let policy = PrivacyPolicy {
            sharing_enabled: true,
            allowed_binaries: vec!["abc123".into()],
            anonymize: true,
        };
        assert!(is_sharing_allowed(&policy, "abc123"));
        assert!(!is_sharing_allowed(&policy, "def456"));
    }

    #[test]
    fn disabled_overrides_allowlist() {
        let policy = PrivacyPolicy {
            sharing_enabled: false,
            allowed_binaries: vec!["abc123".into()],
            anonymize: true,
        };
        assert!(!is_sharing_allowed(&policy, "abc123"));
    }

    #[test]
    fn hash_deterministic() {
        let h1 = hash_binary(b"hello world");
        let h2 = hash_binary(b"hello world");
        assert_eq!(h1, h2);
        assert_eq!(h1.len(), 64); // SHA-256 = 32 bytes = 64 hex
    }

    #[test]
    fn anonymize_author() {
        let policy = PrivacyPolicy { anonymize: true, ..Default::default() };
        assert_eq!(sanitize_for_sharing("cole", &policy), "anonymous");

        let policy2 = PrivacyPolicy { anonymize: false, ..Default::default() };
        assert_eq!(sanitize_for_sharing("cole", &policy2), "cole");
    }
}
