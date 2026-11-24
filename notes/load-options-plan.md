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

Each PR is one family, small enough to check by eye; lead runs `cargo check`.

1. This plan.
2. Fields for the six env-only gates (delphiabi, debuglink, exporttrie,
   ruststdsigs, dwarfscopes, dwarfenumtypedef); readers go through `scoped()`.
   No writer changes. (Behaviour: environment-mode loads read the same
   variables; explicit loads, test-only, read the shipped defaults.)
3. Console owns `LoadOptions` (`IfaceDecompData::load_options`, `load file`,
   `load raw`, `option` copy-back).
4. option_dispatch stops writing: every `set_*_env` call, the two inline
   `set_var`s, `export_env` calls, `reset_wire_defaults`'s `set_env`.
5. CLI in-process loads explicit (`apply_to_process`, `export_image_selection`,
   `take_global_image`, `followimages`, `unpack/dyld.rs`); `decompile_all`,
   `strings`, `blobs`, `fid`, `lumina`, `callwide`, `projectfunctionnames`.
6. wasm `load_program`.
7. Drop environment mode, `UNLACE_GOVERSION` write, harness `restore_option_env`,
   the unused `set_*_env` helpers and `export_env`; fix the tests that set the
   variables to fake input.
8. CLI plumbing variables -> `paths::Overrides`; `docs/cli.md` environment table.
