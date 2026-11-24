# Named Hex-Rays 9.5 rules, and which have an unlace equivalent (2026-11-24, refreshed at `b56a3b7210`)

New gaps beyond the top 10 of `notes/ida-gaps.md`, mined from the rule names Hex-Rays logs. hexx64
references 313 upper-case identifier strings; about 170 are names of transformations it prints when a
rule fires (`sub_A6240(mba, 1, "REMOVE_USELESS_JX")` for microcode block rules, `"%s: %s"` with the
item for ctree rules when the debug flags at `+1568` have bit 0x08/0x10 set). Query:

```sh
sqlite3 -readonly ~/SiteResearch/ida-pro/derived/ida-links.sqlite \
  "select text, group_concat(distinct func_name) from string_users where mod='hexx64'
   and text glob '[A-Z][A-Z0-9_]*' and length(text) between 4 and 40 group by text"
```

"unlace" below is the option catalog (`docs/options.md`) and `git grep origin/main -- crates`; a rule's
meaning is read from its pseudocode (microcode opcodes: 4 mov, 42 jcnd, 43-52 conditional jumps,
55 goto, 56 call, 57 icall), so treat the "what it does" column as inference.

## 1. Microcode rules (block and instruction level)

| Hex-Rays rule | function | what it does | unlace |
|---|---|---|---|
| `REMOVE_USELESS_JX`, `_JX2`, `_JX3`, `_JX_JXE`, `_JZ_JNZ`, `_JX_VALRANGES`, `REMOVE_USELESS_FP_JX`, `REMOVE_USELESS_SET` | `sub_189100`..`sub_189AD0`, `sub_185980` | delete a conditional jump whose two targets lead to the same block, or whose outcome value ranges decide | yes: Ghidra dead-branch rules + `rangefold`, `condfold` |
| `REMOVE_IDENTICAL_JX` | `sub_18A300` | a conditional jump repeated in a single-predecessor chain of blocks is decided by the first | partial: `rangefold` ("a range check repeated inside the branch of the same check"), `phithread` (#286) when the repeated test reads a merged constant |
| `OPTIMIZE_IDENTICAL_BLOCKS` | `sub_18D3A0` | merge identical predecessor blocks ending in a goto (gated by an mba flag 0x1000) | partial: `dedupitetail`, after structuring, print tree only |
| `EXTRACT_EQUAL_IF_TAIL_INSNS`, `EXTRACT_IDENTICAL_HEAD_IF_INSNS`, `REMOVE_IF_BRANCH` | `sub_18CAD0`, `sub_18CF30` | hoist identical leading/trailing instructions of both arms out of the if, on microcode with def/use checks | yes: `armhoist` (#305, default off; `p2_lift/armhoist.rs`, pre-SSA, before structuring), plus `dedupitetail` on the print tree |
| `CONVERT_IF_TO_SET`, `RECOGNIZE_SETNZ`/`2`, `RECOGNIZE_SETZ`/`SETX` | `sub_18D990`, `sub_18DE60`.. | `if (c) x = 1; else x = 0;` -> `x = c` (both arms one `mov` of 0/1 to the same place) | yes: `iteboolean` (after structuring) and Ghidra's boolean rules |
| `FLATTEN_JNS` | `sub_18BE40` | a block that starts with an `add` followed only by flag-setting `set*` ops feeding a sign jump is folded into the comparison | yes (measured): SLEIGH's `SF = result s< 0` folds through Ghidra's rules; gcc -O2 `if (a + b < 0)`, `(a - b) < 0` and `a + 5 < 0` print as `0 <= a0 + a1`, `a1 <= a0`, `(int)a0 <= -6` on x86-64 and i386 |
| `INVERT_JX_GOTO` | `sub_18ABC0` | invert a conditional jump to drop a goto | yes: structurer |
| **`REMOVE_MUL_OVERFLOW_CHECK`** | `sub_18DC60` | an overflow-checked multiply (jump on the high half, `-1` on overflow) feeding a call becomes the helper `saturated_mul(a, b)`: the `operator new[](n * sizeof(T))` pattern MSVC and clang emit | yes: `satmul` (default off), `p3_dataflow/satmul.rs` |
| `REMOVED SECURITY COOKIE` | `sub_18E880` | drop the cookie check before return | yes: `msvcstackguard`, `stackguard` |
| `SDIV_POWER2`, `SDIVMOD_POWER2`, `SDIV2A`/`2B`, `SMOD2` | `sub_18E9B0`, `sub_18AE70`, `sub_18B8D0`.. | signed division/remainder by 2^k | yes: `pow2select` |
| **`UMOD`, `UMOD-30BIT`** | `sub_12DD80` | an unsigned remainder by an odd constant n written as a fold of 30- or 32-bit chunks: it computes the multiplicative order of 2 mod n (up to 64) and requires it to divide 30 or 32 | **probably none** (Ghidra's `RuleDivOpt` handles magic multiplies, not chunk folding); verify with `x % 3`, `x % 5` at -O2 on a 32-bit target |
| `CMP64-JMP2`, `CMP64-VALRANGES-JMP2`, `JNZ64`, `UNSIGNED-CMP64`, `SAR64`, `SAR2-64`, `DEMOTE64` | `sub_129AD0`, `sub_E1990` | 64-bit compares/shifts on 32-bit targets; DEMOTE64 narrows 64-bit ops whose high half is zero | partial: `unlace_borrowcompare`, `pairparam` (#239), `armpairparam` (#272), `double.rs`; ordered split compares left (gap 8) |
| `BACKPROP_CC %d` | `sub_18F960` | a conditional jump whose condition has several known values from different predecessors (value ranges) is decided per predecessor and those edges are redirected (jump threading) | partial: Ghidra's `ActionConditionalExe` covers the boolean case; yes, opt-in: `phithread` (default off) threads a join whose branch is decided per predecessor by constant MULTIEQUAL inputs (#286); `phithread ranges` also by the value's range from a branch above the edge |
| `MERGE_SWITCH_TREES`, `MERGE_GUARDED_SWITCHES`, `ABSORB_EQ_GUARD` | `sub_2F5E60`, `sub_2F6EB0` | join switch trees and guarded tables into one switch | yes: `switchmerge`, `switchguardmerge`, `loweredswitch` |
| `RESOLVE_TABLE_JUMP`, `RESOLVE_INSN_TABLE_JUMP` | `sub_1E21E0` | jump tables | yes |
| `UNMERGE_CALLS`, `BREAK_PHI_ARM_MERGES` | `sub_191D80`, `sub_1915E0` | see `notes/ida-unmerge.md` | yes, opt-in: `returndup calls` (call tails, one-successor call blocks #293, `CALLIND` blocks #299) and `phithread` (#286) |

## 2. Language constructs in the ctree

| Hex-Rays rule | function | what it does | unlace |
|---|---|---|---|
| **`SYNC_BLOCK`**, **`MONITOR-EXIT`** | `sub_2FA2B0`, `sub_2FA620` | a block bracketed by `monitor-enter(x)` / `monitor-exit(x)` with the catch-all exit handler becomes `synchronized (x) { }` (Dalvik; `is_synchronized` in `sub_455600`) | yes (#311): `javasync` (default off): `p2_lift/javasync.rs` reads the handler, `printc/javasyncprint.rs` prints `synchronized (x) { }` |
| **`MAKE_FINALLY`** | `sub_2FB550` | a `catch (...)` as the last handler whose body ends by rethrowing, with the same code duplicated on the normal path, becomes `finally { }` | yes for DEX (#311, `javasync`, default off): byte-equal copies of F at each range end; MSVC `__finally` funclets are spliced as cleanup pads under `msvceh` (#323, #334) |
| `CREATE_TRY`, `TRY-1`, `THROW-1` | `sub_2FCD20`, `sub_2E1170`, `sub_2E1C60` | build try/throw items | yes for Itanium (`itaniumeh`), DEX (`javatry`) and MSVC (`msvceh`, default off: try/catch from catch funclets #308/#317, `__except` #310/#327, `throw` #314; `notes/ida-msvc-eh.md`) |
| `ENSURE_CORRECT_INTEGER_PROMOTION`, `NEGATE_CONSTANT` | `sub_2EF2F0` | cast placement so C's promotions give the machine result; print `x - 5` not `x + -5` | yes in substance (Ghidra cast rules, `castternary`, `castimplied`) |
| `AUTOCONV_TO_ENUM`, `AUTOCONV_CPP_CONST` | `sub_2D8BD0` | convert a constant compared with or assigned to an enum-typed value to the enum member; C++ const conversions | partial: Ghidra prints enum members for enum-typed varnodes; no automatic retyping |

## 3. The ctree rule catalogue (for the ctree crate)

Hex-Rays numbers its ctree rewrites by family; each function below is one rule and logs its name.
`unlace-ctree` (#196, #201) is building the same layer, so this is a checklist to mine rule by rule
(`select text from pseudocode where ea=<addr>` in `hexx64.sqlite`). Item opcodes in these bodies: 61 =
number, 35/36 and 48 appear in SIMPLE-1/CAST-1; a rule returns 1 when it changed the tree.

| family | rules | names and addresses |
|---|---|---|
| IF | 14 | `IF-1 0x2DA810`, `IF-2 0x2DA9F0`, `IF-4 0x2DAD60`, `IF-5a 0x2DB040`, `IF-5b 0x2DB040`, `IF-6 0x2DB5F0`, `IF-7 0x2DBC80`, `IF-8 0x2DECB0`, `IF-9 0x2DC760`, `IF-10 0x2DD5A0`, `IF-11 0x2E46A0`, `IF-12 0x2DD690`, `IF-13 0x2DDA40`, `IF-15 0x2DDB80` |
| GOTO | 8 | `GOTO-1 0x2E0940`, `GOTO-2 0x2E0A60`, `GOTO-3 0x2E0D90`, `GOTO-4 0x2EC570`, `GOTO-5 0x2EBE10`, `GOTO-6 0x2EC790`, `GOTO-7 0x2E1240`, `GOTO-8 0x2E13E0` |
| SIMPLE | 25 | `SIMPLE-1 0x2E1EA0`, `SIMPLE-3 0x2E2140`, `SIMPLE-5 0x2E2380`, `SIMPLE-8 0x2E2460`, `SIMPLE-9 0x2E2BB0`, `SIMPLE-10 0x2E2F20`, `SIMPLE-11 0x2E3300`, `SIMPLE-12 0x2E3430`, `SIMPLE-13 0x2E39D0`, `SIMPLE-14 0x2E3B80`, `SIMPLE-15 0x2E3C70`, `SIMPLE-16 0x2E3D80`, `SIMPLE-17 0x2E3EF0`, `SIMPLE-18 0x2E52C0`, `SIMPLE-19 0x2E5460`, `SIMPLE-20 0x2E5B10`, `SIMPLE-21 0x2E5D90`, `SIMPLE-22 0x2E5E90`, `SIMPLE-23 0x2E6030`, `SIMPLE-24 0x2EDB10`, `SIMPLE-25 0x2E62E0`, `SIMPLE-26 0x2ED260`, `SIMPLE-27 0x2ED850`, `SIMPLE-28 0x2E31B0`, `SIMPLE-29 0x2E36A0` |
| CAST | 28 | `CAST-1 0x2E6970`, `CAST-2 0x2E6A30`, `CAST-3 0x2E6BF0`, `CAST-4 0x2E7180`, `CAST-5 0x2E7870`, `CAST-6 0x2E7A20`, `CAST-7 0x2E7E50`, `CAST-8 0x2E80A0`, `CAST-9 0x2E81D0`, `CAST-10 0x2EE2F0`, `CAST-11 0x2EE670`, `CAST-12 0x2E8340`, `CAST-13 0x2E8E20`, `CAST-14 0x2E8F20`, `CAST-15 0x2E9370`, `CAST-16 0x2E96B0`, `CAST-17 0x2E9910`, `CAST-18 0x2E9AC0`, `CAST-19 0x2E9CB0`, `CAST-20 0x2E9E30`, `CAST-21 0x2EA390`, `CAST-22 0x2EA480`, `CAST-23 0x2EAB40`, `CAST-24 0x2EAD80`, `CAST-25 0x2EB170`, `CAST-26 0x2EB400`, `CAST-27 0x2EB6C0`, `CAST-28 0x2EB920` |
| EXPR | 12 | `EXPR-3 0x2DE520`, `EXPR-4 0x2DE6E0`, `EXPR-4a 0x2DE6E0`, `EXPR-4b 0x2DE6E0`, `EXPR-5 0x2DEDD0`, `EXPR-6 0x2DF070`, `EXPR-7 0x2DF350`, `EXPR-8 0x2DF5F0`, `EXPR-9 0x2DFA70`, `EXPR-10 0x2DFE40`, `EXPR-11 0x2E42A0`, `EXPR-12 0x2E0280` |
| WHILE | 4 | `WHILE-1 0x301880`, `WHILE-2 0x301B40`, `WHILE-4 0x3022B0`, `WHILE-5 0x3024C0` |
| DO | 5 | `DO-1 0x302760`, `DO-2 0x302950`, `DO-3 0x302A20`, `DO-4 0x302B20`, `DO-5 0x302DA0` |
| FOR | 3 | `FOR-1 0x302EC0`, `FOR-2 0x3012F0`, `FOR-3 0x3033E0` |
| LOOP | 2 | `LOOP-1 0x301D50`, `LOOP-2 0x302010` |
| RETURN | 3 | `RETURN-1 0x2EC150`, `RETURN-2 0x2E18F0`, `RETURN-4 0x2E0F40` |
| BLOCK | 1 | `BLOCK-1 0x2DDD70` |
| DEAD | 1 | `DEAD-1 0x2E1030` |
| EMPTY | 1 | `EMPTY-1 0x2E05D0` |
| MEMREF | 1 | `MEMREF-2 0x2EBCA0` |
| THROW | 1 | `THROW-1 0x2E1C60` |
| TRY | 1 | `TRY-1 0x2E1170` |

Ctree maturity levels in the same binary (`sub_46C7E0`): `CMAT_ZERO`, `CMAT_BUILT`, `CMAT_TRANS1`-`3`,
`CMAT_NICE`, `CMAT_CPA`, `CMAT_CASTED`, `CMAT_FINAL`; microcode levels `MMAT_ZERO` .. `MMAT_LVARS`
(unlace has its own, `unlace_maturity`, #189).

## 4. New gaps, ranked

| # | gap | value | size |
|---|---|---|---|
| 1 | ~~`saturated_mul`~~ (done: option `satmul`, #303): fold the checked `n * sizeof(T)` before `operator new[]` (x86 `mul` + `jo`/`seto`, clang `__builtin_mul_overflow` lowering, AArch64 `umulh` + `cmp`) into one helper | M (every C++ `new T[n]`) | S |
| 2 | ~~Java `synchronized` and `finally` on DEX, extending `javatry`~~ (done: option `javasync`, #311) | M (Android) | S-M |
| 3 | ~~Pre-structuring hoist of identical arm heads/tails (EXTRACT_*), so the hoisted code is not structured twice~~ (done: option `armhoist`, #305; default off, not yet measured) | M (GED) | M |
| 4 | Remainder by small odd constants via chunk folding (UMOD-30BIT), after a measurement shows the shape exists in our corpora | L | S |
| 5 | ~~Jump threading on value ranges per predecessor (BACKPROP_CC)~~ (done: `phithread ranges`, default off; on unthreaded -O1 code it turns source-shaped sequential ifs into the nested shape gcc -O2 emits, so it is not a readability default) | L-M | M |
| 6 | Enum auto-conversion of constants (AUTOCONV_TO_ENUM) where a value is typed enum by a prototype | L-M | S |
