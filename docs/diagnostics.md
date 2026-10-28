# Diagnostics: tracing targets and configuration

`unlace` reads no `UNLACE_*` environment variables. Settings and limits live in
the TOML configuration (`unlace.example.toml`, `unlace config show`); trace and
dump output is `tracing` events on stderr, selected with `RUST_LOG` or
`--log <filter>` (`EnvFilter` syntax, default `warn`).

## Filter cookbook

```bash
# One area, every function.
unlace --log unlace::sccp=debug decompile fixtures/medium.elf
# One area, one function: restrict the run with --function.
unlace --log unlace::cprinter::prune=debug decompile --function main fixtures/medium.elf
# Every area inside one function's span (works for whole-binary runs and batch).
unlace --log '[function{name=main}]=debug' decompile fixtures/medium.elf 2>&1 | grep unlace::cprinter
# Prefix every line of an area trace with its function span.
unlace --log 'unlace::function=info,unlace::var_naming=debug' decompile fixtures/medium.elf
# Every event inside one pass (start/done, IR diff, the pass's own trace).
unlace --log 'unlace::pass[pass{name=sccp}]=trace' decompile --function main fixtures/loops.elf
```

Span filters (`[span{field=value}]`) enable *all* events inside the matching
span. A target before the brackets restricts which spans match, not which
events print, so `unlace::sccp[function{name=main}]` matches nothing (the
function span's target is `unlace::function`); combine `--function` with an
area target, or a span filter with `grep`. Span-field values are regular
expressions matched against the whole value, so `name=.*ackermann.*` selects
by substring. Message text filtering (the old `*_TRACE_FILTER` substrings) is
`2>&1 | grep`. Targets are hierarchical: `unlace::cprinter=debug` enables
every `unlace::cprinter::*` trace, and `unlace=debug` is the old
`UNLACE_TRACE_ALL`. `debug` is the normal trace level; `trace` adds the former
`*_VERBOSE` / `*_FULL` detail.

## Targets

| Target | Former variable(s) |
|---|---|
| `unlace::function` (info span) | — (scopes all per-function events) |
| `unlace::lift` | `UNLACE_LIFT_TRACE` (facade) |
| `unlace::lift::x86`, `unlace::lift::x86::x87` | `UNLACE_LIFT_TRACE`, `UNLACE_X87_TRACE` (lifter) |
| `unlace::lift::ppc`, `unlace::lift::v850` | `UNLACE_PPC_LIFT_TRACE`, `UNLACE_V850_LIFT_TRACE` |
| `unlace::lift_bounds` | `UNLACE_LIFT_BOUNDS_TRACE` |
| `unlace::discover` | — (one event per discovered function: addr, size, name; dropped starts and why) |
| `unlace::cfg_build` | `UNLACE_CFG_BUILD_TRACE` |
| `unlace::ssa` | `UNLACE_SSA_TRACE` |
| `unlace::pipeline` (`trace` = details) | `UNLACE_PIPELINE_TRACE`, `_VERBOSE` |
| `unlace::pass` (span `pass{name}`) | `UNLACE_PASS_TRACE` |
| `unlace::pass::ir` (trace) | `UNLACE_TRACE_PASSES` |
| `unlace::timing` (info) | `UNLACE_TIMING` |
| `unlace::schedule` (info) | `UNLACE_VALIDATE_PIPELINE` |
| `unlace::sccp`, `unlace::const_fold`, `unlace::copy_prop`, `unlace::dce` | `UNLACE_SCCP_TRACE`, `UNLACE_CONST_FOLD_TRACE`, `UNLACE_COPY_PROP_TRACE`, `UNLACE_DCE_TRACE` |
| `unlace::bool_simplify`, `unlace::alias`, `unlace::cfg_repair` | `UNLACE_BOOL_TRACE`, `UNLACE_ALIAS_DUMP`, `UNLACE_CFG_REPAIR_TRACE` |
| `unlace::stack::access`, `unlace::stack::frame` | `UNLACE_STACK_ACCESS_TRACE` / `UNLACE_STACK_TRACE`, `UNLACE_STACK_FRAME_TRACE` |
| `unlace::calling` (`trace` = verbose), `unlace::calling::signature` | `UNLACE_CALLING_TRACE`, `UNLACE_SIGNATURE_TRACE` |
| `unlace::call_args`, `unlace::interproc` | `UNLACE_CALL_ARGS_TRACE`, `UNLACE_INTERPROC_TRACE` |
| `unlace::x87` | `UNLACE_X87_TRACE` (x87 TOP pass) |
| `unlace::cpp_vtable` | — (debug: per virtual dispatch, receiver class and slot method, or `class=unknown` with the receiver's defining op) |
| `unlace::lvar`, `unlace::variable_merge`, `unlace::register_coalesce`, `unlace::var_naming` | `UNLACE_LVAR_TRACE`, `UNLACE_VAR_MERGE_TRACE` / `UNLACE_INTERFERENCE_TRACE`, `UNLACE_REG_COALESCE_TRACE`, `UNLACE_VAR_NAMING_TRACE` |
| `unlace::dwarf_map`, `unlace::jump_table` | `UNLACE_DWARF_MAP_TRACE`, `UNLACE_JUMPTABLE_TRACE` |
| `unlace::hir` (`trace` = details) | `UNLACE_HIR_TRACE`, `_VERBOSE` |
| `unlace::engine` (debug: per-function timing; info: batch summary) | — (`--engine ghidra`) |
| `unlace::struct` and `unlace::struct::*` | `UNLACE_STRUCT_TRACE`, `UNLACE_SPLIT_TRACE`, `UNLACE_LABEL_*_TRACE`, `UNLACE_GOTO_ELIM_TRACE`, `UNLACE_EMPTY_IF_TRACE` |
| `unlace::cprinter` and `unlace::cprinter::*` | `UNLACE_CPRINTER_*`, `UNLACE_C_PRINTER_TRACE`, `UNLACE_CPRINTER_PIPELINE` |
| `unlace::quality` (debug: CALLOTHER classes, each `unknown-type` varnode with its defining/using ops) | `UNLACE_QUALITY_TRACE` |
| `unlace::mcp` | — (`unlace-mcp` server start/stop) |

## Configuration keys that replaced variables

| Key | Former variable |
|---|---|
| `passes.disabled`, `passes.bisect_limit`, `passes.verify_each` | `UNLACE_DISABLE_PASSES`, `UNLACE_OPT_BISECT_LIMIT`, `UNLACE_VERIFY_EACH` |
| `passes.sccp.max_work`, `passes.sccp.max_vars` | `UNLACE_SCCP_MAX_WORK`, `UNLACE_SCCP_MAX_VARS` |
| `passes.iv_opt.max_nodes` | `UNLACE_IV_OPT_MAX_NODES` |
| `passes.variable_merge.max_coalescible_vars` | `UNLACE_VAR_MERGE_MAX_COALESCIBLE_VARS` |
| `passes.type_constraint.max_constraints` | `UNLACE_TYPE_CONSTRAINT_MAX_CONSTRAINTS` |
| `passes.diagnostics.timing_csv`, `.schedule_audit`, `.maturity_dump`, `.linkscope_pass_names` | `UNLACE_TIMING_CSV`, `UNLACE_SCHEDULE_AUDIT`, `UNLACE_MATURITY_DUMP`, `UNLACE_LINKSCOPE_PASS_NAMES` |
| `structure.max_phis`, `.fallback_max_blocks`, `.fallback_max_insns`, `.max_reaching_condition_nodes` | `UNLACE_STRUCT_MAX_PHIS`, `UNLACE_STRUCT_FALLBACK_MAX_BLOCKS`, `UNLACE_STRUCT_FALLBACK_MAX_INSNS`, `UNLACE_RC_MAX_COND_NODES` (`UNLACE_STRUCT_FULL_FALLBACK=1` is both fallback limits at `0`) |
| `printer.*` | `UNLACE_MAX_LINE_WIDTH`, `UNLACE_TAB_WIDTH`, `UNLACE_INDENT`, `UNLACE_WRAP_FLOOR`, `UNLACE_FORMAT_FLAGS` |
| `batch.worker_stack_mb`, `.large_function_serial_bytes`, `.interproc_max_functions` | `UNLACE_WORKER_STACK_MB`, `UNLACE_BATCH_LARGE_FUNCTION_SERIAL_BYTES`, `UNLACE_INTERPROC_MAX` |
| `linkscope.*` | `UNLACE_LINKSCOPE`, `_TRACE`, `_TRACE_STACK`, `_TRACE_DETAIL`, `_TRACE_STACK_DETAIL`, `_JSON`, `_MERMAID`, `_NO_REPORT`, `_REPORT_INTERVAL_SECS` |

Command-line flags: `decompile --capture-dir` (was also `UNLACE_DECOMPILE_CAPTURE_DIR`),
`batch --progress` (was also `UNLACE_PROGRESS=1`), `xtask semantic-report
--trace/--keep-temps/--runner <fixture-or-arch>=<path>` (`UNLACE_SEMANTIC_*`),
`xtask type-recovery-report --trace/--trace-verbose/--trace-filter/--trace-fixture/--no-missing-ledger`
(`UNLACE_TYPE_TRACE*`, `UNLACE_MISSING_LEDGER`).

Removed A/B toggles (the default path is now the only path):
`UNLACE_DREAM_STRUCT`, `UNLACE_HIR_CSE`, `UNLACE_HIR_LICM`,
`UNLACE_EXPERIMENTAL_OLD_PASSES`, `UNLACE_VERIFY_STRICT_DOM`.
