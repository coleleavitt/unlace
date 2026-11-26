//! Sharing policy for `unlace lumina push`: a sharing switch plus an allowlist of binary SHA-256
//! digests, and an anonymised client identity when the policy asks for it. Default-deny: a policy
//! that does not say `sharing on` and name the binary refuses the push. The CLI applies it only when
//! `--share-policy FILE` is given, so a push without the flag is unchanged.
//!
//! File format, one directive per line, `#` starts a comment:
//!   sharing on|off      (default off)
//!   anonymize on|off    (default on)
//!   allow <64 hex digits of the input's SHA-256>

use sha2::{Digest, Sha256};

use crate::hash::hex;

/// The hostname sent in place of the client's own when the policy anonymises.
pub const ANONYMOUS: &str = "anonymous";

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PrivacyPolicy {
    /// Whether sharing is globally enabled.
    pub sharing_enabled: bool,
    /// Lowercase SHA-256 digests (hex) of binaries that may be pushed.
    pub allowed_binaries: Vec<String>,
    /// Whether the client identity sent with a push is replaced by [`ANONYMOUS`].
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

impl PrivacyPolicy {
    /// Parse a policy file; an unknown directive or a malformed digest is an error, not ignored.
    pub fn parse(text: &str) -> Result<Self, String> {
        let mut policy = Self::default();
        for (n, raw) in text.lines().enumerate() {
            let line = raw.split('#').next().unwrap_or("").trim();
            if line.is_empty() {
                continue;
            }
            let mut words = line.split_whitespace();
            let key = words.next().unwrap_or("");
            let value = words.next();
            if words.next().is_some() {
                return Err(format!("line {}: too many fields in {line:?}", n + 1));
            }
            match (key, value) {
                ("sharing", Some(v)) => {
                    policy.sharing_enabled =
                        parse_switch(v).map_err(|e| format!("line {}: {e}", n + 1))?;
                }
                ("anonymize", Some(v)) => {
                    policy.anonymize =
                        parse_switch(v).map_err(|e| format!("line {}: {e}", n + 1))?;
                }
                ("allow", Some(digest)) => {
                    if digest.len() != 64 || !digest.bytes().all(|b| b.is_ascii_hexdigit()) {
                        return Err(format!(
                            "line {}: allow needs a 64-digit SHA-256, got {digest:?}",
                            n + 1
                        ));
                    }
                    policy.allowed_binaries.push(digest.to_ascii_lowercase());
                }
                _ => return Err(format!("line {}: unknown directive {line:?}", n + 1)),
            }
        }
        Ok(policy)
    }
}

fn parse_switch(value: &str) -> Result<bool, String> {
    match value {
        "on" => Ok(true),
        "off" => Ok(false),
        _ => Err(format!("expected on or off, got {value:?}")),
    }
}

/// Whether `policy` allows pushing a binary whose SHA-256 is `binary_sha256` (lowercase or not).
pub fn is_sharing_allowed(policy: &PrivacyPolicy, binary_sha256: &str) -> bool {
    policy.sharing_enabled
        && policy
            .allowed_binaries
            .iter()
            .any(|h| h.eq_ignore_ascii_case(binary_sha256))
}

/// SHA-256 of a binary's bytes as lowercase hex, the key the allowlist matches.
pub fn binary_sha256(content: &[u8]) -> String {
    hex(Sha256::digest(content).as_slice())
}

#[cfg(test)]
mod tests;
