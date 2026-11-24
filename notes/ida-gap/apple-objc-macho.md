# IDA gap survey: Apple ObjC, Mach-O, dyld cache and kernelcache (2026-11-24)

Scope: what IDA 9.5's Apple modules do that unlace does not, and what unlace already matches.
IDA side: the decompiled modules and SQL exports in `~/SiteResearch/ida-pro`
(`sqlite/apple__{objc,macho,dsc,dscu,kcu,swift}.sqlite`, `objc_plugin/all/`, `macho/all/`); every mechanism
is described in my own words, with the module's own progress/diagnostic strings as anchors.
unlace side: main at f7e6edec8e (`unlace catalog --json`, `crates/unlace-analysis/src`). The Swift decompile
gaps measured on Perplexity are in `notes/ida-apple-mechanisms.md` (rows 1-13) and are not repeated here;
rows below that touch Swift point at it. Research only, no code.

Status: **done** = unlace does it (option named); **partial**; **missing**; **n/a** = out of scope for a
static decompiler (debugger, UI, decryption keys).

## Coverage table

| # | IDA mechanism (module) | unlace | status |
|---|---|---|---|
| 1 | ObjC 2 metadata web: classes, metaclasses, method/ivar/property/protocol lists, `__objc_classrefs`/`superrefs`/`selrefs`/`protorefs`, method names `-[C sel]` (objc) | `objc`, `objcivars`, `objcprops.rs`, `objcprotos.rs`, `objcrefs.rs` | done |
| 2 | Relative method lists (`__objc2_relative_list_header`, small methods, selector base) (objc, dsc) | `analyzers/objc/methods.rs`, `loader/dyldcache.rs` | done |
| 3 | Categories applied to their classes ("Applying Objective-C Categories") (objc) | `objccats.rs` | done |
| 4 | Preoptimized ObjC in the dyld cache (`objc_opt_t`: selopt, header-info ro/rw, class/protocol tables, `relativeMethodSelectorBaseAddressOffset`) (dsc, objc) | `dyldcache.rs`, `objcruntime.rs` | done |
| 5 | Global and stack blocks: `Block_layout` per site, invoke typed from the descriptor signature (objc) | `objcblocks.rs` (arm64 + x86-64, creator-named invokes) | done, ahead |
| 6 | `objc_msgSend` callee swapped for the resolved method, receiver from type / classref / `self` for `msgSendSuper`, instancetype result rule (objc, Hex-Rays hook) | `objcresolve`, `objcrettype`, `calleefilledarg` | done |
| 7 | ARC calls hidden; `objc_retain_xN`-style register entry points as `__usercall` (objc) | `objcarc`, `objcruntime.rs` | done |
| 8 | Runtime prototypes (`objc_msgSend`, `objc_alloc_init`, autorelease-pool, claim/retain-autoreleased) (objc) | `objcruntime.rs`, `swiftruntime` for Swift | done |
| 9 | Legacy ObjC 1 runtime (`__OBJC` segment, `__module_info`, `__cat_inst_meth`, i386 macOS) (objc, macho) | no reader (`analyzers/objc` is ObjC 2 only) | missing |
| 10 | Debugger: run until message received, step into `objc_msgSend` target (objc) | — | n/a |
| 11 | Generate an ObjC type library / "Load debug info" source-info provider (objc) | `objcsdk` reads headers in; no export of recovered classes as a header | partial |
| 12 | Platform SDK type library chosen from `LC_BUILD_VERSION` (`iphoneos%s_sdk%02d`, `macosx…`, `driverkit…`): C prototypes and structs for every framework import (macho) | `libctypes` (libc subset), `objcsdk` (ObjC selectors only, off by default); typelibs only for Windows and Linux | missing |
| 13 | Chained fixups, all pointer formats incl. arm64e user/kernel, `__chain_starts`, `__thread_starts` (macho) | `loader/format/macho/chained.rs`, `machorelocs.rs`, `machobinds` | done |
| 14 | Classic `LC_DYLD_INFO` rebase/bind/weak/lazy opcodes, export trie, re-exports (macho) | `dyldinfo.rs`, `exporttrie`, `macho_trie.rs` | done |
| 15 | Stubs, `__auth_stubs`, stub helpers, branch islands named after their target (macho, dscu) | `macho_stubs.rs`, `stubbinds`, `thunknames.rs` | done |
| 16 | `__cfstring` literals, `___CFConstantStringClassReference` (macho) | `cfstrings` | done |
| 17 | `LC_FUNCTION_STARTS` function discovery (macho) | `passes.rs`, plus `unwindstarts`, `machoehframe` beyond IDA | done, ahead |
| 18 | `LC_DATA_IN_CODE` ranges marked data (jump tables / literal pools in armv7 and x86 Mach-O) (macho) | read only when extracting from a dyld cache (`dyldcache/extract.rs`) | partial |
| 19 | `MH_OBJECT` relocations (`ARM64_RELOC_*`, `X86_64_RELOC_*`, SUBTRACTOR/PAIR) applied, so a `.o`/`.a` member decompiles with its callees and globals named (macho) | not applied: an arm64 `.o` `f` decompiles to an empty `void _f(void)` (flow truncated at the unrelocated `bl`), an x86-64 one reads a global as `dat_8c48348d8891803` | missing |
| 20 | Thread-local variables: `__thread_vars` descriptors, `__thread_data`/`__thread_bss` (macho) | no reader | missing |
| 21 | `LC_ENCRYPTION_INFO`: warn on `cryptid != 0` (macho); decrypt Apple-protected macOS binaries with a user-supplied key | warning in `machotolerance.rs`; no decryption | done / n/a |
| 22 | Fat files, arch choice, `LC_MAIN`/`LC_UNIXTHREAD` entry, platform/version, `LC_RPATH`, linker options (macho) | `macho_fat.rs`, loader | done |
| 23 | DTrace USDT probe stubs (`__dtrace_probe$`, `__dtrace_isenabled$`) named (macho) | none | missing (low) |
| 24 | dyld shared cache: sub-caches, slide info v1-v5, `.symbols` local symbols, single or several images (dsc, dscu) | `dyldimage` (`--image A+B`), `dyldcache/slide.rs` | done |
| 25 | Cross-image calls through stub islands and coalesced GOTs named ("Detecting global offset tables") (dscu) | `dyldcrossrefs`, `importdata` | done |
| 26 | Slide of a cache taken from a process memory dump ("Detecting DYLD slide") (dscu) | none | missing (niche) |
| 27 | Kernelcache: IMG4/IM4P, fileset (`MH_FILESET`) and prelinked kexts, boot/auxiliary collection linking (macho, kcu) | `kernelcache`, `kernelcache-boot`, `loader/kernelcache/` | done |
| 28 | OSMetaClass: classes from `__mod_init_func`, vtables and metaclass vtables named, slots named by inheritance (kcu) | `iokitclasses` | done |
| 29 | `kalloc_type` views laid out as types, `IOExternalMethodDispatch`(2022) records typed (kcu) | `xnutables` | done |
| 30 | `OSMetaClassBase::safeMetaCast` / `OSDynamicCast` call sites: the result typed as the class whose `gMetaClass` is the second argument ("cast: N call sites typed") (kcu) | none | missing |
| 31 | Kext symbols imported from a matching symbolicated kernel / linked collection ("importing symbols from") (kcu) | linked-collection pointers resolved by `kernelcache-boot`; no KDK symbol import | partial |
| 32 | DriverKit `__osclassinfo`, IORPC dispatch (no IDA equivalent found) | `osclassinfo`, `dextrpc` | ahead |
| 33 | Swift: calling convention, value witnesses, metadata, strings, ARC `_xN` entry points (swift) | `swiftmetadata` family; open rows in `notes/ida-apple-mechanisms.md` | partial (see there) |
| 34 | `__swiftcall` for every function that calls a Swift runtime entry point (closures, partial-apply forwarders) (swift; mechanisms row 1) | `swiftcall.rs` binds only functions placed in a type or named by a symbol | missing |

## Ranked top 10

Ranking = how much decompiled output it fixes on a typical Apple target x how directly the mechanism carries over.

1. **Apple framework C prototypes and types (row 12).** Every call to CoreFoundation, libdispatch, XPC,
   Security, `os_*`, pthread or libSystem beyond libc prints with recovered arity and `long` arguments; IDA
   applies the SDK type library its loader picks from `LC_BUILD_VERSION`. unlace may not ship SDK-derived
   tables (`.claude/rules/security.md`), so the carry-over is the runtime route `objcsdk` already uses:
   parse the C function declarations, typedefs, structs and enums of the SDK headers the user points at, and
   park them by import name (`libctypes` machinery). Owner: `unlace-analysis` protos + `objcsdk` (extend the
   option or add `appletypes`; the path is a judgement call, so default off).
2. **Mach-O `MH_OBJECT` relocations (row 19).** A relocatable `.o` or a static-library member is unusable
   today (arm64: empty body; x86-64: garbage global addresses). IDA applies `ARM64_RELOC_BRANCH26`,
   `PAGE21`/`PAGEOFF12`, `GOT_LOAD_*`, `POINTER_TO_GOT`, `SUBTRACTOR`+`UNSIGNED` pairs, `ADDEND`, and the
   x86-64 `SIGNED`/`BRANCH`/`GOT` kinds, giving externs a synthetic segment. unlace already does this for ELF
   and COFF objects (`loader/reloc_object.rs`); the Mach-O arm is a fix, no option.
3. **Closures and forwarders get `__swiftcall` (row 34, mechanisms row 1).** 15% of sampled Perplexity
   functions read an unassigned x20. Caller rule from IDA's swift module: a function that calls a Swift runtime
   entry point (through stubs and thunks) takes the model, `__swiftcall_throws` when it calls
   `swift_willThrow`. Refinement of `swiftcall`.
4. **`OSDynamicCast` result typing (row 30).** Kernel and kext code casts every `OSObject *` it touches
   (`OSDynamicCast(IOService, provider)` compiles to `safeMetaCast(obj, &IOService::gMetaClass)`); IDA types
   the result `IOService *` and the following virtual calls resolve. unlace knows every `gMetaClass` address
   (`iokitclasses`), so the call site is: second argument a known `gMetaClass` → result `C *`. Owner
   `iokitclasses` (refinement).
5. **Kext symbols from a matching symbolicated kernel (row 31).** macOS KDKs ship `kernel.development` with
   full symbols; IDA imports names into the kernelcache by UUID. unlace could accept a KDK kernel path and
   copy names for the matching UUID's segments (runtime input, nothing committed). New option, default off.
6. **`LC_DATA_IN_CODE` on thin images (row 18).** armv7 and x86 Mach-O mark jump tables and literal pools;
   without it the Listing decodes data as code and cuts functions. Reader exists for dyld extraction; wire it into
   the thin-image Listing as non-code ranges. Fix, no option.
7. **Thread-local variables (row 20).** `__thread_vars` holds `{thunk, key, offset}` descriptors; IDA names
   each `<var>$tlv$init`/descriptor and the `tlv_get_addr` call reads as the variable. unlace: name the
   descriptors from their symbols (or `tlv_<addr>`), type them, and render `(*desc->thunk)(desc)` as
   `&var`. Small analysis pass, default on (inert without the section).
8. **ObjC class header export (row 11).** IDA can emit the recovered classes as a type library; unlace has
   everything (`objc` + `objcivars` + `objcprops` + `objcprotos`) but prints only per function. A
   `decompile-project` header with `@interface` blocks (or C structs) would make the recovered model
   reusable (`--types` round trip). CLI work, no decompiler change.
9. **Legacy ObjC 1 (row 9).** i386 macOS apps and old frameworks use the `__OBJC` segment
   (`objc_module`, `objc_symtab`, `objc_class` with `methodLists`); IDA reads it; unlace names nothing.
   Low volume today, so last of the real gaps.
10. **DTrace USDT probe stubs (row 23).** `__dtrace_probe$provider$probe$args` call sites in system daemons
    are named `sub_`; IDA names them from the symbol. Small loader fix (the name is in the symbol table).

Not ranked: debugger features (row 10), Apple-protected decryption (row 21), dump-slide detection (row 26).
Already ahead of IDA: stack blocks (5), unwind/eh_frame discovery (17), DriverKit (32).
