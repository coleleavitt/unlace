# Chapter 1: Installation

## Building from Source

Unlace is a pure-Rust project with no C dependencies for the core pipeline, so
building is straightforward on any platform with a recent Rust toolchain. Clone
the repository and build in release mode for optimal decompilation performance —
the optimization passes benefit significantly from LTO and single-codegen-unit
compilation that the release profile enables.

```bash
$ git clone https://github.com/coleleavitt/unlace.git
$ cd unlace
$ cargo build --release
```

The binary lands at `target/release/unlace`. You can copy it anywhere on your
`PATH`, or use `cargo install --path crates/unlace-cli` for a more conventional
install. Build times are approximately 2–3 minutes on a modern 8-core machine;
incremental rebuilds during development take under 10 seconds thanks to the
workspace's careful crate splitting.

## Pre-built Binaries and Signature Verification

Every tagged release publishes pre-built binaries for five targets:
`x86_64-unknown-linux-gnu`, `aarch64-unknown-linux-gnu`,
`x86_64-apple-darwin`, `aarch64-apple-darwin`, and `x86_64-pc-windows-msvc`.
Each release includes a `SHA256SUMS` file and a corresponding `.sig` detached
signature. Always verify downloads before use — supply-chain attacks against
reverse-engineering tools are high-value targets.

```bash
$ curl -LO https://github.com/coleleavitt/unlace/releases/latest/download/unlace-linux-x86_64.tar.gz
$ curl -LO https://github.com/coleleavitt/unlace/releases/latest/download/SHA256SUMS
$ curl -LO https://github.com/coleleavitt/unlace/releases/latest/download/SHA256SUMS.minisig
$ minisign -Vm SHA256SUMS -p docs/release-signing-key.pub
$ sha256sum -c SHA256SUMS --ignore-missing
```

## Platform-specific Notes

On **macOS**, the unsigned binary may trigger Gatekeeper; run
`xattr -d com.apple.quarantine ./unlace` after extracting. On **Windows**,
ensure the Visual C++ Redistributable 2022 is installed — the PE loader uses
`DbgHelp.dll` for PDB parsing when available. On **Linux**, the only runtime
dependency is glibc ≥ 2.31; musl builds are planned but not yet tested against
the full decompilation pipeline due to differences in `dlopen` semantics that
affect plugin loading.

After installation, verify everything works:

```bash
$ unlace --version
unlace 0.1.0

$ unlace decompile --help
```

→ Next: [Your First Binary](./02-first-binary.md)
