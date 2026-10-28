# Chapter 1: Getting Started

## Installation

### From Source (recommended)

```bash
git clone https://github.com/coleleavitt/unlace.git
cd unlace
cargo build --release
# Binary is at target/release/unlace
```

### Pre-built Binaries

Download from the [Releases](https://github.com/coleleavitt/unlace/releases)
page. Binaries are available for:
- Linux x86-64 (glibc 2.31+)
- Linux AArch64
- macOS x86-64 / Apple Silicon (universal)
- Windows x86-64

### Verifying Your Installation

```bash
$ unlace --version
unlace 0.1.0

$ unlace decompile --help
Decompile a binary to C pseudocode
...
```

## Quick Start

Decompile a single function:

```bash
$ unlace decompile ./target_binary --function main
```

Decompile all functions to a directory:

```bash
$ unlace batch ./target_binary --output ./output/
```

## Project Layout

```
unlace/
├── crates/
│   ├── unlace-ir/        # Intermediate representation (70 opcodes)
│   ├── unlace-loader/    # ELF/PE/Mach-O parsers
│   ├── unlace-lift/      # Architecture dispatcher
│   ├── unlace-lift-x86/  # x86/x86-64 lifter
│   ├── unlace-lift-arm/  # ARM/AArch64 lifter
│   ├── unlace-passes/    # 50+ optimization passes
│   ├── unlace-struct/    # Control-flow structuring
│   ├── unlace-output/    # C pseudocode printer
│   └── unlace-cli/       # CLI binary + pipeline orchestration
├── fixtures/             # Test binaries
├── docs/                 # Documentation (you are here)
└── benches/              # Performance benchmarks
```

## Configuration and Logging

Settings and analysis limits come from a TOML file: `--config <path>`, else
`./unlace.toml`, else `$XDG_CONFIG_HOME/unlace/config.toml`. See
`unlace.example.toml` for every key at its default, and `unlace config show`
for the effective values. Command-line flags such as `--max-width`,
`--tab-width`, and `--timeout` override the file.

Diagnostics go to stderr through `tracing`: set `RUST_LOG` or pass
`--log <filter>` (default `warn`). `docs/diagnostics.md` lists the
`unlace::<area>` targets.

## Next Steps

→ [Chapter 2: Your First Decompilation](./02-first-decompile.md)
