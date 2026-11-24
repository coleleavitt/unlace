# IDA 9.5 design limits, from its own binaries (2026-11-24)

What IDA Pro 9.5 and Hex-Rays cannot do well by construction: one database per process at a time, a
main-thread kernel, a 1990 B-tree store with 1 KB values, hard caps in the decompiler. Each claim
names the function (address inside the IDA 9.5 Linux module), the evidence, and a query that
re-checks it. For positioning: what we can say about unlace next to IDA, without overclaiming.

Sources (read-only): the idb-rs SQLite exports of IDA's own modules in
`~/SiteResearch/ida-pro/` (`libida.sqlite` = `sqlite/core__libida.sqlite`, libida.so 45.6 MB,
59,809 functions, pseudocode for 59,317; `sqlite/<category>__<module>.sqlite` for the 45 other
modules), `callgraph.sqlite` (1,024,632 call edges across 45 modules) and the derived link
database `~/SiteResearch/ida-pro/derived/ida-links.sqlite`, built by
`~/SiteResearch/ida-pro/derived/build_links.py` (stdlib Python, re-runnable, about 15 s). Config values
are from `~/.local/share/ida/9.5/cfg/{ida,hexrays}.cfg`. Pseudocode excerpts are Hex-Rays output of
IDA's own code, trimmed.

Shell helpers used below:

```sh
IDA=~/SiteResearch/ida-pro
q() { sqlite3 -readonly "$1" "$2"; }           # q DB SQL
L=$IDA/libida.sqlite; CG=$IDA/callgraph.sqlite; D=$IDA/derived/ida-links.sqlite
```

## 1. One current database per process: a global pointer read by 1,842 functions

libida keeps "the" database in one global, `qword_2D960F8` (the current `dbctx`). Every kernel
API reaches its state through it: `netnode_check` (0x857B00) reads `*(qword_2D960F8 + 1744)`,
`netnode_supset` (0x857230) passes `qword_2D960F8 + 1744`, `get_undo_param` (0x5D7850) reads
`+1856`, `is_database_busy` (0x416CE0) reads `*(*(qword_2D960F8 + 1680) + 2457)`.

- 1,842 functions reference the global (xrefs, owner function resolved through chunks); 1,821 of them
  show it in pseudocode, at 65 distinct field offsets up to +1920. Offset +1680 alone is read by 1,284
  functions.
- `switch_dbctx` (0x416BD0) swaps the global under one mutex (`qword_2D96108`) and also rewrites the
  global `dbg` (the debugger) from the new context; an index past `get_dbctx_qty()` is `interr(1854)`:

  ```c
  qmutex_lock(qword_2D96108);
  if ( a1 >= (unsigned __int64)xmmword_2D96118 ) interr(1854);
  v3 = *(_QWORD *)(qword_2D96110 + 8 * a1);
  if ( v3 != 0 && qword_2D960F8 != v3 ) { qword_2D960F8 = v3; dbg = *(_QWORD *)(v3 + 624); }
  qmutex_unlock(v2);
  ```
- Only 7 functions touch that mutex; the 1,842 readers do not lock. Several open databases (idalib
  9.x) therefore means: one is current, the caller switches, nothing else may run meanwhile.
- Hex-Rays has to re-assert the context itself: hexx64 calls `switch_dbctx` at 289 sites, hexarm
  likewise (583 sites across hexx64, hexarm, arm; `api_fanin` below).

Re-check:
```sh
python3 - <<'EOF'   # owners of xrefs to the dbctx global
import sqlite3,bisect,os
db=sqlite3.connect("file:"+os.path.expanduser("~/SiteResearch/ida-pro/libida.sqlite")+"?mode=ro",uri=True)
r=sorted([(s,e,s) for s,e in db.execute("select start,end from functions")]+[(s,e,o) for s,e,o in db.execute("select start,end,owner from function_chunks")])
st=[x[0] for x in r]
def own(a):
    i=bisect.bisect_right(st,a)-1; return r[i][2] if i>=0 and r[i][0]<=a<r[i][1] else None
print(len({own(f) for (f,) in db.execute('select frm from xrefs where "to"=0x2d960f8')}-{None}))
EOF
q $D "select callee_name,n_modules,sites,modules from api_fanin where callee_name in ('switch_dbctx','get_dbctx_id')"
```

unlace: there is no current-database global; a `Decompiler` owns its program, one per thread
(`docs/api.md`: not `Send`, reference-counted state), and `decompile-all --jobs N` runs worker
processes. Caveat to state with it: a load still sets process environment variables for its load-time
gates (`docs/api.md`), so two loads with different gates in one process are not independent yet.

## 2. Main-thread kernel; other threads queue a request and wait

- `is_main_thread` (0x8E6AA0) records the first caller's `pthread_self()` in a lazily created global
  (`qword_2DA1C70`) and compares against it.
- idalib's request path (libidalib `sub_9CD50`) runs the callback directly only on the main thread;
  any other thread takes a mutex, enqueues the request (a vector of 24-byte entries), creates a
  semaphore and waits:

  ```c
  if ( (a3 & 4) == 0 && is_main_thread() ) return (**(__int64 (***)(__int64))a2)(a2);
  qmutex_lock(*(_QWORD *)(a1 + 56));
  ...
  v20 = qsem_create(0, 0);
  ```
- The whole of libida creates threads at three sites (`qthread_create` 0x8E6B00, `sub_9A4C80`, the PLT
  stub); Hex-Rays (hexx64) creates none and holds a single mutex (`qmutex_create/lock/unlock/free`,
  one site each). Decompilation is single-threaded per process.

Re-check: `q $CG "select caller_mod,count(*) from calls where callee_name in ('qthread_create','pthread_create') group by 1"`,
`q $D "select callee_name,sites from api_use where caller_mod='hexx64' and callee_name like 'q%thread%' or (caller_mod='hexx64' and callee_name like 'qmutex%')"`.

unlace: parallel by process (`--jobs`), and by decode lanes in discovery (`UNLACE_DECODE_JOBS`,
`docs/cli.md`). No main-thread rule.

## 3. Storage: a 1990 B-tree with values capped at 1 KB, every write journaled for undo

- The ID0 store is a B-tree whose banner strings are `B-tree v 1.5 (C) Pol 1990` (`sub_7E2DD0`) and
  `B-tree v 1.6 (C) Pol 1990` (`sub_7D5100`, `sub_7D4070`, `sub_7D4E60`); the v2 header writer is
  `sub_7D4430`. Error strings: `too many trees`, `tree height limit exceeded`,
  `too small page size`, `too high database version, use newer version of B-tree`,
  `!!!VARRAY CORRUPTED: bad page size in the header` (`sub_960A90`), `Corrupted netnode metainfo`
  (`sub_847330`).
- Every database fact is a netnode value. The value writer behind `netnode_supset` (`sub_849B10`)
  silently truncates a value to 1,024 bytes and byte-swaps keys to big-endian:

  ```c
  if ( a5 == 0 ) v10 = strlen(a4) + 1;
  if ( v10 > 0x400 ) LOWORD(v10) = 1024;
  ...
  v12 = swap64(a2);
  if ( *(_BYTE *)(*(_QWORD *)v7 + 6020LL) != 0 && must_journal() ) {
      v15 = sub_7D56F0(v14, ..., &ptr);
      add_undo_record(1u, ptr, v19);
  ```
  So larger blobs are split by every caller (blob APIs), and every write during analysis also builds an
  undo record (`UNDO_DURING_AA = YES` by default).
- Undo caps (ida.cfg): `UNDO_MAXSIZE = 0x8000000` (128 MB of buffers), `UNDO_DEPTH = 1000000`;
  `set_undo_param` (0x5D78D0) drops the oldest records when the count passes the depth.
- 32/64-bit split: a separate `libida32.so` (8.7 MB) and `libidalib32.so` still ship; libida refuses
  a 32-bit database with `Please use 32-bit version of IDA to open %s` (`sub_5EBB70`).
- Batch mode: `Opening an already existing database in batch mode causes the file to be deleted: %s`
  (`sub_39EE50`): a `-B` run over an existing .i64 starts from scratch.
- Corruption is a user dialog: `The database is corrupted ... Do you want IDA to repair it?`
  (`validate_idb`), `Read error. The database is corrupted beyond repair.` (`sub_5F14B0`),
  `CRC32 mismatch` (`sub_5EBB70`).

Re-check: `q $D "select text,func_name from string_users where mod='libida' and (text like '%B-tree%' or text like '%batch mode%' or text like '%corrupted%')"`,
`q $L "select substr(text,1,1600) from pseudocode where ea=0x849B10"`.

unlace: no persistent store in the decompile path; the project file (`unlace project`, `docs/project.md`)
is SQLite with WAL and schema migrations, values of any size, read-only `project query`.

## 4. Hard caps in Hex-Rays and the kernel

| cap | value | where |
|---|---|---|
| function size decompiled | 64 KB (`MAX_FUNCSIZE = 64`; `too big function`) | hexrays.cfg:75; option dialog in hexx64 `sub_3C1EB0` |
| stack frame | 2 MB (`MAX_STACKSIZE = 0x200000`; `stack frame is too big`) | hexrays.cfg:77 |
| call arguments | 64 (`MAX_FUNC_ARGS`), clamped with `MAX_FUNC_ARGS (%d) exceeds limit, decreased to %u`; `too many input arguments, some ignored`, `too many varargs, some ignored` | hexrays.cfg:79, hexx64 `sub_3C1EB0`/`sub_3C2DD0`/`sub_3C7020`/`sub_3C12D0` |
| comma operators per expression | 8 (`MAX_NCOMMAS`) | hexrays.cfg:59 |
| string literal | 4096 (`MAX_STRLIT_LENGTH`) | hexrays.cfg:66 |
| switch cases optimised | `limit_switch_ncases_for_optimization` | hexx64 strings |
| other give-ups | `too complex function`, `too many cbuild loops`, `max recursion depth reached during lvar allocation`, `argloc too complex to serialize` (`sub_BF8F0`), `Too long/wide enum` (`sub_41EC70`) | hexx64 strings |
| register tracking | `REGTRACK_MAX_DEPTH = 100`, `REGTRACK_FUNC_MAX_DEPTH = 100`, `REGTRACK_MAX_XREFS = 256`, `REGTRACK_MAX_VALS = 100`, `REGTRACK_MAX_BBLK_INSNS = 2000` | ida.cfg:924-938 |
| item listing | `MAX_ITEM_LINES = 25000`, `Too many lines` | ida.cfg:469 |
| stack points | a `uint32` count with `-1` sentinel: `%a: too many stack points have been declared` | `sub_613F30` |
| segment move | `Too many chunks are defined, can't move` | `move_segm_strerror` |
| 32-bit only database | `only 32-bit functions can be decompiled in the current database` | hexx64 strings |

Re-check: `q $D "select mod,text,func_name from messages where kind='limit' and mod in ('hexx64','libida') limit 200"`.

unlace: the function budget is `maxinstruction`, 100,000 instructions per function's flow (Ghidra's
default, `crates/unlace-decomp/src/infra/decompile_drive.rs`), and past it the flow is truncated with a
warning (`Too many instructions -- truncating flow here`) instead of refusing the function; jump tables
have `jumptablemax`. `functions --summary` reports which functions exceed either before anything is
decompiled (`crates/unlace-cli/src/limits.rs`). Claim "decompiles functions over 64 KB" only with a
named example from a run.

## 5. One decompiler binary per architecture

Ten Hex-Rays builds ship side by side, each 5.6 to 6.4 MB: hexx64, hexarm, hexmips, hexppc, hexrv,
hexarc, hexv850, hextricore, hexqdsp6, hexdalvik. hexx64 and hexarm have 9,105 and 9,072 functions and
share 2,548 of hexx64's 3,983 strings: the same core compiled per target. Each architecture is a
separately licensed product; there is no decompiler for the other ~64 IDA processor modules (74 in
`procs/`). unlace decompiles every SLEIGH target in `specs/Ghidra/Processors` (44 families) with
one engine.

Re-check: `q $D "select count(*) from shared_strings where modules like '%hexx64%' and modules like '%hexarm%'"`;
`ls ~/.local/share/ida/9.5/plugins/hex*.so ~/.local/share/ida/9.5/procs | wc -l`.

## 6. Licensing gates in the code path

- idalib refuses batch mode until the EULA is accepted interactively: libidalib `sub_41010` reads
  `reg_int_op("EULA 95")` and fails with `License not yet accepted, cannot run in batch mode`.
- libida exports 23 license entry points (`get_license_manager`, `checkout_license`,
  `borrow_license`, `is_floating_license`, ...). Hex-Rays checks expiry and support period
  (hexx64 `sub_3C7960`: `Sorry, your Hex-Rays license has been expired.`, a 3-month grace text) and
  switches decompilers by license (`LicenseManagerAutoSwitchDecompiler`, `sub_154F30`).
- Batch decompilation talks to Lumina (hexx64 `sub_3D6450`:
  `// nfuncs=%zu queued=%zu decompiled=%d lumina nreq=%d worse=%d better=%d`,
  `// skipped because of lumina` `sub_3D0410`): results can depend on a network service.

Re-check: `q $D "select mod,text,func_name from messages where kind='license' and mod in ('libidalib','hexx64')"`.

## 7. Assertion-driven failure

Internal errors are numbered traps: `if (!under_debugger) interr(N); __builtin_trap();`. libida has
1,131 distinct `interr` codes in 1,078 functions; dwarf 70, pc 58, elf 55, pdb 55, avxlifter 65,
goomba 43. A malformed input that reaches one ends the process (or the decompile, for Hex-Rays' own
`hxe_interr`, see avxlifter's `[MCDUMP] hxe_interr errcode=%d`). Re-check with the regex
`interr\((\d+)\)` over each module's `pseudocode`.

## 8. Scale notes

- libida embeds a C/C++ front end for header parsing: 1,566 clang diagnostic strings
  (`%select{...}`) inside libida itself, plus libclpx.so (4,932 functions).
- Hex-Rays depends on the kernel for almost everything: hexx64 calls 538 distinct libida APIs at 20,778
  sites; the most shared kernel APIs across the 45 modules are `get_ph` (41 modules),
  `qvector_reserve`, `qalloc_or_throw` (40), `interr` (37), `netnode_check` (33).
  `q $D "select * from libida_api_by_module order by sites desc"`.

## Not found

No evidence either way in the dumps for: deterministic output across runs (no RNG or clock reads on the
decompile path were looked for systematically), memory ceilings beyond the undo cap, or an overall
function-count limit. Don't claim these.

## The derived database (`ida-links.sqlite`)

| table | rows (2026-11-24) | what |
|---|---|---|
| `modules` | 45 | per module: functions, pseudocode, strings, imports, exports |
| `funcs` | all modules | start, end, name, size, pseudocode length |
| `module_edges`, `api_use`, `api_fanin` | | cross-module calls from `callgraph.sqlite` (callee `extern` = libc/Qt/unresolved) |
| `strings`, `string_refs`, view `string_users` | | every string and the functions that reference it |
| `shared_strings` | | strings present in 2+ modules (shared code, shared messages) |
| `messages` | 9,262 | strings classified `thread`, `license`, `limit`, `unsupported`, `database`, `error`, with users |
| `type_defs`, `type_uses` | | each module's local types and the functions naming them in a prototype or pseudocode |
| `til_type_origin`, `til_symbol_origin` | | which shipped `.til` files (of 154) define a used type or declare an imported symbol |
