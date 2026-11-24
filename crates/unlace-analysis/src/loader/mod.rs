//! S1 loader analyses -- enrich the symbol/data map from the parsed object file
//! before the deep decompiler runs.
//!
//! - [`elf_plt`] -- PLT/GOT import-name resolution (the unlace analog of Ghidra's
//!   `ElfDefaultGotPltMarkup`): map each GOT slot to its `.dynsym` name and
//!   decode each `.plt*` stub so library call sites render as `puts(...)` rather
//!   than `sub_400510(...)`.
//!
//! - [`pe_iat`] -- PE IAT/INT import-name resolution (the unlace analog of Ghidra's
//!   `PeLoader.processImports`): walk the Import Directory pairing the INT (names)
//!   and IAT (slot addresses) in lockstep, name each IAT slot (the GOT-slot
//!   analog), and name the MinGW `FF 25` thunk veneers that jump through them, so
//!   a Windows PE's library calls render `puts(...)` instead of `sub_<addr>(...)`.
//!
//! - [`noreturn`] -- known-no-return detection (the unlace analog of Ghidra's
//!   `NoReturnFunctionAnalyzer`): mark `exit`/`abort`/… so the dead fall-through
//!   after a tail `exit()` disappears.
//!
//! - [`arm_markers`] -- ARM/Thumb mapping-symbol (`$t`/`$a`/`$d`) + STT_FUNC-LSB
//!   decode-mode (`TMode`) painting (the unlace analog of ARM's `ARM_ElfExtension`
//!   + `ArmSymbolAnalyzer`): paints the SLEIGH `TMode` context variable so Thumb
//!   code decodes as Thumb. ARM-only (no-op on every other language).
//!
//! - [`mips_markers`] -- MIPS `$gp` recovery via per-function `t9` register-value
//!   tracking (the unlace analog of Ghidra's `MipsAddressAnalyzer`): seeds
//!   `t9 = func_entry` at each MIPS function entry (the PIC `jalr t9` ABI
//!   convention), so a PIC prologue's `addu gp,gp,t9` folds to the real `$gp` and
//!   `$gp`-relative GOT/`.sdata` loads resolve. MIPS-only (no-op elsewhere).
//!
//! Planned siblings (see `docs/missing-analyses.md`): a `.symtab`/`.dynsym`
//! defined-function reader lifted out of [`crate::loadimage_object`].

pub(crate) mod arctarget;
pub mod arm_markers;
pub(crate) mod elfmachinetarget;
pub(crate) mod mipstarget;
pub(crate) mod ppc64elfv2target;
pub(crate) mod ppcaputarget;
pub(crate) mod tilocallabels;
pub(crate) mod wordaddr;
// (unlace `retroimage`) PS-X EXE, N64 ROM, a.out, Amiga hunk and PEF containers.
pub mod retroimage;
// (unlace) WebAssembly bodies lowered from stack form to register form.
#[cfg(test)]
mod mips_target_tests;
#[cfg(test)]
mod powerpc_apu_tests;
pub mod wasmlower;
// (unlace) ELF import markup read out of `PT_DYNAMIC`, for an image whose section
// table is missing or unusable and whose `.dynsym`/`.rela.*`/`.plt*` are
// therefore invisible.
pub mod elf_dynseg;
pub mod elf_plt;
pub mod noretrules;
// (unlace `debuglink`) separate debug files and MiniDebugInfo for stripped ELFs.
pub mod elf_debuglink;
// (unlace `debuglink`) a Mach-O image's `.dSYM` bundle, matched by LC_UUID.
pub mod macho_dsym;
// (unlace `globalref`) The sections a program's own data objects live in.
pub mod elfv1;
mod elfv1_imports;
pub mod globalref;
pub mod ppc32_imports;
mod ppc32picimports;
pub mod ppc64r12;
pub use ppc32picimports::{ImportProofMemo, ImportProofScope};
// (unlace) ELF section-table tolerance: an image whose section headers are
// unreadable still has program headers describing every loadable byte.
pub mod elf_shdr;
// (unlace) PE data-directory tolerance: a `NumberOfRvaAndSizes` larger than its own
// optional header is clamped to the directories that are really present.
pub mod pe_datadirs;
// (unlace) PE DOS-magic tolerance: a trashed `e_magic` in front of an `e_lfanew`
// that still points at a `PE\0\0` signature is repaired in memory.
pub mod pe_dosmagic;
// (unlace) The PE header page: the `SizeOfHeaders` file bytes Windows maps
// read-only at `ImageBase`, below the first section and outside the section walk.
pub mod pe_headers;
// (unlace) The PE load configuration: Control Flow Guard and SafeSEH function
// tables, and the CRT's guard and cookie slots.
pub(crate) mod peloadconfig;
// (unlace) ET_REL relocatable-object (`.o`) load-layout + relocation engine.
pub mod reloc_object;
// Architecture-aware ELF instruction/data relocation encoders used by the
// relocatable-object layout. Kept separate so bitfield rules are unit-testable.
mod reloc_apply;
// (unlace) MIPS relocations, `$gp` and GOT for a relocatable object.
mod commonalloc;
mod mipsreloc;
mod s390xplt;
mod sparc_relcode;
mod x86_relcode;
// (unlace) `relocrebase`: rebase the load-time analysis facts of a relocatable
// object into the loaded image's address space (GH-289).
pub(crate) mod le;
pub mod objectview;
pub mod relocrebase;
// (unlace) `dynrelocs`: apply a LINKED image's dynamic relocations (.rela.dyn /
// .rel.dyn / .rela.plt) so a GOT slot holds the value the run-time loader
// would write, and report the PT_GNU_RELRO-frozen slots as constant.
pub mod dynrelocs;
// (unlace) `dynrelocs`, the Mach-O arm: unpack a chained-fixup image's rebase
// slots and report the SG_READ_ONLY (`__DATA_CONST`) ones as constant.
pub mod elfgotimports;
pub mod machorelocs;
// (unlace `dynrelocs`) The MIPS primary-GOT slots the dynamic linker fills with an
// address the image defines, reported constant.
pub mod mipsgot;
// (unlace) The pointers an image stores in its data, as its rebase / relocation
// metadata lists them (the data half of `unlace xrefs`).
pub mod dataptrs;
// (unlace) `pltlocal`: the PLT stubs the image's own relocations bind to a
// function it defines.
pub mod machodataincode;
pub mod machodataslots;
pub(crate) mod pltlocal;
// (unlace) `msvcfpconst`: recover an MSVC `__real@` floating-point constant COMDAT
// from its mangled symbol name -- materialise the undefined half's bytes at its
// synthetic extern slot, and mark both halves foldable.
pub mod firmware;
pub mod format;
pub mod msvcfpconst;
pub(crate) mod nanomips;
// (unlace) PE/Mach-O/ELF import-slot call binding (`peimportcall`): `externref` over
// typed import-pointer slots + upstream's strictly PE-only no-return API names.
pub mod authptrcall;
pub mod peimportcall;
// (unlace) `stubbinds`: a stripped stub is named from the chained bind on its slot.
pub mod stubbinds;
// (unlace) `rexthunk`: an x86-64 `REX FF 25` tail jump is not an import thunk.
pub(crate) mod rexthunk;
// (unlace) `peordinal`: name a PE import-by-ordinal from a built-in export table.
pub(crate) mod peordinal;
// (unlace #1288) the PC memory a DOS program shares with the machine, volatile.
pub mod pcmemory;
// (unlace) The Device memory regions of an M-profile image, volatile.
pub mod cortexmdevice;
// (unlace `kernelcache`) IMG4/IM4P/LZFSE/complzss unwrapping and MH_FILESET entry
// selection for Apple kernelcaches.
pub mod kernelcache;
pub mod macho_fat;
// (unlace) Mach-O load tolerance: out-of-file segment/section ranges clamped,
// FairPlay-encrypted images named.
pub mod machotolerance;
// (unlace `machobinds`) Mach-O bound pointer slots named for their import.
pub mod machobinds;
// (unlace) The dyld shared cache: one image rebuilt as a thin Mach-O, its
// references into other images named (`dyldimage`, `dyldcrossrefs`).
pub mod dyldcache;
pub mod macho_stubs;
pub(crate) mod macho_trie;
pub mod mips_markers;
pub(crate) mod mipsabi;
pub mod mipsentry;
pub mod mipsocteon;
// (unlace) RISC-V Zcmp/Zcmt language selection from `Tag_RISCV_arch`.
pub mod riscvzc;
// (unlace) Go toolchain version off the build-info blob (goreg shell layouts).
pub mod gobuildinfo;
pub mod noreturn;
pub mod pe_iat;
// (unlace) `armfloatreturn`: does an ARM ELF state the VFP procedure-call standard?
pub mod armbasepcs;
pub mod armfloatabi;
// (unlace `armfuncmode`) an even ARM function symbol starts A32 code.
pub mod armfuncmode;
// (unlace) does an ELF say whether float arguments travel in FP registers?
pub mod floatabi;
// (unlace) does an arm64 image's platform have the callee extend a narrow return?
pub mod returnext;
// (unlace #1288) the x86 real-mode code segment a loader paints into the decode context.
pub mod realmodecs;
// (unlace `mzdgroup`) the data segment an MS-DOS program's startup code loads into DS.
pub mod mzdgroup;

pub mod mipsstubs;

mod nullable_reloc;
