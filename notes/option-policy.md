# Option policy audit (phases.toml)

Audit of every `[[settable]]` row in `crates/unlace-decomp/phases.toml` (391 rows at `origin/main`), classified into five buckets. Read-only audit; the one removal is listed below.

## Categories

- **strict correctness fix**: `change_kind = "correctness-fix"` and at least one test or stage pins the non-default value, so the switch has to stay until those pins are rewritten. The target state is unconditional.
- **temporary migration switch**: `change_kind = "correctness-fix"` and no test pins the non-default value. These are the removal candidates: the switch only gates a fix that is now always on, and the row, its dispatch arm, catalog table and docs section can go.
- **default-on heuristic**: a judgement call (presentation, type inference, structure recovery, transform, analysis enablement, performance) whose default is on. Keep the option; it is the flip surface.
- **opt-in heuristic**: a judgement call whose default is off. Keep it.
- **remove**: an option with no meaningful off behaviour. None were classified automatically; see "Remove candidates" for the ones that need a per-option read before anything is deleted.

## Method

- Rows and `change_kind`, `default`, `tier` were read from `phases.toml`.
- "tests" means `tests/`, `crates/*/tests/`, and the stage TOML `'option NAME VALUE'` lines. Fixture files (`crates/unlace-decomp/tests/fixtures/`) were excluded, because their `example = "--option NAME off"` lines are documentation, not pins.
- **Pin** = a test-side line mentioning the option that also contains the non-default value. This is a line grep, so it over-detects (a prose comment that mentions both values counts), which is the safe direction for removal decisions. `noreturn_reach` is pinned through a loop over gate names in `crates/unlace-cli/tests/noreturn_wrapper.rs` and was marked by hand: the line grep misses it.
- "test refs" is the number of test-side lines that mention the option at all.

## Result (391 rows at origin/main)

| category | count |
|---|---|
| strict correctness fix (test-pinned) | 55 |
| temporary migration switch | 5 (4 after this PR) |
| default-on heuristic | 233 |
| opt-in heuristic | 98 |
| remove | 0 automatic (protomerge removed in this PR) |

## Removed in this PR

- `protomerge` (correctness-fix, default on, zero test references, no pins). It gated one check in `merge_function_proto_pieces` (`crates/unlace-middle/src/infra/architecture.rs`). The merge is now unconditional; the `protomerge_merge` hook stays, since `crates/unlace-bandb-base/src/p4_calls/protomerge.rs` still provides it. Removed: the `phases.toml` row, the `option_dispatch.rs` arm, the `coreoptions.rs` flag, the `phase_catalog.toml` table, the `docs/options.md` section and its three symptom rows. The spec line in `docs/spec/01-program-prep.md` now says "always on, no option".

## Remaining temporary migration switches (not removed)

- `ifuncfpret`
- `fidproto`
- `nameladder`
- `codestrings`

These have no test pin, but each is wired through the load-time environment bridge (`crates/unlace-middle/src/p0_knowledge/loadoptions.rs`, `crates/unlace-cli/src/loadtime.rs`), and in `fidproto` through the decompile driver and the console. Removing them touches the `loadoptions` struct and the `UNLACE_*` env readers as well, so each is a separate PR. `ifuncfpret` also has a console row (`crates/unlace-console/src/console.rs`).

## Remove candidates (need a per-option read, not removed)

Default-off, no test mention at all, not a correctness fix. Removal would delete the on-branch code, so each needs the question "is the off-only path the real behaviour?" answered before it goes:

`charnum`, `constright`, `signeddec`, `satmul`, `phithread`, `armhoist`, `pairbranch`, `cppshortnames`, `flownames`, `egraph`, `ruststdsigs`, `delphi`, `sdktypes`, `swiftcallers`, `calleesaved`, `comcfg`, `retternary`, `orexit`, `orchainlive`, `orchainbool`, `structassign`

## Traps found while auditing

- `noreturn_reach` (default on) looks unpinned to a line grep and is in fact pinned off by `crates/unlace-cli/tests/noreturn_wrapper.rs`. Do not remove it on the grep alone.
- `ptrentry`, `callerptr` and `ppc32picimports` are pinned by name in `crates/unlace-console/tests/verify_ptrentry.rs` and `crates/unlace-cli/tests/decompile_all_cli.rs`, not by `option NAME VALUE` lines. Searching only for that form under-counts pins.
- Fixture `example = "--option NAME off"` lines look like pins to a naive search. They are not.

## Full table

Columns: option, default, change_kind, tier, category, test refs (test-side lines mentioning it), pinned lines (non-default value on the same line).

| option | default | change_kind | tier | category | test refs | pinned lines |
|---|---|---|---|---|---|---|
| `compareform` | original | presentation-default | core | default-on heuristic | 34 | - |
| `arraynotation` | on | presentation-default | core | default-on heuristic | 14 | - |
| `truthycond` | on | presentation-default | core | default-on heuristic | 30 | - |
| `braceelide` | on | presentation-default | core | default-on heuristic | 25 | - |
| `partialaccess` | on | presentation-default | core | default-on heuristic | 46 | - |
| `containerof` | off | presentation-default | transform | opt-in heuristic | 4 | - |
| `postinc` | on | presentation-default | transform | default-on heuristic | 8 | - |
| `rustarrayzero` | off | correctness-fix | core | strict correctness fix | 3 | 1 |
| `bytearrayc` | off | presentation-default | core | opt-in heuristic | 12 | - |
| `structdefs` | off | presentation-default | transform | opt-in heuristic | 57 | - |
| `globalref` | on | presentation-default | core | default-on heuristic | 30 | - |
| `cstringconst` | on | presentation-default | core | default-on heuristic | 14 | - |
| `charnum` | off | presentation-default | transform | opt-in heuristic | 0 | - |
| `constright` | off | presentation-default | transform | opt-in heuristic | 0 | - |
| `signeddec` | off | presentation-default | transform | opt-in heuristic | 0 | - |
| `warnstyle` | inline | presentation-default | core | default-on heuristic | 31 | - |
| `bitidioms` | on | presentation-default | transform | default-on heuristic | 17 | - |
| `satmul` | off | new-analysis | transform | opt-in heuristic | 0 | - |
| `helperroles` | on | presentation-default | transform | default-on heuristic | 8 | - |
| `dynalloca` | off | presentation-default | transform | opt-in heuristic | 11 | - |
| `devectorize` | off | structure-recovery | transform | opt-in heuristic | 15 | - |
| `rangefold` | on | transform | transform | default-on heuristic | 16 | - |
| `pow2select` | on | transform | transform | default-on heuristic | 21 | - |
| `fpargboxed` | on | presentation-default | transform | default-on heuristic | 0 | - |
| `satconvert` | on | presentation-default | transform | default-on heuristic | 2 | - |
| `cmpmerge` | off | transform | transform | opt-in heuristic | 9 | - |
| `latecse` | off | transform | transform | opt-in heuristic | 4 | - |
| `phithread` | off | transform | transform | opt-in heuristic | 0 | - |
| `dirtypool` | off | speed | analysis | opt-in heuristic | 3 | - |
| `strlenscan` | on | presentation-default | transform | default-on heuristic | 31 | - |
| `repstring` | on | presentation-default | transform | default-on heuristic | 56 | - |
| `atomics` | auto | presentation-default | transform | default-on heuristic | 47 | - |
| `llscfold` | on | presentation-default | transform | default-on heuristic | 15 | - |
| `copyrun` | on | presentation-default | transform | default-on heuristic | 19 | - |
| `rodatastring` | on | correctness-fix | transform | strict correctness fix | 5 | 4 |
| `memsetrecover` | on | correctness-fix | transform | strict correctness fix | 7 | 5 |
| `returnpair` | pair | opt-in-tool | transform | default-on heuristic | 21 | - |
| `retpairpaths` | off | transform | transform | opt-in heuristic | 3 | - |
| `v850indirectbranch` | on | opt-in-tool | transform | default-on heuristic | 7 | - |
| `arithhelpers` | on | correctness-fix | transform | strict correctness fix | 16 | 5 |
| `aeabifloat` | on | presentation-default | transform | default-on heuristic | 6 | - |
| `objcarc` | on | readability | transform | default-on heuristic | 8 | - |
| `objcrettype` | on | type-inference | transform | default-on heuristic | 9 | - |
| `objcresolve` | on | analysis-enablement | transform | default-on heuristic | 13 | - |
| `cortexmpriv` | on | correctness-fix | transform | strict correctness fix | 6 | 2 |
| `acleintrinsics` | on | correctness-fix | core | strict correctness fix | 5 | 2 |
| `tailcalljump` | on | structure-recovery | transform | default-on heuristic | 59 | - |
| `tailcallframe` | on | correctness-fix | transform | strict correctness fix | 36 | 9 |
| `returnbranch` | on | correctness-fix | transform | strict correctness fix | 21 | 7 |
| `funcboundflow` | on | correctness-fix | transform | strict correctness fix | 73 | 20 |
| `overlapbranch` | on | correctness-fix | transform | strict correctness fix | 19 | 9 |
| `cleanupcode` | on | presentation-default | transform | default-on heuristic | 10 | - |
| `armhoist` | off | transform | transform | opt-in heuristic | 0 | - |
| `linuxsyscall` | auto | correctness-fix | transform | strict correctness fix | 18 | 11 |
| `evmcalls` | on | transform | transform | default-on heuristic | 4 | - |
| `wideconst` | on | presentation-default | core | default-on heuristic | 2 | - |
| `selectmul` | on | presentation-default | transform | default-on heuristic | 7 | - |
| `msvcstrappend` | off | opt-in-tool | transform | opt-in heuristic | 4 | - |
| `switchselector` | off | structure-recovery | transform | opt-in heuristic | 6 | - |
| `relronoreturn` | on | opt-in-tool | transform | default-on heuristic | 3 | - |
| `trapaftercall` | on | correctness-fix | core | strict correctness fix | 4 | 2 |
| `retpolinethunk` | on | correctness-fix | core | strict correctness fix | 4 | 2 |
| `int3pad` | warn | presentation-default | transform | default-on heuristic | 8 | - |
| `x64syscall` | on | correctness-fix | transform | strict correctness fix | 25 | 12 |
| `syscallregs` | auto | correctness-fix | transform | strict correctness fix | 77 | 66 |
| `fpuemu` | auto | correctness-fix | core | strict correctness fix | 25 | 16 |
| `mzdgroup` | on | analysis-enablement | analysis | default-on heuristic | 2 | - |
| `switchmodbound` | off | opt-in-tool | transform | opt-in heuristic | 6 | - |
| `switchextent` | on | structure-recovery | transform | default-on heuristic | 27 | - |
| `constselectjump` | reentry | structure-recovery | transform | default-on heuristic | 19 | - |
| `rawswitch` | on | structure-recovery | transform | default-on heuristic | 14 | - |
| `dexmodel` | on | analysis-enablement | analysis | default-on heuristic | 11 | - |
| `jumpassist` | on | structure-recovery | transform | default-on heuristic | 4 | - |
| `javatry` | on | analysis-enablement | analysis | default-on heuristic | 16 | - |
| `javanew` | on | presentation-default | core | default-on heuristic | 8 | - |
| `javasync` | off | presentation-default | transform | opt-in heuristic | 8 | - |
| `switchguardbound` | off | opt-in-tool | transform | opt-in heuristic | 5 | - |
| `switchguardmerge` | on | presentation-default | transform | default-on heuristic | 13 | - |
| `indexrescale` | on | presentation-default | transform | default-on heuristic | 5 | - |
| `vastart` | on | presentation-default | transform | default-on heuristic | 14 | - |
| `vaarg` | on | presentation-default | transform | default-on heuristic | 46 | - |
| `vaargconst` | off | new-analysis | transform | opt-in heuristic | 6 | - |
| `looprotate` | on | presentation-default | transform | default-on heuristic | 31 | - |
| `guardedloop` | on | presentation-default | transform | default-on heuristic | 21 | - |
| `highsliceguard` | off | structure-recovery | transform | opt-in heuristic | 7 | - |
| `switchsharedcase` | on | opt-in-tool | transform | default-on heuristic | 7 | - |
| `switchmultipred` | on | opt-in-tool | transform | default-on heuristic | 27 | - |
| `switchtrim` | on | structure-recovery | transform | default-on heuristic | 8 | - |
| `unrolledguard` | off | opt-in-tool | transform | opt-in heuristic | 9 | - |
| `jtsharepartial` | on | speed | transform | default-on heuristic | 7 | - |
| `deadcascade` | 32 | speed | transform | default-on heuristic | 10 | - |
| `octeoneffects` | atomic | correctness-fix | core | strict correctness fix | 25 | 9 |
| `x87depth` | on | correctness-fix | core | strict correctness fix | 8 | 3 |
| `varargsave` | off | type-inference | core | opt-in heuristic | 8 | - |
| `alloca` | on | type-inference | core | default-on heuristic | 128 | - |
| `nulterminator` | off | opt-in-tool | transform | opt-in heuristic | 29 | - |
| `endptrbound` | on | structure-recovery | transform | default-on heuristic | 24 | - |
| `arrayextent` | on | correctness-fix | core | strict correctness fix | 51 | 14 |
| `arraysize` | on | type-inference | transform | default-on heuristic | 31 | - |
| `castobject` | on | type-inference | transform | default-on heuristic | 31 | - |
| `stackviews` | off | opt-in-tool | transform | opt-in heuristic | 181 | - |
| `stackalias` | off | opt-in-tool | transform | opt-in heuristic | 39 | - |
| `arraystride` | on | structure-recovery | core | default-on heuristic | 22 | - |
| `guarddispatch` | on | presentation-default | transform | default-on heuristic | 4 | - |
| `sparcstructret` | on | opt-in-tool | transform | default-on heuristic | 11 | - |
| `rustabi` | auto | correctness-fix | core | strict correctness fix | 62 | 13 |
| `loweredswitch` | on | structure-recovery | transform | default-on heuristic | 78 | - |
| `loweredswitchbits` | on | structure-recovery | transform | default-on heuristic | 6 | - |
| `callmechanisms` | auto | correctness-fix | transform | strict correctness fix | 12 | 6 |
| `varargsharedfloat` | off | correctness-fix | transform | strict correctness fix | 5 | 5 |
| `narrowargs` | callers | type-inference | transform | default-on heuristic | 32 | - |
| `regnarrow` | on | type-inference | transform | default-on heuristic | 44 | - |
| `pairparam` | on | new-analysis | transform | default-on heuristic | 15 | - |
| `armpairparam` | on | new-analysis | transform | default-on heuristic | 8 | - |
| `pairbranch` | off | new-analysis | transform | opt-in heuristic | 0 | - |
| `retindexuse` | bpfsass | new-analysis | transform | default-on heuristic | 10 | - |
| `carryuse` | on | analysis-enablement | analysis | default-on heuristic | 7 | - |
| `regsigned` | off | type-inference | transform | opt-in heuristic | 18 | - |
| `argclobber` | on | correctness-fix | core | strict correctness fix | 68 | 11 |
| `calleeargs` | on | new-analysis | transform | default-on heuristic | 19 | - |
| `calleeargsmsvc` | off | new-analysis | transform | opt-in heuristic | 7 | - |
| `passthrough` | on | correctness-fix | core | strict correctness fix | 141 | 8 |
| `mixedtailret` | off | correctness-fix | core | strict correctness fix | 23 | 4 |
| `cachereturn` | on | correctness-fix | core | strict correctness fix | 6 | 3 |
| `protoorder` | cycles | analysis-enablement | transform | default-on heuristic | 161 | - |
| `calleevote` | fields | type-inference | transform | default-on heuristic | 96 | - |
| `callerptr` | on | type-inference | transform | default-on heuristic | 29 | - |
| `calleereginputs` | on | new-analysis | transform | default-on heuristic | 35 | - |
| `callbacktype` | on | type-inference | transform | default-on heuristic | 30 | - |
| `callrettype` | on | type-inference | transform | default-on heuristic | 89 | - |
| `narrowret` | on | type-inference | transform | default-on heuristic | 58 | - |
| `calleeretpurge` | on | correctness-fix | core | strict correctness fix | 18 | 7 |
| `stackexitanchor` | on | correctness-fix | core | strict correctness fix | 9 | 4 |
| `fdeflowbound` | on | correctness-fix | core | strict correctness fix | 14 | 3 |
| `calloverlap` | auto | correctness-fix | core | strict correctness fix | 13 | 10 |
| `spillargtrial` | off | opt-in-tool | transform | opt-in heuristic | 11 | - |
| `indexaliasguard` | global | correctness-fix | core | strict correctness fix | 27 | 15 |
| `regionstructure` | on | structure-recovery | transform | default-on heuristic | 60 | - |
| `guardarm` | off | structure-recovery | transform | opt-in heuristic | 6 | - |
| `loopcondhoist` | off | structure-recovery | transform | opt-in heuristic | 5 | - |
| `loopcontinue` | on | structure-recovery | transform | default-on heuristic | 7 | - |
| `regionlooprefine` | on | structure-recovery | transform | default-on heuristic | 17 | - |
| `regionedgeorder` | off | structure-recovery | transform | opt-in heuristic | 6 | - |
| `condfold` | on | structure-recovery | transform | default-on heuristic | 58 | - |
| `implweight` | off | presentation-default | transform | opt-in heuristic | 4 | - |
| `condstmts` | 3 | presentation-default | transform | default-on heuristic | 10 | - |
| `gotosink` | on | structure-recovery | transform | default-on heuristic | 16 | - |
| `gotoreduce` | on | structure-recovery | transform | default-on heuristic | 41 | - |
| `ifelseflatten` | on | structure-recovery | transform | default-on heuristic | 22 | - |
| `crossjumprevert` | on | structure-recovery | transform | default-on heuristic | 29 | - |
| `retsplitglobal` | on | presentation-default | transform | default-on heuristic | 6 | - |
| `retsplitlimit` | 1048576 | performance | transform | default-on heuristic | 8 | - |
| `dedupitetail` | on | structure-recovery | transform | default-on heuristic | 41 | - |
| `iteregion` | on | structure-recovery | transform | default-on heuristic | 25 | - |
| `iteexpr` | off | structure-recovery | transform | opt-in heuristic | 12 | - |
| `iteboolean` | on | structure-recovery | transform | default-on heuristic | 18 | - |
| `returndup` | on | structure-recovery | transform | default-on heuristic | 94 | - |
| `rettriangle` | off | structure-recovery | transform | opt-in heuristic | 23 | - |
| `earlyreturn` | on | structure-recovery | transform | default-on heuristic | 31 | - |
| `switchreturn` | on | structure-recovery | transform | default-on heuristic | 28 | - |
| `foldcallret` | on | presentation-default | transform | default-on heuristic | 65 | - |
| `impliedrefs` | 2 | opt-in-tool | transform | default-on heuristic | 12 | - |
| `termdup` | 2 | opt-in-tool | transform | default-on heuristic | 7 | - |
| `jumptablemax` | 1024 | opt-in-tool | transform | default-on heuristic | 51 | - |
| `jumptablework` | 250000 | performance | transform | default-on heuristic | 0 | - |
| `stackguard` | on | opt-in-tool | transform | default-on heuristic | 66 | - |
| `canaryglobal` | on | correctness-fix | transform | strict correctness fix | 6 | 4 |
| `msvcstackguard` | on | opt-in-tool | transform | default-on heuristic | 20 | - |
| `securitycheck` | on | opt-in-tool | transform | default-on heuristic | 7 | - |
| `branchflip` | on | opt-in-tool | transform | default-on heuristic | 42 | - |
| `loopbreak_recovery` | on | structure-recovery | transform | default-on heuristic | 5 | - |
| `namestyle` | angr | presentation-default | core | default-on heuristic | 48 | - |
| `signedness` | auto | presentation-default | transform | default-on heuristic | 86 | - |
| `realtypes` | on | presentation-default | core | default-on heuristic | 69 | - |
| `voidtailreturn` | on | presentation-default | core | default-on heuristic | 35 | - |
| `importdata` | on | presentation-default | core | default-on heuristic | 58 | - |
| `castimplied` | on | presentation-default | core | default-on heuristic | 26 | - |
| `castsign` | on | presentation-default | transform | default-on heuristic | 43 | - |
| `castternary` | on | presentation-default | transform | default-on heuristic | 21 | - |
| `castwiden` | literal | presentation-default | transform | default-on heuristic | 41 | - |
| `castnarrow` | on | presentation-default | transform | default-on heuristic | 27 | - |
| `declorder` | natural | presentation-default | core | default-on heuristic | 11 | - |
| `cppshortnames` | off | presentation-default | core | opt-in heuristic | 0 | - |
| `libcnames` | on | presentation-default | core | default-on heuristic | 85 | - |
| `contextnames` | off | presentation-default | core | opt-in heuristic | 4 | - |
| `flownames` | off | presentation-default | core | opt-in heuristic | 0 | - |
| `ptrdepthcap` | off | type-inference | transform | opt-in heuristic | 11 | - |
| `calltargettype` | on | type-inference | transform | default-on heuristic | 34 | - |
| `floatglobals` | on | type-inference | core | default-on heuristic | 26 | - |
| `boolbyte` | on | type-inference | core | default-on heuristic | 36 | - |
| `charbyte` | on | type-inference | core | default-on heuristic | 45 | - |
| `castarith` | on | presentation-default | core | default-on heuristic | 44 | - |
| `castindex` | on | presentation-default | core | default-on heuristic | 22 | - |
| `ptrfromuse` | void | opt-in-tool | transform | default-on heuristic | 61 | - |
| `ptrfromlocal` | off | type-inference | transform | opt-in heuristic | 4 | - |
| `charptr` | off | type-inference | transform | opt-in heuristic | 53 | - |
| `elemptr` | on | type-inference | transform | default-on heuristic | 99 | - |
| `pebnames` | auto | type-inference | transform | default-on heuristic | 37 | - |
| `structsynth` | locals | structure-recovery | transform | default-on heuristic | 149 | - |
| `structmerge` | off | structure-recovery | transform | opt-in heuristic | 38 | - |
| `structheadless` | closed | structure-recovery | transform | default-on heuristic | 34 | - |
| `fieldtype` | off | type-inference | transform | opt-in heuristic | 42 | - |
| `ctypes` | off | presentation-default | core | opt-in heuristic | 150 | - |
| `dedupvardecls` | on | presentation-default | core | default-on heuristic | 22 | - |
| `noreturn_known` | on | analysis-enablement | transform | default-on heuristic | 78 | - |
| `arm64evcall` | on | structure-recovery | transform | default-on heuristic | 9 | - |
| `libctypes` | opaque | analysis-enablement | analysis | default-on heuristic | 63 | - |
| `typelib` | auto | analysis-enablement | analysis | default-on heuristic | 72 | - |
| `libgccsigs` | off | correctness-fix | analysis | strict correctness fix | 17 | 10 |
| `movwpairs` | off | analysis-enablement | analysis | opt-in heuristic | 3 | - |
| `strings` | on | analysis-enablement | analysis | default-on heuristic | 108 | - |
| `blobs` | on | analysis-enablement | analysis | default-on heuristic | 37 | - |
| `widestrings` | on | analysis-enablement | analysis | default-on heuristic | 21 | - |
| `widestrings32` | off | analysis-enablement | analysis | opt-in heuristic | 9 | - |
| `entry_disc` | on | analysis-enablement | analysis | default-on heuristic | 5 | - |
| `eh_frame_full` | off | analysis-enablement | analysis | opt-in heuristic | 18 | - |
| `itaniumeh` | on | new-analysis | analysis | default-on heuristic | 66 | - |
| `vexzeroupper` | on | correctness-fix | core | strict correctness fix | 6 | 1 |
| `neonintrin` | on | presentation-default | core | default-on heuristic | 5 | - |
| `lanefuse` | on | new-analysis | core | default-on heuristic | 7 | - |
| `vectorabi` | on | correctness-fix | core | strict correctness fix | 20 | 4 |
| `strcodelen` | on | type-inference | analysis | default-on heuristic | 8 | - |
| `mba` | off | new-analysis | transform | opt-in heuristic | 74 | - |
| `egraph` | off | new-analysis | transform | opt-in heuristic | 0 | - |
| `pairlocal` | off | new-analysis | transform | opt-in heuristic | 5 | - |
| `spphistack` | on | new-analysis | transform | default-on heuristic | 28 | - |
| `avxintrinsics` | on | presentation-default | core | default-on heuristic | 7 | - |
| `unwindstarts` | on | analysis-enablement | analysis | default-on heuristic | 23 | - |
| `machoehframe` | on | analysis-enablement | analysis | default-on heuristic | 10 | - |
| `ehcold` | on | analysis-enablement | analysis | default-on heuristic | 8 | - |
| `functails` | off | analysis-enablement | analysis | opt-in heuristic | 8 | - |
| `mfcmsgmap` | on | analysis-enablement | analysis | default-on heuristic | 0 | - |
| `msvcptrentry` | on | analysis-enablement | analysis | default-on heuristic | 0 | - |
| `importvote` | on | analysis-enablement | analysis | default-on heuristic | 7 | - |
| `ehnote` | on | analysis-enablement | analysis | default-on heuristic | 4 | - |
| `addrtakenentry` | on | analysis-enablement | analysis | default-on heuristic | 8 | - |
| `flowmode` | off | correctness-fix | analysis | strict correctness fix | 23 | 8 |
| `elfmain` | on | correctness-fix | analysis | strict correctness fix | 81 | 26 |
| `funcstart_patterns` | off | analysis-enablement | analysis | opt-in heuristic | 144 | - |
| `armframes` | inventory | analysis-enablement | analysis | default-on heuristic | 45 | - |
| `cortexmvectors` | on | analysis-enablement | analysis | default-on heuristic | 18 | - |
| `ptrentry` | on | analysis-enablement | analysis | default-on heuristic | 20 | - |
| `poolentry` | on | analysis-enablement | analysis | default-on heuristic | 38 | - |
| `armwalkmode` | on | correctness-fix | analysis | strict correctness fix | 17 | 11 |
| `debuglink` | on | analysis-enablement | analysis | default-on heuristic | 6 | - |
| `symbolnamechars` | safe | correctness-fix | analysis | strict correctness fix | 18 | 1 |
| `ifuncfpret` | on | correctness-fix | analysis | temporary migration switch | 0 | 0 |
| `ppcapu` | off | correctness-fix | analysis | strict correctness fix | 7 | 4 |
| `dwarf` | on | analysis-enablement | analysis | default-on heuristic | 132 | - |
| `dwarf_lines` | off | analysis-enablement | analysis | opt-in heuristic | 8 | - |
| `dwarfnocall` | on | correctness-fix | analysis | strict correctness fix | 5 | 1 |
| `cppsig` | proven | analysis-enablement | analysis | default-on heuristic | 21 | - |
| `addrtable` | off | analysis-enablement | analysis | opt-in heuristic | 10 | - |
| `operand_refs` | off | analysis-enablement | analysis | opt-in heuristic | 40 | - |
| `formatstring` | static | analysis-enablement | analysis | default-on heuristic | 95 | - |
| `formatcallees` | on | analysis-enablement | analysis | default-on heuristic | 4 | - |
| `listing` | off | analysis-enablement | analysis | opt-in heuristic | 168 | - |
| `fast_funcdisc` | off | correctness-fix | analysis | strict correctness fix | 38 | 11 |
| `mapglobalsyms` | off | presentation-default | core | opt-in heuristic | 3 | - |
| `objectview` | on | analysis-enablement | analysis | default-on heuristic | 7 | - |
| `noreturn_disc` | on | analysis-enablement | transform | default-on heuristic | 60 | - |
| `fid` | off | analysis-enablement | analysis | opt-in heuristic | 156 | - |
| `flirt` | off | analysis-enablement | analysis | opt-in heuristic | 24 | - |
| `ruststdsigs` | off | analysis-enablement | analysis | opt-in heuristic | 0 | - |
| `fidproto` | on | correctness-fix | analysis | temporary migration switch | 0 | 0 |
| `rtti` | on | analysis-enablement | analysis | default-on heuristic | 77 | - |
| `msvceh` | off | analysis-enablement | analysis | opt-in heuristic | 1 | - |
| `delphi` | off | analysis-enablement | analysis | opt-in heuristic | 0 | - |
| `delphiabi` | on | analysis-enablement | analysis | default-on heuristic | 0 | - |
| `esprom` | auto | analysis-enablement | analysis | default-on heuristic | 13 | - |
| `itaniumrtti` | on | analysis-enablement | analysis | default-on heuristic | 39 | - |
| `vtabletypes` | on | type-inference | transform | default-on heuristic | 13 | - |
| `noreturn_propagate` | on | structure-recovery | transform | default-on heuristic | 40 | - |
| `noreturn_reach` | on | correctness-fix | transform | strict correctness fix | 2 | 0 |
| `aif` | off | analysis-enablement | analysis | opt-in heuristic | 138 | - |
| `x86listingswitch` | off | new-analysis | analysis | opt-in heuristic | 12 | - |
| `nameladder` | on | correctness-fix | analysis | temporary migration switch | 0 | 0 |
| `codestrings` | on | correctness-fix | analysis | temporary migration switch | 0 | 0 |
| `protomerge` | on | correctness-fix | analysis | temporary migration switch | 0 | 0 |
| `aifpoolslide` | on | correctness-fix | analysis | strict correctness fix | 24 | 13 |
| `tailcallentry` | on | analysis-enablement | analysis | default-on heuristic | 27 | - |
| `funcchunks` | off | analysis-enablement | analysis | opt-in heuristic | 7 | - |
| `globalwidth` | on | type-inference | analysis | default-on heuristic | 9 | - |
| `aifdataveto` | on | correctness-fix | analysis | strict correctness fix | 15 | 8 |
| `incrementalwalk` | on | performance | analysis | default-on heuristic | 0 | - |
| `calltable` | on | analysis-enablement | analysis | default-on heuristic | 5 | - |
| `stubbinds` | on | analysis-enablement | analysis | default-on heuristic | 4 | - |
| `tailcallentryall` | off | analysis-enablement | analysis | opt-in heuristic | 6 | - |
| `thunknames` | on | analysis-enablement | analysis | default-on heuristic | 9 | - |
| `nullsubs` | off | presentation-default | core | opt-in heuristic | 5 | - |
| `fatstr` | auto | type-inference | transform | default-on heuristic | 32 | - |
| `swiftstr` | auto | type-inference | transform | default-on heuristic | 21 | - |
| `gomorestack` | auto | structure-recovery | transform | default-on heuristic | 23 | - |
| `goabi` | auto | analysis-enablement | analysis | default-on heuristic | 20 | - |
| `gotypeglobals` | on | analysis-enablement | analysis | default-on heuristic | 17 | - |
| `gonewtype` | on | type-inference | transform | default-on heuristic | 17 | - |
| `gowritebarrier` | auto | structure-recovery | transform | default-on heuristic | 22 | - |
| `ptrauthtrap` | on | structure-recovery | transform | default-on heuristic | 8 | - |
| `chkstkdarwin` | on | structure-recovery | transform | default-on heuristic | 15 | - |
| `outlinedinline` | on | structure-recovery | transform | default-on heuristic | 8 | - |
| `gobool` | auto | correctness-fix | transform | strict correctness fix | 13 | 7 |
| `dyldimage` | none | analysis-enablement | analysis | opt-in heuristic | 29 | - |
| `dyldcrossrefs` | on | analysis-enablement | analysis | default-on heuristic | 10 | - |
| `machobinds` | on | analysis-enablement | analysis | default-on heuristic | 9 | - |
| `exporttrie` | on | analysis-enablement | analysis | default-on heuristic | 15 | - |
| `cil` | on | analysis-enablement | analysis | default-on heuristic | 46 | - |
| `sourcelang` | auto | analysis-enablement | analysis | default-on heuristic | 85 | - |
| `lazyfuncs` | off | speed | analysis | opt-in heuristic | 18 | - |
| `objc` | on | analysis-enablement | analysis | default-on heuristic | 3 | - |
| `objcivars` | on | analysis-enablement | transform | default-on heuristic | 27 | - |
| `objcsdk` | off | analysis-enablement | analysis | opt-in heuristic | 23 | - |
| `sdktypes` | off | analysis-enablement | analysis | opt-in heuristic | 0 | - |
| `swiftmetadata` | on | analysis-enablement | analysis | default-on heuristic | 96 | - |
| `cfstrings` | on | analysis-enablement | analysis | default-on heuristic | 34 | - |
| `swifttypes` | on | analysis-enablement | analysis | default-on heuristic | 42 | - |
| `swifthelpers` | on | analysis-enablement | analysis | default-on heuristic | 12 | - |
| `swiftcall` | on | analysis-enablement | analysis | default-on heuristic | 146 | - |
| `swiftcallers` | off | new-analysis | analysis | opt-in heuristic | 0 | - |
| `swiftruntime` | on | analysis-enablement | analysis | default-on heuristic | 15 | - |
| `iokitclasses` | on | new-analysis | analysis | default-on heuristic | 8 | - |
| `xnutables` | on | new-analysis | analysis | default-on heuristic | 5 | - |
| `osclassinfo` | on | new-analysis | analysis | default-on heuristic | 7 | - |
| `dextrpc` | on | new-analysis | analysis | default-on heuristic | 0 | - |
| `swiftobjcthunk` | on | analysis-enablement | analysis | default-on heuristic | 7 | - |
| `valuewitness` | on | analysis-enablement | analysis | default-on heuristic | 21 | - |
| `pdb` | on | analysis-enablement | analysis | default-on heuristic | 92 | - |
| `pdbtypes` | off | analysis-enablement | analysis | opt-in heuristic | 6 | - |
| `pdblines` | off | analysis-enablement | analysis | opt-in heuristic | 4 | - |
| `paramcopyhoist` | off | structure-recovery | transform | opt-in heuristic | 9 | - |
| `indirectonly` | off | presentation-default | transform | opt-in heuristic | 26 | - |
| `typemerge` | storage | presentation-default | transform | default-on heuristic | 11 | - |
| `phiarm` | off | presentation-default | transform | opt-in heuristic | 5 | - |
| `calleesaved` | off | presentation-default | transform | opt-in heuristic | 0 | - |
| `macho-arm64e` | on | analysis-enablement | analysis | default-on heuristic | 3 | - |
| `kernelcache` | auto | analysis-enablement | analysis | default-on heuristic | 56 | - |
| `kernelcache-boot` | auto | analysis-enablement | analysis | default-on heuristic | 6 | - |
| `outline` | off | opt-in-tool | transform | opt-in heuristic | 68 | - |
| `callwide` | off | new-caller-evidence | core | opt-in heuristic | 109 | - |
| `bejoin` | callers | correctness-fix | core | strict correctness fix | 117 | 17 |
| `bejoinpass` | whole | correctness-fix | core | strict correctness fix | 39 | 14 |
| `stackaddrargtrial` | off | opt-in-tool | transform | opt-in heuristic | 7 | - |
| `calleefilledarg` | on | correctness-fix | core | strict correctness fix | 16 | 4 |
| `narrowext` | abi | correctness-fix | core | strict correctness fix | 48 | 17 |
| `armfloatreturn` | on | correctness-fix | core | strict correctness fix | 105 | 31 |
| `armfloatargs` | on | correctness-fix | core | strict correctness fix | 79 | 24 |
| `infloopstyle` | while | presentation-default | core | default-on heuristic | 3 | - |
| `callarrayextent` | off | feature | transform | opt-in heuristic | 20 | - |
| `stackstruct` | off | type-inference | transform | opt-in heuristic | 45 | - |
| `globalarrayanchor` | off | opt-in-tool | transform | opt-in heuristic | 13 | - |
| `opaquepredicate` | off | structure-recovery | transform | opt-in heuristic | 8 | - |
| `callresultuse` | off | structure-recovery | transform | opt-in heuristic | 12 | - |
| `armconstshift` | off | correctness-fix | core | strict correctness fix | 23 | 18 |
| `armshiftguard` | on | presentation-default | core | default-on heuristic | 7 | - |
| `wrapadd` | off | correctness-fix | core | strict correctness fix | 10 | 6 |
| `uefi` | on | analysis-enablement | analysis | default-on heuristic | 23 | - |
| `cortexmscs` | on | analysis-enablement | analysis | default-on heuristic | 4 | - |
| `com` | on | analysis-enablement | analysis | default-on heuristic | 26 | - |
| `comcfg` | off | analysis-enablement | analysis | opt-in heuristic | 0 | - |
| `storetype` | uefi | analysis-enablement | analysis | default-on heuristic | 2 | - |
| `dwarfscopes` | on | analysis-enablement | analysis | default-on heuristic | 10 | - |
| `dwarfglobaltypes` | off | analysis-enablement | analysis | opt-in heuristic | 4 | - |
| `dwarfdecls` | on | analysis-enablement | analysis | default-on heuristic | 0 | - |
| `dwarfenumtypedef` | on | analysis-enablement | analysis | default-on heuristic | 0 | - |
| `tlsnames` | on | analysis-enablement | analysis | default-on heuristic | 5 | - |
| `readonlycalls` | 65536 | performance | core | default-on heuristic | 11 | - |
| `persistcalls` | 65536 | performance | core | default-on heuristic | 30 | - |
| `gobounds` | on | opt-in-tool | transform | default-on heuristic | 16 | - |
| `ppc32picimports` | off | correctness-fix | transform | strict correctness fix | 106 | 63 |
| `rustfmt` | on | opt-in-tool | transform | default-on heuristic | 76 | - |
| `outlang` | c | opt-in-tool | transform | default-on heuristic | 148 | - |
| `godwarfsig` | on | analysis-enablement | analysis | default-on heuristic | 47 | - |
| `rustprobestack` | off | structure-recovery | transform | opt-in heuristic | 11 | - |
| `cvftrace` | on | analysis-enablement | analysis | default-on heuristic | 3 | - |
| `gopcln` | off | analysis-enablement | analysis | opt-in heuristic | 7 | - |
| `typevote` | on | presentation-default | transform | default-on heuristic | 25 | - |
| `gotonext` | on | presentation-default | core | default-on heuristic | 14 | - |
| `switchmerge` | on | presentation-default | core | default-on heuristic | 11 | - |
| `panicloc` | on | type-inference | analysis | default-on heuristic | 6 | - |
| `oslog` | on | presentation-default | transform | default-on heuristic | 11 | - |
| `spsolve` | on | new-analysis | transform | default-on heuristic | 6 | - |
| `boolreturn` | on | structure-recovery | transform | default-on heuristic | 18 | - |
| `noretfirst` | on | structure-recovery | transform | default-on heuristic | 2 | - |
| `nestedand` | on | structure-recovery | transform | default-on heuristic | 7 | - |
| `retternary` | off | structure-recovery | transform | opt-in heuristic | 0 | - |
| `orexit` | off | structure-recovery | transform | opt-in heuristic | 0 | - |
| `honestgaps` | off | opt-in-tool | core | opt-in heuristic | 2 | - |
| `goitabcalls` | on | type-inference | transform | default-on heuristic | 7 | - |
| `condcallpush` | on | structure-recovery | transform | default-on heuristic | 9 | - |
| `orchainlive` | off | structure-recovery | transform | opt-in heuristic | 0 | - |
| `orchainbool` | off | structure-recovery | transform | opt-in heuristic | 0 | - |
| `structassign` | off | presentation-default | transform | opt-in heuristic | 0 | - |
