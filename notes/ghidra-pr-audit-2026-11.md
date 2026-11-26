# Audit of upstream Ghidra decompiler PRs, October–November 2026

## Why

Ghidra merges community pull requests internally, so on GitHub they stay open: the mirror in
`.research/ghidra-github/ghidra.sqlite` has 161 open decompiler PRs and only 31 marked merged.
64 of the open ones were filed in October and November 2026. Most of them fix the same C++ that
unlace was ported from, so we checked each one against unlace.

## How

Four agents each took one area: switches and flow, simplification rules, soundness and memory
safety, and types, calling conventions and Java-only changes. For each PR, the agent read the
diff (`gh pr diff N -R NationalSecurityAgency/ghidra`), found the Rust counterpart, and gave the
PR one of these results:
- **ported:** the bug was in unlace and is now fixed, with a test that fails before the fix
  (unless the row says otherwise), in its own commit tagged `(ghidra#N)`;
- **already:** unlace already handles it;
- **n/a:** Java, GUI, build or docs only, or code unlace does not have;
- **skipped:** with a reason.

Rules:
- A port that changed datatest output was reverted, never re-baselined.
- A PR that is a judgement call (it changes default output by preference rather than fixing
  a bug) was skipped.

Every branch had one full parity run before it merged. On each, the datatests matched
`docs/baseline.json` and `tests/stages` failed only the assertions `main` already failed.

## Result

| Result | PRs |
|---|---|
| ported | 23 |
| partly ported | 2 |
| already handled in unlace | 8 |
| not applicable | 14 |
| skipped | 17 |

unlace PRs: #1547 (types), #1548 (switches), #1551 (rules), #1552 (soundness).

The ports change little real output. On 9 binaries (5 fixtures, a Go binary, `true`, `ls`,
`cat`), the visible changes are:
- strings print `'` instead of `\'` (#10003);
- digit extraction prints as `(char)(v % 10) + '0'` instead of `(char)v + (char)(v / 10) * '\xf6' + '0'`
  (#10082).

The other ports fix crashes, unsound ranges, overflows and stack depth on inputs these
binaries do not reach. The new tests cover them.

## Worth a second look

- **#9917, value domains (+1,774 lines):** propagates proven value domains within one
  decompile. It is the biggest feature in the set, and needs its own design pass.
- **#9973, conditional block merging (+747/−691):** changes structuring by design. It would
  need an option and a corpus comparison.
- **#10235, register-save slots when a pointer escapes:** ported and then dropped, because it
  made 5 stage assertions fail that pass on `main`: GH839-A64 #3, GH839 #9, constspaceload #5,
  spphistack aarch64 #1 and #3. The upstream fix and unlace's stage expectations disagree
  about these functions.
- **#9761, lane-size guess, and #10025, per-base local numbering:** small judgement calls
  that change default output.
- **#9951, the rest:** the `Piece`, `FloatRound` and SLEIGH pattern shifts are left wrapped on
  purpose (ADR 0003).

## Every PR

| Ghidra PR | Title | Result | Detail | unlace PR |
|---|---|---|---|---|
| [#9705](https://github.com/NationalSecurityAgency/ghidra/pull/9705) | Debugger: Mark the tracked location in the Decompiler | n/a | Java debugger GUI | #1547 |
| [#9717](https://github.com/NationalSecurityAgency/ghidra/pull/9717) | Decompiler: Bound a jump table by its own lowest target (#9447) | skipped: judgement call | infers table length from layout; speculative recovery, measured on 6502 only | #1548 |
| [#9738](https://github.com/NationalSecurityAgency/ghidra/pull/9738) | Decompiler: Split Out As New Expression | n/a | Java GUI only | #1547 |
| [#9745](https://github.com/NationalSecurityAgency/ghidra/pull/9745) | Decompiler: lane split reassembles a value consumed whole by a call | ported | 6d3aae32a0; LaneDivide gains CALL/CALLIND/CALLOTHER/RETURN arms; stage test lanedivide-callwhole | #1547 |
| [#9761](https://github.com/NationalSecurityAgency/ghidra/pull/9761) | Decompiler: the default lane size guess reads the lanes its storage already uses | skipped: judgement call | changes the default lane-size guess and upstream datatest assertions | #1547 |
| [#9765](https://github.com/NationalSecurityAgency/ghidra/pull/9765) | Decompiler: allow wrapped memory ranges in processor spaces (fixes #4148) | already | wrap_offset wraps every space (space.rs:942) | #1548 |
| [#9836](https://github.com/NationalSecurityAgency/ghidra/pull/9836) | Decompiler: recognize bitfield constant stores written as an and/or mask pair | ported | 64c77b6f60; an and/or mask-pair bitfield store prints s->b = 6; stage test bitfield-masked-constant | #1551 |
| [#9839](https://github.com/NationalSecurityAgency/ghidra/pull/9839) | Preserve quote-leading custom equate names in decompilation | n/a | Java EquateSymbol | #1552 |
| [#9841](https://github.com/NationalSecurityAgency/ghidra/pull/9841) | Fixes bug in xml decode where get_opcode is used incorrectly | already | premise wrong: the encoder writes opcode names; unlace matches C++ get_opcode | #1552 |
| [#9845](https://github.com/NationalSecurityAgency/ghidra/pull/9845) | Preserve console command arguments and restore empty local scopes | ported | 13cb36be9f; console expand_com keeps a trailing argument; scope half already guarded | #1552 |
| [#9850](https://github.com/NationalSecurityAgency/ghidra/pull/9850) | Preserve explicit ARM argument storage beyond the recognition limit | skipped: too large | new cspec attribute allocation="unbounded", +344 | #1547 |
| [#9913](https://github.com/NationalSecurityAgency/ghidra/pull/9913) | Reject failed parses when choosing round-trip floating-point precision | already | float.rs:636 handles a failed parse | #1552 |
| [#9914](https://github.com/NationalSecurityAgency/ghidra/pull/9914) | Recover byte-indexed jump tables with validated speculative targets | skipped: judgement call | speculative target validation changes which index is picked | #1548 |
| [#9917](https://github.com/NationalSecurityAgency/ghidra/pull/9917) | Propagate explicitly proven value domains within one decompilation request | skipped: too large | +1774 across valuedomain/override/jumptable | #1547 |
| [#9921](https://github.com/NationalSecurityAgency/ghidra/pull/9921) | GP-0: Add x86-16 Pascal calling conventions | skipped: feature unlace lacks | no Pascal prototype model | #1547 |
| [#9930](https://github.com/NationalSecurityAgency/ghidra/pull/9930) | Decompiler: fix use-after-free in SplitDatatype::splitStore | ported | e338cf4758; SplitDatatype::splitStore use-after-free (a shared pointer chain panicked) | #1552 |
| [#9933](https://github.com/NationalSecurityAgency/ghidra/pull/9933) | Fix 64bit integer overflow in native sleigh compiler on Windows | already | slghscan.rs:1469 parses with checked u64 | #1552 |
| [#9938](https://github.com/NationalSecurityAgency/ghidra/pull/9938) | Decompiler: fix CircleRange pullBack and pushForward soundness | ported | 2c889acb20; CircleRange minimal_container mask, set_stride, pull_back/push_forward cases | #1552 |
| [#9939](https://github.com/NationalSecurityAgency/ghidra/pull/9939) | Decompiler: fix SplitDatatype high-word byte shift in generateConstants | ported | f690738374; generate_constants rejects pieces past the full size | #1552 |
| [#9940](https://github.com/NationalSecurityAgency/ghidra/pull/9940) | Decompiler: fix udiv128 zero check and leftshift bounds | ported | fb53567734; udiv128 zero divisor, leftshift past width | #1552 |
| [#9941](https://github.com/NationalSecurityAgency/ghidra/pull/9941) | Decompiler: fix RuleAndCommute mask, shift bounds, and RuleDivOpt | partly ported | b20d31c8df; shift bounds in RuleAndCommute/RuleShiftCompare; the && is deliberate upstream behaviour; no input found where the 64-bit calc_divisor sum wraps | #1551 |
| [#9942](https://github.com/NationalSecurityAgency/ghidra/pull/9942) | Decompiler: fix DynamicHash::uniqueHash champion and oplist clear | ported | cc8a2fa8b0; DynamicHash::uniqueHash scans its collision list | #1552 |
| [#9944](https://github.com/NationalSecurityAgency/ghidra/pull/9944) | Decompiler: allow unsigned NaN in floatprint datatest on ARM64 | skipped | test-only relaxation of the vendored floatprint datatest | #1552 |
| [#9947](https://github.com/NationalSecurityAgency/ghidra/pull/9947) | Decompiler: make Heritage::renameRecurse iterative | ported | 94a77f747d; iterative rename_recurse; a 200,000-block chain overflowed the stack | #1552 |
| [#9948](https://github.com/NationalSecurityAgency/ghidra/pull/9948) | Decompiler: check stream failbit in FloatFormat::printDecimal | already (pin test) | 07e0e5ef83; DBL_MAX prints with round-trip digits | #1552 |
| [#9951](https://github.com/NationalSecurityAgency/ghidra/pull/9951) | Decompiler: guard 64-bit shift bounds in bitfield, double, and opbehavior | partly ported | 7450d63700, 0136874b6b; shift bounds in address, transform, bitfield absorb, double, opbehavior recover; Piece/FloatRound/SLEIGH pattern shifts keep their deliberate wrapped behaviour (ADR 0003) | #1552 |
| [#9952](https://github.com/NationalSecurityAgency/ghidra/pull/9952) | Decompiler: support Darwin arm64 in Makefile and match struct tags | n/a | Makefile, C++ forward declarations | #1547 |
| [#9965](https://github.com/NationalSecurityAgency/ghidra/pull/9965) | Decompiler docs: list the metatype values the cspec parser accepts | n/a | docs; dtype.rs already parses class1/hiddenret | #1547 |
| [#9966](https://github.com/NationalSecurityAgency/ghidra/pull/9966) | Decompiler: name the Max-Payload option when the payload limit is exceeded | n/a | Java | #1552 |
| [#9967](https://github.com/NationalSecurityAgency/ghidra/pull/9967) | Decompiler: fix spacing and name cleanup in DecompiledFunction.getSig… | n/a | Java PrettyPrinter | #1547 |
| [#9972](https://github.com/NationalSecurityAgency/ghidra/pull/9972) | Add 'Pascal Calling Convention' and auto-pointer sizing to support 16-/32-bit | skipped: feature unlace lacks | Pascal convention, +624 | #1547 |
| [#9973](https://github.com/NationalSecurityAgency/ghidra/pull/9973) | Decompiler: Conditional Block Merging Improvements | skipped: too large, judgement call | ~1,400 lines, changes structuring by design | #1551 |
| [#9978](https://github.com/NationalSecurityAgency/ghidra/pull/9978) | Decompiler: cache parsed .pspec and .cspec XML documents in SleighArchitecture | skipped | speed-only cspec/pspec cache | #1552 |
| [#9983](https://github.com/NationalSecurityAgency/ghidra/pull/9983) | Decompiler: cancel a common term in RuleEqual2Zero | ported | e06f95a49c; RuleEqual2Zero cancels a common term | #1551 |
| [#9990](https://github.com/NationalSecurityAgency/ghidra/pull/9990) | Objective-C Message Analyzer: decompile each msgSend stub once | n/a | Java ObjC analyzer; unlace decompiles each source once | #1547 |
| [#9992](https://github.com/NationalSecurityAgency/ghidra/pull/9992) | Fix call-site overrides returning a struct through a hidden pointer | n/a | ProtoStoreInternal::decode path is a stub in unlace | #1547 |
| [#10002](https://github.com/NationalSecurityAgency/ghidra/pull/10002) | Decompiler: color the NULL token as a constant | ported | ddfd23dbb8; NULL coloured as a constant | #1547 |
| [#10003](https://github.com/NationalSecurityAgency/ghidra/pull/10003) | Decompiler: don't escape single quotes in string literals | ported | 1319003b7d; single quotes no longer escaped in string literals | #1552 |
| [#10012](https://github.com/NationalSecurityAgency/ghidra/pull/10012) | Reject invalid and overflowing XML character references | ported | f39056e065; invalid or overflowing XML character references rejected | #1552 |
| [#10014](https://github.com/NationalSecurityAgency/ghidra/pull/10014) | Decompiler: allow up to 4 restarts of the universal action | ported | 7a866acfa5; universal action allows 4 restarts | #1551 |
| [#10017](https://github.com/NationalSecurityAgency/ghidra/pull/10017) | Creates action to simplify iterative increases in loops | skipped: new action | 246 lines, changes default output | #1551 |
| [#10025](https://github.com/NationalSecurityAgency/ghidra/pull/10025) | Decompiler: number default local variable names per name base | skipped: judgement call | renumbers default local names | #1552 |
| [#10081](https://github.com/NationalSecurityAgency/ghidra/pull/10081) | `RuleDivOpt`: Recognise additional normalised forms from `RuleSubNormal` | skipped | RuleDivOpt::findForm flow after the SUBPIECE-of-shift branch not transcribed | #1551 |
| [#10082](https://github.com/NationalSecurityAgency/ghidra/pull/10082) | `RuleModOpt`: Add support for subpiece patterns | ported | 5c915076c7; RuleModOpt subpiece: (char)v + (char)(v/10)*0xf6 + 0x30 becomes (char)(v % 10) + 0x30 | #1551 |
| [#10084](https://github.com/NationalSecurityAgency/ghidra/pull/10084) | Decompiler Switch Analysis: don't clear data a load table overlaps | n/a | Java switch analysis | #1548 |
| [#10086](https://github.com/NationalSecurityAgency/ghidra/pull/10086) | Decompiler Switch Analysis: don't nest switchD namespaces under an UndefinedFunction | n/a | Java switch analysis | #1548 |
| [#10091](https://github.com/NationalSecurityAgency/ghidra/pull/10091) | Decompiler: Preserve relative fallthrough after p-code insertion | already | find_rel_target looks up by op time (flow.rs:1184) | #1548 |
| [#10100](https://github.com/NationalSecurityAgency/ghidra/pull/10100) | Decompiler: rename PcodeCacher::PAGE_SIZE, which clashes with the musl limits.h macro | n/a | no PAGE_SIZE in unlace | #1547 |
| [#10146](https://github.com/NationalSecurityAgency/ghidra/pull/10146) | Decompiler: don't widen a narrow LOAD through a bare pointer (RuleExpandLoad) | ported (guard) | 3e350cc3bb; RuleExpandLoad bare-pointer guard; no output change on the repro | #1551 |
| [#10168](https://github.com/NationalSecurityAgency/ghidra/pull/10168) | Decompiler: fix PTRSUB undo loop on shared expressions | ported | 5558956186; RulePtrsubUndo get_const_offset_back on a shared sum | #1551 |
| [#10169](https://github.com/NationalSecurityAgency/ghidra/pull/10169) | Decompiler: prevent Max-Payload integer overflow | n/a | Java | #1552 |
| [#10180](https://github.com/NationalSecurityAgency/ghidra/pull/10180) | Decompiler: Merge adjacent `builtin_strncpy` calls | ported | 86b2de4f42; adjacent builtin_strncpy runs merge; no reproducer | #1551 |
| [#10195](https://github.com/NationalSecurityAgency/ghidra/pull/10195) | Decompiler: join contiguous loads through segmented pointers | skipped | test_contiguous_pointers is a stub in unlace (double.rs:1190) | #1551 |
| [#10201](https://github.com/NationalSecurityAgency/ghidra/pull/10201) | Decompiler: RulePullsubIndirect takes the INDIRECT input at the first used byte | already | ruleaction_1.rs:2664 passes min_byte | #1551 |
| [#10216](https://github.com/NationalSecurityAgency/ghidra/pull/10216) | Decompiler: jump-table overrides fall back to address labels when table is read in two halves | n/a | jump-table override model is a stub in unlace | #1548 |
| [#10217](https://github.com/NationalSecurityAgency/ghidra/pull/10217) | Decompiler: label switch cases with indexes, not byte offsets, when index scaled by a left shift | ported | 529a25eefa; find_unnormalized_basic walks back through INT_LEFT | #1548 |
| [#10218](https://github.com/NationalSecurityAgency/ghidra/pull/10218) | Decompiler: label overridden switches by their two table indices for table-of-tables dispatch | skipped: judgement call | 516-line heuristic on the override model unlace lacks | #1548 |
| [#10223](https://github.com/NationalSecurityAgency/ghidra/pull/10223) | Decompiler: label overridden switches by a loaded index when no other variable fits | skipped: judgement call | new trial recovery on the override path | #1548 |
| [#10225](https://github.com/NationalSecurityAgency/ghidra/pull/10225) | Decompiler: discard a jump-table override for unreached flow instead of crashing | already | every table links its BRANCHIND at creation | #1548 |
| [#10235](https://github.com/NationalSecurityAgency/ghidra/pull/10235) | Decompiler: keep register-save stack slots mapped when a direct pointer escapes (#9728) | skipped: changes 5 stage assertions | GH839-A64 #3, GH839 #9, constspaceload #5, spphistack aarch64 #1 and #3 fail with the port | #1548 |
| [#10259](https://github.com/NationalSecurityAgency/ghidra/pull/10259) | Decompiler: Bound open stack ranges on a stack that grows upward | ported | 16d5b14375; open stack ranges bounded on an upward stack | #1548 |
| [#10272](https://github.com/NationalSecurityAgency/ghidra/pull/10272) | RulePushMulti: widen the consumed bits of a reused MULTIEQUAL | ported | 4ff7fdaba2; RulePushMulti consume bits; stage test pushmulti-consume-mask | #1551 |
| [#10294](https://github.com/NationalSecurityAgency/ghidra/pull/10294) | Preserve equates when joining a zero upper half | ported | b97949b843; equates survive a zero upper half | #1551 |
| [#10299](https://github.com/NationalSecurityAgency/ghidra/pull/10299) | Decompiler: fix install-root detection to find the server.conf file | ported | 5b8af53339; server.conf checked as a file | #1547 |
