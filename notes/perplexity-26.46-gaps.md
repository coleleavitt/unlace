# Perplexity iOS 26.46.0 — unlace vs IDA 9.5 gap report (2026-11-21)

Inputs: decrypted `Perplexity.app` 26.46.0 (released 2026-11-18), main executable
`/home/cole/Downloads/perplexity-26.46.0/ext/Payload/Perplexity.app/Perplexity` (Mach-O arm64, 72 MB,
stripped, Swift-heavy, chained fixups) plus the 174 `Frameworks/*.framework` (31 of them real code; the
rest are 34 KB stubs). Raw outputs: `/home/cole/Downloads/perplexity-26.46.0/gaps/` (unlace JSON,
side-by-side `*.sbs.txt`, IDA `ida/*.decomp.json`, `.i64` databases, logs).

unlace: branch `all` at b6168f82f (worktree `~/RustProjects/forks/kuna-wt-perplexity`, dev profile
opt-level 1, binary `~/RustProjects/forks/kuna-target/perplexity/debug/kuna`), always run with
`--option objc on --option swiftmetadata on --option cfstrings on --option importdata on --option objcsdk
iPhoneOS16.5.sdk`. IDA: 9.5 headless (`idat64 -A -S`), Hex-Rays arm64, Swift plugin on.
Note: the main checkout `~/RustProjects/forks/kuna` was on `main` (upstream mirror, no Apple options), not
`all`, when this started; nothing was switched, the worktree was used instead.

## 0. Numbers

| | unlace | IDA |
|---|---|---|
| main binary `functions` / auto-analysis | 270,680 in 10.1 s wall, 3.2 GB RSS (`--jobs 8`) | 263,818 in ~8.5 min, 1.5 GB RSS, 1.07 GB `.i64` |
| of which `__got` import slots listed as size-0 functions | **7,865** (see gap 3) | 0 |
| ObjC methods named | 9,615 | 8,986 |
| other named (Swift metadata, exports) | 50,373 | 34,135 |
| functions only one side finds (code) | +177 `objc_msgSend$` stubs IDA skips (IDA quirk #93) | +1,180 tiny (4–36 B) cold tails/landing pads unlace keeps inside the owner |
| decompile 300 random main-binary functions (`decompile-all --addr …`) | 52.7 s, 1.14 GB (≈7 s load + 0.15 s/fn); 0 errors, 0 timeouts | 37.9 s incl. 33 s db load (≈15 ms/fn) |
| cmark-gfm.framework `decompile-all` (377 fns, C) | **200 s**, 125 MB; `_cmark_utf8proc_case_fold` (14.6 KB) alone 139 s "in variable merging", 60 s budget exceeded | 21.8 s total |
| AppAuthCore (705 fns, ObjC) / DeviceKit (456, Swift) / nanopb (73, C) | 1.7 s / 2.9 s / 0.8 s | 3.5 s / 3.4 s / 1.4 s |
| crashes / panics | none observed (91 + 300 main functions, 1,611 framework functions) | none |

gotos (readability, GED proxy): unlace prints fewer gotos than IDA almost everywhere (tp300: 59 vs 147;
cmark-gfm 1,375 vs 2,416; AppAuthCore 7 vs 44), the exceptions are listed in gap 9.
Names: unlace wins outright on stripped Swift (metadata-derived `<Type:Proto>.method` names where IDA has
`sub_`); IDA wins on import-slot and literal naming (gaps 2, 3, 5).

## 1. New gaps, ranked by impact

Impact = (how many functions it touches in this app) × (how wrong the output is). Suspected owner found with
`rlm.lsp`/`codeflow` on the `all` tree; "status" says whether an open fork PR already claims it.

### G1. A callee's `x0` result consumed directly by the next call or by the return is dropped; the function turns `void`
- Visible: every sampled corpus. tp300: 132/300 functions unlace-`void` where IDA returns; 98 of those IDA
  returns a call result; AppAuthCore 41, DeviceKit 190 (119 call results), nanopb 14/73.
- ObjC form (worst, wrong code): `+[Singular getLinkFromLaunchOptions:]` 0x1020bddd0
  ```c
  // unlace
  objc_msgSend$allKeys(arg1);
  v1 = (objc_object *)UIApplicationLaunchOptionsURLKey;
  if (objc_msgSend$containsObject:()) {              // receiver AND argument gone
  // IDA
  if ( objc_msgSend(objc_retainAutoreleasedReturnValue(objc_msgSend(a3,"allKeys")), "containsObject:", v6) )
  ```
  asm: `bl allKeys; bl objc_retainAutoreleasedReturnValue; mov x22,x0; mov x2,x21; bl containsObject:` — the
  send's receiver is the *return* of the hidden ARC call (not the x22 copy). Same at AppAuthCore 0x5660
  (`-[OIDAuthStatePendingAction initWithAction:andDispatchQueue:](...)` result dropped, then
  `objc_msgSend$addObject:()` with no receiver/argument). 13 zero-arg `objc_msgSend$…()` in AppAuthCore.
  Reproduces with `objcsdk` off.
- C form: nanopb `_pb_decode_bool` 0x5530: unlace `void …{ if (_pb_decode_varint32_eof(a0,&v1,NULL)) *a1 = v1 != 0; }`,
  IDA `result = pb_decode_varint32_eof(...); if (result) *a2 = v4 != 0; return result;`.
  `_pb_get_encoded_size` 0x65c8 also loses two pass-through params (`_pb_encode(&v1)` vs `pb_encode(&v5, a2, a3)`).
- Swift form: `<…CodingKeys:Swift.Hashable>.hashValue.getter` 0x101324704: `sub_1013245e8(v1); Swift.Hasher._finalize()();`
  (IDA `v0 = sub_1013245E8(v2); return Hasher._finalize()(v0);`).
- Suspected owner: p4_calls return/parameter recovery — `ActionActiveParam`/`ActionReturnRecovery` ports in
  `crates/unlace-decomp/src/p4_calls/` plus the `objcarc.rs` call-fixup (`p2_lift/objcarc.rs:66`,
  `retain_x{n}`/`objc_retainAutoreleasedReturnValue` → `x0 = x0`) which makes the receiver an input of a removed call.
  The C/Swift form has no ARC involved, so the root is the return/arity recovery treating an unknown callee's `x0`
  output as dead when it is only read by the next call's `x0` or the `ret`.
- Status: partly claimed. PR #1763 (`importvote`) fixes the tail-jump-to-import case (`void g(){ext3(a0,a1+1);}` →
  `int4 g(){return ext3(...)}`) and #1740 (`objcarc`) shows `return objc_msgSend(v2,sel_count)` on exactly the
  retainAutoreleasedReturnValue-receiver pattern — see §1b for the A/B on those branches.
- Minimal repro: `clang -O1 -arch arm64`: `long f(long a){ return g(a); }` with `g` extern and unprototyped, and
  `long h(long a){ long r = g(a); if (r) *p = 1; return r; }`; ObjC: `return [[obj allKeys] containsObject:k];` with `-fobjc-arc`.

### G2. Swift stdlib / runtime stubs unnamed when the import exists only in the chained-fixups import table
- Visible: 12 of the 31 Swift-package frameworks ship with `strip`ped undefined symbols: DeviceKit 79 nlist undefineds
  vs 170 chained imports; RevenueCat 245 vs 1,475. unlace names only stubs it can resolve from `LC_DYSYMTAB`/nlist:
  **DeviceKit 39/57 `__stubs` entries `sub_fcXX`, RevenueCat 696/848**; in the main binary (full nlist) 0/4,676.
- Snippet (DeviceKit `Device.BatteryState.description.getter` 0xcb94): unlace `sub_fc80(0x28); … sub_fcbc(dat_14ab0,dat_14ab8); sub_fc50(...)`,
  IDA `` `_StringGuts.grow(_:)`(41); `dispatch thunk of CustomStringConvertible.description.getter`(...); `String.append(_:)` ``.
  `unlace read DeviceKit 0x14ad8` already labels the `__got` slot `$ss11_StringGutsV4growyySiF` (raw, undemangled), so the
  bind name is known to the loader; only the stub→slot→name step and the demangle are missing.
- Suspected owner: `unlace-analysis/src/loader/macho_stubs.rs` (`resolve_macho_indirect_symbols`: indirect-symbol table only;
  `__stubs` has `reserved1/2 = 0` here) and `listing/pltstub.rs` (`PltStubs::for_file`, slot-following) — the
  chained-import name path (`machorelocs.rs`/`chained.rs` binds) is not consulted for the stub name, and the
  Swift-mangled bind names are not run through the `$s` demangler the way nlist names are.
- Repro: any SwiftPM-built dynamic framework from an App Store IPA (`ld64 -fixup_chains` + `strip -x`), or
  `ld64.lld -fixup_chains … && strip -u -r` on a Swift object calling `String.append`.

### G3. `__got` data-import slots print as `dat_…`; function-import slots are inventoried as size-0 functions
- Visible: main sample 273 `dat_` references into `__got` in 26/91 functions (29%); tp300 282 in 77/300; every
  `OBJC_CLASS_$_*` (`objc_alloc(dat_103f7bc20)` = `_OBJC_CLASS_$_NSMutableData`), `type metadata for …`
  (`dat_103f81be8` = `$sSSN`), witness tables, `_NSConcreteStackBlock` (`block.block.isa = dat_1e580` in AppAuthCore).
  `unlace read` and `unlace functions` know the names (slot labeled `Swift.String.type_metadata`), the decompiler does not.
  The flip side: `unlace functions` lists **7,865 size-0 "functions"** at `__got` slots (`Foundation.URL.host.getter`,
  `SwiftUI.View.onScrollPhaseChange(_:).opaque_type_descriptor`, …) — 3% of the inventory, all `udf 0x0` bytes.
- IDA: `&OBJC_CLASS_$_NSMutableData`, `&type metadata for String`, `_NSConcreteStackBlock`.
- Suspected owner: `importdata` path (`p0_knowledge` symbol commit of `ImportSym{kind: Data}` from `loader/format/macho.rs`
  + `machorelocs.rs`) — bound data slots get a `FunctionSymbol` when the import is a function and no symbol at all when
  it is data; `unlace-console` engine commit of `ImportSymKind`.
- Status: **claimed by open PR #1735** ("A call or read through a pointer bound to an import is anonymous …
  `dat_100004000` → `ext_handler()` / `ext_counter`"). Not in `all`. The size-0-function inventory half is not mentioned there.

### G4. Outlined Swift ARC helpers `swift_retain_x<N>` / `swift_release_x<N>` print with no argument
- Visible: 74 such imports in the main binary (`swift_retain_x1…x28`, `swift_release_x1…x28`, also `_x8`); `unlace xrefs`:
  `swift_release_x24` 4,954 call sites, `swift_retain_x20` 4,894. tp300: 183 bare `swift_release_xN()` in 58/300 functions.
  `objcarc.rs:66` builds the register-arg call-fixups only for `objc_retain_x{n}`/`objc_release_x{n}`.
- Snippet (0x10163fcf8): `swift_release_x24();` / `swift_release_x8(async_context[0x16].parent);` (the x8 one works by accident: x8 was a live arg).
- Owner: `p2_lift/objcarc.rs` (fixup table) + `unlace-analysis/src/analyzers/objc/objcruntime.rs:121 outlined_register`
  (only accepts the `objc_` prefix). Extend to `swift_retain|swift_release|swift_bridgeObjectRelease|swift_unknownObjectRelease_x<N>`.
- Repro: any -O Swift arm64 binary ≥ Swift 5.9 (`swiftc -O` emits them via the runtime's `swift_retain_xN` entry points).

### G5. Swift small-string pairs and `mov/movk` literal builds stay raw
- Visible: 566 16-hex-digit constants in tp300; every `CodingKeys.stringValue.getter`, `rawValue.getter`, `description.getter`.
  unlace decodes a small string **at a call site** (`sub_1015fd8e8(0x736d61726170,"params")`, `(…,"workflow_config")`) but not when
  the pair is **returned or stored**: `v1 = 0x736f705f6d726f66; … v2 = 0xe900000000000074; return *(unsigned __int128 *)v3;`
  (`"form_pos" / "t"`); 0x102cafa90 prints `(unsigned long)v20 & 0xffff0000ffffffff | 0x5f7400000000` for a `mov/movk/movk`
  chain IDA folds to one constant. Large immortal strings work (`"read_write_token"`), IDA has them raw — unlace is ahead there.
- Owner: the `fatstr`/`swiftstr` idiom in `p3_dataflow`/`p5_types` (`unlace_swift*.rs`, `swift-gaps` track #31) — call-site only;
  the `return`/`store` pair and the `return-dupe` split that keeps `movk` partials as separate SSA values.
- Status: PR #1736 (`fatstr`) covers the store form (`*(unsigned long *)&v1[8] = (unsigned long)"shape"`), tested in §1b.

### G6. Indirect tail jump (`br xN`) prints as a zero-argument call and deletes the code that computed its arguments
- Visible: tp300 11 bare `(...)(); // jump-as-call` in 10 functions; DeviceKit 5; all `resume_parent` continuations
  (`(*(void (*)(void))async_context->resume_parent)();`), vtable/witness tail dispatch.
- Worst case DeviceKit `swift56override_swift_task_create_common` 0x4454:
  `cmp x5,#0x20; mov w8,#0x20; csel x5,x5,x8,hi; br x6` → unlace `(*a6)(); // jump-as-call` (the clamp is dead-code-eliminated),
  IDA `if (a6 <= 0x20) a6 = 32; return a7(a1,a2,a3,a4,a5,a6);`. Also cmark `_cmark_node_get_type_string` `(*v2)()` (x0 live; IDA same bug).
- Owner: `p2_lift` BRANCHIND→CALLIND rewrite (`jump-as-call` warning emitter) gives the synthetic call a `void(void)` prototype;
  Ghidra's equivalent assigns the default (`unknown`) prototype so live inputs survive as `in_xN`.
- Repro: `void f(long a,long b,void (*g)(long,long)){ if (b<32) b=32; g(a,b); }` at -O2 arm64 (`csel`+`br x2`).

### G7. `NSFastEnumerationState` / stack struct passed by reference: args dropped, struct reads constant-fold to `_Reset`
- Visible: 39 `countByEnumeratingWithState:objects:count:(obj)` one-argument sends in the sample (every `for (x in y)`).
  `-[SentryScope setAttributeValue:forKey:]` 0x1027b17d8:
  ```c
  v2 = objc_msgSend$countByEnumeratingWithState:objects:count:(obj_00);   // &state, buf, 16 gone
  v1 = _Reset;                       // state.mutationsPtr read as *(long*)0 → pspec symbol at address 0
  … if (_Reset != v1) objc_enumerationMutation(obj_00);
  self_01 = *(objc_object **)(v4 * 8);                                   // itemsPtr base lost
  ```
  Also the `objc_super` struct at 0x100133cd4: `v1 = self;` then `objc_msgSendSuper2(...,&v1,...)` — the `super_class` store is gone.
- Owner: same arity recovery as G1 (stack-address arguments x2/x3 not kept) → the escaped stack struct is treated as unmodified
  across the call, so `p3_dataflow` constant-propagates the zero-initialised slot. The `_Reset` name is the `mapGlobals` pspec
  vector at 0 (INTEGRATION.md round 1 note) leaking into user code; a read of address 0 should stay `*(long*)0`.
- Repro: `-fobjc-arc` `for (id x in arr) { … }` at -O1.

### G8. Varargs and float args of C runtime callees: `NSLog` loses its `%@` arguments; `d0..d3` leak into unprototyped callees; wrong order on `objc_msgSendSuper2`
- `NSLog(CFSTR("Error %@ parsing token payload %@"));` (AppAuthCore 0xceac; IDA passes `v7, v4`), 3 in sample.
- `_swift_stdlib_reportUnimplementedInitializer(arg1.x,arg1.y,arg1.width,arg1.height,"Perplexity.RecentHistoryClipView",0x20,"init(frame:)",0xc,0)`
  (0x100133b88): the live-in `CGRect` doubles become the first four arguments of a Swift runtime function (known item "d0/d1
  as args", still reproduces for Swift-runtime C symbols the SDK does not declare).
- `objc_msgSendSuper2(arg1.x,arg1.y,arg1.width,arg1.height,&v1,sel_initWithFrame_)` (26 sites): varargs printed before the fixed `(objc_super*, SEL)`.
  IDA: `-[… initWithFrame:](&v11, "initWithFrame:", x, y, width, height)`.
- Owner: `p4_calls` varargs handling of `...` prototypes from `objcsdk` (`sdkprotos.rs`/`protos/mod.rs`) and the
  `swiftcall`/`objcsdk` C-proto gap (PR #1693 covers SDK-declared C functions; Swift runtime entry points need their own table —
  PR #1815 adds 101 concurrency ones, not `_swift_stdlib_*`).

### G9. Unbounded relative jump tables (Swift multi-payload enum `switch`) are not recovered; re2c scanner tables and switch-return tables spawn bogus functions
- Swift: `sub_102c50318` (13.3 KB, IDA 3,241 lines) → unlace 518 lines ending in
  `return (*(…)(v5 * 4UL + 0x102c50bf0))(); // jump-as-call` where `v5 = *(unsigned short *)(swift_getEnumCaseMultiPayload(...) * 2 + 0x1033d1aa6)`.
  The index is a call result (bounded only by the enum's case count from metadata), so `JumpBasic` finds no range; 3/300 tp300
  functions, each losing most of its body. Also `sub_101e44550`.
- C: cmark-gfm `__scan_html_block_start` (IDA one function, 4,484 B): unlace truncates at 0x16b8c (`funcboundflow` warning) because
  the `adr x10,…; ldrb w11,[x8,x9]; add x10,x10,x11,lsl#2; br x10` targets were made functions (`sub_16b8c`, `sub_16bc4`, `sub_16d70`,
  `sub_175b0`, `sub_177a4`); `_cmark_node_get_type_string` spawns 24 12-byte `sub_f49c…sub_f5cc` (the switch itself decompiles
  correctly). 35 only-unlace functions in cmark-gfm, all of this kind.
- Owner: `p2_lift/loweredswitch.rs` / `jumptable` models (`JumpBasic2`, `switchtrim`) and the discovery pass that
  registers jump-table targets as starts (`unlace-analysis` function discovery, `calltable`/`addrtable` votes).
- Status: PR #1819 (`relswitch`) drops bogus starts for *hardened* (`cmp/csel`-clamped) arm64e tables; neither the
  unclamped `getEnumCaseMultiPayload` index nor the plain-arm64 re2c tables are covered.

### G10. Structure/readability regressions vs IDA in specific shapes
- `sub_102cafa90` (enum→small-string switch, 1,116 B): IDA 144 lines, unlace **1,241 lines**, prototype
  `swift.type_metadata * (swift.AsyncContext *async_context, …a5)` on a function that never touches x22, `return-dupe x17`,
  phantom cases `0x4f/0x5d/0x7f…`, variable storage comments `d0 | pc | ram 0x686372616573 | x0 …` (string bytes used as RAM
  addresses). Owner: `returndup`/`earlyreturn` (p8) on a 256-way table + the `swiftasync` "async by reading the register"
  classifier (PR #1815 description) misfiring, + variable merging (`p6_variables`) across `pc`/`ram` storage.
- cmark `_S_render_node` 0xe6f8: 20 gotos vs IDA 7 (shared call tails `label_eb7c/eb90/eafc` not duplicated or sunk);
  unlace>IDA gotos in 15/300 tp300 functions and 9/377 cmark functions.
- `_cmark_utf8proc_case_fold`: 139 s in variable merging for one 14.6 KB function (IDA: seconds). Perf item for the
  `unlace --max-fn-seconds` default (60 s) on generated switch code.

### G11. Constant pointers into `__cstring` print as integers or `&dat_` when the expression type is not `char*`
- cmark-gfm: 69 instances in 8 functions (`(*v7)(a0,a1,0x28abe,0,0)` = `" ("`, `v3 = &dat_28a62` = `".SH"` chosen by `csel` against
  a `void*` from `_cmark_node_get_on_exit`). IDA prints the string whenever the constant lands in a string.
- Owner: `p9_emit` printc constant/string rendering (requires `char*` type) — a `__cstring`-range check on pointer-sized constants
  passed to unprototyped callees / `void*` phis would match IDA.

### G12. Literal-pool and `__const` constants read as data (`block.block.flags = dat_17d20` instead of `0xc2000000`), block descriptor names mangled (`…_e5_v8_x01?0l`)
- Every ObjC block literal in AppAuthCore (dozens). IDA folds the `ldr w8, =0xC2000000` read. Owner: `importdata`/`objcblocks`
  (`objcblocks.rs`) + read-only `__TEXT,__const` folding in p3.

## 1b. A/B against the open PR branches (built here)

Two open-PR heads were built the same way (worktrees `~/RustProjects/forks/kuna-wt-pplx-objc` = `fix/objc-struct-encodings`
48e3ef5a6, which stacks #1740 theme-objc + #1821; `~/RustProjects/forks/kuna-wt-pplx-swift` = `gap/swiftasync` 83cd37e64, which
stacks #1736 theme-swift + #1815) and re-run on the same addresses:

| gap | `all` b6168f82f | #1740+#1821 head | #1736+#1815 head |
|---|---|---|---|
| G1 ObjC receiver/arg drop (`containsObject:()`, `addObject:()`) | bug | **still bug** (block literals now `NSConcreteStackBlock_ptr`/`0xc2000000`, G12 fixed) | — |
| G1 C `pb_decode_bool` void | bug | still bug | — |
| G3 `objc_alloc(dat_103f7bc20)` | bug | still bug (claimed by #1735, not in this stack) | — |
| G7 fast enumeration args / `_Reset` | bug | still bug (`_Reset` name gone, `*(objc_object **)(v4 * 8)` and 1-arg send remain) | — |
| G8 `NSLog` varargs, `objc_msgSendSuper2` order | bug | still bug | — |
| G5 small strings in stored/returned pairs | raw | — | **x1 half fixed** (`v2 = (unsigned long)"form_post"`), x0 half and `undefined16` return remain |
| x21 error after a throwing call | `if (!v6)` on an unset x21 | — | still unset (`long v7; // x21 \| x25` … `if (!v7)`) |
| G4 `swift_release_x24()` | bare | — | still bare (5 in 0x10163fcf8) |
| G2 DeviceKit unnamed stubs | 39 | — | 27 (the concurrency table names 12 more, the rest stay `sub_fcXX`) |
| G9 `getEnumCaseMultiPayload` table, G6 `(*a6)()` | bug | — | unchanged |
| G10 0x102cafa90 async misclassification | 1,241 lines | — | 1,246 lines, still `async_context` first param |

## 2. Known open items — do they still reproduce on 26.46?

| item | status here |
|---|---|
| ObjC method taking a struct by value (`{CGRect=…}`) decodes to `void`, loses typed `self` | **fixed in `all`** for named structs: `-[… initWithFrame:](… *self, objc_selector *_cmd, CGRect arg1)` with `arg1.x/.y/.width/.height` and typed `self->floatingAccessoriesFrame` fields (0x100133cd4). Unions / `{?=…}` remain PR #1821. New side effects listed in G8 (the four doubles leak into following calls). |
| Swift witness `x21` error naming | **still open**: `<WorkflowCore.InputFormSchema.Page:Swift.Decodable>.init(from:)` 0x102c1bec8 tests `if (!v6)` with `v6 // x21 | x25` never assigned after `Swift.Decoder.container(keyedBy:).dispatch_thunk(...)`. Unchanged on the #1736/#1815 head (its `swift_error()` only fires for declared prototypes). |
| `x0..x3` aggregate returns | **still open**: every Swift `String`-returning getter is `undefined16 …getter(...)` with `*(unsigned __int128 *)v3` / `SUB168(...)` plumbing (25/300 tp300 functions; `swift.pair` appears on the swift head only for callee results). IDA prints `Swift::String` but drops the x1 half of the return (`return 0x736F705F6D726F66LL`), so neither is right. |
| typed-`this` vcalls to direct calls | **still open**: `Sentry.SentryOnDemandReplay.vtable#20.method(self,v2,arg2,v4,v3)`, `…vtable#59.setter(self,arg1)`, `…vtable#9.method` (3 in the 91-function sample); IDA prints the raw `(*(…)(*self + 0xA0))(…)`. The slot→method resolution from the class's static vtable (class descriptor method list) is the missing step. |
| unprototyped C callees taking `d0/d1` as args (PR #1693) | **still open** for symbols the SDK does not declare: `_swift_stdlib_reportUnimplementedInitializer(arg1.x,arg1.y,arg1.width,arg1.height,"…",0x20,"init(frame:)",0xc,0)` 0x100133b88. SDK-declared `CC_MD5(v1,v2,…)`/`CC_SHA256(…)`/`SecRandomCopyBytes(v4,v2,v3)` already come out typed in `all`, so #1693's own examples are covered; the gap is Swift-runtime C entry points. |
| dyld / IOKit memory notes | not exercised: this app has no kernelcache or dyld-cache input. The chained-fixups import-table path they depend on is what G2/G3 hit. |

## 3. IDA-informed backlog — what is still open

Sources: `unlace-ida95/findings/TRIAGE.md` (118 findings; done 53 / partial 28 / noted 26 / skipped 5 / won't-do 3 / deferred 3),
`INTEGRATION.md`, `docs/decbench/backlog-ida.md` and `novel.md` (both are generated decbench GED tables from 2026-08-03,
not IDA-comparison items; still the open readability backlog: 2,687 and 2,301 dedup groups). Fork PR state as of today:
`gh pr list -R Noelo-Lab/kuna --author coleleavitt --state merged` = 73 merged (the whole `apple/*` wave on 11-09, the
`fork/*` singles and `theme-perf`/`theme-gortti` on 11-20/21); `--state open` = 42 (`/home/cole/Downloads/perplexity-26.46.0/gaps/open-prs.tsv`).

### 3a. TRIAGE items still partial/deferred/skipped, mapped to where they live now

| TRIAGE # | item | in `all`? | upstream | carrying PR / note |
|---|---|---|---|---|
| #29 | Swift prototypes from mangled names + full CC (self/error/async, indirect result) | partial | #1485 swiftcall merged | **#1736 theme-swift, #1815 swiftasync** open; x21 still unset here (§2) |
| #40 | arm64e vcalls by PAC discriminator | partial | #1477 merged (PAC checks) | **#1738 theme-xnu** open; typed-this → direct vcall still open (§2) |
| #38 | kernelcache `IOExternalMethodDispatch`, kalloc_type, `__got` naming | partial | #1686 merged (aux/boot collection) | #1738, **#1810 iokitcxx** open |
| #43/#44 | LSDA pads to owner / Itanium try-catch | partial | — | **#1694 eh-catch-handlers** open |
| #45/#46 | MBA, AVX intrinsics | partial | #1691 opaque-predicate merged | **#1804 mbasolve, #1805 opaque, #1741 theme-x86vec** open |
| #47/#48 | Go ABI pick, Rust `&str` | partial | #1723 goabi-version, #1729 panicloc, #1758 gortti merged | #1755 theme-naming (Rust &str bounds) open |
| #50–52 | x86 SP solver, x87 depth, va_list | partial | #1709 extrapop merged | **#1806 spsolver, #1739 theme-x86abi, #1741** open |
| #57 | DWARF loclist locals | partial | #1717 dwarf-addr merged | **#1747 theme-elfdwarf, #1722 dwarfglobaltypes** open |
| #68 | branchy div/mod, merged range branches | partial | #1718 switchreroll, #1726 unmergecall merged | #1751 theme-idioms open |
| #71/#72 | goto sinking, continue, switch re-roll, condfold | partial | #1708 whilecontinue, #1728 gotonext, #1718 merged | **#1757 theme-structure** open (gotosink, looprotate, switchguardmerge) |
| #76/#77 | bswap/ctz idioms, switch guard merge, alloca | partial | #1721 postinc merged | #1751, #1757 open |
| #80 | type vote, va_arg, index rescaling | deferred | #1727 typevote merged | #1756 theme-types open (rescaling) |
| #82–#84 | function extent/chunks, tail-call split, call-table vs switch, `lsl #2` compact tables | partial | #1724 calltable merged | **#1763 theme-discovery, #1734 theme-aarch64, #1819 relswitch** open — and G9 here shows the arm64 byte/short relative tables still make bogus starts |
| #85 | string acceptance filters, global typing from access width | partial | — | #1756 open; G11 (`__cstring` constants) is a new facet |
| #87/#88 | `@N` prototypes, cppsig | partial | #1689 fid-prototypes… open | #1763 (import votes) open |
| #15, #17 | raw/TE images get no passes; addrtable/mapGlobals | partial | — | #1763 (object view, address tables) open |
| #21 | pattern pass Thumb/raw | partial | — | #1762 theme-firmware (draft) |
| #92 | DEX printer/try-catch | partial | — | #1761 theme-dex (draft) |
| #16, #58, #61, #62, #66, #69, #73 | AVX 256-bit params, PDB, PE load-config/delay imports, ARM64EC/WASM, dirty-op scheduling, role tags | deferred/skipped | #1702 wasm-loader (draft) | not started otherwise |

Done-in-TRIAGE items that this binary shows regressing or incomplete: #26 (ARC hiding — G1 receiver drop; `swift_*_xN` not
covered — G4), #28 (blocks — G12 constants fixed only on the #1740 head), #31 (Swift string literals — G5), #33/#34 (binds for all
data pointers — G2/G3 chained-import stubs and data slots), #79 (format-string typing — G8 `NSLog`).

### 3b. New items from this run, not in any open PR
G1 (pass-through `x0` result → void / missing receiver), G2 (chained-import-only stub names), G3's size-0 `__got` functions,
G4 (`swift_retain_xN`/`swift_release_xN`), G6 (`br xN` zero-arg jump-as-call), G7 (`NSFastEnumerationState` escape),
G8 (`NSLog` varargs; `objc_msgSendSuper2` vararg order; `_swift_stdlib_*` protos), G9's unclamped `getEnumCaseMultiPayload`
tables and plain-arm64 re2c tables, G10 (0x102cafa90 async misclassification + 8× blowup; case_fold 139 s), G11.

## 4. Where the raw material is
- `gaps/main.functions.json` (+`.stderr` with `/usr/bin/time -v`), `gaps/ida/Perplexity.funcs.json` (IDA inventory), `gaps/ida/Perplexity.i64` (1.07 GB — delete when done).
- `gaps/main.sample{0,1,2}.unlace.json` + `gaps/main.sample.sbs.txt` (91 stratified functions side by side; `gaps/main.sample.addrs.json` says which category each came from), `gaps/ida/Perplexity.sample.decomp.json`.
- `gaps/main.tp300.unlace.json` / `gaps/ida/Perplexity.tp300.decomp.json` (300 random functions, timing).
- `gaps/<framework>.unlace.json`, `gaps/<framework>.sbs.txt`, `gaps/ida/<framework>.decomp.json` for cmark-gfm, AppAuthCore, DeviceKit, nanopb; `gaps/cmark.*.c` single-function timings.
- `gaps/open-prs.tsv`, `gaps/merged-prs.tsv`.
- Worktrees created for this run (safe to remove): `~/RustProjects/forks/kuna-wt-perplexity` (`all`), `kuna-wt-pplx-objc`, `kuna-wt-pplx-swift`, with target dirs `~/RustProjects/forks/kuna-target/{perplexity,pplx-objc,pplx-swift}`.
