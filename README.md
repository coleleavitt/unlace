<p align="center"><img src="assets/logo/unlace-logo-394b820735.png" alt="Unlace: line art of a black-and-white sneaker coming unlaced" width="520"></p>

<h1 align="center">Unlace</h1>

<p align="center">An agent-first decompiler written in Rust.</p>

<p align="center">
  <a href="https://github.com/coleleavitt/unlace/actions/workflows/tests.yml"><img src="https://github.com/coleleavitt/unlace/actions/workflows/tests.yml/badge.svg?branch=main" alt="Tests"></a>
  <a href="https://codspeed.io/coleleavitt/unlace"><img src="https://img.shields.io/endpoint?url=https://codspeed.io/badge.json" alt="CodSpeed"></a>
  <a href="LICENSE"><img src="https://img.shields.io/badge/license-Apache--2.0-blue.svg" alt="License: Apache-2.0"></a>
</p>

Unlace exposes the decisions inside the decompiler as named options that an agent (or a person)
can flip per run, lists them with `unlace catalog`, and speaks `--json`, so an LLM can drive it
end to end. Its engine comes from Kuna, a Rust port of
[Ghidra](https://github.com/NationalSecurityAgency/ghidra)'s decompiler; Unlace adds Apple
platform support (Mach-O, chained fixups, the dyld shared cache, kernelcaches, Objective-C,
Swift, arm64e) and fixes found by comparing its output against IDA 9.5.

| Measured locally, 2026-11-22 | Unlace | IDA 9.5 |
|---|---|---|
| [DecBench](https://decbench.com) O2-noinline, functions with GED 0 | 36.8% | 36.6% |
| DecBench O2-noinline, mean GED (lower is better) | 11.08 | 11.61 |
| Type match, perfect functions on a gcc corpus | 16.9% | 12.2% |

## Install

There are no binary releases yet. With a Rust toolchain:

```bash
git clone https://github.com/coleleavitt/unlace && cd unlace
cargo build --release -p unlace-cli -p unlace-slacomp   # the CLI and the SLEIGH compiler
# No spec build step: each language's .sla is compiled from specs/ on first use and cached.
export PATH="$PWD/target/release:$PATH"
```

## Usage

```bash
unlace decompile ./a.out main                          # one function by name
unlace decompile ./stripped.bin 0x401040 --addr        # or by address
unlace decompile-project ./a.out                       # the whole binary as .c/.h/.asm
unlace decompile ./a.out main --option compareform canonical   # flip a decision
unlace catalog                                         # every option and what it fixes
unlace install-skill                                   # teach Claude Code, Codex or OpenCode to use it
```

Unlace can also replace Ghidra's own decompiler, in the GUI or headless; see the
[Ghidra extension README](integrations/ghidra/KunaDecompiler/README.md). The full CLI reference is
[docs/cli.md](docs/cli.md); to call the decompiler from Rust, see [docs/api.md](docs/api.md).

## Layout

The repository root is the Cargo workspace (`Cargo.toml`, `crates/`). The engine began as a
line-faithful port of Ghidra's C++ decompiler and SLEIGH compiler (the C++ tree has been
removed; see [docs/history.md](docs/history.md)) and has since grown its own analysis tier, CLI
and front-ends.

| Crate | What |
|---|---|
| `crates/unlace-base` | Foundation: types, errors, XML + marshaling, spaces/addresses, raw p-code, context db, compression, translate/loadimage traits. |
| `crates/unlace-num` | Multiprecision, IEEE float emulation, CircleRange. |
| `crates/unlace-sleigh` | `.sla` reader + instruction decode runtime + the compile-side pattern machinery. |
| `crates/unlace-slacomp` | The SLEIGH compiler (binary `slacomp`, same CLI as upstream `sleigh_opt`). |
| `crates/unlace-decomp` | The decompiler core (phase-foldered `src/`: `p0_knowledge/`…`p9_emit/`, `substrate/`, `infra/`) + the phase model/option surface. |
| `crates/unlace-analysis` | The program-prep loader/analyzer tier (ELF/PE/Mach-O, DWARF, strings, function discovery, ...). |
| `crates/unlace-console` | Console front-end (`decomp_dbg`); the in-process engine + project-export modules. |
| `crates/unlace-cli` | The user-facing `unlace` binary ([docs/cli.md](docs/cli.md)). |
| `crates/unlace` | The decompiler as a Rust library: load a binary or raw bytes, declare function bounds, decompile ([docs/api.md](docs/api.md)). |
| `crates/unlace-ghidra` | The `unlace_ghidra` binary: unlace as stock Ghidra's decompiler core ([docs/ghidra-integration.md](docs/ghidra-integration.md)). |
| `crates/unlace-wasm` | The `unlace_wasm` binary (wasm32-wasip1): the in-browser decompiler ([docs/web-integration.md](docs/web-integration.md)). |
| `crates/unlace-harness`, `crates/unlace-lift-diff`, `crates/unlace-bench` | Dev-only: the datatest harness (`decomp_test_dbg`), differential helpers, benchmarks. |

`tests/` holds the datatest and stage corpora and shared fixtures, `specs/` the vendored SLEIGH
specs, `docs/spec/` the normative description of every pass.

## History

Unlace began on 2026-04-29 as a from-scratch decompiler with its own IR, structuring, 40+
lifters, debugger and emulator; that code is archived on the `master` branch (tag
`unlace-v1-final`). On 2026-11-22 Unlace moved onto Cole's Kuna fork, which carried the Apple
work ported from it.
[docs/architecture/decompiler-ir-landscape.md](docs/architecture/decompiler-ir-landscape.md)
compares the two designs.

## Contributing

[docs/dev-setup.md](docs/dev-setup.md) has the build recipe, the local gates and the git hooks;
[CLAUDE.md](CLAUDE.md) has the rules agents follow in this repo. Before a commit:
`cargo fmt --all --check`, `cargo test -p unlace-harness --test parity` (the datatest and stage
corpora against their baselines) and `python3 tools/check_spec.py`.

## License

Apache-2.0; see [LICENSE](LICENSE) and [NOTICE](NOTICE). Unlace builds on Kuna by Zion Basque
and contributors, whose work is sponsored by the
[Air Force Research Lab](https://www.afrl.af.mil/), [Metalware](https://www.metalware.com/) and
the Department of Defense, and on Ghidra by the NSA.
