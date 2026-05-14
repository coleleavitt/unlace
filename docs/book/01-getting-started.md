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

## Environment Variables

| Variable | Default | Description |
|----------|---------|-------------|
| `UNLACE_LOG` | `warn` | Log level (trace/debug/info/warn/error) |
| `UNLACE_MAX_WIDTH` | `120` | Max line width for C output |
| `UNLACE_TAB_WIDTH` | `4` | Indentation width |
| `UNLACE_TIMEOUT` | `30` | Per-function timeout in seconds |

## Next Steps

→ [Chapter 2: Your First Decompilation](./02-first-decompile.md)
