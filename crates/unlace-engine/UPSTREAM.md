# Upstream

`unlace-engine` is a fork of `ghidra-decompiler` by Jan Bujak (koute), a Rust port of the
Ghidra decompiler (Ghidra 12.2, `Ghidra/Features/Decompiler/src/decompile/cpp`).

- Upstream repository: https://github.com/koute/ghidra-decompiler
- Upstream commit: `268c3a406d8d964bc00ae2ead4d3e1e1373aaa27` (crates.io release 2.1.0)
- Embedded SLEIGH language files: Ghidra commit `d6192cb3f9`
  (https://github.com/NationalSecurityAgency/ghidra)
- License: Apache-2.0 (`LICENSE`), notices in `NOTICE`

## Imported as-is

`src/`, `languages/`, `examples/`, `tests/`, `tools/`, `LICENSE`, `NOTICE`, `README.md` (upstream
part), `rustfmt.toml`. Not imported: `ci/`, `fuzz/` (a separate Cargo project), `rust-toolchain.toml`.

## Local changes

- Package renamed to `unlace-engine`; the library is `unlace_engine` (tests and examples updated).
- Builds with the unlace workspace toolchain. The `[profile.test] opt-level = 1` of upstream is
  replaced by `[profile.dev.package.unlace-engine] opt-level = 1` in the workspace manifest.
- Default processor features are `x86`, `arm`, `aarch64` (unlace product scope). The upstream
  default set is the `upstream-default` feature. Upstream tests that need MIPS, PowerPC or RISC-V
  are gated on those features (`decomp_corpus` skips corpus binaries of disabled processors);
  `cargo test -p unlace-engine --features upstream-default` runs the full upstream set.
- `heritage::VariableStack` is a `BTreeMap` (as `std::map` in Ghidra); the two remaining
  `HashMap`s are lookup-only caches marked `// determinism:allow`, and the crate is checked by
  `cargo xtask lint-determinism`.
- `ObjectLoadImage::load_fill` (Ghidra `LoadImageBfd::loadFill`) answered a read from its 512-byte
  buffer whenever an earlier read had buffered the address. The buffer spanned unmapped gaps
  (zero-filled) and non-allocated sections at address 0 (`.debug_info`, `.comment`), so a PLT stub
  disassembled as debug-info bytes after its neighbour `_init` was decompiled, and output depended
  on decompilation order. The buffer now holds only the contiguous bytes of mapped sections; a read
  outside them fails, or reads a non-allocated section that contains it without buffering
  (test `unmapped_gap_reads_do_not_depend_on_buffer_state`).
- Crate-level lint allowances: the upstream list in `src/lib.rs` (`clippy::mutable_key_type`,
  `too_many_arguments`, `needless_range_loop`, `if_same_then_else`, `while_let_loop`,
  `unnecessary_unwrap`, `field_reassign_with_default`, `needless_late_init`,
  `should_implement_trait`) plus `clippy::needless_bool`, which newer clippy reports on 25 ported
  guard-then-`true` returns.

Further local changes are listed in the git history of `crates/unlace-engine`.
