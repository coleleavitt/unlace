# Signed Releases

Infrastructure for producing reproducible, cryptographically signed release
artifacts.

## Overview

Every tagged release (`v*`) triggers a CI workflow that:

1. Builds release binaries for all supported targets
2. Generates SHA-256 checksums
3. Signs checksums with a project GPG key (or sigstore/cosign)
4. Publishes signed artifacts to GitHub Releases

## Verification

Users verify downloads with:

```bash
# Download the release and checksums
curl -LO https://github.com/coleleavitt/unlace/releases/download/v0.1.0/unlace-v0.1.0-linux-x86_64.tar.gz
curl -LO https://github.com/coleleavitt/unlace/releases/download/v0.1.0/SHA256SUMS
curl -LO https://github.com/coleleavitt/unlace/releases/download/v0.1.0/SHA256SUMS.sig

# Verify signature
gpg --verify SHA256SUMS.sig SHA256SUMS

# Verify checksum
sha256sum -c SHA256SUMS
```

Or with cosign (keyless, Sigstore):

```bash
cosign verify-blob \
  --certificate-identity="https://github.com/coleleavitt/unlace/.github/workflows/release.yml@refs/tags/v0.1.0" \
  --certificate-oidc-issuer="https://token.actions.githubusercontent.com" \
  --signature SHA256SUMS.sig \
  SHA256SUMS
```

## Supported Targets

| Target | Triple | Notes |
|--------|--------|-------|
| Linux x86-64 | `x86_64-unknown-linux-gnu` | glibc 2.31+ |
| Linux AArch64 | `aarch64-unknown-linux-gnu` | Cross-compiled |
| macOS x86-64 | `x86_64-apple-darwin` | macOS 12+ |
| macOS AArch64 | `aarch64-apple-darwin` | Apple Silicon |
| Windows x86-64 | `x86_64-pc-windows-msvc` | Windows 10+ |

## Reproducibility

Builds use:
- Pinned Rust toolchain (via `rust-toolchain.toml`)
- `--locked` flag (Cargo.lock committed)
- LTO enabled (`lto = "thin"` in release profile)
- Deterministic build environment (fixed container image)

## Key Management

The release signing key is stored as a GitHub Actions secret
(`RELEASE_SIGNING_KEY`). The public key is published at:
- `docs/release-signing-key.asc`
- Project README
- Key servers (keys.openpgp.org)
