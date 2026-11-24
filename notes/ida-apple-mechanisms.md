# Where IDA 9.5 still beats unlace on Apple arm64, and how IDA does it (2026-11-22)

Scope: research only. IDA side read from the 9.5 plugin modules (Hex-Rays-style pseudocode of every
function plus the SQL exports in `~/SiteResearch/ida-pro/sqlite/apple__{objc,swift,macho,arm,dscu,kcu}.sqlite`);
addresses below are offsets inside those Linux `.so` modules (`objc.so`, `swift.so`, `macho.so`, `arm.so`).
Every mechanism is described in my own words; no IDA code or text is copied here.
unlace side: branch `all` at eeceeccd7 (main checkout build `target/debug/unlace`, Apple options
`objc swiftmetadata cfstrings importdata objcsdk` on). Perplexity evidence: the 390 main-binary functions
that have both an IDA and a unlace decompile in `~/Downloads/perplexity-26.46.0/gaps/` (tp300 + the 91-function
stratified sample; unlace JSON from b6168f82f, spot checks re-run on eeceeccd7), plus the full IDA
(`ida/Perplexity.funcs.json`, 263,818 functions) and unlace (`main.functions.json`) inventories.
Companion: `notes/perplexity-26.46-gaps.md` (G1..G12 there).

Ranking = functions touched in Perplexity x how wrong the output is. "Open PR" means a fork PR already
claims it; the mechanism is still listed because it says what the PR has to match.

| # | gap | Perplexity impact | unlace status |
|---|---|---|---|
| 1 | `self` (x20) of unnamed Swift functions dropped | 60/390 sampled functions (15%) read an uninitialised `long v; // x20` | missing (no PR) |
| 2 | unknown callee's result / pass-through return lost (`void`) | 132/300 tp300 unlace-`void` where IDA returns (G1) | open #1842, #1841, #1763 |
| 3 | `__got` data imports print as `dat_` (metadata, witness tables, conformance descriptors, `OBJC_CLASS_$_`) | 188 named refs IDA prints in the 390; 29% of functions; blocks ObjC receiver resolution | open #1735 |
| 4 | value witness functions unnamed and unprototyped | 14,672 functions (5.6% of the binary); 26/390 sampled functions are one, 30 call sites | missing (no PR) |
| 5 | callee side: x20 `self` (and x8 indirect result) of calls to Swift imports | every mutating stdlib/Foundation method call; output is wrong, not just ugly (`String.append` loses its buffer) | missing for x20 (#1859 covers x21 only) |
| 6 | `swift_retain_xN` / `swift_release_xN` / `swift_bridgeObject*_xN` print with no argument | 183 bare calls in 58/300 tp300; 4,954 call sites of `swift_release_x24` alone | open #1839 |
| 7 | Swift small/immortal string pairs that flow through locals or are returned | 566 raw 16-digit constants in tp300 | partial; open #1736, #1854 |
| 8 | unguarded `ldrh`-relative jump table indexed by `swift_getEnumCaseMultiPayload` | 3/300 functions, each loses most of its body | `switchtrim` exists but does not fire (no PR) |
| 9 | `br xN` indirect tail jump becomes a zero-argument `void(void)` call | 28 sites in 23/390 functions | missing (no PR) |
| 10 | Swift runtime / stdlib C entry points without prototypes; varargs order | 26 `initWithFrame:` sites with `d0..d3` leaked into `_swift_stdlib_reportUnimplementedInitializer`; `NSLog` args | open #1847, #1862, #1815 |
| 11 | jump thunks not named after their target | 1,060 functions (`j_…`), 3 call sites in the 390 | missing on arm64 |
| 12 | `NSFastEnumerationState` stack object not typed | 39 `for…in` loops in the 91-function sample | partial (args fixed, struct untyped) |
| 13 | metadata accessor results stay `long` | IDA types 270 `Swift::Metadata *` locals in the 390, unlace 78 `swift.type_metadata *` | partial |

Places where unlace can beat IDA, not just match it, are marked **beat IDA**.

---

## 1. `self` (x20) of unnamed Swift functions

**Perplexity.** In 60 of the 390 functions IDA's prototype has a `__swiftself` parameter while unlace declares an
x20-backed local that nothing assigns: `sub_1001c8e1c` (a closure-context destroy: unlace `void sub_1001c8e1c(void)`
reads `v6 // x20` and passes it to `swift_deallocObject`), `sub_1006102c8`, `sub_1007bb3e0`, `sub_100837dfc`
(IDA: `self, a2, a3`; unlace: `a0, a1` and an unset `v3 // x20`). These are closures, partial-apply forwarders,
heap-object destroyers, outlined copies: functions with no symbol and no metadata placement.

**IDA mechanism** (`swift.so`). The plugin keeps a per-function Swift calling-convention flag word in its own
netnode (`$ swift cc`, written by `sub_13E60`), later turned into `__swiftcall` / `__swiftasynccall` /
`__swiftthrows` when prototypes are built (`sub_38D20`). The flags come from three sources:
- `sub_1A320` walks every symbol of the image; for each one that is a Swift runtime entry point
  (`sub_13C90`: any `swift_*` name gives "swiftcall", `swift_willThrow` gives "swiftcall + throws"), it collects
  every function that calls it (`sub_13FC0`: code xrefs to the symbol, following through thunk functions a
  bounded number of levels) and ORs the flag into each caller.
- every function whose own name is a Swift mangled name (`sub_15D00`: prefix list plus a demangle check) gets
  "swiftcall";
- `sub_19460` refines from the demangled node kind (Function, Allocator, Constructor, Destructor,
  Deallocator, Explicit/ImplicitClosure; a member of a Class/Protocol adds the self bit; async adds the async bit).

So a stripped closure that calls `swift_release` is `__swiftcall`, Hex-Rays then treats x20 as a possible
input (and x21 as error when the function calls `swift_willThrow`), and parameter recovery decides whether
the body reads it.

**unlace.** `unlace-analysis/src/analyzers/swift/swiftcall.rs:766` `bind` attaches `__swiftcall` only to a
function it can place in a type (vtable slot, conformance witness, demangled symbol); the model itself
(`unlace_decomp::unlace_swiftcall`, swiftself as an extra input resource) is already right. Everything else uses
the C model, where x20 is callee-saved and never a parameter.

**Proposed change.** Extend the `swiftcall` arm (same option, it is a refinement of it) with the IDA-style
caller rule: any function that calls a Swift runtime entry point (`swift_retain*`, `swift_release*`,
`swift_allocObject`, `swift_deallocObject`, `swift_beginAccess`, `swift_getGenericMetadata`, …, through stubs and
jump thunks) gets `__swiftcall` with no signature, `__swiftcall_throws` when it calls `swift_willThrow`. Because
unlace's model only declares `self` when the body reads x20 at full width, a false positive costs nothing in a
function that does not read x20. Owner: unlace-analysis swift (`swiftcall.rs`), facts committed as today.
Extra **beat IDA**: also accept a function that is the target of a `swift_allocObject` metadata's destroy slot
or of a partial-apply context, so the self type is the context layout, not `void *`.

## 2. Unknown callee's result / pass-through return lost

**Perplexity.** G1 in the gap report; still reproduces on `all` for the C/Swift forms, e.g.
`sub_100009fe4` (`__swift_instantiateConcreteTypeFromMangledName`, returns the cached metadata in x0) prints
`void … // return-dupe` while every caller uses its result; `sub_10004a350` (lazy witness-table accessor)
prints `void` and `if (dat) return;` where IDA returns the cached table. The ObjC receiver form is fixed on `all`
(`+[Singular getLinkFromLaunchOptions:]` is correct now).

**IDA mechanism.** Not in the Apple modules: this is Hex-Rays' default for calls without a prototype (assume a
register return; keep it when it is read, including by the next call's x0 or by the `ret`), so a function whose
x0 at every `ret` comes from a call is non-void. No Apple-specific code involved.

**unlace.** Ghidra's recovery treats an unknown callee's x0 as dead unless it can prove a read; open PRs #1842
(`callresultuse`), #1841 (`passthrough`), #1763 (import votes). Keep; this entry is only here for the ranking.

## 3. `__got` data imports

**Perplexity.** `dat_103f807c0` / `dat_103f7d4e8` where IDA prints `&protocol witness table for Color` and
`&protocol conformance descriptor for <> ModifiedContent<A, B>`; `objc_msgSend$numberWithLongLong:(dat_103f79168, …)`
where IDA resolves `+[NSNumber numberWithLongLong:]` and types the result `NSNumber *`. In the 390: 124
`type metadata for`, 32 witness tables, 32 conformance descriptors, plus `OBJC_CLASS_$_*`; unlace also merges the
slot into a variable (`unsigned long v1; // ram 0x103f807c0 | stack …`).

**IDA mechanism** (`macho.so`). The chained-fixup walk (`sub_39B60`, `sub_2EE20`) turns each bind into a
pointer to an item in the extern segment; `sub_26640` and `sub_281A0` name the slots (`<import>_ptr`);
because the slot holds a fixed address, a load from it folds to that address and prints as `&<import>`.
The ObjC plugin then reads the folded class reference: `sub_30550` gets the receiver class from (a) the
receiver expression's pointer-to-class type, (b) a class reference global, or (c) for `objc_msgSendSuper*` the
current function's `self` type; it resolves the selector up the superclass chain (`sub_18EB0`), and
`sub_31140` swaps the `objc_msgSend` callee for the method label (adding a code xref); `sub_31430` types the
result (instancetype heuristic `sub_164E0`: `alloc/init/new/allocWithZone:/sharedInstance/defaultInstance/
retain/autorelease/self`, an `init…With…` selector, or a `xWith…` selector whose prefix matches the class name's
tail case-insensitively, e.g. `stringWithFormat:` on `NSString`).

**unlace.** Open PR #1735 (bound data slots named and folded). Once it lands, `p5_types/objcrettype.rs`
(the `objcrettype` / `objcresolve` arm, which already implements the receiver walk and the instancetype rule)
needs the folded `__got` class import as a receiver source; check that the SDK class (`NSNumber`) resolves
without a local `class_t`.

## 4. Value witness functions

**Perplexity.** IDA names 14,672 functions `getEnumTagSinglePayload value witness for X`,
`storeEnumTagSinglePayload …`, `assignWithCopy …`, `assignWithTake …`, `destroy …`, `initializeWithCopy …`,
`initializeWithTake …`, `initializeBufferWithCopyOfBuffer …` (2,576 / 2,575 / 2,029 / 2,017 / 1,921 / 1,454 /
1,101 / 999). unlace names 10 of them; the rest are `sub_` with recovered (often wrong-arity) prototypes,
e.g. `sub_1008b1330(unsigned long *a0, unsigned long *a1)` = `assignWithTake value witness for
AutomationWebhookCredentialCard` (3 arguments: dest, src, metadata).

**IDA mechanism** (`swift.so` `sub_1FB30`, called from `sub_216A0` per type metadata record). For a type's
metadata it reads the word before it (the VWT pointer). If the table is local, it reads the eight function
pointers, names each one by appending the value-witness mangling suffix (table `off_78A60`: `wCP wxx wcp wca
wtk wta wet wst`) to the type's mangled name and demangling, names the table `<T>WV`, and reads size, flags
(alignment) and extra-inhabitant count. If the table is imported it recognises the builtin tables (`ytWV`,
`Bi64_WV`, `BoWV`, `BbWV`, …) for the layout only.

**unlace.** `unlace-analysis/src/analyzers/swift/swifttypes.rs:341` `struct_extent` and `:354`
`local_witness_table` already find the same table, but only to read size and alignment; nothing names or
types the eight entries. The demangler already prints value witnesses (`analyzers/demangle/swift/parse.rs:1871`).

**Proposed change.** In `swifttypes` (under `swiftmetadata`), for every located metadata whose VWT is local:
name entry i `<Type>.<witness>.value_witness` (or the demangler's form) and give it the runtime prototype
(`initializeWithCopy(OpaqueValue *dest, OpaqueValue *src, Metadata *self) -> dest`, `destroy(obj, self)`,
`getEnumTagSinglePayload(value, numEmptyCases, self) -> uint32`, …; `swift/ABI/ValueWitness.def`), with `dest`/`src`
typed as `Type *` when the layout is known. **Beat IDA**: type `*(metadata - 8)` as `swift.value_witness_table *`
so the 155 indirect calls in the 390 (`(**(…)(*(long *)(v1 + -8) + 0x20))(a1,a0,v1)`) print as
`vwt->initializeWithCopy(a1, a0, v1)`; IDA leaves them as `value[-1].kind + 32`.

## 5. Callee side: Swift imports' x20 `self` and x8 result

**Perplexity.** `Swift.String.append(_:)(0x6c6d74682e, ".html")` (0x1023bb940) and DeviceKit
`Device.BatteryState.description.getter` (0xcb94): the `inout String` buffer in x20 is not passed, so the
literal stored into the buffer before the calls is printed as the *returned* value at the end; the output says
something the code does not do. Same for every mutating stdlib method and every method on a resilient value
type (`Foundation.URL.appendingPathComponent(_:)` takes `self` indirectly in x20, result in x8).

**IDA mechanism** (`swift.so` `sub_396F0` and the prototype table at `off_78EE0`). Mostly hand-written: a table
of about 490 runtime and stdlib prototypes (name patterns with `%d`), a few of them Swift methods with a
`__swiftself` parameter (`String.append`, `DefaultStringInterpolation.appendLiteral/appendInterpolation`,
`print(_:separator:terminator:)`, `_allocateUninitializedArray`), plus usercall forms for x8 results
(`swift_getAtKeyPath`). IDA shows `self:` on only 22 call sites in the 390, so it is weak here too.

**unlace.** `swiftcall.rs` binds `__swiftcall` to *local* functions it places; an import keeps the C model.
PR #1859 adds the x21 error read for throwing imports only.

**Proposed change (beat IDA).** For every import whose demangled tree is a method or accessor of a nominal type
(the same tree `swiftcall.rs` already walks for local symbols), bind `__swiftcall` with no signature:
recovery then keeps x20 exactly when the caller writes it before the call, and x8 as an indirect result when
the function type returns an address-only type. No table needed; covers every stdlib/Foundation/SwiftUI method.
Owner: unlace-analysis swift, `swiftcall` option.

## 6. `swift_*_xN` register-specific ARC entry points

**Perplexity.** G4: `swift_release_x24();` etc.

**IDA mechanism** (`swift.so` `sub_396F0`, table `off_7D440`). Four families: `swift_retain`,
`swift_release`, `swift_bridgeObjectRetain`, `swift_bridgeObjectRelease`, each with suffix `_x<N>` for N up to
30 except 18 (the platform register), optionally followed by `_<digits>` (linker copies); retain-like ones get
`void *f@<xN>(void *p@<xN>)`, release-like `void f(void *p@<xN>)`. The ObjC plugin does the same for
`objc_retain_x<N>` / `objc_release_x<N>` up to 28 (`objc.so` `sub_1C270`). Separately, `gotLoadHelper_x<N>$…swift…`
gets `void *f@<xN>()`.

**unlace.** `unlace-analysis/src/analyzers/objc/objcruntime.rs:122` `outlined_register` accepts the `objc_`
prefix only. Open PR #1839. Check that it includes the two `bridgeObject` families, x29/x30, excludes x18, and
the `_<digits>` suffix; `gotLoadHelper_x<N>` is not in any PR.

## 7. Swift string pairs through locals and returns

**Perplexity.** G5. On `all` the DeviceKit getter still ends with
`v2 = 0x2079726574746142; v4 = 0xef203a6c6576656c; *(ulong *)&v3[8] = v4; *(ulong *)v3 = v2; return *(u128*)v3;`
(`"Battery level: "`).

**IDA mechanism** (`swift.so` `sub_44F40`, `sub_49AC0`, rescan `sub_47F80`). It works on the disassembly, not
on the decompiler's dataflow: for the two registers or two adjacent stores of a candidate pair it asks IDA's
register value tracker for the constant each holds at that instruction (`sub_3AC00` around
`reg_finder94_find_reg_value_info`, accepted only when every path gives the same value), decodes small or
immortal strings, stores the result per address in a netnode (`$ swift strings`), and registers a synthetic
string provider so Hex-Rays prints `Swift::String("…")` wherever that pair appears, however the decompiler
later moves it.

**unlace.** `unlace-decomp/src/p5_types/swiftstr.rs:1` pairs a count word with an object word inside one
`STORE` / `COPY` / `CALL` / `RETURN` / `PIECE`; a pair whose halves reach the return through two locals and a
`char[16]` stack copy is missed. Open #1736 / #1854 cover part of it.

**Proposed change.** Run the pairing after copy propagation on the two `COPY` sources that feed the halves of a
16-byte stack object or of the `x0:x1` return (`PIECE` of two constants is the easy case), not only on the final
op. Owner: `swiftstr` (p5).

## 8. Unguarded `ldrh` jump table indexed by an enum case

**Perplexity.** `sub_102c50318` 0x102c50bcc..0x102c50bec: `mov w8, w0` (result of
`swift_getEnumCaseMultiPayload`), `ldrh w11, [x9, x8, lsl #1]`, `add x10, x10, x11, lsl #2`, `br x10`.
unlace still prints `(*(…)(v8 * 4UL + 0x102c50d38))(); // jump-as-call` (1,172 lines vs IDA's 3,241); the
bounded table at 0x102c5380c in the same function (with `b.hi`) is recovered.

**IDA mechanism** (`arm.so`). Jump tables are matched by instruction-pattern tables fed to the kernel's
matcher (`sub_89300`, `sub_89A10`, `sub_89D10`, `sub_89E70`, patterns at `unk_B66C0`/`unk_B66E0`/`unk_B6790`).
When the pattern has no bounding compare, the size is left open and the kernel's table trimmer
(`trim_jtable`) or the flat-table checker (`check_flat_jump_table`, for tables of `b` instructions) ends the
table by its layout (my reading of the call sites; the kernel side is not in the Apple modules).

**unlace.** `unlace-decomp/src/p2_lift/switchtrim.rs:1` implements exactly this "read until a stop rule" for a
single-load unbounded table, but it does not fire here: the index is a zero-extended 32-bit call result and the
table holds 16-bit scaled offsets from an `adr` base. Needs a reduced repro to see which precondition fails.
**Beat IDA**: the index is `swift_getEnumCaseMultiPayload(value, metadata)`, and the metadata's enum descriptor
gives the exact case count (payload cases + empty cases), so the table can be bounded exactly instead of by a
stop rule, and the cases can be labelled with the enum's case names (unlace already resolves
`…continuous(_:).enum_case`).

## 9. `br xN` indirect tail jump

**Perplexity.** G6: 28 `// jump-as-call` in 23 of the 390 (`resume_parent` continuations, witness tail
dispatch); DeviceKit `swift56override_swift_task_create_common` 0x4454 prints `(*a6)();` and deletes the
`csel` clamp of x5.

**IDA mechanism.** Hex-Rays core: an indirect jump out of the function is a tail call whose arguments are the
argument registers live at the jump (it prints `return a7(a1, …, a6)`). Nothing Apple-specific.

**unlace.** `unlace-decomp/src/p2_lift/flow.rs:4487` turns the `BRANCHIND` into a `CALLIND` plus an artificial
halt; the synthetic call gets no inputs, so dead-code removal deletes their definitions. Give the synthetic
call the default (unknown) prototype so active-parameter trials run, and the current function's own
prototype as a first guess when the jump is the last instruction (a tail call passes its own arguments
through). No PR.

## 10. Swift runtime / stdlib C prototypes, varargs

**Perplexity.** G8: `_swift_stdlib_reportUnimplementedInitializer(arg1.x, arg1.y, arg1.width, arg1.height,
"Perplexity.RecentHistoryClipView", 0x20, "init(frame:)", 0xc, 0)` (0x100133b88, still on `all`), `NSLog`
losing its `%@` arguments, `objc_msgSendSuper2` varargs before `(super, SEL)`.

**IDA mechanism** (`swift.so` `sub_396F0`). The prototype table `off_78EE0` (about 490 entries, matched by name
pattern) covers the runtime and the `_swift_stdlib_*` C entry points, the `swift_cvw_*` / layout-string
functions, the concurrency runtime (with `__swiftasynccall` where it applies), noreturn ones
(`swift_dynamicCastFailure_*`, `swift_unreachable`), and `$s…Ma` non-generic metadata accessors
(`MetadataResponse f(MetadataRequest)`, only when the demangled name has no `<([,` or `->`).

**unlace.** `unlace-analysis/src/analyzers/swift/swiftruntime.rs` has 166 entries, `_swift_stdlib_*` mostly
missing (`:351` has two). Open #1847 (stdlib C entry points), #1815 (concurrency), #1862 (variadic
`objc_msgSend*` / `NSLog`).

## 11. Jump thunks

**Perplexity.** 1,060 functions IDA names `j_<target>` (`j__swift_getEnumCaseMultiPayload` 40 copies,
`j__swift_bridgeObjectRetain`, `j__swift_release_x1_0`, `j_$s…Vwet` …). unlace decompiles them with the target's
prototype (`sub_1000fa658` returns `swift_getEnumCaseMultiPayload(a0, a1)`) but keeps `sub_`, so callers print
`sub_1000fa658(…)`.

**IDA mechanism** (`arm.so` `sub_8C8B0` around `calc_thunk_function_target`): a function that is one direct
branch is a thunk; it is named `j_<target>` and calls through it render as the target.

**unlace.** `unlace-analysis/src/listing/thunkentry.rs:37` "x86 only". Extend the naming half (not the
entry-promotion half) to arm64 `b <target>` bodies; owner `thunkentry` or the naming pass. Low call-site
impact, high inventory impact.

## 12. `NSFastEnumerationState` stack object

**Perplexity.** `-[SentryScope setAttributeValue:forKey:]` 0x1027b17d8 on `all`: the arguments are right now
(`(obj_00, &v1, v2, 0x10)`), but the state is eight unrelated locals, so `v4 = *v7` reads a `v7` that was set to
`NULL` and `*(v6 + v5 * 8)` hides `itemsPtr[i]`.

**IDA mechanism.** The SDK type library declares the selector's parameter `NSFastEnumerationState *`; the
call-site type is propagated onto the stack object so it becomes one struct variable.

**unlace.** `objcsdk` knows the prototype; the pointer type is not pushed onto the addressed stack object.
Owner p5 type propagation (stack object typed from a typelocked pointer parameter).

## 13. Metadata accessor results

IDA types the `.value` of every `type metadata accessor for X(request)` as `Swift::Metadata *` (270 locals in the
390); unlace prints `long v1 = X.type_metadata_accessor(0)` (78 typed locals) although
`swifttypes.rs:24` says the accessor prototype is `swift.MetadataResponse f(void)`. Probably the first
field of the response is not projected at the call site. Small, but it is what item 4's **beat IDA** typing
of `*(metadata - 8)` hangs on.

---

## Other beat-IDA opportunities found on the way

- `__swift_instantiateConcreteTypeFromMangledName` (two copies here, `sub_100009fe4` and `sub_1021ad204`;
  31 calls in the 390): both decompilers leave `sub_…(&cache, &mangled)`. Recognise the body (cache test, then
  `swift_getTypeByMangledNameInContext2` on the relative name) and decode the mangled-name argument at each call
  site to print the type (`type metadata for [String : Any]`). Owner `swiftmetadata`.
- Lazy protocol witness table accessors (`sub_10004a350`: cached global, `swift_getWitnessTable(conformance,
  type, args)`): name them from the conformance descriptor and type; IDA leaves them `sub_`.
- Outlined destroy / copy helpers (`sub_100023dc8`, 42 calls in the 390: call a metadata accessor, then VWT
  `destroy`): name them once item 4 types the VWT.

## Not exercised by Perplexity (for completeness)

- `kcu.so`: typed `OSDynamicCast` call sites ("cast: … call sites typed"), `kalloc_type` views laid out as
  types, `IOExternalMethodDispatch` records typed, OSMetaClass vtables named and typed, a `MetaClass::alloc`
  shared by several abstract classes folded. unlace (2026-11-24): `iokitclasses` and `xnutables` cover all of
  these but the `OSDynamicCast` typing, which is row 30 of `notes/ida-gap/apple-objc-macho.md`.
- `dscu.so`: dyld-cache GOT detection ("Detecting global offset tables"), branch islands, slide detection,
  sub-cache lookup. unlace: dyld cache loader in `unlace-analysis` (#1735 for the bind names).
- `objc.so` local stack blocks (`sub_2E170`: find `_NSConcreteStackBlock` isa stores, build a per-site
  `Block_layout_<addr>` struct, type the invoke). unlace is already ahead here (blocks named
  `-[… setMeasurementEnabledState:]_block_invoke(Block_layout_… *block)` with `block->capture_0`).

## Loader and metadata coverage

The module-by-module survey of IDA's ObjC, Mach-O, dyld-cache and kernelcache support against unlace
(34 rows, ranked top 10: SDK C prototypes, Mach-O `.o` relocations, the Swift caller rule of row 1 here,
`OSDynamicCast` typing, KDK symbol import, thin-image `LC_DATA_IN_CODE`, thread-local variables, ObjC header
export, ObjC 1, DTrace probes) is `notes/ida-gap/apple-objc-macho.md`.

## Where unlace is already ahead (keep)

Names on stripped Swift (31,055 functions unlace names where IDA has `sub_`: metadata-derived methods, 9,969 type
metadata accessors vs 8,961, 270 dispatch thunks vs 132), enum case names, ObjC block literals, receiver-typed
`objc_msgSend$` sends, fewer gotos (107 vs 252 in the 390).
