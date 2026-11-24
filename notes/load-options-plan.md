# Load options without the process environment

Owner: team `loadopts` (2026-11-24). Goal: no code in unlace writes the process
environment to carry option state. Every load and decompile reads one explicit
[`LoadOptions`] value that its caller owns and hands down; environment variables
are user input only, read once at an entry point (CLI `main`, console start,
test harness), and documented in `docs/cli.md`. Behaviour must not change.

## Where things stand

`crates/unlace-middle/src/p0_knowledge/loadoptions.rs` already defines
`LoadOptions` (28 fields), a thread-local scope stack (`LoadOptions::enter`,
`enter_environment`, `scoped`) and `LoadOptions::from_env`. A load has two modes:

- **explicit** (`Bootstrap::options(&o)`): the gates read `o` through
  `scoped()`; the program keeps a copy (`Architecture::load_options`) and
  `Architecture::load_scope` re-enters it for later decompiles. Used today only
  by tests (`unlace-console/tests/verify_{loadoptions,bootstrap,language_database}.rs`,
  `unlace-cli/tests/rust_signature_summary.rs`).
- **environment** (`Bootstrap` with no options, and every free
  `bootstrap_from_*` fn): the load enters `enter_environment()`, so every gate
  reads its variable live, and the program stays in that mode
  (`load_options_from_env`). Every production caller uses this mode: the
  console's `load file` (`ifacedecomp.rs` `IfcLoadFile` ->
  `bootstrap_from_file`), the CLI's in-process loads, wasm, callwide, fid,
  lumina, bench.

Because production loads read the environment, every `option NAME` arm for a
load-time gate writes its variable so that a *later* `load file` in the same
process sees it, and the CLI writes variables before an in-process load.

## Inventory

### A. Load-time gates (option state carried in the environment)

W = writes the variable, R = reads it. "field" = has a `LoadOptions` field
and its gate already reads `scoped()` first.

| Variable | Option | Field | Writers | Readers (gate -> call sites) |
|---|---|---|---|---|
| `UNLACE_PPC32PICIMPORTS` | ppc32picimports | yes | option_dispatch `ppc32picimports` (`Mode::set_env`), `Architecture::reset_wire_defaults`, `LoadOptions::export_env`, CLI loadtime | `ppc32picimports::abi_enabled` -> `loader/ppc32_imports.rs`, `Mode::loaded` |
| `UNLACE_IFUNCFPRET` | ifuncfpret | yes | option_dispatch, export_env, CLI loadtime | `ifuncfpret_enabled` -> `loader/elf_plt.rs` |
| `UNLACE_PPCAPU` | ppcapu | yes | option_dispatch, export_env, CLI | `ppcapu_enabled` -> `loader/ppcaputarget.rs` |
| `UNLACE_KERNELCACHE` | kernelcache | yes | option_dispatch, export_env, CLI (`export_image_selection`, process-wide in `main`) | `KernelcacheChoice::in_force` -> `loader/kernelcache.rs peel_file`, engine `is_apple_container` |
| `UNLACE_KERNELCACHE_BOOT` | kernelcache-boot | yes | same as above | `KernelcacheBoot::in_force` |
| `UNLACE_GOABI` | goabi | yes | option_dispatch, export_env, CLI | `goabi` gate in language selection |
| `UNLACE_CIL` | cil | yes | `cil::set_cil` (option_dispatch), export_env, CLI | `cil_enabled` -> engine `file_cil_image`, `cil_image` |
| `UNLACE_SYMBOLNAMECHARS` | symbolnamechars | yes | option_dispatch, export_env, CLI | `symbolnamechars_mode` -> 17 sites in loader, passes, engine commit |
| `UNLACE_LIBCTYPES` | libctypes | yes | option_dispatch, export_env, CLI | `libctypes_layout` -> `protos/libctypes.rs`, `protos/mod.rs` |
| `UNLACE_CALLTARGETTYPE` | calltargettype | yes | export_env, CLI (also forced `off` for `--lang rust`) | DWARF type mapper |
| `UNLACE_MACHO_ARM64E` | macho-arm64e | yes | option_dispatch, export_env, CLI, **wasm `load_program`** (set + restore) | `macho_arm64e_enabled` -> `format/macho.rs` |
| `UNLACE_SOURCELANG` | sourcelang | yes | option_dispatch, export_env, CLI | `sourcelang::forced` -> `analyzers/sourcelang`, **decompile time**: `voidret.rs`, `x87emptyreturn.rs`, `zerocallregs.rs` |
| `UNLACE_OBJCIVARS` | objcivars | yes | option_dispatch, export_env, CLI | `objcivars_enabled` -> `analyzers/objc` |
| `UNLACE_OBJCSDK` | objcsdk | yes | option_dispatch, export_env, CLI | `objcsdk::sdk_path` -> `analyzers/objc`, `protos/sdkprotos.rs` |
| `UNLACE_DYLD_IMAGE` | dyldimage / `--image` | yes | `dyldcache::set_dyldimage` (option_dispatch), export_env, CLI `args::take_global_image` and `followimages::apply` (process-wide), CLI loadtime | `dyldcache::selected_image` -> `loader/dyldcache.rs`, CLI `decompile_all`, `followimages`, `unpack/dyld.rs` (reads the env directly) |
| `UNLACE_DYLDCROSSREFS` | dyldcrossrefs | yes | `dyldcache::set_dyldcrossrefs`, export_env, CLI | `dyldcrossrefs_enabled` -> `loader/macho_stubs.rs` |
| `UNLACE_CODESTRINGS` | codestrings | yes | option_dispatch via export_env, CLI | `codestrings_enabled` -> `analyzers/strings` |
| `UNLACE_NAMELADDER` | nameladder | yes | same | `nameladder_enabled` -> protos, `loader/noreturn.rs` |
| `UNLACE_SWIFTTYPES` | swifttypes | yes | same | `swifttypes_enabled` -> `analyzers/objc` |
| `UNLACE_DELPHIABI` | delphiabi | **no** | option_dispatch, CLI | `delphiabi_enabled` (env only) -> `loadimage_object.rs language_id_for`, `delphi/delphiabiimports.rs` |
| `UNLACE_DEBUGLINK` | debuglink | **no** | option_dispatch, CLI | `debuglink_enabled` (env only) -> `dwarf/mod.rs run_generic`, `loadimage_object.rs` |
| `UNLACE_EXPORTTRIE` | exporttrie | **no** | option_dispatch, CLI | `exporttrie_enabled` (env only) -> `loader/dyldcache.rs`, `dyldcache/xrefs.rs`, `macho_stubs.rs` |
| `UNLACE_RUSTSTDSIGS` | ruststdsigs | **no** | option_dispatch, CLI | `ruststdsigs::ruststdsigs` (env only) -> `flirt/ruststdsigs.rs` |
| `UNLACE_DWARFSCOPES` | dwarfscopes | **no** | option_dispatch (inline `set_var`), CLI | `dwarf::dwarfscopes::enabled` (env only) |
| `UNLACE_DWARFENUMTYPEDEF` | dwarfenumtypedef | **no** | option_dispatch (inline `set_var`), CLI | `dwarf::dwarfenumtypedef::enabled` (env only) |
| `UNLACE_MACHO_SLICE` | `--slice` | yes | CLI loadtime | `LoadOptions::macho_slice` |
| `unlace_pdb_path`, `unlace_pdb_symsrv`, `unlace_fid_db`, `UNLACE_FLIRT_SIGS` | `--pdb`, `--symsrv`, `--fid-db`, `--sigs` | yes | user only | `LoadOptions` fields |
| `UNLACE_LOAD_OBJC`, `UNLACE_LOAD_STRINGS` | `objc`, `strings` at load | yes | CLI loadtime (from `--option objc/strings`, `functions` inventory) | `LoadOptions::load_objc/load_strings` |
| `UNLACE_LOAD_MMAP` | - | yes | user only | `LoadOptions::load_mmap` |
| `UNLACE_GOVERSION` | (image fact) | yes | **engine `bootstrap_object`** writes/removes it on every environment-mode load | `loadoptions::env::go_version`, `Architecture::go_version` in environment mode, gotypes, pclntab |
| `UNLACE_DECODE_JOBS` | `--jobs` lanes | no | CLI loadtime | `WalkPlan::from_env` (engine commit) |

`LoadOptions::export_env` exists only to serve a caller that changed options
through `load_options_mut`; option_dispatch calls it for codestrings,
nameladder, swifttypes.

The CLI passes these to a `decomp_dbg` subprocess with `Command::env`
(`loadtime::apply_to_command`): that writes the child's environment, not this
process's, and stays the child's user input. It writes the process environment
for in-process loads in `loadtime::apply_to_process` (`strings`, `blobs`,
`decompile_all`; a `LoadtimeEnv` guard restores the values), in
`export_image_selection` and `args::take_global_image` (whole invocation), and
`followimages::apply`.

### B. CLI plumbing variables (not options)

| Variable | Writer | Reader |
|---|---|---|
| `UNLACE_ENGINE` | `lib.rs apply_engine`, `decompile.rs` (`--engine`) | `paths.rs` (which engine binary) |
| `UNLACE_SPECS` | `lib.rs cmd_catalog --sleighpath` | `paths.rs`, bench |
| `UNLACE_DECOMP_DBG` | `lib.rs cmd_catalog --decomp-dbg` | `paths.rs` |

### C. Test harness

`unlace-harness/src/testfunction.rs` snapshots every `UNLACE_*` variable before a
datatest file and restores it after (`restore_option_env`), because a script's
`option` writes the environment. It goes once nothing writes.

### D. Diagnostics and fault injection (read-only, stay)

Trace/debug switches (`UNLACE_*_TRACE`, `UNLACE_*_DEBUG`, `UNLACE_RS_DEBUG`,
`UNLACE_DUMP`, `UNLACE_DUMP_XML`, `UNLACE_ACTION_PROF`, `UNLACE_CHARPTR_CENSUS`,
`UNLACE_ENTRY_TRACE`, `UNLACE_DATATEST_TIMES`), fault injection
(`UNLACE_DECODE_FAULT`, `UNLACE_JOBS_FAULT`, `UNLACE_RENDER_FAULT`,
`UNLACE_JUMPTABLE_FAULT`, `UNLACE_DECODE_SELFCHECK`), host paths
(`UNLACE_TIL_DIR`, `UNLACE_PATTERN_DIR`, `UNLACE_SLA_CACHE`, `UNLACE_CGROUP_ROOT`,
`UNLACE_DEBUG_DIRS`, `UNLACE_SLA_LAZY`, `UNLACE_NO_SYMBOL_SNAPSHOT_CACHE`,
`UNLACE_ARM_ISA`, `UNLACE_PARENT_BUILD`) and the `UNLACE_KC*`, `UNLACE_PKLITE_DUMP`
test inputs. Nothing writes them; they are user input and are not option state,
so they stay environment reads. `docs/cli.md` lists them.

## Design

1. Every load-time gate has a `LoadOptions` field, and its `*_enabled` reader is
   `scoped(|o| o.x).unwrap_or_else(env::x)`.
2. The owner of a session holds one `LoadOptions`:
   - console: `IfaceDecompData::load_options`, set once from
     `LoadOptions::from_env()` when the console starts (the user's variables, or
     the ones the CLI gave the `decomp_dbg` child); `option NAME` updates the
     loaded program's options (`load_options_mut`, as today) and copies them back
     to `IfaceDecompData::load_options`; `load file`/`load raw` pass it with
     `Bootstrap::options`.
   - CLI in-process: `loadtime` builds a `LoadOptions` from `--option` /
     `--slice` / `--image` / `--jobs` over `LoadOptions::from_env()` and passes it;
     `apply_to_process` and `LoadtimeEnv` go. `apply_to_command` stays
     (child environment).
   - wasm: builds a `LoadOptions` with `macho_arm64e` set.
3. The `option` arms stop writing the environment; the `set_*_env` helpers and
   `LoadOptions::export_env` are deleted once nothing calls them (tests that use
   them to fake user input switch to explicit options).
4. With every production load explicit, environment mode and
   `load_options_from_env` go, and so does the `UNLACE_GOVERSION` write (the
   version already travels in `LoadOptions::go_version`).
5. CLI plumbing (`UNLACE_ENGINE`, `UNLACE_SPECS`, `UNLACE_DECOMP_DBG`) becomes a
   `paths::Overrides` value parsed in `main`.

Behaviour stays the same because a process that never wrote the environment
already got `from_env()` at every load, and a process that did write it wrote
exactly what the program now holds in its `LoadOptions`.

One known semantic edge: today an `option` arm in one console session leaks to
every later load in the process (including a later datatest file, which is why
the harness restores the environment). After step 2 it reaches later loads of
the same console only, which is what the harness already enforces.

## PR sequence

Each PR is one family, small enough to check by eye, and keeps behaviour
identical on its own; lead runs `cargo check`.

1. This plan (#1072).
2. Fields for the six env-only gates (delphiabi, debuglink, exporttrie,
   ruststdsigs, dwarfscopes, dwarfenumtypedef); readers go through `scoped()`
   (#1073).
3. Every load-time `option` arm also sets the program's `load_options_mut()`
   field (the six above were env-only), so an explicit-options program and an
   environment-mode one see the same value after `option`.
4. Console `load file` / `load raw` load with explicit options, read with
   `LoadOptions::from_env()` at each load (same values the gates read today:
   the `option` arms still write the environment), `go_version: None` (the
   environment-mode rule), and the ARM ISA from `LoadOptions::arm_isa` (read by `from_env_for_load`).
5. The other environment-mode loaders go explicit the same way: harness
   `bootstrap_program` (XML datatests), wasm `load_program` (`macho_arm64e` set
   on the options instead of the environment), callwide, fid, lumina,
   projectfunctionnames, bench.
6. CLI in-process loads build `LoadOptions` from `--option` / `--slice` /
   `--image` / `--jobs` over `from_env()` (`apply_to_process`, `LoadtimeEnv`,
   `export_image_selection`, `take_global_image`, `followimages`,
   `unpack/dyld.rs`); `apply_to_command` stays (child environment).
7. Console holds `IfaceDecompData::load_options` (read from the environment at
   the first load, reset by the harness between files), `option` copies the
   program's options back, and the `option` arms stop writing the environment.
   Live-value readers that read a gate outside `load_scope` (`console.rs`
   `exporttrie`, `dyldcrossrefs`, `cil`) enter it. Harness
   `restore_option_env` goes.
8. Drop environment mode (`enter_environment`, `load_options_from_env`), the
   `UNLACE_GOVERSION` write, the `set_*_env` helpers and `export_env`; tests that
   set variables to fake input use explicit options.
9. CLI plumbing variables -> `paths::Overrides`; `docs/cli.md` environment table.

## Status (2026-11-24, done)

Landed: #1072-#1076, #1078-#1083, #1092, #1094, #1100, #1102, #1104, plus the
free-function and option-arm steps that came in through #1091. No production
code writes a load-time variable into the process environment: every load
reads its `LoadOptions` once (the console's from `IfaceDecompData::load_options`,
the CLI's from `loadtime::settings` over the invocation value), `option` arms
change only the program's options, and child processes get their variables
through `Command::env`.

Left on purpose: the `set_*_env` helpers for `ifuncfpret`, `ppcapu`,
`macho_arm64e`, `symbolnamechars` and `libctypes`, which unit tests use to
check how a gate parses its variable; `enter_environment` and
`load_options_from_env`, the fallback for a gate read outside any load scope;
the read-only diagnostic and fault-injection variables of the inventory's
section D. None of this was built or measured after #1081 (edit-only, per Cole).

## Remaining environment use (audit, 2026-11-24)

Scope: every `std::env::set_var` / `remove_var` and every `UNLACE_*` or `unlace_*`
read in `crates/*/src`, outside the entry points and `LoadOptions`. Class: **(a)** user
input read once at an entry point or a host path; **(b)** a debug, trace, cache or
fault-injection switch; **(c)** option state that should move into `LoadOptions`.
Line numbers are as of the audit branch; `rg` the name to find a moved one.

Status after the setters, libctypes and dead-reader PRs: no code outside test modules writes a `UNLACE_*` variable, and the one (c) read left, `UNLACE_ARM_ISA`, is now `LoadOptions::arm_isa`, read once by `from_env_for_load`.

### Writes outside test code

| Where | Writes | Class | Disposition |
|---|---|---|---|
| `unlace-middle/src/p0_knowledge/ifuncfpret.rs:40` `set_ifuncfpret_env` | `UNLACE_IFUNCFPRET` | c | removed (setters PR); the gate test now reads the variable through `read::ifuncfpret` and a scope |
| `unlace-middle/src/p0_knowledge/ppcapu.rs:21` `set_ppcapu_env` | `UNLACE_PPCAPU` | c | removed (setters PR) |
| `unlace-middle/src/p0_knowledge/macho_arm64e.rs:28` `set_macho_arm64e_env` | `UNLACE_MACHO_ARM64E` | c | removed (setters PR) |
| `unlace-middle/src/p0_knowledge/symbolnamechars.rs:168` `set_symbolnamechars_env` | `UNLACE_SYMBOLNAMECHARS` | c | removed (libctypes/symbolnamechars PR) |
| `unlace-middle/src/p0_knowledge/libctypes.rs:125` `set_libctypes_env_layout` | `UNLACE_LIBCTYPES` | c | removed (libctypes/symbolnamechars PR) |

Test-module writes (`#[cfg(test)]` blocks inside `src`, not a production path):
`unlace-analysis/src/loader/format/macho.rs:373,381,407` (`UNLACE_MACHO_ARM64E`),
`unlace-analysis/src/analyzers/pdb/locate.rs:375-451` (`unlace_pdb_path`),
`unlace-middle/src/p0_knowledge/goabi.rs:107-116` (`UNLACE_GOABI`). They set and
restore the variable around a test; the gate tests of the other env-gate families
now use `loadoptions::read` with `Vars::with` instead.

### Reads of option state outside a scope (c)

| Where | Reads | Class | Disposition |
|---|---|---|---|
| `unlace-lift/src/p1_partition/goreg.rs:73` `goroutine_register` | `UNLACE_GOVERSION` | c | fixed: it re-read `UNLACE_GOVERSION` after the `version` argument (the image's release, from `Architecture::go_version`) and shadowed it; the argument is now the only source |
| `unlace-console/src/engine.rs` `arm_isa_from_env` (deleted) | `UNLACE_ARM_ISA` | c | moved: `LoadOptions::arm_isa` is read once in `from_vars`; `Bootstrap` and `load raw` take the ISA from the options. An unrecognized value stays an error at the load that reads it. The `bootstrap_from_*` helpers that still take an `isa` argument are unchanged |
| `unlace-middle/src/p0_knowledge/objcsdk.rs` `sdk_path_from_env`, `unlace-analysis/src/analyzers/pdb/locate.rs` `pdb_path_from_env`, `unlace-middle/src/p0_knowledge/sourcelang.rs` `forced_from_env`, `unlace-middle/src/p0_knowledge/options.rs` `env_toggle` | their variables | c | environment-only readers that skipped the scope; no caller anywhere, deleted (dead-readers PR) |

### Entry points and host paths (a)

- CLI plumbing: `unlace-cli/src/paths.rs` (`UNLACE_SPECS`, `UNLACE_DECOMP_DBG`, `UNLACE_ENGINE`,
  `UNLACE_ROOT`, `UNLACE_SLACOMP`), `loadtime.rs:146` (the child environment), `jobs.rs`
  (`UNLACE_JOBS_FAULT`, test-only), `lib.rs`, `sbom.rs` (`SOURCE_DATE_EPOCH`),
  `skill.rs`, `embedded_specs.rs`, `decompile_all.rs` and `fid.rs` (`SLEIGHHOME`).
- Lumina credentials and server (`unlace-cli/src/lumina.rs:37-42`).
- Host paths read at load or use: `UNLACE_TIL_DIR` (`unlace-console/src/typelib.rs:460,672`),
  `UNLACE_DEBUG_DIRS` (`loader/elf_debuglink.rs:30`), `UNLACE_PATTERN_DIR`
  (`analyzers/entry/patterns/mod.rs:563`), `UNLACE_SLA_CACHE`, `UNLACE_SLA_LAZY`
  (`unlace-slacomp`, `unlace-sleigh`), `UNLACE_CGROUP_ROOT` (test-only, `substrate/hostmem.rs:8`).
- Build identity (`unlace-console/src/buildstamp.rs:28-174`: `UNLACE_PARENT_BUILD`,
  the source fingerprints, `UNLACE_DECOMP_DBG`).

### Trace, debug, cache and fault switches (b)

- `UNLACE_*_TRACE` and `UNLACE_*_DEBUG` in `unlace-middle`, `unlace-bandb*`,
  `unlace-lift`, `unlace-emit`, `unlace-structure`, `unlace-analysis` and `unlace-console`
  (e.g. `UNLACE_RS_DEBUG`, `UNLACE_RETREC_TRACE`, `UNLACE_FID_DEBUG`,
  `UNLACE_FMTSTATIC_DEBUG`, `UNLACE_UEFI_DEBUG`); `UNLACE_DUMP`, `UNLACE_DUMP_XML`,
  `UNLACE_ACTION_PROF`, `UNLACE_CHARPTR_CENSUS`, `UNLACE_ENTRY_TRACE`,
  `UNLACE_DATATEST_TIMES`, `UNLACE_CALLWIDE_REPLAY_DIR`.
- `UNLACE_NO_SYMBOL_SNAPSHOT_CACHE` (`unlace-middle/src/infra/architecture.rs:1079`), read once
  when an `Architecture` is built.
- Decode tuning and checks (`unlace-analysis/src/listing/pdecode.rs:66-76`:
  `UNLACE_DECODE_MIN_BYTES`, `_INTERVALS`, `_SELFCHECK`, `_STATS`). `UNLACE_DECODE_JOBS`
  is `LoadOptions::decode_jobs` and is scoped first.
- Fault injection: `UNLACE_DECODE_FAULT` (`pdecode.rs:809`), `UNLACE_JUMPTABLE_FAULT`
  (`unlace-lift/src/p2_lift/jumptablefault.rs`), `UNLACE_RENDER_FAULT`
  (`unlace-emit/src/p9_emit/renderfault.rs`), `UNLACE_JOBS_FAULT` (`unlace-cli/src/jobs.rs`).

### Gate fallbacks (by design)

Every `*_enabled()` gate reads `scoped(...)` first and falls back to
`loadoptions::env::*` only outside a load scope (`FALLBACKS` counts those reads for
tests). `enter_environment` and `LoadOptions::from_env` are that fallback, not a write.
