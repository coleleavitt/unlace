# Support status

The one list of what unlace reads, decompiles, and runs on, and what is still experimental. README.md
and CLAUDE.md link here instead of repeating it. Other docs describe how a row works; this file says
whether it is supported. When a loader, architecture, output language or front end is added or dropped,
change this file in the same PR.

Evidence for each claim is named in brackets: a code path, a test corpus, or a manifest.

## Binary formats

Loaders live in `crates/unlace-analysis/src/loader/` and `crates/unlace-analysis/src/loadimage_*.rs`.
Each format below is read by the loader tier and reaches the decompiler through the same program model.

| Format | Where | Notes |
|---|---|---|
| ELF (ET_REL, ET_EXEC, shared objects) | `loader/elf_*`, `loadimage_object.rs` | PLT/GOT naming, dynamic-segment fallback for images with a broken section table |
| Mach-O, including fat (universal) files | `loader/macho*`, `loader/macho_fat.rs` | chained fixups, stubs, export trie, data-in-code |
| dyld shared cache | `loader/dyldcache/` | opens one image at its cache address; split caches are read as one set |
| XNU kernelcache | `loader/kernelcache.rs` | |
| PE / COFF | `loader/pe_*`, `format/coff.rs` | import (IAT) naming, load-config and ordinal imports |
| UEFI TE images and firmware volumes | `loadimage_te.rs`, `format/uefifv.rs`, `format/tiano.rs` | |
| WebAssembly modules | `loadimage_wasm.rs`, `loader/wasmlower.rs` | bodies lowered from stack form to register form |
| .NET CIL, Java class, Dalvik DEX | `loadimage_cil.rs`, `loadimage_class.rs`, `loadimage_dex.rs` | |
| DOS MZ | `loadimage_mz.rs` | |
| Retro containers: PS-X EXE, N64 ROM, a.out, Amiga hunk, PEF | `loader/retroimage.rs` | |
| Packed executables: UPX, PKLITE, NEOLITE | `upx/`, `pklite/`, `neolite.rs` | unpacked before loading |
| Go binaries (buildinfo, pclntab) | `loader/gobuildinfo.rs`, `analyzers/pclntab/` | |
| Espressif ROM images, Cortex-M, SVD device files | `format/esprom/`, `format/cortexm.rs`, `format/svd.rs` | |
| IDA databases (`.idb`, `.i64`) | `crates/unlace-idb` (`unlace idb`) | read-only reader, no C dependencies |
| Raw images | `--raw-image --target <language> --base <addr>` | no symbols; the language is named by the user |

Debug and symbol inputs that feed those loaders: DWARF, PDB, FLIRT and FID signatures, Rust/Go/Swift
demangling, and separate debug files (`analyzers/`, `loader/elf_debuglink.rs`).

## Architectures

Architectures are SLEIGH processors. The vendored specs are under `specs/Ghidra/Processors/` (191
processor directories, 464 `.slaspec` files under `specs/`). The tiers below say how much of each is
checked.

**Tier 1, output parity-gated.** The `tests/datatests/` corpus (675 assertions, `make test` / the
`parity` test) checks decompiled C against recorded output. Its `arch` attributes cover x86 (32- and
64-bit, gcc and Windows), MIPS (LE and BE, 32-bit), AArch64, ARM v8, PowerPC (BE, 32-bit), 8051 and Toy,
among others. [`tests/datatests/*.xml`]

**Tier 2, smoke-tested.** 211 family rows in `crates/unlace-cli/tests/processors.toml` name 85 processor
languages. Each row decompiles fixture bytes through `unlace decompile --raw-image` and checks the output
for expected text and for a forbidden-text list. This covers the processors not in Tier 1, including DSPs,
microcontrollers, GPUs (AMDGPU, NVIDIA SASS), and bytecode VMs (CPython, Lua, EVM, V8 Ignition, JavaCard,
MULTOS). [`docs/processor-tests.md`]

**Tier 3, decompile only.** Every other vendored SLEIGH processor. It is a valid `--target` language, but
no row checks its output, so treat its results as unverified. [`specs/Ghidra/Processors/`]

**Known failures (`xfail` rows).** Three checks currently fail and are reported, not hidden:

- `elfroute_csky_elf`, lookup: a global at `0x20000000` prints as the constant base, not `g_tab[...]`.
- `elfroute_sm80_o`, lookup: `.nv.global` data symbols are unnamed, so `g_tab` prints as an address.
- `elfroute_sm80_o`, pick: the BRX jump table stays an opaque `sass_BRX` op.

## Languages

- **Input (source language of the binary).** C and C++ are the supported case. Go, Rust and Swift get
  individual analyzers (Go pclntab, Swift demangling, the `sourcelang` analyzer), but a per-run source-language
  plane is a [PROPOSAL] only (`docs/multilang.md`). Do not treat a Rust or Swift result as source-level
  semantics unless an analysis recovered them.
- **Output (`--option outlang`).** `c` is the default. `rust` and `go` are selectable. The printer also
  has a Java output language in code, but `outlang` does not accept it, so it is not supported.
  [`crates/unlace-decomp/phases.toml` (`outlang`); `crates/unlace-emit/src/p9_emit/lang.rs`]
- **Language files (`--language-file`).** A TOML file over one of the output languages that respells
  keywords and operators and changes a few forms; each field is accepted only for the base languages
  whose printer honours it everywhere. Experimental.
  [`crates/unlace-emit/src/p9_emit/langflavour.rs`; `docs/cli.md`, "Language files"]

## Front ends

| Front end | Crate | Status | Reference |
|---|---|---|---|
| `unlace` command-line tool | `crates/unlace-cli` | supported | [docs/cli.md](cli.md) |
| `decomp_dbg` console | `crates/unlace-console` | supported | [docs/cli.md](cli.md) |
| Rust library | `crates/unlace` | supported | [docs/api.md](api.md) |
| `unlace_ghidra`, Ghidra's decompiler core | `crates/unlace-ghidra` | supported; 5 items in its checklist are open | [docs/ghidra-integration.md](ghidra-integration.md) |
| `unlace_wasm`, in-browser decompiler | `crates/unlace-wasm` | supported | [docs/web-integration.md](web-integration.md) |

Development tools, not user front ends: `unlace-slacomp` (the SLEIGH compiler, `slacomp`),
`decomp_test_dbg` (in `crates/unlace-harness`), `unlace-lift-diff`. `crates/unlace-decomp-dylib` is a
dev-only dynamic-link build, excluded from the workspace.

## Experimental

Opt-in or unfinished. Each is off by default or marked above:

- **`egraph` option** (default off): equality saturation over mixed boolean-arithmetic trees. It helps
  obfuscated code together with `mba`; it stays opt-in because it costs time on ordinary output.
- **Custom passes and rewrite rule files** (`unlace::unstable::hooks`, `--rules FILE`): p-code rules
  and phase callbacks added from Rust ([docs/api.md](api.md)), and p-code rewrites loaded from a
  TOML file ([docs/cli.md](cli.md)). Both are outside the library's stability promise, and the
  rule-file format can change.
- **Source-language plane for Rust, Go and Swift**: a [PROPOSAL] in `docs/multilang.md`, not built.
- **Ghidra front end**: 5 unchecked items in `docs/ghidra-integration.md`.
- **Known failures** listed under Architectures.
- **Java output language** in the printer: not reachable through `outlang`.
- **Language files** (`--language-file`, `unlace::unstable::flavour`): the format and the set of
  overridable fields can change.
- **The C syntax tree as data** (`--ctree`, `unlace::unstable::printer`): C output only (a language
  file over C included); the node kinds and members can change. [`docs/cli.md`, "The JSON
  documents"; `docs/architecture/ctree.md` section 11]
- **Callbacks on the C syntax tree** (`unlace::unstable::ctree`): they work on the engine's own
  types, which change with it. [`docs/architecture/ctree.md` section 10]
- **Token map, variable storage and `unlace map`** (`--tokens`, `--storage`, `unlace map`,
  `unlace::unstable::mapping`): which instructions a span of the output came from, and where each
  variable is in the machine and when. Both record members are opt-in, and the library types can
  change. `storage` describes the decompiler's variables: checked against DWARF it agrees for 93-99%
  of the bytes where both name a location. DWARF's location lists cover availability and `storage`
  covers liveness, so the share DWARF covers is not a defect measure; in Go output DWARF names
  1.32 M bytes that `storage` does not (1.86 M before a Go local took its name at its register
  range; the rest are Go parameters' frame slots, a known limit). [`docs/cli.md`, "The JSON documents" and "unlace map"; `docs/spec/06-variables-and-merge.md`,
  "Variable storage"]
- **Tier 3 architectures**: decompile without an output check.

Option-level status (tier, default, what each flip does) is in [docs/options.md](options.md), which is
generated from `crates/unlace-decomp/phases.toml`.
