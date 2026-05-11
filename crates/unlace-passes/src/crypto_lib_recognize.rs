//! Crypto-library API recognition by symbol name.
//!
//! Classifies external symbols against well-known crypto API surface
//! conventions exposed by OpenSSL, libsodium, and mbedTLS. Matching is
//! purely lexical on the imported/exported symbol name — typically what
//! a loader resolves from the import table or what FLIRT/PIE matches
//! against an internalised stub. This is intentionally cheap so it can
//! run on every external function during analysis bring-up; deeper
//! semantic checks (argument shapes, GMP/EVP context layouts, etc.) are
//! delegated to dedicated passes.
//!
//! The kinds are coarse on purpose: a single `OpensslEvp` bucket covers
//! the entire `EVP_*` family because per-algorithm dispatch happens via
//! the EVP context (`EVP_aes_256_gcm()` etc.) rather than the symbol.

/// High-level category of a recognised crypto-library API.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum CryptoApiKind {
    /// OpenSSL EVP envelope (`EVP_*`): generic cipher/digest/PKEY surface.
    OpensslEvp,
    /// OpenSSL legacy AES (`AES_*`): `AES_set_encrypt_key`, `AES_cbc_encrypt`, ...
    OpensslAes,
    /// OpenSSL legacy SHA family (`SHA1_*`, `SHA256_*`, `SHA512_*`, ...).
    OpensslSha,
    /// OpenSSL legacy RSA (`RSA_*`): `RSA_public_encrypt`, `RSA_sign`, ...
    OpensslRsa,
    /// libsodium secret-key authenticated encryption (`crypto_secretbox_*`).
    LibsodiumSecretBox,
    /// libsodium public-key cryptography (`crypto_box_*`).
    LibsodiumPublicKey,
    /// mbedTLS AES (`mbedtls_aes_*`).
    MbedTlsAes,
    /// mbedTLS SHA-256 (`mbedtls_sha256_*`).
    MbedTlsSha,
}

/// Recognise a crypto-library API call by its (demangled) symbol name.
///
/// Returns `None` when the name does not match any supported family.
/// Matching is case-sensitive and prefix-based; the recogniser does not
/// strip platform decoration (leading `_`, `@plt` suffix, GOT slot
/// markers). Callers that need to handle decoration should normalise
/// first.
pub fn recognize_crypto_api(symbol_name: &str) -> Option<CryptoApiKind> {
    // Order matters when prefixes nest (e.g. `crypto_secretbox_` is a
    // proper extension of `crypto_`); check the longer prefix first.
    if symbol_name.starts_with("EVP_") {
        return Some(CryptoApiKind::OpensslEvp);
    }
    if symbol_name.starts_with("AES_") {
        return Some(CryptoApiKind::OpensslAes);
    }
    if symbol_name.starts_with("SHA1_")
        || symbol_name.starts_with("SHA256_")
        || symbol_name.starts_with("SHA512_")
        || symbol_name.starts_with("SHA384_")
        || symbol_name.starts_with("SHA224_")
    {
        return Some(CryptoApiKind::OpensslSha);
    }
    if symbol_name.starts_with("RSA_") {
        return Some(CryptoApiKind::OpensslRsa);
    }
    if symbol_name.starts_with("crypto_secretbox_") {
        return Some(CryptoApiKind::LibsodiumSecretBox);
    }
    if symbol_name.starts_with("crypto_box_") {
        return Some(CryptoApiKind::LibsodiumPublicKey);
    }
    if symbol_name.starts_with("mbedtls_aes_") {
        return Some(CryptoApiKind::MbedTlsAes);
    }
    if symbol_name.starts_with("mbedtls_sha256_") {
        return Some(CryptoApiKind::MbedTlsSha);
    }
    None
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn recognizes_openssl_evp_family() {
        assert_eq!(
            recognize_crypto_api("EVP_EncryptInit_ex"),
            Some(CryptoApiKind::OpensslEvp),
        );
        assert_eq!(
            recognize_crypto_api("EVP_aes_256_gcm"),
            Some(CryptoApiKind::OpensslEvp),
        );
        assert_eq!(
            recognize_crypto_api("EVP_DigestUpdate"),
            Some(CryptoApiKind::OpensslEvp),
        );
    }

    #[test]
    fn recognizes_openssl_aes_and_rsa() {
        assert_eq!(
            recognize_crypto_api("AES_set_encrypt_key"),
            Some(CryptoApiKind::OpensslAes),
        );
        assert_eq!(
            recognize_crypto_api("AES_cbc_encrypt"),
            Some(CryptoApiKind::OpensslAes),
        );
        assert_eq!(
            recognize_crypto_api("RSA_public_encrypt"),
            Some(CryptoApiKind::OpensslRsa),
        );
        assert_eq!(
            recognize_crypto_api("RSA_sign"),
            Some(CryptoApiKind::OpensslRsa),
        );
    }

    #[test]
    fn recognizes_openssl_sha_variants() {
        assert_eq!(
            recognize_crypto_api("SHA1_Init"),
            Some(CryptoApiKind::OpensslSha),
        );
        assert_eq!(
            recognize_crypto_api("SHA256_Update"),
            Some(CryptoApiKind::OpensslSha),
        );
        assert_eq!(
            recognize_crypto_api("SHA512_Final"),
            Some(CryptoApiKind::OpensslSha),
        );
    }

    #[test]
    fn recognizes_libsodium_secret_and_public() {
        assert_eq!(
            recognize_crypto_api("crypto_secretbox_easy"),
            Some(CryptoApiKind::LibsodiumSecretBox),
        );
        assert_eq!(
            recognize_crypto_api("crypto_secretbox_open_easy"),
            Some(CryptoApiKind::LibsodiumSecretBox),
        );
        assert_eq!(
            recognize_crypto_api("crypto_box_keypair"),
            Some(CryptoApiKind::LibsodiumPublicKey),
        );
        assert_eq!(
            recognize_crypto_api("crypto_box_easy"),
            Some(CryptoApiKind::LibsodiumPublicKey),
        );
    }

    #[test]
    fn recognizes_mbedtls_families() {
        assert_eq!(
            recognize_crypto_api("mbedtls_aes_init"),
            Some(CryptoApiKind::MbedTlsAes),
        );
        assert_eq!(
            recognize_crypto_api("mbedtls_aes_crypt_cbc"),
            Some(CryptoApiKind::MbedTlsAes),
        );
        assert_eq!(
            recognize_crypto_api("mbedtls_sha256_starts"),
            Some(CryptoApiKind::MbedTlsSha),
        );
        assert_eq!(
            recognize_crypto_api("mbedtls_sha256_update"),
            Some(CryptoApiKind::MbedTlsSha),
        );
    }

    #[test]
    fn rejects_unrelated_and_near_miss_symbols() {
        // Empty and obviously unrelated.
        assert_eq!(recognize_crypto_api(""), None);
        assert_eq!(recognize_crypto_api("memcpy"), None);
        assert_eq!(recognize_crypto_api("printf"), None);

        // Lowercase / case mismatch (OpenSSL legacy APIs are uppercase).
        assert_eq!(recognize_crypto_api("evp_EncryptInit_ex"), None);
        assert_eq!(recognize_crypto_api("aes_set_encrypt_key"), None);

        // Wrong SHA width — SHA3 isn't claimed by the legacy SHA bucket.
        assert_eq!(recognize_crypto_api("SHA3_256_Init"), None);

        // Substring match must not fire (prefix-only).
        assert_eq!(recognize_crypto_api("my_EVP_wrapper"), None);
        assert_eq!(recognize_crypto_api("xcrypto_secretbox_easy"), None);

        // libsodium `crypto_` prefix that isn't one of the supported
        // families must not be misclassified.
        assert_eq!(recognize_crypto_api("crypto_sign_keypair"), None);
        assert_eq!(recognize_crypto_api("crypto_hash_sha256"), None);
    }
}
