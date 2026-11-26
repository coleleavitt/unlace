//! P0 -- Knowledge & configuration plane: symbol DB, options, overrides, the stage registry.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod analysisgates;
pub mod assert;
pub mod atomicops;
pub mod coreoptions;
pub mod database;
pub mod modes;
pub mod octeonops;
pub mod options;
pub mod overrides;
pub mod phases;
pub mod restartlog;
pub mod stringmanage;
// (unlace) i386-PIE PLT-stub decode option gate (angr test_decompiling_nl_i386_pie).
pub mod ppc32picimports;
// (unlace) x86-64 IFUNC (IRELATIVE) PLT-stub naming option gate (load-time, env-bridged).
pub mod ifuncfpret;
// (unlace) arm64e Mach-O AppleSilicon spec selection option gate (load-time, env-bridged).
pub mod macho_arm64e;
// (unlace) PowerPC APU-note language selection option gate (load-time, env-bridged).
pub mod delphiabi;
pub mod ppcapu;
pub mod ruststdsigs;
// (unlace) Relocatable-object analysis-fact rebase option gate (load-time, env-bridged).
// (unlace) Linked-image dynamic-relocation application option gate (load-time, env-bridged).
pub mod debuglink;
// (unlace) Apple firmware container / kernel-collection entry selection (load-time,
// env-bridged).
pub mod kernelcache;
pub mod kernelcacheboot;
// (unlace) PE chained-`UNWIND_INFO` `.pdata` entry suppression option gate
// (load-time, env-bridged).
// (unlace) x86-64 PE REX-prefixed tail-jump import-thunk rejection option gate
// (load-time, env-bridged).
// (unlace) The source-language image fact (SourceLang) and its `sourcelang`
// override (load-time, env-bridged).
pub mod sourcelang;
// (unlace) Swift symbol demangling gate (load-time, env-bridged).
// (unlace) The Objective-C instance-layout gate's load-time half (env-bridged).
pub mod objcivars;
// (unlace) The Objective-C SDK header directory (`objcsdk`, load-time, env-bridged).
pub mod objcsdk;
pub mod sdktypes;
// (unlace) dyld shared cache image selection + cross-image naming gates
// (load-time, env-bridged).
pub mod dyldcache;
// (unlace) Mach-O export-trie naming gate (load-time, env-bridged).
pub mod exporttrie;
// (unlace) The Go runtime-type harvest gate (load-time, env-bridged).
// (unlace) golang cspec auto-selection + the .abi0 stack-ABI model binding
// (load-time, env-bridged).
pub mod cil;
pub mod goabi;
// (unlace) Discriminant-value naming for recovered variant parts (load-time,
// env-bridged; the first VariantLayout consumer).
// (unlace) Go interface method calls by name: the option and the itab-record
// vocabulary shared by the gotypes harvest, the DWARF signatures and the printer.
pub mod goitabcalls;
pub mod gopointermethod;
pub mod gostringinput;
pub mod gotypes;
pub mod irverifyopt;
pub mod nonnullparam;
// (unlace) Language facets: what a C-shaped type means in the source language
// (the VariantLayout-style side table on the type factory).
pub mod langfacet;
// (unlace) PE import-by-ordinal naming from built-in export tables (load-time,
// env-bridged).
// (unlace) DWARF aggregate-layout import option gate (load-time, env-bridged).
// (unlace) Named libc/POSIX aggregate types in the prototype tables option gate
// (load-time, env-bridged).
pub mod libctypes;
pub mod loadoptions;
// (unlace) The prebuilt type library a load reads (`typelib`).
pub mod typelib;
// (unlace) A clsid.cfg file of extra COM ids (`comcfg`).
pub mod comcfg;
// (unlace) DWARF variant-part (discriminated-union) import option gate
// (load-time, env-bridged) plus the recovered-layout side table.
pub mod dwarfvariants;
// (unlace) DWARF full-depth type-resolution option gate (load-time, env-bridged).
// (unlace) Degenerate-symbol-name repair option gate (load-time, env-bridged).
pub mod symbolnamerepair;
// (unlace) Symbol-name character sanitizer + option gate (load-time, env-bridged).
pub mod symbolnamechars;
pub mod uefiprotocols; // (unlace `uefi`) the interface instances an EFI module installs
// (unlace) Symbol-name scope-path resource bound (load-time, env-bridged): the
// ceiling on how many Scopes one qualified symbol name may nest.
pub mod symbolnamebound;
// (unlace) MSVC `__real@` FP-constant COMDAT recovery option gate (load-time, env-bridged).
// (unlace) `<eval_current_prototype>`: the compiler spec's model for evaluating the
// current function's own unknown prototype (register-parameter recovery).
pub mod evalcurrentproto;
// (unlace `dexmodel`) The DEX format, and the constant pool and register payloads
// a DEX image supplies to the Dalvik spec.
pub mod dex;
// (unlace `jvmmodel`) The Java class-file format, and the constant pool and
// payloads a class file supplies to the JVM spec.
pub mod jvm;
pub mod wrappedstackmap;
