# Idiom recognition: archived master pass vs main

Read-only comparison. Nothing was built or run. Original: `origin/master:crates/unlace-passes/src/idiom_recognition.rs` (3,246 lines, pass name `idiom-recognition`, a standalone pass over SSA IR that rewrites to COPY or CALLOTHER tags and iterates to a fixed point). Main has no such pass. Its equivalents are Ghidra-style rules run by the universal action schedule (`crates/unlace-bandb*/src/p3_dataflow/`), plus a few option-gated recognisers. Line numbers for the original refer to `origin/master`; main line numbers refer to this worktree at `origin/main`.

Status key: have = same technique on main; partial = main covers a narrower form or the opposite canonical form; missing = not located; opposite = main deliberately prints the other form, so porting would change output everywhere.

## Ranked: techniques worth porting

| # | Technique (original) | Original, origin/master | Main status | Port | Size |
|---|---|---|---|---|---|
| 1 | Branch-free min and max: b + ((a-b) and s) and a - ((a-b) and s), where s = (a-b) s>> (W-1), become CALLOTHER min/max (tags 0x323, 0x324) | `idiom_recognition.rs:765-846` (`try_min_idiom`, `try_min_idiom_ordered`, `try_max_idiom`) | missing. No min/max recogniser in `crates/unlace-bandb*`. `bitidioms.rs:493` (`RuleIntAbs`) is the only sign-select recogniser, and it matches only the MULTIEQUAL cmov/cneg form | yes. Print as min/max behind a `bitidioms`-style option, with the sign-test shape proved at two values as the original tests do | M |
| 2 | Branch-free abs: (x xor s) - s, with s = x s>> (W-1), becomes abs(x) (tag 0x322) | `idiom_recognition.rs:739-763` (`try_abs_idiom`) | partial. `bitidioms.rs:493` `RuleIntAbs` and the `bitidioms` row in `crates/unlace-decomp/phases.toml` (about line 1676) cover only the cmov/cneg diamond (MULTIEQUAL of x and -x chosen by a sign test) | yes. Extend `RuleIntAbs` with the xor/sub form under the existing option; no new option needed | S |
| 3 | Pure-arithmetic bitfield read and write: (x >> s) and mask becomes field get; (x and not(m << s)) or ((y and m) << s) becomes field set (tags 0x327, 0x328) | `idiom_recognition.rs:1156-1275` (`try_bitfield_read`, `try_bitfield_write`, `_ordered`) | partial. `crates/unlace-bandb-core/src/p5_types/bitfield.rs:504-658` (`RuleBitFieldStore`, `RuleBitFieldOut`, `RuleBitFieldLoad`, `RuleBitFieldIn`) collapse pulls from mapped varnodes and loads, not plain shift-and-mask on a register value. No pure-arithmetic rule located | yes, after checking on a sample that the mapped-pull rules do not already catch the common register case | M |
| 4 | Unsigned shift pair as a mask: (x << n) >> n becomes x and ((1 << (W-n)) - 1) (`try_shift_round_trip`) | `idiom_recognition.rs:662-690` | partial. `RuleLeftRight` (`crates/unlace-bandb-base/src/p3_dataflow/ruleaction_2.rs:1144`) covers the signed form, `(V << c) s>> c` becoming a sign-extension of a SUB. The unsigned mask form was not located | yes | S |
| 5 | Byte extraction: (x >> 8k) and mask(K bytes) becomes SUBPIECE(x, k) (`try_subpiece_from_and`) | `idiom_recognition.rs:239-291`, tests at 2174-2240 | partial. `RuleRightShiftAnd` (`crates/unlace-bandb-core/src/p3_dataflow/ruleaction_1.rs:1597`) removes masks under a shift, the opposite direction. `RuleSubCancel` (`ruleaction_4.rs:1669`) collapses SUBPIECE chains but does not create one from a shift and mask | maybe. Check first how often the shape survives to print | S-M |
| 6 | Carry with a non-constant operand: INT_CARRY(v, 0) becomes 0, INT_CARRY(v, -v) becomes v != 0, and INT_CARRY(v, -v) style flag lowering (`try_recognize`, tests 2155 and 2777) | `idiom_recognition.rs:2155`, `2777` (tests) and the INT_CARRY arms in `try_recognize` | partial. `RuleCarryElim` (`crates/unlace-bandb/src/p3_dataflow/ruleaction_3.rs:2458`) handles a constant operand only, `carry(V,c) => -c <= V` | yes | S |
| 7 | Mask and shift identity cleanup on the unsigned side: AND of an already-zero shifted bit range, OR absorption | `idiom_recognition.rs:594-661` | partial. `RuleShiftAnd` (`ruleaction_4.rs:1265`), `RuleAndMask` (`ruleaction_1.rs:845`), `RuleOrMask` (`ruleaction_1.rs:770`). Absorption (x or (x and y)) and (x and (x or y)) and xor-of-masks are in the e-graph rules (`crates/unlace-bandb-base/src/p3_dataflow/egraph.rs`, rules `and-absorb`, `or-absorb`, `xor-of-masks`), which the module header says run under the `mba` option. Verify the default before deciding | low; verify first | S |
| 8 | x / 1, x % 1, x sdiv 1, x srem 1 (identity and zero) | `idiom_recognition.rs:1853-1935` (tests) and the arms in `try_recognize` | partial. `RuleIdentityEl` (`ruleaction_3.rs:1637-1700`) lists ADD, XOR, OR, BOOL_XOR, BOOL_OR and MULT only. DIV and REM by one are not in its op list | low. Compilers rarely leave these in | XS |

## Opposite canonical form (do not port as default)

| Technique (original) | Original | Main | Why not |
|---|---|---|---|
| Sign-bit test: x >> (W-1) becomes x s< 0 (`try_recognize`, tests 2095-2139) | `idiom_recognition.rs:2095-2139` | `RuleSignShift` (`ruleaction_3.rs:1456`) rewrites V >> 31 as (V s>> 31) * -1 | Main chose the arithmetic form. Changing it moves output everywhere, so it needs a deliberate decision, not a port |
| Power-of-two strength reduction: x * 2^n becomes x << n, x / 2^n becomes x >> n, x % 2^n becomes x and (2^n - 1), unsigned only (`try_mult_simplify`, `try_div_strength_reduction`, `try_rem_strength_reduction`, `idiom_recognition.rs:496-568`) | `idiom_recognition.rs:496-568` | `RuleShift2Mult` (`ruleaction_3.rs:1696`) goes shift to mult. `RuleDivOpt` (`ruleaction_6.rs:2134`) goes magic-number to div | Output convention. A port would need an option and a stage corpus check |
| Negation absorption: x + (-y) becomes x - y, x - (-y) becomes x + y (`try_add_simplify`, `try_sub_simplify`) | `idiom_recognition.rs:409-495` | `RuleSub2Add` (`ruleaction_3.rs:2512`) goes sub to add-of-negative | Opposite convention |

## Already on main (have)

| Technique (original) | Original | Main | Notes |
|---|---|---|---|
| Identity elements: x + 0, x or 0, x xor 0, x * 1, shift by 0, AND with all ones, OR with all ones | `idiom_recognition.rs:409-661`, `1542-1990` (tests) | `RuleIdentityEl` (`ruleaction_3.rs:1637`), `RuleTrivialShift` (`ruleaction_3.rs:1405`), `RuleAndMask` (`ruleaction_1.rs:845`), `RuleOrMask` (`ruleaction_1.rs:770`) | |
| Self-cancel and idempotence: x xor x, x - x, x and x, x or x, x and not x, x or not x, BOOL_AND(v,v), BOOL_OR(v,v) | `idiom_recognition.rs:569-661`, tests 1500-1800 | `RuleTrivialArith` (`ruleaction_2.rs:1529`), `RuleNegateIdentity` (`ruleaction_1.rs:1290`), `RuleBooleanDedup` (`ruleaction_3.rs:179`), `RuleTrivialBool` (`ruleaction_2.rs:1650`) | |
| Double negation: ~~x and --x | `idiom_recognition.rs:2266-2306` (tests) | `RuleNegateNegate` (`ruleaction_7.rs:1951`) | |
| SUBPIECE of ZEXT or SEXT becomes a copy or a narrower SUBPIECE | `idiom_recognition.rs:691-724` | `RuleSubZext` (`ruleaction_4.rs:1528`), `RuleSubCancel` (`ruleaction_4.rs:1669`) | |
| Nested constant folding: (x + a) + b, (x * a) * b, (x op a) op b | `idiom_recognition.rs:409-538` | `RuleAddMultCollapse` (`ruleaction_3.rs:2634`), `RuleCollectTerms` (`ruleaction_1.rs:205`), `RuleDoubleSub` (`ruleaction_2.rs:823`), `RuleAndOrLump` (`ruleaction_1.rs:1146`) | |
| Rotate: (x << n) or (x >> (W-n)) becomes ROL/ROR (tags 0x320, 0x321) | `idiom_recognition.rs:1096-1141` (`try_rotate`) | `bitidioms.rs:318-420` (`RuleBitIdioms`, `rotate_source` at 167), option `bitidioms` in `crates/unlace-decomp/phases.toml` (about 1676) | Main is stronger: it also folds byte swaps and bit reversal, and it unrotates when a mask needs the shift form |
| Unrolled memcpy from load and store pairs, up to 64 ops (`MAX_UNROLLED_OPS`) | `idiom_recognition.rs:968-1038` | `copyrun.rs:72-471` (`ActionCopyRun`, option `copyrun` in phases.toml about 2066); `repstring.rs` (rep movs, option `repstring`, about 2003) | Different shape: main matches runs of COPY ops with its own bound |
| Unrolled memset from constant stores | `idiom_recognition.rs:1039-1095` | `RuleMemsetCopy` (`crates/unlace-bandb-base/src/p5_types/memsetsequence.rs:106`), option `memsetrecover` (phases.toml about 2110) | |

## Notes

- The original applies these inside one fixed-point pass with CALLOTHER tags (0x320 to 0x328). Main has no tag table, so ports should use main option rows and the existing rule schedule rather than the tag numbers.
- Two items in the header of the original file are not in the ranked table because main already matches them: double negation and the rotate (main has both, with more shapes).
- The `archived-master-inventory.md` file cited by the team brief is not on `origin/main`. It exists only in git history (commit 454736a4f1 at `notes/archived-master-inventory.md`). It does not cover idiom recognition.
