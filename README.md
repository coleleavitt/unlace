# unlace

`unlace` is a Rust workspace for a multi-architecture decompiler. It implements
the classic decompiler pipeline:

```
binary ──► loader ──► lifter ──► IR (P-code-like) ──► SSA + passes ──► structuring ──► C output
```

The CLI lives in [`crates/unlace-cli`](crates/unlace-cli) and ships as a single
`unlace` binary.

> **Status:** Early/active development. Useful for experimentation, not a
> drop-in replacement for IDA/Ghidra. See [Status](#status) below for an
> honest summary of what is and is not working.

## Quick start

```bash
# Build the whole workspace
RUSTC_WRAPPER= cargo build --workspace

# Show the CLI help
cargo run -p unlace-cli -- --help
```

The four subcommands today are:

| Subcommand  | Purpose                                                                            |
| ----------- | ---------------------------------------------------------------------------------- |
| `decompile` | Decompile one function (by name/address) or a whole binary; emit C, IR, or DOT.    |
| `batch`     | Parallel decompile of every function in a binary, optionally fanning out to files. |
| `quality`   | Measure decompiler output quality via feature counters (no C emission).            |
| `siggen`    | Generate FLIRT-style patterns from a static archive (`.a`).                        |

### Examples

```bash
# Decompile a single function to pseudo-C
cargo run -p unlace-cli -- decompile ./path/to/binary --function main

# Decompile all functions to a single output file
cargo run -p unlace-cli -- decompile ./path/to/binary --all -o out.c

# Emit the IR or CFG instead
cargo run -p unlace-cli -- decompile ./path/to/binary --function main --emit ir
cargo run -p unlace-cli -- decompile ./path/to/binary --function main --emit cfg-dot

# Parallel batch decompile, one .c file per function
cargo run -p unlace-cli -- batch ./path/to/binary --output-dir ./out --jobs 8

# Quality report (Markdown to stdout)
cargo run -p unlace-cli -- quality ./path/to/binary
cargo run -p unlace-cli -- quality ./path/to/binary --format json

# Aggregate parity score against the internal fixture profile (shell script,
# not a CLI subcommand)
RUSTC_WRAPPER= bash scripts/score_parity.sh
```

## Supported architectures

Architecture identifiers are defined in
[`crates/unlace-ir/src/arch.rs`](crates/unlace-ir/src/arch.rs). The lifter
facade in [`crates/unlace-lift`](crates/unlace-lift) currently wires real
lifters for:

`x86`, `x86_64`, `arm`, `aarch64`, `riscv64`, `mips`, `mips64`, `ppc`,
`ppc64`, `v850`, `arc`, `tricore`, `ebpf`, `sbpf`, `avr`, `msp430`,
`amdgpu`, `agx`, `m68k`, `hexagon`, `superh`, `xtensa`, `nvidia-sass`,
`evm`, `sharc` / `sharc-blackfin`, `ti-c6x`, `ti-c28x`.

Several additional arch enums exist in the workspace as separate
`unlace-lift-*` crates (`stm8`, `z80`, `rx`, `pic`, `sparc`, `spirv`,
`appleagx`, `6502`/`8051`, `lua`, `wasm`, …) but those are not all wired
into the dispatch table and fall back to `StubLifter`, which emits
`IrOp::Unimplemented`. Don't trust output for an arch unless you've
checked that it's wired in `crates/unlace-lift/src/lib.rs`.

## Workspace map

| Crate                                                       | Role                                                                                       |
| ----------------------------------------------------------- | ------------------------------------------------------------------------------------------ |
| [`unlace-ir`](crates/unlace-ir)                             | Core IR (75-opcode P-code-style LIR, frozen v1.0), SSA, arch ids, types. See `docs/ir-spec.md`. |
| [`unlace-loader`](crates/unlace-loader)                     | ELF/PE/Mach-O loaders, DWARF/PDB, Rust/Swift demangling, signatures.                       |
| [`unlace-lift`](crates/unlace-lift)                         | Facade that dispatches to per-arch lifters.                                                |
| `unlace-lift-*` (one per arch)                              | Per-architecture instruction-to-IR lifters.                                                |
| [`unlace-passes`](crates/unlace-passes)                     | IR/SSA passes: propagation, simplification, type/stack/calling-convention recovery, switch tables, idiom recognition, … |
| [`unlace-struct`](crates/unlace-struct)                     | Control-flow structuring: recover `if` / `while` / `switch` / `break` / `continue` / `goto` from SSA CFGs. |
| [`unlace-output`](crates/unlace-output)                     | Output formatters: pseudo-C printer, CFG DOT, IR dump, C++ class/STL rendering, demangling. |
| [`unlace-cli`](crates/unlace-cli)                           | The `unlace` binary plus library facade used by fuzzers and tests.                          |
| [`unlace-flirt`](crates/unlace-flirt)                       | FLIRT signature matching (byte patterns + CRC16).                                          |
| [`unlace-plugin`](crates/unlace-plugin)                     | Plugin SDK + dynamic-library loader for out-of-tree analyses.                              |
| [`unlace-lumina`](crates/unlace-lumina)                     | Lumina-style annotation server protocol (JSON over HTTP).                                  |
| [`unlace-fuzz`](crates/unlace-fuzz)                         | Whole-pipeline fuzz harness (load → lift → SSA → passes → printer).                        |
| [`unlace-sbom`](crates/unlace-sbom)                         | CycloneDX 1.4 SBOM generator over `Cargo.lock`.                                            |
| [`unlace-test-harness`](crates/unlace-test-harness)         | Golden-fixture scoring and AST-equivalence test infra.                                     |
| [`xtask`](xtask)                                            | In-repo tasks (e.g. `cargo xtask lint-determinism`).                                       |

## Verification

The two canonical verification commands are:

```bash
# Workspace tests
RUSTC_WRAPPER= cargo test --workspace

# Aggregate parity score on the internal fixture set
RUSTC_WRAPPER= bash scripts/score_parity.sh
```

`RUSTC_WRAPPER=` disables `sccache` for this run; the workspace does not
require it. Additional useful commands:

```bash
# Golden-fixture suite with per-fixture scoring
RUSTC_WRAPPER= cargo test -p unlace-test-harness --test golden_fixtures -- --nocapture

# Determinism lint (currently has known failures, see backlog)
cargo xtask lint-determinism

# Clippy / format
RUSTC_WRAPPER= cargo clippy --workspace -- -D warnings
cargo fmt --all -- --check
```

## Status

What is currently true (last verified per `CLAUDE.md`, 2026-05-14):

- `scripts/score_parity.sh` reports **Aggregate Parity: 100.0%** against the
  project's narrow internal fixture metric (14 fixtures, feature-counter
  formula).
- The golden fixture test passes (29 tests).
- `cargo test --workspace` passes outside sandboxed environments (some
  tests in `unlace-lumina` bind a local TCP socket).

What that score does **not** mean:

- This is **not** full IDA / Hex-Rays parity. The metric counts a small
  set of features (a handful of expression / control-flow / naming
  patterns); it does not exercise the full surface area of a production
  decompiler.
- Many lifters intentionally emit `IrOp::Unimplemented` for instructions
  outside the tested subset.
- `cargo clippy --workspace -- -D warnings` is **not currently clean**
  (several crates still emit warnings; see backlog item 2 in `CLAUDE.md`).
- `cargo xtask lint-determinism` currently fails on remaining `HashMap`/
  `HashSet` uses in output-affecting crates.

Treat the percentage as an internal regression signal, not an absolute
claim of correctness.

## For contributors

- [`CONTRIBUTING.md`](CONTRIBUTING.md) — workflow, coding standards,
  PR process.
- [`CLAUDE.md`](CLAUDE.md) — durable project memory and current verified
  state. Read this first if you are an LLM agent or returning after a
  break.
- [`plan.md`](plan.md) — current planning notes.
- [`docs/determinism.md`](docs/determinism.md) — determinism charter.
  Output-affecting crates must not use `HashMap` / `HashSet`.
- [`docs/ir-spec.md`](docs/ir-spec.md) — IR specification (75 opcodes, v1.0).

When changing anything that touches output, also run
`scripts/score_parity.sh` and the golden fixture suite — and **do not**
tune fixture binaries, goldens, or reference metrics to mask a
regression.
