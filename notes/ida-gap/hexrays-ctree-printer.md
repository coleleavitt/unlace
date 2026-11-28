# Hex-Rays ctree transforms and C printer vs unlace P7-P9 (2026-11-24)

Scope: what Hex-Rays (hexx64 9.5) does between microcode and text (ctree rules, loop and if shaping,
casts, variable naming and merging, struct/array idioms, string, enum and constant printing,
comments, layout), and whether unlace's P7 (edge virtualization), P8 (structure) and P9 (emit) do it.
It extends, and does not repeat, `notes/ida-hexrays-rules.md` (rule names and addresses, the CAST/IF/
FOR/... family table), `notes/ida-gaps.md` and `notes/ida-module-survey.md`.

Method.
- IDA: `~/SiteResearch/ida-pro/hexx64.sqlite` (`select text from pseudocode where ea=<addr>`), the
  string-to-function links in `derived/ida-links.sqlite` (`string_users`), and the shipped
  `hexrays.cfg` (9.5: `HEXOPTIONS = 0x700831FF`, the `HO_*` bits, `DEFAULT_RADIX`, `MAX_NCOMMAS`,
  `ARG_HINTS_MODE`, `HELPER_NAMES`). "sub_X" is a hexx64 function.
- unlace: `crates/unlace-decomp/phases.toml` rows (cited as `phases.toml:<line>`, main at 2026-11-24)
  and `codegraph query` for the implementing functions (cited as `file:line`).
- Counts: per 1,000 output lines, DecBench O2-noinline, the 47 binaries of the issue-9 A/B
  (unlace `unlace-2feb8da847`, 921k lines, 29,231 functions) against the stored IDA column of the same
  files (1,182k lines, 27,557 functions; an older IDA run, so treat as indicative). Scripts:
  `scratchpad/i9/cnt2.py`, `casts.py`, `vars.py` of the issue-9 session (regex counts over `.c`).

| measure (per 1k lines unless noted) | unlace | IDA |
|---|---:|---:|
| `for (` | 1.8 | 2.1 |
| `while (` | 9.5 | 8.9 |
| `do {` | 6.7 | 3.7 |
| `goto` | 15.0 | 21.9 |
| labels per function | 0.32 | 0.56 |
| `break;` / `continue;` per function | 0.26 / 0.019 | 0.34 / 0.034 |
| `switch` | 0.9 | 0.8 |
| `CONCATnn(` + `SUBnn(` | 2.6 | 0 |
| `LODWORD`/`HIDWORD`/`BYTEn`/... + `__PAIRnn__` | 0 | 6.9 |
| C casts (type names only), total | 153,030 (166/kLOC) | 162,548 (138/kLOC) |
| ... of which `(unsigned int *)` | 20,067 | 2,363 |
| character literals | 7.4 | 0.7 |
| string literals | 57.2 | 45.9 |
| `->` | 30.5 | 1.2 |
| declared locals per function | 3.2 | 5.8 |
| `NULL` / `true`,`false` | 14.1 / 3.6 | 0.1 / 0 |

## Technique table

Status: **have** (equivalent), **partial**, **missing**, **ours-better**. Size: S < 1 PR-day, M a few
PRs, L a track.

| # | technique | what Hex-Rays does (evidence) | unlace (evidence) | status | impact | proposed task |
|---|---|---|---|---|---|---|
| 1 | Cast elimination | 28 ctree cast rules `CAST-1` sub_2E6970 .. `CAST-28` sub_2EB920; `ENSURE_CORRECT_INTEGER_PROMOTION` sub_2EF2F0 places only the casts C's promotions need; `HO_DISPLAY_CASTS` can hide all | Ghidra `CastStrategyC` (`crates/unlace-emit/src/p9_emit/cast.rs`) plus `castimplied` phases.toml:4837 (`castimplied.rs:222`), `castsign` :4859, `castwiden` :4903, `castnarrow` :4922, `castindex` :5183, `castternary` | partial | 20% more casts per line; `(unsigned int *)` 8.5x IDA's count: a pointer cast on every load through a pointer whose pointee type disagrees with the access | M: rule-by-rule pass over CAST-1..28 against our cast sites, starting with the pointer-retype casts (IDA retypes the variable as `_DWORD *` instead of casting each use) |
| 2 | Partial-register / pair macros | `HILO` rule in sub_2EEA50 prints `LOBYTE`/`HIBYTE`/`BYTEn`/`LOWORD`/`HIWORD`/`WORDn`/`LODWORD`/`HIDWORD`/`DWORDn` (`S` prefix for signed); `__PAIRnn__` sub_27D930, `__SET_PAIR__` sub_282040 | Ghidra tokens `CONCATnn`/`SUBnn` (`get_output_token_piece` coreaction_casts.rs:1276, `get_output_token_subpiece` :1206); `partialaccess` phases.toml:1436 prints field-less partial accesses as C; `wideconst` :2424 | partial | 2.6/kLOC CONCAT/SUB tokens that are not C and that no reader knows the byte order of | M: option `pieceformat ghidra\|macros\|c` (macros = IDA's names with a `defs.h`-style preamble; c = shifts and masks) |
| 3 | for/while/do shaping | `FOR-1` sub_302EC0, `FOR-2` sub_3012F0, `FOR-3` sub_3033E0, `WHILE-1..5` sub_301880.., `DO-1..5` sub_302760.., `LOOP-1/2` sub_301D50 | Ghidra `find_initializer`/iterate op (funcdata_block.rs:583, `emit_block_while_do` printc/, `emit_block_do_while` :7476), `looprotate` phases.toml:2950, `guardedloop` :2972, `loopcontinue` :4138, `loopbreak_recovery` :4714, `infloopstyle` :7980 | partial | do-while 1.8x IDA, for 0.86x; continue half of IDA's | M: diff the loops one decompiler prints as `for`/`while` and we print as `do` (DecBench pairs), then extend `guardedloop`/`looprotate` |
| 4 | if-chain and goto shaping | `IF-1..15` sub_2DA810.., `GOTO-1..8` sub_2E0940.., `INVERT_JX_GOTO`, `HO_FAST_STRUCTURAL` | `regionstructure`, `branchflip` phases.toml:4695, `ifelseflatten` :4293, `gotoreduce` :4274, `gotonext` :8574, `nestedand` :8742, `condcallpush` | ours-better | goto 15.0 vs 21.9/kLOC, labels 0.32 vs 0.56 per function | none |
| 5 | Switch shaping | `MERGE_SWITCH_TREES`, `MERGE_GUARDED_SWITCHES`, `ABSORB_EQ_GUARD` sub_2F5E60/sub_2F6EB0 | `switchmerge` phases.toml:8596, `switchreturn` :4505, `switchguardmerge`, `loweredswitch`, `emit_block_switch` printc/ | have | switch 0.9 vs 0.8/kLOC | none |
| 6 | Boolean selects and returns | `CONVERT_IF_TO_SET` sub_18D990, `RECOGNIZE_SETNZ` sub_18DE60, `RETURN-1/2/4` sub_2EC150.. | `iteboolean` phases.toml:4429, `iteregion` :4391, `boolreturn` :8704 (default on since #815: -475 GED on 266 functions) | have | measured on #9 | (open: `orexit` stays off) |
| 7 | Variable naming | `v%d`/`a%d` sub_4CE840; callee-parameter names from the type library propagate to the argument variables; `i`/`j`/`k` loop counters; `result`; `MAX_NICE_NAME_LENGTH` | `namestyle` phases.toml:4733 (angr `vN`/`aN`), `libcnames` :4985 (on: names from libc prototypes), `contextnames` :5007 (off: loop counters by nesting depth), `flownames` :5029 (off: from fields and types), `declorder` :4944 | partial | `contextnames`/`flownames` never measured for a default | S: measure `contextnames` and `flownames` (does it fire, does it read better, no GED effect) and propose defaults |
| 8 | Variable merging and splitting | lvar allocation with fragment checks (`WARN_FRAG_LVAR`, `WARN_WOULD_OVERLAP`), user map/unmap | Ghidra `Merge` + `typemerge` phases.toml:7659, `phiarm`, `calleesaved`, `dedupvardecls` :5388, `impliedrefs`/`foldcallret` inlining | ours-better (count) | 3.2 locals per function vs 5.8 | none (over-merge risk is tracked by issue20's opt-in unmerge options) |
| 9 | Struct field, array and container idioms | `MEMREF-2` 0x2EBCA0; `CONTAINING_RECORD` from a negative field offset sub_4B56B0 ("recognized CONTAINING_RECORD", `WARN_CR_NOFIELD`/`BADOFF`); `HO_BITFIELD_ACCESS` | `arraynotation` phases.toml:1376, `castindex` :5183, `castarith`, `postinc` :1458, structure recovery (`->` 30.5/kLOC), `p5_types/bitfield.rs` for typed bitfields; no container_of | partial | `->` 25x IDA's on stripped code; container_of absent | M: `containerof` option: a pointer at `&s->f` stepped back by `offsetof(S, f)` prints `CONTAINING_RECORD(p, S, f)` / `container_of` |
| 10 | Bitfield access | `HO_BITFIELD_ACCESS`: masks and shifts on a bitfield-typed member print as `x->field` | `p5_types/bitfield.rs` (`bitfield_big_endian` :88) for DWARF/PDB bitfields, `castnarrow` | have (typed) | same precondition as IDA (a type with bitfields) | none |
| 11 | String literals | `HO_CONST_STRINGS` (only read-only memory), `MAX_STRLIT_LENGTH` 4096, `HO_SHOW_CSTR_CASTS`, wide strings | `cstringconst` phases.toml:1559 (`cstringconst.rs:187`), `widestrings32` :5561 (off), `print_unicode` printc/ | have | strings 57.2 vs 45.9/kLOC | none |
| 12 | Character constants | `DEFAULT_RADIX` 0: decimal for signed, hex for unsigned; a char only prints as a character when it is printable and the context is character data | `print_character_constant` printc/ prints every `char`-typed constant as a character literal; `charbyte` phases.toml:5139 (on) keeps more loaded bytes `char`-typed, so more constants meet it (`'\\0' <= a0`, `'\\x03'`) | partial | 7.4 character literals/kLOC vs 0.7; most are `'\\0'` in signed tests | S: print a `char` constant as a number when it is compared or used arithmetically and is 0 or not printable (a fix of the render, or a `charlit` refinement of `charbyte`) |
| 13 | Enum constants | `AUTOCONV_TO_ENUM`/`AUTOCONV_CPP_CONST` sub_2D8BD0: a constant compared with or assigned to an enum-typed value becomes the member | Ghidra prints members of enum-typed varnodes; no conversion of an untyped side | partial | listed in `ida-hexrays-rules.md` gap 6 | S-M (see that note) |
| 14 | C++ constants | `HO_CPP_CONSTANTS`: `true`/`false`/`nullptr` (sub_2D3660 checks `0`, `NULL`, `nullptr`) | prints `NULL` (14.1/kLOC) and `true`/`false` for bool | have (C spelling) | - | S: `nullptr` when the output language profile is C++ |
| 15 | Argument name hints | `ARG_HINTS_MODE` (`/*name=*/` comments or inlay hints) from the callee prototype | none in C output (`com` and `contextnames` name variables, not arguments) | missing | readability only; GED-neutral | S-M: option `arghints` printing `/*name=*/` before an argument whose callee prototype names the parameter and whose expression is a constant |
| 16 | Helper-name family | `HELPER_NAMES` auto/MSVC/GNU for every builtin (`_byteswap_ulong`/`__builtin_bswap32`, `__popcnt`, `_Interlocked*`/`__sync_*`) | `atomics` phases.toml:1930 (`auto\|msvc\|gcc`), `bitidioms` :1600, `helperroles` :1644, `avxintrinsics` | partial | only atomics follow the compiler | S: one `helpernames auto\|msvc\|gnu` switch that `bitidioms`/rotates/bswap/popcount read, as `atomics` already does |
| 17 | Inlined string and memory operations | sub_1A7600: `rep stos`/`movs` to `memset`/`memcpy`/`strcpy`/`wmemcpy`/`wmemset`/`wcscpy`; `handle_inlined_memcpy_strcpy33`/`memset58` sub_4C9AD0; `qmemcpy` when overlap is not excluded sub_2737C0 | `repstring` phases.toml:1908, `memsetrecover` :2015, `copyrun` :1971, `strlenscan` :1886 | have | helper calls 4.2 vs 3.4/kLOC | none |
| 18 | Comparison orientation and radix | variable on the left, constant on the right; `DEFAULT_RADIX` | `compareform` phases.toml:1354 (default `original`: keeps `V <= c` instead of Ghidra's `V < c+1`; it does not choose the side); Ghidra puts the constant on the left (`0x3b < x`); constants mostly hex | partial | many guards print `0x3b < a0->field_0x5` | S: put the variable on the left of an ordered compare against a constant (a new value of `compareform`, or its own option), and print small signed constants in decimal |
| 19 | Comments | `COMMENT_INDENT` 48, user/EOL comments, `// [rsp+8h] [rbp-10h]` on declarations | `warnstyle` phases.toml:1581 (inline slugs), storage comments on declarations (`// rax \| stack - 0x18`), `emit_comment_func_header` printc/, `emit_line_comment` :5549 | have | - | none |
| 20 | Layout | `RIGHT_MARGIN` 120 splitting, `BLOCK_INDENT` 2, `ALIGN_ASSIGNMENTS`, `GENERATE_EMPTY_LINES`, `HO_KEEP_CURLIES`, `HO_SINGLE_LINE_PROTO` | Ghidra line breaking, `braceelide` phases.toml:1417, `voidtailreturn` | have (core) | - | L value: none |
| 21 | Comma limit | `MAX_NCOMMAS` 8: more commas in one expression become a goto | `condstmts` (3 statements folded into a condition) | have | - | none |
| 22 | Out-of-function flow | `HO_JUMPOUT_HELPERS`: `JUMPOUT(addr)` sub_27C980 instead of failing | tail calls (`tailcalljump`), `halt_baddata` (1.2 vs 0.6/kLOC) | partial | - | S: count our `halt_baddata`/unreachable markers against IDA's JUMPOUT on the same functions before deciding |
| 23 | Sign-bit tests | `HO_SIGNBIT_CHECKS`: `(int)x < 0` on an unsigned `x` becomes `(x & 0x80000000) != 0` and the reverse for signed | not checked | unknown | - | S: check which form we print, then decide |
| 24 | Unordered float compares | `HO_HIDE_UNORDERED`: `!(x < y)` prints as `x >= y`, NaN tests next to a compare of the same values are dropped | `aeabifloat`, `cmpmerge` (off), Ghidra `FLOAT_NAN` printing | partial | - | S: an option to hide the unordered half of a compare, as IDA does by default |

## Top 10 (ranked by expected readability/GED value over effort)

1. **Pointer-retype casts** (row 1, M). `(unsigned int *)` alone is 20k casts in 921k lines (IDA 2.4k in
   1.18M). Type the pointer variable from its loads (IDA's `_DWORD *`) instead of casting each use; then
   walk the CAST-1..28 bodies for the rest.
2. **Piece macros** (row 2, M). `CONCATnn`/`SUBnn` are not C; add `pieceformat macros|c` and measure GED
   and recompilability.
3. **Loop shaping** (row 3, M). We print 1.8x IDA's do-whiles and fewer fors and continues; mine the
   DecBench pairs where IDA has `for`/`while` and we have `do`, extend `guardedloop`/`looprotate`.
4. **Character constants** (row 12, S). 10x IDA's character literals, mostly `'\\0'` in signed tests.
5. **Container idiom** (row 9, M). `CONTAINING_RECORD`/`container_of` from a negative field offset.
6. **Comparison orientation and radix** (row 18, S). Variable-left ordered compares, decimal small signed
   constants.
7. **Argument name hints** (row 15, S-M). `/*name=*/` for constant arguments of prototyped callees.
8. **Naming defaults** (row 7, S). Measure `contextnames`/`flownames` for a default flip.
9. **Helper-name family switch** (row 16, S). Extend `atomics`' compiler choice to every builtin spelling.
10. **Enum auto-conversion** (row 13, S-M), as in `ida-hexrays-rules.md` gap 6.

Where unlace is already ahead on these counts: fewer gotos (15.0 vs 21.9/kLOC) and labels, fewer
declared locals per function, struct field accesses on stripped code (`->` 30.5 vs 1.2/kLOC), and the
boolean-return/select folds measured on issue #9.
