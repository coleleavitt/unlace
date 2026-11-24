//! Port of `decompiler/cpp/architecture.{cc,hh}` (item `w4-fw-architecture`) —
//! the [`Architecture`] god object: the \e owner of the disassembly engine
//! (`Translate`/Sleigh), the symbol [`Database`], the [`OptionDatabase`], the
//! [`ActionDatabase`], the [`UserOpManage`], the p-code injection library, the
//! [`ContextDatabase`], plus the protection/read-only flags and the whole bag of
//! analysis-tuning configuration values.
//!
//! ## What this port wires vs. what it stubs
//!
//! The C++ `Architecture` is the single largest class in the decompiler and
//! reaches into nearly every subsystem.  This port faithfully ports the parts
//! whose dependencies already exist in the unlace Rust tree, and stub-notes the
//! rest:
//!
//! - **Wired now**: the configuration fields and the unlace anchor flags (a
//!   verbatim transcription of `resetDefaultsInternal`, `architecture.cc:1420`);
//!   ownership of the `Translate` engine, the [`Database`] symbol table (with its
//!   global scope, C++ `buildDatabase`), the [`OptionDatabase`], the
//!   [`ActionDatabase`], the [`UserOpManage`], and the SLEIGH-backed p-code
//!   injection library; the `getModel`/`hasModel` registry lookups; the
//!   `getMinimumLanedRegisterSize`/`getLanedRegister` laned-register lookups;
//!   `nameFunction` (the unlace angr-style and upstream `func_` policies); and the
//!   construction of a [`Funcdata`] tied to this architecture (the W3 boot boundary:
//!   `vbank`'s analysis unique-start comes from `Translate::getUniqueStart`).
//!
//! - **Stubbed**: the data-type factory ([`crate::dtype`], W6), the prototype
//!   models (`fspec`, W6), the print language (W8), the loader (`loadimage`, its
//!   own item), the read-only/volatile/global-range decode (needs the W6 type
//!   factory + W4 symbol markup), and the full [`Architecture::init`] /
//!   `restoreFromSpec` flow (it builds the translator, type group, print
//!   language, and runs the spec decode — all reaching W6/W8 subsystems).  The
//!   `restoreXml`/`encode` marshaling and the segmented-pointer resolver are
//!   likewise deferred to their dependency waves.  Each is documented inline with
//!   `// STUB(...)`.
//!
//! ## The unlace anchor flags
//!
//! `architecture.cc`/`.hh` carry a block of unlace-specific boolean flags (the
//! `(unlace)`-marked members `present_lessequal`,
//! `strip_stack_guard`, …) that the unlace stage-model sub-stage fixes read.  They
//! are ported here as plain `bool` fields on [`Architecture`] (defaulted by
//! `resetDefaultsInternal`); the `w4-unlace-p0-pack` item's `OptionValues` alias
//! them through the option surface.  Public getters/setters are provided so the
//! p0-pack can read/flip each without owning the struct layout.

use std::cell::RefCell;
use std::rc::Rc;
use std::sync::Arc;

use unlace_base::address::Address;
use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::space::{AddrSpace, AddrSpaceManager};
use unlace_base::types::{int4, uint4, uintb};

use unlace_sleigh::sleigh::Sleigh;
use unlace_sleigh::translate::UniqueLayout;

use crate::action::ActionDatabase;
use crate::context::{ArchContext, ArchHandle};
use crate::database::Database;
use crate::dtype::{TypeFactory, TypeFactoryImpl, type_metatype};
use crate::engine_translate::EngineTranslate;
use crate::flow_flags;
use crate::fspec::ProtoModel;
use crate::funcdata::Funcdata;
use crate::inject_sleigh::PcodeInjectLibrarySleigh;
use crate::options::{
    ArchOptionContext, BraceCategory, NamespaceStrategy, OptionDatabase, split_datatype,
};
use crate::userop::UserOpManage;

// ---------------------------------------------------------------------------
// cspec XML helpers (the `<default_proto>` decode in build_default_proto reads
// the resolved compiler-spec through the unlace-base XML `Element` tree, the same
// parser the frontend uses for the binaryimage — see decode_default_proto).
// ---------------------------------------------------------------------------

/// First direct child element named `nm`, or `None`.
fn find_child(
    el: &Rc<unlace_base::xml::Element>,
    nm: &str,
) -> Option<Rc<unlace_base::xml::Element>> {
    el.get_children()
        .iter()
        .find(|c| c.get_name() == nm)
        .map(Rc::clone)
}

/// String value of attribute `nm` on `el`, or `None` if absent.
fn attr_str(el: &Rc<unlace_base::xml::Element>, nm: &str) -> Option<String> {
    el.get_attribute_value(nm)
        .ok()
        .map(|b| String::from_utf8_lossy(b).into_owned())
}

/// Value of a boolean spec attribute (C++ `Decoder::readBool`, which accepts
/// `true`/`yes`/`1` and treats everything else as false).
fn decode_bool_attr(v: &str) -> bool {
    matches!(v, "true" | "yes" | "1")
}

/// Build a named copy of an already-registered model (C++
/// `Architecture::createModelAlias`, architecture.cc:1137).  A merged model and
/// an alias-of-an-alias are both refused, exactly as upstream.
fn create_model_alias(alias: &str, parent: &Rc<ProtoModel>) -> UnlaceResult<ProtoModel> {
    if parent.is_merged() {
        return Err(UnlaceError::lowlevel(format!(
            "Cannot make alias of merged model: {}",
            parent.get_name()
        )));
    }
    if parent.get_alias_parent().is_some() {
        return Err(UnlaceError::lowlevel(format!(
            "Cannot make alias of an alias: {}",
            parent.get_name()
        )));
    }
    Ok(crate::fspec::ProtoModel::copy_named(alias, parent))
}

/// Parse a decimal or `0x`-hex integer offset (C++ `<addr offset>` is a hex
/// string for register-space addresses, decimal otherwise).
fn parse_int(s: &str) -> Option<uintb> {
    let s = s.trim();
    if let Some(hex) = s.strip_prefix("0x") {
        uintb::from_str_radix(hex, 16).ok()
    } else {
        s.parse::<uintb>().ok()
    }
}

// ---------------------------------------------------------------------------
// Warning sink (the CommentDatabase slice the Funcdata warning path needs)
// ---------------------------------------------------------------------------

/// Comment-type bits the warning path keys on (C++ `Comment::comment_type`,
/// `comment.hh:53`).  Only the two warning kinds are reachable from the
/// architecture's warning sink; the full enum lands with the `comment.cc` item.
pub mod comment_type {
    #![allow(non_upper_case_globals)]
    use unlace_base::types::uint4;
    /// Auto-generated alert comment at an instruction (C++ `Comment::warning`).
    pub const warning: uint4 = 16;
    /// Auto-generated alert comment in the function header
    /// (C++ `Comment::warningheader`).
    pub const warningheader: uint4 = 32;
}

/// One stored warning comment (the slice of C++ `Comment` the warning sink
/// records: type + function address + instruction address + text).
///
/// STUB(comment.cc): the full `CommentDatabase` (ordered set, de-duplication,
/// encode) is its own item; this is the minimal sink `Funcdata::warning`/
/// `warningHeader` (`funcdata.cc:119`) need, so the architecture can record an
/// analysis warning without the whole comment subsystem.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ArchWarning {
    /// `Comment::warning` or `Comment::warningheader`.
    pub tp: uint4,
    /// Entry address of the function the comment belongs to (C++ `fad`).
    pub func_addr: Address,
    /// Instruction address the comment is attached to (C++ `ad`).
    pub addr: Address,
    /// The comment text (already prefixed with "WARNING: " by the caller).
    pub text: String,
}

/// \brief A minimal stand-in for the C++ `CommentDatabase` warning sink.
///
/// STUB(comment.cc): `decompiler/cpp/comment.{cc,hh}` is a separate port item.
/// `Architecture` owns this so the [`Funcdata::warning`](crate::funcdata::Funcdata)
/// path (when it lands) has a place to deposit a warning; `add_comment_no_duplicate`
/// transcribes the *de-duplication contract* of C++
/// `CommentDatabaseInternal::addCommentNoDuplicate` (drop a comment whose
/// (fad,ad,text) triple already exists) while leaving the full ordered-set
/// encode/uniq machinery to the comment item.
#[derive(Debug, Clone, Default)]
pub struct CommentDatabase {
    comments: Vec<ArchWarning>,
}

impl CommentDatabase {
    /// Construct an empty comment database.
    pub fn new() -> CommentDatabase {
        CommentDatabase::default()
    }

    /// Store a comment unless an identical (type-agnostic on the address keys,
    /// text-matching) comment is already present (C++
    /// `CommentDatabaseInternal::addCommentNoDuplicate`, returns `true` if added).
    ///
    /// The C++ de-dup scans comments at the same (fad,ad) for matching text and
    /// drops the duplicate.  This carries exactly that predicate.
    pub fn add_comment_no_duplicate(
        &mut self,
        tp: uint4,
        fad: &Address,
        ad: &Address,
        txt: &str,
    ) -> bool {
        for existing in self.comments.iter() {
            if &existing.addr == ad && &existing.func_addr == fad && existing.text == txt {
                // Matching text, don't store it (C++ deletes newcom, returns false).
                return false;
            }
        }
        self.comments.push(ArchWarning {
            tp,
            func_addr: fad.clone(),
            addr: ad.clone(),
            text: txt.to_string(),
        });
        true
    }

    /// Store a comment unconditionally (C++ `CommentDatabase::addComment`, the
    /// console `comment instr` path which — unlike the warning sink — does not
    /// de-duplicate).
    pub fn add_comment(&mut self, tp: uint4, fad: &Address, ad: &Address, txt: &str) {
        self.comments.push(ArchWarning {
            tp,
            func_addr: fad.clone(),
            addr: ad.clone(),
            text: txt.to_string(),
        });
    }

    /// All recorded warnings, in insertion order (for inspection/tests).
    pub fn comments(&self) -> &[ArchWarning] {
        &self.comments
    }

    #[doc(hidden)]
    pub fn retain_comments(&mut self, keep: impl FnMut(&ArchWarning) -> bool) {
        self.comments.retain(keep);
    }

    /// Clear all stored comments (C++ `CommentDatabase::clear`).
    pub fn clear(&mut self) {
        self.comments.clear();
    }
}

// ---------------------------------------------------------------------------
// Architecture
// ---------------------------------------------------------------------------

/// (unlace `arm64evcall`) What an arm64e virtual call site's slot can hold.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct VcallTargets {
    /// The general register the call branches through (`blraa x8, x17`: 8).
    pub register: u8,
    /// Every method the slot can hold, sorted.
    pub targets: Vec<u64>,
}

/// \brief Manager for all the major decompiler subsystems (C++ `class
/// Architecture : public AddrSpaceManager`, `architecture.hh:165`).
///
/// In C++ the `Architecture` *is-an* `AddrSpaceManager`; in the Rust port the
/// address-space manager lives inside the owned `Translate` engine (the Sleigh
/// `SleighBase` *is* the manager), so [`Architecture::manage`] forwards to it.
/// The W3 IR boundary ([`Funcdata::glb`](crate::funcdata::Funcdata)) takes a
/// lightweight [`ArchContext`] handle carrying just the address-space slice it
/// reaches (built by [`Architecture::new_funcdata`]); the heavy subsystems live
/// here.
pub struct Architecture {
    /// ID string uniquely describing this architecture (C++ `archid`).
    pub archid: String,

    /// The registered unlace options' current values.
    pub unlace_options: crate::optionset::OptionSet,

    /// File input explicitly selected ARM/Thumb state; metadata must not repaint TMode.
    pub input_arm_isa_override: bool,

    /// Bounded ARM decode facts retained for inventory-seeded reference queries.
    pub arm_inventory_modes: Vec<(u64, u64, u32)>,

    /// Loader register seeds, merged with live user tracking at function creation.
    pub loader_entry_tracks:
        std::collections::BTreeMap<Address, unlace_sleigh::globalcontext::TrackedSet>,

    /// MIPS ELF t9 register and its entry probe: the seed value where the loader
    /// recognizes PIC setup. Probed only for an entry no seed already covers.
    pub loader_mips_t9: Option<(
        unlace_num::pcoderaw::VarnodeData,
        Rc<dyn Fn(&Address) -> Option<u64>>,
    )>,

    /// Loader-proven tail transfers: a call whose callee returns to this
    /// function's caller, decoded as a call followed by a return.
    pub loader_transfer_sites: Rc<std::collections::BTreeSet<Address>>,
    /// MIPS GOT import entries identified by the loader, never ordinary definitions.
    pub loader_mips_imports: Rc<std::collections::BTreeSet<Address>>,
    pub nullable_literal_values: Rc<std::collections::BTreeSet<u64>>,

    // --- Configuration data (architecture.hh:170-208) ---------------------
    /// How many levels to let parameter trims recurse (C++ `trim_recurse_max`).
    pub trim_recurse_max: int4,
    /// Maximum number of references to an implied var (C++ `max_implied_ref`).
    pub max_implied_ref: int4,
    /// Max terms duplicated without a new variable (C++ `max_term_duplication`).
    pub max_term_duplication: int4,
    /// Maximum "integer" type size before creating an array type
    /// (C++ `max_basetype_size`).
    pub max_basetype_size: int4,
    /// Minimum size of a function symbol (C++ `min_funcsymbol_size`).
    pub min_funcsymbol_size: int4,
    /// Maximum number of entries in a single JumpTable (C++ `max_jumptable_size`).
    pub max_jumptable_size: uint4,
    /// Aggressively trim inputs that look sign-extended (C++ `aggressive_ext_trim`).
    pub aggressive_ext_trim: bool,
    /// Treat readonly values as constants (C++ `readonlypropagate`).
    pub readonlypropagate: bool,
    /// (unlace `dynrelocs`) `[start, stop]` (inclusive) offsets whose read-only
    /// contents fold even with [`Self::readonlypropagate`] off — the loader's
    /// `PT_GNU_RELRO`-frozen dynamic-relocation slots
    /// (`ObjectLoadImage::dynreloc_const_ranges`). Installed by the ELF bootstrap
    /// right after the read-only ranges it already collects, and carried into
    /// every per-function handle by `build_arch_handle`. Empty on every other
    /// path, so it is inert for the XML datatest oracle.
    pub dynreloc_const: Rc<Vec<(u64, u64)>>,
    /// (unlace `pltlocal`) `(stub, definition)` for each PLT stub the image's own
    /// dynamic relocations bind to a function it defines, ascending by stub
    /// (`ObjectLoadImage::plt_local_targets`). Installed by the ELF bootstrap;
    /// empty on every other path. See [`crate::p4_calls::pltlocal`].
    pub plt_local: Rc<Vec<(u64, u64)>>,
    /// (unlace `litpoolconst`) `[start, stop]` (inclusive) offsets of the image's
    /// allocated, executable, non-writable, file-backed regions — the program's
    /// own instruction stream, and so the ARM/MIPS/PPC literal pools embedded in
    /// it. A read that lies entirely inside one folds with
    /// [`Self::readonlypropagate`] off; derived
    /// by [`crate::litpoolconst::code_const_ranges`] and installed by the
    /// object bootstrap beside [`Self::dynreloc_const`]. Empty on every other
    /// path, so it is inert for the XML datatest oracle.
    pub litpool_const: Rc<Vec<(u64, u64)>>,
    /// (unlace `poolextents`) Sorted, disjoint `[lo, hi)` word runs of the ARM32
    /// literal pools the analysis tier's Listing proves from trusted
    /// references (`unlace-analysis` `listing/poolextents.rs`), committed
    /// with the Listing's facts. The `funcboundflow` bound ends an
    /// unconditional call's fall-through at one
    /// ([`crate::funcboundflow::unlace_pool_pad`]). Empty without the
    /// Listing and on every other target, so it is inert for the XML datatest
    /// oracle.
    pub arm_pool_extents: Rc<Vec<(u64, u64)>>,
    /// (unlace `bejoin callers`) The image's exception-table sections
    /// (`.eh_frame`, `.gcc_except_table*`, `.ARM.exidx*`, `.ARM.extab*`) as
    /// `(name, address, size)`, which the object bootstrap installs beside
    /// [`Self::litpool_const`]; `None` on a path without a section table. The
    /// caller evidence reads the landing pads from them.
    pub eh_sections: Option<Rc<Vec<(String, u64, u64)>>>,
    /// (unlace `bejoin callers`) The `(address, size)` of each function symbol
    /// whose symbol table states a size, sorted by address, which the object
    /// bootstrap installs beside [`Self::eh_sections`]; empty on a path without
    /// a symbol table. The caller evidence ends a function's extent there.
    pub func_sizes: Rc<Vec<(u64, u64)>>,
    /// (unlace `globalref`) Sorted, merged `[start, stop]` (inclusive) byte ranges
    /// of the loaded sections a program's own data objects live in, as the
    /// object loader classifies them (`ObjectLoadImage::data_object_ranges`).
    /// A pointer-typed constant prints as `&dat_<addr>` only inside one. Empty
    /// on every path without a section table, so it is inert for the XML
    /// datatest oracle.
    pub globalref_ranges: Rc<Vec<(u64, u64)>>,
    /// (unlace `cstringconst`) The `[start, end)` ranges of the loaded sections
    /// that hold only C string literals (a Mach-O `__cstring` section of type
    /// `S_CSTRING_LITERALS`). Empty without a section table.
    pub cstring_ranges: Rc<Vec<(u64, u64)>>,
    /// Infer pointers from likely-address constants (C++ `infer_pointers`).
    pub infer_pointers: bool,
    /// How many bits of alignment a function ptr has (C++ `funcptr_align`).
    pub funcptr_align: int4,
    /// Options passed to the flow-following engine (C++ `flowoptions`).
    pub flowoptions: uint4,
    /// Maximum instructions processed in one function (C++ `max_instructions`).
    pub max_instructions: uint4,
    /// Aliases blocked by 0=none,1=struct,2=array,3=all (C++ `alias_block_level`).
    pub alias_block_level: int4,
    /// Data-type-splitting toggle bits (C++ `split_datatype_config`).
    pub split_datatype_config: uint4,
    /// Attempt whiledo->for loop conversion (C++ `analyze_for_loops`).
    pub analyze_for_loops: bool,
    /// Ignore NaN ops entirely, nan() always false (C++ `nan_ignore_all`).
    pub nan_ignore_all: bool,
    /// Ignore NaN ops protecting float comparisons (C++ `nan_ignore_compare`).
    pub nan_ignore_compare: bool,
    /// True if loader symbols have been read (C++ `loadersymbols_parsed`).
    pub loadersymbols_parsed: bool,
    /// Ordered list of address spaces in which a constant pointer can be inferred
    /// (C++ `Architecture::inferPtrSpaces`, architecture.hh).  Seeded by the cspec
    /// `<global>` tag (`addToGlobalScope` pushes each global range's space) and
    /// finalized by [`cache_addr_space_properties`](Architecture::cache_addr_space_properties)
    /// (sort/dedup/filter, always include the default code+data spaces, promote the
    /// default data space to position 0).  Shared onto the per-function `glb` so
    /// `ActionConstantPtr::selectInferSpace` (coreaction.cc:1020-1047) can pick the
    /// space a likely-pointer constant addresses.  Held as `Rc<AddrSpace>` (the
    /// shared LOSS-132 space identities).
    pub infer_ptr_spaces: Vec<Rc<AddrSpace>>,

    // --- unlace anchor flags (architecture.hh:179-201, the `(unlace)` members) -
    /// Single-function bodies (FDEs, or Go `pclntab` extents) whose interiors the
    /// loader suppressed as separate entries.
    pub unlace_function_bodies: Vec<(u64, u64)>,
    /// (unlace `floatglobals`) A multi-function run scans images of any size.
    pub unlace_float_scan_batch: bool,
    /// The callee-first driver settles return values from its decompiled callers.
    pub unlace_settle_caller_reads: bool,
    /// (unlace `callerreads`) Every direct call the Listing walked, as `(callee
    /// entry, address the call returns to)`, sorted. Empty without the Listing.
    pub unlace_call_returns: Vec<(u64, u64)>,
    /// (unlace `vectorabi`) The widened models, built once per default model.
    pub vector_models:
        std::cell::RefCell<Vec<(Rc<crate::fspec::ProtoModel>, Rc<crate::fspec::ProtoModel>)>>,
    /// (unlace `vectorabi`) The vector user-ops and their element kinds, built once.
    pub vector_userop_kinds: std::cell::OnceCell<Rc<Vec<(unlace_base::types::uint4, u8)>>>,

    /// (unlace) The unlace passes' architecture-wide tables ([`crate::archstate`]): the
    /// compiled `<segmentop>` definitions, call mechanisms and jump assists, built while the
    /// specs load and shared with every per-function context.
    pub unlace_states: crate::archstate::ArchStates,
    /// (unlace) The unlace passes' run-wide ledgers and caches ([`crate::archstate::ArchTables`]),
    /// one per table type, created on first use.
    pub unlace_tables: crate::archstate::ArchTables,
    /// (unlace `fpuemu`) The loader found 8087-emulator code in the image, which
    /// `auto` decodes by.
    pub fpu_emu_evidence: bool,
    /// (unlace `dwarfscopes`) Register-held DWARF locals by function entry:
    /// name, type, register storage, and the PC the register holds it from.
    pub dwarf_reg_locals:
        std::collections::BTreeMap<u64, Vec<(String, Rc<crate::dtype::Datatype>, Address, u64)>>,
    /// (unlace) Did the loader identify the image as a Windows GUI/console PE?  A
    /// FACT, not an option: written once at `load file` and the thing `option
    /// pebnames auto` tests.  The XML `<binaryimage>` bootstrap never sets it.
    pub image_windows_user: bool,
    /// (unlace) Did the loader identify the image as a program for an operating
    /// system's user space (an ELF with a program interpreter, a dynamic section
    /// naming a shared object, an ABI-tag note, or a Linux/BSD `EI_OSABI`)?  A
    /// FACT, not an option: written once at `load file` and the thing `option
    /// syscallregs auto` tests.  The XML `<binaryimage>` bootstrap never sets it.
    pub image_os_userland: bool,
    /// (unlace) Did the loader identify the image as an ELF built for Linux (an
    /// `EI_OSABI` of System V or GNU with no other system's ABI-tag note)?  A
    /// FACT, not an option: written once at `load file` and the thing `option
    /// linuxsyscall auto` tests.  The XML `<binaryimage>` bootstrap never sets it.
    pub image_linux_elf: bool,
    /// (unlace) Is the image an ELF?  A FACT, not an option: written once at
    /// `load file` and the target gate of `option spsolve`.  The XML
    /// `<binaryimage>` bootstrap never sets it.
    pub image_elf: bool,
    /// (unlace) Is the image an Apple container (Mach-O, fat Mach-O or a dyld
    /// shared cache)?  A FACT, not an option: written once at `load file` and
    /// the target gate of `option chkstkdarwin`.  The XML `<binaryimage>`
    /// bootstrap never sets it.
    pub image_apple: bool,

    /// (unlace `objcresolve`) Message sends a first decompile resolved, by call
    /// site: the IMP the second decompile's CALL goes to instead of the runtime
    /// entry point (`FlowInfo::setup_call_specs`), and for an `objc_msgSend$<sel>`
    /// stub site the prototype the call keeps (the stub's shape, `self` typed).
    pub unlace_objc_retargets: std::collections::HashMap<u64, u64>,
    pub unlace_objc_site_pieces: std::collections::HashMap<u64, crate::fspec::PrototypePieces>,
    /// Mapped ELF x86 flow recovery: load-time container/target eligibility;
    /// XML, raw, and remote images abstain.
    pub mapped_flow_boundary_image: bool,

    /// (unlace `octeoneffects`) The inject ids of the upstream-lifting fixups this
    /// architecture registered for its Octeon reservation and ordering
    /// operations; `decompile_drive::is_injected_userop` applies them only under
    /// `option octeoneffects off`.
    pub octeon_upstream_inject: Vec<int4>,
    /// (unlace) The halves of the image's MIPS unaligned load/store pairs, once
    /// scanned ([`crate::mipsunaligned`]).
    pub unlace_mips_pairs: Option<Rc<Vec<u64>>>,
    /// (unlace) Whether those halves carry the pair flag.
    pub unlace_mips_pairs_painted: bool,
    /// (unlace) The loader's source-language verdict for the image being
    /// decompiled.  A FACT, not an option: written once at `load file` from
    /// `unlace_analysis::sourcelang` (the `UNLACE_SOURCELANG` override already
    /// applied), and the thing `option rustabi auto` tests and
    /// `option reloadarg` stands down on.  The XML `<binaryimage>` bootstrap
    /// never runs the analyzer tier, so it stays `Unknown` there.
    pub source_lang_detected: crate::sourcelang::SourceLang,
    /// Executable `runtime.chanrecv2` entry confirmed by the Go function table.
    pub go_chanrecv2: Option<u64>,
    /// Function entry to its single DWARF-verified status receive call site.
    pub go_chanrecv_status_sites: std::collections::BTreeMap<u64, u64>,
    /// Unambiguous stable rustc version from ELF compiler metadata.
    pub rustc_stable_version: Option<(u16, u16, u16)>,
    pub rustc_pieces_layout: bool,
    pub rust_fmt_pieces_relro: Option<(u64, u64)>,
    /// Primitive Display callback types from full Rust object-symbol identities.
    pub rust_display_formatters: std::collections::BTreeMap<u64, &'static str>,
    pub rust_str_display_formatters: std::collections::BTreeSet<u64>,
    pub rust_fmt_write_relro: Option<(u64, u64)>,

    /// (unlace) The default models `armfloatreturn` has widened, with the model
    /// each was built from and whether it skips back-fill holes, so every
    /// function reuses one instead of rebuilding it.
    pub arm_widened_models: std::cell::RefCell<
        Vec<(
            Rc<crate::fspec::ProtoModel>,
            bool,
            Rc<crate::fspec::ProtoModel>,
        )>,
    >,
    /// (unlace `armfloatreturn`) Library prototypes declaring a `float` or `double`
    /// that an ARM image's load held back, by name or by entry address, until a
    /// decompile shows whether the option applies. See
    /// [`crate::p4_calls::armfloatreturn::park_float_library_prototypes`].
    pub arm_float_library_prototypes: Vec<(Option<Address>, crate::fspec::PrototypePieces)>,

    /// (unlace `fdeflowbound`) Every single-function unwind-table extent
    /// `[start, end)`, sorted, committed by the analysis tier. Under `functails`, an
    /// owner's extent runs over a tail that starts exactly where it ends.
    pub unlace_fde_extents: Rc<Vec<(u64, u64)>>,

    /// (unlace, Phase 3) Ghidra-convention default naming (`FUN_`/`DAT_`/`LAB_` +
    /// `%08x`) for entities no Symbol covers — set (with `name_style_angr` off)
    /// by the ghidra-mode registerProgram so unlace's fallback names match what
    /// Java's `isDynamicSymbolName`/`GlobalSymbolMap` expect
    /// (ghidra_arch.cc:928-947).  Never set on the standalone path.  Takes
    /// precedence over `name_style_angr` in [`Self::unlace_name_style`].
    pub name_style_ghidra: bool,
    /// (unlace `importdata`) `(space index, offset)` of each import slot whose
    /// import is a data object (`machodataslots`): a read of the slot's own
    /// value renders `&<import>`.
    pub data_import_slots: std::collections::BTreeSet<(int4, uintb)>,
    /// (unlace `cortexmpriv`) The inject id of the `isCurrentModePrivileged`
    /// callother-fixup this architecture registered, or `None` on a language that
    /// does not declare the user-op. Identifies the one payload
    /// `option cortexmpriv off` suppresses.
    pub cortexmpriv_inject: Option<int4>,
    /// (unlace decompile-all watchdog) Optional wall-clock budget for ONE
    /// function's decompile drive (`unlace decompile-all --max-fn-seconds N`).
    /// `None` (the default) means no budget: the console/`decomp_dbg` parity
    /// path never sets it, so the datatest pipeline is structurally unaffected.
    /// Driver policy, NOT a stage-model settable: it changes zero output for a
    /// function that converges — it only bounds a non-converging one.
    pub unlace_fn_budget: Option<std::time::Duration>,
    /// (unlace decompile-all watchdog) The live deadline for the CURRENT
    /// function's drive, computed from [`unlace_fn_budget`](Self::unlace_fn_budget)
    /// at the top of `decompile_func_full_with_override_dyn` and consulted
    /// cooperatively at the action/rule-pool/heritage loop boundaries
    /// ([`ActionContext::deadline`](crate::action::ActionContext)).  Always
    /// `None` when no budget is set.
    pub unlace_fn_deadline: Option<std::time::Instant>,
    /// (unlace `calleeretpurge`) Per-image cache of each direct callee's decoded
    /// return purge, keyed by `(space index, entry offset)`.
    pub unlace_callee_purge_cache: std::collections::HashMap<(int4, uintb), Option<int4>>,
    /// (unlace `importvote`) The direct call sites of each PLT import, by stub
    /// `(space index, offset)`, committed by the analysis tier.
    pub unlace_import_sites: Rc<std::collections::HashMap<(int4, u64), Vec<u64>>>,
    /// (unlace `swiftcall`) Per-image cache of whether a callee's body leaves
    /// `swiftself` unread ([`crate::swiftcall::seed_self_readers`]).
    pub unlace_swift_self_first_cache: std::collections::HashMap<(int4, uintb), bool>,
    /// (unlace `swiftcall`) Whether the body at an entry reads `swiftself`
    /// before writing it, other than to save it
    /// ([`crate::swiftinfer::seed`]).
    pub unlace_swift_self_reads: std::collections::BTreeMap<(int4, uintb), bool>,
    /// (unlace `swiftcall`) The same for `swiftasync`.
    pub unlace_swift_async_reads: std::collections::BTreeMap<(int4, uintb), bool>,
    /// (unlace `protoorder`) A batch drive with no callee-first order behind it
    /// (a narrowed `decompile-all`, `unlace decompile --json`) states its tail
    /// callees first as a single-function drive does.  Driver state, not an
    /// option: the front-end sets it around such a batch.
    pub unlace_tail_callee_batch: bool,
    /// (unlace `vfpvariadic`) The default model with the variadic return rules,
    /// keyed by the default model it was derived from.
    pub unlace_vfp_variadic: RefCell<Option<(Rc<ProtoModel>, Option<Rc<ProtoModel>>)>>,
    /// (unlace) Each x86-32 callee's register inputs read off its own entry, keyed
    /// by entry offset; see [`crate::calleereginputs`].
    pub unlace_callee_reginputs: RefCell<std::collections::HashMap<uintb, Option<u8>>>,
    /// (unlace `calleereginputs custom`) Per-callee-entry input-register key (the
    /// ECX/EDX/EBX/ESI/EDI set the whole-image two-sided rule decided): bit 0
    /// ECX, 1 EDX, 2 EBX, 3 ESI, 4 EDI. Built once over the whole image by the
    /// callee-first driver ([`crate::p4_calls::calleereginputs`]); empty in
    /// single-function mode (then no custom register is an argument, consistently
    /// on both sides) and empty with the `custom` extension off.
    pub unlace_custom_reg_callers: Rc<std::collections::HashMap<uintb, u16>>,
    /// (unlace `calleereginputs custom`) The synthesized model for each input-register
    /// key, built once beside the map so the caller call site and the callee's
    /// own evaluation share one model instance.
    pub unlace_custom_reg_models: Rc<std::collections::HashMap<u16, Rc<ProtoModel>>>,
    /// (unlace `calleereginputs custom`) Per-callee-entry mask of the callee-saved
    /// registers (EBX 1, ESI 2, EDI 4) the function's own body read on entry,
    /// plus 8 when it also read ECX or EDX, recorded after each decompile from
    /// the post-heritage entry reads. The callee half of the two-sided decision.
    pub unlace_custom_reg_reads: std::collections::HashMap<uintb, u8>,
    /// (unlace `calleereginputs custom`) Per callee entry, every `(caller entry,
    /// call instruction)` a decompile printed a direct call to it from: a callee
    /// some decompile reaches from a site the call graph does not attribute to
    /// that caller states nothing.
    pub unlace_custom_reg_calls:
        std::collections::HashMap<uintb, std::collections::BTreeSet<(uintb, uintb)>>,
    /// (ghidra-mode, Phase 4) Name recommendations staged for the NEXT
    /// decompile drive — `(name, storage addr, usepoint, size)`, taken (and
    /// cleared) by `decompile_func_full_with_override_dyn` and seeded into the
    /// fresh `Funcdata`'s local scope.  The carrier for the host `<localdb>`'s
    /// namelocked-but-not-typelocked locals (GUI renames of untyped
    /// variables), which C++ keeps as `ScopeLocal::nameRecommend` entries
    /// rather than Symbols.  Always empty outside ghidra mode, so the
    /// standalone pipeline is structurally unaffected.
    pub unlace_pending_name_recs: Vec<(String, Address, Address, int4)>,
    /// (ghidra-mode, Phase 4) The DYNAMIC (hash-storage) half of the same
    /// staging — `(name, first-use address, hash)`; see
    /// [`Self::unlace_pending_name_recs`].  Always empty outside ghidra mode.
    pub unlace_pending_dyn_recs: Vec<(String, Address, u64)>,
    /// (ghidra-mode, Phase 4) The prototype MODEL the host declared for the
    /// next decompiled function (`<prototype model=…>`), staged the same way.
    /// The host assigned its committed parameter storage under this
    /// convention, so re-deriving storage from unlace's default model would
    /// disagree with the database and make Java's `checkFullCommit` rewrite
    /// the user's signature on any rename.  `None` outside ghidra mode.
    pub unlace_pending_proto_model: Option<Rc<crate::fspec::ProtoModel>>,
    /// (unlace `--assert`) Whether the next drive records the numbering its
    /// naming pass hands out, because a directive batch may be replayed
    /// against it; set and cleared by that caller.
    pub unlace_record_names: bool,

    // --- unlace analysis-pass gates (per-run `--option <id> on|off`) ----------
    // One boolean per `unlace_analysis::passes` pass id; the console's
    // `commit_analysis_output` consults these at `read symbols` and skips a
    // disabled pass's facts.  The unlace analog of Ghidra's
    // `AbstractAnalyzer.setDefaultEnablement` per-analyzer enablement (a Run
    // Analysis on/off toggle), bound to the real-ELF path only (the XML datatest
    // path never produces analysis facts, so these are structurally inert there).
    // Default-on (matching Ghidra's default-on analyzers) except `addrtable`,
    // which Ghidra ships off (`AddressTableAnalyzer.setDefaultEnablement(false)`).
    /// (unlace `arm64evcall`) `call site → methods its vtable slot can hold`,
    /// committed from the analysis tier; read when flow builds the CALLIND.
    pub unlace_vcall_targets: Rc<std::collections::BTreeMap<u64, VcallTargets>>,

    /// Caller-local PPC32 PIC import proof, applied during flow following.
    pub analysis_ppc32picimports: crate::ppc32picimports::Mode,
    /// (unlace) The load-time options this program was loaded with: the ones in
    /// force when it was built, updated by a load-time `option` command.
    /// [`Self::load_scope`] puts them back in force for later analysis.
    load_options: Rc<crate::loadoptions::LoadOptions>,
    /// (unlace) Built with no options in force: an entry point that takes none
    /// loaded this program, so its gates keep reading the environment live.
    load_options_from_env: bool,

    /// (unlace `msvcsig`) The entries, as `(space index, offset)`, whose MSVC
    /// prototype the analysis commit locked onto the FunctionSymbol. A call
    /// through one of these import slots is made direct while the flow is
    /// followed ([`crate::msvcimportcall`]). Empty unless `msvcsig` applied.
    pub msvcsig_import_slots: std::collections::BTreeSet<(int4, uintb)>,
    /// (unlace `guarddispatch`) The Control Flow Guard dispatch pointer slots a PE
    /// load configuration names, as `(space index, offset)`.
    pub guard_dispatch_slots: std::collections::BTreeSet<(int4, uintb)>,
    /// (unlace `pushpadread`) The number of STACK arguments each printf-family
    /// format call consumes, keyed by the call instruction's VMA -- derived from
    /// the format resolver's per-site conversion count. The callee-body probe
    /// uses it to tell a real stack argument a callee forwards (pushed below this
    /// count) from the alignment pad gcc pushes above it. Built whenever
    /// `pushpadread` is on and the Listing runs; it carries NO typing and never
    /// reaches the varargs-override path, so it is independent of `--option
    /// formatstring`.
    pub format_stack_args: std::rc::Rc<std::collections::BTreeMap<u64, usize>>,
    /// (unlace `elfmain`) The C runtime's `int main(int argc, char **argv, char
    /// **envp)` for an executable's own symbol-named `main`, with its entry.
    /// Not parked on the symbol: the drive locks only its `int` return and names
    /// and types the parameters `main`'s own analysis recovers
    /// ([`crate::elfmaindecl`]).
    pub elfmain_main_decl: Option<(Address, crate::fspec::PrototypePieces)>,
    /// (unlace `fid`) The entries whose parked prototype came from a `.fid`
    /// record ([`crate::fidproto`]).
    pub fid_prototypes: std::collections::BTreeSet<u64>,
    /// (unlace `formatstring`) The call points, among the prototype overrides of
    /// the drive in progress, whose override a resolved format string produced.
    /// Set by the console's decompile step around each drive; the flow build
    /// installs those overrides with an open tail
    /// ([`crate::p4_calls::formattail`]).
    pub format_override_callpoints: std::collections::BTreeSet<u64>,
    /// (unlace `--assert callee`) Caller-stated destinations of indirect calls:
    /// function entry -> call site -> callee entry
    /// ([`crate::calleeoverride`]).
    pub unlace_callee_overrides:
        std::collections::BTreeMap<Address, std::collections::BTreeMap<Address, Address>>,
    /// (unlace) Loader-stated prototypes of single call instructions, by the
    /// instruction's address ([`crate::callsiteproto`]).
    pub unlace_callsite_protos: std::collections::BTreeMap<u64, crate::fspec::PrototypePieces>,
    /// (unlace `uefi`) The interface instances the EFI module installs
    /// ([`crate::uefiprotocols`]).
    pub unlace_uefi_installs: Vec<crate::uefiprotocols::InstalledInterface>,
    /// (unlace `varargstackargs`) Per-run cache of the callee `va_start` probe,
    /// keyed by the callee's `(space index, entry offset)`.
    pub unlace_darwin_variadic_cache: std::collections::HashMap<(int4, uintb), bool>,
    /// (unlace `lazyfuncs`) Entry starts the commit installed as NAMES only, sorted, so
    /// flow reads a branch to one as a transfer, not code to follow into.
    pub lazy_entry_starts: Rc<Vec<u64>>,

    /// (unlace, Ghidra-gap) `call error(nonzero,…)` call-site addresses whose fall-through
    /// the decompile stage must prune (as `CALL_RETURN` flow overrides). Populated at the
    /// analysis commit from `AnalysisOutput::no_fallthru_calls` (empty unless `listing` +
    /// `noreturn_known` are on); read by `decompile-all` per function. glibc `error()`
    /// with a nonzero status never returns, so without the prune the flow-follower walks
    /// past the call into the next function and absorbs it. Sorted/deduped.
    pub error_noreturn_callsites: Vec<u64>,
    /// (unlace #1288) The MS-DOS exit interrupts (`INT 20h`, `INT 27h`, `INT 21h`
    /// with AH 00h/31h/4Ch) of a real-mode raw or MZ load, sorted. The raw
    /// discovery finds them (`unlace_analysis::listing::dosexit`); flow ends
    /// at each ([`FlowEnvironment::is_dos_exit_callind`](crate::flow::FlowEnvironment::is_dos_exit_callind)).
    pub dos_exit_sites: Vec<u64>,

    /// (unlace) Check FID matches against callee names, several rounds, tiny-stub guard (`fidcallees`). Default on.
    pub analysis_fidcallees: bool,
    /// (unlace) The Aggressive Instruction Finder gap-walk (`aif`), the third

    /// (unlace) FLIRT reference-site checks and arbitration (`flirtsites`). Default on.
    pub analysis_flirtsites: bool,

    /// (unlace `blobs`) The first address of each committed blob. A constant equal
    /// to one is weighed as a pointer even below the space's pointer lower bound.
    pub blob_entries: Rc<std::collections::BTreeSet<u64>>,
    /// (unlace `swifttypes`) Register-pinned parameters the analysis tier
    /// declared, by function entry: `(slot, name, storage + type)`, the
    /// shape of a console `map param`. The decompile drive seeds a
    /// function's own decompile with them ahead of the console's.
    pub loader_param_locks:
        std::collections::BTreeMap<Address, Vec<(int4, String, crate::fspec::ParameterPieces)>>,
    /// (unlace `cfstrings`) The `__cfstring` entry addresses the commit seeded, so
    /// the printer renders a literal at one of them as `CFSTR("...")`.
    pub cfstring_entries: std::collections::BTreeSet<u64>,
    /// (unlace) The calling convention the analysis tier bound to a function
    /// without declaring its signature, by entry `(space index, offset)`.
    /// The function's own parameters, and those of every direct call to it,
    /// are recovered under it ([`crate::context::ArchContext::bound_proto_models`]).
    pub loader_proto_models: Rc<std::collections::BTreeMap<(int4, uintb), Rc<ProtoModel>>>,
    /// (unlace `swiftmetadata`) Each local Swift enum's case count by its
    /// metadata accessor's entry offset (`p2_lift/switchextent.rs`).
    pub loader_swift_enum_cases: Rc<std::collections::BTreeMap<u64, u32>>,

    // --- Owned subsystems (architecture.hh:211-233) -----------------------
    /// Memory map of global variables and functions (C++ `symboltab`).
    pub symboltab: Database,
    /// (unlace, Phase 3) The ghidra-mode lazy symbol provider (the `ScopeGhidra`
    /// port, [`crate::remote_provider::RemoteScope`]), installed by the
    /// ghidra-mode registerProgram via [`Self::install_remote_provider`];
    /// `None` on the standalone path.  Threaded into every per-function
    /// `ArchContext` by `build_arch_handle` and consulted by the flow
    /// environment's callee-name/no-return queries.
    pub remote_scope: Option<Rc<crate::remote_provider::RemoteScope>>,
    /// The two whole-`symboltab` derivations [`Architecture::build_arch_handle`]
    /// hands every `Funcdata`, memoized on the symbol table's mutation
    /// generation (no C++ analogue -- the C++ `glb` *is* the live symbol table
    /// and derives nothing per function).
    symbol_snapshots: RefCell<SymbolSnapshots>,
    /// False re-derives both on every handle (`UNLACE_NO_SYMBOL_SNAPSHOT_CACHE`),
    /// so the memoized and re-derived paths can be compared.
    unlace_snapshot_cache: bool,
    /// Options that can be configured (C++ `options`).
    pub options: OptionDatabase,
    /// Actions that can be applied in this architecture (C++ `allacts`).
    pub allacts: ActionDatabase,
    /// (unlace) Per-program restart-trigger side table (C++ file-static
    /// `restartTable`, owned here per `docs/rust-port/README.md` — one log per loaded
    /// program; survives `Funcdata::clear()` because it lives outside the
    /// Funcdata).  The `restarts` console command renders it.
    pub restart_log: crate::restartlog::RestartLog,
    /// Specifically registered user-defined p-code ops (C++ `userops`).
    pub userops: UserOpManage,
    /// Manager of decoded strings (C++ `stringManager`, a `StringManager*`).
    /// `sleigh_arch.cc:250` seeds this with a `StringManagerUnicode(this,2048)`.
    /// Held behind `Rc<RefCell<..>>` so the same instance can be *shared* into
    /// the per-function W4 [`ArchContext`] (`glb`): `Funcdata::getInternalString`
    /// (driven through the ArchContext during `RuleStringStore`/`RuleStringCopy`) must
    /// `registerInternalStringData` into the very map the printer later reads back
    /// via `getStringData` on this real `Architecture`.
    pub string_manager: Rc<std::cell::RefCell<crate::stringmanage::StringManagerUnicode>>,
    /// P-code injection manager (C++ `pcodeinjectlib`).  SLEIGH-backed.
    pub pcodeinjectlib: PcodeInjectLibrarySleigh,
    /// (unlace) Did the loader validate PPC64 ELFv1 function descriptors?  A FACT,
    /// not an option: written once at `load file` and the thing `option
    /// callmechanisms auto` tests.  The XML `<binaryimage>` bootstrap never sets it.
    pub image_elfv1_toc: bool,
    /// (unlace `dexmodel`) The loaded DEX files, when the image is one (or an
    /// APK holding several).
    pub dex: Vec<Rc<crate::dex::DexModel>>,
    /// (unlace `jvmmodel`) The loaded class files, when the image is one (or a
    /// JAR holding several).
    pub jvm: Vec<Rc<crate::jvm::JvmModel>>,
    /// Comments for this architecture (C++ `commentdb`).  // STUB(comment.cc)
    pub commentdb: CommentDatabase,

    // --- W6/W8 subsystems wired by `init` (architecture.hh:211-233) -------
    /// Data-type factory (C++ `types`, a `TypeFactory*`).  Empty until
    /// [`build_typegrp`](Architecture::build_typegrp) + `build_core_types`.
    ///
    /// Held as an [`Rc`] so the analysis-side [`ArchContext`](crate::context::ArchContext)
    /// (`glb`) can share the *same* populated factory: `ActionInferTypes` reaches
    /// `getBase`/`getTypePointer` through `glb.types()` and must see the identical
    /// interned core types this side cached.  Interior mutability (`Cell`/`RefCell`)
    /// keeps the `&self` setters (`setup_sizes`, `set_core_type`, …) working.
    types: Rc<TypeFactoryImpl>,
    /// The c-language printer (C++ `print`, the active `PrintLanguage*`).
    print: Box<dyn crate::printhandle::PrintHandle>,
    /// Registered prototype models (C++ `protoModels`, name -> `ProtoModel*`).
    /// A `BTreeMap` (ADR 0002) for deterministic iteration matching the C++
    /// `map<string,ProtoModel*>` ordered traversal in `parseCompilerConfig`.
    proto_models: std::collections::BTreeMap<String, Rc<ProtoModel>>,
    /// The calling convention a function was DECLARED under, by function name
    /// (`--assert 'prototype f void * __stdcall f(...)'`, `parse line extern`).
    /// Joined against the parked [`crate::fspec::PrototypePieces`] in
    /// [`Self::build_arch_handle`] so a caller's `ActionDefaultParams` assigns
    /// the callee's parameter storage under the declared convention instead of
    /// the architecture default.  Empty when no declaration named one.
    declared_proto_models: std::collections::BTreeMap<String, Rc<ProtoModel>>,
    /// The calling convention a function was declared under, by entry address
    /// (`(space index, offset)`): the twin of [`Self::declared_proto_models`] for a
    /// declaration whose function shares its name with others, such as the
    /// overloads a demangled MSVC import set carries. A name-keyed declaration
    /// for the same function wins.
    declared_proto_models_at: std::collections::BTreeMap<(int4, uintb), Rc<ProtoModel>>,
    /// The default prototype model (C++ `defaultfp`).  `None` until a cspec is
    /// parsed (or a default is seeded by [`build_default_proto`]).
    defaultfp: Option<Rc<ProtoModel>>,
    /// The current-evaluation prototype model (C++ `evalfp_current`); falls
    /// back to `defaultfp` when unset.  Set only by an explicit
    /// `option protoeval <model>`, which outranks the spec's own nomination.
    evalfp_current: Option<Rc<ProtoModel>>,
    /// The model the compiler spec **nominates** for evaluating the current
    /// function's prototype (its `<eval_current_prototype>`), decoded by
    /// [`build_default_proto`]; `None` for the many languages whose spec
    /// declares no such element.  See [`crate::evalcurrentproto`].
    evalfp_current_spec: Option<Rc<ProtoModel>>,
    /// Default storage location of a function's return address (C++
    /// `Architecture::defaultReturnAddr`), decoded from the cspec's top-level
    /// `<returnaddress>` element by [`build_default_proto`].  `None` when the
    /// cspec has no `<returnaddress>` (then `testForReturnAddress` returns
    /// `false`, exactly as the C++ does for `defaultReturnAddr.space == 0`).
    default_return_addr: Option<unlace_num::pcoderaw::VarnodeData>,
    /// Raw compiler-spec (`.cspec`) XML content, set by the frontend before
    /// [`init_post_engine`](Architecture::init_post_engine).  The C++
    /// `parseCompilerConfig` decodes the `<default_proto>`/`<prototype>` tags
    /// from this; here [`build_default_proto`](Architecture::build_default_proto)
    /// reads it to recover the real input/output parameter lists.  `None` when
    /// the frontend did not supply it (then a name-only `unknown` default is
    /// seeded, as before).
    cspec_xml: Option<Vec<u8>>,
    /// Raw processor-spec (`.pspec`) XML content, set by the frontend before
    /// [`init_post_engine`](Architecture::init_post_engine).  The C++
    /// `parseProcessorConfig` (architecture.cc:1176) decodes the
    /// `<processor_spec>` children from this; here
    /// [`parse_processor_config`](Architecture::parse_processor_config) reads it
    /// to apply the `<context_data>` `<context_set>` paints that steer
    /// disassembly mode (e.g. x86-64's `addrsize`/`opsize`/`longMode`).  Without
    /// this the engine's context database is all-zero and x86 lifts as 16-bit
    /// real mode.  `None` when the frontend did not supply it (then the engine
    /// keeps the `.sla`-default zero context).
    pspec_xml: Option<Vec<u8>>,
    /// The pspec `<default_symbols>` outside the default code space by address,
    /// kept by [`Self::build_symbols`] for the flow's `query_call_label`: a direct
    /// call whose target carries one of these labels and no FunctionSymbol
    /// (eBPF's helper ids in the `syscall` space) prints the label's name. A
    /// code-space label such as ARM's `Reset` at 0 is not kept, so a call to an
    /// unresolved weak function at 0 does not print as the reset vector.
    pspec_symbols: std::collections::HashMap<(int4, uintb), String>,
    /// (unlace, Phase 3) Raw `<coretypes>` XML (the fourth ghidra-mode
    /// registerProgram spec document), set by [`Self::set_coretypes_xml`]
    /// before [`init_post_engine`](Architecture::init_post_engine) so
    /// [`build_core_types`](Architecture::build_core_types) decodes the host's
    /// core-type set (with the HOST ids) instead of the defaults.  `None` on
    /// the standalone path.
    coretypes_xml: Option<Vec<u8>>,
    /// (unlace) The cspec `<prefersplit>` rows (C++ `Architecture::splitrecords`):
    /// a whole register that the spec prefers to read as two independent pieces.
    /// Decoded once in [`build_default_proto`](Architecture::build_default_proto)
    /// and inherited by every per-function handle, where heritage pass 0 hands
    /// them to the [`PreferSplitManager`](crate::prefersplit::PreferSplitManager).
    split_records: Vec<PreferSplitRecord>,
    /// (unlace) How many decompile drives are active: 0 outside a drive, 1 for the
    /// drive the caller asked for, and more when a drive runs a recovery drive
    /// inside itself (the P4 callee-contract bootstrap).  The outermost drive
    /// owns the Architecture's externally visible output, so only it publishes
    /// analysis comments; a nested drive's statements are private to the caller
    /// it is typed for.  Shared with the [`UnlaceDriveScope`] guard so an unwinding
    /// drive still leaves it balanced.
    unlace_drive_depth: std::rc::Rc<std::cell::Cell<u32>>,
    /// Vector registers that have preferred lane sizes (C++
    /// `Architecture::lanerecords`), built by [`decode_register_data`] from the
    /// pspec `<register_data>` `vector_lane_sizes` attributes during
    /// [`parse_processor_config`].  Sorted ascending by whole size (one record
    /// per size), so the binary-search lookups (`get_laned_register` /
    /// `get_minimum_laned_register_size`) match the C++.  Empty until the pspec
    /// is parsed (and for non-vector architectures).
    ///
    /// [`decode_register_data`]: Architecture::decode_register_data
    /// [`parse_processor_config`]: Architecture::parse_processor_config
    lanerecords: Vec<crate::transform::LanedRegister>,
    /// The p-code OpBehavior / `TypeOp` property table (C++ `inst`, the
    /// `vector<TypeOp *>` `TypeOp::registerInstructions` fills).  Indexed by
    /// op-code; `None` for the unused slots.  Empty until `build_instructions`.
    inst: Vec<Option<crate::typeop::TypeOpInfo>>,
    /// The p-code OpBehavior emulation table (C++ `TypeOp::behave`, the
    /// `OpBehavior *` `TypeOp::registerInstructions` attaches to each `TypeOp`).
    ///
    /// In the Rust port the metadata (`inst`, above) and the emulation behavior
    /// are split tables — the C++ `TypeOp` carries both; here the behavior table
    /// is built alongside `inst` by [`build_instructions`](Architecture::build_instructions)
    /// from `unlace_num::opbehavior::register_instructions`.  Drives the
    /// constant-folding `op->collapse()` (`RuleCollapseConstants`).  Indexed by
    /// op-code; empty until `build_instructions`.
    opbehaviors: Vec<Option<Rc<dyn unlace_num::opbehavior::OpBehavior>>>,

    /// The disassembly engine for this binary (C++ `translate`, a `Translate*`).
    ///
    /// Owned behind the [`EngineTranslate`] trait object (the
    /// `Architecture`↔translator boundary) rather than a concrete [`Sleigh`], so a
    /// ghidra-mode translator can replace `Sleigh` without `unlace-decomp` naming
    /// a ghidra-specific type (see `crate::engine_translate` /
    /// `docs/rust-port/ghidra-phase2-plan.md` §2.2).  The C++ `Architecture`
    /// is-a `AddrSpaceManager` and owns its `Translate`; here the manager lives
    /// inside the engine, reached through the trait's `manager*` accessors.
    /// Only `Sleigh` implements the trait today.
    translate: Box<dyn EngineTranslate>,

    /// (unlace) The `.sla` bytes [`crate::sleigh_arch::SleighArchitecture::build_translator`]
    /// decoded this engine from, kept so a decode-equivalent engine can be
    /// rebuilt elsewhere (see [`crate::decodekit::EngineRecipe`]). `None`
    /// for an `Architecture` whose engine was not built from local `.sla` bytes
    /// -- the ghidra-mode bridge, where there is nothing to rebuild from.
    decode_sla: Option<Arc<[u8]>>,
    /// (unlace) The active language's `.ldefs` `<truncate_space>` records, in
    /// ldefs order -- the second half of the rebuild instructions, recorded
    /// where `modify_spaces` applies them. `None` until that bootstrap step has
    /// run; an empty list is a valid, complete recipe for most languages.
    decode_truncations: Option<Arc<[(String, u32)]>>,
}

/// One active decompile drive, from [`Architecture::unlace_drive_scope`].
///
/// Dropping it leaves the scope; the depth is shared with the `Architecture`, so
/// an unwinding drive still balances the count.
#[doc(hidden)]
pub struct UnlaceDriveScope {
    depth: std::rc::Rc<std::cell::Cell<u32>>,
}

impl Drop for UnlaceDriveScope {
    fn drop(&mut self) {
        self.depth.set(self.depth.get().saturating_sub(1));
    }
}

impl Architecture {
    /// (unlace) Record the `.sla` bytes this engine was decoded from.
    ///
    /// Called by the one construction path that has them
    /// ([`crate::sleigh_arch::SleighArchitecture::build_translator`]).
    pub fn set_decode_sla(&mut self, sla: Arc<[u8]>) {
        self.decode_sla = Some(sla);
    }

    /// (unlace) Record the active language's `.ldefs` space truncations, where
    /// `modify_spaces` applies them.
    pub fn set_decode_truncations(&mut self, truncations: Vec<(String, u32)>) {
        self.decode_truncations = Some(Arc::from(truncations));
    }

    /// (unlace) The instructions for rebuilding a decode-equivalent engine on
    /// another thread, or `None` when this architecture cannot supply them.
    ///
    /// `None` for an engine that is not a local `Sleigh` over decoded `.sla`
    /// bytes -- the ghidra-mode bridge decodes through an RPC, and there is no
    /// recipe that reproduces it.
    pub fn decode_recipe(&self) -> Option<crate::decodekit::EngineRecipe> {
        let sla = self.decode_sla.clone()?;
        let truncations = self.decode_truncations.clone()?;
        self.translate.as_sleigh()?;
        Some(crate::decodekit::EngineRecipe {
            archid: Arc::from(self.archid.as_str()),
            sla,
            truncations,
        })
    }
}

/// The memoized whole-`symboltab` derivations [`Architecture::build_arch_handle`]
/// attaches to every per-function [`ArchContext`].
///
/// Both are pure functions of the [`Database`], and re-deriving them is the
/// dominant per-function cost once the symbol table is large.  `generation` is
/// the [`Database::unlace_generation`] they were taken at; a mismatch means the
/// symbol table moved and both are stale.
#[derive(Default)]
struct SymbolSnapshots {
    generation: Option<u64>,
    global_query: Option<Rc<crate::context::GlobalQuery>>,
    callee_protos: Option<CalleeProtoSnapshot>,
}

/// Every declared callee's parked prototype, keyed by `(space index, entry
/// offset)` -- the [`ArchContext::callee_protos`](crate::context::ArchContext)
/// snapshot, shared rather than copied per function.
type CalleeProtoSnapshot = Rc<Vec<(int4, uintb, crate::fspec::PrototypePieces)>>;

/// The helper calling convention of a language, or `None` when it has none here.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum HelperAbi {
    X86,
    Arm { big_endian: bool },
}

pub use crate::passhooks::default_pass_hooks;

impl Architecture {
    /// The pass hooks this architecture's contexts start with ([`crate::passhooks`]).
    pub fn pass_hooks(&self) -> &'static crate::passhooks::UnlaceHooks {
        default_pass_hooks()
    }

    /// Validate and apply a named unlace option to its live configuration (the driver's
    /// dispatch, `unlace_option_dispatch`, through the pass hooks).
    pub fn set_unlace_option(&mut self, name: &str, value: &str) -> UnlaceResult<String> {
        (self.pass_hooks().set_unlace_option)(self, name, value)
    }

    /// Construct an `Architecture` over an already-initialized disassembly
    /// engine (C++ `Architecture::Architecture` + the `restoreFromSpec` subsystem
    /// builds, condensed: the C++ ctor leaves the heavy subsystems null and
    /// `init`/`restoreFromSpec` fill them; this port takes a built `Translate`
    /// and constructs the subsystems whose deps exist).
    ///
    /// The `translate` must already be initialized (a `Sleigh` with a decoded
    /// `.sla`); the architecture borrows its `AddrSpaceManager` and the
    /// `getUniqueStart(INJECT)` tempbase for the injection library.
    pub fn new(archid: &str, translate: Sleigh) -> Architecture {
        // The standalone (SLEIGH) engine: box the concrete `Sleigh` into the
        // `EngineTranslate` boundary and share the construction with the ghidra-mode
        // path.  `EngineTranslate::manager()` / the provided
        // `Translate::get_unique_start` on the boxed `Sleigh` are the very calls
        // the former direct-`Sleigh` body made (`base().manager()` /
        // `get_unique_start`), so this delegation is behavior-identical for the
        // 675-datatest path.
        Architecture::from_engine_translate(archid, Box::new(translate))
    }

    /// Construct an `Architecture` over an already-initialized disassembly
    /// engine behind the [`EngineTranslate`] boundary — the shared body of
    /// [`Architecture::new`] (the standalone `Sleigh`) and the ghidra-mode
    /// bridge (`unlace-ghidra`'s query-backed `GhidraTranslate`, which
    /// `unlace-decomp` cannot name as a concrete type here — the whole reason the
    /// field is a trait object, see `crate::engine_translate`).
    ///
    /// The `translate` must already be initialized (spaces decoded,
    /// endianness/unique-base set); the architecture reads its space manager and
    /// `getUniqueStart(INJECT)` tempbase for the injection library, then builds
    /// the subsystems whose dependencies exist (the tail of C++
    /// `Architecture::init`/`restoreFromSpec` runs later, in
    /// [`init_post_engine`](Architecture::init_post_engine)).
    pub fn from_engine_translate(
        archid: &str,
        translate: Box<dyn EngineTranslate>,
    ) -> Architecture {
        // C++ PcodeInjectLibrarySleigh(g): tempbase = g->translate->getUniqueStart(INJECT).
        let inject_tempbase = translate.get_unique_start(UniqueLayout::INJECT);

        // C++ buildDatabase(store): create the symbol table + attach the global scope.
        // ScopeInternal sizes its per-space maps to numSpaces(); count before the
        // translate is moved into the struct (the manager accessor borrows it).
        let space_count = translate.manager().num_spaces();
        let mut symboltab = Database::new(true);
        symboltab
            .find_create_scope(0, "", None, space_count)
            .expect("buildDatabase: attach global scope");

        let mut arch = Architecture {
            archid: archid.to_string(),
            unlace_options: crate::optionset::OptionSet::new(),
            input_arm_isa_override: false,
            arm_inventory_modes: Vec::new(),
            loader_entry_tracks: std::collections::BTreeMap::new(),
            loader_mips_t9: None,
            loader_transfer_sites: Rc::default(),
            loader_mips_imports: Rc::default(),
            nullable_literal_values: Rc::default(),

            symbol_snapshots: RefCell::new(SymbolSnapshots::default()),
            unlace_snapshot_cache: unlace_base::env::var_os("UNLACE_NO_SYMBOL_SNAPSHOT_CACHE")
                .is_none(),
            load_options: crate::loadoptions::LoadOptions::in_force(),
            load_options_from_env: !crate::loadoptions::options_in_force(),

            decode_sla: None,
            decode_truncations: None,

            trim_recurse_max: 0,
            max_implied_ref: 0,
            max_term_duplication: 0,
            max_basetype_size: 0,
            min_funcsymbol_size: 1,
            max_jumptable_size: 0,
            aggressive_ext_trim: false,
            readonlypropagate: false,
            dynreloc_const: Rc::new(Vec::new()),
            plt_local: Rc::new(Vec::new()),
            litpool_const: Rc::new(Vec::new()),
            arm_pool_extents: Rc::new(Vec::new()),
            eh_sections: None,
            func_sizes: Rc::new(Vec::new()),
            globalref_ranges: Rc::new(Vec::new()),
            cstring_ranges: Rc::new(Vec::new()),
            infer_pointers: false,
            funcptr_align: 0,
            flowoptions: 0,
            max_instructions: 0,
            alias_block_level: 0,
            split_datatype_config: 0,
            analyze_for_loops: false,
            nan_ignore_all: false,
            nan_ignore_compare: false,
            loadersymbols_parsed: false,
            infer_ptr_spaces: Vec::new(),

            unlace_function_bodies: Vec::new(),
            unlace_float_scan_batch: false,
            unlace_settle_caller_reads: false,
            unlace_call_returns: Vec::new(),
            vector_models: std::cell::RefCell::new(Vec::new()),
            vector_userop_kinds: std::cell::OnceCell::new(),

            fpu_emu_evidence: false,
            unlace_states: Default::default(),
            unlace_tables: Default::default(),
            image_os_userland: false, // (unlace) a load-time fact; set by the console's `load file`
            image_linux_elf: false,   // (unlace) a load-time fact; set by the console's `load file`
            image_elf: false,         // (unlace) a load-time fact; set by the console's `load file`
            image_apple: false,       // (unlace) a load-time fact; set by the console's `load file`

            dwarf_reg_locals: std::collections::BTreeMap::new(),
            image_windows_user: false, // (unlace) a load-time fact; set by the console's `load file`

            unlace_objc_retargets: Default::default(),
            unlace_objc_site_pieces: Default::default(),
            mapped_flow_boundary_image: false,

            octeon_upstream_inject: Vec::new(), // (unlace) set by init_userops_and_fixups on an Octeon language
            unlace_mips_pairs: None,
            unlace_mips_pairs_painted: false,
            rustc_stable_version: None,
            rustc_pieces_layout: false,
            rust_fmt_pieces_relro: None,
            rust_display_formatters: std::collections::BTreeMap::new(),
            rust_str_display_formatters: std::collections::BTreeSet::new(),
            rust_fmt_write_relro: None,
            source_lang_detected: Default::default(), // (unlace) a load-time fact; set by the console's `load file`
            go_chanrecv2: None,
            go_chanrecv_status_sites: Default::default(),

            arm_widened_models: std::cell::RefCell::new(Vec::new()),
            arm_float_library_prototypes: Vec::new(),

            unlace_fde_extents: Rc::new(Vec::new()),

            name_style_ghidra: false,
            data_import_slots: std::collections::BTreeSet::new(),
            cortexmpriv_inject: None, // (unlace) set by init_userops_and_fixups when the language declares the user-op
            unlace_fn_budget: None,   // (unlace) decompile-all watchdog: no budget by default
            unlace_fn_deadline: None, // (unlace) set per drive from unlace_fn_budget
            unlace_callee_purge_cache: std::collections::HashMap::new(),
            unlace_import_sites: Rc::new(std::collections::HashMap::new()),
            unlace_swift_self_first_cache: std::collections::HashMap::new(),
            unlace_swift_self_reads: std::collections::BTreeMap::new(),
            unlace_swift_async_reads: std::collections::BTreeMap::new(),
            unlace_tail_callee_batch: false,
            unlace_vfp_variadic: RefCell::new(None),
            unlace_callee_reginputs: RefCell::new(std::collections::HashMap::new()),
            unlace_custom_reg_callers: Rc::new(std::collections::HashMap::new()),
            unlace_custom_reg_models: Rc::new(std::collections::HashMap::new()),
            unlace_custom_reg_reads: std::collections::HashMap::new(),
            unlace_custom_reg_calls: std::collections::HashMap::new(),
            unlace_pending_name_recs: Vec::new(), // (ghidra Phase 4) staged per drive
            unlace_pending_dyn_recs: Vec::new(),  // (ghidra Phase 4) staged per drive
            unlace_pending_proto_model: None,     // (ghidra Phase 4) staged per drive
            unlace_record_names: false,

            // Analysis-pass gates: placeholder values -- `Architecture::new` calls
            // `reset_defaults_internal()` below, the SINGLE source of every
            // effective default (phases.toml's `default` column mirrors it;
            // asserted equal by phases/tests.rs `live_value` parity).
            unlace_vcall_targets: Rc::default(),

            analysis_ppc32picimports: Default::default(),

            msvcsig_import_slots: std::collections::BTreeSet::new(),
            guard_dispatch_slots: std::collections::BTreeSet::new(),
            format_stack_args: std::rc::Rc::new(std::collections::BTreeMap::new()),
            elfmain_main_decl: None,
            fid_prototypes: std::collections::BTreeSet::new(),
            format_override_callpoints: std::collections::BTreeSet::new(),
            unlace_callee_overrides: std::collections::BTreeMap::new(),
            unlace_callsite_protos: std::collections::BTreeMap::new(),
            unlace_uefi_installs: Vec::new(),
            unlace_darwin_variadic_cache: std::collections::HashMap::new(),
            lazy_entry_starts: Rc::default(),

            error_noreturn_callsites: Vec::new(),
            dos_exit_sites: Vec::new(),

            analysis_fidcallees: true,

            analysis_flirtsites: true,

            loader_param_locks: std::collections::BTreeMap::new(),
            cfstring_entries: std::collections::BTreeSet::new(),
            blob_entries: Rc::default(),
            loader_proto_models: Rc::default(),
            loader_swift_enum_cases: Rc::default(),

            symboltab,
            remote_scope: None,
            options: OptionDatabase::new(),
            allacts: ActionDatabase::new(),
            restart_log: crate::restartlog::RestartLog::new(),
            userops: UserOpManage::new(),
            // sleigh_arch.cc:250: stringManager = new StringManagerUnicode(this,2048)
            string_manager: Rc::new(std::cell::RefCell::new(
                crate::stringmanage::StringManagerUnicode::new(2048),
            )),
            pcodeinjectlib: PcodeInjectLibrarySleigh::new(inject_tempbase),
            image_elfv1_toc: false, // (unlace) a load-time fact; set by the console's `load file`
            dex: Vec::new(),
            jvm: Vec::new(),
            commentdb: CommentDatabase::new(),
            // C++ ctor leaves types/print/defaultfp null; init() fills them.
            types: Rc::new(TypeFactoryImpl::new()),
            print: (crate::architecture::default_pass_hooks().printer_new)(),
            proto_models: std::collections::BTreeMap::new(),
            declared_proto_models: std::collections::BTreeMap::new(),
            declared_proto_models_at: std::collections::BTreeMap::new(),
            defaultfp: None,
            evalfp_current: None,
            evalfp_current_spec: None,
            default_return_addr: None,
            cspec_xml: None,
            pspec_xml: None,
            pspec_symbols: std::collections::HashMap::new(),
            coretypes_xml: None,
            split_records: Vec::new(),
            unlace_drive_depth: std::rc::Rc::new(std::cell::Cell::new(0)),
            lanerecords: Vec::new(),
            inst: Vec::new(),
            opbehaviors: Vec::new(),
            // The engine behind the `EngineTranslate` boundary: a boxed `Sleigh` on
            // the standalone path, a query-backed `GhidraTranslate` on the
            // ghidra-mode path (already boxed by the caller).
            translate,
        };
        // C++ ctor calls resetDefaultsInternal(); then sets min_funcsymbol_size=1
        // etc. (those one-offs are folded into resetDefaultsInternal's siblings
        // in the ctor; we set the ctor-only members and then run the reset).
        arch.reset_defaults_internal();
        arch.min_funcsymbol_size = 1; // C++ ctor: min_funcsymbol_size = 1
        arch.aggressive_ext_trim = false; // C++ ctor: aggressive_ext_trim = false
        arch.funcptr_align = 0; // C++ ctor: funcptr_align = 0
        arch
    }

    /// Reset default values for the options owned by `Architecture` (verbatim
    /// transcription of C++ `Architecture::resetDefaultsInternal`,
    /// `architecture.cc:1420`).  The unlace defaults follow DIV-2/DIV-3
    /// (`docs/divergences.md`).
    /// (unlace) The effective source language for this image: the per-run
    /// `option sourcelang` override when one is set, else the detected fact.
    #[inline]
    pub fn source_lang(&self) -> crate::sourcelang::SourceLang {
        self.unlace_options
            .get::<crate::sourcelang::SourceLangForced>()
            .0
            .unwrap_or(self.source_lang_detected)
    }

    pub fn reset_defaults_internal(&mut self) {
        // The load-time ppcapu and ifuncfpret requests outlive a reset, as the env vars they set do.
        let ppcapu = self.unlace_options.get::<crate::ppcapu::PpcApu>();
        let ifuncfpret = self.unlace_options.get::<crate::ifuncfpret::IfuncFpRet>();
        self.unlace_options.reset_shipped();
        self.unlace_options.set(ppcapu);
        self.unlace_options.set(ifuncfpret);
        self.trim_recurse_max = 5;
        self.max_implied_ref = 2; // 2 is best, in specific cases a higher number might be good
        self.max_term_duplication = 2; // 2 and 3 (4) are reasonable
        self.max_basetype_size = 10; // Needs to be 8 or bigger
        self.flowoptions = flow_flags::error_toomanyinstructions;
        self.max_instructions = 100000;
        self.infer_pointers = true;
        self.apply_segmentize();
        (self.pass_hooks().fpuemu_apply)(self);
        (self.pass_hooks().mzdgroup_apply)(self);

        (self.pass_hooks().callwide_clear)(&mut self.unlace_tables);

        self.analyze_for_loops = true;
        self.readonlypropagate = false;
        self.nan_ignore_all = false;
        self.nan_ignore_compare = true; // Ignore NaN ops associated with FP comparisons by default
        self.alias_block_level = 2; // Block structs and arrays by default
        self.split_datatype_config = split_datatype::OPTION_STRUCT
            | split_datatype::OPTION_ARRAY
            | split_datatype::OPTION_POINTER;
        self.max_jumptable_size = 1024;

        // (unlace) Analysis-pass gates — default-on (matching Ghidra's default-on
        // analyzers), except addrtable which Ghidra ships off. Bound to the
        // real-ELF analysis tier; inert on the XML datatest path.

        // (unlace) DIV-65 measured libc signature extension — default-ON.
        // (unlace) libgcc `__divdi3` contract -- default-OFF: a caller returning
        // arithmetic on the quotient still loses a word.
        // (unlace) Go `_type` descriptor globals -- default-ON: on a Go image the
        // harvested names appear at every allocation/conversion site; a non-Go
        // image produces no facts, so the gate is structurally inert there.
        // (unlace) Named libc/POSIX aggregate pointers in the prototype tables --
        // default-ON (`opaque`). Real-ELF analysis tier only, so the XML corpora
        // cannot observe it; the evidence is the corpus sweep in
        // docs/features/libctypes/record.json. The pass itself reads the
        // load-time env bridge, which defaults on to match this.
        // and the layout value defaults to `opaque`: the field layouts are the
        // `glibc` value, which is opt-in.
        // (unlace) The prebuilt type library -- default `auto`: the built-in
        // library on a target that has one, nothing anywhere else.
        // (unlace) DIV-141 built-in Win32 API signature table -- default-ON.

        // (unlace) DIV-139 declared-name libc prototype lookup -- default-ON.
        // (unlace) Unmapped-CALL-target entry suppression -- default-ON (it only ever
        // withholds an entry the walk already refused to decode).
        // (unlace, GH-299) Thumb tbb/tbh switch-table read -- default-ON (ARM only).
        // (unlace) Register-chain jump-table reach in the reference walk -- default-ON.
        // (unlace) Jump-thunk target function entries -- default-ON (x86 only).
        // (unlace) Address-taken code function entries -- default-ON (x86-64 only).
        // (unlace) PPC64 ELFv2 local-entry entry suppression -- default-ON (it only
        // ever withholds the duplicate second entry over a function whose global
        // entry is already a seed, so no body can be lost).
        // (unlace) Go pclntab functions out of the fast inventory walk -- default-ON.
        // (unlace) ARM flow-proven decode-mode paints -- default-OFF (GH-780): the
        // proof trusts a fall-through the compiler may leave unreachable.
        // (unlace) PIC base-register folding in the xref index -- default-ON. It is
        // a query surface only (no p-code, no emitted C), so no parity gate can
        // observe it; it only ever ADDS an edge, and only one it can prove.
        // (unlace) PE CRT entry-function prototype recovery -- default-ON.
        // (unlace) Mach-O `LC_MAIN` entry naming + prototype -- default-ON (DIV-111).
        // (unlace) PE user-entry naming -- default-ON.
        // (unlace) non-PIE ARM crt1 `_start`->`main` recovery -- default-ON (DIV-132).
        // (unlace) ELF libc-start `main` naming + prototype -- default-ON.
        // (unlace) `.eh_frame` LSDA landing-pad discovery — default-OFF (opt-in,
        // output-changing: adds the discovered exception landing pads as entries).
        // (unlace) Mach-O `__unwind_info` function-start discovery — default-OFF
        // (opt-in, output-changing: adds the unwind-recorded function starts).

        // (unlace) Mach-O `__eh_frame` FDE starts — default-ON, as `.eh_frame` is on ELF.
        // (unlace) Mach-O bound pointer slots named for their import — default-ON
        // (symbol-table names only; the function inventory is unchanged).
        // (unlace) DIV-61 `.eh_frame` FDE-interior entry suppression — default-ON.

        // (unlace) `.pdata` RUNTIME_FUNCTION-interior entry suppression — default-ON.
        // (unlace) PDB-procedure-interior entry suppression — default-ON.
        self.analysis_ppc32picimports = if self.load_options_from_env {
            crate::ppc32picimports::Mode::loaded()
        } else {
            crate::ppc32picimports::Mode::loaded_with(self.load_options.ppc32picimports)
        }; // (unlace) abi when the loader applied it, else off

        // (unlace) DIV: demangled C++ signatures default to the PROVEN tier — only
        // the prototypes the mangling entails (ctor/dtor/cv-qualified member/
        // unqualified global), measured at precision 1.0000 on google/leveldb.
        // Real-object path only, so every parity gate is byte-identical.
        self.lazy_entry_starts = Rc::default();

        self.analysis_fidcallees = true;
        // (unlace, GH-299) AIF bracketed-candidate reject -- default-ON; inert without `aif`.
        // (unlace, GH-299) AIF filler reject -- default-ON; inert without `aif`.
        // (unlace, GH-299) AIF literal-pool slide -- default-ON; inert without `aif`.

        self.analysis_flirtsites = true;
    }

    /// Apply a named, concrete decompiler *mode* preset (`reliable` |
    /// `aggressive` | `fast`): a batch of `(option, value)` overrides fanned out
    /// through [`Self::set_unlace_option`]. Overrides apply in table order; any
    /// later `set_unlace_option` -- another override or a user
    /// `option`/`--option` -- wins (last-write). `reliable` is the shipped
    /// defaults (empty override list, a no-op alias); `aggressive` turns on
    /// every off-by-default pass; `fast` disables expensive whole-program
    /// decode and discovery.
    /// See [`crate::modes`]. The frontend-only `auto` policy errors here because
    /// an Architecture has no input-file size; file frontends resolve it to a
    /// concrete preset before this method. Errors on an unknown mode name.
    pub fn apply_mode(&mut self, name: &str) -> UnlaceResult<String> {
        if crate::modes::mode_is_automatic(name) {
            return Err(UnlaceError::parse(
                "Decompiler mode auto requires input binary size; resolve it in a file frontend",
            ));
        }
        let overrides = crate::modes::mode_overrides(name).ok_or_else(|| {
            let known: Vec<&str> = crate::modes::mode_names().collect();
            UnlaceError::parse(format!(
                "Unknown decompiler mode: {name} (known: {})",
                known.join(", ")
            ))
        })?;
        for (opt, val) in overrides {
            self.set_unlace_option(opt, val)?;
        }
        Ok(format!(
            "mode {name} applied ({} option override{})",
            overrides.len(),
            if overrides.len() == 1 { "" } else { "s" }
        ))
    }

    /// Reset options modifiable by the OptionDatabase, including the action
    /// database (C++ `Architecture::resetDefaults`, `architecture.cc:1463`).
    ///
    /// STUB(W5/W8): the C++ also calls `allacts.resetDefaults()` (the
    /// `ActionDatabase` default-group reset, a W5 surface not yet exposed) and
    /// resets every `PrintLanguage` in `printlist` (W8).  Only the internal
    /// option reset runs here; the action/print resets land with their waves.
    /// (unlace `lazyfuncs`) Is `vma` an entry the commit installed as a name only?
    pub fn is_lazy_entry(&self, vma: u64) -> bool {
        self.lazy_entry_starts.binary_search(&vma).is_ok()
    }

    /// (unlace `lazyfuncs`) Record the entry starts the commit left as names.
    pub fn set_lazy_entry_starts(&mut self, mut starts: Vec<u64>) {
        starts.sort_unstable();
        starts.dedup();
        self.lazy_entry_starts = Rc::new(starts);
    }

    pub fn reset_defaults(&mut self) {
        self.reset_defaults_internal();
        // allacts.resetDefaults();                                 -- STUB(W5)
        // for printlang in printlist: printlang.reset_defaults();  -- STUB(W8)
    }

    /// (unlace, Phase 3) The ghidra-mode `SetOptions` reset (the upstream
    /// `ghidra->resetDefaults()` at the top of `SetOptions::rawAction`,
    /// ghidra_process.cc:435-445): Java DELTA-encodes its option list — only
    /// values differing from the Java default constants travel — so an option
    /// previously sent as non-default must revert when the user sets it back
    /// to default.  Lands every setOptions on the same baseline a fresh
    /// registerProgram produces (the respawn-replay equivalence Java
    /// assumes); the caller re-applies the DIV-77 ghidra-mode preset layer on
    /// top before decoding the list.
    ///
    /// Covered: the engine option defaults (`reset_defaults` →
    /// `reset_defaults_internal`), the printer's context state (integer
    /// format, comment indent + header/instruction flags, namespace strategy,
    /// language — a fresh `PrintContext`), and the PrintC-proper option block
    /// + emitter indent increment
    /// (`PrintC::reset_wire_option_defaults`: nullprinting, inplaceops,
    /// conventionprinting, nocastprinting, hideimpliedexts, the brace
    /// formats, indentincrement, maxlinewidth).  NOT covered: the action-database
    /// default-group reset (the shared STUB(W5) of [`Self::reset_defaults`] —
    /// the `currentaction` option toggles accumulate for the session), and
    /// `commentstyle`, a recorded-no-op printer stub with no state to reset.
    pub fn reset_wire_defaults(&mut self) {
        // The load-time PPC32 PIC mode is program state, so a wire reset clears it.
        self.load_options_mut().ppc32picimports = crate::ppc32picimports::Mode::Off;
        self.reset_defaults();
        self.print.reset_wire_defaults();
    }

    // -----------------------------------------------------------------------
    // Address-space access (C++ Architecture is-a AddrSpaceManager)
    // -----------------------------------------------------------------------

    /// Borrow the address-space manager (C++ `this` viewed as an
    /// `AddrSpaceManager`); forwarded to the owned `Sleigh` engine's
    /// `SleighBase`.
    #[inline]
    pub fn manage(&self) -> &AddrSpaceManager {
        self.translate.manager()
    }

    /// Borrow the disassembly engine (C++ `translate`) through the
    /// [`EngineTranslate`] boundary.  External callers reach the `Translate` /
    /// `RegisterLookup` surface directly; those needing the concrete standalone
    /// engine downcast via [`EngineTranslate::as_sleigh`].
    #[inline]
    pub fn translate(&self) -> &dyn EngineTranslate {
        &*self.translate
    }

    /// Mutably borrow the disassembly engine.
    pub fn translate_mut(&mut self) -> &mut dyn EngineTranslate {
        (self.pass_hooks().callwide_clear)(&mut self.unlace_tables);
        &mut *self.translate
    }

    /// Get the minimum size of a laned register in bytes, or -1 if there are no
    /// laned registers (C++ `Architecture::getMinimumLanedRegisterSize`,
    /// `architecture.cc:313`).
    ///
    /// The `lanerecords` table is populated by [`decode_register_data`] from the
    /// pspec `<register_data>` `vector_lane_sizes` attributes (run during
    /// [`parse_processor_config`]).  When the table is empty (non-vector
    /// architecture, or pspec not yet parsed) this returns -1 exactly as the C++
    /// does with an empty table; the records are sorted ascending by whole size,
    /// so `lanerecords[0]` is the smallest.
    ///
    /// [`decode_register_data`]: Architecture::decode_register_data
    /// [`parse_processor_config`]: Architecture::parse_processor_config
    pub fn get_minimum_laned_register_size(&self) -> int4 {
        if self.lanerecords.is_empty() {
            return -1;
        }
        self.lanerecords[0].get_whole_size()
    }

    /// Look up the laned-register record for a storage location (C++
    /// `Architecture::getLanedRegister`, `architecture.cc:291`).
    ///
    /// As in the C++, the record is associated only with the *size* of the
    /// storage, not its address; `loc` is unused.  Faithful binary search over
    /// the size-sorted `lanerecords`.  `None` is the C++ `(const LanedRegister *)0`.
    pub fn get_laned_register(
        &self,
        _loc: &Address,
        size: int4,
    ) -> Option<&crate::transform::LanedRegister> {
        let mut min: int4 = 0;
        let mut max: int4 = self.lanerecords.len() as int4 - 1;
        while min <= max {
            let mid = (min + max) / 2;
            let sz = self.lanerecords[mid as usize].get_whole_size();
            if sz < size {
                min = mid + 1;
            } else if size < sz {
                max = mid - 1;
            } else {
                return Some(&self.lanerecords[mid as usize]);
            }
        }
        None
    }

    /// Get a string describing this architecture (C++ `getDescription`).
    #[inline]
    pub fn get_description(&self) -> &str {
        &self.archid
    }

    /// (unlace, Phase 3) Install the ghidra-mode lazy providers over the wire
    /// fetch seams (the `buildDatabase`/`buildTypegrp` `ScopeGhidra`/
    /// `TypeFactoryGhidra` analog, ghidra_arch.cc:301-314).  Must run AFTER
    /// `init_post_engine` (the cspec `<global>` ranges and pspec property
    /// paints must be in the Database — the C++ `lockDefaultProperties` at
    /// `postSpecFile`) and BEFORE the first decompile.
    pub fn install_remote_provider(
        &mut self,
        fetch: Rc<dyn crate::remote_provider::RemoteProviderFetch>,
        type_fetch: Option<Rc<dyn crate::dtype::RemoteTypeFetch>>,
    ) {
        let mut models = std::collections::BTreeMap::new();
        for (name, model) in &self.proto_models {
            models.insert(name.clone(), Rc::clone(model));
        }
        let base = self.symboltab.build_global_query();
        let mut scope = crate::remote_provider::RemoteScope::new(
            fetch,
            self.translate.manager_rc(),
            self.types_rc(),
            models,
            self.defaultfp.clone(),
            base,
        );
        scope.set_call_fixups(
            self.pcodeinjectlib
                .base
                .call_fixup_map
                .iter()
                .map(|(name, id)| (String::from_utf8_lossy(name).into_owned(), *id))
                .collect(),
        );
        self.remote_scope = Some(Rc::new(scope));
        self.types.set_remote_type_fetch(type_fetch);
    }

    /// C++ `glb->symboltab->getGlobalScope()->isReadOnly(addr,size,Address())`.
    /// In Ghidra mode the global scope is the host's (`ScopeGhidra`), so the
    /// question goes through the lazy remote scope; the local symbol table
    /// holds nothing there.
    pub fn is_global_read_only(&self, addr: &Address, size: int4) -> bool {
        let usepoint = Address::new_invalid();
        if let Some(remote) = &self.remote_scope {
            let props = remote
                .query_snapshot(addr)
                .query_properties(addr, size, &usepoint);
            return (props & crate::varnode::varnode_flags::readonly) != 0;
        }
        match self.symboltab.get_global_scope() {
            Some(global) => self.symboltab.is_read_only(global, addr, size, &usepoint),
            None => false,
        }
    }

    /// (unlace, Phase 3) The printer's active comment filter — the union of the
    /// header and per-instruction comment-type masks (C++
    /// `CommentDatabaseGhidra::fillCache`'s `ghidra->print->getHeaderComment()
    /// | getInstructionComment()`, comment_ghidra.cc:38).  The getComments
    /// query is filtered by this; `0` means no comment types display and no
    /// query fires.
    pub fn printer_comment_filter(&self) -> u32 {
        self.print.comment_filter()
    }

    /// (unlace, Phase 3) The ghidra-mode flushNative reset, in the upstream order
    /// (`FlushNative::rawAction`, ghidra_process.cc:262-273): the lazy symbol
    /// cache (+ its property-map rollback), the non-core data-types, the
    /// comment database, and the decoded-string cache.  unlace has no live
    /// sub-scopes to delete (namespaces are cached path strings inside the
    /// RemoteScope, cleared with it) and no wired constant pool yet.  The
    /// x86-32 callee walks read the host's names and no-return facts, so they
    /// go too ([`crate::calleepurge`]).
    pub fn flush_remote_caches(&mut self) {
        if let Some(remote) = &self.remote_scope {
            remote.clear();
        }
        (self.pass_hooks().calleepurge_forget_walks)(&mut self.unlace_tables);
        self.types.clear_noncore();
        self.commentdb.clear();
        self.string_manager.borrow_mut().base.clear();
    }

    /// (unlace, Phase 3) The active fallback naming vocabulary (see
    /// [`UnlaceNameStyle`](crate::database::UnlaceNameStyle)): `Ghidra` wins over
    /// `Angr` wins over the upstream `Func` default.
    pub fn unlace_name_style(&self) -> crate::database::UnlaceNameStyle {
        if self.name_style_ghidra {
            crate::database::UnlaceNameStyle::Ghidra
        } else if self
            .unlace_options
            .get::<crate::coreoptions::NameStyleAngr>()
            .0
        {
            crate::database::UnlaceNameStyle::Angr
        } else {
            crate::database::UnlaceNameStyle::Func
        }
    }

    // -----------------------------------------------------------------------
    // nameFunction (architecture.cc:539)
    // -----------------------------------------------------------------------

    /// Pick a default name for a function at `addr` (C++
    /// `Architecture::nameFunction`, `architecture.cc:539`).
    ///
    /// When the unlace angr-style naming is active (`name_style_angr`), the name is
    /// `sub_<addr>` (C++ `unlaceFunctionName`, transcribed in [`Database`]); the
    /// upstream policy is `func_<raw-addr>`.
    pub fn name_function(&self, addr: &Address) -> String {
        if self.name_style_ghidra {
            // (unlace, Phase 3) ghidra-mode: FUN_%08x (the Java-side dynamic shape)
            return crate::database::ghidra_function_name(addr);
        }
        if self
            .unlace_options
            .get::<crate::coreoptions::NameStyleAngr>()
            .0
        {
            // (unlace) angr-style: sub_<addr>
            return crate::database::unlace_function_name(addr);
        }
        // unlace-base `Address::print_raw` is the faithful transcription of
        // `Address::printRaw` -> `AddrSpace::printRaw` (zero-padded `0x<offset>`,
        // word-size division, no space-name prefix).  A function address is a
        // processor space, where `printRaw` cannot fail (the only erroring spaces
        // are fspec/iop, which never hold a function), matching the C++ `void`
        // nameFunction that has no throw site here.
        let mut s = String::from("func_");
        addr.print_raw(&mut s)
            .expect("Architecture::nameFunction: Address::printRaw on a processor address (C++ cannot fail here)");
        s
    }

    /// C++ `symboltab->getGlobalScope()->queryFunction(name)` reduced to the
    /// FunctionSymbol handle: resolve the function symbol by name in the global
    /// scope, erroring `RecovError("Unknown function name: "+name)` when no
    /// FunctionSymbol of that name exists (the C++ `OptionInline`/`OptionNoReturn`
    /// contract).  Used by the per-function property setters; the loader symbols
    /// are read into the global scope at load (`read_loader_symbols`).
    pub fn query_global_function(&self, name: &str) -> UnlaceResult<crate::database::SymbolId> {
        let scope = self
            .symboltab
            .get_global_scope()
            .ok_or_else(|| UnlaceError::recov(format!("Unknown function name: {name}")))?;
        self.symboltab
            .query_function_by_name(scope, name)
            .ok_or_else(|| UnlaceError::recov(format!("Unknown function name: {name}")))
    }

    /// (unlace `dexmodel`) The DEX models the engine may consult.
    pub fn dex_models(&self) -> &[Rc<crate::dex::DexModel>] {
        if self.unlace_options.get::<crate::coreoptions::DexModel>().0 {
            &self.dex
        } else {
            &[]
        }
    }

    /// Park a source-declared prototype on the named global FunctionSymbol (C++
    /// `Architecture::setPrototype`: `queryFunction(name)->getFuncProto()` is locked
    /// from the parsed declaration).  A caller's `ActionDefaultParams::apply` later
    /// `fc->copy(otherfunc->getFuncProto())` (`coreaction.cc:2385`) reads it back via
    /// [`Database::function_proto_pieces`].  Silently no-ops when no FunctionSymbol of
    /// that name exists (the unlace console re-applies the queried function's own
    /// prototype through `apply_locked_prototype`; this path is for the *callees*).
    pub fn set_function_prototype_pieces(
        &mut self,
        name: &str,
        pieces: crate::fspec::PrototypePieces,
    ) {
        if let Ok(sid) = self.query_global_function(name) {
            self.symboltab.set_function_proto_pieces(sid, pieces);
        }
    }

    /// (unlace `cppproto`) Park a recovered prototype on the FunctionSymbol at
    /// `addr`, in whatever scope it lives (`find_function_across_scopes`) — the
    /// address-keyed companion of [`Self::set_function_prototype_pieces`].
    ///
    /// Address is the key the READ side already uses
    /// ([`Database::function_proto_pieces`]), and the only key that survives C++:
    /// a demangled template name is normalized (`maxof<int>` is filed as `maxof`)
    /// and a qualified name lives in a nested scope, so the by-name park silently
    /// misses both.  Faithful to Ghidra, whose `DWARFFunction` is keyed by
    /// `getCodeAddress(dwarfBody.getFirstAddress())`.  A silent no-op when no
    /// FunctionSymbol starts at `addr`.
    pub fn set_function_prototype_pieces_at(
        &mut self,
        addr: &Address,
        pieces: crate::fspec::PrototypePieces,
    ) {
        if let Some((sid, _)) = self.symboltab.find_function_across_scopes(addr) {
            self.symboltab.set_function_proto_pieces(sid, pieces);
        }
    }

    /// (unlace) Park a load-time prototype like
    /// [`Self::set_function_prototype_pieces_at`], merged slot by slot with the
    /// one already parked there (`protomerge::merge`).
    pub fn merge_function_prototype_pieces_at(
        &mut self,
        addr: &Address,
        pieces: crate::fspec::PrototypePieces,
    ) {
        if let Some((sid, _)) = self.symboltab.find_function_across_scopes(addr) {
            self.merge_function_proto_pieces(sid, pieces);
        }
    }

    /// The by-name twin of [`Self::merge_function_prototype_pieces_at`].
    pub fn merge_function_prototype_pieces(
        &mut self,
        name: &str,
        pieces: crate::fspec::PrototypePieces,
    ) {
        if let Ok(sid) = self.query_global_function(name) {
            self.merge_function_proto_pieces(sid, pieces);
        }
    }

    fn merge_function_proto_pieces(
        &mut self,
        sid: crate::database::SymbolId,
        pieces: crate::fspec::PrototypePieces,
    ) {
        let merged = match self.symboltab.function_proto_pieces_of(sid) {
            Some(old) => (self.pass_hooks().protomerge_merge)(old, pieces),
            None => pieces,
        };
        self.symboltab.set_function_proto_pieces(sid, merged);
    }

    /// Commit a Go DWARF declaration and its verified input roles as one symbol record.
    pub fn set_go_dwarf_prototype_at(
        &mut self,
        addr: &Address,
        pieces: crate::fspec::PrototypePieces,
        string_input: Option<crate::gostringinput::GoStringInput>,
    ) {
        if let Some((sid, _)) = self.symboltab.find_function_across_scopes(addr) {
            let string_input = string_input.filter(|formal| &formal.entry == addr);
            self.symboltab
                .set_function_proto_with_go_string(sid, pieces, string_input);
        }
    }

    // -----------------------------------------------------------------------
    // Funcdata construction (the W3 boot boundary)
    // -----------------------------------------------------------------------

    /// Build a [`Funcdata`] tied to this architecture (the C++ `Funcdata`
    /// constructor, driven from the architecture).
    ///
    /// The W3 [`Funcdata::new`] needs an [`ArchHandle`] carrying the IR-boundary
    /// address-space slice and the analysis unique-start.  Per the established
    /// W3 boundary shape (and because the lift emits varnodes carrying their *own*
    /// (engine) spaces directly — see `verify_w3_ir_flow`), the IR-boundary
    /// manager is built fresh from this architecture's const/unique/iop/fspec
    /// spaces, and the analysis unique-start comes from
    /// `Translate::getUniqueStart(ANALYSIS)`.
    pub fn new_funcdata(&self, name: &str, addr: Address, size: int4) -> UnlaceResult<Funcdata> {
        let uniq_start = self.translate.get_unique_start(UniqueLayout::ANALYSIS);
        let glb = self.build_arch_handle_for_entry(Some(&addr));
        // C++: nm == "" => filled in by decode (localmap None); else a real name.
        Funcdata::new(name, name, glb, addr, uniq_start, size)
    }

    /// Build the [`ArchHandle`] (the [`ArchContext`] the W3 IR holds as `glb`).
    ///
    /// LOSS-132 keystone: the handle **shares the engine's single
    /// `AddrSpaceManager`** (the `Rc` the SLEIGH translator populated, with
    /// fspec/iop/join inserted by [`Architecture::insert_ir_call_spaces`]).  The
    /// lift-emitted varnodes carry `Rc<AddrSpace>` from exactly this manager, so
    /// `glb.manage()` returns the same space identities and indices the analysis
    /// passes (heritage and downstream) key their per-space state by.  There is
    /// now one manager, faithful to the C++ `Architecture : AddrSpaceManager`.
    pub fn build_arch_handle(&self) -> ArchHandle {
        self.build_arch_handle_for_entry(None)
    }

    /// (unlace `jvmmodel`) The class-file models the engine may consult.
    pub fn jvm_models(&self) -> &[Rc<crate::jvm::JvmModel>] {
        &self.jvm
    }

    fn build_arch_handle_for_entry(&self, entry: Option<&Address>) -> ArchHandle {
        let manage = self.translate.manager_rc();
        let mut ctx = ArchContext::new_shared(manage);
        ctx.unlace_options = self.unlace_options.clone();
        ctx.unlace_states = self.unlace_states.clone();
        let (effects, reload_only) = (crate::architecture::default_pass_hooks()
            .callmechanisms_effects)(
            &self.unlace_options, self.image_elfv1_toc
        );
        ctx.call_mechanism_effects = effects; // callmechanisms
        ctx.call_mechanism_reload_only = reload_only;
        ctx.dex = entry.and_then(|addr| {
            self.dex_models()
                .iter()
                .find(|model| model.contains(addr.get_offset()))
                .cloned()
        }); // dexmodel
        ctx.jvm = entry.and_then(|addr| {
            self.jvm
                .iter()
                .find(|model| model.contains(addr.get_offset()))
                .cloned()
        }); // jvmmodel
        ctx.unlace_options.set(crate::coreoptions::JavaTry(
            self.unlace_options.get::<crate::coreoptions::JavaTry>().0 && ctx.dex.is_some(),
        )); // javatry
        ctx.min_laned_register_size = self.get_minimum_laned_register_size();
        // Carry the laned-register table so the per-function Funcdata reaches
        // `glb->getLanedRegister` (C++ `Architecture::lanerecords`); cheap clones
        // of the small (size,mask) records.  ActionLaneDivide reads these to
        // split XMM/ZMM vector lanes.
        ctx.lanerecords = self.lanerecords.clone();
        ctx.split_records = self.split_records.clone();
        // Share the engine's OpBehavior emulation table with `glb` (the C++
        // `Architecture` owns the `TypeOp`s, so `glb->inst[opc]->getBehavior()`
        // reaches them directly).  The `Rc<dyn OpBehavior>` entries are cheap
        // clones; the IR-transform passes (RuleCollapseConstants) fold constants
        // through `glb.op_behavior(opc)`.
        ctx.opbehaviors = self.opbehaviors.clone();
        // Share the processor's float formats with `glb` (the C++ `Architecture`
        // IS-A `Translate`, so `glb->translate->getFloatFormat` reaches them).
        // `SubfloatFlow` reads them off the per-function `glb` to drive the
        // float-precision narrowing (`RuleSubfloatConvert`); cheap clones of the
        // small format records.
        ctx.floatformats = self.translate.float_formats().to_vec();
        // Share the prototype-model registry handles (C++ `glb->defaultfp` /
        // `evalfp_current`) so the proto-recovery actions can set the function's
        // model and run output recovery against the real param lists.
        // (unlace) `armfloatreturn` widens the default model with the d-registers.
        let helper = (self.pass_hooks().armfloatreturn_applies)(self)
            && entry
                .and_then(|e| self.symboltab.function_display_name_across_scopes(e))
                .is_some_and(|name| (self.pass_hooks().armfloatreturn_base_pcs_helper)(&name));
        ctx.arm_float_return = (self.pass_hooks().armfloatreturn_applies)(self) && !helper;
        ctx.arm_float_args = (self.pass_hooks().armfloatargs_applies)(self) && !helper;
        ctx.arm_base_model = self
            .defaultfp
            .clone()
            .filter(|_| (self.pass_hooks().armfloatreturn_applies)(self));
        ctx.arm_helper_model = self
            .archid
            .starts_with("ARM:")
            .then(|| (self.pass_hooks().typedcallabi_soft_model)(self, Some(false)))
            .flatten();
        ctx.float_arg_registers = (self.pass_hooks().typedcallabi_image_evidence)(self);
        ctx.soft_float_model =
            (self.pass_hooks().typedcallabi_soft_model)(self, ctx.float_arg_registers);
        ctx.soft_float_declarations = ctx
            .soft_float_model
            .clone()
            .filter(|_| (self.pass_hooks().typedcallabi_without_fpu)(self));
        ctx.vfp_variadic = (self.pass_hooks().vfpvariadic_applies)(self);
        ctx.caller_extends_returns_from =
            (self.pass_hooks().typedcallabi_caller_extends_from)(self);
        ctx.vararg_floats =
            (crate::architecture::default_pass_hooks().varargretreg_image_vararg_floats)(self);
        ctx.narrow_ext = (self.pass_hooks().narrowext_rules)(self);
        ctx.defaultfp = self.defaultfp.as_ref().map(|model| {
            if ctx.arm_float_return {
                let backfill = ctx.arm_float_args;
                let mut built = self.arm_widened_models.borrow_mut();
                if let Some((_, _, widened)) = built
                    .iter()
                    .find(|(from, b, _)| Rc::ptr_eq(from, model) && *b == backfill)
                {
                    return widened.clone();
                }
                let widened =
                    (self.pass_hooks().armfloatreturn_model)(model, ctx.manage(), backfill);
                built.push((model.clone(), backfill, widened.clone()));
                widened
            } else {
                model.clone()
            }
        });
        // An explicit `option protoeval <model>` outranks the spec's own
        // `<eval_current_prototype>` nomination (see `crate::evalcurrentproto`).
        // With neither, the handle's own accessor falls back to `defaultfp`.
        ctx.evalfp_current = self
            .evalfp_current
            .clone()
            .or_else(|| self.evalfp_current_spec.clone());
        // Carry the cspec's return-address storage (C++ `glb->defaultReturnAddr`)
        // so the per-function `Funcdata::testForReturnAddress` can detect a
        // BRANCHIND that is really a tail return through the return-address
        // register (the Switch-return jump-table failure mode `fail_return`).
        ctx.default_return_addr = self.default_return_addr.clone();
        ctx.indirect_return_addr = self
            .default_return_addr
            .clone()
            .or_else(|| self.translate.probe_register_varnode(b"ra"));
        ctx.trim_recurse_max = self.trim_recurse_max;
        ctx.max_implied_ref = self.max_implied_ref;
        ctx.max_term_duplication = self.max_term_duplication;
        let ids = |names: &[&[u8]]| -> Vec<unlace_base::types::uint4> {
            names
                .iter()
                .filter_map(|nm| {
                    self.userops
                        .get_op_by_name(nm)
                        .map(|u| u.get_index() as unlace_base::types::uint4)
                })
                .collect()
        };
        ctx.x87_empty_storage =
            (crate::architecture::default_pass_hooks().x87emptyreturn_storage)(self);
        ctx.vararg_regs = (crate::architecture::default_pass_hooks().varargsave_regs)(self);
        ctx.unlace_options.set(crate::coreoptions::TrapAfterCall(
            self.unlace_options
                .get::<crate::coreoptions::TrapAfterCall>()
                .0
                && self.get_description().starts_with("x86:"),
        ));
        ctx.vcall_targets = Rc::clone(&self.unlace_vcall_targets);
        ctx.retsysreg_userops = ids(crate::specnames::RETSYSREG_STATE_USEROPS);
        ctx.retsysreg_cop_userops = ids(crate::specnames::RETSYSREG_COP_USEROPS);
        // (unlace) carry the Rust return-ABI gate and the detected source language
        // so `unlace_rustabi` reaches both via `glb`.
        ctx.source_lang = self.source_lang();
        ctx.unlace_options.set(crate::coreoptions::ChkstkDarwin(
            self.unlace_options
                .get::<crate::coreoptions::ChkstkDarwin>()
                .0
                && self.image_apple
                && (self.pass_hooks().chkstkdarwin_applies_to)(&self.archid),
        ));
        ctx.unlace_options.set(crate::coreoptions::SpSolve((self
            .pass_hooks()
            .spsolve_applies)(
            self
        )));
        ctx.swift_metadata_results = self
            .unlace_options
            .get::<crate::analysisgates::Swifttypes>()
            .0;
        ctx.ptrauth_trap_userop = self
            .unlace_options
            .get::<crate::coreoptions::PtrauthTrap>()
            .0
            .then(|| {
                self.userops
                    .get_op_by_name(crate::specnames::PTRAUTH_BREAKPOINT_USEROP)
            })
            .flatten()
            .map(|u| u.get_index() as unlace_base::types::uint4);
        ctx.arm64e = self.archid.starts_with("AARCH64:LE:64:AppleSilicon:");
        ctx.name_style_angr = self
            .unlace_options
            .get::<crate::coreoptions::NameStyleAngr>()
            .0;
        ctx.name_style_ghidra = self.name_style_ghidra;
        // (unlace) carry the duplicate-declaration collapse gate so `emit_local_var_decls`
        // (which reads the ArchContext `arch`) sees `option dedupvardecls`.
        // (unlace GH-558) carry the comparison-presentation gate so the
        // `compareform canonical|original` option reaches
        // `ActionPresentCompareForm` via `glb` (the ArchContext read site).
        // (unlace) carry the remaining stage-model rule gates so their `option
        // <name> on|off` reaches the consuming Rule/Action via `glb` (each rule
        // reads `data.get_arch().<flag>`; the rule is registered `enabled=false`
        // so the live flag drives both the DIV default and the toggle).

        ctx.unlace_options.set(crate::coreoptions::GuardedLoop(
            self.unlace_options
                .get::<crate::coreoptions::GuardedLoop>()
                .0
                && self.print.out_lang() == crate::outlang::OutLang::C,
        ));
        // (unlace) resolve the byte-shuffle user-op ids ONCE per program, so the
        // rule can name a CALLOTHER through the ArchSeam (the boundary
        // ArchContext carries no userop table).
        ctx.simd_shuffle_userops = crate::specnames::SIMDLANE_SHUFFLE_USEROPS
            .iter()
            .filter_map(|nm| {
                self.userops
                    .get_op_by_name(nm)
                    .map(|u| u.get_index() as unlace_base::types::uint4)
            })
            .collect();
        ctx.x87_float_to_int_userops = crate::specnames::X87_TRUNCATE_USEROPS
            .iter()
            .filter_map(|nm| self.userops.get_op_by_name(nm))
            .filter(|u| u.get_inject_id().is_none())
            .map(|u| u.get_index() as unlace_base::types::uint4)
            .collect();
        ctx.x87_integer_userops = crate::specnames::X87_TRUNCATE_USEROPS
            .iter()
            .zip([2, 4, 8])
            .filter_map(|(name, width)| {
                self.userops
                    .get_op_by_name(name)
                    .map(|u| (u.get_index() as unlace_base::types::uint4, width))
            })
            .collect();
        ctx.float_rounding_userops = crate::specnames::ROUNDING_USEROPS
            .iter()
            .filter_map(|nm| {
                self.userops
                    .get_op_by_name(nm)
                    .map(|u| u.get_index() as unlace_base::types::uint4)
            })
            .collect();
        ctx.unlace_options.set(crate::coreoptions::CallTargetType(
            self.unlace_options
                .get::<crate::coreoptions::CallTargetType>()
                .0
                && self.unlace_options.get::<crate::coreoptions::CTypes>().0,
        )); // (unlace) calltargettype: only C's own spelling needs it
        ctx.call_target_c = ctx
            .unlace_options
            .get::<crate::coreoptions::CallTargetType>()
            .0
            && self.print.out_lang() == crate::outlang::OutLang::C; // (unlace) calltargettype
        ctx.java_casts = self.print.out_lang() == crate::outlang::OutLang::Java;
        ctx.unknown_byte_is_char = self.unlace_options.get::<crate::coreoptions::Realtypes>().0
            && self.print.out_lang() == crate::outlang::OutLang::C;
        ctx.unknown_is_integer = self.unlace_options.get::<crate::coreoptions::Realtypes>().0
            || self.print.out_lang() != crate::outlang::OutLang::C;
        ctx.int_promotion = (self.pass_hooks().lang_int_promotion)(self.print.out_lang());
        ctx.unlace_options.set(crate::coreoptions::CastArith(
            self.unlace_options.get::<crate::coreoptions::CastArith>().0
                && self.print.out_lang() == crate::outlang::OutLang::C,
        )); // (unlace) castarith
        ctx.unlace_options.set(crate::coreoptions::CastIndex(
            self.unlace_options.get::<crate::coreoptions::CastIndex>().0
                && self.print.out_lang() == crate::outlang::OutLang::C,
        )); // (unlace) castindex
        ctx.elem_ptr_ranges = std::rc::Rc::clone(&self.globalref_ranges); // (unlace) elemptr
        ctx.libctypes = self
            .unlace_options
            .get::<crate::libctypes::LibcTypesLayout>()
            != crate::libctypes::LibcTypesLayout::Off; // (unlace) libctypes (unlace_libcfit)

        ctx.vtable_types = self
            .unlace_options
            .get::<crate::coreoptions::Vtabletypes>()
            .0
            || (self.pass_hooks().inputhints_has_this_hints)(&self.unlace_tables);
        // (unlace `calleereginputs custom`) a function's own evaluation sees the
        // same per-callee models its callers' flow does.
        ctx.unlace_custom_reg_callers = Rc::clone(&self.unlace_custom_reg_callers);
        ctx.unlace_custom_reg_models = Rc::clone(&self.unlace_custom_reg_models);

        ctx.do_while_continue = (self.pass_hooks().lang_do_while_continue)(self.print.out_lang());
        ctx.unlace_options.set(crate::coreoptions::PostIncrement(
            self.unlace_options
                .get::<crate::coreoptions::PostIncrement>()
                .0
                && self.print.out_lang() == crate::outlang::OutLang::C,
        ));
        ctx.image_linux_elf = self.image_linux_elf; // (unlace) linuxsyscall
        ctx.octeon_memory_userops = crate::octeonops::userop_ids(
            &self.userops,
            self.unlace_options
                .get::<crate::octeonops::OcteonEffectsMode>(),
            &self.octeon_upstream_inject,
        );
        ctx.atomic_userops = crate::atomicops::AtomicUserops::resolve(&self.archid, &self.userops);
        ctx.x64_syscall_memory_target = self.archid == "x86:LE:64:default:gcc";
        ctx.syscall_regs = self
            .unlace_options
            .get::<crate::coreoptions::SyscallRegsMode>()
            .fires(self.image_os_userland); // (unlace) syscallregs
        ctx.syscall_regs_family = crate::context::SyscallFamily::from_archid(&self.archid);
        ctx.syscall_regs_userops =
            (self.pass_hooks().syscallregs_userop_ids)(&self.userops, ctx.syscall_regs_family);
        ctx.windows_cspec =
            (self.pass_hooks().fastfailnoreturn_archid_is_windows)(self.get_description()); // (unlace) pebnames
        ctx.image_windows_user = self.image_windows_user;
        // (unlace) resolve the `SYSCALL` user-op ids ONCE per program, for the same
        // reason `simd_shuffle_userops` above is resolved here: the boundary
        // ArchContext carries no userop table.  An op a compiler spec has
        // specialized with its own `<callotherfixup>` carries an injection id and
        // is left out, so the spec's model wins.
        ctx.x64_syscall_userops = self
            .userops
            .get_op_by_name(crate::specnames::X64_SYSCALL_USEROP)
            .filter(|u| u.get_inject_id().is_none())
            .map(|u| vec![u.get_index() as unlace_base::types::uint4])
            .unwrap_or_default();
        ctx.go_keep_divide_checks = self.archid.starts_with("AARCH64:");
        // (unlace) carry the whiledo->for reroll gate (C++ `glb->analyze_for_loops`)
        // so `ActionStructureTransform` reaches it for
        // `Funcdata::finalize_forloop_transform`.
        // (unlace outlang) A language with no C-style `for` header must not have the
        // reroll run at all. `finalize_forloop_transform` physically MOVES the
        // initializer and increment ops into the header's slots and suppresses
        // them from the body; rendering that as a `while` would drop them, and
        // moving them back at print time would let a `continue` skip the
        // increment. With the gate off they stay where the CFG put them, which is
        // already the `while` shape. `caps.c_for` is true for C, so the C path is
        // unchanged.
        ctx.analyze_for_loops =
            self.analyze_for_loops && (self.pass_hooks().lang_c_for)(self.print.out_lang());
        // Carry the `nanignore all` flag (C++ `glb->nan_ignore_all`) so
        // `RuleIgnoreNan` reaches it via `glb`.
        ctx.nan_ignore_all = self.nan_ignore_all;
        ctx.nan_ignore_compare = self.nan_ignore_compare;
        // Share the populated data-type factory so `ActionInferTypes` (run via
        // `glb`) reaches the same interned core types this side cached.
        ctx.types = Some(self.types_rc());
        // Share the decoded-string manager (C++ `glb->stringManager`) so the
        // per-function `Funcdata::getInternalString` registers internal strings
        // into the very instance the printer reads back on this architecture.
        ctx.internal_strings = Some(Rc::clone(&self.string_manager));
        // Jump-table recovery constants (C++ `glb->max_jumptable_size` /
        // `funcptr_align`) and the load image (C++ `glb->loader`) so the
        // jump-table emulator reaches the read-only switch table.
        ctx.max_jumptable_size = self.max_jumptable_size;
        ctx.alias_block_level = self.alias_block_level;
        ctx.funcptr_align = self.funcptr_align;
        // (unlace) GH-9191: carry the modulo/and-mask jump-table index-bound gate
        // (`option switchmodbound`) so `JumpBasic::recoverModel` reaches it.
        ctx.lazy_entry_starts = Rc::clone(&self.lazy_entry_starts);
        // (unlace, angr) carry the CBRANCH-guard jump-table index-bound gate
        // (`option switchguardbound`) so `JumpBasic::recoverModel` reaches it.
        // (unlace, angr) carry the loop-carried-base relative-offset jump-table gate
        // (`option switchsharedcase`) so `JumpBasic::recoverModel` reaches it.
        // (unlace, angr) carry the multi-predecessor unrolled-guard jump-table gate
        // (`option switchmultipred`) so `JumpBasic::checkUnrolledGuard` reaches it.
        ctx.unlace_fde_extents = Rc::clone(&self.unlace_fde_extents);
        // (unlace, angr) carry the interleaved unrolled-guard partial-flow gate
        // (`option unrolledguard`) so `FlowInfo::collectEdges` reaches it.
        // (unlace) carry the shared-partial gate (`option jtsharepartial`) so
        // `Funcdata::stage_jump_table` reaches it.
        ctx.loader = Some(self.translate.loader_rc());
        // Carry the read-only-propagation switch (C++ `glb->readonlypropagate`,
        // flipped by `option readonly`) so `ActionVarnodeProps` reaches it to gate
        // `Funcdata::fillinReadOnly` (the readonly-RAM-global constant fold).
        ctx.readonlypropagate = self.readonlypropagate;
        // (unlace `dynrelocs`) Carry the PT_GNU_RELRO-frozen dynamic-relocation
        // slots so `ActionVarnodeProps` folds those loads with global read-only
        // propagation still off. `Rc` clone: the list is built once at load.
        ctx.dynreloc_const = Rc::clone(&self.dynreloc_const);
        ctx.unlace_options.set(crate::coreoptions::VexZeroUpper(
            self.unlace_options
                .get::<crate::coreoptions::VexZeroUpper>()
                .0
                && self.archid.starts_with("x86:LE:64"),
        ));
        let neon = self.unlace_options.get::<crate::neonintrin::NeonIntrin>();
        let aarch64 = self.archid.starts_with("AARCH64:");
        ctx.unlace_options.set(crate::neonintrin::NeonIntrin {
            on: neon.on && aarch64,
            fuse: neon.fuse && aarch64,
        });
        let lane_fuse = self.unlace_options.get::<crate::coreoptions::LaneFuse>();
        ctx.unlace_options.set(crate::coreoptions::LaneFuse {
            on: lane_fuse.on && self.archid.starts_with("x86:LE:64"),
            all: lane_fuse.all,
        });
        ctx.vector_fp = if self.unlace_options.get::<crate::coreoptions::VectorAbi>().0
            && self.archid == "x86:LE:64:default:gcc"
        {
            ctx.defaultfp.as_ref().map(|model| {
                let mut built = self.vector_models.borrow_mut();
                if let Some((_, widened)) = built.iter().find(|(from, _)| Rc::ptr_eq(from, model)) {
                    return widened.clone();
                }
                let widened = (self.pass_hooks().vectorabi_model)(model, ctx.manage());
                built.push((model.clone(), widened.clone()));
                widened
            })
        } else {
            None
        };
        ctx.vector_userops = if self.unlace_options.get::<crate::coreoptions::VectorAbi>().0
            && self.archid.starts_with("x86:LE:64")
            || self
                .unlace_options
                .get::<crate::neonintrin::NeonIntrin>()
                .on
                && self.archid.starts_with("AARCH64:")
        {
            Rc::clone(self.vector_userop_kinds.get_or_init(|| {
                if self.archid.starts_with("AARCH64:") {
                    let mut all: Vec<(unlace_base::types::uint4, u8)> = self
                        .userops
                        .named_ops()
                        .filter_map(|(i, nm)| {
                            Some((
                                i,
                                crate::neonintrin::userop_kind(std::str::from_utf8(nm).ok()?)?,
                            ))
                        })
                        .chain(
                            (self.pass_hooks().lanefuse_builtins)()
                                .into_iter()
                                .filter_map(|(i, nm)| {
                                    Some((i, crate::neonintrin::userop_kind(&nm)?))
                                }),
                        )
                        .collect();
                    all.sort_unstable();
                    return Rc::new(all);
                }
                let sleigh = self.userops.named_ops().filter_map(|(i, nm)| {
                    let (intr, _) =
                        (self.pass_hooks().avxintrin_intrinsic)(std::str::from_utf8(nm).ok()?, 32)?;
                    Some((i, (self.pass_hooks().avxintrin_element_kind)(&intr)))
                });
                let fused = (self.pass_hooks().lanefuse_builtins)()
                    .into_iter()
                    .chain((crate::architecture::default_pass_hooks()
                        .lanefuse_mask_builtins)(
                        &mut self.userops.named_ops()
                    ))
                    .filter_map(|(i, nm)| {
                        let (intr, _) = (self.pass_hooks().avxintrin_intrinsic)(&nm, 32)
                            .or_else(|| Some((nm.clone(), vec![])))?;
                        Some((i, (self.pass_hooks().avxintrin_element_kind)(&intr)))
                    });
                let mut all: Vec<(unlace_base::types::uint4, u8)> = sleigh.chain(fused).collect();
                all.sort_unstable();
                Rc::new(all)
            }))
        } else {
            Rc::new(Vec::new())
        };
        ctx.vector_fp = if self.unlace_options.get::<crate::coreoptions::VectorAbi>().0
            && self.archid == "x86:LE:64:default:gcc"
        {
            ctx.defaultfp.as_ref().map(|model| {
                let mut built = self.vector_models.borrow_mut();
                if let Some((_, widened)) = built.iter().find(|(from, _)| Rc::ptr_eq(from, model)) {
                    return widened.clone();
                }
                let widened = (self.pass_hooks().vectorabi_model)(model, ctx.manage());
                built.push((model.clone(), widened.clone()));
                widened
            })
        } else {
            None
        };
        ctx.litpool_const = Rc::clone(&self.litpool_const);
        // Carry the data-type-splitting toggle bits (C++ `glb->split_datatype_config`)
        // so `SplitDatatype` / `RuleSplit{Copy,Load,Store}` reach them per function.
        ctx.split_datatype_config = self.split_datatype_config;
        // Snapshot the global symbol table onto `glb` so the per-function
        // `setVarnodeProperties` can run `localmap->queryProperties`'s walk into
        // the global scope (C++ `glb` reaches the live `symboltab`; the merged
        // unlace `glb` is a skeleton, so the global scope is wired here, after every
        // `map addr`).  Global-mapped varnodes then pick up `persist`/`addrtied`
        // and their stores survive `ActionDeadCode`.
        // Both whole-`symboltab` derivations come from one memoized read, so they
        // are always the same generation of the database as each other.
        let (global_query, callee_protos) = self.symbol_snapshots();
        ctx.global_query = Some(global_query);
        // (unlace, Phase 3) the ghidra-mode lazy provider rides the handle so the
        // global reads above query through it; None on the standalone path.
        ctx.remote_scope = self.remote_scope.clone();
        // Snapshot every source-declared callee prototype (parked on the global
        // FunctionSymbols by `set_function_prototype_pieces`) so the per-function
        // `ActionDefaultParams` copies a known callee's locked `FuncProto` into the
        // call site (C++ `coreaction.cc:2385` `fc->copy(otherfunc->getFuncProto())`).
        ctx.callee_protos = callee_protos;
        ctx.loader_transfer_sites = Rc::clone(&self.loader_transfer_sites);
        ctx.loader_mips_imports = Rc::clone(&self.loader_mips_imports);
        ctx.nullable_literal_values = Rc::clone(&self.nullable_literal_values);
        // (unlace) The convention each of those callees was DECLARED under, keyed
        // the same way the pieces are (entry address).  The declaration names the
        // function, the parked pieces carry that name, and the read side
        // (`ArchContext::callee_proto_model`) is address-keyed — so the join
        // happens here, once per drive, rather than at every call site.
        ctx.callee_proto_models =
            if self.declared_proto_models.is_empty() && self.declared_proto_models_at.is_empty() {
                Vec::new()
            } else {
                ctx.callee_protos
                    .iter()
                    .filter_map(|(space_index, offset, pieces)| {
                        self.declared_proto_models
                            .get(&pieces.name)
                            .or_else(|| self.declared_proto_models_at.get(&(*space_index, *offset)))
                            .map(|m| (*space_index, *offset, Rc::clone(m)))
                    })
                    .collect()
            };
        ctx.bound_proto_models = Rc::clone(&self.loader_proto_models);
        ctx.swift_enum_cases = Rc::clone(&self.loader_swift_enum_cases);
        ctx.virtual_this = (self.pass_hooks().calleereginputs_virtual_this)(self);
        // Carry the constant-pointer-inference config (C++ `glb->infer_pointers`)
        // and the ordered inferable-pointer spaces (C++ `glb->inferPtrSpaces`,
        // built by cacheAddrSpaceProperties) so `ActionConstantPtr` (run via
        // `glb`) can rewrite a mapped global-constant address into a typed
        // `PTRSUB(spacebase,off)`.
        ctx.infer_pointers = self.infer_pointers;
        ctx.blob_entries = Rc::clone(&self.blob_entries);
        ctx.infer_ptr_spaces = self.infer_ptr_spaces.clone();
        // Snapshot the tracked-register database (C++ `glb->context`'s track base,
        // populated by `set track`) so `ActionConstbase` can query it for the
        // function entry address through the detached per-function skeleton.
        ctx.tracked_sets = self.with_context_db(|db| db.clone_trackbase());
        let loader_seeds = |entry: &Address| {
            self.loader_entry_tracks.contains_key(entry) || self.loader_mips_t9.is_some()
        };
        if let Some(entry) = entry.filter(|&entry| loader_seeds(entry)) {
            let mut track = ctx.tracked_sets.get_value(entry).clone();
            let before = track.len();
            for seed in self.loader_entry_tracks.get(entry).into_iter().flatten() {
                if !track.iter().any(|value| value.loc == seed.loc) {
                    track.push(seed.clone());
                }
            }
            if let Some((loc, probe)) = self.loader_mips_t9.as_ref() {
                if !track.iter().any(|value| value.loc == *loc) {
                    if let Some(val) = probe(entry) {
                        track.push(unlace_sleigh::globalcontext::TrackedContext {
                            loc: loc.clone(),
                            val,
                        });
                    }
                }
            }
            if track.len() != before {
                if let Some(stop) = entry.get_offset().checked_add(1) {
                    let end = Address::new(Rc::clone(entry.get_space().unwrap()), stop);
                    *ctx.tracked_sets.clear_range(entry, &end) = track;
                }
            }
        }
        Rc::new(ctx)
    }

    /// The two whole-`symboltab` derivations for the `Funcdata` being built,
    /// reusing the ones the previous function got while `symboltab` has not
    /// moved since (`Database::unlace_generation`).
    fn symbol_snapshots(&self) -> (Rc<crate::context::GlobalQuery>, CalleeProtoSnapshot) {
        if !self.unlace_snapshot_cache {
            return (
                Rc::new(self.symboltab.build_global_query()),
                Rc::new(self.symboltab.build_callee_proto_pieces()),
            );
        }
        let mut slot = self.symbol_snapshots.borrow_mut();
        let generation = self.symboltab.unlace_generation();
        if slot.generation != Some(generation) {
            *slot = SymbolSnapshots {
                generation: Some(generation),
                ..SymbolSnapshots::default()
            };
        }
        (
            Rc::clone(
                slot.global_query
                    .get_or_insert_with(|| Rc::new(self.symboltab.build_global_query())),
            ),
            Rc::clone(
                slot.callee_protos
                    .get_or_insert_with(|| Rc::new(self.symboltab.build_callee_proto_pieces())),
            ),
        )
    }

    /// Turn the `build_arch_handle` symbol-snapshot memoization on or off (on by
    /// default; `UNLACE_NO_SYMBOL_SNAPSHOT_CACHE` turns it off at construction).
    /// The two paths must agree -- this exists so a test can compare them.
    pub fn set_symbol_snapshot_cache(&mut self, on: bool) {
        self.unlace_snapshot_cache = on;
        *self.symbol_snapshots.borrow_mut() = SymbolSnapshots::default();
    }

    /// Insert the analysis-only fspec/iop/join spaces into the single engine
    /// manager, mirroring C++ `Architecture::restoreFromSpec`
    /// (architecture.cc:638-640): `FspecSpace`, then `IopSpace`, then
    /// `JoinSpace`, each appended at `numSpaces()`.  Idempotent — re-running
    /// init must not double-insert (the manager rejects a duplicate name).
    fn insert_ir_call_spaces(&mut self) -> UnlaceResult<()> {
        use unlace_base::space::{FspecSpace, IopSpace, JoinSpace};
        let big_end = self
            .manage()
            .get_default_code_space()
            .map(|s| s.is_big_endian())
            .unwrap_or(false);
        // Already inserted (re-init): the engine manager already carries them.
        if self.manage().get_fspec_space().is_some() {
            return Ok(());
        }
        let manager = self.translate.manager_mut();
        let next = manager.num_spaces();
        manager.insert_space(Rc::new(FspecSpace::new(next)))?;
        let next = manager.num_spaces();
        manager.insert_space(Rc::new(IopSpace::new(next)))?;
        let next = manager.num_spaces();
        manager.insert_space(Rc::new(JoinSpace::new(next, big_end)))?;
        Ok(())
    }

    /// Create a `SpacebaseSpace` (a \e virtual stack space) backed by a base
    /// register, mirroring C++ `Architecture::addSpacebase` (architecture.cc:564).
    ///
    /// A new [`SpacebaseSpace`](unlace_base::space::SpacebaseSpace) is constructed
    /// at `numSpaces()`, optionally marked reverse-justified, inserted into the
    /// **single** engine manager (so it gets its `'s'` shortcut and, when named
    /// `"stack"`, becomes the manager's formal stack space), and its base
    /// register location attached via `addSpacebasePointer`.
    ///
    /// \param basespace is the address space underlying the stack (e.g. `ram`)
    /// \param nm is the name of the new space (`"stack"` for the formal one)
    /// \param ptrdata is the register location acting as a pointer into the space
    /// \param trunc_size is the (possibly truncated) register size that fits the space
    /// \param isreversejustified is \b true if small variables are justified opposite of endianness
    /// \param stack_growth is \b true if a stack in this space grows in the negative direction
    /// \param is_formal is the indicator for the \e formal stack space
    #[allow(clippy::too_many_arguments)] // C++ Architecture::addSpacebase signature
    fn add_spacebase(
        &mut self,
        basespace: &Rc<unlace_base::space::AddrSpace>,
        nm: &str,
        ptrdata: &unlace_base::space::VarnodeStorage,
        trunc_size: int4,
        isreversejustified: bool,
        stack_growth: bool,
        is_formal: bool,
    ) -> UnlaceResult<()> {
        use unlace_base::space::SpacebaseSpace;
        // C++: `int4 ind = numSpaces();` then `new SpacebaseSpace(this, translate,
        // nm, ind, truncSize, basespace, ptrdata.space->getDelay()+1, isFormal)`.
        let big_end = basespace.is_big_endian(); // C++ `t->isBigEndian()`
        // C++ `ptrdata.space->getDelay()+1`: the heritage delay is one past the
        // delay of the space the base register lives in (dereferencing a null
        // ptrdata.space is C++ UB -> panic).
        let dl = ptrdata
            .space
            .as_ref()
            .expect("addSpacebase: base register has a null space (C++ UB)")
            .get_delay()
            + 1;
        let manager = self.translate.manager_mut();
        let ind = manager.num_spaces();
        let spc = Rc::new(SpacebaseSpace::new(
            nm,
            ind,
            trunc_size as u32, // cast: int4 truncSize -> uint4 space size
            basespace,
            dl,
            is_formal,
            big_end,
        ));
        if isreversejustified {
            manager.set_reverse_justified(&spc);
        }
        manager.insert_space(Rc::clone(&spc))?;
        // C++ `addSpacebasePointer(spc, ptrdata, truncSize, stackGrowth)`: attach
        // the base register to the freshly-inserted spacebase space.
        manager.add_spacebase_pointer(&spc, ptrdata, trunc_size, stack_growth)?;
        Ok(())
    }

    /// Create the stack space and stack-pointer register from a cspec
    /// `<stackpointer>` element, mirroring C++ `Architecture::decodeStackPointer`
    /// (architecture.cc:983).  This is the cspec branch C++ `parseCompilerConfig`
    /// dispatches to `ELEM_STACKPOINTER`.
    ///
    /// Without this the engine manager has no `IPTR_SPACEBASE` space: `parse_machaddr`
    /// fails on `s0x…` stack addresses ("Bad address: s"), `get_stack_space()` is
    /// `None`, and `Funcdata.localmap` stays `None` — so stack-variable promotion
    /// can never fire.  General over any processor's cspec: the `register`/`space`
    /// attributes are read from the XML and resolved through the engine, with NO
    /// processor-name special-casing.
    ///
    /// The cspec XML is the one [`set_cspec_xml`](Architecture::set_cspec_xml)
    /// recorded; this borrows it (it must stay available for the later
    /// `<default_proto>` decode in [`build_default_proto`](Architecture::build_default_proto)).
    fn decode_stack_pointer(&mut self) -> UnlaceResult<()> {
        use unlace_base::xml::DocumentStorage;
        let Some(xml) = self.cspec_xml.clone() else {
            return Ok(()); // no cspec recorded: nothing to decode (degrade gracefully)
        };
        let mut store = DocumentStorage::new();
        let root = store.parse_document(&xml)?.get_root().clone();
        // The resolved .cspec root IS <compiler_spec> (C++ getTag("compiler_spec")).
        let Some(sp) = find_child(&root, "stackpointer") else {
            // No <stackpointer> in this cspec: leave the manager without a stack
            // space (C++ never reaches decodeStackPointer for such a spec).
            return Ok(());
        };

        // C++ attribute loop over <stackpointer>: register, space, growth,
        // reversejustify.  Defaults: stackGrowth=true (negative), reversejustify
        // false.
        let register_name = attr_str(&sp, "register").unwrap_or_default();
        // C++ `stackGrowth = decoder.readString() == "negative"`.
        let stack_growth = attr_str(&sp, "growth")
            .map(|g| g == "negative")
            .unwrap_or(true);
        let isreversejustify = attr_str(&sp, "reversejustify")
            .map(|s| s == "true")
            .unwrap_or(false);
        let space_name = attr_str(&sp, "space");

        // C++: `if (basespace == 0) throw "missing space attribute"`.
        let space_name = space_name.ok_or_else(|| {
            UnlaceError::lowlevel("stackpointer element missing \"space\" attribute")
        })?;
        let basespace = self
            .manage()
            .get_space_by_name(&space_name)
            .cloned()
            .ok_or_else(|| {
                UnlaceError::lowlevel(format!("stackpointer space \"{space_name}\" not found"))
            })?;

        // C++ `translate->getRegister(registerName)` -> the base-register location.
        let point_num = self.get_register_varnode(register_name.as_bytes())?;
        let point = unlace_sleigh::translate::storage_from_varnode_data(&point_num);

        // C++ truncation: if creating a stackpointer to a truncated space, truncate
        // the stackpointer to the space's address size.
        let mut trunc_size = point.size as int4;
        if basespace.is_truncated() && point.size > basespace.get_addr_size() {
            trunc_size = basespace.get_addr_size() as int4;
        }

        // Already created (re-init): the manager already carries the stack space.
        if self.manage().get_stack_space().is_some() {
            return Ok(());
        }

        // C++ `addSpacebase(basespace, "stack", point, truncSize, isreversejustify,
        // stackGrowth, true)` — create the "official" stackpointer.
        self.add_spacebase(
            &basespace,
            "stack",
            &point,
            trunc_size,
            isreversejustify,
            stack_growth,
            true,
        )
    }

    /// Decode the cspec `<funcptr align="N"/>` element into [`funcptr_align`]
    /// (C++ `Architecture::decodeFuncPtrAlign`, `architecture.cc:1048`,
    /// dispatched from `parseCompilerConfig`'s `ELEM_FUNCPTR` arm).
    ///
    /// The XML `align` attribute is a byte alignment (`2` for ARM word-aligned
    /// function pointers whose least-significant bit encodes the Thumb mode);
    /// `funcptr_align` stores the *bit position* of its first set bit (so
    /// `align="2"` → `funcptr_align = 1`), exactly as the C++ `while((align&1)==0)`
    /// loop computes.  An absent element leaves `funcptr_align = 0` (no alignment),
    /// matching the C++ default.  General over any cspec — no processor special-
    /// casing.  Feeds the unlace GH-8471 `RulePtrsubUndo` thumb-funcptr guard (and
    /// the already-ported `RuleFuncPtrEncoding`/jumptable readers of this field).
    ///
    /// [`funcptr_align`]: Architecture::funcptr_align
    fn decode_funcptr_align(&mut self) -> UnlaceResult<()> {
        use unlace_base::xml::DocumentStorage;
        let Some(xml) = self.cspec_xml.clone() else {
            return Ok(()); // no cspec recorded: leave funcptr_align = 0
        };
        let mut store = DocumentStorage::new();
        let root = store.parse_document(&xml)?.get_root().clone();
        // The resolved .cspec root IS <compiler_spec>; <funcptr> is a direct child.
        let Some(fp) = find_child(&root, "funcptr") else {
            return Ok(()); // no <funcptr> in this cspec: funcptr_align stays 0
        };
        let align: i64 = match attr_str(&fp, "align").and_then(|s| parse_int(&s)) {
            Some(a) => a as i64,
            None => return Ok(()), // malformed/absent attr: leave default
        };
        if align == 0 {
            self.funcptr_align = 0; // No alignment
            return Ok(());
        }
        // bits = position of the first set bit (C++ `while((align&1)==0) bits++`).
        let mut bits: int4 = 0;
        let mut a = align;
        while (a & 1) == 0 {
            bits += 1;
            a >>= 1;
        }
        self.funcptr_align = bits;
        Ok(())
    }

    /// Interpret a constant as a pointer into `spc` (C++ `Architecture::
    /// resolveConstant`, viewed as an `AddrSpaceManager`).  A thin wrapper over the
    /// shared engine manager so callers that hold `&self` (not the manager) can run
    /// the resolve — the per-function `glb` carries its own
    /// [`resolve_constant`](crate::context::ArchContext::resolve_constant), this is
    /// the architecture-side analogue used while building `inferPtrSpaces`.
    pub fn resolve_constant(
        &self,
        spc: &Rc<AddrSpace>,
        val: uintb,
        sz: int4,
        point: &Address,
        full_encoding: &mut uintb,
    ) -> UnlaceResult<Address> {
        if let Some(seg) = self.segment_def(spc.get_index()) {
            return Ok(seg.resolve(val, sz, point, full_encoding, |mem, at| {
                self.with_context_db(|db| db.get_tracked_value(mem, at))
            }));
        }
        self.manage()
            .resolve_constant(spc, val, sz, point, full_encoding)
    }

    /// Compile each registered `<segmentop>` into a [`SegmentDef`] and apply
    /// the option (the unlace half of C++ `initializeSegments`; the resolvers it
    /// installs live in the per-function snapshot).  A segment op whose snippet
    /// has no local template (ghidra mode) is left out.
    ///
    /// [`SegmentDef`]: crate::segmentize::SegmentDef
    fn initialize_segments(&mut self) -> UnlaceResult<()> {
        let mut states = std::mem::take(&mut self.unlace_states);
        let built = (crate::architecture::default_pass_hooks().segmentize_build)(
            self,
            self.translate.manager_rc(),
            &self.opbehaviors,
            &mut states,
        );
        self.unlace_states = states;
        built?;
        self.apply_segmentize();
        Ok(())
    }

    /// Put the boot-time effects of the segment ops in place: the near-pointer
    /// marking of each inferable space with a resolvable segment op (C++
    /// `cacheAddrSpaceProperties` -> `markNearPointers`) and the far-pointer
    /// data organization of the default data space (C++ `TypeFactory::setupSizes`).
    pub fn apply_segmentize(&mut self) {
        if !self.has_segment_defs() {
            return;
        }
        for spc in self.infer_ptr_spaces.clone() {
            let Some(seg) = self
                .segment_def(spc.get_index())
                .filter(|s| s.has_resolve())
            else {
                continue;
            };
            self.manage().mark_near_pointers(&spc, seg.innerinsize);
        }
        let data_seg = self
            .manage()
            .get_default_data_space()
            .and_then(|spc| self.segment_def(spc.get_index()))
            .filter(|s| s.has_resolve() && s.supportsfarpointer)
            .cloned();
        if let Some(seg) = data_seg {
            self.types.set_size_of_pointer(seg.innerinsize);
            self.types
                .set_size_of_alt_pointer(seg.innerinsize + seg.baseinsize);
        }
    }

    /// Determine the minimum pointer size for each space and set up the ordered,
    /// filtered, deduplicated list of inferable spaces (C++
    /// `Architecture::cacheAddrSpaceProperties`, architecture.cc:671-707).
    ///
    /// Inferable spaces are the default code+data spaces plus anything the cspec
    /// `<global>` tag pushed onto `infer_ptr_spaces` (via [`decode_global`]), minus
    /// register spaces (`getDelay() == 0`), spacebase spaces, OTHER spaces, and
    /// overlays.  The list is sorted by space index and deduplicated, then the
    /// default *data* space is promoted to position 0 (so it is the first space a
    /// likely-pointer constant is tested against — the load-bearing line for the
    /// x86-64 global arrays this wave targets, whose `myarray`/`paiGlob` live in
    /// `ram`, the default data space).
    ///
    /// LOSS: the C++ segment-op near-pointer promotion (architecture.cc:696-700,
    /// `getSegmentOp(spc)` -> `markNearPointers`) is not transcribed — no
    /// `getSegmentOp(space)` lookup is wired here and no datatest exercises a
    /// segmented near-pointer space (x86 real-mode `seg:off`); for the flat
    /// spaces this wave's targets use, `getSegmentOp` is always null and the
    /// loop is a no-op.  General over any processor's cspec: the spaces are read
    /// from the manager and the cspec, with NO processor-name special-casing.
    ///
    /// [`decode_global`]: Architecture::decode_global
    pub fn cache_addr_space_properties(&mut self) {
        use unlace_base::space::spacetype;
        // copyList = inferPtrSpaces; push default code + data spaces.
        let mut copy_list: Vec<Rc<AddrSpace>> = self.infer_ptr_spaces.clone();
        let code_spc = self.manage().get_default_code_space().cloned();
        let data_spc = self.manage().get_default_data_space().cloned();
        if let Some(spc) = code_spc {
            copy_list.push(spc); // Make sure the default code space is present
        }
        if let Some(ref spc) = data_spc {
            copy_list.push(Rc::clone(spc)); // Make sure the default data space is present
        }
        self.infer_ptr_spaces.clear();
        // sort(copyList, AddrSpace::compareByIndex)
        copy_list.sort_by(|a, b| {
            if AddrSpace::compare_by_index(a, b) {
                std::cmp::Ordering::Less
            } else if AddrSpace::compare_by_index(b, a) {
                std::cmp::Ordering::Greater
            } else {
                std::cmp::Ordering::Equal
            }
        });
        let mut last_space: Option<Rc<AddrSpace>> = None;
        for spc in copy_list.into_iter() {
            if let Some(ref last) = last_space {
                if Rc::ptr_eq(last, &spc) {
                    continue; // dedup (sorted)
                }
            }
            last_space = Some(Rc::clone(&spc));
            if spc.get_delay() == 0 {
                continue; // Don't put in a register space
            }
            if spc.get_type() == spacetype::IPTR_SPACEBASE {
                continue;
            }
            if spc.is_other_space() {
                continue;
            }
            if spc.is_overlay() {
                continue;
            }
            self.infer_ptr_spaces.push(spc);
        }

        // Promote the default DATA space to position 0 (the inferring default).
        // (The C++ segment-op near-pointer markNearPointers loop is a LOSS here;
        // the defPos search still runs so the data space leads.)
        let mut def_pos: i32 = -1;
        if let Some(ref data) = data_spc {
            for (i, spc) in self.infer_ptr_spaces.iter().enumerate() {
                if Rc::ptr_eq(spc, data) {
                    def_pos = i as i32;
                    break;
                }
            }
        }
        if def_pos > 0 {
            self.infer_ptr_spaces.swap(0, def_pos as usize);
        }
    }

    /// Decode the cspec `<global>` element and seed the global scope's owned
    /// range tree (C++ `Architecture::decodeGlobal` + `addToGlobalScope`,
    /// `architecture.cc:816-848`, dispatched from `parseCompilerConfig`'s
    /// `ELEM_GLOBAL` arm at `architecture.cc:1276-1277` and the deferred
    /// `globalRanges` apply loop at `architecture.cc:1336-1337`).
    ///
    /// Each child `<range>`/`<register>` decodes to a [`RangeProperties`]; an
    /// empty `<range space="ram"/>` (no `first`/`last`) widens to the whole space
    /// (`Range::from_properties` sets `last = spc->getHighest()` when `seenLast`
    /// is false).  The resulting `Range` is added to the global scope's rangetree
    /// via `symboltab->addRange(globalScope, spc, first, last)`.
    ///
    /// This is THE boundary the revisit / global-persist path depends on: with the
    /// global scope owning the `ram` range, `Scope::queryProperties`'s `inScope`
    /// discovery branch (database.cc:1276-1281) returns
    /// `mapped | addrtied | persist` for any RAM Varnode with no covering Symbol,
    /// so global RAM stores survive `ActionDeadCode` and hold their call
    /// `INDIRECT`s.
    ///
    /// LOSS: the C++ overlay-space duplication (`addToGlobalScope`,
    /// architecture.cc:838-846) and the `inferPtrSpaces` push (architecture.cc:836,
    /// a pointer-inference stub) are not transcribed — no datatest exercises an
    /// overlay base space here, and `inferPtrSpaces` feeds only `TypeFactory`
    /// pointer inference (a separate stub).  General over any processor's cspec:
    /// the space names are read from the XML and resolved through the engine, with
    /// NO processor-name special-casing.
    /// (unlace `goreg`) Name and type the golang cspec's goroutine register.
    ///
    /// Mirrors `decode_global`'s `<register>` arm — the register's storage
    /// joins the global scope — then maps a type+name-locked `g` symbol typed
    /// `runtime.g *` over it (`crate::goreg`). Gated on the golang cspec
    /// being the active compiler spec (the `archid` compiler field); a
    /// no-register golang target (x86-32 reaches `g` through TLS) and every
    /// other image are untouched.
    fn unlace_install_goreg(&mut self) -> UnlaceResult<()> {
        let Some(reg) =
            (self.pass_hooks().goreg_goroutine_register)(&self.archid, self.go_version())
        else {
            return Ok(());
        };
        let scope = match self.symboltab.get_global_scope() {
            Some(s) => s,
            None => return Ok(()),
        };
        let point = self.get_register_varnode(reg.as_bytes())?;
        let Some(spc) = point.space.clone() else {
            return Ok(());
        };
        let first = point.offset;
        let last = first.wrapping_sub(1).wrapping_add(u64::from(point.size));
        self.infer_ptr_spaces.push(Rc::clone(&spc));
        self.symboltab
            .add_range(scope, Rc::clone(&spc), first, last);
        let gptr = (crate::architecture::default_pass_hooks().goreg_g_pointer_type)(
            self.types(),
            self.go_layout(),
        )?;
        let addr = Address::new(spc, first);
        let (sid, _eref) =
            self.symboltab
                .add_symbol_mapped(scope, "g", gptr, &addr, &Address::new_invalid())?;
        self.symboltab
            .set_attribute(sid, (self.pass_hooks().goreg_g_symbol_flags)());
        Ok(())
    }

    fn decode_global(&mut self) -> UnlaceResult<()> {
        use unlace_base::address::{Range, RangeProperties};
        use unlace_base::marshal::{IdRegistry, XmlDecode};
        use unlace_base::xml::DocumentStorage;

        let Some(xml) = self.cspec_xml.clone() else {
            return Ok(()); // no cspec recorded: nothing to seed
        };
        let mut store = DocumentStorage::new();
        let root = store.parse_document(&xml)?.get_root().clone();
        // The resolved .cspec root IS <compiler_spec>; <global> is a direct child.
        let Some(global_el) = find_child(&root, "global") else {
            // No <global> in this cspec: the global scope owns no ranges (C++
            // never reaches addToGlobalScope for such a spec).
            return Ok(());
        };

        // C++ `Architecture::decodeGlobal`: openElement(GLOBAL); while
        // peekElement() != 0 { rangeProps.emplace_back(); rangeProps.back().decode(decoder); }
        // We decode the children directly (the unlace-base `RangeProperties::decode`
        // is a `Decoder` consumer, identical to C++).  Each `<range>`/`<register>`
        // becomes a `RangeProperties`, then `addToGlobalScope`'s `Range(props,this)`
        // + `symboltab->addRange`.
        let manager = self.translate.manager_rc();
        let registry = IdRegistry::with_base_ids();
        let scope = match self.symboltab.get_global_scope() {
            Some(s) => s,
            None => return Ok(()), // no global scope attached (degrade gracefully)
        };
        // Collect the resolved (space, first, last) triples first, so the register
        // arm can borrow `self.translate` (via `get_register_varnode`) before the
        // `&mut self.symboltab.add_range` below.
        let mut to_add: Vec<(Rc<AddrSpace>, uintb, uintb)> = Vec::new();
        for child in global_el.get_children().iter() {
            let nm = child.get_name();
            if nm == "register" {
                // C++ `Range::Range` register branch (address.cc:239-245).
                // We resolve through the Translate (the reliably-installed register
                // lookup, the same path decode_stack_pointer uses) rather than
                // unlace-base's `Range::from_properties`, whose `manage.register_lookup()`
                // is not wired in every fixture.  `name` carries the register name.
                let reg_name = match attr_str(child, "name") {
                    Some(n) => n,
                    None => continue,
                };
                let point = self.get_register_varnode(reg_name.as_bytes())?;
                let spc = match point.space.clone() {
                    Some(s) => s,
                    None => continue, // null register space (C++ UB) — skip defensively
                };
                let first = point.offset;
                // last = (first-1) + point.size, uintb wraparound (address.cc:244).
                let last = first.wrapping_sub(1).wrapping_add(u64::from(point.size));
                to_add.push((spc, first, last));
            } else if nm == "range" {
                // C++ `Range::Range` range branch: resolve the space, widen the
                // empty form to spc->getHighest().  No register lookup needed.
                // A range over a space that only a cspec `<spacebase>` declares
                // (not modelled here) is skipped rather than failing the load.
                if let Some(space_name) = attr_str(child, "space") {
                    if self.manage().get_space_by_name(&space_name).is_none() {
                        continue;
                    }
                }
                let mut decoder = XmlDecode::new_with_root(&manager, &registry, child, 0);
                let mut props = RangeProperties::new();
                props.decode(&mut decoder)?;
                let range = Range::from_properties(&props, self.manage())?;
                to_add.push((
                    Rc::clone(range.get_space()),
                    range.get_first(),
                    range.get_last(),
                ));
            }
            // (Any other child element is ignored, exactly as C++
            // RangeProperties::decode accepts only <range>/<register>.)
        }
        // C++ `addToGlobalScope`: symboltab->addRange(globalScope, spc, first, last)
        // for each resolved range, AND inferPtrSpaces.push_back(spc)
        // (architecture.cc:836 — the LOSS-208 F1 site the global-persist2 wave left
        // un-transcribed).  cacheAddrSpaceProperties (run from postSpecFile after
        // this) then sorts/filters/dedups the pushed spaces.
        for (spc, first, last) in to_add {
            self.infer_ptr_spaces.push(Rc::clone(&spc));
            self.symboltab.add_range(scope, spc, first, last);
        }
        Ok(())
    }

    /// Decode the cspec `<callfixup>` elements into the p-code injection library
    /// (C++ `parseCompilerConfig` -> `ELEM_CALLFIXUP` ->
    /// `pcodeinjectlib->decodeInject(archid+" : compiler spec","",CALLFIXUP_TYPE,decoder)`,
    /// `architecture.cc:1291`).  After this every cspec-defined call-fixup is
    /// registered (and resolvable by `getPayloadId(CALLFIXUP_TYPE,name)`), so the
    /// console `fixup apply <fixup> <function>` command can find it.
    ///
    /// The SLEIGH compile of each fixup body (`parseInject`) stays deferred
    /// (LOSS-031); only the decode/registration runs here, which is all
    /// `getPayloadId`/`setInjectId` need.  General over any processor's cspec.
    fn decode_call_fixups(&mut self) -> UnlaceResult<()> {
        use unlace_base::marshal::{IdRegistry, XmlDecode};
        use unlace_base::xml::DocumentStorage;

        let Some(xml) = self.cspec_xml.clone() else {
            return Ok(());
        };
        let mut store = DocumentStorage::new();
        let root = store.parse_document(&xml)?.get_root().clone();
        // Gather the <callfixup> children (the cspec root IS <compiler_spec>).
        let fixups: Vec<Rc<unlace_base::xml::Element>> = root
            .get_children()
            .iter()
            .filter(|c| c.get_name() == "callfixup")
            .cloned()
            .collect();
        if fixups.is_empty() {
            return Ok(());
        }
        // The injection element/attribute ids the payload decode reads
        // (callfixup/pcode/body/target/name/...).
        let manager = self.translate.manager_rc();
        let mut registry = IdRegistry::with_base_ids();
        crate::pcodeinject::register_ids(&mut registry);
        for fixup in fixups.iter() {
            let mut decoder = XmlDecode::new_with_root(&manager, &registry, fixup, 0);
            // C++ src = archid+" : compiler spec"; the unlace engine carries no archid
            // string here, so the source label is the constant suffix (only surfaces
            // in error messages / debug dumps, never in test output).
            self.pcodeinjectlib.decode_inject(
                b" : compiler spec",
                b"",
                crate::pcodeinject::CALLFIXUP_TYPE,
                &mut decoder,
            )?;
        }
        Ok(())
    }

    /// (unlace) Register the models of the MSVC x87 intrinsics
    /// (`p4_calls::x87intrinsic`). x86-32 only: the models name `ST0`/`ST1`,
    /// and the intrinsics exist nowhere else. Skipped when the registry already
    /// holds the one-operand model.
    fn register_unlace_x87_intrinsic_model(&mut self, root: &Rc<unlace_base::xml::Element>) {
        let code_addr_size = self
            .manage()
            .get_default_code_space()
            .map(|s| s.get_addr_size() as int4)
            .unwrap_or(0);
        let resolve = |nm: &[u8]| self.translate.probe_register_varnode(nm).is_some();
        if !(crate::architecture::default_pass_hooks().msvcftol_language_is_x86_32)(
            &resolve,
            code_addr_size,
        ) || self
            .proto_models
            .contains_key(crate::specnames::X87_UNARY_MODEL)
        {
            return;
        }
        let mut decoded = Vec::new();
        let _ = (crate::architecture::default_pass_hooks().x87intrinsic_decode_prototype)(
            &mut |proto| {
                decoded.extend(self.decode_proto_model(proto, root).ok());
                Ok(())
            },
        );
        for model in decoded {
            self.register_model(Rc::new(model));
        }
    }

    /// (unlace) Register the synthesized MSVC `__ftol`-family call-fixup
    /// (`p2_lift::msvcftol`), the arithmetic runtime-helper fixups
    /// (`p2_lift::arithhelpers`) and the ObjC ARC fixups
    /// (`p2_lift::objcarc`) alongside the cspec's own `<callfixup>`
    /// elements, so `parse_inject_all` compiles them with the rest.  A registered
    /// payload is inert until the analysis-tier `callfixup` pass installs it at
    /// `read symbols`.
    ///
    /// The `__ftol` fixup is guarded to x86-32 because the body names `ST0..ST7`/`EAX`/`EDX`/`ESP`: on
    /// a language without them the SLEIGH snippet compile would fail at
    /// bootstrap, and `_ftol` exists on no other target.
    ///
    /// Skipped entirely in ghidra mode, exactly as `register_cortexmpriv_fixup`
    /// is: with no local `.sla`, step 3 never compiles the payload, so the
    /// registration could not pay off there anyway.
    fn decode_unlace_call_fixups(&mut self) -> UnlaceResult<()> {
        use unlace_base::marshal::{IdRegistry, XmlDecode};

        if self.translate.as_sleigh().is_none() {
            return Ok(());
        }
        let code_space = self.manage().get_default_code_space();
        let code_addr_size = code_space
            .as_ref()
            .map(|s| s.get_addr_size() as int4)
            .unwrap_or(0);
        let big_endian = code_space
            .as_ref()
            .map(|s| s.is_big_endian())
            .unwrap_or(false);
        let resolve = |nm: &[u8]| self.translate.probe_register_varnode(nm).is_some();
        let ftol = (crate::architecture::default_pass_hooks().msvcftol_language_is_x86_32)(
            &resolve,
            code_addr_size,
        );
        let helpers = (crate::architecture::default_pass_hooks().arithhelpers_helper_abi)(
            &resolve,
            code_addr_size,
            big_endian,
        );
        let objc_arc = (crate::architecture::default_pass_hooks().objcarc_payload_xml)(
            &resolve,
            code_addr_size,
        );
        if !ftol && helpers.is_none() && objc_arc.is_none() {
            return Ok(());
        }
        let manager = self.translate.manager_rc();
        let mut registry = IdRegistry::with_base_ids();
        crate::pcodeinject::register_ids(&mut registry);
        let mut register = |root: &Rc<unlace_base::xml::Element>| {
            let mut decoder = XmlDecode::new_with_root(&manager, &registry, root, 0);
            self.pcodeinjectlib.decode_inject(
                b" : unlace compiler helpers",
                b"",
                crate::pcodeinject::CALLFIXUP_TYPE,
                &mut decoder,
            )?;
            Ok(())
        };
        if let Some(xml) = objc_arc {
            (crate::architecture::default_pass_hooks().objcarc_decode_payload)(
                &xml,
                &mut register,
            )?;
        }
        if ftol {
            (crate::architecture::default_pass_hooks().msvcftol_decode_payload)(&mut register)?;
        }
        if let Some(abi) = helpers {
            (crate::architecture::default_pass_hooks().arithhelpers_decode_payloads)(
                abi,
                &mut register,
            )?;
        }
        Ok(())
    }

    /// Initialize the user-op table and decode the cspec `<callotherfixup>`
    /// elements, then compile every registered injection body (C++
    /// `restoreFromSpec`: `userops.initialize(this)` at architecture.cc:641, plus
    /// the `<callotherfixup>` dispatch in `parseCompilerConfig` →
    /// `userops.decodeCallOtherFixup(decoder,this)` at architecture.cc:1294).
    ///
    /// `userops.initialize` assigns every translator-presented user-op a default
    /// `UnspecializedPcodeOp` description (so e.g. MIPS `setISAMode` has an index
    /// and name); each `<callotherfixup>` then *overrides* that base entry with an
    /// `InjectedUserOp` carrying the compiled fixup p-code.  The compile
    /// (`parseInject`) runs last, once the whole inject library is registered, so
    /// the per-payload temporary-register base advances exactly as the C++.
    ///
    /// The `&mut self` borrow needed as `UseropArchitecture` aliases
    /// `self.userops`, so the manager is moved out with `mem::take`, driven
    /// against the rest of `self` (which still owns `pcodeinjectlib`), then
    /// restored — the established split-borrow convention.
    fn init_userops_and_fixups(&mut self) -> UnlaceResult<()> {
        use unlace_base::marshal::{IdRegistry, XmlDecode};
        use unlace_base::xml::DocumentStorage;

        // 1. userops.initialize(this): default UnspecializedPcodeOp per translator
        //    user-op name.
        let mut userops = std::mem::take(&mut self.userops);
        let init_res = userops.initialize(self);
        if let Err(e) = init_res {
            self.userops = userops;
            return Err(e);
        }

        // 1b. parseProcessorConfig ELEM_SEGMENTOP (architecture.cc:1195):
        //     userops.decodeSegmentOp(decoder,this) for each pspec `<segmentop>`.
        let pspec = self.pspec_xml.clone();
        if let Err(e) = self.decode_segment_ops(&mut userops, pspec.as_deref(), "processor_spec") {
            self.userops = userops;
            return Err(e);
        }

        // 2. parseCompilerConfig: dispatch each cspec `<callotherfixup>` child to
        //    userops.decodeCallOtherFixup(decoder,this).
        let fixup_res = (|| -> UnlaceResult<()> {
            let Some(xml) = self.cspec_xml.clone() else {
                return Ok(());
            };
            let mut store = DocumentStorage::new();
            let root = store.parse_document(&xml)?.get_root().clone();
            let fixups: Vec<Rc<unlace_base::xml::Element>> = root
                .get_children()
                .iter()
                .filter(|c| c.get_name() == "callotherfixup")
                .cloned()
                .collect();
            if fixups.is_empty() {
                return Ok(());
            }
            let manager = self.translate.manager_rc();
            let mut registry = IdRegistry::with_base_ids();
            crate::pcodeinject::register_ids(&mut registry);
            crate::userop::register_ids(&mut registry);
            for fixup in fixups.iter() {
                let mut decoder = XmlDecode::new_with_root(&manager, &registry, fixup, 0);
                userops.decode_call_other_fixup(&mut decoder, self)?;
            }
            Ok(())
        })();
        let fixup_res = fixup_res.and_then(|()| {
            // C++ `parseProcessorConfig`'s ELEM_JUMPASSIST branch
            // (`userops.decodeJumpAssist`): the Dalvik and JVM switch scripts.
            let Some(xml) = self.pspec_xml.clone() else {
                return Ok(());
            };
            let mut store = DocumentStorage::new();
            let root = store.parse_document(&xml)?.get_root().clone();
            let assists: Vec<Rc<unlace_base::xml::Element>> = root
                .get_children()
                .iter()
                .filter(|c| c.get_name() == "jumpassist")
                .cloned()
                .collect();
            let manager = self.translate.manager_rc();
            let mut registry = IdRegistry::with_base_ids();
            crate::pcodeinject::register_ids(&mut registry);
            crate::userop::register_ids(&mut registry);
            for assist in assists.iter() {
                let mut decoder = XmlDecode::new_with_root(&manager, &registry, assist, 0);
                userops.decode_jump_assist(&mut decoder, self)?;
            }
            Ok(())
        });
        // parseCompilerConfig ELEM_SEGMENTOP (architecture.cc:1273): the cspec's.
        let fixup_res = fixup_res.and_then(|()| {
            let cspec = self.cspec_xml.clone();
            self.decode_segment_ops(&mut userops, cspec.as_deref(), "compiler_spec")
        });
        self.userops = userops;
        fixup_res?;

        // 2b. (unlace `cortexmpriv`) Register the synthesized
        //     `isCurrentModePrivileged` callother-fixup alongside the cspec's own,
        //     so step 3 compiles it with the rest. Unconditional on any language
        //     that declares the user-op (the option is not readable at bootstrap);
        //     `decompile_drive::is_injected_userop` is the gate. See
        //     `p2_lift::cortexmpriv`.
        self.register_cortexmpriv_fixup()?;
        self.register_octeon_upstream_fixups()?;

        // 3. parseInject: compile every registered injection body (callfixup +
        //    callotherfixup) into a ConstructTpl against the loaded language.
        //    Move the inject library out so the &Sleigh (SnippetLanguageProvider)
        //    borrow of self.translate does not alias the &mut library.
        let mut lib = std::mem::take(&mut self.pcodeinjectlib);
        // The SnippetLanguage is the loaded `SleighBase`; drive parse_inject over
        // it (the &SleighBase read does not alias the &mut library).  Injection
        // compilation is a Sleigh-engine concern, so reach the concrete engine's
        // `SleighBase` through the downcast (only `Sleigh` implements the boundary).
        //
        // In ghidra mode there is no local `.sla` to compile snippets against —
        // the host supplies inject p-code on demand via a `getPcodeInject` query
        // (C++ `PcodeInjectLibraryGhidra`), reached through
        // `EngineTranslate::fetch_inject_pcode` at the two `get_tpl` consumers in
        // `infra::decompile_drive`.  Registration must still happen here: it is
        // what populates the name->id maps and the incidentalcopy/paramshift
        // metadata both paths read.  The guard is a no-op on the standalone path,
        // where `as_sleigh()` is always `Some`.
        let parse_res = match self.translate.as_sleigh() {
            Some(sleigh) => lib.parse_inject_all(sleigh.base()),
            None => Ok(()),
        };
        self.pcodeinjectlib = lib;
        if parse_res.is_ok() {
            let hooks = crate::architecture::default_pass_hooks();
            (hooks.callmechanisms_load)(self);
            (hooks.jumpassist_load)(self);
        }
        parse_res
    }

    /// Register each `<segmentop>` child of the spec document `xml` (root
    /// `root_name`) as a [`SegmentOp`](crate::userop::SegmentOp) (C++
    /// `UserOpManage::decodeSegmentOp`).  The `<pcode>` snippet joins the inject
    /// library and is compiled with the rest by `parse_inject_all`.  Skipped in
    /// ghidra mode, which has no local `.sla` to compile the snippet against.
    fn decode_segment_ops(
        &mut self,
        userops: &mut UserOpManage,
        xml: Option<&[u8]>,
        root_name: &str,
    ) -> UnlaceResult<()> {
        use unlace_base::marshal::{IdRegistry, XmlDecode};
        use unlace_base::xml::DocumentStorage;
        let Some(xml) = xml else { return Ok(()) };
        if self.translate.as_sleigh().is_none() {
            return Ok(());
        }
        let mut store = DocumentStorage::new();
        let root = store.parse_document(xml)?.get_root().clone();
        let spec = if root.get_name() == root_name {
            root
        } else {
            match find_child(&root, root_name) {
                Some(el) => el,
                None => return Ok(()),
            }
        };
        let segops: Vec<Rc<unlace_base::xml::Element>> = spec
            .get_children()
            .iter()
            .filter(|c| c.get_name() == "segmentop")
            .cloned()
            .collect();
        if segops.is_empty() {
            return Ok(());
        }
        let manager = self.translate.manager_rc();
        let mut registry = IdRegistry::with_base_ids();
        crate::pcodeinject::register_ids(&mut registry);
        crate::userop::register_ids(&mut registry);
        for el in segops.iter() {
            let mut decoder = XmlDecode::new_with_root(&manager, &registry, el, 0);
            userops.decode_segment_op(&mut decoder, self)?;
        }
        Ok(())
    }

    /// (unlace `cortexmpriv`) Install the `isCurrentModePrivileged` callother-fixup
    /// that reports privileged, parking its inject id on
    /// [`cortexmpriv_inject`](Self::cortexmpriv_inject).
    ///
    /// A no-op in ghidra mode (no local `.sla` to compile the body against), on
    /// any language whose translator does not present the user-op (everything but
    /// ARM), and on one where a compiler spec already specialized it — the cspec's
    /// own `<callotherfixup>` wins, exactly as it does for the vendored
    /// `setISAMode` fixups.
    fn register_cortexmpriv_fixup(&mut self) -> UnlaceResult<()> {
        use crate::specnames as names;
        if let Some(injectid) = self.register_manual_fixup(
            names::CORTEXMPRIV_USEROP,
            names::CORTEXMPRIV_OUTPUT,
            &[],
            names::CORTEXMPRIV_SNIPPET,
            false,
        )? {
            self.cortexmpriv_inject = Some(injectid);
        }
        Ok(())
    }

    /// (unlace `octeoneffects`) Register a callother fixup holding upstream's
    /// lifting for each Octeon reservation and ordering operation the language
    /// declares unspecialized ([`crate::octeonops::UPSTREAM`]), as
    /// step 2b does for `cortexmpriv`; `decompile_drive::is_injected_userop`
    /// applies them only under `option octeoneffects off`.
    fn register_octeon_upstream_fixups(&mut self) -> UnlaceResult<()> {
        self.octeon_upstream_inject.clear();
        for fixup in crate::octeonops::UPSTREAM {
            let inputs: Vec<Vec<u8>> = fixup.inputs.iter().map(|input| input.to_vec()).collect();
            if let Some(injectid) =
                self.register_manual_fixup(fixup.name, fixup.output, &inputs, fixup.body, true)?
            {
                self.octeon_upstream_inject.push(injectid);
            }
        }
        Ok(())
    }

    /// (unlace) Make `body` the callother fixup of the unspecialized user-op `name`
    /// and return its inject id; `named` registers the payload under `name`
    /// rather than C++'s shared "unknown". Returns `None`, leaving the op as it
    /// is, when the language does not declare it or a compiler spec already
    /// specialized it, and in ghidra mode: with no local `.sla`, step 3 cannot
    /// compile the body, and an injected user-op with a null template is a hard
    /// decompile error.
    fn register_manual_fixup(
        &mut self,
        name: &[u8],
        output: &[u8],
        inputs: &[Vec<u8>],
        body: &[u8],
        named: bool,
    ) -> UnlaceResult<Option<int4>> {
        if self.translate.as_sleigh().is_none()
            || !self
                .userops
                .get_op_by_name(name)
                .is_some_and(|op| op.is_unspecialized())
        {
            return Ok(None);
        }
        let injectid = if named {
            self.pcodeinjectlib
                .manual_call_other_fixup_named(name, output, inputs, body)?
        } else {
            self.pcodeinjectlib
                .manual_call_other_fixup(name, output, inputs, body)?
        };
        let mut userops = std::mem::take(&mut self.userops);
        let res = userops.manual_call_other_fixup(name, injectid);
        self.userops = userops;
        res?;
        Ok(Some(injectid))
    }

    /// (unlace) Register the fixed set of string-copy builtin user-ops into
    /// `userops` so the printer's `opCallother` path resolves their name,
    /// display, and typed parameters.  Mirrors the lazy
    /// `userops.registerBuiltin(BUILTIN_*)` calls in `ArraySequence::buildStringCopy`
    /// and `Funcdata::getInternalString` (C++ does these on demand during the
    /// transform; the unlace ArchContext can't reach the real `userops`, so they are
    /// front-loaded here).
    fn register_string_builtins(&mut self) -> UnlaceResult<()> {
        use crate::userop::{
            BUILTIN_ABS, BUILTIN_ALLOCA, BUILTIN_BITREV, BUILTIN_BSWAP, BUILTIN_CTZ,
            BUILTIN_KERNEL_BUG, BUILTIN_KERNEL_WARN, BUILTIN_LABS, BUILTIN_MEMCMP, BUILTIN_MEMCPY,
            BUILTIN_MEMSET, BUILTIN_MEMSET16, BUILTIN_MEMSET32, BUILTIN_MEMSET64, BUILTIN_ROTL,
            BUILTIN_STRCPY, BUILTIN_STRINGDATA, BUILTIN_STRLEN, BUILTIN_STRNCPY,
            BUILTIN_SYSCALL_ERROR, BUILTIN_VA_START, BUILTIN_VAARG, BUILTIN_VOLATILE_READ,
            BUILTIN_VOLATILE_WRITE, BUILTIN_WCSNCPY,
        };
        // Split the &mut userops borrow from the &self type-factory read by
        // building a small adapter over the (already-populated) factory.
        let adapter = BuiltinTypeArch {
            types: Rc::clone(&self.types),
            data_word_size: self
                .manage()
                .get_default_data_space()
                .map(|s| s.get_word_size() as int4)
                .unwrap_or(1),
        };
        let mut userops = std::mem::take(&mut self.userops);
        let res = (|| -> UnlaceResult<()> {
            userops.register_builtin(BUILTIN_STRINGDATA, &adapter)?;
            // The volatile builtins (`read_volatile`/`write_volatile`) are
            // registered lazily by `Funcdata::replaceVolatile`'s
            // `glb->userops.registerBuiltin(...)` in C++ (userop.cc:444-448); the
            // call is idempotent and only populates `builtinmap` so the print pass
            // can resolve the CALLOTHER index to its operator name.  They carry no
            // type-factory dependency, so pre-seeding them here is behaviorally
            // equivalent and keeps `replaceVolatile` free of an `&mut glb` borrow.
            userops.register_builtin(BUILTIN_VOLATILE_READ, &adapter)?;
            userops.register_builtin(BUILTIN_VOLATILE_WRITE, &adapter)?;
            userops.register_builtin(BUILTIN_MEMCPY, &adapter)?;
            userops.register_builtin(BUILTIN_STRNCPY, &adapter)?;
            userops.register_builtin(BUILTIN_WCSNCPY, &adapter)?;
            // (unlace GH-9230/1537) the constant-fill recovery CALLOTHER.
            userops.register_builtin(BUILTIN_MEMSET, &adapter)?;
            // (unlace syscallregs) the MIPS/PowerPC system-call failure flag.
            userops.register_builtin(BUILTIN_SYSCALL_ERROR, &adapter)?;
            // (unlace strlenscan) the length an inline `repnz scasb` computes.
            userops.register_builtin(BUILTIN_STRLEN, &adapter)?;
            for (id, name) in (self.pass_hooks().lanefuse_builtins)() {
                userops.register_named_builtin(id, &name);
            }
            let named: Vec<(unlace_base::types::uint4, Vec<u8>)> = userops
                .named_ops()
                .map(|(i, nm)| (i, nm.to_vec()))
                .collect();
            for (id, name) in (crate::architecture::default_pass_hooks().lanefuse_mask_builtins)(
                &mut named.iter().map(|(i, nm)| (*i, nm.as_slice())),
            ) {
                userops.register_named_builtin(id, &name);
            }
            // (unlace itaniumeh, swiftcall) the exceptional-edge test, the pad values
            // and the Swift error register.
            for id in [
                crate::userop::BUILTIN_EH_UNWINDING,
                crate::userop::BUILTIN_EH_EXCEPTION,
                crate::userop::BUILTIN_EH_SELECTOR,
                crate::userop::BUILTIN_SWIFT_ERROR,
                crate::userop::BUILTIN_SWIFT_THROW,
                // (unlace javatry) the DEX try dispatch, exceptional edge and caught value.
                crate::userop::BUILTIN_JAVA_TRY,
                crate::userop::BUILTIN_JAVA_THROWS,
                crate::userop::BUILTIN_JAVA_CAUGHT,
            ] {
                userops.register_builtin(id, &adapter)?;
            }
            // (unlace bitidioms) byte swap and rotate.
            userops.register_builtin(BUILTIN_BSWAP, &adapter)?;
            userops.register_builtin(BUILTIN_ROTL, &adapter)?;
            // (unlace alloca, varargsave) the dynamic allocation and va_list set-up.
            userops.register_builtin(BUILTIN_ALLOCA, &adapter)?;
            userops.register_builtin(BUILTIN_VA_START, &adapter)?;
            // (unlace bitidioms, helperroles) abs, bit reverse, count trailing zeros, strcpy.
            userops.register_builtin(BUILTIN_ABS, &adapter)?;
            userops.register_builtin(BUILTIN_LABS, &adapter)?;
            userops.register_builtin(BUILTIN_BITREV, &adapter)?;
            userops.register_builtin(BUILTIN_CTZ, &adapter)?;
            userops.register_builtin(BUILTIN_STRCPY, &adapter)?;
            userops.register_builtin(BUILTIN_VAARG, &adapter)?;
            // (unlace satmul) the overflow-saturating multiply before operator new[].
            userops.register_builtin(crate::userop::BUILTIN_SATURATED_MUL, &adapter)?;
            // (unlace bitfieldarith) the pure-arithmetic bitfield get and set.
            userops.register_builtin(crate::userop::BUILTIN_BITFIELD_GET, &adapter)?;
            userops.register_builtin(crate::userop::BUILTIN_BITFIELD_SET, &adapter)?;
            // (unlace kernelbug) the Linux `__bug_table` trap statements.
            userops.register_builtin(BUILTIN_KERNEL_BUG, &adapter)?;
            userops.register_builtin(BUILTIN_KERNEL_WARN, &adapter)?;
            // (unlace repstring) the fills and the compare a repeated string
            // instruction prints as.
            for id in [
                BUILTIN_MEMSET16,
                BUILTIN_MEMSET32,
                BUILTIN_MEMSET64,
                BUILTIN_MEMCMP,
            ] {
                userops.register_builtin(id, &adapter)?;
            }
            // (unlace atomics) the locked and LSE read-modify-write builtins.
            for (id, _) in crate::userop::ATOMIC_BUILTINS {
                userops.register_builtin(id, &adapter)?;
            }
            for (id, ..) in crate::userop::MSVC_ATOMIC_BUILTINS {
                userops.register_builtin(id, &adapter)?;
            }
            for (id, ..) in crate::userop::C11_ATOMIC_BUILTINS {
                userops.register_builtin(id, &adapter)?;
            }
            Ok(())
        })();
        self.userops = userops;
        res
    }

    // -----------------------------------------------------------------------
    // Owned-subsystem accessors (the `glb->types`/`glb->print`/… surface the
    // ifacedecomp porter confirmed were absent — w9x-arch-engine-glue)
    // -----------------------------------------------------------------------

    /// (unlace) The load-time options this program was loaded with.
    pub fn load_options(&self) -> &crate::loadoptions::LoadOptions {
        &self.load_options
    }

    /// (unlace) Change a load-time option for this program's later analysis.
    pub fn load_options_mut(&mut self) -> &mut crate::loadoptions::LoadOptions {
        Rc::make_mut(&mut self.load_options)
    }

    /// (unlace) Put this program's load-time options in force on this thread until
    /// the scope drops, so the gates that run after the load read them. A
    /// program loaded with no options defers to the environment instead, so its
    /// gates read their variables live.
    pub fn load_scope(&self) -> crate::loadoptions::LoadScope {
        if self.load_options_from_env {
            crate::loadoptions::enter_environment()
        } else {
            crate::loadoptions::enter(Rc::clone(&self.load_options))
        }
    }

    /// (unlace) The image's Go toolchain release, when the load stated one.
    fn go_version(&self) -> Option<(u16, u16)> {
        if self.load_options_from_env {
            crate::loadoptions::env::go_version()
        } else {
            self.load_options.go_version
        }
    }

    /// (unlace `goreg`) The runtime layouts of the image's Go toolchain release.
    fn go_layout(&self) -> GoLayout {
        match self.go_version() {
            Some((major, minor)) => GoLayout::from_version(major, minor),
            None => GoLayout::baseline(),
        }
    }

    /// (unlace `goabi`) Make the stack model `abi0` the default of a golang-cspec
    /// image built before the register ABI reached its CPU.
    fn unlace_go_stack_default(&mut self) -> UnlaceResult<()> {
        if self.archid.ends_with(":golang")
            && self.proto_models.contains_key("abi0")
            && !(self.pass_hooks().goreg_register_abi)(&self.archid, self.go_version())
        {
            crate::options::ArchOptionContext::set_default_model(self, "abi0")?;
        }
        Ok(())
    }

    /// Borrow the data-type factory (C++ `glb->types`).
    #[inline]
    pub fn types(&self) -> &dyn TypeFactory {
        &*self.types
    }

    /// Borrow the concrete type factory (when the `TypeFactoryImpl`-specific
    /// builders, e.g. `set_core_type`, are needed by the init pipeline).
    #[inline]
    pub fn types_impl(&self) -> &TypeFactoryImpl {
        &self.types
    }

    /// Share the data-type factory `Rc` so the analysis-side ArchContext (`glb`) reaches
    /// the same populated factory (`ActionInferTypes` -> `glb.types()`).
    pub fn types_rc(&self) -> Rc<TypeFactoryImpl> {
        Rc::clone(&self.types)
    }

    /// Borrow the output-language printer (C++ `glb->print`); the concrete C printer is
    /// `printc::ArchPrintExt::print`.
    #[inline]
    pub fn printer(&self) -> &dyn crate::printhandle::PrintHandle {
        &*self.print
    }

    /// (unlace) Borrow the per-program restart-trigger log (read by the `restarts`
    /// console command).
    pub fn restart_log(&self) -> &crate::restartlog::RestartLog {
        &self.restart_log
    }

    /// (unlace) Mutably borrow the restart-trigger log (the trigger sites record
    /// into it).
    pub fn restart_log_mut(&mut self) -> &mut crate::restartlog::RestartLog {
        &mut self.restart_log
    }

    /// Mutably borrow the output-language printer (the print option setters).
    pub fn printer_mut(&mut self) -> &mut dyn crate::printhandle::PrintHandle {
        &mut *self.print
    }

    /// Lend the printer out, leaving a default one in its place (`printc::ArchPrintExt::with_print`).
    pub fn take_printer(&mut self) -> Box<dyn crate::printhandle::PrintHandle> {
        let stand_in = (self.pass_hooks().printer_default)();
        std::mem::replace(&mut self.print, stand_in)
    }

    /// Put a lent printer back.
    pub fn put_printer(&mut self, print: Box<dyn crate::printhandle::PrintHandle>) {
        self.print = print;
    }

    /// (unlace outlang) Select the output language by name, rejecting one no
    /// back-end claims.
    ///
    /// The `ArchOptionContext::set_print_language` sibling is infallible because
    /// it mirrors the upstream setter; this is the surface a front-end should
    /// use, so a typo is an error rather than a silent fall back to C.
    pub fn set_print_language_checked(&mut self, name: &str) -> UnlaceResult<()> {
        let lang = crate::outlang::OutLang::from_print_name(name).ok_or_else(|| {
            UnlaceError::parse(format!(
                "unknown output language {name:?} (expected one of: {})",
                crate::outlang::OutLang::names().join(", ")
            ))
        })?;
        self.print.set_name(lang.print_name());
        Ok(())
    }

    /// Install the load image (C++ `glb->loader`; owned inside the engine in
    /// the Rust port).
    ///
    /// The C++ `Architecture::loader` is a `LoadImage*` the translator was given;
    /// in the Rust port the `Sleigh` engine owns the loader (it borrows it behind
    /// a `RefCell` for `load_fill`, driven by decode), so the architecture's
    /// loader surface is the engine's bound image.  This forwards to
    /// `Sleigh::set_loader`, matching the C++ `restoreFromSpec` handing the
    /// loader to the translator.
    pub fn set_loader(&mut self, loader: Box<dyn unlace_sleigh::loadimage::LoadImage>) {
        (self.pass_hooks().callwide_clear)(&mut self.unlace_tables);
        self.translate.set_loader(loader);
    }

    /// Read a `sz`-byte value out of the load image at `addr` (C++
    /// `EmulatePcodeOp::getLoadImageValue` via `glb->loader->loadFill`).  The
    /// loader is owned by the engine in the Rust port, so this forwards to the
    /// `Sleigh` engine's [`read_loadimage_value`](unlace_sleigh::sleigh::Sleigh::read_loadimage_value).
    /// Drives jump-table LOAD emulation.
    pub fn read_loadimage_value(&self, addr: &Address, sz: int4) -> UnlaceResult<uintb> {
        self.translate.read_loadimage_value(addr, sz)
    }

    /// Forward `glb->translate->allowContextSet(val)` — the context database is
    /// owned inside the engine in the Rust port (C++ `glb->context` is a
    /// `ContextDatabase*` the translator holds; `Sleigh` owns it here), so the
    /// architecture's context surface forwards to the engine.
    pub fn context_allow_set(&self, val: bool) {
        self.translate.allow_context_set(val);
    }

    /// Run a closure with mutable access to the engine's `ContextDatabase` (C++
    /// `glb->context`).  Drives the `set context` / `set track` console commands;
    /// forwards to the owned [`Sleigh`] engine.
    pub fn with_context_db_mut<R>(
        &self,
        f: impl FnOnce(&mut dyn unlace_sleigh::globalcontext::ContextDatabase) -> R,
    ) -> R {
        (self.pass_hooks().callwide_revoke)(&self.unlace_tables);
        // The engine boundary exposes the object-safe `with_context_db_dyn` (a
        // `&mut dyn FnMut`, so it survives the `Box<dyn EngineTranslate>` trait
        // object); adapt the generic, value-returning closure over it.  The
        // protocol is synchronous — the closure runs exactly once — so `f` and
        // the result move through `Option` slots cleanly.
        let mut f = Some(f);
        let mut result: Option<R> = None;
        self.translate.with_context_db_dyn(&mut |db| {
            result = Some((f.take().expect("with_context_db_mut: closure runs once"))(
                db,
            ));
        });
        result.expect("with_context_db_mut: closure ran")
    }

    /// Read context without permitting a mutation of frozen evidence dependencies.
    pub fn with_context_db<R>(
        &self,
        f: impl FnOnce(&dyn unlace_sleigh::globalcontext::ContextDatabase) -> R,
    ) -> R {
        let mut f = Some(f);
        let mut result = None;
        self.translate.with_context_db_dyn(&mut |db| {
            result = Some((f.take().expect("with_context_db: closure runs once"))(db));
        });
        result.expect("with_context_db: closure ran")
    }

    /// Resolve a register by name to its storage (C++
    /// `glb->translate->getRegister(name)`); used by `set track`.
    #[inline]
    pub fn get_register_varnode(
        &self,
        nm: &[u8],
    ) -> UnlaceResult<unlace_num::pcoderaw::VarnodeData> {
        self.translate.get_register_varnode(nm)
    }

    /// The data-organization the C-declaration grammar consults (C++
    /// `glb->getDefaultDataSpace()->getAddrSize()` / `getWordSize()`), packaged as
    /// `(addr_size, word_size)` for the `parse_C` / `parse_type` entry points the
    /// console `parse line` drives.  A bootstrapped architecture always has a
    /// default data space (C++ `getDefaultDataSpace` asserts the same).
    pub fn data_org(&self) -> (int4, uint4) {
        let spc = self
            .manage()
            .get_default_data_space()
            .expect("Architecture::data_org: bootstrapped architecture has a default data space");
        (spc.get_addr_size() as int4, spc.get_word_size())
    }

    // -----------------------------------------------------------------------
    // Prototype-model registry (C++ protoModels / defaultfp / evalfp_current)
    // -----------------------------------------------------------------------

    /// Look up a prototype model by name (C++ `Architecture::getModel`,
    /// architecture.cc:235 — `protoModels.find(nm)`).  Returns `None` for an
    /// unregistered name (the C++ throws `LowlevelError("Unknown prototype
    /// model");` — the caller maps `None` to that).
    pub fn get_model(&self, nm: &str) -> Option<&Rc<ProtoModel>> {
        self.proto_models.get(nm)
    }

    /// Whether a prototype model with the given name is registered (C++
    /// `Architecture::hasModel`).
    pub fn has_model(&self, nm: &str) -> bool {
        self.proto_models.contains_key(nm)
    }

    /// Number of registered prototype models (C++ `protoModels.size()`).
    pub fn num_proto_models(&self) -> usize {
        self.proto_models.len()
    }

    /// Names of the registered prototype models, in registry (sorted) order.
    pub fn proto_model_names(&self) -> impl Iterator<Item = &str> {
        self.proto_models.keys().map(|s| s.as_str())
    }

    /// The default prototype model (C++ `glb->defaultfp`).  `None` until a
    /// cspec is parsed / [`build_default_proto`](Architecture::build_default_proto).
    #[inline]
    pub fn default_fp(&self) -> Option<&Rc<ProtoModel>> {
        self.defaultfp.as_ref()
    }

    /// The current-evaluation model (C++ `glb->evalfp_current`), falling back
    /// to `defaultfp` when unset (C++ `evalfp_current==0 ? defaultfp : …`).
    pub fn eval_fp_current(&self) -> Option<&Rc<ProtoModel>> {
        self.evalfp_current.as_ref().or(self.defaultfp.as_ref())
    }

    /// Record the calling convention `name` was declared under (see
    /// [`Self::declared_proto_models`]).
    pub fn set_function_prototype_model(&mut self, name: &str, model: Rc<ProtoModel>) {
        if !self
            .declared_proto_models
            .get(name)
            .is_some_and(|old| Rc::ptr_eq(old, &model))
        {
            (self.pass_hooks().callwide_clear)(&mut self.unlace_tables);
        }
        self.declared_proto_models.insert(name.to_string(), model);
    }

    /// The calling convention `name` was declared under, or `None`.
    pub fn function_prototype_model(&self, name: &str) -> Option<&Rc<ProtoModel>> {
        self.declared_proto_models.get(name)
    }

    /// Record the calling convention the function at `addr` was declared under
    /// (see [`Self::declared_proto_models_at`]).
    pub fn set_function_prototype_model_at(&mut self, addr: &Address, model: Rc<ProtoModel>) {
        if let Some(space) = addr.get_space() {
            if !self
                .declared_proto_models_at
                .get(&(space.get_index(), addr.get_offset()))
                .is_some_and(|old| Rc::ptr_eq(old, &model))
            {
                (self.pass_hooks().callwide_clear)(&mut self.unlace_tables);
            }
            self.declared_proto_models_at
                .insert((space.get_index(), addr.get_offset()), model);
        }
    }

    /// Register a prototype model under its name (C++ `protoModels[name] =`).
    pub fn register_model(&mut self, model: Rc<ProtoModel>) {
        if !self
            .proto_models
            .get(model.get_name())
            .is_some_and(|old| Rc::ptr_eq(old, &model))
        {
            (self.pass_hooks().callwide_clear)(&mut self.unlace_tables);
        }
        self.proto_models
            .insert(model.get_name().to_string(), model);
    }

    /// Set the default prototype model (C++ `Architecture::setDefaultModel`,
    /// architecture.cc:222).
    pub fn set_default_model_rc(&mut self, model: Rc<ProtoModel>) {
        if !self
            .defaultfp
            .as_ref()
            .is_some_and(|old| Rc::ptr_eq(old, &model))
        {
            (self.pass_hooks().callwide_clear)(&mut self.unlace_tables);
        }
        self.defaultfp = Some(model);
    }

    /// Share `defaultfp` and the named models into the type factory, which the
    /// C++ factory reads live through `glb`; re-run after either changes.
    fn share_proto_models(&self) {
        self.types
            .set_proto_models(self.defaultfp.clone(), self.proto_models.clone());
    }

    // -----------------------------------------------------------------------
    // init / restoreFromSpec pipeline (architecture.cc:1395 / sleigh_arch.cc)
    // -----------------------------------------------------------------------

    /// Build the data-type factory + register the data organization
    /// (C++ `SleighArchitecture::buildTypegrp`, sleigh_arch.cc:198 —
    /// `types = new TypeFactory(this)`).  The factory is constructed empty;
    /// [`build_core_types`](Architecture::build_core_types) seeds the core types
    /// and [`finish_typegrp`](Architecture::finish_typegrp) calls `setupSizes`.
    pub fn build_typegrp(&mut self) {
        self.types = Rc::new(TypeFactoryImpl::new());
        self.types.set_max_basetype_size(self.max_basetype_size);
    }

    /// Seed the core data-types (C++ `ArchitectureGhidra::buildCoreTypes` /
    /// `SleighArchitecture::buildCoreTypes`, ghidra_arch.cc:316-349): when a
    /// wire `<coretypes>` document was installed ([`Self::set_coretypes_xml`] —
    /// the ghidra-mode registerProgram spec, the C++ `store.getTag("coretypes")`
    /// branch) decode it, so the core-type IDS match the host's and every later
    /// `<typeref>`/getDataType exchange resolves; else the verbatim default
    /// `setCoreType` sequence + `cacheCoreTypes`.
    pub fn build_core_types(&mut self) -> UnlaceResult<()> {
        use type_metatype::*;
        if let Some(xml) = self.coretypes_xml.clone() {
            use unlace_base::marshal::{IdRegistry, XmlDecode};
            let manager = self.translate.manager_rc();
            let mut registry = IdRegistry::with_base_ids();
            crate::dtype::register_type_wire_ids(&mut registry);
            let store = unlace_base::xml::xml_tree(&xml)?;
            let root = store.get_root().clone();
            let mut decoder = XmlDecode::new_with_root(&manager, &registry, &root, 0);
            return self.types.decode_core_types(&mut decoder);
        }
        let t = &self.types;
        t.set_core_type("void", 1, TYPE_VOID, false)?;
        t.set_core_type("bool", 1, TYPE_BOOL, false)?;
        t.set_core_type("uint1", 1, TYPE_UINT, false)?;
        t.set_core_type("uint2", 2, TYPE_UINT, false)?;
        t.set_core_type("uint4", 4, TYPE_UINT, false)?;
        t.set_core_type("uint8", 8, TYPE_UINT, false)?;
        t.set_core_type("int1", 1, TYPE_INT, false)?;
        t.set_core_type("int2", 2, TYPE_INT, false)?;
        t.set_core_type("int4", 4, TYPE_INT, false)?;
        t.set_core_type("int8", 8, TYPE_INT, false)?;
        t.set_core_type("float2", 2, TYPE_FLOAT, false)?;
        t.set_core_type("float4", 4, TYPE_FLOAT, false)?;
        t.set_core_type("float8", 8, TYPE_FLOAT, false)?;
        t.set_core_type("float10", 10, TYPE_FLOAT, false)?;
        t.set_core_type("float16", 16, TYPE_FLOAT, false)?;
        t.set_core_type("xunknown1", 1, TYPE_UNKNOWN, false)?;
        t.set_core_type("xunknown2", 2, TYPE_UNKNOWN, false)?;
        t.set_core_type("xunknown4", 4, TYPE_UNKNOWN, false)?;
        t.set_core_type("xunknown8", 8, TYPE_UNKNOWN, false)?;
        t.set_core_type("code", 1, TYPE_CODE, false)?;
        t.set_core_type("char", 1, TYPE_INT, true)?;
        t.set_core_type("wchar2", 2, TYPE_INT, true)?;
        t.set_core_type("wchar4", 4, TYPE_INT, true)?;
        t.cache_core_types()?;
        Ok(())
    }

    /// Finish the type factory: set up the default sizes (C++
    /// `types->setupSizes()`, the tail of `parseCompilerConfig` when no
    /// `<data_organization>` was registered).  Reads the architecture's default
    /// data-space / stack-pointer widths (the `glb->` accessors the C++
    /// `setupSizes` queries).
    /// Parse the cspec `<data_organization>` size elements into the type factory
    /// (C++ `TypeFactory::decodeDataOrganization`, type.cc:5107).  Sets the
    /// integer/long/pointer/char/wchar default sizes from the compiler spec so
    /// `getSizeOfWChar()` etc. reflect the real ABI (e.g. x86-64 gcc `wchar_size=4`);
    /// `setupSizes` then only fills the elements the spec left unset.  The
    /// `<size_alignment_map>` is left to the existing `set_default_alignment_map`
    /// (a separate cspec item); only the scalar sizes are read here.
    fn decode_data_organization(&self) -> UnlaceResult<()> {
        use unlace_base::xml::DocumentStorage;
        let Some(xml) = self.cspec_xml.clone() else {
            return Ok(());
        };
        let mut store = DocumentStorage::new();
        let root = store.parse_document(&xml)?.get_root().clone();
        let Some(dorg) = root
            .get_children()
            .iter()
            .find(|c| c.get_name() == "data_organization")
            .cloned()
        else {
            return Ok(());
        };
        let read = |el: &Rc<unlace_base::xml::Element>| -> Option<int4> {
            el.get_attribute_value("value")
                .ok()
                .and_then(|b| std::str::from_utf8(b).ok())
                .and_then(|s| s.trim().parse::<int4>().ok())
        };
        for child in dorg.get_children().iter() {
            match child.get_name() {
                "integer_size" => {
                    if let Some(v) = read(child) {
                        self.types.set_size_of_int(v);
                    }
                }
                "long_size" => {
                    if let Some(v) = read(child) {
                        self.types.set_size_of_long(v);
                    }
                }
                "pointer_size" => {
                    if let Some(v) = read(child) {
                        self.types.set_size_of_pointer(v);
                    }
                }
                "char_size" => {
                    if let Some(v) = read(child) {
                        self.types.set_size_of_char(v);
                    }
                }
                "wchar_size" => {
                    if let Some(v) = read(child) {
                        self.types.set_size_of_wchar(v);
                    }
                }
                // (unlace) The remaining scalar widths.  Upstream's
                // `decodeDataOrganization` reads these too; unlace had only ever
                // needed int/long/pointer/char/wchar, so the rest fell through the
                // `_ => {}` arm and no consumer could ask for them.  `<float_size>`
                // (60 cspecs), `<double_size>` (61), `<long_double_size>` (56),
                // `<short_size>` (54) and `<long_long_size>` (51) are the five that
                // a per-architecture C spelling needs.
                "short_size" => {
                    if let Some(v) = read(child) {
                        self.types.set_size_of_short(v);
                    }
                }
                "long_long_size" => {
                    if let Some(v) = read(child) {
                        self.types.set_size_of_long_long(v);
                    }
                }
                "float_size" => {
                    if let Some(v) = read(child) {
                        self.types.set_size_of_float(v);
                    }
                }
                "double_size" => {
                    if let Some(v) = read(child) {
                        self.types.set_size_of_double(v);
                    }
                }
                "long_double_size" => {
                    if let Some(v) = read(child) {
                        self.types.set_size_of_long_double(v);
                    }
                }
                "size_alignment_map" => {
                    // C++ `TypeFactory::decodeAlignmentMap` (type.cc:5143): each
                    // `<entry size=N alignment=M/>` child contributes a pair; the
                    // map drives `getAlignment(size)` and so the over-aligned
                    // primitive layout (e.g. x86-64 gcc float10 align=16).
                    let read_attr =
                        |el: &Rc<unlace_base::xml::Element>, attr: &str| -> Option<int4> {
                            el.get_attribute_value(attr)
                                .ok()
                                .and_then(|b| std::str::from_utf8(b).ok())
                                .and_then(|s| s.trim().parse::<int4>().ok())
                        };
                    let mut pairs: Vec<(int4, int4)> = Vec::new();
                    for entry in child.get_children().iter() {
                        if entry.get_name() != "entry" {
                            continue;
                        }
                        if let (Some(sz), Some(al)) =
                            (read_attr(entry, "size"), read_attr(entry, "alignment"))
                        {
                            pairs.push((sz, al));
                        }
                    }
                    if !pairs.is_empty() {
                        self.types.decode_alignment_map(&pairs)?;
                    }
                }
                _ => {}
            }
        }
        Ok(())
    }

    /// Finish the type factory: set up the default sizes (C++
    /// `types->setupSizes()`, the tail of `parseCompilerConfig` when no
    /// `<data_organization>` was registered).  Reads the architecture's default
    /// data-space / stack-pointer widths (the `glb->` accessors the C++
    /// `setupSizes` queries).
    pub fn finish_typegrp(&self) {
        // C++ `parseCompilerConfig` decodes `<data_organization>`
        // (architecture.cc:1268) before the type factory's `setupSizes` defaults
        // run, so spec-given sizes (e.g. gcc's `wchar_size=4`) take precedence.
        let _ = self.decode_data_organization();
        let manage = self.manage();
        let default_size = manage.get_default_size();
        let default_data_addr_size = manage
            .get_default_data_space()
            .map(|s| s.get_addr_size() as int4)
            .unwrap_or(default_size);
        let stack_pointer_size = manage.get_stack_space().map(|s| s.get_addr_size() as int4);
        // C++ `TypeFactory` reads `getArch()->getDefaultDataSpace()->isBigEndian()`
        // for bitfield layout (TypeBitField ctor, type.cc:873; struct parse,
        // grammar.cc:2626) and pointer truncation (TypePointer::calcTruncate,
        // type.cc:1202).  Seed that endianness bit here, where the default data
        // space is first known, so big-endian structs lay their bitfields out in
        // memory order (without it every struct is laid out little-endian and the
        // bitfield-expression recovery's BE range can't match the LE-laid fields).
        let big_endian = manage
            .get_default_data_space()
            .map(|s| s.is_big_endian())
            .unwrap_or(false);
        self.types.set_truncate_big_endian(big_endian);
        // C++ `setupSizes` installs the default map only when the cspec did not
        // register a `<size_alignment_map>` (`if (alignMap.empty())`,
        // type.cc:3623).  `decode_data_organization` above already populated the
        // map from the spec when present (e.g. x86-64 gcc 16->16), so preserve it.
        if self.types.alignment_map_is_empty() {
            self.types.set_default_alignment_map();
        }
        self.types
            .setup_sizes(stack_pointer_size, default_data_addr_size, default_size);
    }

    /// Seed a single default prototype model when the cspec proto decode is not
    /// run (the W6 `decodeDefaultProto`/`decodeProto` cspec pipeline is its own
    /// item).  Builds an empty `unknown`-style default model over the engine's
    /// address spaces so `defaultfp`/`getModel("unknown")` resolve and the
    /// `extrapop` option has a target.  Mirrors the C++ post-`parseCompilerConfig`
    /// invariant that `defaultfp != 0`.
    ///
    /// STUB(W6 cspec): the *real* default proto model comes from the cspec
    /// `<default_proto><prototype …>` decode (`ProtoModel::decode` building the
    /// param lists from `<input>`/`<output>` `<pentry>` records).  When the
    /// frontend supplied the cspec XML (via [`set_cspec_xml`](Architecture::set_cspec_xml))
    /// the `<default_proto>` input/output parameter lists are decoded here (the
    /// general, spec-driven path — see [`decode_default_proto`](Architecture::decode_default_proto)),
    /// so the recovered model carries real return/parameter storage and the
    /// proto-recovery actions can fire, and the spec's named models
    /// ([`decode_named_protos`](Architecture::decode_named_protos)) are registered
    /// alongside it.  Otherwise a name-only default model is registered so the
    /// engine still has a non-null `defaultfp`.
    pub fn build_default_proto(&mut self) {
        (self.pass_hooks().callwide_clear)(&mut self.unlace_tables);
        // One parse of the cspec document feeds all three readers below: the
        // top-level <returnaddress> (C++ `Architecture::decodeReturnAddress`,
        // architecture.cc:902), the <default_proto> model, and the named models.
        if let Some(xml) = self.cspec_xml.take() {
            let root = {
                let mut store = unlace_base::xml::DocumentStorage::new();
                store.parse_document(&xml).map(|d| d.get_root().clone())
            };
            if let Ok(root) = root {
                // A missing/empty <returnaddress> leaves `default_return_addr` as
                // `None` (== the C++ `defaultReturnAddr.space == 0`).
                self.default_return_addr = self.decode_default_return_addr(&root);
                self.split_records = self.decode_split_records(&root);
                // C++ `PreferSplitManager::initialize`.
                self.split_records.sort();
                if let Ok(model) = self.decode_default_proto(&root) {
                    let rc = Rc::new(model);
                    self.register_model(Rc::clone(&rc));
                    self.defaultfp = Some(Rc::clone(&rc));
                    // The spec's NAMED models (`<prototype>`/`<resolveprototype>`/
                    // `<modelalias>`) join the registry too, so `getModel` resolves
                    // more than the default one.  Registration only: nothing here
                    // selects a model for any function.
                    let named = self.decode_named_protos(&root, &rc);
                    for m in named {
                        self.register_model(m);
                    }
                    self.register_unlace_x87_intrinsic_model(&root);
                    // (unlace `evalcurrentproto`) The spec's `<eval_current_prototype>`
                    // nomination (C++ `parseCompilerConfig`'s
                    // `ELEM_EVAL_CURRENT_PROTOTYPE` arm, architecture.cc:1321):
                    // which registered model a function's OWN unlocked prototype is
                    // evaluated with. Recorded here, applied per function in
                    // `build_arch_handle` under the option; a name the registry does
                    // not carry is ignored (the model failed to decode -- the
                    // registration pass skips rather than throws), leaving the
                    // `<default_proto>` evaluation.
                    self.evalfp_current_spec =
                        crate::evalcurrentproto::eval_current_model_name(&root)
                            .and_then(|name| self.proto_models.get(&name).cloned());
                    return;
                }
                // Fall through to the name-only default on any decode failure
                // (faithful degradation; the recovery simply won't fire).
            }
        }
        let mut model = ProtoModel::new(self.manage());
        model.set_name("unknown");
        // Build empty input/output param lists so `model.output()`/`input()` are
        // present (an empty list characterizes every range as `no_containment`,
        // so proto recovery declines gracefully rather than the model lacking
        // lists and panicking).  The real `ProtoModel::decode` always allocates
        // the lists via `buildParamList`; mirror that for the fallback default.
        let _ = model.build_param_list("standard");
        let rc = Rc::new(model);
        self.register_model(Rc::clone(&rc));
        self.defaultfp = Some(rc);
    }

    /// Record the compiler-spec (`.cspec`) XML content for the
    /// `<default_proto>` decode in [`build_default_proto`](Architecture::build_default_proto).
    /// The frontend reads the resolved `.cspec` file (the `compilerfile` path
    /// from `SleighArchitecture::build_spec_file`) and hands it here before
    /// [`init_post_engine`](Architecture::init_post_engine).
    pub fn set_cspec_xml(&mut self, xml: Vec<u8>) {
        (self.pass_hooks().callwide_clear)(&mut self.unlace_tables);
        self.cspec_xml = Some(xml);
    }

    /// (unlace, Phase 3) Record the wire `<coretypes>` XML for the ghidra-mode
    /// [`build_core_types`](Architecture::build_core_types) decode.  Must be
    /// set before [`init_post_engine`](Architecture::init_post_engine).
    pub fn set_coretypes_xml(&mut self, xml: Vec<u8>) {
        self.coretypes_xml = Some(xml);
    }

    /// Record the processor-spec (`.pspec`) XML content for the
    /// `<context_data>` decode in
    /// [`parse_processor_config`](Architecture::parse_processor_config).  The
    /// frontend reads the resolved `.pspec` file (the `processorfile` path from
    /// `SleighArchitecture::build_spec_file`) and hands it here before
    /// [`init_post_engine`](Architecture::init_post_engine).
    pub fn set_pspec_xml(&mut self, xml: Vec<u8>) {
        self.pspec_xml = Some(xml);
    }

    /// The pspec `<default_symbols>` label at exactly `addr`, if any.
    pub fn pspec_symbol_at(&self, addr: &Address) -> Option<&str> {
        let spc = addr.get_space()?;
        self.pspec_symbols
            .get(&(spc.get_index(), addr.get_offset()))
            .map(String::as_str)
    }

    /// Apply the processor-spec `<context_data>` paints to the engine's context
    /// database (the relevant slice of C++ `Architecture::parseProcessorConfig`,
    /// architecture.cc:1176, dispatching the `ELEM_CONTEXT_DATA` branch to
    /// `context->decodeFromSpec(decoder)`).
    ///
    /// Without this the engine's context database is the all-zero `.sla`
    /// default, which for x86 selects 16-bit real mode (`addrsize`/`opsize`
    /// unset) regardless of the `x86:LE:64` archid — the pspec's
    /// `<context_set><set name="addrsize" val="2"/>…` is what tells SLEIGH to
    /// disassemble as 64-bit.
    ///
    /// STUB(W6 pspec): the remaining `<processor_spec>` children (volatile,
    /// incidentalcopy, jumpassist, segmentop, …) decode with their own waves;
    /// this wires the `<context_data>` branch — the one that steers the
    /// disassembly mode and therefore gates every multi-byte lift — and the
    /// `<register_data>` branch (the `vector_lane_sizes` half), which seeds the
    /// `lanerecords` table that `ActionLaneDivide` reads to split XMM/ZMM vector
    /// lanes.  Faithful to `parseProcessorConfig`'s dispatch; the other branches
    /// are no-ops here (the C++ `peekElement` loop simply skips them in our
    /// `find_child` walk).
    pub fn parse_processor_config(&mut self) -> UnlaceResult<()> {
        use unlace_base::marshal::{IdRegistry, XmlDecode};
        use unlace_base::xml::DocumentStorage;
        use unlace_sleigh::globalcontext::register_globalcontext_ids;

        // C++ keeps the parsed pspec `DocumentStorage` for the whole
        // `restoreFromSpec`/`buildSymbols` window; the deferred `<default_symbols>`
        // apply (build_symbols, run after adjustCaches) re-reads it.  Clone (not
        // take) so the raw XML stays available for build_symbols.
        let Some(xml) = self.pspec_xml.clone() else {
            return Ok(());
        };
        let mut store = DocumentStorage::new();
        let root = store.parse_document(&xml)?.get_root().clone();
        // The C++ getTag("processor_spec") returns the <processor_spec> element;
        // the resolved .pspec file's root IS <processor_spec>.
        let pspec = if root.get_name() == "processor_spec" {
            root
        } else {
            match find_child(&root, "processor_spec") {
                Some(el) => el,
                None => return Ok(()), // no processor_spec: nothing to apply
            }
        };

        // C++ parseProcessorConfig dispatch — ELEM_REGISTER_DATA branch
        // (architecture.cc:1202 -> decodeRegisterData).  Seed the lanerecords
        // table before the action build reads getMinimumLanedRegisterSize.  A
        // pspec with no <register_data> (or only non-laned registers) leaves the
        // table empty, which is correct.
        if let Some(register_data) = find_child(&pspec, "register_data") {
            self.decode_register_data(&register_data)?;
        }

        // C++ parseProcessorConfig ELEM_VOLATILE branch (architecture.cc:1187 ->
        // decodeVolatile).  Paint each `<range>` in the `<volatile>` element with
        // the `volatil` boolean property so `ActionVarnodeProps` converts accesses
        // to those addresses into `read_volatile`/`write_volatile` user-ops (the
        // CALLOTHER form survives dead-code, which a plain COPY to an SFR-space
        // varnode does not).  Must run before the global-query snapshot is taken
        // (build_arch_handle) so the painted flagbase reaches the per-function ArchContext.
        if let Some(volatile_el) = find_child(&pspec, "volatile") {
            self.decode_volatile(&volatile_el)?;
        }

        // C++ parseProcessorConfig ELEM_CONTEXT_DATA branch.  A pspec with no
        // <context_data> (e.g. a 32-bit-default processor) leaves the zero
        // context, which is correct for it.
        let Some(context_data) = find_child(&pspec, "context_data") else {
            return Ok(());
        };

        // Ghidra-mode: skip the <context_set> paints (C++
        // `ContextGhidra::decode`/`decodeFromSpec`, ghidra_context.cc, are both a
        // bare `decoder.skipElement()` — "Ignore details handled by ghidra").  In
        // ghidra mode the Java host owns disassembly context and returns
        // already-context-resolved p-code via `getPcode`, so the query-backed
        // engine's own context database is never consulted for disassembly — and
        // it has no variables registered (there is no `.sla` parse to
        // `registerContext` them), so applying `<set name="addrsize" .../>` would
        // raise "Non-existent context variable: addrsize".  `as_sleigh()` is
        // `None` iff this is the query-backed `GhidraTranslate`; the standalone
        // `Sleigh` path returns `Some` and still applies the paints, exactly as
        // the 675 x86 datatests (which need `addrsize`/`opsize` for 64-bit
        // disassembly) require.
        //
        // (unlace, Phase 3) The `<tracked_set>` children are DIFFERENT: they name
        // whole registers with pinned values (x86-64: `DF = 0`), feed only the
        // engine-side `trackbase` (no context variables involved), and are what
        // `ActionConstbase` reads to plant `DF = COPY 0` — without which every
        // string op renders the `(uint8)DF * -2 + 1` direction garbage.  Upstream
        // ghidra-mode recovers the same facts via the getTrackedRegisters query
        // (`ContextGhidra::getTrackedSet`); unlace decodes them straight from the
        // wire pspec it was already handed, resolving register names through the
        // query-backed translator (a getRegister query, legal during
        // registerProgram).  A register the host cannot resolve is skipped, never
        // fatal — upstream ghidra-mode never decodes this block at all.
        if self.translate.as_sleigh().is_none() {
            self.decode_ghidra_tracked_sets(&context_data)?;
            return Ok(());
        }

        // Decode <context_data> against the engine's single address-space
        // manager (so `space="ram"` resolves to the real ram space).  The Rc
        // keeps the manager alive for the decoder while the context database
        // (a sibling RefCell on the engine) is borrowed mutably — no aliasing.
        let manager = self.translate.manager_rc();
        let mut registry = IdRegistry::with_base_ids();
        register_globalcontext_ids(&mut registry);
        let mut decoder = XmlDecode::new_with_root(&manager, &registry, &context_data, 0);
        self.with_context_db_mut(|db| db.decode_from_spec(&mut decoder))?;
        Ok(())
    }

    /// (unlace, Phase 3) Decode ONLY the `<tracked_set>` children of the pspec
    /// `<context_data>` into the engine context database's trackbase — the
    /// ghidra-mode arm of [`parse_processor_config`](Self::parse_processor_config).
    ///
    /// Register names (`<set name="DF" val="0"/>`) resolve through the
    /// query-backed translator's `get_register_varnode` (a getRegister query on
    /// the host); a name the host cannot resolve skips that `<set>` (upstream
    /// ghidra-mode skips the whole block, so nothing here may be fatal).
    fn decode_ghidra_tracked_sets(
        &mut self,
        context_data: &Rc<unlace_base::xml::Element>,
    ) -> UnlaceResult<()> {
        use unlace_base::address::Range;
        use unlace_base::marshal::{ATTRIB_NAME, ATTRIB_VAL, Decoder, IdRegistry, XmlDecode};
        use unlace_sleigh::globalcontext::{
            TrackedContext, TrackedSet, register_globalcontext_ids,
        };
        let manager = self.translate.manager_rc();
        let mut registry = IdRegistry::with_base_ids();
        register_globalcontext_ids(&mut registry);
        for child in context_data.get_children() {
            if child.get_name() != "tracked_set" {
                continue;
            }
            let mut decoder = XmlDecode::new_with_root(&manager, &registry, child, 0);
            let sub_id = decoder.open_element()?;
            let range = Range::decode_from_attributes(&mut decoder)?;
            let addr1 = range.get_first_addr();
            let addr2 = range.get_last_addr_open(decoder.get_addr_space_manager());
            let mut set: TrackedSet = Vec::new();
            while decoder.peek_element()? != 0 {
                let set_id = decoder.open_element()?;
                // <set name=… val=…> — resolve the register via the translator
                // (VarnodeData::decode_from_attributes' name path needs a
                // manager-installed RegisterLookup, which ghidra mode has none of).
                let mut loc = None;
                loop {
                    let aid = decoder.get_next_attribute_id()?;
                    if aid == 0 {
                        break;
                    }
                    if aid == ATTRIB_NAME.get_id() {
                        let nm = decoder.read_string()?;
                        loc = self.translate.get_register_varnode(&nm).ok();
                        break;
                    }
                }
                if let Some(loc) = loc {
                    let val = decoder.read_unsigned_integer_id(&ATTRIB_VAL)?;
                    set.push(TrackedContext { loc, val });
                }
                decoder.close_element(set_id)?;
            }
            decoder.close_element(sub_id)?;
            if !set.is_empty() {
                self.with_context_db_mut(|db| *db.create_set(&addr1, &addr2) = set);
            }
        }
        Ok(())
    }

    /// Apply a `<volatile>` element, marking the contained `<range>` regions as
    /// holding volatile memory/registers (C++ `Architecture::decodeVolatile`,
    /// `architecture.cc:881`).
    ///
    /// The C++ `userops.decodeVolatile` half (reading `inputop`/`outputop` and
    /// registering the `VolatileReadOp`/`VolatileWriteOp` builtins with those
    /// names) is already satisfied: unlace pre-seeds `BUILTIN_VOLATILE_READ`/
    /// `BUILTIN_VOLATILE_WRITE` with the canonical `read_volatile`/`write_volatile`
    /// names (and the non-functional display = `annotation_assignment`/`no_operator`)
    /// in `register_string_builtins`, matching every vendored pspec's `<volatile
    /// outputop="write_volatile" inputop="read_volatile">`.  This method ports the
    /// range-painting half: for each `<range>` child,
    /// `symboltab->setPropertyRange(Varnode::volatil, range)`.
    fn decode_volatile(&mut self, volatile_el: &Rc<unlace_base::xml::Element>) -> UnlaceResult<()> {
        use crate::varnode::varnode_flags;
        use unlace_base::address::{Range, RangeProperties};
        use unlace_base::marshal::{IdRegistry, XmlDecode};

        let manager = self.translate.manager_rc();
        let registry = IdRegistry::with_base_ids();
        // C++ `decodeVolatile`: each child is a `<range>`; resolve it through
        // `Range::from_properties` exactly as `decode_global` does, then paint
        // [first, lastOpen) with `volatil`.
        for child in volatile_el.get_children().iter() {
            if child.get_name() != "range" {
                continue;
            }
            let mut decoder = XmlDecode::new_with_root(&manager, &registry, child, 0);
            let mut props = RangeProperties::new();
            props.decode(&mut decoder)?;
            let range = Range::from_properties(&props, self.manage())?;
            let addr1 = range.get_first_addr();
            let addr2 = range.get_last_addr_open(self.manage());
            self.symboltab
                .set_property_range(varnode_flags::volatil, &addr1, &addr2);
        }
        Ok(())
    }

    /// Apply the pspec `<default_symbols>` element as named global symbols (C++
    /// `SleighArchitecture::buildSymbols`, `sleigh_arch.cc:265`).
    ///
    /// Each `<symbol name=… address=… [size=…] [volatile=…]>` is parsed into a
    /// global-scope symbol: the address via `parseAddressSimple` (with the C++
    /// `address="next"` continuation), the size defaulting to the space word size,
    /// the type `getBase(size, TYPE_UNKNOWN)`, and an optional `volatile` attribute
    /// re-painting the `volatil` property range.  This is what gives the 8051 SFR
    /// addresses their names (`P0`@SFR:80, `P1`@SFR:90), so an SFR write renders
    /// `P0 = 1` rather than `dat_80 = 1`.  Run after `adjust_caches` so the global
    /// scope's per-space maptable already covers every spec-created space.
    fn build_symbols(&mut self) -> UnlaceResult<()> {
        use crate::dtype::type_metatype::TYPE_UNKNOWN;
        use crate::varnode::varnode_flags;
        use unlace_base::address::{Address, Range};
        use unlace_base::xml::DocumentStorage;

        let Some(xml) = self.pspec_xml.clone() else {
            return Ok(());
        };
        let mut store = DocumentStorage::new();
        let root = store.parse_document(&xml)?.get_root().clone();
        let pspec = if root.get_name() == "processor_spec" {
            root
        } else {
            match find_child(&root, "processor_spec") {
                Some(el) => el,
                None => return Ok(()),
            }
        };
        let Some(symbols_el) = find_child(&pspec, "default_symbols") else {
            return Ok(());
        };
        let Some(scope) = self.symboltab.get_global_scope() else {
            return Ok(());
        };
        let usepoint = Address::new_invalid();

        // C++ `buildSymbols` tracks (lastAddr, lastSize) for the `address="next"`
        // continuation form.
        let mut last_addr = Address::new_invalid();
        let mut last_size: int4 = -1;
        for child in symbols_el.get_children().iter() {
            if child.get_name() != "symbol" {
                continue;
            }
            let name = match attr_str(child, "name") {
                Some(n) if !n.is_empty() => n,
                _ => {
                    return Err(UnlaceError::lowlevel(
                        "Missing name attribute in <symbol> element",
                    ));
                }
            };
            let addr_str = attr_str(child, "address").unwrap_or_default();
            let addr = if addr_str == "next" && last_size != -1 {
                &last_addr + (last_size as i64)
            } else {
                self.manage().parse_address_simple(&addr_str)?
            };
            if addr.is_invalid() {
                return Err(UnlaceError::lowlevel(
                    "Missing address attribute in <symbol> element",
                ));
            }
            // size defaults to the space word size (C++ addr.getSpace()->getWordSize()).
            let mut size = attr_str(child, "size")
                .and_then(|s| s.parse::<int4>().ok())
                .unwrap_or(0);
            if size == 0 {
                size = addr
                    .get_space()
                    .map(|s| s.get_word_size() as int4)
                    .unwrap_or(1);
            }
            // Optional <symbol volatile="true|false"> re-paints the volatil property.
            if let Some(volstr) = attr_str(child, "volatile") {
                let volatile_state = matches!(volstr.as_str(), "true" | "1" | "yes");
                if let Some(spc) = addr.get_space() {
                    let range = Range::new(
                        Rc::clone(spc),
                        addr.get_offset(),
                        addr.get_offset() + (size as u64 - 1),
                    );
                    let a1 = range.get_first_addr();
                    let a2 = range.get_last_addr_open(self.manage());
                    if volatile_state {
                        self.symboltab
                            .set_property_range(varnode_flags::volatil, &a1, &a2);
                    } else {
                        self.symboltab
                            .clear_property_range(varnode_flags::volatil, &a1, &a2);
                    }
                }
            }
            let ct = self.types.get_base(size, TYPE_UNKNOWN)?;
            self.symboltab
                .add_symbol_mapped(scope, &name, ct, &addr, &usepoint)?;
            if let Some(spc) = addr.get_space() {
                let code = self
                    .manage()
                    .get_default_code_space()
                    .map(|c| c.get_index());
                if code != Some(spc.get_index()) {
                    self.pspec_symbols
                        .insert((spc.get_index(), addr.get_offset()), name.clone());
                }
            }
            last_addr = addr;
            last_size = size;
        }
        Ok(())
    }

    /// Read `<register>` elements collecting the `vector_lane_sizes` lane
    /// schemes, building the `lanerecords` table (C++
    /// `Architecture::decodeRegisterData`, `architecture.cc:933`).
    ///
    /// Faithful to the C++ flow: for each `<register>` carrying
    /// `vector_lane_sizes`, the register storage *size* is resolved by name
    /// through the translator (the C++ `storage.decodeFromAttributes` -> the
    /// register lookup), `LanedRegister::parseSizes` builds the per-register lane
    /// mask, and the masks are accumulated by whole size in `maskList`.  One
    /// `LanedRegister(size, mask)` record is emitted per nonzero size, in
    /// ascending size order (the `maskList` is index-ordered by size), so the
    /// downstream binary searches are valid.
    ///
    /// The C++ also handles the `volatile` attribute (painting a volatile
    /// property range); that property subsystem is a separate stub and is not
    /// wired here — only the lane-size half is decoded.
    fn decode_register_data(
        &mut self,
        register_data: &Rc<unlace_base::xml::Element>,
    ) -> UnlaceResult<()> {
        use crate::transform::LanedRegister;

        // vector<uint4> maskList;  (indexed by register whole size in bytes)
        let mut mask_list: Vec<uint4> = Vec::new();
        for reg in register_data.get_children().iter() {
            if reg.get_name() != "register" {
                continue;
            }
            // string laneSizes; ... if (attribId == ATTRIB_VECTOR_LANE_SIZES) ...
            let Some(lane_sizes) = attr_str(reg, "vector_lane_sizes") else {
                continue; // no lane sizes (and volatile is a separate stub)
            };
            if lane_sizes.is_empty() {
                continue;
            }
            // storage.decodeFromAttributes(decoder): resolve the register's size
            // by name (the C++ VarnodeData decode reads name= -> getRegister).
            let Some(name) = attr_str(reg, "name") else {
                continue;
            };
            let storage = self.translate.get_register_varnode(name.as_bytes())?;
            let storage_size = storage.size as int4;
            let mut laned_register = LanedRegister::new();
            laned_register.parse_sizes(storage_size, &lane_sizes)?;
            let size_index = laned_register.get_whole_size();
            while (mask_list.len() as int4) <= size_index {
                mask_list.push(0);
            }
            mask_list[size_index as usize] |= laned_register.get_size_bit_mask();
        }
        self.lanerecords.clear();
        for (i, &mask) in mask_list.iter().enumerate() {
            if mask == 0 {
                continue;
            }
            self.lanerecords
                .push(LanedRegister::with_mask(i as int4, mask));
        }
        Ok(())
    }

    /// Decode the cspec's top-level `<returnaddress>` storage element into the
    /// `defaultReturnAddr` VarnodeData (C++ `Architecture::decodeReturnAddress`,
    /// architecture.cc:902 -> `VarnodeData::decode`).  The element wraps a single
    /// `<register>`/`<varnode>`/`<addr>` storage child; resolve it through the
    /// engine `Translate` exactly as the effect-block decode does.  Returns `None`
    /// when there is no `<returnaddress>` or it is empty (C++ leaves
    /// `defaultReturnAddr.space == 0`).
    fn decode_default_return_addr(
        &self,
        root: &Rc<unlace_base::xml::Element>,
    ) -> Option<unlace_num::pcoderaw::VarnodeData> {
        let ra = find_child(root, "returnaddress")?;
        for child in ra.get_children().iter() {
            match child.get_name() {
                "register" => {
                    let nm = attr_str(child, "name")?;
                    return self.translate.get_register_varnode(nm.as_bytes()).ok();
                }
                "varnode" | "addr" => {
                    let spname = attr_str(child, "space")?;
                    let space = self.manage().get_space_by_name(&spname)?.clone();
                    let offset = attr_str(child, "offset")
                        .and_then(|s| parse_int(&s))
                        .unwrap_or(0);
                    let size = attr_str(child, "size")
                        .and_then(|s| s.parse::<u32>().ok())
                        .unwrap_or(0);
                    return Some(unlace_num::pcoderaw::VarnodeData {
                        space: Some(space),
                        offset,
                        size,
                    });
                }
                _ => continue,
            }
        }
        None
    }

    /// Did the compiler spec state any `<prefersplit>` register?  The split-aware
    /// callee-contract prepass is only needed where heritage replaces a wide
    /// register with its scalar halves.
    pub fn has_split_records(&self) -> bool {
        !self.split_records.is_empty()
    }

    /// The compiler spec's preferred-split rows, in `PreferSplitRecord` order.
    pub fn split_records(&self) -> &[PreferSplitRecord] {
        &self.split_records
    }

    /// Enter a decompile drive.  Every [`decompile_func_full_with_objects`] call
    /// nests one deeper; the drive that started from 0 is the outermost one.
    ///
    /// The returned [`UnlaceDriveScope`] leaves the scope on drop, so a drive that
    /// unwinds still keeps the depth balanced.
    ///
    /// [`decompile_func_full_with_objects`]: crate::decompile_drive::decompile_func_full_with_objects
    #[doc(hidden)]
    pub fn unlace_drive_scope(&self) -> UnlaceDriveScope {
        let depth = std::rc::Rc::clone(&self.unlace_drive_depth);
        depth.set(depth.get() + 1);
        UnlaceDriveScope { depth }
    }

    /// Does the active drive own the Architecture's externally visible output?
    /// True outside a drive (a standalone flow build keeps its old behaviour)
    /// and for the outermost drive; false for a nested recovery drive.
    #[doc(hidden)]
    pub fn unlace_drive_publishes(&self) -> bool {
        self.unlace_drive_depth.get() <= 1
    }

    /// Decode the cspec's `<prefersplit style="...">` block into the
    /// [`PreferSplitRecord`](PreferSplitRecord)
    /// table heritage pass 0 consumes (C++ `Architecture::parseCompilerConfig`
    /// `ELEM_PREFERSPLIT` arm).
    ///
    /// The style names the number of low bytes of each whole register that form
    /// the first piece: `inhalf` (half the register), `in1234` (4 bytes) and
    /// `in12345678` (8 bytes).  An unknown style or a register the language does
    /// not define states nothing, so the function keeps the whole-register view.
    fn decode_split_records(&self, root: &Rc<unlace_base::xml::Element>) -> Vec<PreferSplitRecord> {
        let Some(split) = find_child(root, "prefersplit") else {
            return Vec::new();
        };
        let style = attr_str(&split, "style").unwrap_or_default();
        let mut out = Vec::new();
        for child in split.get_children().iter() {
            if child.get_name() != "register" {
                continue;
            }
            let Some(name) = attr_str(child, "name") else {
                continue;
            };
            let Ok(storage) = self.translate.get_register_varnode(name.as_bytes()) else {
                continue;
            };
            let splitoffset = match style.as_str() {
                "inhalf" => storage.size as int4 / 2,
                "in1234" => 4,
                "in12345678" => 8,
                _ => return Vec::new(),
            };
            if splitoffset <= 0 || splitoffset >= storage.size as int4 {
                continue;
            }
            out.push(PreferSplitRecord {
                storage,
                splitoffset,
            });
        }
        out
    }

    /// (unlace `calleereginputs custom`) Build a synthesized `x86win.cspec`-shaped
    /// prototype model whose input is the given registers (`ECX`/`EDX` first, in
    /// the spec's `__fastcall` order, then the callee-saved customs `EBX`,`ESI`,
    /// `EDI` in register order) followed by the ordinary stack argument slot. A
    /// register that is an input is NOT in the `<unaffected>` list (a value the
    /// callee consumes as an argument is not one it leaves untouched, just as
    /// `__thiscall`'s `ECX` is not unaffected); the remaining callee-saved
    /// registers stay unaffected. Decoded through the same path as the spec's own
    /// models, so it carries identical storage/effect fidelity. `None` on a spec
    /// whose `__stdcall` cannot be found/parsed.
    pub fn unlace_build_reginput_model(
        &self,
        name: &str,
        regs: &[&str],
        thisptr: bool,
    ) -> Option<ProtoModel> {
        let pentry = |r: &str| {
            format!("<pentry minsize=\"1\" maxsize=\"4\"><register name=\"{r}\"/></pentry>")
        };
        let inputs: String = regs.iter().map(|r| pentry(r)).collect();
        let this_attr = if thisptr {
            " thisbeforeretpointer=\"true\""
        } else {
            ""
        };
        // A register taken as an input is removed from the default `<unaffected>`
        // set: the callee consumes its incoming value, so the caller cannot treat
        // it as preserved for the argument-recovery to score.
        let unaffected: String = ["ESI", "EDI", "EBX"]
            .iter()
            .filter(|r| !regs.contains(r))
            .map(|r| format!("<register name=\"{r}\"/>"))
            .collect();
        let xml = format!(
            "<compiler_spec>\
<returnaddress><varnode space=\"stack\" offset=\"0\" size=\"4\"/></returnaddress>\
<prototype name=\"{name}\" extrapop=\"unknown\" stackshift=\"4\">\
<input{this_attr}>{inputs}\
<pentry minsize=\"1\" maxsize=\"500\" align=\"4\" stackalign=\"false\"><addr offset=\"4\" space=\"stack\"/></pentry>\
</input>\
<output killedbycall=\"true\">\
<pentry minsize=\"4\" maxsize=\"10\" metatype=\"float\" extension=\"float\"><register name=\"ST0\"/></pentry>\
<pentry minsize=\"1\" maxsize=\"4\"><register name=\"EAX\"/></pentry>\
<pentry minsize=\"5\" maxsize=\"8\"><addr space=\"join\" piece1=\"EDX\" piece2=\"EAX\"/></pentry>\
</output>\
<unaffected>\
<varnode space=\"ram\" offset=\"0\" size=\"4\"/>\
<register name=\"ESP\"/><register name=\"EBP\"/>{unaffected}<register name=\"DF\"/><register name=\"FS_OFFSET\"/>\
</unaffected>\
<killedbycall><register name=\"ECX\"/><register name=\"EDX\"/><register name=\"ST0\"/><register name=\"ST1\"/></killedbycall>\
</prototype></compiler_spec>"
        );
        let root = {
            let mut store = unlace_base::xml::DocumentStorage::new();
            store
                .parse_document(xml.as_bytes())
                .map(|d| d.get_root().clone())
                .ok()?
        };
        let proto = find_child(&root, "prototype")?;
        self.decode_proto_model(&proto, &root).ok()
    }

    /// Locate the cspec's `<default_proto><prototype>` and decode it (C++
    /// `Architecture::decodeDefaultProto`, architecture.cc:793).
    fn decode_default_proto(
        &self,
        root: &Rc<unlace_base::xml::Element>,
    ) -> UnlaceResult<ProtoModel> {
        // Find <default_proto><prototype>.
        let dp = find_child(root, "default_proto")
            .ok_or_else(|| UnlaceError::lowlevel("cspec has no <default_proto>"))?;
        let proto = find_child(&dp, "prototype")
            .ok_or_else(|| UnlaceError::lowlevel("<default_proto> has no <prototype>"))?;
        self.decode_proto_model(&proto, root)
    }

    /// Decode one `<prototype>` element into a [`ProtoModel`] (C++
    /// `ProtoModel::decode`, fspec.cc:2563): the
    /// `name`/`extrapop`/`strategy`/`hasthis`/`constructor` attributes, the
    /// `<input>`/`<output>` `<pentry>` lists and the
    /// `<unaffected>`/`<killedbycall>`/`<returnaddress>`/`<internal_storage>`
    /// blocks.  `root` is the enclosing `<compiler_spec>`, consulted only for the
    /// top-level `<returnaddress>` fallback.
    ///
    /// General over any processor's cspec and over any `<prototype>` position:
    /// the one inside `<default_proto>` and every top-level named model
    /// ([`decode_named_protos`](Architecture::decode_named_protos)) go through
    /// this same body, so a named model carries the identical storage/effect
    /// fidelity as the default one.
    fn decode_proto_model(
        &self,
        proto: &Rc<unlace_base::xml::Element>,
        root: &Rc<unlace_base::xml::Element>,
    ) -> UnlaceResult<ProtoModel> {
        let mut model = ProtoModel::new(self.manage());
        let name = attr_str(proto, "name").unwrap_or_else(|| "__stdcall".to_string());
        // extrapop="unknown" -> EXTRAPOP_UNKNOWN; numeric otherwise.
        if let Some(ep) = attr_str(proto, "extrapop") {
            if ep == "unknown" {
                model.set_extra_pop(crate::fspec::EXTRAPOP_UNKNOWN);
            } else if let Ok(v) = ep.parse::<int4>() {
                model.set_extra_pop(v);
            }
        }
        // `hasthis`/`constructor` (ATTRIB_HASTHIS/ATTRIB_CONSTRUCTOR) mark a model
        // for non-static class methods / constructors.  `set_name` runs LAST so the
        // C++ `if (name == "__thiscall") hasThis = true` override (fspec.cc:2595)
        // wins over an explicit `hasthis="false"`, exactly as upstream orders it.
        if let Some(v) = attr_str(proto, "hasthis") {
            model.set_has_this(decode_bool_attr(&v));
        }
        if let Some(v) = attr_str(proto, "constructor") {
            model.set_constructor(decode_bool_attr(&v));
        }
        model.set_name(&name);
        let (entry_inject, return_inject) =
            (crate::architecture::default_pass_hooks().callmechanisms_compiled_ids)(self, &name);
        model.set_inject_ids(entry_inject, return_inject);
        let strategy = attr_str(proto, "strategy").unwrap_or_default();
        model.build_param_list(&strategy)?;

        // Decode <input>/<output> pentry lists and the <unaffected>/
        // <killedbycall>/<returnaddress> effect blocks.  C++ `ProtoModel::decode`
        // (fspec.cc, the `subId == ELEM_UNAFFECTED/KILLEDBYCALL/RETURNADDRESS`
        // arms) parses each block's `<register>`/`<addr>`/`<varnode>` children into
        // an `EffectRecord` with the matching type and appends it to `effectlist`.
        // This is the RSP keystone's root: without the `<unaffected>` RSP record,
        // `FuncProto::hasEffect(RSP)` returns `unknown_effect` instead of
        // `unaffected`, so heritage guards the stack pointer across every call and
        // the whole stack frame is skewed by the unmodeled extrapop.
        let mut saw_retaddr = false;
        let stackspc = self.manage().get_stack_space().cloned();
        let mut localrange: Option<unlace_base::address::RangeList> = None;
        let mut paramrange = unlace_base::address::RangeList::new();
        for child in proto.get_children().iter() {
            match child.get_name() {
                "input" => {
                    self.decode_pentry_list(child, &mut model, true)?;
                    if let Some(spc) = &stackspc {
                        model.input().get_range_list(spc, &mut paramrange);
                    }
                }
                "localrange" => {
                    let ranges =
                        localrange.get_or_insert_with(unlace_base::address::RangeList::new);
                    for (spc, first, last) in self.decode_proto_ranges(child)? {
                        ranges.insert_range(spc, first, last);
                    }
                }
                "paramrange" => {
                    for (spc, first, last) in self.decode_proto_ranges(child)? {
                        paramrange.insert_range(spc, first, last);
                    }
                }
                "output" => self.decode_pentry_list(child, &mut model, false)?,
                // else if (subId == ELEM_UNAFFECTED) { ... effectlist.back().decode(unaffected) }
                "unaffected" => {
                    self.decode_effect_block(
                        child,
                        &mut model,
                        crate::fspec::effect_type::UNAFFECTED,
                    )?;
                }
                // else if (subId == ELEM_KILLEDBYCALL) { ... decode(killedbycall) }
                "killedbycall" => {
                    self.decode_effect_block(
                        child,
                        &mut model,
                        crate::fspec::effect_type::KILLEDBYCALL,
                    )?;
                }
                // else if (subId == ELEM_RETURNADDRESS) { ... decode(return_address); sawretaddr=true }
                "returnaddress" => {
                    self.decode_effect_block(
                        child,
                        &mut model,
                        crate::fspec::effect_type::RETURN_ADDRESS,
                    )?;
                    saw_retaddr = true;
                }
                // else if (subId == ELEM_INTERNAL_STORAGE) { while peekElement: internalstorage.back().decode() }
                // (fspec.cc:2673) — registers (e.g. MIPS gp) the compiler may save to
                // the stack across a call; ActionInternalStorage unmaps their
                // eventual-constant spills so the value forwards across the call.
                "internal_storage" => {
                    self.decode_internal_storage_block(child, &mut model)?;
                }
                _ => {}
            }
        }
        // C++ `ProtoModel::decode` tail: a spec that states its ranges replaces
        // `defaultLocalRange`/`defaultParamRange`.
        if let Some(ranges) = localrange {
            model.set_local_range(ranges);
        }
        if !paramrange.empty() {
            model.set_param_range(paramrange);
        }
        // `glb->defaultReturnAddr` is decoded from the cspec's top-level
        // <returnaddress> (C++ Architecture::parseExtraRules / decode); parse that
        // root element directly here so the per-call retaddr store is modeled even
        // when the <prototype> omits its own <returnaddress> (the x86-64-gcc case).
        if !saw_retaddr {
            if let Some(ra_block) = find_child(root, "returnaddress") {
                self.decode_effect_block(
                    &ra_block,
                    &mut model,
                    crate::fspec::effect_type::RETURN_ADDRESS,
                )?;
            }
        }
        // (unlace, ida) State the x86 direction-flag guarantee the compiler spec
        // leaves implicit. See `unlace_dfunaffected`: without it every call plants
        // `DF = INDIRECT(DF, <call>)`, the entry-block `DF = 0` never reaches the
        // string-op stride, and `1 - 2*DF` survives into the output as
        // `(uint8)v18 * -2 + 1`. Applied only where the spec is silent, and a
        // structural no-op on any language with no `DF` register.
        (crate::architecture::default_pass_hooks().dfunaffected_assert_direction_flag_unaffected)(
            &mut model,
            &|nm| self.translate.probe_register_varnode(nm),
        );
        Ok(model)
    }

    /// The `<range>` children of a prototype's `<localrange>`/`<paramrange>`
    /// (C++ `Range::decode`), resolved to `(space, first, last)`.
    fn decode_proto_ranges(
        &self,
        block: &Rc<unlace_base::xml::Element>,
    ) -> UnlaceResult<Vec<(Rc<AddrSpace>, uintb, uintb)>> {
        use unlace_base::address::{Range, RangeProperties};
        use unlace_base::marshal::{IdRegistry, XmlDecode};
        let manager = self.translate.manager_rc();
        let registry = IdRegistry::with_base_ids();
        let mut out = Vec::new();
        for child in block
            .get_children()
            .iter()
            .filter(|c| c.get_name() == "range")
        {
            let mut decoder = XmlDecode::new_with_root(&manager, &registry, child, 0);
            let mut props = RangeProperties::new();
            props.decode(&mut decoder)?;
            let range = Range::from_properties(&props, self.manage())?;
            out.push((
                Rc::clone(range.get_space()),
                range.get_first(),
                range.get_last(),
            ));
        }
        Ok(out)
    }

    /// Decode every *named* prototype model the compiler spec declares, in
    /// document order (C++ `Architecture::parseCompilerConfig`'s
    /// `ELEM_PROTOTYPE`/`ELEM_RESOLVEPROTOTYPE` -> `decodeProto`,
    /// architecture.cc:1254/1280, plus the `ELEM_MODELALIAS` arm at
    /// architecture.cc:1310).  `defaultfp` is the already-decoded
    /// `<default_proto>` model, which the later elements may reference by name.
    /// The C++ post-parse invariant "we must have a `__thiscall` calling
    /// convention" (architecture.cc:1342) is honored at the tail.
    ///
    /// Returns the models to register, in registration order.  Unlike the C++,
    /// which throws on any malformed element, a model that fails to decode (an
    /// unknown strategy, a `<pentry>` naming a register this language does not
    /// have, a `<resolveprototype>` whose constituents are not standard lists)
    /// is skipped: the cspec corpus spans every vendored processor, and one
    /// undecodable named model must not cost the architecture its default one.
    ///
    /// `<eval_current_prototype>`/`<eval_called_prototype>` are deliberately NOT
    /// applied here — they change which model every function is evaluated with,
    /// which is a behavior change this registration pass does not make.
    fn decode_named_protos(
        &self,
        root: &Rc<unlace_base::xml::Element>,
        defaultfp: &Rc<ProtoModel>,
    ) -> Vec<Rc<ProtoModel>> {
        let mut byname: std::collections::BTreeMap<String, Rc<ProtoModel>> =
            std::collections::BTreeMap::new();
        byname.insert(defaultfp.get_name().to_string(), Rc::clone(defaultfp));
        let mut out: Vec<Rc<ProtoModel>> = Vec::new();

        for child in root.get_children().iter() {
            let decoded = match child.get_name() {
                "prototype" => self.decode_proto_model(child, root).ok(),
                "resolveprototype" => self.decode_resolve_proto(child, &byname).ok(),
                "modelalias" => match (attr_str(child, "name"), attr_str(child, "parent")) {
                    (Some(nm), Some(parent)) => byname
                        .get(&parent)
                        .and_then(|p| create_model_alias(&nm, p).ok()),
                    _ => None,
                },
                _ => continue,
            };
            let Some(model) = decoded else { continue };
            // C++ throws "Duplicate ProtoModel name"; keep the first, which is the
            // default model when a spec re-declares it.
            if byname.contains_key(model.get_name()) {
                continue;
            }
            let rc = Rc::new(model);
            byname.insert(rc.get_name().to_string(), Rc::clone(&rc));
            out.push(rc);
        }
        // (unlace `swiftcall`) Swift's four models, derived from the default one
        // on a language Swift targets when the spec declares neither.
        let default_el =
            find_child(root, "default_proto").and_then(|dp| find_child(&dp, "prototype"));
        let regs = (crate::architecture::default_pass_hooks().swiftcall_swift_registers)(&|name| {
            self.translate
                .probe_register_varnode(name.as_bytes())
                .map(|v| v.size as int4)
        });
        if let (Some(el), Some((self_reg, error_reg, async_reg))) = (default_el, regs) {
            for (name, throws, is_async) in crate::specnames::SWIFT_MODELS {
                if byname.contains_key(name) {
                    continue;
                }
                let derived = Rc::new((self.pass_hooks().swiftcall_derive_model)(
                    &el,
                    name,
                    self_reg,
                    throws.then_some(error_reg),
                    is_async.then_some(async_reg),
                ));
                if let Ok(model) = self.decode_proto_model(&derived, root) {
                    let rc = Rc::new(model);
                    byname.insert(name.to_string(), Rc::clone(&rc));
                    out.push(rc);
                }
            }
        }
        // C++ `parseCompilerConfig` tail, architecture.cc:1342 — "We must have a
        // __thiscall calling convention": when the spec declares none, clone it
        // off the default so `getModel("__thiscall")` resolves on every language.
        if !byname.contains_key("__thiscall") {
            if let Ok(m) = create_model_alias("__thiscall", defaultfp) {
                out.push(Rc::new(m));
            }
        }
        out
    }

    /// Decode one `<resolveprototype>` element into a merged model (C++
    /// `ProtoModelMerged::decode`, fspec.cc:2904): each `<model name=".."/>`
    /// child names an already-registered constituent that is folded in, then the
    /// merged input list is finalized.
    fn decode_resolve_proto(
        &self,
        el: &Rc<unlace_base::xml::Element>,
        byname: &std::collections::BTreeMap<String, Rc<ProtoModel>>,
    ) -> UnlaceResult<ProtoModel> {
        let name = attr_str(el, "name")
            .ok_or_else(|| UnlaceError::lowlevel("<resolveprototype> has no name"))?;
        let mut model = ProtoModel::new_merged(self.manage());
        model.set_name(&name);
        let mut count = 0;
        for child in el.get_children().iter() {
            if child.get_name() != "model" {
                continue;
            }
            let sub = attr_str(child, "name")
                .ok_or_else(|| UnlaceError::lowlevel("<model> has no name"))?;
            let constituent = byname
                .get(&sub)
                .ok_or_else(|| UnlaceError::lowlevel(format!("Missing prototype model: {sub}")))?;
            model.merged_push(Rc::clone(constituent))?;
            count += 1;
        }
        if count == 0 {
            return Err(UnlaceError::lowlevel("<resolveprototype> has no <model>"));
        }
        model.merged_finalize();
        Ok(model)
    }

    /// Decode one `<unaffected>`/`<killedbycall>`/`<returnaddress>` effect block
    /// (C++ `ProtoModel::decode`'s effect-block arms, fspec.cc): each child is a
    /// `<register>`/`<addr>`/`<varnode>` storage element decoded into an
    /// [`EffectRecord`] of the given `eff_type` and appended to the model's
    /// effect list.  Mirrors `decode_pentry_storage`'s storage resolution.
    fn decode_effect_block(
        &self,
        block: &Rc<unlace_base::xml::Element>,
        model: &mut ProtoModel,
        eff_type: u32,
    ) -> UnlaceResult<()> {
        for child in block.get_children().iter() {
            let vd = match child.get_name() {
                // <register name=".."/>  ->  getTrans()->getRegister(name)
                "register" => {
                    let nm = attr_str(child, "name")
                        .ok_or_else(|| UnlaceError::lowlevel("<register> has no name"))?;
                    self.translate.get_register_varnode(nm.as_bytes())?
                }
                // <varnode space=".." offset=".." size=".."/> or <addr .../>
                "varnode" | "addr" => {
                    let spname = attr_str(child, "space")
                        .ok_or_else(|| UnlaceError::lowlevel("<varnode> effect has no space"))?;
                    let space = self
                        .manage()
                        .get_space_by_name(&spname)
                        .ok_or_else(|| UnlaceError::lowlevel("<varnode> effect unknown space"))?
                        .clone();
                    let offset = attr_str(child, "offset")
                        .and_then(|s| parse_int(&s))
                        .unwrap_or(0);
                    let size = attr_str(child, "size")
                        .and_then(|s| s.parse::<u32>().ok())
                        .unwrap_or(0);
                    unlace_num::pcoderaw::VarnodeData {
                        space: Some(space),
                        offset,
                        size,
                    }
                }
                _ => continue,
            };
            model.push_effect(crate::fspec::EffectRecord::from_varnode(vd, eff_type));
        }
        Ok(())
    }

    /// Decode an `<internal_storage>` block (C++ `ProtoModel::decode`,
    /// `fspec.cc:2673`): each `<register>`/`<varnode>`/`<addr>` child is a storage
    /// `VarnodeData` appended to the model's internal-storage list (sorted by
    /// `push_internal_storage`).  Same storage resolution as `decode_effect_block`.
    fn decode_internal_storage_block(
        &self,
        block: &Rc<unlace_base::xml::Element>,
        model: &mut ProtoModel,
    ) -> UnlaceResult<()> {
        for child in block.get_children().iter() {
            let vd = match child.get_name() {
                "register" => {
                    let nm = attr_str(child, "name")
                        .ok_or_else(|| UnlaceError::lowlevel("<register> has no name"))?;
                    self.translate.get_register_varnode(nm.as_bytes())?
                }
                "varnode" | "addr" => {
                    let spname = attr_str(child, "space").ok_or_else(|| {
                        UnlaceError::lowlevel("<varnode> internal_storage has no space")
                    })?;
                    let space = self
                        .manage()
                        .get_space_by_name(&spname)
                        .ok_or_else(|| {
                            UnlaceError::lowlevel("<varnode> internal_storage unknown space")
                        })?
                        .clone();
                    let offset = attr_str(child, "offset")
                        .and_then(|s| parse_int(&s))
                        .unwrap_or(0);
                    let size = attr_str(child, "size")
                        .and_then(|s| s.parse::<u32>().ok())
                        .unwrap_or(0);
                    unlace_num::pcoderaw::VarnodeData {
                        space: Some(space),
                        offset,
                        size,
                    }
                }
                _ => continue,
            };
            model.push_internal_storage(vd);
        }
        Ok(())
    }

    /// Decode the `<pentry>`/`<group>` children of an `<input>`/`<output>`
    /// element into the model's input or output [`ParamListStandard`] (C++
    /// `ParamListStandard::decode`, `fspec.cc:1453`).  `is_input` selects the
    /// list.  Mirrors the `<pentry>`/`<group>` dispatch loop (`parsePentry`,
    /// `fspec.cc:1228`; `parseGroup`, `fspec.cc:1264`) + the `finish_decode` tail
    /// (resource boundary, `calcDelay`, `populateResolver`).
    fn decode_pentry_list(
        &self,
        list_el: &Rc<unlace_base::xml::Element>,
        model: &mut ProtoModel,
        is_input: bool,
    ) -> UnlaceResult<()> {
        // C++ ParamListStandard::decode: normalstack = !reverse; the model's
        // stackgrowsnegative drives it (the default cspec stack convention).
        let normalstack = true;
        // numgroup tracks the running group id, exactly as C++
        // `ParamListStandard::numgroup`.  Entries accumulate in `pentries`, which
        // doubles as the running prefix consulted by resolveFirst/resolveJoin/
        // resolveOverlap (the C++ passes its growing `entry` vector for the same
        // purpose).
        let mut numgroup: int4 = 0;
        let mut pentries: Vec<crate::fspec::ParamEntry> = Vec::new();
        for child in list_el.get_children().iter() {
            match child.get_name() {
                // C++ fspec.cc:1482-1484: a bare <pentry> is parsed at the current
                // numgroup with grouped == false.
                "pentry" => {
                    let entry =
                        self.decode_pentry(child, numgroup, normalstack, false, &pentries)?;
                    // C++ parsePentry tail (fspec.cc:1251): numgroup advances past
                    // the entry's highest group (1 past for an exclusion entry).
                    let maxgroup = entry.get_all_groups().last().copied().unwrap_or(numgroup) + 1;
                    if maxgroup > numgroup {
                        numgroup = maxgroup;
                    }
                    pentries.push(entry);
                }
                // C++ fspec.cc:1485-1487 + parseGroup (fspec.cc:1264): every
                // <pentry> inside the <group> shares basegroup == numgroup and is
                // parsed with grouped == true.
                "group" => {
                    let basegroup = numgroup;
                    // C++ parseGroup keeps the two previous entries to enforce
                    // ParamEntry::orderWithinGroup pairwise (fspec.cc:1276-1282).
                    let mut prev1: Option<usize> = None;
                    let mut prev2: Option<usize> = None;
                    for gchild in child.get_children().iter() {
                        if gchild.get_name() != "pentry" {
                            // C++ parseGroup only ever peeks <pentry> elements
                            // inside <group>; ignore stray text/whitespace nodes.
                            continue;
                        }
                        let entry =
                            self.decode_pentry(gchild, basegroup, normalstack, true, &pentries)?;
                        if entry.get_space().get_type() == unlace_base::space::spacetype::IPTR_JOIN
                        {
                            return Err(UnlaceError::lowlevel(
                                "<pentry> in the join space not allowed in <group> tag",
                            ));
                        }
                        let maxgroup =
                            entry.get_all_groups().last().copied().unwrap_or(basegroup) + 1;
                        if maxgroup > numgroup {
                            numgroup = maxgroup;
                        }
                        let cur = pentries.len();
                        pentries.push(entry);
                        // orderWithinGroup(previous1, cur) and (previous2, cur).
                        if let Some(p1) = prev1 {
                            crate::fspec::ParamEntry::order_within_group(
                                &pentries[p1],
                                &pentries[cur],
                            )?;
                            if let Some(p2) = prev2 {
                                crate::fspec::ParamEntry::order_within_group(
                                    &pentries[p2],
                                    &pentries[cur],
                                )?;
                            }
                        }
                        prev2 = prev1;
                        prev1 = Some(cur);
                    }
                }
                _ => {}
            }
        }
        // C++ ParamListStandard::decode (fspec.cc:1453): after the
        // `<pentry>`/`<group>` elements the loop reads any `<rule>` elements
        // (`modelRules.emplace_back(); modelRules.back().decode(decoder,this)`).
        // The rule decoders consult the populated resource (`getSpacebase`,
        // `getStackEntry`, `isBigEndian`), so the entries are pushed first; the
        // `<rule>` subtrees are then decoded against the live resource via an
        // `XmlDecode` rooted on each `<rule>` element (the modelrules ids are
        // registered on a fresh registry).
        let plist = if is_input {
            model.input_mut()
        } else {
            model.output_mut()
        };
        for e in pentries {
            plist.push_entry(e);
        }
        let rule_els: Vec<Rc<unlace_base::xml::Element>> = list_el
            .get_children()
            .iter()
            .filter(|c| c.get_name() == "rule")
            .cloned()
            .collect();
        if !rule_els.is_empty() {
            let manager = self.manage();
            let mut registry = unlace_base::marshal::IdRegistry::with_base_ids();
            (crate::architecture::default_pass_hooks().modelrules_register_ids)(&mut registry);
            for rule_el in rule_els.iter() {
                let rule = {
                    let mut decoder = unlace_base::marshal::XmlDecode::new_with_root(
                        manager, &registry, rule_el, 0,
                    );
                    crate::modelrules::ModelRule::decode(&mut decoder, plist)?
                };
                plist.push_model_rule(rule);
            }
        }
        // C++ tail: resourceStart / calcDelay / populateResolver.
        plist.finish_decode();
        // C++ fspec.cc:1507-1512: if pointermax > 0, append a trailing
        // ConvertToPointer rule (a SizeRestrictedFilter(pointermax+1,0) feeding a
        // ConvertToPointer action).  `pointermax` is the `<input>`/`<output>`
        // element attribute (default 0 => no rule).
        if let Some(pmax) = attr_str(list_el, "pointermax").and_then(|s| s.parse::<int4>().ok()) {
            if pmax > 0 {
                plist.push_pointermax_rule(pmax);
            }
        }
        Ok(())
    }

    /// Decode one `<pentry>` element into a [`ParamEntry`] (C++
    /// `ParamEntry::decode`).  Reads `minsize`/`maxsize`/`align`/`storage`/
    /// `metatype`/`extension` attributes and the `<register>`/`<addr>` storage.
    fn decode_pentry(
        &self,
        pentry: &Rc<unlace_base::xml::Element>,
        group: int4,
        normalstack: bool,
        grouped: bool,
        prev: &[crate::fspec::ParamEntry],
    ) -> UnlaceResult<crate::fspec::ParamEntry> {
        use crate::dtype::{string2typeclass, type_class};
        use crate::fspec::param_entry_flags;
        let mut size: int4 = -1;
        let mut minsize: int4 = -1;
        let mut alignment: int4 = 0;
        let mut type_ = type_class::TYPECLASS_GENERAL;
        let mut flags: uint4 = 0;
        if let Some(v) = attr_str(pentry, "minsize") {
            minsize = v
                .parse()
                .map_err(|_| UnlaceError::lowlevel("bad <pentry> minsize"))?;
        }
        if let Some(v) = attr_str(pentry, "maxsize") {
            size = v
                .parse()
                .map_err(|_| UnlaceError::lowlevel("bad <pentry> maxsize"))?;
        }
        // size="..." (old) and align="..." (new) both set alignment.
        if let Some(v) = attr_str(pentry, "size") {
            alignment = v
                .parse()
                .map_err(|_| UnlaceError::lowlevel("bad <pentry> size"))?;
        }
        if let Some(v) = attr_str(pentry, "align") {
            alignment = v
                .parse()
                .map_err(|_| UnlaceError::lowlevel("bad <pentry> align"))?;
        }
        if let Some(v) = attr_str(pentry, "storage").or_else(|| attr_str(pentry, "metatype")) {
            type_ = string2typeclass(&v)?;
        }
        if let Some(ext) = attr_str(pentry, "extension") {
            flags &= !(param_entry_flags::SMALLSIZE_ZEXT
                | param_entry_flags::SMALLSIZE_SEXT
                | param_entry_flags::SMALLSIZE_INTTYPE);
            match ext.as_str() {
                "sign" => flags |= param_entry_flags::SMALLSIZE_SEXT,
                "zero" => flags |= param_entry_flags::SMALLSIZE_ZEXT,
                "inttype" => flags |= param_entry_flags::SMALLSIZE_INTTYPE,
                "float" => flags |= param_entry_flags::SMALLSIZE_FLOATEXT,
                "none" => {}
                _ => return Err(UnlaceError::lowlevel("Bad <pentry> extension attribute")),
            }
        }
        if size == -1 || minsize == -1 {
            return Err(UnlaceError::lowlevel("ParamEntry not fully specified"));
        }
        // Storage address: <register name=".."/> or <addr space=".." offset=".."/>.
        let (space, mut addressbase, register) = self.decode_pentry_storage(pentry)?;
        let extension = (crate::architecture::default_pass_hooks().registerslots_decode)(
            pentry, register, size, alignment, flags,
        )?;
        if let Some(extension) = &extension {
            addressbase = extension.input.offset;
        }
        flags |= (self.pass_hooks().stackparamalign_decode)(pentry, &space, alignment, size)?;
        let mut entry = crate::fspec::ParamEntry::seed(
            group,
            type_,
            space,
            addressbase,
            size,
            minsize,
            alignment,
            flags,
            normalstack,
            grouped,
            prev,
            self.manage(),
        )?;
        entry.register_extension = extension;
        Ok(entry)
    }

    /// Resolve storage, retaining the physical extent of a named register.
    fn decode_pentry_storage(
        &self,
        pentry: &Rc<unlace_base::xml::Element>,
    ) -> UnlaceResult<(
        Rc<unlace_base::space::AddrSpace>,
        uintb,
        Option<unlace_num::pcoderaw::VarnodeData>,
    )> {
        for child in pentry.get_children().iter() {
            match child.get_name() {
                "register" => {
                    let nm = attr_str(child, "name")
                        .ok_or_else(|| UnlaceError::lowlevel("<register> has no name"))?;
                    let vd = self.translate.get_register_varnode(nm.as_bytes())?;
                    let space = vd
                        .space
                        .clone()
                        .ok_or_else(|| UnlaceError::lowlevel("register has no space"))?;
                    return Ok((space, vd.offset, Some(vd)));
                }
                "addr" => {
                    let spname = attr_str(child, "space")
                        .ok_or_else(|| UnlaceError::lowlevel("<addr> has no space"))?;
                    let space = self
                        .manage()
                        .get_space_by_name(&spname)
                        .ok_or_else(|| UnlaceError::lowlevel("<addr> unknown space"))?
                        .clone();
                    // C++ `VarnodeData::decodeFromAttributes` (pcoderaw.cc:33) reads the
                    // `space` attribute, then dispatches `space->decodeAttributes(...)`.
                    // For the join space that is `JoinSpace::decodeAttributes`
                    // (space.cc:539): the `<addr space="join" piece1=".." piece2=".."/>`
                    // pentry must be resolved by joining its register pieces, not read
                    // as a plain offset.  Without this dispatch the x86 struct-return
                    // (`<addr space="join" piece1="EDX" piece2="EAX"/>`) output pentry
                    // decodes to offset 0 and `decode_default_proto` fails -> empty model.
                    if space.get_type() == unlace_base::space::spacetype::IPTR_JOIN {
                        let off = self.decode_join_addr(child)?;
                        return Ok((space, off, None));
                    }
                    let off = attr_str(child, "offset")
                        .and_then(|s| parse_int(&s))
                        .unwrap_or(0);
                    return Ok((space, off, None));
                }
                _ => {}
            }
        }
        Err(UnlaceError::lowlevel(
            "<pentry> has no <register>/<addr> storage",
        ))
    }

    /// Resolve a `<addr space="join" piece1=".." piece2=".."/>` element to the
    /// unified offset within the join space (C++ `JoinSpace::decodeAttributes`,
    /// space.cc:539).
    ///
    /// "piece1" corresponds to the most significant piece.  Each piece is either
    /// a register name (no `:` — `getTrans()->getRegister(attrVal)`) or a
    /// `space:offset:size` triple.  An optional `logicalsize` attribute carries
    /// the unified size for a single-piece (float) join.  `find_add_join`
    /// (space.rs:3014) constructs the logical address; we return its unified
    /// offset (the `addr` arm has already resolved the join `AddrSpace`).
    ///
    /// This walks the XML element's attributes directly (the proto decode runs
    /// over `xml::Element`s, not a `Decoder`), reproducing the C++
    /// `getNextAttributeId` / `getIndexedAttributeId(ATTRIB_PIECE)` loop: the
    /// legacy `pieceN` attribute name maps to `ATTRIB_PIECE` index `N-1`.
    fn decode_join_addr(&self, addr_el: &Rc<unlace_base::xml::Element>) -> UnlaceResult<uintb> {
        use unlace_base::space::VarnodeStorage;
        let mut pieces: Vec<VarnodeStorage> = Vec::new();
        let mut logicalsize: u32 = 0;
        // C++ accumulates `sizesum` but never reads it (kept for line parity).
        let mut _sizesum: u32 = 0;
        let nattr = addr_el.get_num_attributes();
        for i in 0..nattr {
            let name = addr_el.get_attribute_name(i);
            if name == "logicalsize" {
                let raw = String::from_utf8_lossy(addr_el.get_attribute_value_at(i)).into_owned();
                logicalsize = parse_int(&raw)
                    .ok_or_else(|| UnlaceError::lowlevel("bad join logicalsize"))?
                    as u32; // cast: uintb -> uint4 member (C++ readUnsignedInteger)
                continue;
            }
            // The legacy indexed attribute is named "piece1", "piece2", ...; its
            // ATTRIB_PIECE index is (N-1).  Non-`piece*` attributes (e.g.
            // `space`) are skipped, matching the C++ `attribId < ATTRIB_PIECE`
            // / non-piece branches.
            let pos: i32 = match name.strip_prefix("piece") {
                Some(rest) => match rest.parse::<i32>() {
                    Ok(n) if n >= 1 => n - 1,
                    _ => continue,
                },
                None => continue,
            };
            // C++ `if (pos > MAX_PIECES) continue;` (JoinSpace::MAX_PIECES = 64,
            // space.hh:233; the constant is `pub(crate)` to unlace-base, so the
            // literal is repeated here against the same source).
            if pos > 64 {
                continue;
            }
            while pieces.len() <= pos as usize {
                // cast: int4 index -> usize, non-negative here (pos >= 0)
                pieces.push(VarnodeStorage::default());
            }
            let attr_val = String::from_utf8_lossy(addr_el.get_attribute_value_at(i)).into_owned();
            let vdat: VarnodeStorage = match attr_val.find(':') {
                None => {
                    // Register-name piece: C++ `getTrans()->getRegister(attrVal)`.
                    let vd = self.translate.get_register_varnode(attr_val.as_bytes())?;
                    VarnodeStorage {
                        space: vd.space,
                        offset: vd.offset,
                        size: vd.size,
                    }
                }
                Some(offpos) => {
                    let rest = &attr_val[offpos + 1..];
                    let szrel = rest.find(':').ok_or_else(|| {
                        UnlaceError::lowlevel("join address piece attribute is malformed")
                    })?;
                    let szpos = offpos + 1 + szrel;
                    let spcname = &attr_val[..offpos];
                    let space = self.manage().get_space_by_name(spcname).cloned();
                    let offset = parse_int(&attr_val[offpos + 1..szpos]).unwrap_or(0);
                    let size64 = parse_int(&attr_val[szpos + 1..]).unwrap_or(0);
                    // C++ extraction into a uint4 saturates on overflow.
                    let size = if size64 > u64::from(u32::MAX) {
                        u32::MAX
                    } else {
                        size64 as u32 // cast: checked above (uintb -> uint4)
                    };
                    VarnodeStorage {
                        space,
                        offset,
                        size,
                    }
                }
            };
            _sizesum = _sizesum.wrapping_add(vdat.size);
            pieces[pos as usize] = vdat; // cast: int4 index -> usize, non-negative here
        }
        let rec = self.manage().find_add_join(&pieces, logicalsize)?;
        // C++ returns `rec->getUnified().offset` (and fills `size`, which the
        // caller `ParamEntry` derives from maxsize, not this).
        Ok(rec.get_unified().offset)
    }

    /// Build the universal Action tree + the "decompile" root (C++
    /// `Architecture::buildAction` -> `allacts.universalAction(this)` +
    /// `resetDefaults()`, architecture.cc:590).  The stack space (if any) is
    /// taken from the engine so the stack-aware passes are scheduled.
    pub fn build_action(&mut self) {
        crate::action::build_default_groups(&mut self.allacts);
        self.build_universal();
        // C++ `Architecture::buildAction` runs `allacts.resetDefaults()`
        // (coreaction.cc `ActionDatabase::resetDefaults` -> `setCurrent(...)`),
        // which leaves the "decompile" root as the current action *before* any
        // function is decompiled.  The merged tree previously deferred the
        // `setCurrent` to the decompile drive, leaving `getCurrentName()` empty
        // at rest; that broke the `phase status`/`pipeline list (current)`
        // readers (unlace_console).  Set it here so the at-rest current name is
        // "decompile", matching upstream `resetDefaults`.
        let _ = self.allacts.set_current("decompile");
    }

    /// Install the universal tree, built with the registered hooks.
    fn build_universal(&mut self) {
        let universal = (self.pass_hooks().universal_action)(self);
        self.allacts.set_universal(universal);
    }

    /// Rebuild the universal tree after a hook registration and re-derive the
    /// current root from it.  The group lists are kept; breakpoints and
    /// disabled rules set on the old roots are not.
    fn rebuild_hooked_actions(&mut self) -> UnlaceResult<()> {
        self.build_universal();
        self.allacts.drop_derived();
        let current = self.allacts.get_current_name().to_string();
        if current.is_empty() {
            return Ok(());
        }
        self.allacts.set_current(&current)
    }

    /// (unlace) Add `rule` to the default pipeline, behind the last rule of
    /// `after_group` in the pool that holds that group
    /// ([`HookRegistry::add_rule`](crate::hooks::HookRegistry::add_rule)).
    pub fn add_rule(
        &mut self,
        after_group: &str,
        state: crate::action::RuleState,
        rule: Box<dyn crate::action::Rule>,
    ) -> UnlaceResult<()> {
        (self.pass_hooks().hooks_add_rule)(&mut self.unlace_tables, after_group, state, rule)?;
        self.rebuild_hooked_actions()
    }

    /// (unlace) Run `callback` on every function at the boundary of `phase`
    /// ([`HookRegistry::on_phase`](crate::hooks::HookRegistry::on_phase)).
    pub fn on_phase(
        &mut self,
        phase: crate::phases::UnlacePhase,
        callback: impl FnMut(&mut Funcdata) + 'static,
    ) -> UnlaceResult<()> {
        (self.pass_hooks().hooks_on_phase)(&mut self.unlace_tables, phase, Box::new(callback))?;
        self.rebuild_hooked_actions()
    }

    /// Register the p-code OpBehavior table (C++ `Architecture::buildInstructions`,
    /// architecture.cc:614 — `TypeOp::registerInstructions(inst,types,translate)`).
    ///
    /// Populates `glb->inst` from the ported `typeop::register_instructions`
    /// (the real `TypeOp::registerInstructions` table, indexed by op-code, with
    /// each op's property-flag word + name).  The flow/print classifiers read
    /// this through [`resolve_typeop`](Architecture::resolve_typeop).
    pub fn build_instructions(&mut self) {
        self.inst = crate::typeop::register_instructions();
        // Build the OpBehavior emulation table alongside the TypeOp metadata
        // (C++ `TypeOp::registerInstructions` attaches an `OpBehavior` to each
        // `TypeOp`; the Rust port keeps them as parallel tables).  The float
        // behaviors need a `FloatFormatProvider`; supply one that owns a clone of
        // the engine's float formats so the table is self-contained (the C++
        // passes the long-lived `Translate *`).
        let provider: Rc<dyn unlace_num::opbehavior::FloatFormatProvider> =
            Rc::new(OwnedFloatFormats::from_translate(self.translate.as_ref()));
        let mut behaviors: Vec<Option<Rc<dyn unlace_num::opbehavior::OpBehavior>>> = Vec::new();
        unlace_num::opbehavior::register_instructions(&mut behaviors, &provider);
        self.opbehaviors = behaviors;
    }

    /// Resolve an op-code to its `TypeOp` property triple (C++ `glb->inst[opc]`).
    ///
    /// Reads the populated `inst` table; falls back to the canonical
    /// [`typeop::type_op_for`](crate::typeop::type_op_for) when the table is
    /// empty (the architecture was constructed but `build_instructions` has not
    /// run yet) so the flow engine always gets the right property flags.
    pub fn resolve_typeop(&self, opc: unlace_num::opcodes::OpCode) -> crate::context::TypeOp {
        match self.inst.get(opc as usize).and_then(|o| o.as_ref()) {
            Some(info) => info.to_type_op(),
            None => crate::typeop::type_op_for(opc),
        }
    }

    /// Resolve an op-code to its emulation [`OpBehavior`](unlace_num::opbehavior::OpBehavior)
    /// (C++ `op->getOpcode()->getBehavior()` — the behavior `glb->inst[opc]`
    /// carries).  Used by `EmulateFunction::set_current_op` for jump-table
    /// emulation.  Returns `None` for an opcode with no behavior installed.
    pub fn op_behavior(
        &self,
        opc: unlace_num::opcodes::OpCode,
    ) -> Option<Rc<dyn unlace_num::opbehavior::OpBehavior>> {
        self.opbehaviors.get(opc as usize).and_then(|o| o.clone())
    }

    /// Drive the post-engine init pipeline against an already-bootstrapped
    /// engine (the `Sleigh` decoded a `.sla` and the loader/context were set —
    /// the work the XML frontend `restoreFromSpec`/`buildTranslator` did).  This
    /// is the tail of C++ `Architecture::init` (architecture.cc:1395) from
    /// `buildTypegrp` onward, with the spec-file/translator build already done
    /// by the caller:
    ///
    /// ```text
    /// buildContext      (engine owns it — context_allow_set is the surface)
    /// buildTypegrp      -> build_typegrp
    /// buildDatabase     (done in `new`)
    /// buildCoreTypes    -> build_core_types
    /// parseCompilerConfig tail -> build_default_proto + finish_typegrp
    /// buildAction       -> build_action
    /// print->initializeFromArchitecture
    /// buildInstructions -> build_instructions
    /// ```
    ///
    /// The full XML spec decode (`parseProcessorConfig`/`parseCompilerConfig`
    /// reading the pspec/cspec tags) is the W6 cspec item; this wires the
    /// subsystem *construction* + ordering so a decoded engine becomes a
    /// decompilation-ready `Architecture`.
    pub fn init_post_engine(&mut self) -> UnlaceResult<()> {
        // C++ `Architecture::restoreFromSpec` (architecture.cc:636-640), right
        // after `copySpaces(newtrans)`: insert the analysis-only fspec/iop/join
        // spaces into the **single** engine manager (LOSS-132).  The engine's
        // `.sla` decode populated const/register/INTMEM/unique/ram; the C++
        // appends fspec, iop, join in that order onto the *same* manager, each
        // at `numSpaces()`.  In the Rust port the engine owns that one manager
        // (shared as `glb`), so we insert through it here.
        self.insert_ir_call_spaces()?;
        // C++ `Architecture::restoreFromSpec` calls `parseProcessorConfig`
        // (architecture.cc:645) before the type/action build.  Apply the pspec
        // `<context_data>` paints now so the engine's context database steers
        // disassembly correctly (e.g. x86-64 lifts as 64-bit, not 16-bit) —
        // the context must be in place before any instruction is decoded.
        self.parse_processor_config()?;
        // C++ `Architecture::restoreFromSpec` (architecture.cc:645) calls
        // `newtrans->setDefaultFloatFormats()` immediately after
        // `parseProcessorConfig` and before `parseCompilerConfig`: if the spec
        // registered no explicit `<float_format>` it installs the IEEE-754 4- and
        // 8-byte defaults so `getFloatFormat(4)`/`getFloatFormat(8)` resolve.
        // Without this the `PrintC::push_float` path (a `float8` constant literal)
        // has no FloatFormat and renders `FLOAT_UNKNOWN` instead of `1.123…`.
        self.translate
            .translate_base_mut()
            .set_default_float_formats();
        // C++ `Architecture::restoreFromSpec` runs `parseCompilerConfig`
        // (architecture.cc:647) after `parseProcessorConfig`; the cspec
        // `<stackpointer>` element (parseCompilerConfig -> ELEM_STACKPOINTER ->
        // `decodeStackPointer`, architecture.cc:1260) creates the formal stack
        // `SpacebaseSpace`.  It must run before `finish_typegrp` (which reads
        // `get_stack_space()` for the stack-pointer size) and before
        // `build_default_proto` (the rest of the cspec decode).  Without it the
        // engine has no IPTR_SPACEBASE space, `s0x…` stack addresses fail to
        // parse, and `Funcdata.localmap` stays `None`.
        self.decode_stack_pointer()?;
        // C++ `parseCompilerConfig` dispatches the cspec `<funcptr>` element
        // (ELEM_FUNCPTR -> `decodeFuncPtrAlign`, architecture.cc:1048) to record
        // how many low bits of a function pointer are alignment-encoding (the ARM
        // Thumb LSB).  Decode it here alongside the other cspec children so the
        // GH-8471 `RulePtrsubUndo` thumb-funcptr guard can read `funcptr_align`.
        self.decode_funcptr_align()?;
        self.build_typegrp();
        // C++ `TypeFactory::TypeFactory` runs `setupSizes()` (the alignment map
        // + the core sizes) in the constructor, *before* `buildCoreTypes` calls
        // `setCoreType` (which queries the alignment map via `getAlignment`).
        // Mirror that ordering here: finish the size/alignment setup first.
        self.finish_typegrp();
        self.build_core_types()?;
        // C++ parseCompilerConfig dispatches each cspec child; the <callfixup>
        // elements register their injections into pcodeinjectlib.  Run this BEFORE
        // build_default_proto, which `take()`s the cspec XML.
        self.decode_call_fixups()?;
        // (unlace) The unlace-owned compiler-helper fixups, registered right after the
        // cspec's own so `init_userops_and_fixups`'s `parse_inject_all` compiles
        // them together.  Keeps the vendored spec tree byte-identical to upstream.
        self.decode_unlace_call_fixups()?;
        // C++ restoreFromSpec: userops.initialize(this) (architecture.cc:641) +
        // the `<callotherfixup>` dispatch inside parseCompilerConfig
        // (architecture.cc:1294).  Run after the call-fixups are registered so
        // the whole inject library (callfixup + callotherfixup) is compiled
        // together by parseInject — the MIPS `setISAMode` fixup that makes the
        // dead ISA-mode-switch CALLOTHER injectable.
        let cspec = self
            .cspec_xml
            .as_deref()
            .map(std::str::from_utf8)
            .transpose()
            .map_err(|_| UnlaceError::lowlevel("Compiler specification is not UTF-8"))?
            .map(str::to_owned);
        let manager = self.translate.manager_rc();
        (crate::architecture::default_pass_hooks().callmechanisms_register)(
            cspec.as_deref(),
            manager.as_ref(),
            self,
        )?;
        self.init_userops_and_fixups()?;
        // (unlace) Eagerly register the string-copy builtins (C++ lazy
        // `userops.registerBuiltin` is called from
        // `ArraySequence::buildStringCopy` / `Funcdata::getInternalString` during
        // the `RuleStringStore`/`RuleStringCopy` transform).  Those transforms run
        // through the per-function ArchContext (`glb`), which carries no mutable
        // `userops` handle; the printer, however, reads back the builtin
        // name/display/typed-params on *this* real architecture (`opCallother` ->
        // `userops.getOp`).  The builtin set + their typed signatures are fixed,
        // so registering them once here (after the type factory is built) is
        // equivalent to the lazy C++ registration and keeps the printer self-
        // contained.  Idempotent (`register_builtin` is a no-op on a present id).
        self.register_string_builtins()?;
        // C++ `parseCompilerConfig` dispatches the cspec `<global>` element
        // (ELEM_GLOBAL, architecture.cc:1276-1277) into a deferred `globalRanges`
        // vector, then applies it via `addToGlobalScope` (architecture.cc:1336-1337)
        // AFTER `<stackpointer>`/`<spacebase>` are parsed (so all spaces exist).
        // Seed the global scope's rangetree here, after `decode_stack_pointer`
        // created the stack `SpacebaseSpace`, so an empty `<range space="ram"/>`
        // widens to the whole ram space and global RAM Varnodes pick up
        // `mapped|addrtied|persist`.  Must run before `adjust_caches` (which only
        // resizes per-scope maptables, not the rangetree) — ordering matches C++.
        self.decode_global()?;
        // (unlace `goreg`) With the golang cspec active, make the goroutine
        // register a named, typed global (`g: runtime.g *`) — the same
        // global-scope mechanism as a cspec `<global><register/>`, applied
        // unlace-side so the vendored spec stays pristine.
        self.unlace_install_goreg()?;
        self.build_default_proto();
        self.unlace_go_stack_default()?;
        // Share `defaultfp` + the engine address-space manager into the type
        // factory so the C-declaration grammar's nested function-pointer
        // `buildType` path (`FunctionModifier::modType` -> `getTypeCode(
        // PrototypePieces)` -> `TypeCode::setPrototype`) can run.  The C++
        // `TypeFactory` reaches both through its `Architecture *glb`; the unlace
        // factory is standalone, so the link is established once here, right
        // after `defaultfp` is finalized.
        self.types.set_proto_context(self.translate.manager_rc());
        self.share_proto_models();
        self.build_action();
        self.print.initialize_from_architecture();
        // C++ `symboltab->adjustCaches()` (architecture.cc, end of restoreFromSpec)
        // resizes every scope's per-space `maptable` to `numSpaces()` after the
        // spec decode created new spaces.  The global scope was attached with the
        // engine's space count *before* `insert_ir_call_spaces` (fspec/iop/join)
        // and `decode_stack_pointer` (the stack `SpacebaseSpace`) appended their
        // spaces — so the maptable must now grow, or a `map addr s0x…` into the
        // higher-indexed stack space indexes past its end.
        let num_spaces = self.manage().num_spaces();
        self.symboltab.adjust_caches(num_spaces);
        // C++ `Architecture::buildSymbols(store)` (architecture.cc:1408), right
        // after `adjustCaches` and before `postSpecFile`/`buildInstructions`:
        // apply the pspec `<default_symbols>` (e.g. the 8051 SFR names `P0`@SFR:80,
        // `P1`@SFR:90) as named global symbols.  Without this an SFR write renders
        // `dat_80 = 1` instead of `P0 = 1`.
        self.build_symbols()?;
        self.build_instructions();
        // C++ `min_funcsymbol_size = translate->getAlignment()` when <= 8
        // (restoreFromSpec, architecture.cc:646).
        let align = self.translate.get_alignment();
        if align <= 8 {
            self.min_funcsymbol_size = align;
        }
        // C++ `Architecture::postSpecFile()` (architecture.cc:620-624), called once
        // the whole spec is restored: `cacheAddrSpaceProperties()`.  Run last, after
        // `decode_global` pushed the cspec `<global>` spaces and every analysis
        // space (fspec/iop/join/stack) exists, so the sort/dedup/filter sees the
        // final space set and the default data space (`ram`) leads `inferPtrSpaces`.
        self.cache_addr_space_properties();
        // C++ `initializeSegments` (end of parseCompilerConfig); run last, once the
        // inject library is compiled and the op behaviors exist for the snippets.
        self.initialize_segments()?;
        Ok(())
    }
}

// ---------------------------------------------------------------------------
// ArchOptionContext — wire the `option NAME VALUE` command (the most-used
// datatest command) into the real Architecture / printer / type factory.
// (w9x-arch-engine-glue, item #2)
//
// Each method is the `glb->…` body the matching `ArchOption::apply`
// (options.cc) reaches; the `// STUB(...)` markers in the options.rs trait doc
// are now wired to the real subsystems this `Architecture` owns.
// ---------------------------------------------------------------------------

impl ArchOptionContext for Architecture {
    // --- plain config fields ----------------------------------------------
    fn set_readonly_propagate(&mut self, val: bool) {
        self.readonlypropagate = val;
    }
    fn set_infer_pointers(&mut self, val: bool) {
        self.infer_pointers = val;
    }
    fn set_analyze_for_loops(&mut self, val: bool) {
        self.analyze_for_loops = val;
    }
    fn set_max_jumptable_size(&mut self, val: uint4) {
        self.max_jumptable_size = val;
    }
    fn set_max_instructions(&mut self, val: int4) {
        self.max_instructions = val as uint4;
    }
    fn alias_block_level(&self) -> int4 {
        self.alias_block_level
    }
    fn set_alias_block_level(&mut self, val: int4) {
        self.alias_block_level = val;
    }

    // --- flow option flags -------------------------------------------------
    fn flow_options(&self) -> uint4 {
        self.flowoptions
    }
    fn set_flow_options(&mut self, val: uint4) {
        if self.flowoptions != val {
            (self.pass_hooks().callwide_clear)(&mut self.unlace_tables);
        }
        self.flowoptions = val;
    }

    // --- split-datatype config --------------------------------------------
    fn split_datatype_config(&self) -> uint4 {
        self.split_datatype_config
    }
    fn set_split_datatype_config(&mut self, val: uint4) {
        self.split_datatype_config = val;
    }

    // --- nan-ignore config -------------------------------------------------
    fn nan_ignore_all(&self) -> bool {
        self.nan_ignore_all
    }
    fn set_nan_ignore_all(&mut self, val: bool) {
        self.nan_ignore_all = val;
    }
    fn nan_ignore_compare(&self) -> bool {
        self.nan_ignore_compare
    }
    fn set_nan_ignore_compare(&mut self, val: bool) {
        self.nan_ignore_compare = val;
    }

    // --- prototype models (C++ defaultfp / evalfp_current) -----------------
    fn set_default_extra_pop(&mut self, expop: int4) {
        (self.pass_hooks().callwide_clear)(&mut self.unlace_tables);
        // C++ `glb->defaultfp->setExtraPop(expop)` (+ eval-model spreads).
        // The registry holds the model behind `Rc`; mutate the shared model
        // (and keep the registry entry pointing at the same data via the same
        // `Rc`).  Both `defaultfp` and the registry entry are the one `Rc`.
        if let Some(fp) = self.defaultfp.as_mut() {
            Rc::make_mut(fp).set_extra_pop(expop);
            // Re-publish the (now-distinct) Rc into the registry so getModel
            // and defaultfp stay the same object (C++ shared-pointer identity).
            let name = fp.get_name().to_string();
            self.proto_models.insert(name, Rc::clone(fp));
            self.share_proto_models();
        }
    }
    fn set_function_extra_pop(&mut self, name: &str, expop: int4) -> UnlaceResult<()> {
        // C++ `OptionExtraPop::apply`: queryFunction(name), then
        // `getFuncProto().setExtraPop(expop)`; parked on the symbol like inline.
        let sid = self.query_global_function(name)?;
        (self.pass_hooks().callwide_clear)(&mut self.unlace_tables);
        self.symboltab.set_function_extra_pop(sid, expop);
        Ok(())
    }
    fn set_default_model(&mut self, name: &str) -> UnlaceResult<()> {
        // C++ `glb->setDefaultModel(getModel(p1))`.
        match self.proto_models.get(name).cloned() {
            Some(model) => {
                self.set_default_model_rc(model);
                self.share_proto_models();
                Ok(())
            }
            None => Err(UnlaceError::lowlevel(format!(
                "Unknown prototype model :{name}"
            ))),
        }
    }
    fn set_eval_current_model(&mut self, name: &str) -> UnlaceResult<()> {
        // C++ `glb->evalfp_current = getModel(p1)`.
        match self.proto_models.get(name).cloned() {
            Some(model) => {
                if !self
                    .evalfp_current
                    .as_ref()
                    .is_some_and(|old| Rc::ptr_eq(old, &model))
                {
                    (self.pass_hooks().callwide_clear)(&mut self.unlace_tables);
                }
                self.evalfp_current = Some(model);
                Ok(())
            }
            None => Err(UnlaceError::parse(format!(
                "Unknown prototype model: {name}"
            ))),
        }
    }

    // --- per-function properties (C++ OptionInline / OptionNoReturn) -------
    fn set_function_inline(&mut self, name: &str, val: bool) -> UnlaceResult<()> {
        // C++ `OptionInline::apply`: query the global function, then set its proto inline flag.
        // The FunctionSymbol's lazily-built Funcdata/FuncProto is W5; the inline flag
        // is parked on the symbol (read back by FlowInfo::queryCall at flow time).
        let sid = self.query_global_function(name)?;
        (self.pass_hooks().callwide_clear)(&mut self.unlace_tables);
        self.symboltab.set_function_inline(sid, val);
        Ok(())
    }
    fn set_function_no_return(&mut self, name: &str, val: bool) -> UnlaceResult<()> {
        // C++ `OptionNoReturn::apply`: same shape as OptionInline, but setNoReturn.
        let sid = self.query_global_function(name)?;
        (self.pass_hooks().callwide_clear)(&mut self.unlace_tables);
        self.symboltab.set_function_no_return(sid, val);
        Ok(())
    }

    // --- printer (wired to the owned PrintC) -------------------------------
    fn print_is_c_language(&self) -> bool {
        self.print.get_name() == "c-language"
    }
    fn print_lang_known(&self) -> bool {
        crate::outlang::OutLang::from_print_name(self.print.get_name()).is_some()
    }
    fn set_null_printing(&mut self, val: bool) {
        self.print.set_null_printing(val);
    }
    fn set_inplace_ops(&mut self, val: bool) {
        self.print.set_inplace_ops(val);
    }
    fn set_convention_printing(&mut self, val: bool) {
        self.print.set_convention_printing(val);
    }
    fn set_no_cast_printing(&mut self, val: bool) {
        self.print.set_no_cast_printing(val);
    }
    fn set_hide_implied_exts(&mut self, val: bool) {
        self.print.set_hide_implied_exts(val);
    }
    fn set_max_line_size(&mut self, val: int4) -> UnlaceResult<()> {
        self.print.set_max_line_size(val)
    }
    fn set_indent_increment(&mut self, val: int4) {
        self.print.set_indent_increment(val);
    }
    fn set_line_comment_indent(&mut self, val: int4) -> UnlaceResult<()> {
        self.print.set_line_comment_indent(val)
    }
    fn set_comment_style(&mut self, style: &str) {
        self.print.set_comment_style(style);
    }
    fn header_comment_flags(&self) -> uint4 {
        self.print.header_comment_flags()
    }
    fn set_header_comment_flags(&mut self, flags: uint4) {
        self.print.set_header_comment_flags(flags);
    }
    fn instruction_comment_flags(&self) -> uint4 {
        self.print.instruction_comment_flags()
    }
    fn set_instruction_comment_flags(&mut self, flags: uint4) {
        self.print.set_instruction_comment_flags(flags);
    }
    fn set_integer_format(&mut self, fmt: &str) {
        let _ = self.print.set_integer_format(fmt);
    }
    fn set_namespace_strategy(&mut self, strategy: NamespaceStrategy) {
        self.print.set_namespace_strategy(strategy);
    }
    fn set_brace_format(&mut self, category: BraceCategory, style: crate::options::BraceStyle) {
        self.print.set_brace_format(category, style);
    }
    fn set_print_language(&mut self, language: &str) {
        // C++ `glb->setPrintLanguage(p1)` swaps the active PrintLanguage; the
        // single owned printer records the requested name (the only datatest
        // language is "c-language").
        self.print.set_name(language);
    }

    // --- action database ---------------------------------------------------
    fn set_action_warning(&mut self, val: bool, name: &str) -> bool {
        // C++ `glb->allacts.getCurrent()->setWarning(val,p1)`.
        match self.allacts.get_current_mut() {
            Some(act) => act.set_warning(val, name),
            None => false,
        }
    }
    fn clone_action_group(&mut self, from: &str, to: &str) {
        // C++ `glb->allacts.cloneGroup(p1,p2); setCurrent(p2)`.
        if self.allacts.clone_group(from, to.to_string()).is_ok() {
            let _ = self.allacts.set_current(to);
        }
    }
    fn set_current_action(&mut self, name: &str) {
        let _ = self.allacts.set_current(name);
    }
    fn current_action_name(&self) -> String {
        self.allacts.get_current_name().to_string()
    }
    fn toggle_action(&mut self, _group: &str, _sub: &str, _val: bool) {
        // C++ `glb->allacts.toggleAction(grp,sub,val)`.
        // STUB(W5): `ActionDatabase::toggleAction` (action.cc:1036) is not yet
        // ported onto the Rust `ActionDatabase`; the plain `option NAME VALUE`
        // path (the most-used datatest command) does not reach it — only the
        // `setaction GROUP SUB on/off` form does.  Recorded as a loss.
    }
    fn enable_rule(&mut self, path: &str) -> bool {
        match self.allacts.get_current_mut() {
            Some(act) => act.enable_rule(path),
            None => false,
        }
    }
    fn disable_rule(&mut self, path: &str) -> bool {
        match self.allacts.get_current_mut() {
            Some(act) => act.disable_rule(path),
            None => false,
        }
    }
    fn has_current_action(&self) -> bool {
        self.allacts.get_current().is_some()
    }

    // --- translator (engine-owned context) ---------------------------------
    fn allow_context_set(&mut self, val: bool) {
        // C++ `glb->translate->allowContextSet(val)`.
        self.translate.allow_context_set(val);
    }
}

// ---------------------------------------------------------------------------
// InjectArchitecture / UseropArchitecture (the `Architecture *glb` slice the
// userop decode + inject-library decode reach — userop.cc:86-99 / 368-637).
// Wires `userops.initialize` + `<callotherfixup>` decode at boot.
// ---------------------------------------------------------------------------

impl crate::pcodeinject::InjectArchitecture for Architecture {
    fn get_default_code_space(&self) -> Rc<AddrSpace> {
        // C++ `glb->getDefaultCodeSpace()`.
        Rc::clone(
            self.manage()
                .get_default_code_space()
                .expect("no default code space"),
        )
    }
    fn get_unique_space(&self) -> Rc<AddrSpace> {
        // C++ `glb->getUniqueSpace()`.
        Rc::clone(self.manage().get_unique_space().expect("no unique space"))
    }
}

impl crate::userop::UseropArchitecture for Architecture {
    fn get_user_op_names(&self) -> Vec<Vec<u8>> {
        // C++ `glb->translate->getUserOpNames(res)`.  The Sleigh translate hands
        // back display strings; convert to the byte-string form the manager keys.
        let mut res: Vec<String> = Vec::new();
        self.translate.get_user_op_names(&mut res);
        res.into_iter().map(String::into_bytes).collect()
    }

    fn decode_inject(
        &mut self,
        src: &[u8],
        suffix: &[u8],
        tp: int4,
        decoder: &mut dyn unlace_base::marshal::Decoder,
    ) -> UnlaceResult<int4> {
        // C++ `glb->pcodeinjectlib->decodeInject(src,suffix,tp,decoder)`.
        self.pcodeinjectlib.decode_inject(src, suffix, tp, decoder)
    }

    fn get_call_other_target(&self, injectid: int4) -> Vec<u8> {
        // C++ `glb->pcodeinjectlib->getCallOtherTarget(injectid)`.
        self.pcodeinjectlib.base.get_call_other_target(injectid)
    }

    fn payload_io_sizes(&self, injectid: int4) -> UnlaceResult<(int4, int4, int4, int4)> {
        // C++ `SegmentOp::decode` reads payload->sizeOutput/sizeInput plus the
        // first two input sizes after the `<pcode>` child is parsed.
        let core = self.pcodeinjectlib.get_payload(injectid).core();
        let size_output = core.size_output();
        let size_input = core.size_input();
        // get_size() is a uint4 (the InjectParameter size); narrow to int4 the
        // same way the C++ reads `getInput(k).getSize()` into an int4.
        let in0 = if size_input > 0 {
            core.get_input(0).get_size() as int4
        } else {
            0
        };
        let in1 = if size_input > 1 {
            core.get_input(1).get_size() as int4
        } else {
            0
        };
        Ok((size_output, size_input, in0, in1))
    }
}

/// A self-contained [`FloatFormatProvider`](unlace_num::opbehavior::FloatFormatProvider)
/// owning a clone of the engine's float formats.
///
/// The C++ `TypeOp::registerInstructions` passes the long-lived `Translate *`;
/// the Rust float behaviors store an `Rc<dyn FloatFormatProvider>` (unlace-num
/// opbehavior module docs).  The behavior table outlives any single borrow of
/// `translate`, so this provider clones the formats by value and serves
/// references to its own copies (the formats are immutable engine config).
struct OwnedFloatFormats {
    formats: Vec<unlace_num::float::FloatFormat>,
}

impl OwnedFloatFormats {
    /// Clone the engine's float formats for the standard p-code encoding sizes
    /// (the C++ candidates: 2/4/8/10/16-byte IEEE formats; the engine returns
    /// only those it actually defines).
    fn from_translate(translate: &dyn EngineTranslate) -> Self {
        let mut formats = Vec::new();
        for size in [2, 4, 8, 10, 16] {
            if let Some(fmt) = translate.get_float_format(size) {
                formats.push(fmt.clone());
            }
        }
        OwnedFloatFormats { formats }
    }
}

impl unlace_num::opbehavior::FloatFormatProvider for OwnedFloatFormats {
    fn get_float_format(&self, size: i32) -> Option<&unlace_num::float::FloatFormat> {
        self.formats.iter().find(|f| f.get_size() == size)
    }
}

/// (unlace) Adapter implementing [`UseropTypeArchitecture`] over the architecture's
/// populated [`TypeFactoryImpl`], used by [`Architecture::register_string_builtins`]
/// to build the typed builtin signatures without aliasing the `&mut userops`
/// borrow.  Maps the trait's `glb->types->...` / `glb->getDefaultDataSpace()`
/// reads onto the factory + the data-space word size captured at construction.
struct BuiltinTypeArch {
    types: Rc<TypeFactoryImpl>,
    data_word_size: int4,
}

impl crate::userop::UseropTypeArchitecture for BuiltinTypeArch {
    fn get_size_of_pointer(&self) -> int4 {
        self.types.get_size_of_pointer()
    }
    fn get_default_data_space_word_size(&self) -> int4 {
        self.data_word_size
    }
    fn get_type_void(&self) -> Rc<crate::dtype::Datatype> {
        self.types.get_type_void().expect("builtin: getTypeVoid")
    }
    fn get_type_pointer(
        &self,
        ptr_size: int4,
        base: Rc<crate::dtype::Datatype>,
        word_size: int4,
    ) -> Rc<crate::dtype::Datatype> {
        self.types
            .get_type_pointer(ptr_size, base, word_size as uint4)
            .expect("builtin: getTypePointer")
    }
    fn get_base_int(&self, size: int4) -> Rc<crate::dtype::Datatype> {
        self.types
            .get_base(size, type_metatype::TYPE_INT)
            .expect("builtin: getBase(INT)")
    }
    fn get_type_char(&self) -> Rc<crate::dtype::Datatype> {
        let size = self.types.get_size_of_char();
        self.types
            .get_type_char(size)
            .or_else(|_| self.types.get_base(size, type_metatype::TYPE_INT))
            .expect("builtin: getTypeChar")
    }
    fn get_type_wchar(&self) -> Rc<crate::dtype::Datatype> {
        self.types
            .get_type_char(self.types.get_size_of_wchar())
            .expect("builtin: getTypeChar(wchar)")
    }
    fn get_type_bool(&self) -> Rc<crate::dtype::Datatype> {
        self.types
            .get_base(1, type_metatype::TYPE_BOOL)
            .expect("builtin: getBase(BOOL)")
    }
    fn get_va_list_pointer(&self) -> Option<Rc<crate::dtype::Datatype>> {
        use crate::dtype::{TypeFactory, TypeField};
        if self.types.get_size_of_pointer() != 8 {
            return None;
        }
        let tag = self.types.get_type_struct("__va_list_tag").ok()?;
        let uint = self.types.get_base(4, type_metatype::TYPE_UINT).ok()?;
        let void_ptr = self
            .types
            .get_type_pointer(8, self.types.get_type_void().ok()?, 1)
            .ok()?;
        let field =
            |ident: int4, offset: int4, name: &str, ty: &Rc<crate::dtype::Datatype>| TypeField {
                ident,
                offset,
                name: name.to_string(),
                field_type: Rc::clone(ty),
            };
        let fields = vec![
            field(0, 0, "gp_offset", &uint),
            field(1, 4, "fp_offset", &uint),
            field(2, 8, "overflow_arg_area", &void_ptr),
            field(3, 16, "reg_save_area", &void_ptr),
        ];
        let tag = self
            .types
            .set_fields_struct_raw(&tag, fields, Vec::new(), 24, 8, 0)
            .ok()?;
        self.types.get_type_pointer(8, tag, 1).ok()
    }
}

/// How an image passes a floating-point value in the variadic part of a call.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub enum VarargFloats {
    /// Where the prototype model's rules put it.
    #[default]
    InModel,
    /// Where the model puts it, with the number of vector registers used in `al`
    /// (x86-64 SysV).
    VectorCount,
    /// Where the model puts it, with CR bit 6 set when any FPR is used (32-bit
    /// PowerPC SysV).
    ConditionBit,
    /// In general registers or on the stack; a floating-point register holds at
    /// most a copy (64-bit PowerPC).
    Shadowed,
}

/// The System V argument registers, present only where the pass applies.
#[derive(Clone)]
pub struct Regs {
    pub sp: unlace_num::pcoderaw::VarnodeData,
    pub gp: Vec<unlace_num::pcoderaw::VarnodeData>,
    pub xmm: Vec<unlace_num::pcoderaw::VarnodeData>,
    pub caller_saved: Vec<(Vec<u8>, Option<unlace_num::pcoderaw::VarnodeData>)>,
}

#[derive(Clone)]
pub struct Storage {
    pub free: u64,
    pub top: unlace_num::pcoderaw::VarnodeData,
    pub tags: unlace_num::pcoderaw::VarnodeData,
    pub bank: Vec<unlace_num::pcoderaw::VarnodeData>,
}

/// The release-dependent pieces of the runtime layouts: go1.23 inserted
/// `g.syscallbp`, go1.25 dropped `gobuf.ret` (verified against the vendored
/// go1.22.10 and go1.25.3 sources; 1.23/1.24 carry `syscallbp` with the
/// seven-word gobuf).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct GoLayout {
    /// `runtime.gobuf`'s word count: 7 through go1.24, 6 from go1.25.
    pub gobuf_words: int4,
    /// `g.syscallbp` present (go1.23+).
    pub syscallbp: bool,
}

/// Environment variable carrying the image's Go toolchain version
/// (`"<maj>.<min>"`) into the architecture build — set by the console
/// bootstrap from the build-info blob (`unlace-analysis loader/gobuildinfo`)
/// BEFORE the engine is built, because the shell install runs inside the
/// cspec decode, upstream of every per-image fact write. Absent or
/// unparsable means the go1.22 register-ABI baseline.
pub const GOVERSION_ENV: &str = "UNLACE_GOVERSION";

impl GoLayout {
    /// The go1.22 register-ABI baseline (also the unknown-version fallback).
    pub fn baseline() -> GoLayout {
        GoLayout {
            gobuf_words: 7,
            syscallbp: false,
        }
    }

    /// The layout a toolchain version implies.
    #[inline]
    pub fn from_version(maj: u16, min: u16) -> GoLayout {
        GoLayout {
            gobuf_words: if (maj, min) >= (1, 25) { 6 } else { 7 },
            syscallbp: (maj, min) >= (1, 23),
        }
    }

    /// `runtime.gobuf`'s byte size under this layout.
    #[inline]
    pub fn gobuf_size(self) -> int4 {
        self.gobuf_words * 8
    }
}

/// A record describing storage that should be rendered as two split pieces.
///
/// C++ `struct PreferSplitRecord` (`prefersplit.hh`).
#[derive(Clone, Debug)]
pub struct PreferSplitRecord {
    /// The full storage location of the value to split.
    pub storage: unlace_num::pcoderaw::VarnodeData,
    /// Number of initial bytes (in address order) to split into the first piece.
    pub splitoffset: int4,
}

impl PreferSplitRecord {
    /// Total order over records (C++ `PreferSplitRecord::operator<`).
    ///
    /// Ordering: space index, then **bigger sizes first**, then offset.  This is
    /// the comparator `initialize`'s `sort` and `find_record`'s `lower_bound`
    /// both rely on, so it is output-determining and transcribed field-by-field.
    #[doc(hidden)]
    pub fn cmp_key(&self) -> (i32, std::cmp::Reverse<u32>, u64) {
        let space_index = self
            .storage
            .space
            .as_ref()
            .map(|s| s.get_index())
            .unwrap_or(-1);
        // size: bigger sizes come first -> Reverse on the size
        (
            space_index,
            std::cmp::Reverse(self.storage.size),
            self.storage.offset,
        )
    }
}

impl PartialEq for PreferSplitRecord {
    fn eq(&self, other: &Self) -> bool {
        self.cmp_key() == other.cmp_key()
    }
}
impl Eq for PreferSplitRecord {}
impl PartialOrd for PreferSplitRecord {
    fn partial_cmp(&self, other: &Self) -> Option<std::cmp::Ordering> {
        Some(self.cmp(other))
    }
}
impl Ord for PreferSplitRecord {
    fn cmp(&self, other: &Self) -> std::cmp::Ordering {
        self.cmp_key().cmp(&other.cmp_key())
    }
}

#[cfg(test)]
mod tests;
