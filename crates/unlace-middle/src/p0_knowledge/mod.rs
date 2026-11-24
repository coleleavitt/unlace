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
// (kuna) i386-PIE PLT-stub decode option gate (angr test_decompiling_nl_i386_pie).
pub mod ppc32picimports;
// (kuna) x86-64 IFUNC (IRELATIVE) PLT-stub naming option gate (load-time, env-bridged).
pub mod ifuncfpret;
// (kuna) arm64e Mach-O AppleSilicon spec selection option gate (load-time, env-bridged).
pub mod macho_arm64e;
// (kuna) PowerPC APU-note language selection option gate (load-time, env-bridged).
pub mod delphiabi;
pub mod ppcapu;
pub mod ruststdsigs;
// (kuna) Relocatable-object analysis-fact rebase option gate (load-time, env-bridged).
// (kuna) Linked-image dynamic-relocation application option gate (load-time, env-bridged).
pub mod debuglink;
// (kuna) Apple firmware container / kernel-collection entry selection (load-time,
// env-bridged).
pub mod kernelcache;
pub mod kernelcacheboot;
// (kuna) PE chained-`UNWIND_INFO` `.pdata` entry suppression option gate
// (load-time, env-bridged).
// (kuna) x86-64 PE REX-prefixed tail-jump import-thunk rejection option gate
// (load-time, env-bridged).
// (kuna) The source-language image fact (SourceLang) and its `sourcelang`
// override (load-time, env-bridged).
pub mod sourcelang;
// (kuna) Swift symbol demangling gate (load-time, env-bridged).
// (kuna) The Objective-C instance-layout gate's load-time half (env-bridged).
pub mod objcivars;
// (kuna) The Objective-C SDK header directory (`objcsdk`, load-time, env-bridged).
pub mod objcsdk;
pub mod sdktypes;
// (kuna) dyld shared cache image selection + cross-image naming gates
// (load-time, env-bridged).
pub mod dyldcache;
// (kuna) Mach-O export-trie naming gate (load-time, env-bridged).
pub mod exporttrie;
// (kuna) The Go runtime-type harvest gate (load-time, env-bridged).
// (kuna) golang cspec auto-selection + the .abi0 stack-ABI model binding
// (load-time, env-bridged).
pub mod cil;
pub mod goabi;
// (kuna) Discriminant-value naming for recovered variant parts (load-time,
// env-bridged; the first VariantLayout consumer).
// (kuna) Go interface method calls by name: the option and the itab-record
// vocabulary shared by the gotypes harvest, the DWARF signatures and the printer.
pub mod goitabcalls;
pub mod gopointermethod;
pub mod gostringinput;
pub mod gotypes;
// (kuna) Language facets: what a C-shaped type means in the source language
// (the VariantLayout-style side table on the type factory).
pub mod langfacet;
// (kuna) PE import-by-ordinal naming from built-in export tables (load-time,
// env-bridged).
// (kuna) DWARF aggregate-layout import option gate (load-time, env-bridged).
// (kuna) Named libc/POSIX aggregate types in the prototype tables option gate
// (load-time, env-bridged).
pub mod libctypes;
pub mod loadoptions;
// (kuna) The prebuilt type library a load reads (`typelib`).
pub mod typelib;
// (kuna) A clsid.cfg file of extra COM ids (`comcfg`).
pub mod comcfg;
// (kuna) DWARF variant-part (discriminated-union) import option gate
// (load-time, env-bridged) plus the recovered-layout side table.
pub mod dwarfvariants;
// (kuna) DWARF full-depth type-resolution option gate (load-time, env-bridged).
// (kuna) Degenerate-symbol-name repair option gate (load-time, env-bridged).
pub mod symbolnamerepair;
// (kuna) Symbol-name character sanitizer + option gate (load-time, env-bridged).
pub mod symbolnamechars;
pub mod uefiprotocols; // (kuna `uefi`) the interface instances an EFI module installs
// (kuna) Symbol-name scope-path resource bound (load-time, env-bridged): the
// ceiling on how many Scopes one qualified symbol name may nest.
pub mod symbolnamebound;
// (kuna) MSVC `__real@` FP-constant COMDAT recovery option gate (load-time, env-bridged).
// (kuna) `<eval_current_prototype>`: the compiler spec's model for evaluating the
// current function's own unknown prototype (register-parameter recovery).
pub mod evalcurrentproto;
// (kuna `dexmodel`) The DEX format, and the constant pool and register payloads
// a DEX image supplies to the Dalvik spec.
pub mod dex;
// (kuna `jvmmodel`) The Java class-file format, and the constant pool and
// payloads a class file supplies to the JVM spec.
pub mod jvm;
pub mod wrappedstackmap;
