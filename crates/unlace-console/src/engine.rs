//! Engine bootstrap glue for the console front-end (item `w9x-bins-runner`).
//!
//! The C++ `IfcLoadFile` (`consolemain.cc:46`) hands a file path to
//! `ArchitectureCapability::findCapability`, builds the leaf `Architecture`
//! (`XmlArchitecture`), and runs `Architecture::init` — the whole
//! `restoreFromSpec`/`buildTranslator`/`buildTypegrp`/`buildAction` chain.  In
//! the unlace Rust port that chain is assembled by the XML frontend
//! ([`XmlArchitecture`]) through `build_translator`, then
//! [`Architecture::init_post_engine`] (the merged `w9x-arch-engine-glue` item),
//! which the integration-test `decompile_e2e.rs` `bootstrap()` proved end to
//! end.  This module lifts that bootstrap into a reusable shape so the two
//! console paths — the interactive `decomp_dbg` `load file` command and the
//! datatest harness `buildProgram` — drive the **same** real engine assembly.
//!
//! ## What `load file` accepts
//!
//! `load file <path>` accepts ELF, PE, Mach-O, COFF, UEFI TE, and the XML
//! `<binaryimage>` format used by the datatests. Object formats use
//! [`ObjectLoadImage`], TE uses its direct stripped-header mapping, and XML keeps
//! the corpus bootstrap. Headerless images use the separate `load raw` command.
//!
//! ## Symbol resolution (the `readLoaderSymbols`/`queryFunction` hook)
//!
//! The W4 symbol-table population from the loader (`Architecture::readLoaderSymbols`
//! → `Scope::addFunction`) and `Scope::queryFunction` are later port items.  The
//! `<binaryimage>` itself carries `<symbol>` records (name + address), and the
//! opened [`LoadImageXml`] exposes them via `open_symbols`/`get_next_symbol`.
//! This module reads those records once (at `load file`) into a name→address
//! table on the [`ConsoleProgram`], so `load function <name>` resolves a
//! function entry the faithful way (the binaryimage's own symbol records, which
//! is precisely what `readLoaderSymbols` reads).

mod lazy_inventory;
mod retroimage;
mod signature_names;
mod thunknames;
pub(crate) use retroimage::bootstrap_retro_bytes;

use std::borrow::Cow;
use std::collections::{BTreeMap, BTreeSet, HashMap};
use std::path::Path;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::marshal::IdRegistry;
use unlace_base::space::{AddrSpace, AddrSpaceManager};
use unlace_base::types::int4;
use unlace_base::xml::{DocumentStorage, Element};

use unlace_decomp::architecture::Architecture;
use unlace_decomp::loadoptions::LoadOptions;
use unlace_decomp::memoryspecs::IntoSpecRoot;
use unlace_decomp::options::register_option_elements;
use unlace_decomp::raw_arch::RawBinaryArchitectureCapability;
use unlace_decomp::sleigh_arch::{LanguageDatabase, SleighArchitecture, register_sleigh_arch_ids};
use unlace_decomp::xml_arch::XmlArchitectureCapability;

use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::VarnodeData;

use unlace_analysis::flirt::rustprofiles::{
    ImageReport as RustProfileReport, Request as RustProfileRequest,
};
use unlace_analysis::loadimage_cil::image::CilLoadImage;
use unlace_analysis::loadimage_cil::{
    CIL_BASE, CIL_LANGUAGE, CLI_PROBE_LEN, CilImage, has_cli_header, is_cil_image,
};
use unlace_analysis::loadimage_mz::{MZ_LANGUAGE, MzImage, is_mz_dos_image};
use unlace_analysis::loadimage_object::{ObjectLoadImage, PE_MACHINES, is_arm32_language};
use unlace_analysis::loadimage_te::{TE_PROBE_LEN, TeLoadImage, is_te_image};
use unlace_analysis::loadimage_wasm::{WASM_LANGUAGE, WasmImage, WasmLoadImage, is_wasm_module};
use unlace_sleigh::loadimage::{LoadImage, LoadImageFunc, LoadImageSection, section_flags};
use unlace_sleigh::loadimage_xml::LoadImageXml;
use unlace_sleigh::loadimage_xml::register_loadimage_xml_ids;
use unlace_sleigh::translate::register_translate_ids;

pub use crate::bootstrap::{Bootstrap, LanguageSource};
use crate::entry_selector::ObjectSectionLocation;
pub use crate::entry_selector::{
    DataName, EntryLookupError, EntryProvenance, EntrySelector, FunctionEntry, NameSuggestion,
    ObjectLocation,
};

/// One function symbol discovered in the `<binaryimage>` (name → entry address).
#[derive(Debug, Clone)]
struct ProgramSymbol {
    ordinal: u64,
    name: String,
    addr: Address,
    object_location: Option<ObjectLocation>,
    binding: Option<String>,
    provenance: EntryProvenance,
}

/// (unlace) The console's function-symbol stream: the records in registration
/// order, plus an index from each name to the slots holding it.
///
/// Registration is "last registration of a name wins". Written as a
/// `Vec::retain` scan it costs one string compare per live record every time a
/// symbol is registered — quadratic in the number of registered symbols, and
/// the analysis tier registers one per discovered function, so an 18 MB PE with
/// 33k of them spends minutes there. The generated `sub_<hex>` names all share a
/// length and a prefix, so the compare never short-circuits on the length and a
/// real byte compare runs at every visit.
///
/// Here a registration tombstones that name's indexed slots and appends, both
/// O(1). Iteration skips the tombstones and so yields exactly the sequence
/// `retain` + `push` left behind, which is the correctness requirement: every
/// consumer above reads this stream in order.
#[derive(Debug, Default)]
struct SymbolStream {
    /// Registration order, with a tombstone wherever a record was replaced.
    records: Vec<Option<ProgramSymbol>>,
    /// The live slots of each name, ascending. A tombstoned slot is never
    /// listed: `remove_name` drops the whole entry as it tombstones.
    by_name: HashMap<String, Vec<usize>>,
    live: usize,
    /// Changes with every mutation; [`ConsoleProgram::function_entries_shared`]
    /// keys its cache on it.
    revision: u64,
}

/// Process-wide revisions, so a replaced stream never repeats an earlier key.
static NEXT_REVISION: std::sync::atomic::AtomicU64 = std::sync::atomic::AtomicU64::new(1);

fn next_revision() -> u64 {
    NEXT_REVISION.fetch_add(1, std::sync::atomic::Ordering::Relaxed)
}

impl SymbolStream {
    fn from_loader(records: Vec<ProgramSymbol>) -> Self {
        let mut stream = Self::default();
        for record in records {
            stream.push(record);
        }
        stream
    }

    fn push(&mut self, mut sym: ProgramSymbol) {
        sym.ordinal = next_revision();
        self.by_name
            .entry(sym.name.clone())
            .or_default()
            .push(self.records.len());
        self.records.push(Some(sym));
        self.live += 1;
        self.revision = next_revision();
    }

    /// Tombstone every record named `name` — the `retain(|s| s.name != name)`
    /// half of a registration.
    fn remove_name(&mut self, name: &str) {
        let Some(stale) = self.by_name.remove(name) else {
            return;
        };
        self.revision = next_revision();
        for slot in stale {
            if self.records[slot].take().is_some() {
                self.live -= 1;
            }
        }
        self.compact();
    }

    /// Tombstone the records named `name` at `addr`, leaving that name's records
    /// at other addresses live.
    fn remove_name_at(&mut self, name: &str, addr: &Address) {
        let Some(slots) = self.by_name.get_mut(name) else {
            return;
        };
        self.revision = next_revision();
        let records = &mut self.records;
        let mut removed = 0;
        slots.retain(|&slot| {
            let here = records[slot]
                .as_ref()
                .is_some_and(|record| record.addr == *addr);
            if here {
                records[slot] = None;
                removed += 1;
            }
            !here
        });
        if slots.is_empty() {
            self.by_name.remove(name);
        }
        self.live -= removed;
        self.compact();
    }

    /// Reclaim the tombstones once they outnumber the live records, so iteration
    /// stays O(live) however many times a name is re-registered. Rebuilding is
    /// O(live) and cannot recur until as many records are pushed again, so the
    /// amortized cost per registration stays constant. Live records keep their
    /// relative order, which is the order iteration reports.
    fn compact(&mut self) {
        if self.records.len() < 64 || self.live * 2 > self.records.len() {
            return;
        }
        let kept: Vec<ProgramSymbol> = self.records.drain(..).flatten().collect();
        self.by_name.clear();
        self.live = 0;
        for record in kept {
            self.push(record);
        }
    }

    fn len(&self) -> usize {
        self.live
    }

    /// The first record of `name`, matching the `iter().find()` this replaced —
    /// the loader can read two records under one name and that picks the earlier.
    fn lookup(&self, name: &str) -> Option<&ProgramSymbol> {
        self.slots_of(name).next()
    }

    /// The first record of `name` sitting at `addr`, if any.
    fn lookup_at(&self, name: &str, addr: &Address) -> Option<&ProgramSymbol> {
        self.slots_of(name).find(|record| record.addr == *addr)
    }

    fn slots_of(&self, name: &str) -> impl Iterator<Item = &ProgramSymbol> + use<'_> {
        self.by_name
            .get(name)
            .into_iter()
            .flatten()
            .filter_map(|&slot| self.records[slot].as_ref())
    }

    fn iter(&self) -> impl Iterator<Item = &ProgramSymbol> {
        self.records.iter().flatten()
    }
}

pub use unlace_analysis::loadimage_object::ObjectSectionMetadata as ProgramSectionMetadata;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ProgramImageMetadata {
    pub entry: Option<u64>,
    pub sections: Vec<ProgramSectionMetadata>,
}

/// Which loader produced the program. Capability follows the container, not
/// the language: only an object-format input has the `object::File` view the
/// Listing discovery tier re-parses the file for.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum ProgramContainer {
    /// The datatest `<binaryimage>` XML corpus format.
    Xml,
    /// ELF, PE, Mach-O, or COFF through the `object` crate.
    Object,
    /// A headerless byte image at a caller-supplied base.
    Raw,
    /// A UEFI TE image through its own bounded parser.
    Te,
    /// A DEX file mapped whole at address 0.
    Dex,
    /// A managed .NET assembly: its methods come from the metadata.
    Cil,
    /// A WebAssembly module, its bodies lowered to register form.
    Wasm,
}

/// A mixed-ARM container entry with the Thumb bit set, awaiting the
/// `entrythumbflow` walk at the analysis commit (after byte overlays).
struct PendingEntryThumb {
    /// Initialized executable spans, including overlays applied before the walk.
    executable_ranges: Vec<(u64, u64)>,
    entry: u64,
}

/// (unlace) One emitted p-code op, whole: the opcode, the output varnode and
/// every input. [`OneShotPcodeEmit`] keeps only `in0`; the parts it drops are
/// what a data-reference scan is made of.
struct WholeOp {
    opcode: OpCode,
    out: Option<VarnodeData>,
    ins: Vec<VarnodeData>,
}

/// One unmodified operation emitted by SLEIGH for a machine instruction.
pub struct RawPcodeOp {
    pub opcode: &'static str,
    pub output: Option<RawPcodeVarnode>,
    pub inputs: Vec<RawPcodeVarnode>,
}

/// A SLEIGH address-space, offset and byte-size tuple.
pub struct RawPcodeVarnode {
    pub space: String,
    pub offset: u64,
    pub size: u32,
}

impl From<&VarnodeData> for RawPcodeVarnode {
    fn from(v: &VarnodeData) -> Self {
        Self {
            space: v
                .space
                .as_ref()
                .map_or("<none>", |s| s.get_name())
                .to_string(),
            offset: v.offset,
            size: v.size,
        }
    }
}

#[derive(Default)]
struct RawPcodeEmit(Vec<RawPcodeOp>);

impl unlace_sleigh::translate::PcodeEmit for RawPcodeEmit {
    fn dump(
        &mut self,
        _: &Address,
        opcode: OpCode,
        output: Option<&VarnodeData>,
        inputs: &[VarnodeData],
    ) {
        self.0.push(RawPcodeOp {
            opcode: unlace_num::opcodes::get_opname(opcode),
            output: output.map(RawPcodeVarnode::from),
            inputs: inputs.iter().map(RawPcodeVarnode::from).collect(),
        });
    }
}

/// (unlace) Every FIXED address a RANGE of instructions names, in the two flavours
/// a listing needs to tell code from data — plus the decode buffer the walk
/// filling it reuses.
///
/// One value is filled by many [`ConsoleProgram::add_fixed_refs_at`] calls, and
/// the op capture is rewound rather than dropped between them: allocating per op
/// costs one heap allocation for every p-code op walked, which on a whole-image
/// listing is millions of them.
pub struct FixedRefs {
    /// `(address, width)` for each read of an address an instruction spelled
    /// out. The width is what was READ, not the size of the address varnode.
    pub reads: Vec<(u64, u32)>,
    /// Every address a `BRANCH`/`CBRANCH`/`CALL` named outright.
    pub flow_targets: Vec<u64>,
    /// (unlace, `linear-disassembly-silently-skips`) Does the instruction handed
    /// to the LAST [`ConsoleProgram::add_fixed_refs_at`] call have a
    /// fall-through successor? False only where its last p-code op is
    /// `BRANCH`/`BRANCHIND`/`RETURN`, the `xref_control_flow` rule
    /// (`decompiler/cpp/flow.cc`, ported at `p2_lift/flow.rs`): fall-through is
    /// decided by the LAST op, never by the first, so a multi-op instruction
    /// that branches early still falls through. An instruction that did not
    /// decode leaves this `true` — a caller that learned nothing must not read
    /// that as a dead end.
    pub falls_through: bool,
    /// The current instruction's ops, over storage retained across instructions.
    ops: Vec<WholeOp>,
    /// How many of `ops` the current instruction has filled.
    filled: usize,
}

impl Default for FixedRefs {
    fn default() -> Self {
        Self {
            reads: Vec::new(),
            flow_targets: Vec::new(),
            falls_through: true,
            ops: Vec::new(),
            filled: 0,
        }
    }
}

impl unlace_sleigh::translate::PcodeEmit for FixedRefs {
    fn dump(
        &mut self,
        _addr: &Address,
        opc: OpCode,
        outvar: Option<&VarnodeData>,
        vars: &[VarnodeData],
    ) {
        if self.filled == self.ops.len() {
            self.ops.push(WholeOp {
                opcode: opc,
                out: outvar.cloned(),
                ins: vars.to_vec(),
            });
        } else {
            let slot = &mut self.ops[self.filled];
            slot.opcode = opc;
            slot.out = outvar.cloned();
            slot.ins.clear();
            slot.ins.extend_from_slice(vars);
        }
        self.filled += 1;
    }
}

impl FixedRefs {
    /// Project the ops the last decode emitted onto the two reference lists.
    ///
    /// A read is harvested in the two shapes SLEIGH spells one in: a `LOAD`
    /// whose address input is a constant (`ldr r3,[0x8458]`) and a direct memory
    /// varnode in the default data space (`mov eax,[0x404018]`). The width is
    /// the width of the ACCESS — a `LOAD`'s address varnode is pointer-sized
    /// whatever the access is, so `ldrh r0,[0x1003c]` must not read as a
    /// pointer-sized one. The `in0` slot of `LOAD`/`STORE`/`CALLOTHER` and of
    /// every flow op is skipped: it carries a space id or a destination, not an
    /// address that is read.
    ///
    /// `fall_through` (`vma + len`) is not recorded as a flow target, for the
    /// same reason [`super::super`]'s reference walk declines it as a value:
    /// every conditionally-executed ARM instruction lowers to a `CBRANCH` over
    /// its own body, so its successor is named by a flow op whatever it is.
    /// Counted, that would mark the word after every predicated instruction as a
    /// branch label — and a literal pool is a run of them.
    ///
    /// The same walk settles [`Self::falls_through`] for this one instruction,
    /// so a caller stepping a listing learns where the straight line ends
    /// without decoding it a second time.
    fn harvest(&mut self, data_space: Option<&Rc<AddrSpace>>, fall_through: u64) {
        let Self {
            reads,
            flow_targets,
            falls_through,
            ops,
            filled,
        } = self;
        let is_constant = |vn: &VarnodeData| {
            vn.space
                .as_ref()
                .is_some_and(|s| s.get_type() == unlace_base::space::spacetype::IPTR_CONSTANT)
        };
        // Space identity is pointer identity throughout the engine, so match on
        // the `Rc`, never on the space's name or index.
        let in_data_space = |vn: &VarnodeData| matches!((&vn.space, data_space), (Some(s), Some(d)) if Rc::ptr_eq(s, d));
        for op in &ops[..*filled] {
            let flow = matches!(
                op.opcode,
                OpCode::CPUI_BRANCH | OpCode::CPUI_CBRANCH | OpCode::CPUI_CALL
            );
            if flow {
                if let Some(vn) = op.ins.first() {
                    if !is_constant(vn) && vn.offset != fall_through {
                        flow_targets.push(vn.offset);
                    }
                }
            }
            for (i, vn) in op.ins.iter().enumerate() {
                let target_slot = i == 0
                    && (flow
                        || matches!(
                            op.opcode,
                            OpCode::CPUI_LOAD | OpCode::CPUI_STORE | OpCode::CPUI_CALLOTHER
                        ));
                if target_slot {
                    continue;
                }
                let names_an_address = in_data_space(vn)
                    || (i == 1 && op.opcode == OpCode::CPUI_LOAD && is_constant(vn));
                if !names_an_address {
                    continue;
                }
                // The width of the ACCESS, which for a `LOAD` is its output and
                // NOT its address varnode -- SLEIGH gives `ldrh r0,[0x1003c]` a
                // pointer-sized `ram` address and a 2-byte output, and reading
                // the address would call a halfword read a word.
                let width = match op.opcode {
                    OpCode::CPUI_LOAD if i == 1 => op.out.as_ref().map(|o| o.size),
                    OpCode::CPUI_STORE => None,
                    _ => Some(vn.size),
                };
                if let Some(width) = width {
                    reads.push((vn.offset, width));
                }
            }
        }
        // Fall-through is the LAST-op test, never the first: an instruction
        // falls through unless its final op is BRANCH / BRANCHIND / RETURN, and
        // one that emitted no ops at all falls through
        // (`p2_lift/flow.rs::xref_control_flow`, the `isfallthru` tail). Two
        // BRANCHes are not dead ends: one into the CONSTANT space, which is
        // p-code-relative and lands inside this same instruction, and one whose
        // destination IS the fall-through address -- SLEIGH gives the x86
        // get-PC idiom `E8 00000000` its own `goto rel32` constructor
        // (`ia.sinc`, the `simm32=0` CALL), so the straight line does continue
        // at the next address.
        *falls_through = match ops[..*filled].last() {
            None => true,
            Some(last) => match last.opcode {
                OpCode::CPUI_BRANCH => last
                    .ins
                    .first()
                    .is_some_and(|vn| is_constant(vn) || vn.offset == fall_through),
                OpCode::CPUI_BRANCHIND | OpCode::CPUI_RETURN => false,
                _ => true,
            },
        };
    }
}

/// (unlace) A one-shot [`PcodeEmit`](unlace_sleigh::translate::PcodeEmit) sink:
/// `Translate::one_instruction` dumps exactly one instruction's p-code, each
/// op captured here as opcode + first input (the single-instruction pcode
/// analogue of [`ConsoleProgram::disassemble_at_into`], mirroring
/// `unlace_analysis`'s `listing/decode.rs::OpCapture` — `in0` is all
/// [`ConsoleProgram::lone_jump_target`]'s shape tests need).
#[derive(Default)]
struct OneShotPcodeEmit {
    ops: Vec<(OpCode, Option<VarnodeData>)>,
}

impl unlace_sleigh::translate::PcodeEmit for OneShotPcodeEmit {
    fn dump(
        &mut self,
        _addr: &Address,
        opc: OpCode,
        _outvar: Option<&VarnodeData>,
        vars: &[VarnodeData],
    ) {
        self.ops.push((opc, vars.first().cloned()));
    }
}

/// The kind of control transfer an instruction makes, strongest first.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum FlowKind {
    Return,
    JumpInd,
    Jump,
    CondJump,
    Call,
    CallInd,
}

impl FlowKind {
    pub fn as_str(self) -> &'static str {
        match self {
            FlowKind::Return => "return",
            FlowKind::JumpInd => "jumpind",
            FlowKind::Jump => "jump",
            FlowKind::CondJump => "cjump",
            FlowKind::Call => "call",
            FlowKind::CallInd => "callind",
        }
    }
}

/// [`ConsoleProgram::insn_flow`]'s answer: how one instruction passes control on.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct InsnFlow {
    pub kind: FlowKind,
    pub targets: Vec<u64>,
}

/// The console's loaded program: the engine assembly (C++ `dcp->conf`, an
/// `XmlArchitecture : Architecture`) plus the console-owned marshaling registry
/// and option database the `option` command needs.
///
/// In C++ `dcp->conf` IS the leaf `Architecture` (the `XmlArchitecture`
/// subobject); the Rust leaf [`XmlArchitecture`] owns the `Architecture` base,
/// reachable via [`Self::arch_mut`].  The `IdRegistry`/`OptionDatabase` are the
/// process globals the C++ `ElementId::find` + `dcp->conf->options->set` read; we
/// keep them on the program so the console can resolve an option name to its
/// element id and dispatch it against the real architecture.
pub struct ConsoleProgram {
    pub(crate) callwide: crate::callwide::State,
    /// The engine assembly (owns the `Architecture` god object).  Both the XML
    /// `<binaryimage>` frontend and the real-ELF frontend slice their leaf
    /// architecture back to this `SleighArchitecture` once the loader is opened
    /// and handed to the engine, so the console program is loader-agnostic.
    arch: SleighArchitecture,
    /// The marshaling id registry (C++ `ElementId` global table) for option-name
    /// resolution.
    registry: IdRegistry,
    /// The program's function symbols (name → entry address), installed through
    /// the `readLoaderSymbols` hook. Object/XML names are collected at load;
    /// synthetic input names are collected after options are applied.
    symbols: SymbolStream,
    anonymous_entries: Vec<(u64, u64)>,
    anonymous_symbols: std::cell::OnceCell<Vec<ProgramSymbol>>,
    /// Entry addresses awaiting synthetic names. Raw and TE inputs have no
    /// source names, so their names are generated at `read symbols`, after the
    /// CLI has applied options such as `namestyle`.
    pending_synthetic_entries: Vec<Address>,
    /// Original-to-synthetic section map for relocatable objects.
    object_sections: Vec<ObjectSectionLocation>,
    /// A human-readable description of the loaded program (C++
    /// `conf->getDescription()`).
    description: String,
    /// The loader family that produced this program.
    container: ProgramContainer,
    /// Container metadata retained for format-neutral consumers such as project
    /// export. Loaders that do not publish a container entry and named sections
    /// leave this absent.
    image_metadata: Option<ProgramImageMetadata>,
    /// (unlace) Per-pass analysis facts stashed at load (real-ELF path only),
    /// keyed by `AnalysisPass::id`, awaiting the gated commit at `read symbols`.
    ///
    /// The commit is **deferred** out of `bootstrap_from_object` so it runs AFTER the
    /// per-pass `--option <id> on|off` flags are applied (the CLI emits the
    /// `option` lines before `read symbols`). `IfcReadSymbols` consults each pass's
    /// enable flag on the `Architecture` and commits only the enabled passes'
    /// facts (see [`commit_analysis_passes`]). Empty on the XML datatest path (no
    /// analysis tier runs), so the gated commit is a faithful no-op there. The
    /// stash is drained on commit so a second `read symbols` does not re-commit.
    pending_analysis: Vec<(&'static str, unlace_analysis::pass::AnalysisOutput)>,
    /// Mixed-ARM TE entry evidence awaiting the post-overlay decode walk.
    pending_entry_thumb: Option<PendingEntryThumb>,
    /// (unlace) The engine default code space captured at load, used to build the
    /// `Address`es when the stashed analysis facts are committed at `read symbols`.
    analysis_code_space: Option<Rc<AddrSpace>>,
    /// (unlace) DWARF stack-LOCAL recommendations parked at the analysis commit
    /// (`commit_analysis_output`, DWARF subtask 3), keyed by owning-function entry
    /// VMA. Each is `(name, type, stack_offset)`; the entry's `Vec` is the function's
    /// locals. `IfcDecompile` looks the function up by its entry address and appends
    /// these (built into stack-space `map addr` symbol specs by [`Self::dwarf_locals_for`])
    /// to the `mapped_symbols` it threads through `decompile_func_full_with_override_dyn`,
    /// so the rebuilt `Funcdata`'s `ScopeLocal` is re-seeded with each as a
    /// typelock|namelock stack symbol — the same path the console `map addr` directive
    /// uses. Real-ELF DWARF path only (empty on the XML datatest path).
    dwarf_locals: Vec<(u64, String, Rc<unlace_decomp::dtype::Datatype>, i64)>,
    /// (unlace `libctypes glibc`) Did the load-time `libctypes` pass install the
    /// published glibc x86-64 field layouts on THIS image?
    ///
    /// The pass answers that at `load file`, where it still has the object file
    /// and can check the target (`glibc::target_is_glibc_x86_64`). A
    /// `--define-function 0x..=fopen` directive mints the same named aggregate
    /// much later, with the object gone, and must not re-decide: a MIPS32 or musl
    /// image also defines a `stat` whose first member is `st_dev`, so the program
    /// alone cannot tell whose libc it is. This carries the pass's answer across.
    /// `false` on every path with no analysis tier (the XML datatests), which is
    /// the opaque shell — what `--option libctypes opaque` gives.
    libctypes_glibc: bool,
    /// (unlace `libctypes`) The load-time pass refused this image because the
    /// named aggregates' widths are not its ABI's
    /// (`AnalysisOutput::libctypes_refused`). A declared name then gets the
    /// width-stable `void *` signature, exactly as an imported one did. `false`
    /// on every path with no analysis tier.
    libctypes_refused: bool,
    /// (unlace `libctypes`) The load-time pass installed the `streams` layout
    /// (`AnalysisOutput::libctypes_streams`). `false` on every path with no
    /// analysis tier.
    libctypes_streams: bool,
    /// (unlace) What became of each configured `.fid` database at the last
    /// analysis commit (`AnalysisOutput::fid_databases`). Empty when the FID
    /// pass did not run or no database was configured.
    fid_databases: Vec<unlace_analysis::fid::fidapply::FidDbReport>,
    rust_profile_request: Option<RustProfileRequest>,
    rust_profile_apply: bool,
    rust_profile_image_modified: bool,
    rust_profile_report: Option<RustProfileReport>,
    /// (unlace) The image bytes + path stashed at load for the **deferred Listing
    /// build** (the Listing/xref PR6 build-timing fix). The Listing is gated on
    /// `--option listing on`, a flag the live CLI sets AFTER `load file` (before
    /// `read symbols`), so it cannot be built at load (the flag is still default-off
    /// there). Instead `commit_pending_analysis` (reached at `read symbols`, after
    /// the flag is applied) re-parses these bytes, builds the Listing, and runs the
    /// Listing-consumer passes (e.g. discovered-no-return). `None` on the XML
    /// datatest path (no Listing tier), so the gated build is a structural no-op
    /// there. Empty/`None` when the listing flag is off ⇒ zero cost.
    analysis_image: Option<(
        String,
        unlace_analysis::image_bytes::ImageBytes,
        Option<unlace_analysis::loader::ImportProofMemo>,
    )>,
    /// (unlace `objectview`) The PE view of a TE image or the ELF view of a raw
    /// one, kept for the CLI's object-file consumers once the commit has taken
    /// [`Self::analysis_image`].
    object_view: Option<Rc<[u8]>>,
    /// (unlace `armframes`) The whole-image frame recovery: set before the commit,
    /// it is replayed instead of searched; after it, the record that commit made.
    arm_frames: Option<unlace_analysis::aif::framereplay::ArmFrameReplay>,
    /// (unlace) The loader's defined `STT_OBJECT` data symbols as `(addr, name,
    /// size)`, read from `.symtab`/`.dynsym` at load
    /// ([`ObjectLoadImage::data_symbols`]) and installed as named globals by
    /// [`commit_analysis_output`].
    ///
    /// This is **loader markup**, not an analysis pass: it is the data twin of the
    /// funcsym stream `read_loader_symbols` already installs. The stream is
    /// collected at `load file` but committed at `read symbols`. It is
    /// installed at the analysis commit rather than eagerly
    /// at bootstrap purely for *precedence*: a DWARF-described global and a
    /// detected string literal both claim their address first, and this arm only
    /// fills the addresses neither covered (which is where the imported libc
    /// objects — `optind`, `stdin`, `stdout`, `optarg` — live). Empty on the XML
    /// datatest path and for a relocatable object.
    loader_data_objects: Vec<(u64, String, u64)>,
    /// (unlace) A PE image's data exports, `(addr, name)`: lookup names only.
    loader_data_exports: Vec<(u64, String)>,
    /// (unlace `retroimage`) The names a container gives its code addresses,
    /// taken in place of a synthetic name when its entries are installed.
    loader_entry_names: BTreeMap<u64, String>,
    /// (unlace `mzsweep`) An MS-DOS executable's relocated module and relocation
    /// words, the evidence its raw-image call sweep reads.
    mz_evidence: Option<unlace_analysis::listing::mzsweep::MzEvidence>,
    /// (unlace `esprom`) The chip whose ROM names and memory map are applied.
    pub(crate) esprom_applied: Option<unlace_decomp::esprom::EspChip>,
    /// (unlace #1288) Where each function ends, entry VMA -> exclusive end: what
    /// bounds [`crate::funcextent`]'s clip where the one CODE range holds the
    /// program's data too. An x86 real-mode raw image measures its flow ends
    /// (`unlace_rawextent`) and a managed assembly states its method bodies';
    /// `None` on every other image.
    flow_ends: Option<BTreeMap<u64, u64>>,
    data_name_aliases: HashMap<String, u64>,
    /// (unlace) **Caller-declared function extents**, entry VMA → byte size — what
    /// the console `function bounds <start> <end>` and the CLI
    /// `unlace --define-function <start>-<end>` assert, and the only place unlace
    /// carries "function F spans [start,end)" at all. (`map function` still
    /// ignores its size argument; only these two surfaces write here.)
    ///
    /// Consulted by every later load of that entry (`load function`, `load addr`,
    /// the whole-binary loop) so the declaration outlives the one command that
    /// made it, and by [`crate::funcextent`] so the inventory reports what the
    /// caller asserted rather than the address-contiguous clip it guesses.
    /// Non-zero sizes only: a bare declaration with no extent leaves the entry
    /// unbounded, which is the engine-wide `UNBOUNDED_SIZE` default.
    declared_extents: BTreeMap<u64, int4>,
    /// (unlace `funcchunks`) Flow body sizes from the chunk model, by entry.
    function_bodies: BTreeMap<u64, u64>,
    /// (unlace) **Caller-declared function entries**, entry VMA — every address a
    /// caller asserted a function at through `function bounds` /
    /// `--define-function`, extent or no extent.
    ///
    /// Separate from [`Self::declared_extents`] because a bare declaration
    /// carries no size and would otherwise be indistinguishable from a
    /// discovered entry. What reads it is the whole-binary target list
    /// ([`Self::function_entries_executable`]): a declaration is an assertion
    /// that this address IS a function, so it outranks the section-flag test
    /// that list otherwise filters by.
    declared_entries: BTreeSet<u64>,
    /// (unlace) The name `--define-function <start>[-<end>]=<name>` gave each
    /// declared entry, keyed by the same normalized VMA as
    /// [`Self::declared_entries`].
    ///
    /// The declaration is an assertion, so it has to outrank every name
    /// discovery registered at that address -- otherwise which name is reported
    /// is decided by [`entry_name_rank`]'s length tie-break, and an analysis
    /// pass that names the same address something shorter silently wins
    /// (`elfmain` naming a libc-start `main` at an address the caller declared
    /// `stage1`). The discovered names stay as aliases; only the report changes.
    declared_names: BTreeMap<u64, String>,
    /// (unlace, issue #1438) Each declaration measured against the image's byte
    /// map when it was made, keyed by the same normalized VMA as
    /// [`Self::declared_entries`] -- what [`Self::declaration_notes`] warns of.
    declared_bytes: BTreeMap<u64, crate::declaredbytes::Declaration>,
    /// Changes whenever `declared_names` (it orders canonical entry names) or
    /// `declared_extents` (it sizes them) does.
    declared_revision: u64,
    /// [`Self::function_entries_canonical`] for (symbols revision, declared
    /// revision): name lookups resolve against it without regrouping the image.
    canonical_entries: std::cell::RefCell<Option<(u64, u64, Rc<Vec<FunctionEntry>>)>>,
    /// The name index over [`Self::canonical_entries`] and `loader_aliases`,
    /// built on the first name lookup against those entries.
    entry_names: std::cell::RefCell<Option<(Rc<Vec<FunctionEntry>>, Rc<EntryNames>)>>,
    /// (unlace `--assert`) The caller-supplied assertions this program was loaded
    /// with, in the order they were given -- the one override plane an agent
    /// states facts through (`crate::assertions`).  Empty for every invocation
    /// that passed none, which is what keeps the plane free.
    assertions: Vec<crate::assertions::Directive>,
    /// One slot per [`Self::assertions`] entry: what became of that directive.
    /// `None` until something claims it, so a directive no surface reached is
    /// still distinguishable from one that was applied.
    assertion_outcomes: Vec<Option<crate::assertions::Outcome>>,
    /// Prototypes parked by an `assert prototype <func> <decl>` directive, keyed
    /// by function name -- the in-process twin of the console's
    /// `IfaceDecompData::pending_prototypes` (`parse line extern`).  Consulted by
    /// the decompile loop, because the drive rebuilds the `Funcdata` and the
    /// symbol-table prototype link does not survive that rebuild.
    pending_prototypes: BTreeMap<String, unlace_decomp::fspec::PrototypePieces>,
    /// (unlace `dexmodel`) The DEX method prototypes wait for the analysis commit.
    pending_dex_prototypes: bool,
    /// Raw-input address-unit width and whether bit zero is an ARM state bit.
    raw_address_units: Option<(u64, bool)>,
    /// (unlace) The loader's **import pointer slots** as half-open `[lo, hi)` VMA
    /// ranges — the PE Import Address Table words, read off
    /// `ObjectLoadImage::import_slot_ranges` at bootstrap.
    ///
    /// The loader registers a `FunctionSymbol` at each slot so a
    /// `call dword ptr [slot]` renders the import name, and that is the whole
    /// point of them; the slot is still a pointer word rather than a function
    /// entry, which is what [`Self::function_entries_executable`] reads this for.
    /// Empty on the XML datatest path and for every non-PE image.
    import_slots: crate::importslots::ImportSlots,
    function_address_aliases: BTreeMap<u64, u64>,
    /// (unlace, issue #666) Does this container decorate a C identifier with a
    /// leading `_` in its symbol table?
    ///
    /// Mach-O does: `int main(void)` is stored as `_main`, so the spelling a
    /// caller reads in the source is not a name the image carries at all. ELF,
    /// PE and COFF-on-x86-64 store the identifier verbatim. A one-bit property
    /// of the image, read from the container magic at bootstrap, so name
    /// resolution ([`ConsoleProgram::resolve_entry`]) can retry the decorated
    /// spelling without guessing at an underscore on every format. `false` on
    /// the XML datatest path and every other container.
    symbol_underscore_prefix: bool,
    /// (unlace) The header-tolerance notes the object bootstrap printed for this
    /// image; see [`ConsoleProgram::load_notes`].
    load_notes: Vec<String>,
    elf_functions: unlace_analysis::loadimage_object::ElfFunctionProvenance,
    /// The names the loader keeps only as aliases, keyed by normalized entry
    /// (`ObjectLoadImage::func_symbol_aliases`).
    loader_aliases: BTreeMap<u64, Vec<String>>,
}

fn code_offset_in_target_units(value: u64, word_size: u64) -> u64 {
    value / word_size
}

fn code_end_in_target_units(value: u64, word_size: u64) -> u64 {
    value / word_size + u64::from(value % word_size != 0)
}

impl ConsoleProgram {
    pub fn callwide_changed(&mut self) {
        self.callwide.changed();
        self.arch_mut()
            .unlace_tables
            .get_mut::<unlace_decomp::callwide::ProofSlot>()
            .clear();
    }

    pub fn callwide_unavailable(&mut self, reason: &'static str) {
        self.callwide.unavailable(reason);
        self.arch_mut()
            .unlace_tables
            .get_mut::<unlace_decomp::callwide::ProofSlot>()
            .clear();
    }

    /// Borrow the `Architecture` god object (C++ `dcp->conf`, viewed as the base).
    pub fn arch(&self) -> &Architecture {
        self.arch
            .base()
            .expect("ConsoleProgram: Architecture base present after bootstrap")
    }

    /// Mutably borrow the `Architecture` god object.
    pub fn arch_mut(&mut self) -> &mut Architecture {
        self.arch
            .base_mut()
            .expect("ConsoleProgram: Architecture base present after bootstrap")
    }

    /// The marshaling id registry (for `ElementId::find`).
    pub fn registry(&self) -> &IdRegistry {
        &self.registry
    }

    /// The number of function symbols collected for the `readLoaderSymbols`
    /// hook.
    pub fn num_symbols(&self) -> usize {
        self.symbols.len() + self.anonymous_entries.len()
    }

    /// C++ `conf->getDescription()` — the load-success description line.
    pub fn description(&self) -> &str {
        &self.description
    }

    pub fn image_metadata(&self) -> Option<&ProgramImageMetadata> {
        self.image_metadata.as_ref()
    }

    /// The loader's header-tolerance notes for this image (a section table it
    /// dropped, a DOS magic it repaired, a data-directory count it clamped), in
    /// the order they were applied. Empty for a well-formed image.
    pub fn load_notes(&self) -> &[String] {
        &self.load_notes
    }

    /// What became of each configured `.fid` database (see
    /// `unlace_analysis::fid::fidapply`).
    pub fn fid_databases(&self) -> &[unlace_analysis::fid::fidapply::FidDbReport] {
        &self.fid_databases
    }

    /// Request one read-only observation of the next accepted image Listing.
    pub fn request_rust_profiles(&mut self, request: RustProfileRequest) {
        self.rust_profile_apply = false;
        self.rust_profile_request = Some(request);
        self.rust_profile_report = Some(RustProfileReport::unavailable());
    }

    /// Offer caller-verified trusted banks through ordinary name arbitration, once per image.
    pub fn request_rust_signature_names(&mut self, request: RustProfileRequest) {
        self.request_rust_profiles(request);
        self.rust_profile_apply = true;
    }

    pub fn rust_profile_report(&self) -> Option<&RustProfileReport> {
        self.rust_profile_report.as_ref()
    }

    /// The loaded image's file name, as the loader reports it.
    fn image_path(&self) -> String {
        self.arch()
            .translate()
            .loader_rc()
            .borrow()
            .get_file_name()
            .to_string()
    }

    /// Scale a user-facing raw address to the engine's byte offset without
    /// interpreting any low bits as processor state.
    pub fn input_address_offset(&self, value: u64) -> UnlaceResult<u64> {
        let Some((word_size, _)) = self.raw_address_units else {
            return Ok(value);
        };
        value.checked_mul(word_size).ok_or_else(|| {
            UnlaceError::lowlevel(format!(
                "raw address 0x{value:x} overflows the target's {word_size}-byte code-space units"
            ))
        })
    }

    /// Convert a user-facing code pointer to the engine's byte offset.
    pub fn input_code_offset(&self, value: u64) -> UnlaceResult<u64> {
        let units = match self.raw_address_units {
            Some((_, true)) => value & !1,
            _ => value,
        };
        self.input_address_offset(units)
    }

    /// Finish normalization after the console address grammar has already
    /// converted address units to bytes. Raw ARM code pointers still carry a
    /// state bit that is not part of the mapped byte address.
    pub fn normalize_parsed_code_address(&self, address: Address) -> Address {
        let Some((_, true)) = self.raw_address_units else {
            return address;
        };
        let Some(space) = address.get_space() else {
            return address;
        };
        let in_default_space = self
            .arch()
            .manage()
            .get_default_code_space()
            .is_some_and(|default| Rc::ptr_eq(space, default));
        if in_default_space {
            Address::new(Rc::clone(space), address.get_offset() & !1)
        } else {
            address
        }
    }

    /// Convert an engine byte offset back to the address units accepted by the
    /// raw CLI. Object-backed programs already expose byte VMAs and are unchanged.
    pub fn output_code_offset(&self, value: u64) -> u64 {
        match self.raw_address_units {
            Some((word_size, _)) => code_offset_in_target_units(value, word_size),
            None => value,
        }
    }

    /// Convert an engine address to its own space's target units for raw input.
    pub fn output_address_offset(&self, address: &Address) -> u64 {
        let value = address.get_offset();
        if self.raw_address_units.is_none() {
            return value;
        }
        address.get_space().map_or(value, |space| {
            code_offset_in_target_units(value, u64::from(space.get_word_size()))
        })
    }

    /// Convert an exclusive engine byte end to target address units, rounding
    /// up when the final code unit is only partially present.
    pub fn output_code_end_offset(&self, value: u64) -> u64 {
        match self.raw_address_units {
            Some((word_size, _)) => code_end_in_target_units(value, word_size),
            None => value,
        }
    }

    /// Resolve a function entry address by symbol name (the `queryFunction`
    /// hook): scan the binaryimage symbols read at load.  `None` if no symbol of
    /// that name exists.
    pub fn lookup_symbol(&self, name: &str) -> Option<Address> {
        let _load = self.arch().load_scope();
        // (unlace `symbolnamebound`) `self.symbols` carries the bounded spelling,
        // so bound the query too: `load function <name>` must accept both the
        // binary's ORIGINAL name and the one the listing renders. Idempotent, and
        // a no-op for every real name.
        let name = &*unlace_decomp::symbolnamebound::bound_scope_path(name, "::");
        self.symbols
            .lookup(name)
            .map(|s| s.addr.clone())
            .or_else(|| self.anonymous_address(name))
    }

    /// (unlace) Iterate every function symbol unlace knows for the loaded program as
    /// `(name, entry Address)` — the full callable-symbol inventory.
    ///
    /// After [`Self::commit_pending_analysis`] (`read symbols`) this covers both
    /// the loader's function symbols (`.symtab`/`.dynsym`/PLT stubs, read at load
    /// into `self.symbols`) and the analysis-tier discovered/renamed functions
    /// (committed via [`Self::register_symbol`]).  The addresses are engine
    /// code-space VMAs, which equal the ELF file virtual addresses for
    /// `ET_EXEC`/`ET_DYN`.  CRT/thunk/PLT filtering is intentionally left to the
    /// caller (the decbench backend's `should_skip_function`), matching the
    /// raw-backend convention — the engine reports every function it found.
    pub fn function_entries(&self) -> impl Iterator<Item = (&str, &Address)> {
        self.inventory_symbols().map(|s| (s.name.as_str(), &s.addr))
    }

    /// (unlace, issue #197) The **canonical** whole-binary function enumeration:
    /// exactly one [`FunctionEntry`] per function ENTRY, address-ordered, with
    /// every other name that entry carries kept as an alias.
    ///
    /// [`Self::function_entries`] is the raw symbol stream, in which one function
    /// can appear several times — [`Self::register_symbol`] retains by NAME, so
    /// two names at one address are two records.  Three producers feed that:
    ///
    /// 1. **A generic alias at the same address.** An analysis pass re-registers a
    ///    discovered entry under the engine placeholder `sub_<addr>` even though
    ///    the loader already named it, so `compute` and `sub_100b8` both sit at
    ///    `0x100b8`.  Likewise every FID/PDB/demangle *rename* leaves the old
    ///    placeholder behind in the symbol stream.
    /// 2. **The ARM Thumb `entry|1` twin.** An ARM/Thumb function's ELF symbol
    ///    stores the mode bit IN `st_value` (this repo's `arm_thumb_linked_le32`
    ///    fixture has `compute` at `st_value = 0x100b9`), so an unmasked consumer
    ///    reports a second entry one byte above the real one.  That twin is not
    ///    merely redundant: `0x100b9` is not an instruction boundary, so it
    ///    decompiles to a bogus empty `void sub_100b9(void)`.
    /// 3. **A second, genuinely different name for one function.** A debug-info
    ///    pass (DWARF/PDB/pclntab/objc) emits a name the linker symbol table does
    ///    not have, and it is registered beside the loader's: `macho_dwarf.o`
    ///    carries `_l0`+`first_byte` at `0x0` and `_main`+`main` at `0x40`, and a
    ///    decorated/undecorated PE pair takes the same path.  (The loader's own
    ///    funcsym stream cannot do this — it is address-deduped as it is read;
    ///    the names that dedup drops are appended as aliases only, see
    ///    `loader_aliases`, so they never change the reported name.)
    ///
    /// Producers 1 and 3 collapse by address; producer 2 needs the same Thumb-bit
    /// normalization [`crate::project::build_asm`] already applies to its labels
    /// (`vma & !1` on an ARM-family spec), which is also what the loader does when
    /// it turns an odd `st_value` into an even entry address.
    ///
    /// The retained `name` is the most informative one ([`entry_name_rank`]);
    /// `aliases` keeps the rest so a name-keyed lookup
    /// ([`Self::find_entry_by_name`], behind `--functions <alias>`) still
    /// resolves.  Nothing is lost — one function is simply reported, and
    /// decompiled, once.
    pub fn function_entries_canonical(&self) -> Vec<FunctionEntry> {
        self.function_entries_shared().as_ref().clone()
    }

    /// The canonical entries, rebuilt only after the symbols, declared names or
    /// declared extents changed. Assertion targets resolve names one at a time, so rebuilding the
    /// whole list per lookup made applying A assertions O(A x symbols).
    fn function_entries_shared(&self) -> Rc<Vec<FunctionEntry>> {
        let key = (self.symbols.revision, self.declared_revision);
        if let Some((symbols, declared, entries)) = self.canonical_entries.borrow().as_ref() {
            if (*symbols, *declared) == key {
                return Rc::clone(entries);
            }
        }
        let mut entries = self.build_function_entries_canonical();
        self.append_anonymous_entries(&mut entries);
        let entries = Rc::new(entries);
        *self.canonical_entries.borrow_mut() = Some((key.0, key.1, Rc::clone(&entries)));
        entries
    }

    /// Whether any symbol or loader alias is spelled exactly `name` (the
    /// spelling a name selector would match first). O(1) on the name index.
    pub(crate) fn has_symbol_spelled(&self, name: &str) -> bool {
        let _load = self.arch().load_scope();
        let name = &*unlace_decomp::symbolnamebound::bound_scope_path(name, "::");
        (self.symbols.lookup(name).is_some() || self.anonymous_address(name).is_some())
            || self
                .loader_aliases
                .values()
                .any(|names| names.iter().any(|alias| alias == name))
    }

    fn build_function_entries_canonical(&self) -> Vec<FunctionEntry> {
        let normalize = |vma: u64| self.thumb_normalized(vma);

        // Group every name by normalized entry offset, keeping one Address per
        // group (rebuilt at the normalized offset, so an ARM twin reports the
        // real, even entry).
        let mut groups: BTreeMap<u64, (Address, Vec<&ProgramSymbol>)> = BTreeMap::new();
        for s in self.symbols.iter() {
            // A sentinel (spaceless) address cannot be normalized or rebuilt;
            // such a record is not a real entry, so skip it rather than guess.
            let Some(space) = s.addr.get_space() else {
                continue;
            };
            let vma = normalize(s.addr.get_offset());
            let entry = groups
                .entry(vma)
                .or_insert_with(|| (Address::new(Rc::clone(space), vma), Vec::new()));
            if !entry.1.iter().any(|record| record.name == s.name) {
                entry.1.push(s);
            }
        }

        let mut entries: Vec<FunctionEntry> = groups
            .into_iter()
            .map(|(vma, (addr, mut records))| {
                // A caller's declaration first, then the most informative name —
                // see `is_not_declared_name` and `entry_name_rank`.
                records.sort_by(|a, b| {
                    (
                        self.is_not_declared_name(vma, &a.name),
                        entry_name_rank(&a.name),
                    )
                        .cmp(&(
                            self.is_not_declared_name(vma, &b.name),
                            entry_name_rank(&b.name),
                        ))
                        .then_with(|| a.name.cmp(&b.name))
                });
                let canonical = records.remove(0);
                let object_record = std::iter::once(canonical)
                    .chain(records.iter().copied())
                    .find(|record| record.object_location.is_some());
                let provenance = object_record
                    .map(|_| EntryProvenance::DefinedObject)
                    .unwrap_or_else(|| {
                        if canonical.provenance == EntryProvenance::UndefinedExternal
                            || records.iter().any(|record| {
                                record.provenance == EntryProvenance::UndefinedExternal
                            })
                        {
                            EntryProvenance::UndefinedExternal
                        } else {
                            EntryProvenance::Mapped
                        }
                    });
                let mut aliases: Vec<String> =
                    records.iter().map(|record| record.name.clone()).collect();
                self.push_loader_aliases(vma, &canonical.name, &mut aliases);
                FunctionEntry {
                    name: canonical.name.clone(),
                    addr,
                    aliases,
                    object_location: object_record
                        .and_then(|record| record.object_location.clone()),
                    binding: object_record
                        .and_then(|record| record.binding.clone())
                        .or_else(|| canonical.binding.clone()),
                    provenance,
                    size: 0,
                }
            })
            .collect();
        // (unlace, `functions-json-size`) Measure each entry's extent in one pass.
        // The `BTreeMap` above already put the list in ascending address order,
        // which is what the clip needs; the section table is the loader's, so
        // this adds no decode to the cheap inventory call.
        crate::funcextent::assign_extents(
            &mut entries,
            &crate::funcextent::spans(&self.sections(), &self.segments()),
        );
        self.bound_entries_by_flow(&mut entries);
        // (unlace `funcchunks`) The chunk model's flow body, where one was built,
        // replaces the clip's upper bound.
        for entry in &mut entries {
            if let Some(&body) = self.function_bodies.get(&entry.addr.get_offset()) {
                entry.size = body;
            }
        }
        // A caller-declared extent is an assertion, not a guess: it outranks the
        // clip everywhere the clip is reported (`declared_extents`).
        if self.has_declared_extents() {
            for entry in &mut entries {
                let declared = self.declared_extent(entry.addr.get_offset());
                if declared > 0 {
                    entry.size = declared as u64;
                }
            }
        }
        entries
    }

    /// Append the loader's alias names at `vma` that neither `name` nor `aliases`
    /// already spells.
    fn push_loader_aliases(&self, vma: u64, name: &str, aliases: &mut Vec<String>) {
        let Some(names) = self.loader_aliases.get(&vma) else {
            return;
        };
        let mut known: std::collections::HashSet<&str> =
            aliases.iter().map(String::as_str).chain([name]).collect();
        let fresh: Vec<String> = names
            .iter()
            .filter(|alias| known.insert(alias.as_str()))
            .cloned()
            .collect();
        aliases.extend(fresh);
    }

    /// (unlace, `functions-json-size`) The byte extent of an arbitrary address,
    /// for the single-target paths that synthesize a [`FunctionEntry`] the
    /// enumeration does not know (`--addr` on an undiscovered function).
    ///
    /// Same clip, same upper-bound meaning as the bulk pass — see
    /// [`crate::funcextent`].
    pub fn function_extent_at(&self, vma: u64) -> u64 {
        let entry = self.thumb_normalized(vma);
        let declared = self.declared_extent(entry);
        if declared > 0 {
            return declared as u64;
        }
        if !self.anonymous_entries.is_empty() {
            return self.bound_by_flow(entry, self.compact_extent_at(entry));
        }
        let entries = self.entry_offsets();
        let clip = crate::funcextent::extent_at(
            entry,
            &entries,
            &crate::funcextent::spans(&self.sections(), &self.segments()),
        );
        self.bound_by_flow(entry, clip)
    }

    /// (unlace #1288) The clip [`Self::function_extent_at`] reports for `vma`
    /// when the entry's flow ends before it, with the flow-bounded extent
    /// first: `(extent, clip)`. `None` when the flow did not shorten it.
    pub fn extent_cut_by_flow(&self, vma: u64) -> Option<(u64, u64)> {
        let entry = self.thumb_normalized(vma);
        if !self.flow_ends_measured() || self.declared_extent(entry) > 0 {
            return None;
        }
        let clip = if self.anonymous_entries.is_empty() {
            crate::funcextent::extent_at(
                entry,
                &self.entry_offsets(),
                &crate::funcextent::spans(&self.sections(), &self.segments()),
            )
        } else {
            self.compact_extent_at(entry)
        };
        let extent = self.bound_by_flow(entry, clip);
        (extent < clip).then_some((extent, clip))
    }

    /// (unlace #1288) The function in front of `vma` when `vma` lies past the end
    /// of that function's flow but short of the next function: the entry and
    /// where its flow ends. `None` everywhere else, and on every image that
    /// measured no flow ends.
    pub fn flow_ended_before(&self, vma: u64) -> Option<(FunctionEntry, u64)> {
        self.flow_ends.as_ref()?;
        let vma = self.thumb_normalized(vma);
        let starts = self.entry_offsets();
        let owner = starts[..starts.partition_point(|&start| start <= vma)]
            .last()
            .copied()?;
        let (extent, clip) = self.extent_cut_by_flow(owner)?;
        let end = owner + extent;
        if owner == vma || vma < end || vma >= owner + clip {
            return None;
        }
        Some((self.find_entry_at(owner)?, end))
    }

    /// [`Self::extent_cut_by_flow`] of every entry the flow shortened, entry
    /// VMA -> `(extent, clip)`, measured in one pass; empty on an image that
    /// measured no flow ends.
    pub fn extents_cut_by_flow(&self) -> BTreeMap<u64, (u64, u64)> {
        let Some(ends) = self
            .flow_ends
            .as_ref()
            .filter(|_| self.flow_ends_measured())
        else {
            return BTreeMap::new();
        };
        if !self.anonymous_entries.is_empty() {
            return ends
                .keys()
                .filter_map(|&entry| Some((entry, self.extent_cut_by_flow(entry)?)))
                .collect();
        }
        let entries = self.entry_offsets();
        let spans = crate::funcextent::spans(&self.sections(), &self.segments());
        ends.keys()
            .filter(|&&entry| {
                self.declared_extent(entry) == 0 && entries.binary_search(&entry).is_ok()
            })
            .filter_map(|&entry| {
                let clip = crate::funcextent::extent_at(entry, &entries, &spans);
                let extent = crate::funcextent::bound_by_flow(entry, clip, Some(entry), ends);
                (extent < clip).then_some((entry, (extent, clip)))
            })
            .collect()
    }

    /// Whether [`Self::flow_ends`] were measured from the functions' flow. A
    /// managed assembly's are the stated ends of its method bodies: they bound
    /// an extent, but no flow stopped short of the bytes after one.
    fn flow_ends_measured(&self) -> bool {
        self.flow_ends.is_some() && self.container != ProgramContainer::Cil
    }

    /// `clip` bounded by the function ends (`flow_ends`), unchanged on an
    /// image that has none.
    fn bound_by_flow(&self, vma: u64, clip: u64) -> u64 {
        let Some(ends) = &self.flow_ends else {
            return clip;
        };
        let starts = self.entry_offsets();
        let owner = starts
            .partition_point(|&start| start <= vma)
            .checked_sub(1)
            .map(|i| starts[i]);
        crate::funcextent::bound_by_flow(vma, clip, owner, ends)
    }

    /// [`Self::bound_by_flow`] over an ascending entry list, each its own owner.
    pub(crate) fn bound_entries_by_flow(&self, entries: &mut [FunctionEntry]) {
        let Some(ends) = &self.flow_ends else { return };
        for entry in entries {
            let vma = entry.addr.get_offset();
            entry.size = crate::funcextent::bound_by_flow(vma, entry.size, Some(vma), ends);
        }
    }

    /// The canonical entries eligible for automatic whole-binary decompilation.
    ///
    /// Import pointer slots remain in the canonical inventory for call naming
    /// and generic address lookup, but pointer words are not function bodies.
    /// Loaders without section metadata retain the complete inventory.
    ///
    /// Two things disqualify an entry, and the second is not a section-flag
    /// question at all. The flag test asks whether the address is in CODE-bearing
    /// memory. That is the right question for a discovered entry and the wrong
    /// one for an import slot, because a PE is free to put its Import Address
    /// Table inside its code section — a packed image with one
    /// `CODE|EXECUTE|WRITE` section holding both the stub and the whole import
    /// directory passes the flag test at every slot, so 50 of a 56-entry
    /// inventory were pointer words that decompiled to a body dereferencing an
    /// uninitialized pointer. The loader knows which addresses those are
    /// ([`Self::import_slots`]) because it put the names there, so the slots are
    /// excluded on that knowledge instead.
    ///
    /// A CALLER-DECLARED entry is kept whatever either test says. The flag test
    /// is a guess about where code lives, and it is wrong exactly where an
    /// agent reaches for `--define-function`: a packer that marks its whole
    /// image data (every section `INITIALIZED_DATA|READ|WRITE`, none
    /// `MEM_EXECUTE`) leaves this list empty, so a declared function was
    /// enumerated by `unlace functions`, decompiled fine by `unlace decompile`, and
    /// then silently dropped from the whole-binary run.
    pub fn function_entries_executable(&self) -> Vec<FunctionEntry> {
        let sections = self.sections();
        self.function_entries_canonical()
            .into_iter()
            .filter(|entry| self.entry_is_executable(entry.addr.get_offset(), &sections))
            .collect()
    }

    /// Does `entries` hold anything [`Self::function_entries_executable`] would
    /// keep — i.e. is this inventory more than import pointer slots and data
    /// addresses?
    ///
    /// The emptiness question every whole-binary surface has to ask, answered
    /// over the inventory the caller already holds rather than by rebuilding it:
    /// the section table is walked once, and the canonical enumeration not at
    /// all. `unlace functions` needs it because an image can enumerate six import
    /// names and no bodies, which is a total discovery failure that a plain
    /// `is_empty()` reads as a healthy listing.
    pub fn any_executable_entry(&self, entries: &[FunctionEntry]) -> bool {
        let sections = self.sections();
        entries
            .iter()
            .any(|entry| self.entry_is_executable(entry.addr.get_offset(), &sections))
    }

    /// The per-entry half of [`Self::function_entries_executable`], with the
    /// section table hoisted out so a whole inventory costs one loader walk.
    fn entry_is_executable(&self, vma: u64, sections: &[(u64, u64, u32)]) -> bool {
        if !self.is_body_entry(vma) {
            return false;
        }
        if self.is_declared_entry(vma) {
            return true;
        }
        sections.is_empty()
            || sections.iter().any(|&(start, size, flags)| {
                flags & section_flags::CODE != 0 && vma >= start && vma - start < size
            })
    }

    /// Does `vma` fall inside an import pointer slot — a word the run-time
    /// loader fills with a resolved import address?
    ///
    /// The address half of the loader's import resolution
    /// (`ObjectLoadImage::import_slot_ranges`). Always false on the XML datatest
    /// path and for a raw image.
    pub fn is_import_slot(&self, vma: u64) -> bool {
        self.import_slots.contains(vma)
    }

    /// Whether `vma` may be treated as the start of a function body.
    ///
    /// An import slot remains a `FunctionSymbol` so calls through its address
    /// bind to the import name and prototype, but the word itself is not code.
    /// A caller declaration deliberately outranks the loader classification.
    pub fn is_body_entry(&self, vma: u64) -> bool {
        self.is_declared_entry(vma) || !self.is_import_slot(vma)
    }

    /// (unlace, issue #197) Resolve a canonical entry by ANY of its names — the
    /// reported `name` or any of its `aliases`.
    ///
    /// The name-keyed lookup behind `unlace decompile-all --functions <name>` (and
    /// the wasm `decompile <name>` command).  Collapsing the enumeration must not
    /// make a name that used to select a function stop working, so the filter
    /// searches the alias set too — this is what preserves the decbench
    /// name-narrowing the old `(name, offset)` dedup was keeping duplicate records
    /// for.
    ///
    /// `None` also when the name identifies several entries neither
    /// [`Self::lone_elf_definition`] nor [`Self::lone_executable_candidate`]
    /// settles: a caller that can only answer yes-or-no must not silently pick
    /// one of them. A caller that
    /// can report the ambiguity asks [`Self::resolve_entry`] instead, which
    /// names every candidate. The narrowing is shared with `resolve_entry` so
    /// that the two name lookups cannot answer one name at two addresses —
    /// `disassemble` and `read` reach a name through this one and fall through
    /// to the raw symbol table when it declines, which on a PE import pair is
    /// the pointer slot rather than the thunk `decompile` would have picked.
    pub fn find_entry_by_name(&self, want: &str) -> Option<FunctionEntry> {
        let _load = self.arch().load_scope();
        // (unlace `symbolnamebound`) The enumeration reports the bounded spelling,
        // so bound the query too -- a caller holding the binary's ORIGINAL name
        // must still resolve. Idempotent, so the bounded spelling resolves as
        // well, and a no-op for every real name.
        let want = &*unlace_decomp::symbolnamebound::bound_scope_path(want, "::");
        if self.symbols.lookup(want).is_none() {
            if let Some(addr) = self.anonymous_address(want) {
                return Some(self.entry_at_or_named(addr.get_offset()));
            }
        }
        let matches = self.entries_named(want);
        // On a miss, the (unlace, RE-need `string-owner-function-name`) placeholder
        // fallback [`Self::resolve_entry`] takes, so the two name lookups answer
        // one name the same way.
        self.one_named(matches, want)
    }

    fn one_named(&self, mut matches: Vec<FunctionEntry>, want: &str) -> Option<FunctionEntry> {
        match matches.len() {
            0 => self.entry_by_placeholder_name(want),
            1 => Some(matches.remove(0)),
            _ => {
                if let Some(entry) = self.lone_elf_definition(&matches) {
                    return Some(entry);
                }
                if self.keep_direct_candidates(&mut matches, want) {
                    return self.one_named(matches, want);
                }
                self.lone_executable_candidate(&matches)
            }
        }
    }

    /// The canonical entries spelled `want`, plus the entry at each loader alias
    /// spelled `want` whose address no canonical entry holds yet, so a lookup
    /// sees the same candidates whether or not discovery has named that address.
    fn entries_named(&self, want: &str) -> Vec<FunctionEntry> {
        let (entries, names) = self.entry_names();
        let mut found: Vec<FunctionEntry> = names
            .spelled(&entries, want)
            .map(|at| entries[at].clone())
            .collect();
        for vma in names.aliased(&self.loader_aliases, want) {
            if !found.iter().any(|entry| entry.addr.get_offset() == vma) {
                found.push(self.entry_at_or_named(vma));
            }
        }
        found
    }

    /// The canonical entries with their name index, rebuilt with them.
    fn entry_names(&self) -> (Rc<Vec<FunctionEntry>>, Rc<EntryNames>) {
        let entries = self.function_entries_shared();
        if let Some((indexed, names)) = self.entry_names.borrow().as_ref() {
            if Rc::ptr_eq(indexed, &entries) {
                return (entries, Rc::clone(names));
            }
        }
        let names = Rc::new(EntryNames::new(&entries, &self.loader_aliases));
        *self.entry_names.borrow_mut() = Some((Rc::clone(&entries), Rc::clone(&names)));
        (entries, names)
    }

    /// Drop the candidates `want` reaches only through a loader alias, when any
    /// other candidate remains; `true` when something was dropped. A name that
    /// selected one function before those aliases existed keeps selecting it.
    fn keep_direct_candidates(&self, candidates: &mut Vec<FunctionEntry>, want: &str) -> bool {
        let before = candidates.len();
        if candidates
            .iter()
            .any(|entry| !self.named_only_by_loader_alias(entry, want))
        {
            candidates.retain(|entry| !self.named_only_by_loader_alias(entry, want));
        }
        candidates.len() < before
    }

    fn named_only_by_loader_alias(&self, entry: &FunctionEntry, want: &str) -> bool {
        let vma = entry.addr.get_offset();
        entry.name != want
            && self
                .loader_aliases
                .get(&vma)
                .is_some_and(|names| names.iter().any(|n| n == want))
            && !self
                .symbols
                .slots_of(want)
                .any(|symbol| self.thumb_normalized(symbol.addr.get_offset()) == vma)
    }

    /// (unlace, issue #197) Resolve the canonical entry AT `vma`, tolerating an
    /// ARM/Thumb `entry|1` address.
    ///
    /// Backs `unlace decompile-all --addr 0xVMA` (and the wasm `decompile 0xADDR`
    /// command).  An ARM caller legitimately holds odd addresses — an ELF symbol
    /// value, a DWARF entry PC, or a benchmark case address all carry the Thumb
    /// mode bit — and decompiling literally there lands mid-instruction and
    /// yields an empty body.  Folding the bit reaches the real function.
    ///
    /// Deliberately conservative: it only ever returns an entry the enumeration
    /// already knows, so an address that is not a discovered function start is
    /// still `None` and the caller keeps decompiling exactly where it was asked.
    pub fn find_entry_at(&self, vma: u64) -> Option<FunctionEntry> {
        let vma = if self.is_declared_entry(vma) {
            vma
        } else {
            self.function_address_aliases
                .get(&vma)
                .copied()
                .unwrap_or(vma)
        };
        let want = self.thumb_normalized(vma);
        if !self.anonymous_entries.is_empty() {
            return self.find_compact_entry_at(want);
        }
        self.function_entries_canonical()
            .into_iter()
            .find(|e| e.addr.get_offset() == want)
    }

    /// The address `selector` resolves to: a mapped numeric address with its
    /// Thumb bit folded, as [`Self::resolve_entry`] would answer it but without
    /// building the entry, and anything else through `resolve_entry`.
    pub fn selection_address(&self, selector: &EntrySelector) -> Option<u64> {
        if let EntrySelector::Numeric(vma) = selector {
            let vma = self.thumb_normalized(*vma);
            if self.vma_is_mapped(vma) {
                return Some(vma);
            }
        }
        self.resolve_entry(selector)
            .ok()
            .map(|entry| entry.addr.get_offset())
    }

    /// For each of `vmas`, the inventory entry whose extent holds it when it is
    /// not itself an entry: what a selection lands inside when discovery found
    /// no function starting there (`docs/cli.md`, `interior_to`). The inventory
    /// is enumerated once for the whole batch.
    pub fn entries_containing(&self, vmas: &[u64]) -> Vec<Option<FunctionEntry>> {
        if !self.anonymous_entries.is_empty() {
            return self.compact_entries_containing(vmas);
        }
        let entries = self.function_entries_canonical();
        vmas.iter()
            .map(|&vma| {
                let want = self.thumb_normalized(vma);
                let below = entries.partition_point(|e| e.addr.get_offset() <= want);
                let owner = entries.get(below.checked_sub(1)?)?;
                let start = owner.addr.get_offset();
                (start < want && want - start < owner.size).then(|| owner.clone())
            })
            .collect()
    }

    /// Resolve a selector without guessing between object-file coordinates.
    ///
    /// Numeric resolution checks the mapped synthetic address space first. On
    /// a relocatable object only, an otherwise-unmapped value may then match a
    /// defined function's raw section offset; that compatibility form succeeds
    /// only when the match is unique.
    pub fn resolve_entry(
        &self,
        selector: &EntrySelector,
    ) -> Result<FunctionEntry, EntryLookupError> {
        let _load = self.arch().load_scope();
        match selector {
            EntrySelector::Name(want) => {
                // (unlace `symbolnamebound`) The enumeration reports the bounded
                // spelling, so bound the query too -- a caller holding the
                // binary's ORIGINAL name must still resolve. Idempotent, so the
                // bounded spelling resolves as well.
                let want = &*unlace_decomp::symbolnamebound::bound_scope_path(want, "::");
                if self.symbols.lookup(want).is_none() {
                    if let Some(addr) = self.anonymous_address(want) {
                        return Ok(self.entry_at_or_named(addr.get_offset()));
                    }
                }
                let mut candidates = self.entries_named(want);
                if candidates.is_empty() {
                    // (unlace, RE-need `string-owner-function-name`) Nothing carries
                    // that name, so read it as the placeholder it looks like: a
                    // `sub_<addr>` this build would mint at a mapped address denotes
                    // that address and nothing else.  Only on a MISS, so a binary
                    // that really does have a symbol spelled that way still wins.
                    if let Some(entry) = self.entry_by_placeholder_name(want) {
                        return Ok(entry);
                    }
                    // (unlace, issue #666) Then the platform-decorated spelling on a
                    // container that decorates: Mach-O stores `main` as `_main`, so
                    // the C spelling names the same function. Only on a MISS, so an
                    // image carrying both spellings answers the one it was asked.
                    if self.symbol_underscore_prefix && !want.starts_with('_') {
                        let decorated = format!("_{want}");
                        candidates = self.entries_named(&decorated);
                        self.keep_direct_candidates(&mut candidates, &decorated);
                    }
                    if candidates.is_empty() {
                        let entries = self.function_entries_shared();
                        return Err(EntryLookupError::NotFound {
                            selector: selector.display(),
                            suggestion: nearest_spelling(&entries, want),
                            named_entries: named_entry_count(&entries),
                            data: self.data_name(want),
                        });
                    }
                }
                self.one_candidate(selector, candidates)
            }
            EntrySelector::SectionOffset { section, offset } => {
                let sections: Vec<&ObjectSectionLocation> = self
                    .object_sections
                    .iter()
                    .filter(|candidate| candidate.name == *section && *offset < candidate.size)
                    .collect();
                self.resolve_sections(selector, sections, *offset)
            }
            EntrySelector::SectionIndexOffset {
                section_index,
                offset,
            } => {
                let sections: Vec<&ObjectSectionLocation> = self
                    .object_sections
                    .iter()
                    .filter(|candidate| {
                        candidate.index == *section_index && *offset < candidate.size
                    })
                    .collect();
                self.resolve_sections(selector, sections, *offset)
            }
            EntrySelector::Numeric(vma) => {
                let vma = self.thumb_normalized(*vma);
                if self.vma_is_mapped(vma) {
                    return Ok(self.entry_at_or_named(vma));
                }

                let raw_matches: Vec<FunctionEntry> = self
                    .function_entries_canonical()
                    .into_iter()
                    .filter(|entry| {
                        entry.provenance == EntryProvenance::DefinedObject
                            && entry
                                .object_location
                                .as_ref()
                                .is_some_and(|location| location.offset == vma)
                    })
                    .collect();
                if !raw_matches.is_empty() {
                    return self.one_candidate(selector, raw_matches);
                }

                // A genuine undefined symbol is intentionally unmapped but may
                // still be selected explicitly for its external declaration.
                if let Some(entry) = self.find_entry_at(vma) {
                    if entry.provenance == EntryProvenance::UndefinedExternal {
                        return Ok(entry);
                    }
                }
                Err(EntryLookupError::Unmapped {
                    selector: selector.display(),
                    relocatable: !self.object_sections.is_empty(),
                })
            }
        }
    }

    /// Resolve a selector specifically for an operation that will lift a body.
    ///
    /// Generic symbol resolution intentionally accepts import slots: their
    /// addresses are load-bearing call targets. Body selection adds the one
    /// semantic check that resolution alone cannot make.
    pub fn resolve_body_entry(
        &self,
        selector: &EntrySelector,
    ) -> Result<FunctionEntry, EntryLookupError> {
        let entry = self.resolve_entry(selector)?;
        if self.is_body_entry(entry.addr.get_offset()) {
            return Ok(entry);
        }
        Err(EntryLookupError::BodylessImport {
            selector: selector.display(),
            name: entry.name,
            address: entry.addr.get_offset(),
        })
    }

    /// Resolve an already-parsed machine address without discarding its address
    /// space. Numeric front-end selectors intentionally use the default code
    /// space and retain relocatable raw-offset compatibility; console address
    /// grammar can instead name processor and overlay spaces explicitly.
    pub fn resolve_address(&self, address: &Address) -> Result<FunctionEntry, EntryLookupError> {
        let mut selector = String::new();
        address
            .print_raw(&mut selector)
            .map_err(|_| EntryLookupError::NotFound {
                selector: format!("0x{:x}", address.get_offset()),
                suggestion: None,
                named_entries: 0,
                data: None,
            })?;
        let known = self.entry_at_exact_address(address);
        if self.entry_bytes_mapped(address) {
            return Ok(known.unwrap_or_else(|| {
                let name = self
                    .arch()
                    .symboltab
                    .function_display_name_across_scopes(address)
                    .unwrap_or_else(|| self.arch().name_function(address));
                FunctionEntry {
                    name,
                    addr: address.clone(),
                    aliases: Vec::new(),
                    object_location: None,
                    provenance: EntryProvenance::Mapped,
                    binding: None,
                    size: self.function_extent_at(address.get_offset()),
                }
            }));
        }
        if let Some(entry) = known {
            if entry.provenance == EntryProvenance::UndefinedExternal {
                return Ok(entry);
            }
        }
        Err(EntryLookupError::Unmapped {
            selector,
            relocatable: !self.object_sections.is_empty(),
        })
    }

    fn entry_at_exact_address(&self, address: &Address) -> Option<FunctionEntry> {
        let mut records: Vec<&ProgramSymbol> = self
            .symbols
            .iter()
            .filter(|record| record.addr == *address)
            .collect();
        if records.is_empty() {
            return None;
        }
        let vma = address.get_offset();
        records.sort_by(|a, b| {
            (
                self.is_not_declared_name(vma, &a.name),
                entry_name_rank(&a.name),
            )
                .cmp(&(
                    self.is_not_declared_name(vma, &b.name),
                    entry_name_rank(&b.name),
                ))
                .then_with(|| a.name.cmp(&b.name))
        });
        let canonical = records.remove(0);
        let object_record = std::iter::once(canonical)
            .chain(records.iter().copied())
            .find(|record| record.object_location.is_some());
        let provenance = object_record
            .map(|_| EntryProvenance::DefinedObject)
            .unwrap_or_else(|| {
                if canonical.provenance == EntryProvenance::UndefinedExternal
                    || records
                        .iter()
                        .any(|record| record.provenance == EntryProvenance::UndefinedExternal)
                {
                    EntryProvenance::UndefinedExternal
                } else {
                    EntryProvenance::Mapped
                }
            });
        let mut aliases: Vec<String> = records.iter().map(|record| record.name.clone()).collect();
        self.push_loader_aliases(vma, &canonical.name, &mut aliases);
        Some(FunctionEntry {
            name: canonical.name.clone(),
            addr: address.clone(),
            aliases,
            object_location: object_record.and_then(|record| record.object_location.clone()),
            binding: object_record
                .and_then(|record| record.binding.clone())
                .or_else(|| canonical.binding.clone()),
            provenance,
            size: self.function_extent_at(address.get_offset()),
        })
    }

    fn resolve_sections(
        &self,
        selector: &EntrySelector,
        sections: Vec<&ObjectSectionLocation>,
        offset: u64,
    ) -> Result<FunctionEntry, EntryLookupError> {
        if sections.is_empty() {
            return Err(EntryLookupError::NotFound {
                selector: selector.display(),
                suggestion: None,
                named_entries: 0,
                data: None,
            });
        }
        let candidates = sections
            .into_iter()
            .map(|section| self.entry_at_or_named(section.vma.wrapping_add(offset)))
            .collect();
        self.one_candidate(selector, candidates)
    }

    fn one_candidate(
        &self,
        selector: &EntrySelector,
        mut candidates: Vec<FunctionEntry>,
    ) -> Result<FunctionEntry, EntryLookupError> {
        candidates.sort_by_key(|entry| entry.addr.get_offset());
        candidates.dedup_by_key(|entry| entry.addr.get_offset());
        if candidates.len() > 1 {
            if let EntrySelector::Name(want) = selector {
                if let Some(entry) = self.lone_elf_definition(&candidates) {
                    return Ok(entry);
                }
                let want = unlace_decomp::symbolnamebound::bound_scope_path(want, "::");
                if self.keep_direct_candidates(&mut candidates, &want) {
                    return self.one_candidate(selector, candidates);
                }
            }
            if let Some(entry) = self.lone_executable_candidate(&candidates) {
                return Ok(entry);
            }
        }
        match candidates.len() {
            0 => Err(EntryLookupError::NotFound {
                selector: selector.display(),
                suggestion: None,
                named_entries: 0,
                data: None,
            }),
            1 => Ok(candidates.remove(0)),
            _ => Err(EntryLookupError::Ambiguous {
                selector: selector.display(),
                candidates,
                relocatable: !self.object_sections.is_empty(),
            }),
        }
    }

    /// (unlace, RE-need `mach-o-import-data`) The one candidate that lives in
    /// executable memory, when a selector matches several and exactly one does.
    ///
    /// An import name is spelled twice in a dynamically linked image: once on
    /// the stub a direct call jumps to, and once on the pointer slot that stub
    /// reads. Both are entries — the slot's name is what makes an indirect call
    /// through it readable, and a slot with no stub twin (`__DATA,__got`,
    /// `__DATA,__nl_symbol_ptr`) is the only place its name appears at all — so
    /// neither can be dropped from the inventory. On a Mach-O they collide by
    /// name, and `unlace decompile <image> strcmp` answered `selector "strcmp" is
    /// ambiguous` for all nine imports of a 26-entry inventory, with only a raw
    /// `--addr` left to the caller. ELF already behaves the way this makes
    /// Mach-O behave, by naming only the PLT stub.
    ///
    /// Resolved at SELECTION time rather than by pruning the inventory, so it
    /// fires only where a twin actually exists and every lone slot row survives.
    /// Narrowing to EXACTLY one keeps a genuine collision an error: two
    /// same-named definitions in different code sections of a relocatable object
    /// are both executable, and picking either would be a guess.
    fn lone_executable_candidate(&self, candidates: &[FunctionEntry]) -> Option<FunctionEntry> {
        let sections = self.sections();
        let mut executable = candidates
            .iter()
            .filter(|entry| self.entry_is_executable(entry.addr.get_offset(), &sections));
        let only = executable.next()?;
        executable.next().is_none().then(|| only.clone())
    }

    /// Prefer one symbol-defined body only when every other candidate is a
    /// proven import stub. An analysis-generated name is not that proof.
    fn lone_elf_definition(&self, candidates: &[FunctionEntry]) -> Option<FunctionEntry> {
        let sections = self.sections();
        let mut definition = None;
        for entry in candidates {
            let addr = entry.addr.get_offset();
            if self.elf_functions.definitions.contains(&addr)
                && !self.elf_functions.imports.contains(&addr)
                && self.entry_is_executable(addr, &sections)
            {
                if definition.replace(entry).is_some() {
                    return None;
                }
            } else if !self.elf_functions.imports.contains(&addr) {
                return None;
            }
        }
        definition.cloned()
    }

    /// (unlace, RE-need `string-owner-function-name`) The address an ENGINE-MINTED
    /// placeholder name spells, when this program would mint exactly that name
    /// there.
    ///
    /// unlace calls a function no symbol covers `sub_<addr>`, and the attribution
    /// surfaces mint one for an entry the canonical inventory does not hold at
    /// all: `unlace strings` names a literal's owner from the xref walk's own flow
    /// attribution (`strings.rs (owning_function)`), which reaches starts
    /// discovery never recorded. The printed name was then unusable as a
    /// selector — `unlace strings graphy` reported `sub_100a3be` as the owner of
    /// `"No error information"` while `unlace decompile graphy sub_100a3be`
    /// answered `no function matches` and only `--addr 0x100a3be` worked. A
    /// placeholder carries no information beyond the address, so reading it back
    /// as one loses nothing and closes that round trip.
    ///
    /// Decided by MINTING rather than by parsing: a candidate is accepted only
    /// when some naming style renders it as the requested name
    /// ([`minted_function_names`]), so a word-addressed space's scaling follows
    /// for free and a name no style would print is not resolved.
    ///
    /// (unlace, RE-need `changing-namestyle-invalidates-discovered`) EVERY style,
    /// not just the active one: `option namestyle` decides how a name is
    /// PRINTED, and a placeholder holds nothing but the address whichever
    /// vocabulary spelled it. Matching only the active style made the styles
    /// disjoint name spaces — `unlace functions` reports `sub_15dc` and ignores
    /// namestyle, so `unlace decompile BIN sub_15dc --option namestyle ghidra`
    /// answered `no function matches` for a function the same run decompiles
    /// under `func_0x000015dc`.
    fn placeholder_name_address(&self, name: &str) -> Option<u64> {
        let digits = name.rsplit_once('_')?.1;
        let digits = digits
            .strip_prefix("0x")
            .or_else(|| digits.strip_prefix("0X"))
            .unwrap_or(digits);
        if digits.is_empty() || !digits.bytes().all(|b| b.is_ascii_hexdigit()) {
            return None;
        }
        let spelled = u64::from_str_radix(digits, 16).ok()?;
        let space = self.arch().manage().get_default_code_space()?;
        let scaled = AddrSpace::address_to_byte(spelled, space.get_word_size());
        let mut candidates = vec![spelled];
        if scaled != spelled {
            candidates.push(scaled);
        }
        candidates.into_iter().find(|&vma| {
            minted_function_names(&Address::new(Rc::clone(space), vma))
                .iter()
                .any(|m| m == name)
        })
    }

    /// The entry a placeholder name denotes, or `None` when the name is not one
    /// or the address it spells holds no mapped bytes.  The mapped test is the
    /// numeric selector's own ([`Self::resolve_entry`]), so a name resolved this
    /// way reaches exactly the function `--addr` on the same address reaches.
    fn entry_by_placeholder_name(&self, name: &str) -> Option<FunctionEntry> {
        let vma = self.placeholder_name_address(name)?;
        self.vma_is_mapped(vma).then(|| self.entry_at_or_named(vma))
    }

    fn entry_at_or_named(&self, vma: u64) -> FunctionEntry {
        if let Some(entry) = self.find_entry_at(vma) {
            return entry;
        }
        let code_space = self
            .arch()
            .manage()
            .get_default_code_space()
            .expect("default code space after bootstrap");
        let addr = Address::new(Rc::clone(code_space), vma);
        let object_location = self.object_location_at(vma);
        let name = self
            .function_named_at(vma)
            .unwrap_or_else(|| self.arch().name_function(&addr));
        let size = self.function_extent_at(vma);
        FunctionEntry {
            name,
            addr,
            aliases: Vec::new(),
            provenance: if object_location.is_some() {
                EntryProvenance::DefinedObject
            } else {
                EntryProvenance::Mapped
            },
            object_location,
            binding: None,
            size,
        }
    }

    fn object_location_at(&self, vma: u64) -> Option<ObjectLocation> {
        self.object_sections.iter().find_map(|section| {
            (vma >= section.vma && vma - section.vma < section.size).then(|| ObjectLocation {
                section_index: section.index,
                section: section.name.clone(),
                offset: vma - section.vma,
            })
        })
    }

    fn vma_is_mapped(&self, vma: u64) -> bool {
        let sections = self.sections();
        if sections.is_empty() {
            return self.vma_bytes_mapped(vma);
        }
        sections
            .iter()
            .any(|&(start, size, _)| vma >= start && vma - start < size)
    }

    /// (unlace, issue #197) Fold the ARM/Thumb mode bit out of `vma`.
    ///
    /// On an ARM-family spec a Thumb function's recorded address carries the mode
    /// bit in bit 0 while the instructions live at the even VMA — the same test
    /// and mask [`crate::project::build_asm`] applies to its labels, and the
    /// console-tier counterpart of the analysis tier's `thumb_masked`.  A no-op on
    /// every other architecture, where an odd code address is genuine.
    fn thumb_normalized(&self, vma: u64) -> u64 {
        if self.description().starts_with("ARM") {
            vma & !1
        } else {
            vma
        }
    }

    /// (unlace) Every section of bytes the load image maps, as `(vma, size, flags)`
    /// triples — `flags` bits per [`unlace_sleigh::loadimage::section_flags`]
    /// (CODE/DATA/READONLY/UNALLOC/NOLOAD).
    ///
    /// Consumes the LoadImage section-iteration API
    /// (`openSectionInfo`/`getNextSection`/`closeSectionInfo`) in one shot, the
    /// same loop shape as `CodeDataAnalysis::runModel` (`codedata.rs`), reached
    /// through the engine's shared loader handle (`translate().loader_rc()`) —
    /// the loader the bootstrap handed to the engine via `set_loader`.
    /// Zero-size records are skipped (the `runModel` convention). Empty when the
    /// loader publishes no section info (e.g. the XML `<binaryimage>` corpus
    /// loader, which keeps the trait's default no-op iteration).
    pub fn sections(&self) -> Vec<(u64, u64, u32)> {
        let loader_rc = self.arch().translate().loader_rc();
        // The iteration methods are `&self` (C++ `const` with a `mutable`
        // cursor; interior mutability here), so a shared borrow suffices.
        let loader = loader_rc.borrow();
        let mut out = Vec::new();
        let mut secinfo = LoadImageSection::default();
        loader.open_section_info();
        loop {
            // getNextSection fills `secinfo` and returns whether ANOTHER record
            // follows — so the record is consumed BEFORE the loop-exit check
            // (the runModel shape). An empty section list leaves the default
            // record (size 0), which the skip below drops.
            let moresections = loader.get_next_section(&mut secinfo);
            if secinfo.size != 0 {
                out.push((secinfo.address.get_offset(), secinfo.size, secinfo.flags));
            }
            if !moresections {
                break;
            }
        }
        loader.close_section_info();
        out
    }

    /// (unlace, `zero-function-sizes-make`) The loadable segments as
    /// `(vma, size, flags)` triples — the coarser mapping unit under
    /// [`Self::sections`], with the same [`section_flags`] vocabulary (a
    /// segment's CODE bit is its execute permission).
    ///
    /// The answer for an image whose section table is absent or unusable, where
    /// `sections()` is empty and every section-keyed question loses its
    /// container. Empty for a loader that does not model segments (the XML
    /// `<binaryimage>` corpus loader, a relocatable object) — the trait method
    /// defaults to it.
    pub fn segments(&self) -> Vec<(u64, u64, u32)> {
        self.arch().translate().loader_rc().borrow().get_segments()
    }

    /// Decode an ARM code pointer in a private Thumb context until the query ends.
    pub fn with_thumb_pointer<R>(&self, vma: u64, run: impl FnOnce() -> R) -> UnlaceResult<R> {
        let space = Rc::clone(
            self.arch()
                .manage()
                .get_default_code_space()
                .ok_or_else(|| UnlaceError::lowlevel("no default code space"))?,
        );
        let scope =
            self.arch().translate().context_scope().ok_or_else(|| {
                UnlaceError::lowlevel("translator does not support scoped context")
            })?;
        let address = Address::new(space, vma);
        self.arch()
            .with_context_db_mut(|db| db.set_variable(b"TMode", &address, 1))?;
        let result = run();
        drop(scope);
        Ok(result)
    }

    /// Whether a numeric code pointer may carry the ARM32 Thumb bit.
    pub fn is_arm32(&self) -> bool {
        is_arm32_language(self.arch().get_description())
    }

    /// (unlace) Whether the load image can actually read bytes at `addr` — i.e.
    /// whether an entry there could have a body at all.
    ///
    /// A function entry does not imply mapped bytes. A relocatable object's
    /// **undefined externals** (`puts`, `CellClass::Cell_Coord`) are bound to
    /// synthetic addresses in an extern area above the laid-out sections
    /// ([`unlace_analysis::loader::reloc_object`]) so that a call to one renders by
    /// name; nothing is mapped there, and nothing ever will be, because the
    /// definition lives in a different translation unit. The same is true of a
    /// PE import pointer slot. Asking the lifter for such a function's body can
    /// only produce "Unable to load N bytes", so the callers that would have
    /// asked check here first and report the entry for what it is.
    ///
    /// Probes with a one-byte `load_fill` — the exact question, rather than a
    /// section-flag approximation of it, so an address that *is* mapped but sits
    /// outside any CODE section (packed code in `.data`, a hand-picked `--addr`)
    /// still decompiles as it does today.
    pub fn entry_bytes_mapped(&self, addr: &Address) -> bool {
        let loader_rc = self.arch().translate().loader_rc();
        let mut loader = loader_rc.borrow_mut();
        let mut probe = [0u8; 1];
        loader.load_fill(&mut probe, addr).is_ok()
    }

    /// [`Self::entry_bytes_mapped`] for a caller holding a bare code-space VMA.
    /// `false` when the program has no code space to resolve the VMA against.
    pub fn vma_bytes_mapped(&self, vma: u64) -> bool {
        let Some(space) = self.arch().manage().get_default_code_space() else {
            return false;
        };
        self.entry_bytes_mapped(&Address::new(Rc::clone(space), vma))
    }

    /// (unlace) Disassemble the single machine instruction at code-space VMA
    /// `vma`, returning `(length, mnemonic, body)` — the one-instruction form
    /// of the `disassemble` console command (`IfcPrintdisasm`), for a caller
    /// that walks a range itself (advance by `length` per step).
    ///
    /// This allocating convenience API is retained for callers decoding an
    /// occasional instruction. Whole-image walks should use
    /// [`Self::disassemble_at_into`] so the mnemonic and body allocations are
    /// retained between instructions.
    pub fn disassemble_at(&self, vma: u64) -> UnlaceResult<(int4, String, String)> {
        let mut mnem = String::new();
        let mut body = String::new();
        let length = self.disassemble_at_into(vma, &mut mnem, &mut body)?;
        Ok((length, mnem, body))
    }

    /// (unlace) Disassemble one instruction into caller-owned mnemonic and body
    /// buffers, retaining their allocations across calls.
    ///
    /// Both buffers are cleared before every decode, including failed decodes.
    /// An undecodable or unmapped address surfaces as the translator's `Err`
    /// (C++ `BadDataError`/`DataUnavailError`).
    pub fn disassemble_at_into(
        &self,
        vma: u64,
        mnem: &mut String,
        body: &mut String,
    ) -> UnlaceResult<int4> {
        mnem.clear();
        body.clear();
        let code_space = Rc::clone(
            self.arch()
                .manage()
                .get_default_code_space()
                .ok_or_else(|| UnlaceError::lowlevel("no default code space"))?,
        );
        let addr = Address::new(code_space, vma);
        self.arch()
            .translate()
            .print_assembly_into(&addr, mnem, body)
    }

    /// Lift exactly one instruction, before decompiler passes or SSA construction.
    pub fn raw_pcode_at(&self, vma: u64) -> UnlaceResult<(int4, Vec<RawPcodeOp>)> {
        let space = Rc::clone(
            self.arch()
                .manage()
                .get_default_code_space()
                .ok_or_else(|| UnlaceError::lowlevel("no default code space"))?,
        );
        let mut emit = RawPcodeEmit::default();
        let len = self
            .arch()
            .translate()
            .one_instruction(&mut emit, &Address::new(space, vma))?;
        Ok((len, emit.0))
    }

    /// (unlace) The `unlace_wasm` per-function `kind` classification probe: lift
    /// the single instruction at code-space VMA `vma` to p-code (a one-shot
    /// [`PcodeEmit`](unlace_sleigh::translate::PcodeEmit) sink against the
    /// translator — the pcode analogue of [`Self::disassemble_at`]'s
    /// `AssemblyEmit` dance) and test it for the two **lone-jump** shapes a
    /// thunk/PLT-stub entry decompiles from:
    ///
    /// * `Some(Some(target))` — the p-code ends in an unconditional `BRANCH`
    ///   to a non-constant-space address (a real code-space target, not a
    ///   p-code-relative one — `flow.rs`'s constant-space-`in0` rule) and
    ///   contains no other flow op (`CALL`/`CBRANCH`/`RETURN`/...): a direct
    ///   lone jump; `target` is the destination offset.
    /// * `Some(None)` — the p-code ends in `BRANCHIND` with no other flow op
    ///   (address-computation ops like `LOAD`/`INT_ADD`/`COPY` before it are
    ///   fine): an indirect lone jump (the `jmp [GOT]` PLT shape).
    /// * `None` — anything else, including a decode error or an unmapped
    ///   address (conservative: the probe never panics).
    pub fn lone_jump_target(&self, vma: u64) -> Option<Option<u64>> {
        let code_space = Rc::clone(self.arch().manage().get_default_code_space()?);
        let addr = Address::new(code_space, vma);
        let mut emit = OneShotPcodeEmit::default();
        // Advisory probe: contain a decode `Err` AND any translator panic on
        // exotic bytes to `None` (the classification falls back to "func").
        let decoded = std::panic::catch_unwind(std::panic::AssertUnwindSafe(|| {
            self.arch().translate().one_instruction(&mut emit, &addr)
        }));
        match decoded {
            Ok(Ok(_len)) => {}
            _ => return None,
        }
        let (last_opc, last_in0) = emit.ops.last()?;
        // Exactly ONE flow op, and it is the last op — anything richer (a
        // conditional, a call, a fall-through mid-branch) is not a lone jump.
        let flow_ops = emit
            .ops
            .iter()
            .filter(|(opc, _)| {
                matches!(
                    opc,
                    OpCode::CPUI_BRANCH
                        | OpCode::CPUI_CBRANCH
                        | OpCode::CPUI_BRANCHIND
                        | OpCode::CPUI_CALL
                        | OpCode::CPUI_CALLIND
                        | OpCode::CPUI_CALLOTHER
                        | OpCode::CPUI_RETURN
                )
            })
            .count();
        if flow_ops != 1 {
            return None;
        }
        match last_opc {
            OpCode::CPUI_BRANCH => {
                let in0 = last_in0.as_ref()?;
                let space = in0.space.as_ref()?;
                if space.get_type() == unlace_base::space::spacetype::IPTR_CONSTANT {
                    None // p-code-relative branch, not a code-space target
                } else {
                    Some(Some(in0.offset))
                }
            }
            OpCode::CPUI_BRANCHIND => Some(None),
            _ => None,
        }
    }

    /// How the instruction at `vma` passes control on, read from its own
    /// p-code: the strongest flow op it holds (return, then indirect jump,
    /// then jump, then conditional jump, then call) and the code addresses
    /// its direct jumps and calls name. A branch within the instruction's own
    /// p-code is not flow. `None` when it does not decode or does not flow.
    pub fn insn_flow(&self, vma: u64) -> Option<InsnFlow> {
        let code_space = Rc::clone(self.arch().manage().get_default_code_space()?);
        let addr = Address::new(code_space, vma);
        let mut emit = OneShotPcodeEmit::default();
        let decoded = std::panic::catch_unwind(std::panic::AssertUnwindSafe(|| {
            self.arch().translate().one_instruction(&mut emit, &addr)
        }));
        if !matches!(decoded, Ok(Ok(_))) {
            return None;
        }
        let code_target = |in0: &Option<VarnodeData>| {
            let v = in0.as_ref()?;
            let space = v.space.as_ref()?;
            (space.get_type() != unlace_base::space::spacetype::IPTR_CONSTANT).then_some(v.offset)
        };
        let mut kind: Option<FlowKind> = None;
        let mut targets = Vec::new();
        for (opc, in0) in &emit.ops {
            let (k, target) = match opc {
                OpCode::CPUI_RETURN => (FlowKind::Return, None),
                OpCode::CPUI_BRANCHIND => (FlowKind::JumpInd, None),
                OpCode::CPUI_BRANCH => match code_target(in0) {
                    Some(t) => (FlowKind::Jump, Some(t)),
                    None => continue,
                },
                OpCode::CPUI_CBRANCH => match code_target(in0) {
                    Some(t) => (FlowKind::CondJump, Some(t)),
                    None => continue,
                },
                OpCode::CPUI_CALL => (FlowKind::Call, code_target(in0)),
                OpCode::CPUI_CALLIND => (FlowKind::CallInd, None),
                _ => continue,
            };
            targets.extend(target);
            kind = Some(kind.map_or(k, |old| old.min(k)));
        }
        kind.map(|kind| InsnFlow { kind, targets })
    }

    /// (unlace) Add the fixed addresses the instruction at `vma` names — the
    /// constant locations it reads and the constant addresses it branches or
    /// calls to — to `into`.
    ///
    /// The projection a listing needs to tell a literal-pool word from an
    /// instruction. A pool word is proved by the code around it (some
    /// instruction spells its address out and reads it) and disproved the same
    /// way (a branch names it as a label), so a caller walking a range
    /// accumulates both facts into one [`FixedRefs`] as it goes. What is
    /// harvested from the p-code is [`FixedRefs::harvest`].
    ///
    /// Adds nothing (never an error, never a panic) for an address that does not
    /// decode or a program with no code space — this is advisory evidence, and a
    /// caller that gets none simply learns nothing.
    pub fn add_fixed_refs_at(&self, vma: u64, into: &mut FixedRefs) {
        let Some(code_space) = self.arch().manage().get_default_code_space().cloned() else {
            return;
        };
        let addr = Address::new(code_space, vma);
        into.filled = 0;
        // An advisory probe that learns nothing must report the conservative
        // answer, so the fall-through bit is armed before the decode can fail.
        into.falls_through = true;
        // Advisory probe: contain a decode `Err` AND any translator panic on
        // exotic bytes to "no evidence", exactly as `lone_jump_target` does.
        let decoded = std::panic::catch_unwind(std::panic::AssertUnwindSafe(|| {
            self.arch().translate().one_instruction(into, &addr)
        }));
        let Ok(Ok(len)) = decoded else {
            return;
        };
        let data_space = self.arch().manage().get_default_data_space().cloned();
        into.harvest(data_space.as_ref(), vma.wrapping_add(len as u64));
    }

    /// This allocating convenience API is retained for occasional reads.
    /// Whole-image walks should use [`Self::read_bytes_into`] so the byte-buffer
    /// allocation is retained between reads.
    pub fn read_bytes(&self, vma: u64, size: usize) -> Option<Vec<u8>> {
        let mut bytes = Vec::new();
        self.read_bytes_into(vma, size, &mut bytes).then_some(bytes)
    }

    /// Read bytes at an address while preserving its address-space identity.
    pub fn read_bytes_at(&self, address: &Address, size: usize) -> Option<Vec<u8>> {
        if size > i32::MAX as usize {
            return None;
        }
        let mut bytes = vec![0; size];
        let loader_rc = self.arch().translate().loader_rc();
        loader_rc.borrow_mut().load_fill(&mut bytes, address).ok()?;
        Some(bytes)
    }

    /// (unlace) Read `size` raw image bytes at code-space VMA `vma` into a
    /// caller-owned buffer, retaining its allocation across calls.
    ///
    /// Returns `false` and leaves `bytes` empty when the range is not backed by
    /// the image (e.g. `.bss`, an unmapped address, or a `size` beyond the C++
    /// `int4` read contract).
    pub fn read_bytes_into(&self, vma: u64, size: usize, bytes: &mut Vec<u8>) -> bool {
        bytes.clear();
        if size > i32::MAX as usize {
            return false;
        }
        let Some(code_space) = self.arch().manage().get_default_code_space().cloned() else {
            return false;
        };
        let addr = Address::new(code_space, vma);
        bytes.resize(size, 0);
        let loader_rc = self.arch().translate().loader_rc();
        let loaded = loader_rc.borrow_mut().load_fill(bytes, &addr).is_ok();
        if !loaded {
            bytes.clear();
        }
        loaded
    }

    /// (unlace) Every **named global data symbol** mapped into the engine's
    /// default data space, as `(name, vma, type_size)` — the label set a
    /// whole-binary exporter cross-references against the `dat_<addr>` tokens
    /// the C printer generates for unnamed data.
    ///
    /// Enumerates the global scope (`Database::get_global_scope`) via
    /// `scope_space_symbol_specs` over the default data space (`ram` on every
    /// vendored processor; Harvard-style splits follow the data space).
    /// FunctionSymbols live in the SAME per-space rangemap (`add_function` maps
    /// them at their entry address) and the specs tuple's `uint4` is the
    /// varnode `flags` word — which does NOT distinguish them (functions carry
    /// `namelock|typelock`, but so can data) — so functions are excluded by
    /// their datatype instead: a FunctionSymbol's type is exactly the
    /// TYPE_CODE base, and every `metatype == TYPE_CODE` spec is dropped.
    /// This also drops the deliberately code-typed untyped Data placeholders
    /// some gated analysis passes install (size-1, no real extent — useless as
    /// data labels); typed data (DWARF `undefined<N>` globals, `char[N]`
    /// string symbols) is kept. `type_size` is the mapped datatype's byte size.
    /// Sorted by VMA.
    pub fn global_data_symbols(&self) -> Vec<(String, u64, i64)> {
        self.global_data_symbol_addresses()
            .into_iter()
            .map(|(name, address, size)| (name, address.get_offset(), size))
            .collect()
    }

    /// Resolve an imported data object's original spelling after identifier folding.
    pub fn lookup_data_alias(&self, name: &str) -> Option<u64> {
        self.data_name_aliases.get(name).copied()
    }

    /// The data object `name` labels, for a name that selects no function: a
    /// loader data symbol or data export, or a debug-info global
    /// ([`Self::lookup_data_alias`]), with the section holding it.
    fn data_name(&self, name: &str) -> Option<DataName> {
        let address = self.lookup_data_alias(name)?;
        let section = self.image_metadata.as_ref().and_then(|meta| {
            meta.sections
                .iter()
                .find(|s| address >= s.vma && address - s.vma < s.size)
                .map(|s| s.name.clone())
        });
        Some(DataName { address, section })
    }

    /// Global data symbols with their address-space identity retained.
    pub fn global_data_symbol_addresses(&self) -> Vec<(String, Address, i64)> {
        use unlace_decomp::dtype::type_metatype;
        let arch = self.arch();
        let Some(scope) = arch.symboltab.get_global_scope() else {
            return Vec::new();
        };
        let Some(data_space) = arch.manage().get_default_data_space() else {
            return Vec::new();
        };
        let space_index = data_space.get_index() as usize;
        let mut out: Vec<(String, Address, i64)> = arch
            .symboltab
            .scope_space_symbol_specs(scope, space_index)
            .into_iter()
            .filter(|(_, ct, _, _)| ct.get_metatype() != type_metatype::TYPE_CODE)
            .map(|(name, ct, addr, _)| (name, addr, i64::from(ct.get_size())))
            .collect();
        out.sort_by(|a, b| (&a.1, &a.0).cmp(&(&b.1, &b.0)));
        out
    }

    /// (unlace) Is a (possibly `::`-scoped) symbol of full name `full_name` present in
    /// the engine symbol table? Resolves the namespace path (`Box::vftable` → scope
    /// `Box`, basename `vftable`) read-only, then queries that scope by basename.
    ///
    /// Unlike [`Self::lookup_symbol`] (which only sees the console `register_symbol`
    /// name→addr map, populated by the Function-symbol commit arm), this reaches the
    /// `Database` directly, so it sees the **Data** symbols the analysis commit
    /// installs via `add_symbol_mapped` (the RTTI `<Class>::vftable` /
    /// `<Class>::RTTI_*` labels the `rtti` pass emits). The verification hook for
    /// the gated MSVC-RTTI recovery e2e.
    pub fn has_symbol_named(&self, full_name: &str) -> bool {
        let _load = self.arch().load_scope();
        let db = &self.arch().symboltab;
        let (scope, base) = db.resolve_scope_from_symbol_name(full_name, "::", None);
        match scope {
            Some(s) => !db.query_by_name(s, &base).is_empty(),
            None => false,
        }
    }

    /// (unlace) The basename of the FunctionSymbol installed at code-space VMA `vma`, or
    /// `None` if no function is mapped there. Resolves across scopes
    /// (`find_function_across_scopes`, the no-return/FID arm's resolver), so it sees a
    /// namespaced virtual-method function (e.g. `Box::vfunc_0` in scope `Box`).
    ///
    /// The verification hook for the MSVC-RTTI **vftable** e2e (R3): a vtable slot's
    /// target VA should now resolve to a named virtual method — the virtual dispatch
    /// `(**(code **)*p)()` points at this function instead of a bare `DAT_*`.
    pub fn function_named_at(&self, vma: u64) -> Option<String> {
        let code_space = Rc::clone(self.arch().manage().get_default_code_space()?);
        let addr = Address::new(code_space, vma);
        let db = &self.arch().symboltab;
        let (sid, _) = db.find_function_across_scopes(&addr)?;
        Some(db.symbol(sid).get_name().to_string())
    }

    /// (unlace `armframes`) Replay `record` at the analysis commit instead of
    /// searching for frames: a `--jobs` worker passes its parent's.
    pub fn replay_arm_frames(&mut self, record: unlace_analysis::aif::framereplay::ArmFrameReplay) {
        self.arm_frames = Some(record);
    }

    /// (unlace `armframes`) What the analysis commit's frame recovery decided.
    pub fn arm_frames(&self) -> Option<&unlace_analysis::aif::framereplay::ArmFrameReplay> {
        self.arm_frames.as_ref()
    }

    /// Replay a function inventory another process derived into this one, and
    /// install it through the loader-symbol seam ([`Self::read_loader_symbols`]).
    /// Returns how many entries were new here.
    ///
    /// The `--jobs` worker hand-off (`unlace-cli/src/jobs.rs`): a worker skips
    /// whole-binary function discovery, which is most of its load, but
    /// `FlowInfo::queryCall` reads discovery's PRODUCT, so without the inventory a
    /// call to an entry the worker never discovered renders as a raw constant
    /// instead of the callee's name.
    ///
    /// Strictly additive, which is the whole contract: an address this load
    /// already resolves is left alone, and so is a name it already carries. A
    /// name is installed into the scope its `::` path names, so a second symbol
    /// for one address in a different scope changes which one the across-scopes
    /// display lookup answers with — replacing anything here is how the seeding
    /// buries a name the worker had derived correctly. The taken-name set is
    /// built once rather than probed per entry, so seeding a 33,000-function
    /// inventory is linear.
    pub fn seed_function_inventory(
        &mut self,
        entries: &[(String, Address)],
    ) -> UnlaceResult<usize> {
        let _load = self.arch().load_scope();
        self.callwide_changed();
        self.anonymous_symbols.take();
        let taken: std::collections::HashSet<String> =
            self.symbols.iter().map(|s| s.name.clone()).collect();
        let mut seeded = 0usize;
        for (name, addr) in entries {
            let name = &*unlace_decomp::symbolnamebound::bound_scope_path(name, "::");
            if taken.contains(name) || self.anonymous_address(name).is_some() {
                continue;
            }
            if self
                .arch()
                .symboltab
                .find_function_across_scopes(addr)
                .is_some()
            {
                continue;
            }
            let object_location = self.object_location_at(addr.get_offset());
            self.symbols.push(ProgramSymbol {
                ordinal: 0,
                name: name.to_string(),
                addr: addr.clone(),
                provenance: if object_location.is_some() {
                    EntryProvenance::DefinedObject
                } else {
                    EntryProvenance::Mapped
                },
                object_location,
                binding: None,
            });
            seeded += 1;
        }
        if seeded > 0 {
            self.read_loader_symbols()?;
        }
        Ok(seeded)
    }

    /// Read the binaryimage's loader symbols into the symbol table as
    /// FunctionSymbols (C++ `Architecture::readLoaderSymbols`, `architecture.cc:347`,
    /// called by `testfunction.cc:160` / `consolemain.cc:104` after load).
    ///
    /// Each loader symbol (name → entry address, already in `self.symbols`) becomes
    /// a `FunctionSymbol` in its (namespace-resolved) scope, so a CALL to that
    /// entry address resolves to the callee's name at flow-analysis time
    /// (`FlowInfo::queryCall`).  Idempotent: a symbol whose function is already in
    /// the table is skipped (the C++ `addFunction` no-ops on an existing match via
    /// `queryFunction`).
    pub fn read_loader_symbols(&mut self) -> UnlaceResult<()> {
        let _load = self.arch().load_scope();
        self.callwide_changed();
        let type_code = self.arch().types().get_type_code()?;
        let min_size = self.arch().min_funcsymbol_size;
        let num_spaces = self.arch().manage().num_spaces();
        // Clone the (name, addr) pairs so the borrow of `self.arch_mut()` below
        // does not overlap `self.symbols`.
        let mut records: Vec<(String, Address)> = self
            .symbols
            .iter()
            .map(|s| (s.name.clone(), s.addr.clone()))
            .collect();
        // The first name of an address names its function, so put the one the
        // inventory reports first: an ELF lists its local symbols before its
        // global ones, and gcc's `f.localalias` would otherwise name `f`.
        records.sort_by_cached_key(|(name, addr)| {
            let vma = addr.get_offset();
            (
                vma,
                self.is_not_declared_name(vma, name),
                entry_name_rank(name),
            )
        });
        let aliases = self.function_address_aliases.clone();
        let arch = self.arch_mut();
        for (name, addr) in records {
            let (scope, basename) = arch
                .symboltab
                .find_create_scope_from_symbol_name(&name, "::", None, num_spaces)?;
            // C++ queryFunction: skip if a function already maps this address.
            if arch.symboltab.find_function(scope, &addr).is_some() {
                continue;
            }
            arch.symboltab
                .add_function(scope, &addr, &basename, min_size, type_code.clone())?;
        }
        let code = arch
            .manage()
            .get_default_code_space()
            .expect("loaded code space")
            .clone();
        for (alias, canonical) in aliases {
            arch.symboltab.add_function_alias(
                &Address::new(code.clone(), canonical),
                &Address::new(code.clone(), alias),
            )?;
        }
        Ok(())
    }

    /// (unlace `dexmodel`) Lock each method's declared prototype onto its symbol:
    /// `this` and the parameters in the input registers, the DEX types, the
    /// `__thiscall` model for an instance method.
    fn lock_dex_prototypes(&mut self) {
        let models = self.arch().dex_models().to_vec();
        let Some(space) = self.arch().manage().get_default_code_space().cloned() else {
            return;
        };
        for (model, function) in models
            .iter()
            .flat_map(|m| m.functions().into_iter().map(move |f| (m, f)))
        {
            let Ok((pieces, name)) = model.method_prototype(
                function.method_idx,
                function.is_static,
                false,
                self.arch().types(),
            ) else {
                continue;
            };
            let mut pieces = pieces;
            let proto_model = self.arch().get_model(name).cloned();
            let target = crate::assertions::ProtoTarget::At(
                Address::new(Rc::clone(&space), function.addr),
                function.name.clone(),
            );
            crate::assertions::park_prototype(self, &target, &mut pieces, proto_model.as_ref());
            self.set_pending_prototype(&function.name, pieces);
        }
        let classes = self.arch().jvm_models().to_vec();
        for (model, method) in classes
            .iter()
            .flat_map(|m| m.methods.iter().map(move |f| (m, f)))
        {
            let Ok(mut pieces) = model.method_prototype(method, self.arch().types()) else {
                continue;
            };
            let proto_model = self.arch().get_model("__stdcall").cloned();
            let target = crate::assertions::ProtoTarget::At(
                Address::new(Rc::clone(&space), method.addr),
                method.name.clone(),
            );
            crate::assertions::park_prototype(self, &target, &mut pieces, proto_model.as_ref());
            self.set_pending_prototype(&method.name, pieces);
        }
    }

    /// Register a console-created function symbol (the `map function` hook): make
    /// `name`->`addr` resolvable by `load function <name>`.  C++ `Scope::addFunction`
    /// installs the symbol in the symbol table; the unlace console additionally needs
    /// the name->address entry so the (binaryimage-symbol-backed) `load function`
    /// path can find a function the user mapped by hand.  Replaces any prior entry
    /// of the same name.
    ///
    /// Re-registering a name at the address it ALREADY holds keeps that entry's
    /// provenance: an import's synthetic address is an `UndefinedExternal`, and
    /// recomputing it as `Mapped` would make [`Self::resolve_entry`] answer "not
    /// mapped in this input" for an entry it used to select.
    pub fn register_symbol(&mut self, name: &str, addr: Address) {
        self.register_symbol_record(name, addr, true);
    }

    /// [`Self::register_symbol`] for one member of an overload set: a record of
    /// the same name at another address stays, as the loader's funcsym stream
    /// keeps it, since every C++ overload and template instance of one
    /// qualified name is a function of its own.
    pub fn register_overload(&mut self, name: &str, addr: Address) {
        self.register_symbol_record(name, addr, false);
    }

    fn register_symbol_record(&mut self, name: &str, addr: Address, sole: bool) {
        let _load = self.arch().load_scope();
        self.callwide_changed();
        self.anonymous_symbols.take();
        if let Some(prior) = self.anonymous_address(name) {
            if sole || prior == addr {
                let index = self
                    .anonymous_entries
                    .binary_search_by_key(&prior.get_offset(), |entry| entry.0)
                    .unwrap();
                self.anonymous_entries.remove(index);
            }
        }
        // (unlace `symbolnamebound`) Same bound as the loader stream above, so an
        // analysis-discovered or hand-mapped name agrees with the scope path the
        // symbol table nests it under.
        let name = &*unlace_decomp::symbolnamebound::bound_scope_path(name, "::");
        let prior = self.symbols.lookup_at(name, &addr).map(|s| s.provenance);
        if sole {
            self.symbols.remove_name(name);
        } else {
            self.symbols.remove_name_at(name, &addr);
        }
        let object_location = self.object_location_at(addr.get_offset());
        self.symbols.push(ProgramSymbol {
            ordinal: 0,
            name: name.to_string(),
            addr,
            provenance: prior.unwrap_or(if object_location.is_some() {
                EntryProvenance::DefinedObject
            } else {
                EntryProvenance::Mapped
            }),
            object_location,
            binding: None,
        });
    }

    /// Record a caller-declared byte extent for the function entered at `vma`
    /// (`declared_extents`); `size <= 0` clears it back to unbounded.
    pub fn declare_extent(&mut self, vma: u64, size: int4) {
        self.callwide_changed();
        self.declared_revision = next_revision();
        if size > 0 {
            self.declared_extents.insert(vma, size);
        } else {
            self.declared_extents.remove(&vma);
        }
    }

    /// The caller-declared byte extent of the function entered at `vma`, or
    /// [`UNBOUNDED_SIZE`] when none was declared — the value every load of that
    /// entry passes as the analysis-size bound.
    pub fn declared_extent(&self, vma: u64) -> int4 {
        self.declared_extents
            .get(&vma)
            .copied()
            .unwrap_or(UNBOUNDED_SIZE)
    }

    /// Is any function extent declared for this program?  Cheap enough to gate a
    /// per-entry lookup in the inventory bulk pass.
    pub fn has_declared_extents(&self) -> bool {
        !self.declared_extents.is_empty()
    }

    /// Did a caller assert a function at `vma` (`function bounds` /
    /// `--define-function`)?
    pub fn is_declared_entry(&self, vma: u64) -> bool {
        self.declared_entries.contains(&self.thumb_normalized(vma))
    }

    /// (unlace, issue #1438) Every declared entry's byte address and how much of
    /// its extent the input maps, in address order.
    pub fn declarations(
        &self,
    ) -> impl Iterator<Item = (u64, crate::declaredbytes::DeclaredBytes)> + '_ {
        self.declared_bytes
            .iter()
            .map(|(&vma, decl)| (vma, decl.bytes))
    }

    /// (unlace, issue #1438) One sentence per declared function whose extent is
    /// not wholly mapped, in address order.
    pub fn declaration_notes(&self) -> Vec<String> {
        self.declared_bytes
            .iter()
            .filter_map(|(&vma, decl)| crate::declaredbytes::note(self, vma, decl))
            .collect()
    }

    /// The sentence for the declaration at `vma` alone.
    pub(crate) fn declaration_note(&self, vma: u64) -> Option<String> {
        let vma = self.thumb_normalized(vma);
        crate::declaredbytes::note(self, vma, self.declared_bytes.get(&vma)?)
    }

    /// (unlace) Whether `name` is NOT the one the caller declared at `vma`.
    /// `false` sorts first, so a `--define-function <addr>=<name>` spelling is
    /// the reported name of that entry and every other registration at the same
    /// address becomes an alias.
    fn is_not_declared_name(&self, vma: u64, name: &str) -> bool {
        self.declared_names
            .get(&self.thumb_normalized(vma))
            .map(String::as_str)
            != Some(name)
    }

    // --- the `--assert` override plane (see `crate::assertions`) -------------

    /// Install the caller's assertions.  One outcome slot is reserved per
    /// directive so the report keeps the caller's own order however the
    /// directives are later dispatched.
    pub fn set_assertions(&mut self, directives: Vec<crate::assertions::Directive>) {
        if directives.iter().any(|directive| {
            matches!(
                directive.body,
                crate::assertions::Body::Flow { .. }
                    | crate::assertions::Body::Callee { .. }
                    | crate::assertions::Body::CallProto { .. }
                    | crate::assertions::Body::Param { func: None, .. }
                    | crate::assertions::Body::Return { func: None, .. }
            )
        }) {
            self.callwide_unavailable(
                "selected function flow or storage assertions lack a full image proof",
            );
        }
        self.assertion_outcomes = vec![None; directives.len()];
        self.assertions = directives;
    }

    /// The installed assertions, in the order they were given.
    pub fn assertions(&self) -> &[crate::assertions::Directive] {
        &self.assertions
    }

    /// Record what became of the `i`-th directive.
    pub fn set_assertion_outcome(&mut self, i: usize, outcome: crate::assertions::Outcome) {
        if let Some(slot) = self.assertion_outcomes.get_mut(i) {
            *slot = Some(outcome);
        }
    }

    /// The per-directive report, one row per installed assertion.
    pub fn assertion_outcomes(&self) -> Vec<crate::assertions::Outcome> {
        self.assertions
            .iter()
            .zip(self.assertion_outcomes.iter())
            .map(|(directive, outcome)| {
                outcome
                    .clone()
                    .unwrap_or_else(|| crate::assertions::unclaimed(directive))
            })
            .collect()
    }

    /// Park a prototype for `func` (an `assert prototype` directive).
    pub fn set_pending_prototype(
        &mut self,
        func: &str,
        pieces: unlace_decomp::fspec::PrototypePieces,
    ) {
        self.pending_prototypes.insert(func.to_string(), pieces);
    }

    /// The prototype parked for `func`, if any.
    pub fn pending_prototype(&self, func: &str) -> Option<&unlace_decomp::fspec::PrototypePieces> {
        self.pending_prototypes.get(func)
    }

    /// Mark the function at engine byte offset `offset` as never returning, so
    /// the decompiles of its callers end their flow at each call to it. `false`
    /// when no function symbol is there (declare it first).
    pub fn declare_no_return(&mut self, offset: u64) -> bool {
        let Some(space) = self.arch().manage().get_default_code_space().cloned() else {
            return false;
        };
        let addr = Address::new(space, self.thumb_normalized(offset));
        let sid = self
            .arch()
            .symboltab
            .find_function_across_scopes(&addr)
            .map(|(sid, _)| sid);
        match sid {
            Some(sid) => {
                self.arch_mut().symboltab.set_function_no_return(sid, true);
                true
            }
            None => false,
        }
    }

    /// Declare a function at `addr` — the in-process twin of the console
    /// `map function <addr> [name]` command (`IfcMapfunction`), plus the extent
    /// the console form cannot express on its own.
    ///
    /// Installs the `FunctionSymbol` (so a CALL here resolves to `name`),
    /// registers the name→address entry (so `load function <name>` and the
    /// whole-binary enumeration both see it), and records `size` as the entry's
    /// declared extent (`0` = unbounded).
    ///
    /// An address that already carries a function symbol is RENAMED rather than
    /// given a second one, but only when the caller named it: the symbol table
    /// keys a function by address, so adding a second symbol there would leave
    /// two names competing for one entry.  With no explicit name, an already-named
    /// address keeps its name and only the extent is recorded.
    ///
    /// The ARM/Thumb mode bit is folded out of `addr` first, so the declaration
    /// lands on the address every later resolution of it uses
    /// ([`Self::resolve_entry`] normalizes the same way) rather than on an odd
    /// shadow entry the loads would never find.
    pub fn declare_function(
        &mut self,
        addr: Address,
        name: Option<&str>,
        size: int4,
    ) -> UnlaceResult<String> {
        let _load = self.arch().load_scope();
        let addr = match addr.get_space() {
            Some(space) => Address::new(
                std::rc::Rc::clone(space),
                self.thumb_normalized(addr.get_offset()),
            ),
            None => addr,
        };
        let explicit = name.map(str::to_string).filter(|n| !n.is_empty());
        let name = match &explicit {
            Some(n) => n.clone(),
            None => self.arch().name_function(&addr),
        };
        let type_code = self.arch().types().get_type_code()?;
        let min_size = self.arch().min_funcsymbol_size;
        let num_spaces = self.arch().manage().num_spaces() as int4;
        let arch = self.arch_mut();
        let (scope, basename) = arch
            .symboltab
            .find_create_scope_from_symbol_name(&name, "::", None, num_spaces)?;
        let name = match arch.symboltab.find_function_across_scopes(&addr) {
            Some((sym, _)) => match &explicit {
                Some(_) => {
                    arch.symboltab.rename_symbol(sym, &basename)?;
                    install_named_call_fixup(arch, sym, &basename);
                    name
                }
                // Nothing asked for: keep the name the image or the analysis gave
                // this entry rather than overwriting it with `sub_<addr>`.
                None => arch.symboltab.symbol(sym).get_display_name().to_string(),
            },
            None => {
                let sym = arch
                    .symboltab
                    .add_function(scope, &addr, &basename, min_size, type_code)?;
                if explicit.is_some() {
                    install_named_call_fixup(arch, sym, &basename);
                }
                name
            }
        };
        let vma = addr.get_offset();
        self.register_symbol(&name, addr.clone());
        self.declare_extent(vma, size);
        self.declared_entries.insert(vma);
        let extent = u64::try_from(size).unwrap_or(0);
        let bytes = crate::declaredbytes::measure(self, vma, extent);
        self.declared_bytes.insert(
            vma,
            crate::declaredbytes::Declaration {
                name: name.clone(),
                size: extent,
                bytes,
            },
        );
        if explicit.is_some() {
            self.declared_names.insert(vma, name.clone());
            self.declared_revision = next_revision();
            self.seed_declared_libc_prototype(&name, &addr);
        }
        Ok(name)
    }

    /// (unlace `esprom`) Name the function at `addr`, which lies outside the
    /// input, for the calls that reach it: a `FunctionSymbol` with the call
    /// fixup and the libc prototype its name selects, and no inventory entry.
    /// An address that already has a function keeps it.
    pub(crate) fn name_external_function(
        &mut self,
        addr: &Address,
        name: &str,
    ) -> UnlaceResult<()> {
        let type_code = self.arch().types().get_type_code()?;
        let min_size = self.arch().min_funcsymbol_size;
        let num_spaces = self.arch().manage().num_spaces() as int4;
        let arch = self.arch_mut();
        if arch.symboltab.find_function_across_scopes(addr).is_some() {
            return Ok(());
        }
        let (scope, basename) = arch
            .symboltab
            .find_create_scope_from_symbol_name(name, "::", None, num_spaces)?;
        let sym = arch
            .symboltab
            .add_function(scope, addr, &basename, min_size, type_code)?;
        install_named_call_fixup(arch, sym, &basename);
        self.seed_declared_libc_prototype(name, addr);
        Ok(())
    }

    /// Ensure a `FunctionSymbol` exists at `addr` without asserting that the
    /// address has a body. Used by an addressed CLI run that needs a symbol for
    /// prototype directives before selection.
    pub fn ensure_function_symbol(&mut self, addr: Address) -> UnlaceResult<String> {
        let _load = self.arch().load_scope();
        let addr = match addr.get_space() {
            Some(space) => Address::new(
                std::rc::Rc::clone(space),
                self.thumb_normalized(addr.get_offset()),
            ),
            None => addr,
        };
        let name = match self.arch().symboltab.find_function_across_scopes(&addr) {
            Some((sym, _)) => self
                .arch()
                .symboltab
                .symbol(sym)
                .get_display_name()
                .to_string(),
            None => {
                let name = self.arch().name_function(&addr);
                let type_code = self.arch().types().get_type_code()?;
                let min_size = self.arch().min_funcsymbol_size;
                let num_spaces = self.arch().manage().num_spaces() as int4;
                let arch = self.arch_mut();
                let (scope, basename) = arch
                    .symboltab
                    .find_create_scope_from_symbol_name(&name, "::", None, num_spaces)?;
                arch.symboltab
                    .add_function(scope, &addr, &basename, min_size, type_code)?;
                name
            }
        };
        self.register_symbol(&name, addr);
        Ok(name)
    }

    /// (unlace) After a FID / FLIRT rename, park the libc prototype the
    /// name (or one of its `nameladder` spellings) has, and mark the function
    /// no-return when the no-return list names it.
    fn apply_renamed_library_facts(
        &mut self,
        sid: unlace_decomp::database::SymbolId,
        name: &str,
        addr: &Address,
    ) {
        let spellings: Vec<String> = std::iter::once(name.to_string())
            .chain(unlace_analysis::protos::nameladder::fallbacks(name))
            .collect();
        if let Some(found) = spellings
            .iter()
            .find(|n| self.has_declared_libc_prototype(n))
        {
            self.seed_declared_libc_prototype(found, addr);
        }
        if unlace_analysis::loader::noreturn::listed_noreturn(name) {
            self.arch_mut().symboltab.set_function_no_return(sid, true);
        }
    }

    fn has_declared_libc_prototype(&self, name: &str) -> bool {
        let (_addr_size, word_size) = self.arch().data_org();
        unlace_analysis::protos::declared_libc_prototype(
            name,
            self.arch().types(),
            word_size,
            unlace_decomp::libctypes::LibcTypesLayout::Opaque,
        )
        .is_some()
    }

    /// (unlace `declaredlibcproto`) Park the built-in libc signature for `name` on the
    /// FunctionSymbol at `addr`, when the tables know the name.
    ///
    /// The load-time prototype passes match names the image carries, so a stripped
    /// target that only has the name because the operator declared it gets nothing
    /// from them and its call sites keep rendering `f()`. The park is ADDRESS-keyed:
    /// `ActionDefaultParams` reads a callee prototype by entry address, and the
    /// by-name query answers out of the global scope, which is the wrong symbol
    /// whenever two share a spelling (an import thunk and its IAT slot).
    ///
    /// A silent no-op when neither table knows the name, or when the declaration
    /// named an entry that already carries a locked prototype from a stronger
    /// source.
    fn seed_declared_libc_prototype(&mut self, name: &str, addr: &Address) {
        let (_addr_size, word_size) = self.arch().data_org();
        // The layout is the load-time pass's decision, not a fresh one: only an
        // image whose own target gate passed may be handed the glibc field
        // layouts (see `Self::libctypes_glibc`).
        let layout = if self.libctypes_refused {
            unlace_decomp::libctypes::LibcTypesLayout::Off
        } else if self.libctypes_glibc {
            unlace_decomp::libctypes::LibcTypesLayout::Glibc
        } else if self.libctypes_streams {
            unlace_decomp::libctypes::LibcTypesLayout::Streams
        } else {
            unlace_decomp::libctypes::LibcTypesLayout::Opaque
        };
        let pieces = {
            let types = self.arch().types();
            unlace_analysis::protos::declared_libc_prototype(name, types, word_size, layout)
        };
        let whole = unlace_decomp::typedcallabi::returns_doubles_whole(self.arch());
        let (pieces, withheld) = match pieces {
            Some(p) if !whole && unlace_decomp::typedcallabi::declares_a_float(&p) => (None, true),
            other => (other, false),
        };
        if withheld {
            self.arch_mut()
                .unlace_tables
                .get_mut::<unlace_decomp::honestgaps::WithheldPrototypes>()
                .record(
                    Some(addr.get_offset()),
                    name,
                    unlace_decomp::honestgaps::WithheldCause::FloatConvention,
                );
        }
        if let Some(pieces) = pieces {
            self.arch_mut()
                .set_function_prototype_pieces_at(addr, pieces);
        }
    }

    /// (unlace) Build the `map addr`-shaped stack-symbol specs for the DWARF stack
    /// LOCALS parked on the function whose entry VMA is `func_addr` (DWARF subtask 3).
    ///
    /// Returns `(name, type, stack_Address, flags)` tuples in the exact shape
    /// `Funcdata::seed_mapped_symbols` consumes — `IfcDecompile` appends them to the
    /// `mapped_symbols` it threads into the decompile drive, so each parked DWARF
    /// local is re-seeded into the rebuilt `Funcdata`'s `ScopeLocal` as a
    /// `typelock|namelock` stack symbol (the typelock keeps the DWARF type through
    /// propagation; the namelock keeps the DWARF name). The stack `Address` is built
    /// here against the live stack space (`getStackSpace`), wrapping the signed
    /// `stack_offset` to the space's unsigned offset (the same convention as the
    /// console `map addr s<off>` directive — e.g. copytrim.xml's
    /// `map addr s0xffffffffffffffe4`). Empty when the function has no parked locals
    /// or the architecture has no stack space.
    /// Intersecting locals share one backing symbol; they never become
    /// independent C objects merely because debug information names both views.
    pub fn dwarf_locals_for(
        &self,
        func_addr: u64,
    ) -> Vec<(
        String,
        Rc<unlace_decomp::dtype::Datatype>,
        Address,
        unlace_base::types::uint4,
    )> {
        use unlace_decomp::varnode::varnode_flags;
        let Some(stack) = self.arch().manage().get_stack_space() else {
            return Vec::new();
        };
        let flags = varnode_flags::typelock | varnode_flags::namelock;
        let locals = self
            .dwarf_locals
            .iter()
            .filter(|(addr, _, _, _)| *addr == func_addr)
            .map(|(_, name, ty, off)| (name.clone(), Rc::clone(ty), *off))
            .collect();
        crate::dwarfstack::coalesce(
            self.arch().types(),
            func_addr,
            locals,
            stack.wrap_offset(u64::MAX),
        )
        .into_iter()
        .map(|(name, ty, off)| {
            // Wrap the signed stack offset to the stack space's unsigned address
            // (negative locals live at the high end of the unsigned range, the
            // `map addr s0xffff...` convention).
            let waddr = stack.wrap_offset(off as u64);
            (name, ty, Address::new(Rc::clone(stack), waddr), flags)
        })
        .collect()
    }

    /// Add a successfully applied byte overlay to the deferred walk, clipped
    /// to executable mappings. Unwritten virtual tails remain outside its ranges.
    pub(crate) fn note_materialized_bytes(&mut self, addr: &Address, size: usize) {
        self.rust_profile_image_modified = true;
        self.callwide_unavailable("effective byte overlays require a new complete image proof");
        if self.pending_entry_thumb.is_none()
            || !self
                .analysis_code_space
                .as_ref()
                .zip(addr.get_space())
                .is_some_and(|(code, space)| Rc::ptr_eq(code, space))
        {
            return;
        }
        let start = addr.get_offset();
        let Some(end) = start.checked_add(size as u64) else {
            return;
        };
        let spans: Vec<_> = self
            .sections()
            .into_iter()
            .filter_map(|(base, size, flags)| {
                if flags & section_flags::CODE == 0 {
                    return None;
                }
                let first = start.max(base);
                let last = end.min(base.checked_add(size)?);
                (first < last).then(|| (first, last - first))
            })
            .collect();
        if let Some(pending) = self.pending_entry_thumb.as_mut() {
            pending.executable_ranges.extend(spans);
        }
    }

    /// Flag each installed function a no-return fact names.
    fn mark_no_return(&mut self, facts: &[unlace_analysis::pass::NoReturnFact]) {
        let Some(code_space) = self.analysis_code_space.clone() else {
            return;
        };
        for fact in facts {
            let addr = Address::new(Rc::clone(&code_space), fact.addr);
            let sid = self
                .arch()
                .symboltab
                .find_function_across_scopes(&addr)
                .map(|(sid, _)| sid);
            if let Some(sid) = sid {
                self.arch_mut().symboltab.set_function_no_return(sid, true);
            }
        }
    }

    /// (unlace `rawdiscover`) Extend [`Self::pending_synthetic_entries`] with every
    /// function the headerless-image discovery finds: the targets of every direct
    /// call in the executable bytes, plus the direct-call closure of those and
    /// the seeds.
    ///
    /// Seeds and executable bounds both come from the raw loader: the caller's
    /// `--entry` addresses, and the synthetic `CODE` section it publishes for
    /// the whole file. A seed is never dropped, so the inventory can only grow;
    /// an image whose bytes hold no direct call returns unchanged.
    ///
    /// (unlace #1288) The DOS exits of a real-mode image are parked for the flow,
    /// and the functions they make no-return are returned for the caller to
    /// mark once the entries are installed.
    fn discover_raw_entries(&mut self) -> Vec<unlace_analysis::pass::NoReturnFact> {
        let Some(code_space) = self.analysis_code_space.clone() else {
            return Vec::new();
        };
        let exec: Vec<(u64, u64)> = self
            .sections()
            .into_iter()
            .filter(|(_, _, flags)| flags & section_flags::CODE != 0)
            .map(|(addr, size, _)| (addr, addr.saturating_add(size)))
            .collect();
        let mut seeds: Vec<u64> = self
            .pending_synthetic_entries
            .iter()
            .map(|addr| addr.get_offset())
            .collect();
        // (unlace `funcstart_patterns`) The prologue patterns of the target's
        // language, swept over the same executable bytes, seed the walk too.
        if self
            .arch()
            .unlace_options
            .get::<unlace_decomp::analysisgates::FuncstartPatterns>()
            .0
        {
            if let Some(set) =
                unlace_analysis::entry::patterns::for_language(self.arch().get_description())
            {
                for &(lo, hi) in &exec {
                    let Ok(size) = usize::try_from(hi - lo) else {
                        continue;
                    };
                    if let Some(bytes) = self.read_bytes(lo, size) {
                        let weak_ok = set.only_weak();
                        seeds.extend(
                            set.scan_hits(lo, &bytes)
                                .into_iter()
                                .filter(|h| weak_ok || !h.weak)
                                .map(|h| h.vma),
                        );
                    }
                }
                seeds.sort_unstable();
                seeds.dedup();
            }
        }
        let mut known: BTreeSet<u64> = self
            .pending_synthetic_entries
            .iter()
            .map(|addr| addr.get_offset())
            .collect();
        let found = {
            let arch = self.arch();
            let mz = self.mz_evidence.as_ref();
            unlace_analysis::listing::rawdiscover::discover(
                arch,
                arch.translate(),
                &code_space,
                &exec,
                &seeds,
                mz,
            )
        };
        for vma in found.entries.iter().copied().chain(seeds) {
            if known.insert(vma) {
                self.pending_synthetic_entries
                    .push(Address::new(Rc::clone(&code_space), vma));
            }
        }
        self.flow_ends = found.flow_ends;
        self.arch_mut().dos_exit_sites = found.dos_exits.sites;
        found.dos_exits.noreturn
    }

    /// (unlace `objectview`) Run the object-file pass list over the PE / ELF view a
    /// TE or raw bootstrap stashed in [`Self::analysis_image`], so its facts join
    /// the gated commit like an object image's. With the gate off the view is
    /// dropped, and the deferred Listing tier below declines as before.
    fn set_object_view(&mut self, path: &str, view: Option<Vec<u8>>) {
        self.object_view = view.as_deref().map(Rc::from);
        self.analysis_image = view.map(|view| (path.to_string(), view.into(), None));
    }

    /// (unlace `objectview`) The PE view of a TE image or the ELF view of a
    /// byte-addressed raw one; `None` for an object image, which is its own.
    pub fn object_view(&self) -> Option<&[u8]> {
        self.object_view.as_deref()
    }

    fn run_object_view_passes(&mut self) {
        if !matches!(self.container, ProgramContainer::Raw | ProgramContainer::Te) {
            return;
        }
        if !self
            .arch()
            .unlace_options
            .get::<unlace_decomp::analysisgates::Objectview>()
            .0
        {
            self.analysis_image = None;
            return;
        }
        let Some((path, bytes, _)) = self.analysis_image.as_ref() else {
            return;
        };
        let target = self.arch.arch_id().to_string();
        let Ok(image) = ObjectLoadImage::from_bytes_silent_with_target(path, bytes, &target) else {
            return;
        };
        let arch = self.arch();
        let split = unlace_analysis::passes::run_default_analyses_per_pass(
            bytes,
            &image,
            arch,
            arch.translate(),
        );
        self.pending_analysis.extend(split);
    }

    /// (unlace) Commit the stashed per-pass analysis facts, gated by the per-pass
    /// `--option <id> on|off` enable flags — the deferred half of the analysis
    /// boundary (conflict #4). Called from `IfcReadSymbols` (`read symbols`), which
    /// runs AFTER the CLI's `option` lines, so a disabled pass's facts are
    /// dropped here rather than committed.
    ///
    /// Raw-image and TE entries are named and installed here for the same
    /// ordering reason: their synthetic names must honor the active `namestyle`
    /// option.
    ///
    /// Drains the stash (so a second `read symbols` does not re-commit), merges
    /// only the **enabled** passes' outputs in pass order, and commits the merged
    /// [`AnalysisOutput`] via [`commit_analysis_output`]. A no-op when nothing is
    /// stashed (the XML datatest path — parity is structurally untouched).
    ///
    /// (unlace, PR6) This is also the **deferred Listing build** point: the Listing
    /// is gated on `--option listing on`, a flag the CLI sets after `load file`,
    /// so the Listing — and any pass that reads it (e.g. discovered-no-return) —
    /// is built/run HERE (when the flag is finally in effect), not at load. When
    /// `arch.unlace_options.get::<unlace_decomp::analysisgates::Listing>().0` is on, the stashed image bytes are re-parsed, the
    /// Listing is built, and the enabled Listing-consumer passes run; their
    /// defensively re-gated facts merge into the same `merged` output committed
    /// below. Fast inventory or an explicit Rust profile request can also need
    /// this Listing while the ordinary Listing-consumer gates remain off.
    pub fn commit_pending_analysis(&mut self) -> UnlaceResult<()> {
        let _load = self.arch().load_scope();
        crate::esprom::apply(self)?;
        let rust_profile_request = self.rust_profile_request.take();
        let apply_rust_names = std::mem::take(&mut self.rust_profile_apply);
        if apply_rust_names && (self.rust_profile_image_modified || self.analysis_image.is_none()) {
            return Err(UnlaceError::lowlevel(
                "Rust signature application requires an unmodified object image before its analysis commit",
            ));
        }
        self.run_object_view_passes();
        // (unlace `entrythumbflow`) The entry-reachable Thumb walk, taken out of
        // the pending slot BEFORE it runs so a failure cannot leave it armed for
        // the next commit. Its paints join the gated stash under their own id.
        if let Some(pending) = self.pending_entry_thumb.take() {
            let code_space = self.analysis_code_space.clone().ok_or_else(|| {
                UnlaceError::lowlevel("no code space for the deferred entry context walk")
            })?;
            // Only enabled load-time passes can supply no-return facts
            // to this walk, just as at the later Listing and fact commit.
            let noreturn: Vec<u64> = self
                .pending_analysis
                .iter()
                .filter(|(id, _)| analysis_pass_enabled(self.arch(), id))
                .flat_map(|(_, out)| out.noreturn.iter().map(|fact| fact.addr))
                .collect();
            let flow = unlace_analysis::listing::entrythumbflow::entry_thumb_flow(
                self.arch(),
                &code_space,
                &pending.executable_ranges,
                pending.entry,
                &noreturn,
            )?;
            if flow.truncated {
                let path = self.image_path();
                unlace_base::notes::say_once(
                    &path,
                    &format!(
                        "[unlace entrythumbflow] {path}: the Thumb context walk from the entry stopped at {} instructions; code it did not reach decodes as A32 (use --isa thumb for a wholly Thumb image)",
                        unlace_analysis::listing::entrythumbflow::MAX_INSTRUCTIONS
                    ),
                );
            }
            if !flow.paints.is_empty() {
                // Written to the database NOW, not only stashed: the deferred
                // Listing consumers below decode the same bytes before the
                // stash is committed, and on a PE they would read Thumb code
                // as A32. The stash still carries the facts so the commit's
                // record and replay are complete.
                for paint in &flow.paints {
                    let begin = Address::new(Rc::clone(&code_space), paint.addr);
                    let end = paint
                        .end
                        .map(|end| Address::new(Rc::clone(&code_space), end));
                    self.arch().with_context_db_mut(|db| match end {
                        Some(end) => {
                            db.set_variable_region(paint.var.as_bytes(), &begin, &end, paint.value)
                        }
                        None => db.set_variable(paint.var.as_bytes(), &begin, paint.value),
                    })?;
                }
                let mut output = unlace_analysis::pass::AnalysisOutput::default();
                output.context_paints = flow.paints;
                self.pending_analysis.push(("entrythumbflow", output));
            }
        }
        if std::mem::take(&mut self.pending_dex_prototypes) {
            self.lock_dex_prototypes();
        }
        if !self.pending_synthetic_entries.is_empty() || self.container == ProgramContainer::Raw {
            // (unlace `rawdiscover`) A headerless or TE image reaches this point
            // holding only the `--entry` addresses or the container entry,
            // because the object-file discovery tier below declines without an
            // `object::File`. Discover the rest first, after the entry Thumb walk
            // has painted the decode mode, so the entries it finds are named and
            // installed by the same loop.
            let dos_noreturn =
                if matches!(self.container, ProgramContainer::Raw | ProgramContainer::Te) {
                    self.discover_raw_entries()
                } else {
                    Vec::new()
                };
            let entries = std::mem::take(&mut self.pending_synthetic_entries);
            let mut names = std::mem::take(&mut self.loader_entry_names);
            let symbols = entries
                .into_iter()
                .map(|addr| ProgramSymbol {
                    ordinal: 0,
                    name: names
                        .remove(&addr.get_offset())
                        .unwrap_or_else(|| self.arch().name_function(&addr)),
                    addr,
                    object_location: None,
                    binding: None,
                    provenance: EntryProvenance::Mapped,
                })
                .collect::<Vec<_>>();
            for symbol in symbols {
                self.symbols.push(symbol);
            }
            self.read_loader_symbols()?;
            self.mark_no_return(&dos_noreturn);
        }
        if self.pending_analysis.is_empty()
            && self.loader_data_objects.is_empty()
            && rust_profile_request.is_none()
        {
            // Drop the deferred-Listing stash too: nothing to commit against, and
            // a session with no analysis tier (XML path) must not build a Listing.
            self.analysis_image = None;
            return Ok(());
        }
        let pending = std::mem::take(&mut self.pending_analysis);
        let Some(code_space) = self.analysis_code_space.take() else {
            // No code space captured (should not happen on the ELF path); nothing
            // to commit against.
            self.analysis_image = None;
            return Ok(());
        };
        // The addresses the load-time Known passes flagged no-return / call-fixup'd
        // (read off the pending split before it is consumed) — seed metadata the
        // deferred Listing build hands to the discovered-no-return consumer so it
        // skips already-modeled callees and seeds the fixpoint's terminal set.
        let mut noreturn_seed_addrs: Vec<u64> = pending
            .iter()
            .filter(|(id, _)| analysis_pass_enabled(self.arch(), id))
            .flat_map(|(_, out)| out.noreturn.iter().map(|f| f.addr))
            .collect();
        if self
            .arch()
            .unlace_options
            .get::<unlace_decomp::analysisgates::Listing>()
            .0
        {
            noreturn_seed_addrs.extend(self.function_entries().filter_map(|(_, addr)| {
                self.arch()
                    .symboltab
                    .function_is_no_return_across_scopes(addr)
                    .then_some(addr.get_offset())
            }));
        }
        // Filter by the per-pass enable flags (default-on, set by the user's
        // `--option <id> on|off`), then merge the survivors in pass order.
        let mut merged = unlace_analysis::pass::AnalysisOutput::default();
        let mut zero_size_data_names = Vec::new();
        let mut input_context_paints = Vec::new();
        for (id, out) in pending {
            if id == "input_isa" {
                input_context_paints.extend(out.context_paints);
                continue;
            }
            if analysis_pass_enabled(self.arch(), id) {
                trace_entry_sources(id, &out);
                merged.merge(out);
            }
        }
        // (unlace, PR6 + operand_refs) Deferred decode-driven passes, run at the
        // commit point because they decode through the engine `Translate` whose
        // program loadimage is only attached AFTER the load-time pass list
        // (`set_loader` in `bootstrap_from_object`). Each is gated on its own
        // `--option` flag (now in effect). Default-off (both) ⇒ skipped ⇒ zero cost.
        // Real-object path only (the XML path stashes no image). The stash is consumed
        // once and shared by both deferred passes.
        let want_listing = self
            .arch()
            .unlace_options
            .get::<unlace_decomp::analysisgates::Listing>()
            .0;
        let want_fast_funcdisc = self
            .arch()
            .unlace_options
            .get::<unlace_decomp::analysisgates::FastFuncdisc>()
            .0;
        let want_operand_refs = self
            .arch()
            .unlace_options
            .get::<unlace_decomp::analysisgates::OperandRefs>()
            .0;
        let want_wide32_alone = self
            .arch()
            .unlace_options
            .get::<unlace_decomp::analysisgates::Widestrings32>()
            .0
            && !want_operand_refs;
        // (unlace) The full byte-pattern entry sweep is deferred here too — not
        // because it decodes, but because its gate is only known now. Registered at
        // load it swept the whole image on every binary and was discarded whenever
        // the gate was off (the default). See `passes::run_deferred_entry_passes`.
        let want_addrtable = self
            .arch()
            .unlace_options
            .get::<unlace_decomp::analysisgates::Addrtable>()
            .0;
        if self.analysis_image.is_some() {
            if let Some((path, bytes, import_proofs)) = self.analysis_image.take() {
                let profile_request = if rust_profile_request.is_some() {
                    match RustProfileReport::reject_unsupported(&bytes) {
                        Some(report) => {
                            if apply_rust_names {
                                return Err(UnlaceError::lowlevel(
                                    "unsupported image: Rust signature application requires a linked little-endian x86-64 ELF image",
                                ));
                            }
                            self.rust_profile_report = Some(report);
                            None
                        }
                        None => rust_profile_request.as_ref(),
                    }
                } else {
                    None
                };
                let _import_proofs =
                    unlace_analysis::loader::ImportProofScope::resume(&bytes, import_proofs);
                let image_path = std::path::Path::new(&path);
                let image_path = image_path.exists().then_some(image_path);
                // Deferred entry-discovery passes FIRST: their entries must be
                // in `merged` before `committed_entry_seeds` is read below, which
                // is what hands the load-time inventory to the Listing walk as
                // extra roots (`armdiscseed`).
                {
                    let arch = self.arch();
                    let entry_out =
                        unlace_analysis::passes::run_deferred_entry_passes_without_image(
                            &bytes,
                            arch,
                            image_path,
                            &|id| analysis_pass_enabled(arch, id),
                        );
                    for (_, out) in entry_out {
                        merged.merge(out);
                    }
                }
                // (unlace, `ehcold`/`functails`) The Listing walk seeds from the raw oracles,
                // so it must know which cold parts are withheld before it runs.
                let mut withheld_cold = merged.eh_cold.clone();
                withheld_cold.sort_unstable();
                self.arch_mut().unlace_withheld_cold = withheld_cold;
                // (unlace `uefi`) UEFI module markup decodes the module, so it
                // runs here; it declines everything but an EFI-subsystem PE.
                if analysis_pass_enabled(self.arch(), "uefi") {
                    merged.merge(unlace_analysis::passes::run_uefi(
                        &bytes,
                        self.arch(),
                        image_path,
                        self.arch()
                            .unlace_options
                            .get::<unlace_decomp::analysisgates::Uefientry>()
                            .0,
                    ));
                }
                // (unlace `vtabletypes`) MSVC constructors and destructors are
                // walked through the decoder, so they are found here too.
                if analysis_pass_enabled(self.arch(), "vtabletypes") {
                    merged.merge(unlace_analysis::passes::run_msvc_ctors(
                        &bytes,
                        self.arch(),
                        image_path,
                    ));
                }
                // (unlace `com`) COM ids and interfaces; off by default, and
                // it builds types, so it runs only when asked for.
                if analysis_pass_enabled(self.arch(), "com") {
                    merged.merge(unlace_analysis::passes::run_com(&bytes, self.arch()));
                }
                // (unlace `dextrpc`) DriverKit IORPC types; off by default, and
                // it builds types, so it runs only when asked for.
                if analysis_pass_enabled(self.arch(), "dextrpc") {
                    merged.merge(unlace_analysis::passes::run_dextrpc(&bytes, self.arch()));
                }
                // (unlace `gopcln`) Go source-position comments; off by default,
                // and its passes read the option, so they run only here.
                if analysis_pass_enabled(self.arch(), "gopcln") {
                    merged.merge(unlace_analysis::passes::run_gopcln(
                        &path,
                        &bytes,
                        self.arch(),
                    ));
                }
                // Deferred Listing build + consumer/fast-inventory run, gated
                // on the matching option. The call-fixup seed list is the names
                // the load-time pass flagged resolved to addresses via the
                // (already installed) symbol table.
                if want_listing || want_fast_funcdisc || profile_request.is_some() {
                    let mut committed_entry_seeds = merged.entries.clone();
                    // (unlace) On x86 a function a pass names (an MSVC vtable slot
                    // from RTTI, a constructor) is listed, so it is a walk root as
                    // well, and its direct callees are found. ARM symbols are left
                    // out: their decode mode is not settled here.
                    if self.arch().archid.starts_with("x86:") {
                        committed_entry_seeds.extend(
                            merged
                                .symbols
                                .iter()
                                .filter(|s| {
                                    matches!(s.kind, unlace_analysis::pass::SymKind::Function)
                                })
                                .map(|s| s.addr),
                        );
                    }
                    committed_entry_seeds.sort_unstable();
                    committed_entry_seeds.dedup();
                    let arch = self.arch();
                    // The call-fixup seed list is empty: a fixup'd callee is also
                    // skipped via the consumer's no-return-disc `function_at(..)`
                    // checks, and there is no fixup-address index here. The
                    // no-return seeds (above) are the load-bearing skip set.
                    //
                    // (unlace `armdiscseed`) The entries the load-time oracles have
                    // already agreed on are handed over as extra walk roots. They
                    // are read off `merged` rather than recomputed, so a pass whose
                    // gate rejected it above never seeds the walk either.
                    // The walk's thread plan (`unlace --jobs N`): built HERE,
                    // once, because this is where the engine is and because
                    // the Listing is rebuilt several times below. The image
                    // share it takes is released with the plan, before any
                    // later writer of the loader's bytes.
                    let plan = unlace_analysis::listing::WalkPlan::from_env(arch);
                    let mut rust_report = None;
                    let mut observe_rust =
                        |file: &object::File<'_>, listing: &unlace_analysis::listing::Listing| {
                            if let Some(request) = profile_request {
                                rust_report = Some(request.evaluate(file, listing));
                            }
                        };
                    let observer = profile_request.map(|_| {
                        &mut observe_rust
                            as &mut dyn FnMut(&object::File<'_>, &unlace_analysis::listing::Listing)
                    });
                    let consumer_out =
                        unlace_analysis::passes::run_listing_consumers_replaying_observed(
                            &bytes,
                            arch,
                            arch.translate(),
                            &noreturn_seed_addrs,
                            &[],
                            &committed_entry_seeds,
                            &merged.fde_interior_entries,
                            &plan,
                            self.arm_frames.as_ref(),
                            observer,
                        );
                    if profile_request.is_some() {
                        let report = rust_report
                            .unwrap_or_else(|| RustProfileReport::unavailable_for(&bytes));
                        if apply_rust_names {
                            let profile = report.report.as_ref().ok_or_else(|| {
                                UnlaceError::lowlevel(
                                    report
                                        .error
                                        .as_deref()
                                        .unwrap_or("Rust signature profile is unavailable"),
                                )
                            })?;
                            let mut names = unlace_analysis::pass::AnalysisOutput::default();
                            names.fid_names =
                                profile.agreed_names().map_err(UnlaceError::lowlevel)?;
                            names.sanitize_names(
                                unlace_decomp::symbolnamechars::symbolnamechars_mode(),
                            );
                            merged.merge(names);
                        }
                        self.rust_profile_report = Some(report);
                    }
                    for (id, mut out) in consumer_out {
                        if let Some(record) = out.arm_frames.take() {
                            self.arm_frames = Some(record);
                        }
                        if analysis_pass_enabled(self.arch(), id) {
                            trace_entry_sources(id, &out);
                            merged.merge(out);
                        }
                    }
                }
                // Deferred scalar/operand reference-markup pass, gated on the
                // operand_refs flag (the unlace analog of Ghidra's
                // ScalarOperandAnalyzer). Independent of the Listing tier — it
                // does its own linear decode (the Listing never populates the
                // data references it needs). Its facts go through the existing
                // string/readonly commit arms.
                if want_operand_refs {
                    let out = unlace_analysis::passes::run_operand_refs(&bytes, self.arch());
                    merged.merge(out);
                } else if want_wide32_alone {
                    merged.merge(unlace_analysis::passes::run_wide_strings32(
                        &bytes,
                        self.arch(),
                    ));
                }
                if want_addrtable {
                    merged.merge(unlace_analysis::passes::run_addrtable(
                        &bytes,
                        self.arch(),
                        image_path,
                    ));
                }
                if merged.fid_names.iter().any(|m| m.by_signature) {
                    zero_size_data_names =
                        unlace_analysis::flirt::elf_data_names::zero_size_data_names(&bytes);
                }
            }
        } else {
            // Both deferred passes off: drop the stash (no deferred build).
            self.analysis_image = None;
        }
        // (unlace, `fdeinterior` / `pdatainterior`) Reject every discovered entry
        // that falls strictly inside a single-function body the image itself
        // describes — an `.eh_frame` FDE on ELF, a `.pdata` `RUNTIME_FUNCTION` on
        // PE. Applied HERE, on the fully merged set, so it covers the deferred
        // Listing consumers (`aif`'s gap starts) as well as the load-time oracles
        // (`eh_frame_full`'s landing pads, the prologue patterns). `fde_bodies` is
        // empty unless a gate let one of those passes through above, so `off` is a
        // byte-identical no-op; a Go `pclntab` pass fills the same channel (its
        // `functab` is the linker's own extent for every function), so the merged
        // list is normalized here before the lookup, which expects sorted disjoint
        // ranges.
        let mut fde_bodies = std::mem::take(&mut merged.fde_bodies);
        fde_bodies.sort_unstable();
        // (unlace, `functails`) A tail that starts exactly where its owner's FDE ends is
        // the owner's fall-through: the owner's bound runs over it, so flow may fall into it.
        let owned_tails = std::mem::take(&mut merged.owned_tails);
        // A PE function's `.pdata` record can be one chunk of a chained function,
        // so only the other images' extents bound flow.
        if !self.arch().get_description().contains("windows") {
            let mut extents = fde_bodies.clone();
            for &(owner, tail) in &owned_tails {
                if let Some(extent) = extents
                    .iter_mut()
                    .find(|e| e.0 == owner.0 && e.1 == owner.1)
                {
                    extent.1 = extent.1.max(tail.1);
                }
            }
            self.arch_mut().unlace_fde_extents = Rc::new(extents);
        }
        unlace_analysis::entry::fdeinterior::suppress_interior_entries(
            &mut merged.entries,
            &fde_bodies,
        );
        self.arch_mut().unlace_function_bodies = fde_bodies;
        // (unlace, `coldentry`) The FDE-interior entries a multi-entry `.cold`
        // fragment is jumped into at, added past the suppression above.
        let cold_entries = std::mem::take(&mut merged.fde_interior_entries);
        merged.entries.extend(cold_entries);
        // (unlace, `ehcold`) An exception-cleanup cold part is its owner's, not a
        // function: drop every entry inside one, its start included.
        let mut eh_cold = std::mem::take(&mut merged.eh_cold);
        eh_cold.sort_unstable();
        unlace_analysis::entry::ehcold::suppress_eh_cold_entries(&mut merged.entries, &eh_cold);
        // (unlace, `pdbinterior`) The same rejection inside PDB procedures, on its own
        // terms: see `suppress_pdb_interior_entries`.
        suppress_pdb_interior_entries(self.arch(), &code_space, &mut merged);
        merged.context_paints.extend(input_context_paints);
        self.fid_databases = std::mem::take(&mut merged.fid_databases);
        // (unlace `typelib`) Last, so every other source of a prototype has
        // spoken: the library declares only the imports, and the functions
        // FLIRT, FID or a PDB named, that nothing else did.
        if let Some(facts) = merged.typelib.take() {
            let said = match crate::typelib::seed(self.arch(), &facts, &mut merged) {
                Ok((_, note)) => note,
                Err(message) => Some(message),
            };
            if let Some(message) = said {
                let path = self.image_path();
                unlace_base::notes::say_once(&path, &format!("[unlace typelib] {message}"));
            }
        }
        let committed = commit_analysis_output(self, &code_space, merged, zero_size_data_names);
        self.stash_float_scan();
        committed
    }

    /// (unlace `floatglobals`) Hand the engine what the whole-program float-global
    /// scan reads -- the image's sections and every function entry -- so the
    /// first function that asks can take it (`decompile_step`).
    fn stash_float_scan(&mut self) {
        let mut sections = self.sections();
        if sections.is_empty() {
            sections = self.segments();
        }
        if sections.is_empty() {
            return;
        }
        let mut seeds: Vec<u64> = self
            .symbols
            .iter()
            .filter(|s| s.addr.get_space().is_some())
            .map(|s| self.thumb_normalized(s.addr.get_offset()))
            .collect();
        seeds.sort_unstable();
        seeds.dedup();
        self.arch_mut()
            .unlace_states
            .set(Rc::new(unlace_decomp::floatglobals::FloatScan {
                sections,
                seeds,
            }));
    }
}

/// (unlace, `pdbinterior`) Reject the discovered entries inside `merged.pdb_bodies`
/// that the procedure's own function decodes.
///
/// A procedure counts only when its start is a function this commit keeps: an
/// entry that survived the FDE/`.pdata` suppression, a function symbol an enabled
/// pass emits, or a function already in the symbol table. The walk from that start
/// decodes through `arch`'s translator and does not fall through a call the
/// decompiler will treat as no-return: a no-return fact this commit applies, a
/// function already flagged no-return, or (under `noreturn_known`) a callee
/// whose name is on the known no-return list.
fn suppress_pdb_interior_entries(
    arch: &Architecture,
    code_space: &Rc<AddrSpace>,
    merged: &mut unlace_analysis::pass::AnalysisOutput,
) {
    use unlace_decomp::noreturn_externmatch::is_known_noreturn_name;

    let bodies = std::mem::take(&mut merged.pdb_bodies);
    if bodies.is_empty() {
        return;
    }
    let cpp_symbols: &[unlace_analysis::pass::SymFact] = &merged.cpp_dwarf.symbols;
    let mut named: Vec<(u64, String)> = merged
        .symbols
        .iter()
        .chain(cpp_symbols)
        .filter(|s| s.kind == unlace_analysis::pass::SymKind::Function)
        .map(|s| (s.addr, s.name.clone()))
        .collect();
    named.sort_unstable();
    let mut noreturn: Vec<u64> = merged
        .noreturn
        .iter()
        .map(|f| f.addr)
        .filter(|&a| a != 0)
        .collect();
    noreturn.sort_unstable();
    let at = |vma: u64| Address::new(Rc::clone(code_space), vma);
    let names_at = |vma: u64| {
        let lo = named.partition_point(|(a, _)| *a < vma);
        named[lo..]
            .iter()
            .take_while(move |(a, _)| *a == vma)
            .map(|(_, n)| n.as_str())
    };
    let is_function = |start: u64| {
        names_at(start).next().is_some()
            || arch
                .symboltab
                .find_function_across_scopes(&at(start))
                .is_some()
    };
    let no_return = |target: u64| {
        noreturn.binary_search(&target).is_ok()
            || arch
                .symboltab
                .function_is_no_return_across_scopes(&at(target))
            || (arch
                .unlace_options
                .get::<unlace_decomp::analysisgates::NoreturnKnown>()
                .0
                && (names_at(target).any(is_known_noreturn_name)
                    || arch
                        .symboltab
                        .function_display_name_across_scopes(&at(target))
                        .is_some_and(|n| is_known_noreturn_name(&n))))
    };
    let decode = |vma: u64| {
        let insn = unlace_analysis::listing::decode::decode_one(
            arch.translate(),
            vma,
            code_space,
            false,
            false,
        )
        .ok()?;
        let classified = unlace_analysis::listing::classify::classify(&insn.ops, vma, insn.len);
        let (calls, jumps) = if classified.flow.is_call {
            (classified.flows, Vec::new())
        } else {
            (Vec::new(), classified.flows)
        };
        Some(unlace_analysis::pdb::pdbinterior::InsnFlow {
            len: insn.len,
            fall_through: classified.fall_through,
            jumps,
            calls,
            is_call: classified.flow.is_call,
        })
    };
    unlace_analysis::pdb::pdbinterior::suppress_owned_interior_entries(
        &mut merged.entries,
        &bodies,
        is_function,
        no_return,
        decode,
    );
}

/// Tag the function `sid` with the cspec or unlace call-fixup whose `<target>`
/// matches `name`, unless it already carries one.
fn install_named_call_fixup(
    arch: &mut Architecture,
    sid: unlace_decomp::database::SymbolId,
    name: &str,
) {
    let map = unlace_analysis::callfixup::target_fixup_map(arch);
    let Some(fixup_name) = unlace_analysis::callfixup::call_fixup_name_for_function(name, &map)
    else {
        return;
    };
    let injectid = arch.pcodeinjectlib.base.get_payload_id(
        unlace_decomp::pcodeinject::CALLFIXUP_TYPE,
        fixup_name.as_bytes(),
    );
    if injectid < 0 || arch.symboltab.function_inject_id_for_symbol(sid) >= 0 {
        return;
    }
    arch.symboltab.set_function_inject_id(sid, injectid);
}

/// (unlace) Read a `unlace_analysis` pass's per-run enable flag off the
/// [`Architecture`] by the pass's `AnalysisPass::id`. An unknown id defaults to
/// enabled (a new pass with no registered gate still runs — fail-open, additive).
fn analysis_pass_enabled(arch: &Architecture, pass_id: &str) -> bool {
    match pass_id {
        "armframes" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Listing>()
                .0
                && arch
                    .unlace_options
                    .get::<unlace_decomp::analysisgates::FuncstartPatterns>()
                    .0
                && arch
                    .unlace_options
                    .get::<unlace_decomp::analysisgates::ArmFrames>()
                    .inventory
        }
        "noreturn_known" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::NoreturnKnown>()
                .0
        }
        "gonoreturn" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::NoreturnKnown>()
                .0
        }
        // (unlace `goitabcalls`) Interface parameters typed from the static itabs
        // callers pass: only under the option.
        "goitabargs" => {
            arch.unlace_options
                .get::<unlace_decomp::goitabcalls::GoItabCalls>()
                .0
        }
        // (unlace) PE/Mach-O import-slot call binding — typed-slot `externref`

        // paint plus PE-only Win32 no-return names, committed only when enabled.
        // Metadata alone has no output effect; the live flow option gates its use.
        "ppc32_pic_slots" => true,
        // (unlace) ARM32 literal-pool extents: a fact of the Listing, consumed at
        // flow time only when `funcboundflow` is on, which may be set after the
        // commit; so the fact is always parked.
        "poolextents" => true,

        "arm64evcall" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Arm64evcall>()
                .0
        }
        // (unlace) ELF GOT data imports: the slot names + externref paint exist only
        // to let `importdata` render a read through the slot, so they share its gate.
        "elfgotimports" => {
            arch.unlace_options
                .get::<unlace_decomp::printc::ImportData>()
                .0
        }

        "machobinds" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Machobinds>()
                .0
        }
        "machodataslots" => {
            arch.unlace_options
                .get::<unlace_decomp::printc::ImportData>()
                .0
        }
        // (unlace) The measured libc signature extension — the ~200 prototypes the
        // 27-entry base table does not carry, seeded onto IMPORTED names only. The
        // facts are computed at LOAD and COMMITTED only when this gate is on, so
        // `off` renders exactly what the base table alone renders.
        "libgccsigs" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Libgccsigs>()
                .0
        }
        // (unlace `typelib`) The image's library target and imports; dropped
        // here when no library is to be read.
        "typelib" => {
            arch.unlace_options.get::<unlace_decomp::typelib::TypeLib>()
                != unlace_decomp::typelib::TypeLib::Off
        }
        // (unlace) The LOAD-TIME format-string resolver — a Listing consumer whose
        // per-call-site overrides are computed at the deferred commit point and
        // applied only when the gate asks for the static half (`static` on x86,
        // `full` everywhere).
        "formatstring" => arch
            .unlace_options
            .get::<unlace_decomp::formatstring::FormatStringMode>()
            .resolves_at_load(&arch.archid),
        // (unlace) The built-in Win32 API signatures — the Windows half of the
        // `.gdt` stand-in, seeded onto IMPORTED API names only and keyed by entry
        // address. Facts computed at LOAD, COMMITTED only when this gate is on, so
        // `off` renders exactly what no Win32 prototype at all renders.
        "tlsnames" => {
            arch.unlace_options
                .get::<unlace_decomp::tlsnames::Tlsnames>()
                .0
        }
        "uefi" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Uefi>()
                .0
        }
        "cortexmscs" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Cortexmscs>()
                .0
        }
        "com" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Com>()
                .0
        }
        "dextrpc" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Dextrpc>()
                .0
                && arch
                    .unlace_options
                    .get::<unlace_decomp::analysisgates::Osclassinfo>()
                    .0
        }
        "strings" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Strings>()
                .0
        }
        // (unlace `fatstr`) The Rust `&str`-record string pass — gated on the SAME
        // option mode the engine's (ptr,len) literal rule reads, so one option
        // governs both recognizers; `off` (0) drops the bounded facts here.
        "fatstrrecords" => {
            arch.unlace_options
                .get::<unlace_decomp::fatstr::FatStrMode>()
                != unlace_decomp::fatstr::FatStrMode::Off
        }
        "strcodelen" => {
            arch.unlace_options
                .get::<unlace_decomp::fatstr::FatStrMode>()
                != unlace_decomp::fatstr::FatStrMode::Off
                && arch
                    .unlace_options
                    .get::<unlace_decomp::analysisgates::Strcodelen>()
                    .0
        }
        "panicloc" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Panicloc>()
                .0
        }
        "entry_disc" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::EntryDisc>()
                .0
        }
        // (unlace) `.eh_frame` LSDA landing-pad discovery (GccExceptionAnalyzer) — a
        // standalone stashed pass whose facts (the exception landing pads) are
        // computed at LOAD but COMMITTED only when this gate is on. Default-off
        // (output-changing: adds entries), so a default run never commits them and
        // the discovery set is byte-identical to FDE-pcBegin-only.
        "eh_frame_full" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::EhFrameFull>()
                .0
        }
        "itaniumeh" => {
            arch.unlace_options
                .get::<unlace_decomp::itaniumeh::ItaniumEh>()
                .on
        }
        "ehnote" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Ehnote>()
                .0
                && !arch
                    .unlace_options
                    .get::<unlace_decomp::itaniumeh::ItaniumEh>()
                    .on
        }
        // (unlace) Mach-O `__unwind_info` function-start discovery — facts computed
        // at LOAD, COMMITTED only when this gate is on. Default-off (output-
        // changing: adds entries), so a default run is byte-identical and an image
        // carrying `LC_FUNCTION_STARTS` gains nothing (the starts are a subset).
        "unwindstarts" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Unwindstarts>()
                .0
        }
        "machoehframe" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Machoehframe>()
                .0
        }
        // (unlace) PE CRT entry-function prototype recovery — a standalone stashed pass
        // whose one prototype is computed at LOAD but COMMITTED only when this gate
        // is on. Default-ON; off renders the `void(void)` form exactly.
        // (unlace) Mach-O `LC_MAIN` entry naming + prototype — a standalone stashed
        // pass whose one name and one prototype are computed at LOAD but COMMITTED
        // only when this gate is on. Default-ON; off renders the `sub_<addr>` /
        // `void(void)` form exactly.
        // (unlace) PE user-entry naming — a standalone stashed pass whose one entry
        // and one name are computed at LOAD but COMMITTED only when this gate is
        // on. Default-ON; off restores the `sub_<addr>` inventory exactly.
        // (unlace) non-PIE ARM crt1 `_start`->`main` recovery — a standalone stashed
        // pass whose one entry and one name are computed at LOAD but COMMITTED only
        // when this gate is on. Default-ON; off restores the previous inventory.
        // (unlace) ELF libc-start `main` naming + prototype — a standalone stashed
        // pass whose one name and one prototype are computed at LOAD but
        // COMMITTED only when this gate is on. Default-ON; off restores the
        // `sub_<addr>` / width-only form exactly.
        "elfmain" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Elfmain>()
                .0
        }
        // (unlace) `.eh_frame` FDE-interior entry suppression — the pass reports the
        // single-function FDE bodies and the commit rejects any discovered entry
        // strictly inside one. Default-ON; with the gate off the fact stream is
        // dropped here and the discovery set is exactly what it was before.
        "ehcold" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Ehcold>()
                .0
        }
        "functails" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Functails>()
                .0
        }
        "mfcmsgmap" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Mfcmsgmap>()
                .0
        }
        "msvcptrentry" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Msvcptrentry>()
                .0
        }
        "importvote" => {
            arch.unlace_options
                .get::<unlace_decomp::importvote::Importvote>()
                .0
        }
        // (unlace) PDB-procedure-interior entry suppression — the extents come out of
        // the `.pdb`, so switching `pdb` off withdraws them too.
        "pdbinterior" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Pdb>()
                .0
        }
        // (unlace) The widened Cortex-M vector-table oracle — a standalone stashed
        // pass whose handler seeds + Thumb region paint are computed at LOAD but
        // COMMITTED only when this gate is on. Default-off (output-changing: adds
        // entries), so a default run never commits them and the discovery set is
        // byte-identical to the shipped (e_entry-matching) signature.
        "cortexmvectors" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Cortexmvectors>()
                .0
        }
        "ptrentry" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Ptrentry>()
                .0
        }
        // (unlace) ARM literal-pool inference — the additive pool-end entries are
        // emitted under this id so the commit gate mirrors the pre-invocation check
        // in `run_listing_consumers`. The subtractive half rides the `aif` stream it
        // filters, which the `aif` arm above already gates.
        "poolentry" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Poolentry>()
                .0
        }
        // (unlace) The full byte-pattern function-start pass — default-OFF
        // (output-changing). The `_ => true` fail-open below would otherwise run it
        // by default, so this explicit arm reading the (default-false)
        // `analysis_funcstart_patterns` flag is load-bearing for the default-off
        // contract.
        "funcstart_patterns" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::FuncstartPatterns>()
                .0
        }
        // (unlace) The recursive-descent discovery commit — promotes the Listing walk's
        // followed CALL targets to functions. Coupled to the same flag as the prologue
        // seeds that feed it (default-OFF; DIV-20 turns it on for non-x86-64 on the
        // decompile-all surface). x86-64 keeps it off ⇒ byte-identical there.
        "funcdisc_recursive" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::FuncstartPatterns>()
                .0
        }
        // (unlace `armfuncmode`) An explicit `--isa` states the mode of the whole
        // image, so the symbol-derived A32 extents yield to it.
        "armfuncmode" => !arch.input_arm_isa_override,
        // (unlace) The entry-reachable Thumb context walk. Its paints are computed at
        // the commit (after byte overlays) and stashed under this id, so the gate
        // here is the defensive half of the check that decides whether it runs.
        "dwarf" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Dwarf>()
                .0
        }
        // (unlace `cppsig`) The whole-pass gate; WHICH certainty tier survives is a
        // second decision, made on the mode in `commit_analysis_output`.
        "cppsig" => arch
            .unlace_options
            .get::<unlace_decomp::cppsig::CppSigMode>()
            .enabled(),
        // Explicit (NOT the fail-open `_ => true` default): the source-line pass is
        // default-OFF (it changes the output), so it must be registered here to be
        // gated by the `analysis_dwarf_lines` flag rather than running by default.
        "dwarf_lines" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::DwarfLines>()
                .0
        }
        "cvftrace" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::CvfTrace>()
                .names
        }
        "cvftrace_lines" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::CvfTrace>()
                .lines
        }
        "gopcln" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::GoPcln>()
                .on
        }
        "gopcln_lines" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::GoPcln>()
                .lines
        }
        "addrtable" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Addrtable>()
                .0
        }
        "operand_refs" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::OperandRefs>()
                .0
        }
        "listing" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Listing>()
                .0
        }
        "fast_funcdisc" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::FastFuncdisc>()
                .0
        }
        "noreturn_disc" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::NoreturnDisc>()
                .0
        }
        // (unlace, GH-312) The positive-evidence-only tally has no fact stream of its
        // own — it shapes which callees `noreturn_disc` concludes, which the arm
        // above already gates. Registered here so the fail-open `_ => true` never
        // silently re-enables a pass id that does not exist.
        "noreturn_propagate" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::NoreturnPropagate>()
                .0
        }
        "fid" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Fid>()
                .on
        }
        "flirt" => {
            arch.unlace_options
                .get::<unlace_decomp::coreoptions::Flirt>()
                .0
        }
        // (unlace) MSVC RTTI / vftable recovery — a standalone load-time pass whose
        // class-name + RTTI_* labels are computed at LOAD but COMMITTED only when
        // this gate is on. Default-OFF (output-changing: adds named data symbols),
        // PE-only (the pass + its passes_for registration both self-gate on PE), so
        // a default run / every non-PE binary commits nothing here.
        "rtti" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Rtti>()
                .0
        }
        "msvceh" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Msvceh>()
                .0
        }
        "delphi" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Delphi>()
                .0
        }
        // (unlace, NOVEL) Itanium (GCC/Clang) RTTI + vtable recovery — the class
        // names, typeinfo/vtable labels and per-slot virtual-method names are
        // computed at LOAD but COMMITTED only when this gate is on. Default-OFF
        // (output-changing: adds named data + function symbols), ELF-only (the pass
        // + its passes_for registration both self-gate on ELF), so a default run /
        // every non-ELF binary commits nothing here.
        "itaniumrtti" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Itaniumrtti>()
                .0
        }
        "aif" => arch
            .unlace_options
            .get::<unlace_decomp::aif::AifMode>()
            .enabled(),
        // (unlace, GH-299) The AIF bracketed-candidate reject has no fact stream of
        // its own -- it shapes the `aif` accept list inside `run_aif`, which the
        // `aif` arm above already gates. Registered here so the fail-open
        // `_ => true` never silently re-enables a pass id that does not exist.
        "vtabletypes" => {
            arch.unlace_options
                .get::<unlace_decomp::coreoptions::Vtabletypes>()
                .0
        }
        // (unlace, GH-299) The AIF filler reject, shaping the `aif` accept list the
        // same way; registered for the same fail-open reason.
        // (unlace, GH-299) The AIF literal-pool slide, shaping the `aif` accept list
        // the same way; registered for the same fail-open reason.
        "aifpoolslide" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Aifpoolslide>()
                .0
        }
        // (unlace) Tail-call function-entry recovery — default-OFF (discovers more
        // functions, so it changes emitted C by construction). Listing consumer;
        // the live gate is the pre-invocation check in `run_listing_consumers`.
        "tailcallentry" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Tailcallentry>()
                .0
        }

        "funcchunks" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Funcchunks>()
                .0
        }
        "globalwidth" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Globalwidth>()
                .0
        }
        "aifdataveto" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Aifdataveto>()
                .0
        }
        "calltable" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Calltable>()
                .0
        }
        // (unlace) Stripped Mach-O stub naming from chained binds; default-on,
        // output-changing (names `sub_` stubs), so `off` really skips it.
        "stubbinds" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Stubbinds>()
                .0
        }
        // (unlace) Mach-O Objective-C metadata recovery — default-OFF (output-changing:
        // renames IMP functions + adds class/selector symbols). Registered here so it
        // is gated by `analysis_objc` rather than running by the fail-open default.
        "objc" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Objc>()
                .0
        }
        // (unlace) Swift runtime-metadata recovery — default-OFF (output-changing:
        // names stripped functions and descriptor records).
        "swiftmetadata" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Swiftmetadata>()
                .0
        }
        // (unlace) The Swift runtime prototypes — default-ON (a Swift image's
        // runtime calls are the same functions everywhere).
        "swiftruntime" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Swiftruntime>()
                .0
        }
        // (unlace) Mach-O `__cfstring` constant-string recovery — default-on,
        // output-changing (renders CFString constants as `CFSTR("...")` typed
        // `CFStringRef`). Registered here so `off` really skips it; `off`
        // renders the entry exactly as before.
        "cfstrings" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::CfStrings>()
                .pass
        }
        "iokitclasses" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::IokitClasses>()
                .names
        }
        "xnutables" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Xnutables>()
                .0
        }
        "osclassinfo" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Osclassinfo>()
                .0
        }
        "blobs" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Blobs>()
                .0
        }
        // (unlace) PE PDB metadata recovery — default-OFF (output-changing: renames
        // stripped functions to their real PDB names). PE-only + externally gated on
        // a fingerprint-matching `.pdb` (the `unlace_pdb_path` env var). Registered
        // here so it is gated by `analysis_pdb` rather than running by the fail-open
        // default.
        "pdb" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Pdb>()
                .0
        }
        // (unlace) The PDB types/prototypes/locals and source-line passes: their
        // facts exist only with a `.pdb` the `pdb` gate locates, so each needs
        // that gate as well as its own.
        "pdbtypes" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Pdb>()
                .0
                && arch
                    .unlace_options
                    .get::<unlace_decomp::analysisgates::Pdbtypes>()
                    .0
        }
        "pdblines" => {
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Pdb>()
                .0
                && arch
                    .unlace_options
                    .get::<unlace_decomp::analysisgates::Pdblines>()
                    .0
        }
        // (unlace) `libctypes` has NO arm on purpose and reaches this fail-open
        // default. Its gate is the load-time `UNLACE_LIBCTYPES` env bridge read
        // inside the pass itself, because the pass interns its named type shells
        // into the type factory as it builds the signatures, so `off` must not let
        // it run at all — which means an arm here would be at best redundant. It
        // would also be wrong: `clear architecture` + `load file` (what a two-pass
        // stage test does) rebuilds the Architecture with the constructor default,
        // so the flag would drop facts the env gate had correctly produced.
        _ => true,
    }
}

/// Every spelling of the canonical entries and of the loader aliases, keyed by
/// a hash of the name so one lookup is a binary search rather than a scan of
/// the whole inventory. A hash collision only adds a candidate the exact
/// comparison then drops, so answers keep the scan's order and content.
struct EntryNames {
    /// (name hash, canonical entry index), sorted.
    spelled: Vec<(u64, usize)>,
    /// (name hash, loader-alias entry vma), sorted.
    aliased: Vec<(u64, u64)>,
}

impl EntryNames {
    fn new(entries: &[FunctionEntry], loader_aliases: &BTreeMap<u64, Vec<String>>) -> Self {
        let mut spelled: Vec<(u64, usize)> = entries
            .iter()
            .enumerate()
            .flat_map(|(at, entry)| {
                std::iter::once(&entry.name)
                    .chain(&entry.aliases)
                    .map(move |name| (name_hash(name), at))
            })
            .collect();
        spelled.sort_unstable();
        spelled.dedup();
        let mut aliased: Vec<(u64, u64)> = loader_aliases
            .iter()
            .flat_map(|(&vma, names)| names.iter().map(move |name| (name_hash(name), vma)))
            .collect();
        aliased.sort_unstable();
        aliased.dedup();
        Self { spelled, aliased }
    }

    /// The indexes of the canonical entries `want` names, by reported name or
    /// by alias, in inventory order.
    fn spelled<'a>(
        &'a self,
        entries: &'a [FunctionEntry],
        want: &'a str,
    ) -> impl Iterator<Item = usize> + 'a {
        hashed(&self.spelled, want).filter(move |&at| {
            let entry = &entries[at];
            entry.name == want || entry.aliases.iter().any(|alias| alias == want)
        })
    }

    /// The entry addresses holding a loader alias spelled `want`, ascending.
    fn aliased<'a>(
        &'a self,
        loader_aliases: &'a BTreeMap<u64, Vec<String>>,
        want: &'a str,
    ) -> impl Iterator<Item = u64> + 'a {
        hashed(&self.aliased, want).filter(move |vma| {
            loader_aliases
                .get(vma)
                .is_some_and(|names| names.iter().any(|name| name == want))
        })
    }
}

fn name_hash(name: &str) -> u64 {
    use std::hash::{Hash, Hasher};
    let mut hasher = std::hash::DefaultHasher::new();
    name.hash(&mut hasher);
    hasher.finish()
}

fn hashed<'a, T: Copy>(
    index: &'a [(u64, T)],
    want: &str,
) -> impl Iterator<Item = T> + 'a + use<'a, T> {
    let hash = name_hash(want);
    let lo = index.partition_point(|&(key, _)| key < hash);
    let hi = lo + index[lo..].partition_point(|&(key, _)| key == hash);
    index[lo..hi].iter().map(|&(_, value)| value)
}

/// (unlace, issue #666) The name the image carries that a caller most likely meant
/// by `want`, or `None`.
///
/// One rule: the same identifier, differently decorated. A leading underscore is
/// an ABI decoration rather than part of the name (Mach-O's `_main`, a 32-bit
/// MSVC object's `_main`), so two spellings that agree once it is stripped are
/// one name. Deliberately not a general edit-distance guess — a near-miss that
/// is merely *similar* to what was asked is how a caller ends up reading the
/// wrong function.
fn nearest_spelling(entries: &[FunctionEntry], want: &str) -> Option<NameSuggestion> {
    let bare = want.trim_start_matches('_');
    if bare.is_empty() {
        return None;
    }
    entries.iter().find_map(|entry| {
        std::iter::once(&entry.name)
            .chain(entry.aliases.iter())
            .find(|name| name.trim_start_matches('_') == bare && name.as_str() != want)
            .map(|name| NameSuggestion {
                name: name.clone(),
                address: entry.addr.get_offset(),
            })
    })
}

/// (unlace, issue #666) How many entries carry a name the IMAGE supplied.
///
/// An engine placeholder (`sub_<addr>`) and a synthesized table name
/// (`_INIT_<i>`) are minted from the address and the container layout, so an
/// inventory of nothing else is a stripped image: no name can select in it, and
/// only an address can. Any other name means a by-name selector works here and
/// the one that was asked for is simply not among them.
fn named_entry_count(entries: &[FunctionEntry]) -> usize {
    entries
        .iter()
        .filter(|entry| {
            !is_generic_placeholder_name(&entry.name) && !is_structural_entry_name(&entry.name)
        })
        .count()
}

/// (unlace, RE-need `changing-namestyle-invalidates-discovered`) Every default
/// function name unlace's naming vocabularies would mint at `addr` — the angr
/// `sub_<addr>`, the upstream `func_<raw-addr>` and the ghidra-mode `FUN_%08x`.
///
/// One per [`unlace_decomp::database::UnlaceNameStyle`] arm, in the order
/// [`Architecture::name_function`] decides them, and rendered by the same three
/// functions it calls so a change to any spelling reaches both. Used to read a
/// placeholder name BACK to its address: `option namestyle` decides which of
/// these gets printed, and a selector must not depend on that choice.
fn minted_function_names(addr: &Address) -> [String; 3] {
    [
        unlace_decomp::database::ghidra_function_name(addr),
        unlace_decomp::database::unlace_function_name(addr),
        // Errors only on the fspec/iop spaces, which never hold a function; an
        // unrenderable address simply matches no name.
        unlace_decomp::printc::generic_function_name(addr).unwrap_or_default(),
    ]
}

/// The FID label gate: is `name` an engine-generated placeholder a FID match may
/// overwrite (never a real `.symtab`/DWARF/imported name)?
///
/// unlace names an un-symboled function `sub_<addr>` (`unlace_function_name`, the
/// default angr-style) or `func_<addr>` (`Architecture::name_function`, the upstream
/// style); a Ghidra-imported binary uses `FUN_<addr>`. Those are the only names FID
/// renames. The unlace analog of Ghidra's `!alwaysApplyFidLabels &&
/// hasUserOrImportedSymbols` gate — on a stripped binary every function is a
/// placeholder ⇒ FID fires; a function with a real name is left alone.
fn is_generic_placeholder_name(name: &str) -> bool {
    name.starts_with("sub_")
        || name.starts_with("func_")
        || name.starts_with("FUN_")
        || name.starts_with("LAB_")
}

/// (unlace, issue #197) Is `name` a synthesized STRUCTURAL name rather than one the
/// binary actually carries?
///
/// `_INIT_<i>` / `_FINI_<i>` / `_DT_INIT` / `_DT_FINI` are minted by the entry
/// oracle for the ELF dynamic INIT/FINI tables (Ghidra `ElfProgramBuilder`'s
/// naming, threaded through `AnalysisOutput::entry_names`).  They say what the
/// table SLOT is, not what the function is called, so a real symbol at the same
/// address must outrank them — `fmt_arm`'s `0x4c0` reports
/// `__do_global_dtors_aux` with `_FINI_0` as an alias, not the reverse.
///
/// A recovered virtual method named by its VTABLE SLOT INDEX is the same kind of
/// name and is treated the same way ([`is_vtable_slot_name`]).
fn is_structural_entry_name(name: &str) -> bool {
    name == "_DT_INIT"
        || name == "_DT_FINI"
        || name
            .strip_prefix("_INIT_")
            .or_else(|| name.strip_prefix("_FINI_"))
            .is_some_and(|i| !i.is_empty() && i.bytes().all(|b| b.is_ascii_digit()))
        || is_vtable_slot_name(name)
}

/// Does the function-symbol fact `name` replace `existing`, the basename the same
/// scope already gives that address? Only a slot-index name gives way, and only to a
/// real one.
fn replaces_slot_name(name: &str, existing: &str) -> bool {
    let Some((scope, base)) = name.rsplit_once("::") else {
        return false;
    };
    is_vtable_slot_name(&format!("{scope}::{existing}"))
        && !is_vtable_slot_name(name)
        && !is_generic_placeholder_name(base)
}

/// (unlace, `pe-function-inventory-labels`) Is `name` a virtual method the RTTI passes
/// could only name by its vtable SLOT INDEX — `<Class>::vfunc_<i>` (MSVC `rtti` and
/// Itanium `itaniumrtti`), or `<Class>::vfunc_for_<Base>_<i>` for a slot of an Itanium
/// secondary sub-vtable?
///
/// Neither metadata graph records per-method names, only the class name, so the slot
/// index is all those passes have. That makes the name structural in exactly the sense
/// `_FINI_<i>` is: it says which SLOT the function occupies, not what the function is
/// called. A real method name recovered at the same address must therefore outrank it —
/// on a Windows PE the `std::basic_streambuf` thunks carry both, and the length
/// tie-break alone decided it, so `showmanyc` reported as `std::basic_stringbuf::vfunc_5`
/// while its one-byte-shorter neighbour `uflow` kept its real name.
///
/// The vtable DATA labels (`<Class>::vftable`, `<Class>_vtable`) never reach this
/// ranking; the trailing digit test excludes an unindexed `vfunc_for_<Base>` as well.
fn is_vtable_slot_name(name: &str) -> bool {
    let Some((class, slot)) = name.rsplit_once("::") else {
        return false;
    };
    if class.is_empty() {
        return false;
    }
    let Some(rest) = slot.strip_prefix("vfunc_") else {
        return false;
    };
    let index = rest.rsplit_once('_').map_or(rest, |(_, i)| i);
    !index.is_empty() && index.bytes().all(|b| b.is_ascii_digit())
}

/// (unlace, issue #197) How informative is `name`?  Smaller sorts first when
/// [`ConsoleProgram::function_entries_canonical`] picks which of an entry's names
/// to report; the rest become aliases.  Ordered by decreasing importance:
///
/// 1. **Not an engine placeholder.**  `sub_`/`func_`/`FUN_`/`LAB_`
///    ([`is_generic_placeholder_name`]) carry no information beyond the address,
///    which the record already holds, so they always lose.
/// 2. **Not a synthesized structural name** ([`is_structural_entry_name`]).
/// 3. **No leading underscore.**  Where one function carries both a linker symbol
///    and a debug-info symbol, the underscore-prefixed one is the mangled/ABI
///    spelling: `macho_dwarf.o` has `_l0`+`first_byte` at `0x0` and `_main`+`main`
///    at `0x40`, and the reported mingw-PE pair is `_pre_c_init`+`pre_c_init`.
///    The unprefixed name is the one a reader wants.
/// 4. **Shorter**, then **lexicographic** — so the choice is total and stable
///    run to run rather than dependent on symbol-stream order.  This is a tie-break
///    between names of equal standing ONLY; a difference in kind must be caught by a
///    tier above it, or a one-character length accident decides the report.
fn entry_name_rank(name: &str) -> (bool, bool, bool, usize) {
    (
        is_generic_placeholder_name(name),
        is_structural_entry_name(name),
        name.starts_with('_'),
        name.len(),
    )
}

/// Build the marshaling [`IdRegistry`] the console bootstrap needs (the same
/// per-module id registration the `decompile_e2e` gate's `build_registry` does:
/// translate + sleigh-arch + loadimage-xml + option element ids).
fn build_registry() -> IdRegistry {
    let mut registry = IdRegistry::with_base_ids();
    register_translate_ids(&mut registry);
    register_sleigh_arch_ids(&mut registry);
    register_loadimage_xml_ids(&mut registry);
    register_option_elements(&mut registry);
    registry
}

/// Locate the SLEIGH specs root (C++ `SleighArchitecture::specpaths`).
///
/// The Python tools pass `-s <specs>` and set `SLEIGHHOME=<specs>`; the bin's
/// arg parser records the spec roots and hands them here.  The first existing
/// root wins (mirroring the C++ `scanForSleighDirectories` over the recorded
/// roots).  A root may also be a tree held in memory
/// ([`unlace_decomp::memoryspecs::MemorySpecs`]).
fn scan_language_database(spec_roots: &[impl IntoSpecRoot]) -> LanguageDatabase {
    let mut db = LanguageDatabase::new();
    for root in spec_roots {
        db.add_spec_root(&root.to_spec_root());
    }
    db
}

/// Scan `spec_roots` into a [`LanguageDatabase`] once, for [`Bootstrap`]s to
/// share. A bootstrap over spec roots scans them again at each load: it lists
/// their `.ldefs` and parses the one that defines the language the image needs.
/// A bootstrap over the database builds what the same bootstrap over the roots
/// builds.
///
/// A bootstrap only reads the database, and the database is `Send + Sync`, so
/// threads may share one (behind an `Arc` or a `&'static`) and load images at
/// once. It holds the language descriptions and the roots, not the `.sla`,
/// `.pspec` and `.cspec` contents, which each bootstrap reads and decodes for
/// its own language.
pub fn language_database(spec_roots: &[impl IntoSpecRoot]) -> UnlaceResult<LanguageDatabase> {
    let mut db = scan_language_database(spec_roots);
    db.get_descriptions(&build_registry())?;
    Ok(db)
}

/// Read the `.ldefs` of language `id` into `db` unless it holds every language already (a
/// shared database does; one scanned for this load reads only what the load needs).
fn load_language(
    db: &mut Cow<'_, LanguageDatabase>,
    id: &str,
    registry: &IdRegistry,
) -> UnlaceResult<()> {
    if db.is_complete() {
        return Ok(());
    }
    db.to_mut().load_language(id, registry)
}

pub(crate) use languages::Languages;

mod languages {
    use super::*;

    /// Where a bootstrap finds its languages: spec roots it scans when it
    /// first needs a language, or a database a caller scanned once. Public in
    /// a private module, so [`crate::engine::LanguageSource`] can name it as a
    /// supertrait that callers cannot implement.
    pub trait Languages {
        fn database(&self) -> Cow<'_, LanguageDatabase>;
    }

    impl<R: IntoSpecRoot> Languages for [R] {
        fn database(&self) -> Cow<'_, LanguageDatabase> {
            Cow::Owned(scan_language_database(self))
        }
    }

    impl<R: IntoSpecRoot, const N: usize> Languages for [R; N] {
        fn database(&self) -> Cow<'_, LanguageDatabase> {
            self.as_slice().database()
        }
    }

    impl<R: IntoSpecRoot> Languages for Vec<R> {
        fn database(&self) -> Cow<'_, LanguageDatabase> {
            self.as_slice().database()
        }
    }

    impl Languages for LanguageDatabase {
        fn database(&self) -> Cow<'_, LanguageDatabase> {
            Cow::Borrowed(self)
        }
    }
}

/// Find the `<binaryimage>` element inside a parsed document root (which may be a
/// bare `<binaryimage>` or a `<decompilertest>` wrapping one).
fn find_binaryimage(root: &Rc<Element>) -> Option<Rc<Element>> {
    if root.get_name() == "binaryimage" {
        return Some(Rc::clone(root));
    }
    for c in root.get_children() {
        if let Some(found) = find_binaryimage(c) {
            return Some(found);
        }
    }
    None
}

/// Read an attribute as a `String` (lossy ASCII), `None` if absent.
fn attr(el: &Element, name: &str) -> Option<String> {
    el.get_attribute_value(name)
        .ok()
        .map(|b| String::from_utf8_lossy(b).into_owned())
}

/// Run the spec-file resolution, translator build, and `Architecture::init`
/// tail on an already-language-resolved [`SleighArchitecture`] — the chain both
/// the XML and ELF frontends share (C++ `buildSpecFile` → `buildTranslator` →
/// `buildTypegrp`/`buildCoreTypes`/`buildAction`/…).
///
/// The caller must have set `archid` + resolved the language index first; this
/// reads the `.sla`/`.cspec`/`.pspec`, builds the translator (with a [`NullLoad`]
/// placeholder image the caller replaces after open), installs the register
/// lookup, and runs `init_post_engine`.  It deliberately does **not** open or
/// attach the loader — that is the frontend's `postSpecFile` job (the XML path
/// opens the `<binaryimage>`; the ELF path attaches the default code space).
fn build_engine_and_init(
    sleigh: &mut SleighArchitecture,
    db: Cow<'_, LanguageDatabase>,
) -> UnlaceResult<()> {
    // buildSpecFile -> the resolved .sla; buildTranslator (decode the .sla).
    let specs = sleigh.build_spec_file(&db)?;
    let resolved_sla = specs
        .slafile
        .ok_or_else(|| UnlaceError::lowlevel("build_spec_file resolved no .sla"))?;
    let sla = db
        .read_sla_image(&resolved_sla)
        .map_err(|e| UnlaceError::lowlevel(format!("read sla {resolved_sla}: {e}")))?;

    // The loader is handed to the translator as a dummy first; the real opened
    // image replaces it after init (mirrors corpus_bootstrap.rs / the e2e gate).
    sleigh.build_translator(Box::new(NullLoad), &sla)?;

    // Apply the active language's `.ldefs` `<truncate_space>` records (C++
    // `Architecture::restoreFromSpec` -> `SleighArchitecture::modifySpaces`,
    // architecture.cc:631).  This shrinks an address space's addr size before the
    // type factory reads `getDefaultDataSpace()->getAddrSize()` for the default
    // pointer width — e.g. PowerPC:BE:32:e500 truncates `ram` to 4 so a `void *`
    // is a 32-bit pointer even though the GPRs (and the space) are modeled 64-bit.
    {
        let langindex = sleigh.language_index();
        let arch = sleigh
            .base_mut()
            .ok_or_else(|| UnlaceError::lowlevel("no Architecture base after build_translator"))?;
        db.modify_spaces(langindex, arch.manage())?;
        // (unlace) The same records, kept as data: rebuilding a decode-equivalent
        // engine elsewhere means applying them there too
        // (`decodekit::EngineRecipe`).
        arch.set_decode_truncations(db.truncations(langindex));
    }

    // Hand the resolved compiler-spec (`.cspec`) XML to the architecture so
    // `build_default_proto` can decode the real `<default_proto>` input/output
    // parameter lists (the C++ `parseCompilerConfig` reads the cspec here).
    // A read failure is non-fatal: the architecture falls back to the name-only
    // default model (proto recovery simply won't fire).
    if !specs.compilerfile.is_empty() {
        if let Ok(cspec) = db.read_spec(&specs.compilerfile) {
            sleigh
                .base_mut()
                .ok_or_else(|| {
                    UnlaceError::lowlevel("no Architecture base after build_translator")
                })?
                .set_cspec_xml(cspec.into_owned());
        }
    }

    // Hand the resolved processor-spec (`.pspec`) XML to the architecture so
    // `parse_processor_config` (run inside `init_post_engine`) can apply the
    // `<context_data>` `<context_set>` paints (the C++ `parseProcessorConfig`
    // reads the pspec here).  This is what selects the SLEIGH disassembly mode:
    // without it x86-64 lifts as 16-bit real mode.  A read failure is non-fatal
    // (the engine keeps the zero-default context).
    if !specs.processorfile.is_empty() {
        if let Ok(pspec) = db.read_spec(&specs.processorfile) {
            sleigh
                .base_mut()
                .ok_or_else(|| {
                    UnlaceError::lowlevel("no Architecture base after build_translator")
                })?
                .set_pspec_xml(pspec.into_owned());
        }
    }

    // (unlace) The `.ldefs` languages a FID database may be built for, kept with the
    // architecture; a database scanned for this load reads another language on demand.
    unlace_decomp::langfamily::set_language_families(
        sleigh
            .base_mut()
            .ok_or_else(|| UnlaceError::lowlevel("no Architecture base after build_translator"))?,
        unlace_decomp::langfamily::LanguageFamilies::new(db),
    );

    // Install the register-name lookup on the engine's manager (the C++
    // `AddrSpace::trans` back-pointer) while the engine is still the sole owner
    // of the manager — before `init_post_engine`'s `parse_processor_config`
    // resolves the pspec `<tracked_set>` register names (e.g. `DF`).
    sleigh
        .base_mut()
        .ok_or_else(|| UnlaceError::lowlevel("no Architecture base after build_translator"))?
        .translate_mut()
        .as_sleigh_mut()
        .expect("install_register_lookup: standalone Sleigh engine")
        .install_register_lookup()?;

    // The tail of Architecture::init (buildTypegrp/buildCoreTypes/buildAction/…).
    sleigh
        .base_mut()
        .ok_or_else(|| UnlaceError::lowlevel("no Architecture base after build_translator"))?
        .init_post_engine()?;
    Ok(())
}

/// Bootstrap a [`ConsoleProgram`] from a `<binaryimage>` element + arch id,
/// against the SLEIGH specs at `spec_roots` (C++ `IfcLoadFile`'s
/// `buildArchitecture` + `conf->init(store)`).
///
/// This is the faithful console body of C++ `IfcLoadFile::execute` reduced to the
/// unlace XML engine backend: build the loader from the `<binaryimage>`, resolve
/// the language, build the spec file, build the translator, run
/// `init_post_engine` (the tail of `Architecture::init`), open the image, hand it
/// to the engine, then read the loader symbols.  Errors carry the C++ failure
/// message so the console's `Could not create architecture` path is faithful.
pub fn bootstrap_program(
    binaryimage: Rc<Element>,
    arch_id: &str,
    spec_roots: &[String],
) -> UnlaceResult<ConsoleProgram> {
    Bootstrap::new(spec_roots)
        .options(&LoadOptions::from_env_for_load())
        .xml_image(binaryimage, arch_id)
}

/// The XML bootstrap behind [`bootstrap_program`].
pub(crate) fn bootstrap_xml_image(
    binaryimage: Rc<Element>,
    arch_id: &str,
    languages: &(impl Languages + ?Sized),
) -> UnlaceResult<ConsoleProgram> {
    let registry = build_registry();

    // capa->buildArchitecture(filename,target,...)
    let capability = XmlArchitectureCapability::new();
    let mut arch = capability.build_architecture("loadfile", "");

    // XmlArchitecture::buildLoader (find the <binaryimage>, wrap in LoadImageXml).
    arch.build_loader(Rc::clone(&binaryimage))?;

    // collectSpecFiles + resolveArchitecture (language-id normalization/index).
    let mut db = languages.database();
    arch.sleigh_mut().set_archid(arch_id);
    let baseid = arch.sleigh_mut().resolve_language_id(arch_id)?;
    load_language(&mut db, &baseid, &registry)?;
    arch.sleigh_mut().select_language(&db, &baseid)?;
    if arch.sleigh().language_index() < 0 {
        return Err(UnlaceError::lowlevel(format!(
            "No sleigh specification for architecture {arch_id}"
        )));
    }

    // buildSpecFile -> buildTranslator -> the Architecture::init tail (shared
    // by both the XML and ELF frontends).
    build_engine_and_init(arch.sleigh_mut(), db)?;

    // postSpecFile: open the corpus image against the engine spaces.
    let manager_ptr: *const AddrSpaceManager = arch.sleigh().base().unwrap().manage();
    // SAFETY: the manager lives inside `arch` and outlives the open() call; the
    // borrow is released before any &mut use of `arch` (same shape as the e2e
    // gate / corpus_bootstrap.rs).
    arch.open_image(unsafe { &*manager_ptr }, &registry)?;

    // Read the loader symbols (the readLoaderSymbols hook) from the opened image
    // BEFORE handing it to the engine: the LoadImageXml exposes name+address.
    let symbols = read_loader_symbols(arch.loader());

    // C++ `Architecture::fillinReadOnlyFromLoader` (architecture.cc:1375), part of
    // the `Architecture::init` chain: query the load image for its read-only
    // address ranges and OR `Varnode::readonly` over them in the symbol table's
    // property map.  `setVarnodeProperties`/`queryProperties` then paints the
    // `readonly` flag on varnodes reading those ranges, which `ActionVarnodeProps`
    // folds into constants when `option readonly` is on (the float-cluster's
    // IEEE-754 literals live in read-only RAM).  Collected here, while the opened
    // `LoadImageXml` is still in hand, then applied to the symboltab below.
    let readonly_ranges: Vec<(Address, Address)> = match arch.loader() {
        Some(loader) => loader_readonly_ranges(loader, arch.sleigh().base().unwrap().manage()),
        None => Vec::new(),
    };

    // Hand the opened loader to the engine (the C++ `loader` back-pointer the
    // decode reads on load_fill).
    let img = arch
        .take_loader()
        .ok_or_else(|| UnlaceError::lowlevel("loader vanished after open"))?;
    arch.sleigh_mut()
        .base_mut()
        .unwrap()
        .set_loader(Box::new(img));

    // Apply the collected read-only ranges to the symbol table's property map
    // (C++ `symboltab->setPropertyRange(Varnode::readonly, *iter)`).
    if let Some(base) = arch.sleigh_mut().base_mut() {
        for (first, last_open) in &readonly_ranges {
            base.symboltab.set_property_range(
                unlace_decomp::varnode::varnode_flags::readonly,
                first,
                last_open,
            );
        }
    }

    let description = arch.sleigh().base().unwrap().get_description().to_string();

    // Slice the XML leaf back to its `SleighArchitecture` (the XML-specific
    // loader/adjustvma machinery is spent; the engine owns the opened image).
    // The XML path runs no analysis tier, so no facts are stashed and the gated
    // commit at `read symbols` is a no-op (parity is structurally untouched).
    let mut prog = empty_program(
        arch.into_sleigh(),
        registry,
        ProgramContainer::Xml,
        description,
    );
    prog.symbols = SymbolStream::from_loader(symbols);
    // C++ `conf->readLoaderSymbols("::")` (testfunction.cc:160 / consolemain.cc:104):
    // install the binaryimage symbols as FunctionSymbols so a CALL to one resolves
    // to its callee name at flow-analysis time.
    prog.read_loader_symbols()?;
    Ok(prog)
}

/// The ARM/Thumb decode mode is [`ArmIsa`], and its environment variable
/// [`ARM_ISA_ENV`] is read once into the load options.
pub use unlace_decomp::loadoptions::{ARM_ISA_ENV, ArmIsa};

/// The `TMode` context value a decode mode paints: 0 for ARM, 1 for Thumb.
fn arm_isa_context_value(isa: ArmIsa) -> u32 {
    match isa {
        ArmIsa::Arm => 0,
        ArmIsa::Thumb => 1,
    }
}

fn input_isa_paints_for_ranges(
    ranges: &[(u64, u64)],
    arch: &Architecture,
    arch_id: &str,
    isa: Option<ArmIsa>,
) -> UnlaceResult<Vec<unlace_analysis::pass::ContextPaint>> {
    let Some(isa) = isa else {
        return Ok(Vec::new());
    };
    if !is_arm32_language(arch_id) {
        return Err(UnlaceError::lowlevel(format!(
            "--isa {} requires a 32-bit ARM SLEIGH target (resolved {arch_id})",
            isa.as_str()
        )));
    }
    if !arch.with_context_db_mut(|db| db.get_variable(b"TMode").is_ok()) {
        return match isa {
            ArmIsa::Arm => Ok(Vec::new()),
            ArmIsa::Thumb => Err(UnlaceError::lowlevel(format!(
                "ARM SLEIGH target {arch_id} does not support Thumb decoding; select a Thumb-capable --target"
            ))),
        };
    }

    Ok(ranges
        .iter()
        .filter_map(|&(addr, size)| {
            if size == 0 {
                return None;
            }
            let end = addr.checked_add(size)?;
            Some(unlace_analysis::pass::ContextPaint {
                addr,
                end: Some(end),
                var: "TMode",
                value: arm_isa_context_value(isa),
            })
        })
        .collect())
}

/// Resolve the loader's language id against the spec database and bring the
/// engine up on it. With no explicit target, a primary id whose compiler model
/// is not vendored (a PE's `:windows`) is retried once as the loader's
/// default-model fallback (§2.2): wrong calling-convention details beat no
/// decompile.
fn build_sleigh_for_loader(
    path: &str,
    target: &str,
    languages: &(impl Languages + ?Sized),
    registry: &IdRegistry,
    arch_type: &str,
    fallback_arch_id: Option<&[u8]>,
) -> UnlaceResult<SleighArchitecture> {
    let mut db = languages.database();
    let mut sleigh = SleighArchitecture::new(path, target);
    let baseid = sleigh.resolve_language_id(arch_type)?;
    load_language(&mut db, &baseid, registry)?;
    if let Err(primary) = sleigh.select_language(&db, &baseid) {
        let Some(fallback) = fallback_arch_id.filter(|_| target.is_empty()) else {
            return Err(primary);
        };
        let fallback = String::from_utf8_lossy(fallback).into_owned();
        let mut retry = SleighArchitecture::new(path, "");
        let baseid = retry.resolve_language_id(&fallback)?;
        load_language(&mut db, &baseid, registry)?;
        if retry.select_language(&db, &baseid).is_err() {
            return Err(primary);
        }
        sleigh = retry;
    }
    build_engine_and_init(&mut sleigh, db)?;
    Ok(sleigh)
}

fn default_code_space(sleigh: &SleighArchitecture) -> UnlaceResult<Rc<AddrSpace>> {
    sleigh
        .base()
        .unwrap()
        .manage()
        .get_default_code_space()
        .map(Rc::clone)
        .ok_or_else(|| UnlaceError::lowlevel("no default code space after init"))
}

/// The loader's read-only ranges as `(first, last_open)` pairs, gathered while
/// the loader is still in hand (`Architecture::fillinReadOnlyFromLoader`).
fn loader_readonly_ranges(
    loader: &dyn LoadImage,
    manager: &AddrSpaceManager,
) -> Vec<(Address, Address)> {
    let mut ranges = unlace_base::address::RangeList::new();
    loader.get_readonly(&mut ranges);
    ranges
        .iter()
        .map(|range| (range.get_first_addr(), range.get_last_addr_open(manager)))
        .collect()
}

/// Paint the whole-image ARM decode mode `isa` over `ranges`, record whether the
/// caller stated it explicitly, and hand back the paints for the `input_isa`
/// stash so the commit can replay them over any later context fact.
fn install_input_isa(
    arch: &mut Architecture,
    arch_id: &str,
    code_space: &Rc<AddrSpace>,
    ranges: &[(u64, u64)],
    isa: Option<ArmIsa>,
    explicit: bool,
) -> UnlaceResult<Vec<unlace_analysis::pass::ContextPaint>> {
    let paints = input_isa_paints_for_ranges(ranges, arch, arch_id, isa)?;
    arch.input_arm_isa_override = explicit;
    for paint in &paints {
        let begin = Address::new(Rc::clone(code_space), paint.addr);
        let end = paint
            .end
            .map(|end| Address::new(Rc::clone(code_space), end));
        arch.with_context_db_mut(|db| match end {
            Some(end) => db.set_variable_region(paint.var.as_bytes(), &begin, &end, paint.value),
            None => db.set_variable(paint.var.as_bytes(), &begin, paint.value),
        })?;
    }
    Ok(paints)
}

fn input_isa_stash(
    paints: Vec<unlace_analysis::pass::ContextPaint>,
) -> Vec<(&'static str, unlace_analysis::pass::AnalysisOutput)> {
    if paints.is_empty() {
        return Vec::new();
    }
    let mut explicit = unlace_analysis::pass::AnalysisOutput::default();
    explicit.context_paints = paints;
    vec![("input_isa", explicit)]
}

/// (unlace) A relocatable object's import slots: the GOT entry of each undefined
/// weak symbol of a MIPS object, which the run-time loader fills. No pass
/// reports them, so they are stashed under the PE/Mach-O import-binding pass's
/// id (`peimportcall`) and committed with its facts. A linked image's slots
/// belong to its own passes and their options.
fn object_import_slot_stash(
    relocatable: bool,
    slots: &[(u64, u64)],
) -> Option<(&'static str, unlace_analysis::pass::AnalysisOutput)> {
    (relocatable && !slots.is_empty()).then(|| {
        let mut output = unlace_analysis::pass::AnalysisOutput::default();
        output.externref = slots.to_vec();
        ("peimportcall", output)
    })
}

/// A program with nothing loaded beyond the engine: every stash empty, every
/// declaration absent. Each bootstrap fills in what its loader supplies.
fn empty_program(
    arch: SleighArchitecture,
    registry: IdRegistry,
    container: ProgramContainer,
    description: String,
) -> ConsoleProgram {
    ConsoleProgram {
        callwide: Default::default(),
        arch,
        registry,
        symbols: SymbolStream::default(),
        pending_synthetic_entries: Vec::new(),
        object_sections: Vec::new(),
        description,
        container,
        image_metadata: None,
        pending_analysis: Vec::new(),
        pending_entry_thumb: None,
        analysis_code_space: None,
        dwarf_locals: Vec::new(),
        libctypes_glibc: false,
        libctypes_refused: false,
        libctypes_streams: false,
        fid_databases: Vec::new(),
        rust_profile_request: None,
        rust_profile_apply: false,
        rust_profile_image_modified: false,
        rust_profile_report: None,
        analysis_image: None,
        object_view: None,
        arm_frames: None,
        loader_data_objects: Vec::new(),
        loader_data_exports: Vec::new(),
        loader_entry_names: BTreeMap::new(),
        mz_evidence: None,
        esprom_applied: None,
        flow_ends: None,
        data_name_aliases: HashMap::new(),
        declared_extents: BTreeMap::new(),
        function_bodies: BTreeMap::new(),
        declared_entries: BTreeSet::new(),
        declared_names: BTreeMap::new(),
        declared_bytes: BTreeMap::new(),
        declared_revision: 0,
        anonymous_entries: Vec::new(),
        anonymous_symbols: std::cell::OnceCell::new(),
        canonical_entries: std::cell::RefCell::new(None),
        entry_names: std::cell::RefCell::new(None),
        assertions: Vec::new(),
        assertion_outcomes: Vec::new(),
        pending_prototypes: BTreeMap::new(),
        pending_dex_prototypes: false,
        raw_address_units: None,
        import_slots: Default::default(),
        function_address_aliases: BTreeMap::new(),
        symbol_underscore_prefix: false,
        load_notes: Vec::new(),
        elf_functions: Default::default(),
        loader_aliases: BTreeMap::new(),
    }
}

/// C++ `symboltab->setPropertyRange(Varnode::readonly, *iter)` over the ranges
/// [`loader_readonly_ranges`] gathered. Loader markup, not a gated pass, so it
/// is applied eagerly at load.
fn apply_readonly_ranges(prog: &mut ConsoleProgram, ranges: &[(Address, Address)]) {
    for (first, last_open) in ranges {
        prog.arch_mut().symboltab.set_property_range(
            unlace_decomp::varnode::varnode_flags::readonly,
            first,
            last_open,
        );
    }
}

/// Bootstrap a headerless byte image at a caller-supplied target and base.
pub fn bootstrap_from_raw(
    path: &str,
    target: &str,
    base: u64,
    entries: &[u64],
    isa: Option<ArmIsa>,
    spec_roots: &[String],
) -> UnlaceResult<ConsoleProgram> {
    Bootstrap::new(spec_roots)
        .options(&LoadOptions::from_env_for_load())
        .target(target)
        .arm_isa(isa)
        .raw(path, base, entries)
}

/// Bootstrap a headerless image from separate runs of bytes, each `(address,
/// bytes, flags)` with [`section_flags`]: the image starts at the lowest run and
/// the space between two runs is not mapped. Addresses are byte addresses, so
/// this serves byte-addressed targets; `path` only names the image.
pub fn bootstrap_from_raw_segments(
    path: &str,
    target: &str,
    runs: Vec<(u64, Vec<u8>, u32)>,
    entries: &[u64],
    isa: Option<ArmIsa>,
    spec_roots: &[String],
) -> UnlaceResult<ConsoleProgram> {
    Bootstrap::new(spec_roots)
        .options(&LoadOptions::from_env_for_load())
        .target(target)
        .arm_isa(isa)
        .raw_segments(path, runs, entries)
}

/// A raw image built in memory: its bytes, and the ranges its container
/// names as `(offset, size, flags)` (none maps the bytes as one code range).
pub(crate) struct RawModule {
    pub(crate) bytes: Vec<u8>,
    pub(crate) sections: Vec<(u64, u64, u32)>,
}

/// Where [`bootstrap_raw_image`] takes the image's bytes from.
pub(crate) enum RawBytes {
    /// The file at the path, whole.
    File,
    /// One run built in memory, such as a relocated DOS load module.
    Whole(Vec<u8>),
    /// One run built in memory with the ranges its container names.
    Module(RawModule),
    /// Separate runs, such as a firmware image's segments.
    Segmented(unlace_sleigh::loadimage::RawLoadImage),
}

/// [`bootstrap_from_raw`] over the file, or over bytes built in memory.
pub(crate) fn bootstrap_raw_image(
    path: &str,
    target: &str,
    base: u64,
    entries: &[u64],
    isa: Option<ArmIsa>,
    languages: &(impl Languages + ?Sized),
    bytes: RawBytes,
) -> UnlaceResult<ConsoleProgram> {
    if target.trim().is_empty() {
        return Err(UnlaceError::lowlevel(
            "raw image input requires --target <SLEIGH-language-id>",
        ));
    }

    let registry = build_registry();
    let capability = RawBinaryArchitectureCapability::new();
    let mut raw = capability.build_architecture(path, target);
    let mut db = languages.database();
    let baseid = raw.resolve_language_id()?;
    load_language(&mut db, &baseid, &registry)?;
    raw.sleigh_mut().select_language(&db, &baseid)?;
    if raw.sleigh().language_index() < 0 {
        return Err(UnlaceError::lowlevel(format!(
            "No sleigh specification for architecture {target}"
        )));
    }
    build_engine_and_init(raw.sleigh_mut(), db)?;

    let code_space = default_code_space(raw.sleigh())?;
    let word_size = u64::from(code_space.get_word_size());
    let address_to_byte = |value: u64, label: &str| {
        value.checked_mul(word_size).ok_or_else(|| {
            UnlaceError::lowlevel(format!(
                "raw {label} 0x{value:x} overflows the target's {word_size}-byte code-space units"
            ))
        })
    };
    let base_bytes = address_to_byte(base, "base")?;
    let mapped_bytes = match &bytes {
        RawBytes::Whole(bytes) => Some(bytes.clone()),
        RawBytes::Module(module) => Some(module.bytes.clone()),
        RawBytes::File | RawBytes::Segmented(_) => None,
    };
    match bytes {
        RawBytes::Whole(bytes) => {
            raw.build_loader_from_bytes(Rc::clone(&code_space), base, bytes, Vec::new())
        }
        RawBytes::Module(module) => {
            raw.build_loader_from_bytes(Rc::clone(&code_space), base, module.bytes, module.sections)
        }
        RawBytes::Segmented(image) => {
            raw.build_loader_from_image(Rc::clone(&code_space), base, image)
        }
        RawBytes::File => raw.build_loader_at(Rc::clone(&code_space), base)?,
    }
    let loader = raw
        .loader()
        .ok_or_else(|| UnlaceError::lowlevel("raw loader vanished after open"))?;
    let image_base = loader.vma();
    if image_base != base_bytes {
        return Err(UnlaceError::lowlevel(
            "raw loader and code-space base conversion disagree",
        ));
    }
    let image_size = loader.file_size();
    if image_size == 0 {
        return Err(UnlaceError::lowlevel("raw image is empty"));
    }
    let image_end = image_base
        .checked_add(image_size)
        .ok_or_else(|| UnlaceError::lowlevel("raw image base plus file size overflows"))?;
    let display_image_base = code_offset_in_target_units(image_base, word_size);
    let display_image_end = code_end_in_target_units(image_end, word_size);
    if image_end - 1 > code_space.get_highest() {
        return Err(UnlaceError::lowlevel(format!(
            "raw image range 0x{display_image_base:x}..0x{display_image_end:x} exceeds the target address space"
        )));
    }

    let arch_id = raw.sleigh().arch_id().to_string();
    let arm32 = is_arm32_language(&arch_id);
    if arm32 && isa.is_none() {
        return Err(UnlaceError::lowlevel(
            "raw ARM32 input requires --isa arm or --isa thumb",
        ));
    }
    let mut normalized_entries = Vec::new();
    for &entry in entries {
        let entry_units = if arm32 { entry & !1 } else { entry };
        let normalized = address_to_byte(entry_units, "entry")?;
        if normalized < image_base || normalized >= image_end {
            return Err(UnlaceError::lowlevel(format!(
                "raw entry 0x{entry:x} is outside mapped range 0x{display_image_base:x}..0x{display_image_end:x}"
            )));
        }
        if !normalized_entries.contains(&normalized) {
            normalized_entries.push(normalized);
        }
    }

    let ranges = [(image_base, image_size)];
    let input_context_paints = install_input_isa(
        raw.sleigh_mut().base_mut().unwrap(),
        &arch_id,
        &code_space,
        &ranges,
        isa,
        isa.is_some(),
    )?;
    if let Some(cs) = unlace_analysis::loader::realmodecs::raw_image_cs(image_base, image_size) {
        unlace_analysis::loader::realmodecs::paint(
            raw.sleigh().base().unwrap(),
            &code_space,
            &[(image_base, cs)],
        );
    }

    let pending_synthetic_entries = normalized_entries
        .into_iter()
        .map(|entry| Address::new(Rc::clone(&code_space), entry))
        .collect();
    let description = raw.sleigh().base().unwrap().get_description().to_string();
    let image = raw
        .take_loader()
        .ok_or_else(|| UnlaceError::lowlevel("raw loader vanished after validation"))?;
    raw.sleigh_mut()
        .base_mut()
        .unwrap()
        .set_loader(Box::new(image));

    let mut prog = empty_program(
        raw.into_sleigh(),
        registry,
        ProgramContainer::Raw,
        description,
    );
    prog.pending_synthetic_entries = pending_synthetic_entries;
    prog.pending_analysis = input_isa_stash(input_context_paints);
    if let Some(blocks) = unlace_analysis::cortexmscs::layout(&arch_id) {
        let scs = unlace_analysis::pass::AnalysisOutput {
            cortexm_scs: Some(blocks),
            ..Default::default()
        };
        prog.pending_analysis
            .push((unlace_analysis::cortexmscs::ID, scs));
    }
    if unlace_analysis::loader::cortexmdevice::is_m_profile(&arch_id, None) {
        unlace_analysis::loader::cortexmdevice::paint_volatile(
            prog.arch_mut(),
            &code_space,
            &[(image_base, image_size, 0)],
        );
    }
    prog.analysis_code_space = Some(code_space);
    prog.raw_address_units = Some((word_size, arm32));
    if word_size == 1 {
        let entry = prog
            .pending_synthetic_entries
            .first()
            .map_or(image_base, Address::get_offset);
        let language = prog.arch.arch_id().to_string();
        let view = mapped_bytes
            .or_else(|| std::fs::read(path).ok())
            .and_then(|bytes| {
                unlace_analysis::loader::objectview::raw_as_elf(
                    &bytes, image_base, entry, &language,
                )
            });
        prog.set_object_view(path, view);
    }
    Ok(prog)
}

/// Bootstrap a real image on disk — a UEFI TE or an object-format binary —
/// choosing the loader by the file's own bytes. The one dispatcher the CLI,
/// the browser front-end, and the console share, so a container one of them
/// accepts is accepted by all. The XML corpus format is the console's alone
/// ([`bootstrap_from_file`]); a headerless image needs [`bootstrap_from_raw`]'s
/// explicit target and base.
pub fn bootstrap_from_image_with_isa(
    path: &str,
    target: &str,
    spec_roots: &[String],
    isa: Option<ArmIsa>,
) -> UnlaceResult<ConsoleProgram> {
    Bootstrap::new(spec_roots)
        .options(&LoadOptions::from_env_for_load())
        .target(target)
        .arm_isa(isa)
        .image(path)
}

/// The image dispatch behind every image bootstrap; `from_env` as in
/// [`bootstrap_object`].
pub(crate) fn bootstrap_image(
    path: &str,
    target: &str,
    languages: &(impl Languages + ?Sized),
    isa: Option<ArmIsa>,
    options: &LoadOptions,
    from_env: bool,
) -> UnlaceResult<ConsoleProgram> {
    if file_is_te_image(path) {
        let _load = enter_load(options, from_env);
        bootstrap_te(path, target, languages, isa)
    } else if let Some(bytes) = retroimage::file_retro_image(path) {
        let _load = enter_load(options, from_env);
        bootstrap_retro_bytes(path, &bytes, target, languages, isa)
    } else if file_is_dex(path) {
        let bytes = std::fs::read(path).map_err(|error| {
            UnlaceError::lowlevel(format!("Unable to open DEX file: {path}: {error}"))
        })?;
        let _load = enter_load(options, from_env);
        bootstrap_dex_bytes(path, bytes, target, languages)
    } else if let Some(bytes) = file_class_image(path) {
        let _load = enter_load(options, from_env);
        bootstrap_class_bytes(path, bytes, target, languages)
    } else if let Some(bytes) = file_mz_dos_image(path) {
        let _load = enter_load(options, from_env);
        bootstrap_mz_bytes(path, &bytes, target, languages, isa)
    } else if let Some(image) = crate::esprom::file_esp_image(path) {
        let _load = enter_load(options, from_env);
        bootstrap_esp_image(path, &image, target, languages, isa)
    } else if let Some(image) = {
        let _load = enter_load(options, from_env);
        file_cil_image(path, target)
    } {
        let _load = enter_load(options, from_env);
        bootstrap_cil(path, image, languages)
    } else if let Some(bytes) = file_wasm_module(path) {
        let _load = enter_load(options, from_env);
        bootstrap_wasm_bytes(path, &bytes, target, languages)
    } else {
        bootstrap_object(path, target, languages, isa, options, from_env)
    }
}

/// Put a load's options in force on this thread: `options` for an
/// explicit-options load, the live environment for an entry point that takes
/// none (`options` is then [`LoadOptions::from_env`], read for the bootstrap's
/// own decisions). The program built under the scope keeps that choice.
fn enter_load(options: &LoadOptions, from_env: bool) -> unlace_decomp::loadoptions::LoadScope {
    if from_env {
        unlace_decomp::loadoptions::enter_environment()
    } else {
        options.enter()
    }
}

/// The file's bytes when it is a plain DOS `MZ` executable. A PE is turned
/// away on its `e_lfanew` signature before the whole file is read.
fn file_mz_dos_image(path: &str) -> Option<Vec<u8>> {
    use std::io::{Read, Seek, SeekFrom};
    let mut file = std::fs::File::open(path).ok()?;
    let mut head = [0u8; 0x40];
    let got = file.read(&mut head).ok()?;
    if got < 2 || !matches!(&head[..2], b"MZ" | b"ZM") {
        return None;
    }
    if got == head.len() {
        let lfanew = u32::from_le_bytes([head[0x3c], head[0x3d], head[0x3e], head[0x3f]]);
        let mut sig = [0u8; 4];
        let is_pe = file.seek(SeekFrom::Start(u64::from(lfanew))).is_ok()
            && file.read_exact(&mut sig).is_ok()
            && &sig == b"PE\0\0";
        if is_pe {
            return None;
        }
    }
    let bytes = std::fs::read(path).ok()?;
    is_mz_dos_image(&bytes).then_some(bytes)
}

/// The file's bytes when it opens with the WebAssembly preamble.
fn file_wasm_module(path: &str) -> Option<Vec<u8>> {
    use std::io::Read;
    let mut head = [0u8; 8];
    std::fs::File::open(path).ok()?.read_exact(&mut head).ok()?;
    if !is_wasm_module(&head) {
        return None;
    }
    std::fs::read(path).ok()
}

/// Bootstrap a WebAssembly module from bytes already read from `path`.
pub fn bootstrap_from_wasm_bytes(
    path: &str,
    bytes: &[u8],
    target: &str,
    spec_roots: &[String],
) -> UnlaceResult<ConsoleProgram> {
    Bootstrap::new(spec_roots)
        .options(&LoadOptions::from_env_for_load())
        .target(target)
        .wasm_bytes(path, bytes)
}

/// The wasm bootstrap: the module's linear memory, lowered code, globals and
/// tables are one flat image (`unlace_analysis::loadimage_wasm`), decoded as the
/// one language that reads the lowered records. Named functions come from the
/// loader's symbol stream; the unnamed ones are named at `read symbols`.
pub(crate) fn bootstrap_wasm_bytes(
    path: &str,
    bytes: &[u8],
    target: &str,
    languages: &(impl Languages + ?Sized),
) -> UnlaceResult<ConsoleProgram> {
    let target = unlace_analysis::loadimage_object::explicit_language_target(target).unwrap_or("");
    if !target.is_empty() && target != WASM_LANGUAGE {
        return Err(UnlaceError::lowlevel(format!(
            "a WebAssembly module decodes only as {WASM_LANGUAGE}, not {target}"
        )));
    }
    let image = WasmImage::parse(bytes)
        .map_err(|error| UnlaceError::lowlevel(format!("WebAssembly module: {error}")))?;
    if let Some((index, reason)) = image.refused.first() {
        unlace_base::notes::say_once(
            path,
            &format!(
                "[unlace wasm] {path}: {} of {} function bodies were not lowered and decompile to an unsupported() call; the first is function {index}, which {reason}",
                image.refused.len(),
                image
                    .functions
                    .iter()
                    .filter(|function| !function.imported)
                    .count(),
            ),
        );
    }
    if image.unplaced_segments > 0 {
        unlace_base::notes::say_once(
            path,
            &format!(
                "[unlace wasm] {path}: {} data or element segment(s) have an offset that is not a constant inside the memory or table, and were not placed",
                image.unplaced_segments
            ),
        );
    }
    let registry = build_registry();
    let mut loader = WasmLoadImage::new(path, image);
    let mut sleigh = build_sleigh_for_loader(path, "", languages, &registry, WASM_LANGUAGE, None)?;
    let code_space = default_code_space(&sleigh)?;
    loader.attach_to_space(Rc::clone(&code_space));
    let readonly_ranges = loader_readonly_ranges(&loader, sleigh.base().unwrap().manage());
    let litpool_const =
        unlace_decomp::litpoolconst::code_const_ranges(&LoadImage::get_segments(&loader), &[]);

    let mut symbols = read_loader_symbols_generic(&loader);
    let image = loader.image();
    let imports: BTreeSet<u64> = image
        .functions
        .iter()
        .filter(|function| function.imported)
        .map(|function| function.addr)
        .collect();
    for symbol in &mut symbols {
        if imports.contains(&symbol.addr.get_offset()) {
            symbol.provenance = EntryProvenance::UndefinedExternal;
        }
    }
    let unnamed = image
        .functions
        .iter()
        .filter(|function| function.name.is_none() && !function.imported)
        .map(|function| Address::new(Rc::clone(&code_space), function.addr))
        .collect();
    let loader_data_objects = image.globals.clone();
    let mut facts = unlace_analysis::pass::AnalysisOutput::default();
    facts.prototypes_at = image.prototypes(sleigh.base().unwrap());
    facts.typed_data = image.table_types(sleigh.base().unwrap());
    let image_metadata = ProgramImageMetadata {
        entry: image.entry,
        sections: loader.section_metadata(),
    };
    sleigh.base_mut().unwrap().set_loader(Box::new(loader));

    let description = sleigh.base().unwrap().get_description().to_string();
    let mut program = empty_program(sleigh, registry, ProgramContainer::Wasm, description);
    program.symbols = SymbolStream::from_loader(symbols);
    program.pending_synthetic_entries = unnamed;
    program.image_metadata = Some(image_metadata);
    program.analysis_code_space = Some(code_space);
    program.loader_data_objects = loader_data_objects;
    program.pending_analysis = vec![("wasm", facts)];
    program.read_loader_symbols()?;
    apply_readonly_ranges(&mut program, &readonly_ranges);
    program.arch_mut().litpool_const = Rc::new(litpool_const);
    Ok(program)
}

/// The file as a managed .NET assembly with at least one method body, unless
/// the caller names a target language for its native view. The file is read
/// whole only when its headers name a CLI header.
fn file_cil_image(path: &str, target: &str) -> Option<CilImage> {
    use std::io::Read;
    if !unlace_decomp::cil::cil_enabled()
        || unlace_analysis::loadimage_object::explicit_language_target(target).is_some()
    {
        return None;
    }
    let mut file = std::fs::File::open(path).ok()?;
    let mut head = [0u8; CLI_PROBE_LEN];
    let mut got = 0;
    while got < head.len() {
        match file.read(&mut head[got..]).ok()? {
            0 => break,
            n => got += n,
        }
    }
    if has_cli_header(&head[..got]) == Some(false) {
        return None;
    }
    cil_image(&std::fs::read(path).ok()?)
}

/// `bytes` as a managed .NET assembly with at least one method body.
fn cil_image(bytes: &[u8]) -> Option<CilImage> {
    if !unlace_decomp::cil::cil_enabled() || !is_cil_image(bytes) {
        return None;
    }
    CilImage::parse(bytes)
        .ok()
        .filter(|image| !image.methods.is_empty())
}

/// Bootstrap a managed .NET assembly as CIL: the PE mapped by RVA, one
/// function per method body, and the names, prototypes and decode context
/// the metadata gives them.
pub(crate) fn bootstrap_cil(
    path: &str,
    mut image: CilImage,
    languages: &(impl Languages + ?Sized),
) -> UnlaceResult<ConsoleProgram> {
    let entries: Vec<u64> = image.methods.iter().map(|method| method.addr).collect();
    let bytes = std::mem::take(&mut image.image);
    let mut program = bootstrap_raw_image(
        path,
        CIL_LANGUAGE,
        CIL_BASE,
        &entries,
        None,
        languages,
        RawBytes::Whole(bytes),
    )?;
    program.container = ProgramContainer::Cil;
    program.pending_synthetic_entries.clear();
    program.flow_ends = Some(
        image
            .methods
            .iter()
            .map(|method| (method.addr, method.end))
            .collect(),
    );
    if let Some(space) = program.analysis_code_space.clone() {
        let handle = program.arch().translate().loader_rc();
        let mut loader = handle.borrow_mut();
        let raw = std::mem::replace(&mut *loader, Box::new(NullLoad));
        *loader = Box::new(CilLoadImage::new(
            raw,
            space,
            std::mem::take(&mut image.sections),
        ));
    }
    let facts = image.facts(program.arch());
    program.pending_analysis.push(("cil", facts));
    program.image_metadata = Some(ProgramImageMetadata {
        entry: image.entry,
        sections: Vec::new(),
    });
    Ok(program)
}

const MZ_RAW_IMAGE_HINT: &str = "to map the whole file as-is, use --raw-image --target \"x86:LE:16:Real Mode:default\" --base <address> and at least one --entry/--addr <address>";

/// Bootstrap an MS-DOS `MZ` executable as x86 real-mode code: its load module,
/// relocated at segment 0x1000, is the one mapped range, and its `CS:IP` the
/// seed entry that raw-image discovery widens from. An explicit target picks
/// another language.
pub fn bootstrap_from_mz_bytes(
    path: &str,
    bytes: &[u8],
    target: &str,
    spec_roots: &[String],
    isa: Option<ArmIsa>,
) -> UnlaceResult<ConsoleProgram> {
    Bootstrap::new(spec_roots)
        .options(&LoadOptions::from_env_for_load())
        .target(target)
        .arm_isa(isa)
        .mz_bytes(path, bytes)
}

pub(crate) fn bootstrap_mz_bytes(
    path: &str,
    bytes: &[u8],
    target: &str,
    languages: &(impl Languages + ?Sized),
    isa: Option<ArmIsa>,
) -> UnlaceResult<ConsoleProgram> {
    let image = MzImage::parse(bytes).map_err(|error| {
        UnlaceError::lowlevel(format!("{}; {MZ_RAW_IMAGE_HINT}", error.explain()))
    })?;
    if let Some(packer) = image.packer {
        let unpack = match packer {
            "PKLITE" => "run `unlace unpack`",
            _ => "for example with `deark -m lzexe`",
        };
        unlace_base::notes::say_once(
            path,
            &format!(
                "[unlace mz] {path}: {packer}-compressed; its code is the decompressor stub and \
                 a packed body, so unpack it first ({unpack})"
            ),
        );
    }
    if image.skipped_relocations > 0 {
        unlace_base::notes::say_once(
            path,
            &format!(
                "[unlace mz] {path}: {} relocation(s) name a word outside the load module and were not applied",
                image.skipped_relocations
            ),
        );
    }
    let target =
        unlace_analysis::loadimage_object::explicit_language_target(target).unwrap_or(MZ_LANGUAGE);
    let entry = image.entry;
    let evidence = unlace_analysis::listing::mzsweep::MzEvidence::new(
        image.base,
        image.module.clone(),
        image.relocated_words.clone(),
    );
    let fpu_emu_evidence = unlace_decomp::fpuemu::emulator_evidence(&image.module);
    let mut program = bootstrap_raw_image(
        path,
        target,
        image.base,
        &[entry],
        isa,
        languages,
        RawBytes::Whole(image.module.clone()),
    )?;
    if let Some(space) = program.analysis_code_space.clone() {
        unlace_analysis::loader::realmodecs::paint(program.arch(), &space, &image.code_segments);
        if target.starts_with("x86:LE:16:Real Mode") {
            let arch = program.arch();
            let startup = unlace_analysis::loader::mzdgroup::startup_ds(
                arch,
                arch.translate(),
                &space,
                &image,
            );
            *program
                .arch_mut()
                .unlace_tables
                .get_mut::<unlace_decomp::mzdgroup::ImageDgroup>() =
                startup.map(|startup| unlace_decomp::mzdgroup::MzDataSegment {
                    ds: startup.ds,
                    start: image.base,
                    end: image.base + image.module.len() as u64,
                    entry,
                    others: startup.others,
                });
            unlace_decomp::mzdgroup::apply(program.arch());
        }
    }
    program.arch_mut().fpu_emu_evidence = fpu_emu_evidence;
    unlace_decomp::fpuemu::apply(program.arch());
    program.image_metadata = Some(ProgramImageMetadata {
        entry: Some(entry),
        sections: Vec::new(),
    });
    program.mz_evidence = Some(evidence);
    let mapped = program.sections();
    if let Some(space) = program.analysis_code_space.clone() {
        unlace_analysis::loader::pcmemory::paint_volatile(program.arch_mut(), &space, &mapped);
    }
    Ok(program)
}

/// [`bootstrap_from_image_with_isa`] with the ARM decode mode read from the
/// `UNLACE_ARM_ISA` environment bridge, as [`bootstrap_from_object`] reads it.
pub fn bootstrap_from_image(
    path: &str,
    target: &str,
    spec_roots: &[String],
) -> UnlaceResult<ConsoleProgram> {
    Bootstrap::new(spec_roots)
        .target(target)
        .options(&LoadOptions::from_env_for_load())
        .image(path)
}

/// Whether the file at `path` opens as a UEFI TE, reading only the bytes the
/// format probe needs. An unreadable file is not a TE; the loader that then
/// opens it reports why.
fn file_is_te_image(path: &str) -> bool {
    std::fs::File::open(path)
        .and_then(|mut file| reader_is_te_image(&mut file))
        .unwrap_or(false)
}

fn reader_is_te_image(reader: &mut impl std::io::Read) -> std::io::Result<bool> {
    let mut prefix = [0u8; TE_PROBE_LEN];
    match reader.read_exact(&mut prefix) {
        Ok(()) => Ok(is_te_image(&prefix)),
        Err(error) if error.kind() == std::io::ErrorKind::UnexpectedEof => Ok(false),
        Err(error) => Err(error),
    }
}

/// (unlace `jvmmodel`) The bytes of a Java class file or JAR at `path`.
fn file_class_image(path: &str) -> Option<Vec<u8>> {
    use std::io::Read;
    let mut prefix = [0u8; 10];
    std::fs::File::open(path)
        .ok()?
        .read_exact(&mut prefix)
        .ok()?;
    if !unlace_decomp::jvm::is_class(&prefix) && !prefix.starts_with(b"PK\x03\x04") {
        return None;
    }
    let bytes = std::fs::read(path).ok()?;
    unlace_analysis::loadimage_class::is_class_image(&bytes).then_some(bytes)
}

fn file_is_dex(path: &str) -> bool {
    use std::io::Read;
    let mut prefix = [0u8; 0x70];
    let Ok(mut file) = std::fs::File::open(path) else {
        return false;
    };
    if file.read_exact(&mut prefix).is_err() {
        return false;
    }
    use unlace_analysis::loadimage_dex::{is_apk, is_dex, is_oat, is_odex, is_vdex};
    is_dex(&prefix)
        || is_odex(&prefix)
        || is_vdex(&prefix)
        || (prefix.starts_with(b"PK\x03\x04")
            && std::fs::read(path).is_ok_and(|bytes| is_apk(&bytes)))
        || (prefix.starts_with(b"\x7fELF") && std::fs::read(path).is_ok_and(|bytes| is_oat(&bytes)))
}

/// (unlace `dexmodel`) Bootstrap a DEX file, or an APK's `classes*.dex` files:
/// each mapped read-only for the Dalvik spec, one function per method with
/// code, and a [`unlace_decomp::dex::DexModel`] per file that the engine
/// asks for constant-pool records and register payloads. The method
/// prototypes are locked at the analysis commit, after the `option` lines.
pub fn bootstrap_from_dex_bytes(
    path: &str,
    bytes: Vec<u8>,
    target: &str,
    spec_roots: &[String],
) -> UnlaceResult<ConsoleProgram> {
    Bootstrap::new(spec_roots)
        .options(&LoadOptions::from_env_for_load())
        .target(target)
        .dex_bytes(path, bytes)
}

pub(crate) fn bootstrap_dex_bytes(
    path: &str,
    bytes: Vec<u8>,
    target: &str,
    languages: &(impl Languages + ?Sized),
) -> UnlaceResult<ConsoleProgram> {
    let target = unlace_analysis::loadimage_object::explicit_language_target(target).unwrap_or("");
    let registry = build_registry();
    let language = unlace_analysis::loadimage_dex::dex_language(&bytes);
    let models = unlace_analysis::loadimage_dex::load_dex_models(bytes)?;
    let mut loader = unlace_analysis::loadimage_dex::DexLoadImage::new(path, models.clone())
        .with_language(language);
    let mut sleigh = build_sleigh_for_loader(path, target, languages, &registry, language, None)?;
    let code_space = default_code_space(&sleigh)?;
    loader.attach_to_space(Rc::clone(&code_space));
    let readonly_ranges = loader_readonly_ranges(&loader, sleigh.base().unwrap().manage());
    let symbols = models
        .iter()
        .flat_map(|model| model.functions())
        .map(|function| ProgramSymbol {
            ordinal: 0,
            name: function.name,
            addr: Address::new(Rc::clone(&code_space), function.addr),
            object_location: None,
            binding: None,
            provenance: EntryProvenance::Mapped,
        })
        .collect();
    let arch = sleigh.base_mut().unwrap();
    arch.set_loader(Box::new(loader));
    arch.dex = models;
    // The file is immutable at run time, so a switch payload's key and size
    // fold to the constants a jump-table model needs.
    arch.readonlypropagate = true;
    let description = arch.get_description().to_string();
    let mut program = empty_program(sleigh, registry, ProgramContainer::Dex, description);
    program.symbols = SymbolStream::from_loader(symbols);
    apply_readonly_ranges(&mut program, &readonly_ranges);
    program.read_loader_symbols()?;
    program.pending_dex_prototypes = true;
    Ok(program)
}

/// (unlace `jvmmodel`) Bootstrap a Java class file, or a JAR's `.class` members:
/// each method's code mapped read-only for the JVM spec, one function per
/// method with code, and a [`unlace_decomp::jvm::JvmModel`] per class that
/// the engine asks for constant-pool records and payloads. The method
/// prototypes are locked at the analysis commit, after the `option` lines.
pub(crate) fn bootstrap_class_bytes(
    path: &str,
    bytes: Vec<u8>,
    target: &str,
    languages: &(impl Languages + ?Sized),
) -> UnlaceResult<ConsoleProgram> {
    let target = unlace_analysis::loadimage_object::explicit_language_target(target).unwrap_or("");
    let registry = build_registry();
    let language = unlace_analysis::loadimage_class::JVM_LANGUAGE;
    let models = unlace_analysis::loadimage_class::load_class_models(bytes)?;
    let mut loader = unlace_analysis::loadimage_class::ClassLoadImage::new(path, models.clone());
    let mut sleigh = build_sleigh_for_loader(path, target, languages, &registry, language, None)?;
    let code_space = default_code_space(&sleigh)?;
    loader.attach_to_space(Rc::clone(&code_space));
    let readonly_ranges = loader_readonly_ranges(&loader, sleigh.base().unwrap().manage());
    let symbols = models
        .iter()
        .flat_map(|model| model.methods.iter())
        .map(|method| ProgramSymbol {
            ordinal: 0,
            name: method.name.clone(),
            addr: Address::new(Rc::clone(&code_space), method.addr),
            object_location: None,
            binding: None,
            provenance: EntryProvenance::Mapped,
        })
        .collect();
    let arch = sleigh.base_mut().unwrap();
    arch.set_loader(Box::new(loader));
    // Ghidra's JavaLoader paints the `alignmentPad` of every code byte; only a
    // `tableswitch`/`lookupswitch` reads it.
    for model in &models {
        for (at, pad) in model.switch_paddings() {
            let (begin, end) = (
                Address::new(Rc::clone(&code_space), at),
                Address::new(Rc::clone(&code_space), at + 1),
            );
            let _ = arch.with_context_db_mut(|db| {
                db.set_variable_region(b"alignmentPad", &begin, &end, pad as u32)
            });
        }
    }
    arch.jvm = models;
    arch.readonlypropagate = true;
    let description = arch.get_description().to_string();
    let mut program = empty_program(sleigh, registry, ProgramContainer::Dex, description);
    program.symbols = SymbolStream::from_loader(symbols);
    apply_readonly_ranges(&mut program, &readonly_ranges);
    program.read_loader_symbols()?;
    program.pending_dex_prototypes = true;
    Ok(program)
}

/// Bootstrap an Espressif application image: its segments are the mapped
/// ranges, each with the properties of the memory region it loads into, and
/// its header's entry the seed raw-image discovery widens from. The language
/// follows the chip's core unless `target` names one.
pub(crate) fn bootstrap_esp_image(
    path: &str,
    image: &unlace_analysis::loader::firmware::esp::EspImage,
    target: &str,
    languages: &(impl Languages + ?Sized),
    isa: Option<ArmIsa>,
) -> UnlaceResult<ConsoleProgram> {
    let target = unlace_analysis::loadimage_object::explicit_language_target(target)
        .unwrap_or(image.target());
    let (loader, base, metadata) = crate::esprom::raw_image(path, image)?;
    let mut program = bootstrap_raw_image(
        path,
        target,
        base,
        &[image.entry],
        isa,
        languages,
        RawBytes::Segmented(loader),
    )?;
    unlace_base::notes::say_once(path, &format!("[unlace esp] {path}: {}", image.describe()));
    let readonly = {
        let loader = program.arch().translate().loader_rc();
        let loader = loader.borrow();
        loader_readonly_ranges(&**loader, program.arch().manage())
    };
    apply_readonly_ranges(&mut program, &readonly);
    let litpool_const = unlace_decomp::litpoolconst::code_const_ranges(&program.sections(), &[]);
    program.arch_mut().litpool_const = Rc::new(litpool_const);
    *program
        .arch_mut()
        .unlace_tables
        .get_mut::<unlace_decomp::esprom::ImageChip>() = image.chip;
    program.image_metadata = Some(metadata);
    Ok(program)
}

/// Bootstrap a UEFI TE image without converting it to PE or ELF.
///
/// The TE loader owns section/file translation, the image base, and the sole
/// container entry point. An optional target can select the SLEIGH language,
/// but it cannot replace or rebase the container mappings. ARMNT supplies
/// automatic whole-image Thumb context; the mixed ARM machines arm the
/// `entrythumbflow` walk when the entry carries the Thumb bit; an explicit
/// `--isa` overrides both.
pub fn bootstrap_from_te(
    path: &str,
    target: &str,
    spec_roots: &[String],
    isa: Option<ArmIsa>,
) -> UnlaceResult<ConsoleProgram> {
    Bootstrap::new(spec_roots)
        .options(&LoadOptions::from_env_for_load())
        .target(target)
        .arm_isa(isa)
        .te(path)
}

pub(crate) fn bootstrap_te(
    path: &str,
    target: &str,
    languages: &(impl Languages + ?Sized),
    isa: Option<ArmIsa>,
) -> UnlaceResult<ConsoleProgram> {
    let bytes = std::fs::read(path).map_err(|error| {
        UnlaceError::lowlevel(format!("Unable to open TE image file: {path}: {error}"))
    })?;
    bootstrap_te_bytes(path, &bytes, target, languages, isa)
}

/// [`bootstrap_from_te`] over bytes a caller has already read.
pub fn bootstrap_from_te_bytes(
    path: &str,
    bytes: &[u8],
    target: &str,
    spec_roots: &[String],
    isa: Option<ArmIsa>,
) -> UnlaceResult<ConsoleProgram> {
    Bootstrap::new(spec_roots)
        .options(&LoadOptions::from_env_for_load())
        .target(target)
        .arm_isa(isa)
        .te_bytes(path, bytes)
}

pub(crate) fn bootstrap_te_bytes(
    path: &str,
    bytes: &[u8],
    target: &str,
    languages: &(impl Languages + ?Sized),
    isa: Option<ArmIsa>,
) -> UnlaceResult<ConsoleProgram> {
    let target = unlace_analysis::loadimage_object::explicit_language_target(target).unwrap_or("");
    let registry = build_registry();
    let mut loader = TeLoadImage::from_bytes_with_target(path, bytes, target)?;
    let arch_type = String::from_utf8_lossy(&loader.get_arch_type()).into_owned();
    let mut sleigh = build_sleigh_for_loader(
        path,
        target,
        languages,
        &registry,
        &arch_type,
        loader.fallback_arch_id(),
    )?;
    let code_space = default_code_space(&sleigh)?;
    loader.attach_to_space(Rc::clone(&code_space));
    let segments = loader.get_segments();
    for &(start, size, _) in &segments {
        let end = start
            .checked_add(size)
            .ok_or_else(|| UnlaceError::lowlevel("TE section load range overflows"))?;
        if end == 0 || end - 1 > code_space.get_highest() {
            return Err(UnlaceError::lowlevel(format!(
                "TE section range 0x{start:x}..0x{end:x} exceeds the target address space"
            )));
        }
    }

    let arch_id = sleigh.arch_id().to_string();
    let arm32_target = is_arm32_language(&arch_id);
    let machine_isa = (arm32_target && loader.whole_image_thumb()).then_some(ArmIsa::Thumb);
    let entry_thumb_only =
        isa.is_none() && machine_isa.is_none() && loader.entry_thumb_hint() && arm32_target;
    let code_ranges = |mappings: &[(u64, u64, u32)]| -> Vec<(u64, u64)> {
        mappings
            .iter()
            .filter_map(|&(addr, size, flags)| {
                (flags & section_flags::CODE != 0).then_some((addr, size))
            })
            .collect()
    };
    let executable_ranges = code_ranges(&segments);
    // Start with file-backed bytes; successful overlays add their executable
    // spans before the walk. Uninitialized tails would decode as Thumb no-ops.
    let walkable_ranges = code_ranges(&loader.file_backed_segments());
    let litpool_const =
        unlace_decomp::litpoolconst::code_const_ranges(&loader.file_backed_segments(), &[]);
    let readonly_ranges = loader_readonly_ranges(&loader, sleigh.base().unwrap().manage());
    let entry = loader.entry();
    let image_metadata = ProgramImageMetadata {
        entry: Some(entry),
        sections: loader.section_metadata(),
    };
    sleigh.base_mut().unwrap().set_loader(Box::new(loader));
    let input_context_paints = install_input_isa(
        sleigh.base_mut().unwrap(),
        &arch_id,
        &code_space,
        &executable_ranges,
        isa.or(machine_isa),
        isa.is_some(),
    )?;

    let description = sleigh.base().unwrap().get_description().to_string();
    let mut program = empty_program(sleigh, registry, ProgramContainer::Te, description);
    program.pending_synthetic_entries = vec![Address::new(Rc::clone(&code_space), entry)];
    program.image_metadata = Some(image_metadata);
    program.pending_analysis = input_isa_stash(input_context_paints);
    program.pending_entry_thumb = entry_thumb_only.then_some(PendingEntryThumb {
        executable_ranges: walkable_ranges,
        entry,
    });
    program.analysis_code_space = Some(code_space);
    program.set_object_view(path, unlace_analysis::loader::objectview::te_as_pe(bytes));
    apply_readonly_ranges(&mut program, &readonly_ranges);
    program.arch_mut().litpool_const = Rc::new(litpool_const);
    Ok(program)
}

/// Bootstrap a [`ConsoleProgram`] from a **real object-format** binary on disk
/// (the unlace analog of the C++ console's BFD path: `LoadImageBfd` +
/// `RawBinaryArchitecture`/the resolved arch).
///
/// Format-neutral by construction: it drives the `object`-crate
/// [`ObjectLoadImage`] (which funnels every format-specific decision through the
/// `ObjectFormat` boundary) in place of the XML loader, so it serves ELF, PE,
/// Mach-O and COFF uniformly. Open the object (parse
/// machine/segments/symbols), take the SLEIGH language id straight off the
/// loader's `getArchType()` (the `resolveArchitecture` loader branch — C++
/// `loader->getArchType()`), build the engine, attach the default code space to
/// the loader (the C++ `RawBinaryArchitecture::postSpecFile` /
/// `LoadImageBfd::attachToSpace` tail), read the function symbols, then hand the
/// loader to the engine.
///
/// `target` is an optional explicit language id (the `load file <target> <path>`
/// first token, C++ BFD target): empty or `default` requests automatic selection;
/// other values override the object-derived id (so an unmapped machine can still
/// be driven), exactly as the C++
/// `getTarget()` path takes precedence over the loader's arch type.
///
/// The load-time options are the environment's, read once at the load
/// ([`LoadOptions::from_env_for_load`]), the ARM decode mode among them.
pub fn bootstrap_from_object(
    path: &str,
    target: &str,
    spec_roots: &[String],
) -> UnlaceResult<ConsoleProgram> {
    let options = LoadOptions::from_env_for_load();
    Bootstrap::new(spec_roots)
        .target(target)
        .options(&options)
        .object(path)
}

/// The MIPS t9 entry probe: the PIC-setup seed for `entry`, truncated to the
/// `register_bytes`-wide t9. It reads the loader's live bytes on each call
/// rather than holding them, because `adjust_vma` must own them exclusively to
/// rebase the image; the loader is never mutably borrowed while a function
/// handle is built.
fn mips_t9_probe(
    image: Rc<std::cell::RefCell<Box<dyn unlace_sleigh::loadimage::LoadImage>>>,
    elf32: bool,
    little: bool,
    register_bytes: u32,
) -> Rc<dyn Fn(&Address) -> Option<u64>> {
    let mask = unlace_base::address::calc_mask(register_bytes as i32);
    Rc::new(move |entry| {
        let loader = image.try_borrow();
        debug_assert!(
            loader.is_ok(),
            "load image mutably borrowed while building a function handle"
        );
        let bytes = loader.ok()?.shared_bytes()?;
        Some(
            unlace_analysis::loader::mipsentry::value(&*bytes, entry.get_offset(), elf32, little)?
                & mask,
        )
    })
}

/// Explicit-input-context form of [`bootstrap_from_object`]: the ARM decode
/// mode comes from `isa`, the load-time options from the environment, read
/// once at the load ([`LoadOptions::from_env_for_load`]). [`Bootstrap`] takes
/// both explicitly.
pub fn bootstrap_from_object_with_isa(
    path: &str,
    target: &str,
    spec_roots: &[String],
    isa: Option<ArmIsa>,
) -> UnlaceResult<ConsoleProgram> {
    let options = LoadOptions::from_env_for_load();
    Bootstrap::new(spec_roots)
        .target(target)
        .arm_isa(isa)
        .options(&options)
        .object(path)
}

/// The object bootstrap. `from_env` is set by the entry points that take no
/// options: their load and the program it builds read the environment live, and
/// they publish the image's Go toolchain version in
/// [`GOVERSION_ENV`](unlace_decomp::goreg::GOVERSION_ENV) (cleared for a
/// non-Go image). An explicit-options load leaves the environment alone and
/// never reads it. The options are in force from the first byte read.
pub(crate) fn bootstrap_object(
    path: &str,
    target: &str,
    languages: &(impl Languages + ?Sized),
    isa: Option<ArmIsa>,
    options: &LoadOptions,
    from_env: bool,
) -> UnlaceResult<ConsoleProgram> {
    let _caller = enter_load(options, from_env);
    let target = unlace_analysis::loadimage_object::explicit_language_target(target).unwrap_or("");
    let registry = build_registry();

    let mut signed = None;
    let mapped = match unlace_analysis::image_bytes::ImageBytes::map_thin_macho(path)? {
        // A mapping whose header runs past the file takes the owned path, where
        // the clamp can rewrite it; so does a prelinked kernelcache, whose
        // pointers the `kernelcache` peel rebases in place.
        Some(bytes)
            if unlace_analysis::loader::machotolerance::runs_past_the_file(&bytes)
                || (unlace_decomp::kernelcache::KernelcacheChoice::in_force()
                    != unlace_decomp::kernelcache::KernelcacheChoice::Off
                    && unlace_analysis::loader::kernelcache::is_prelinked(&bytes)) =>
        {
            None
        }
        other => other,
    };
    let (bytes, load_notes) = match mapped {
        Some(bytes) => {
            let crypt_note = unlace_analysis::loader::machotolerance::encryption_note(&bytes);
            (bytes, crypt_note.into_iter().collect())
        }
        None => {
            // Read the image bytes once: reused for the loader AND the analysis-pass
            // object::File view (the analyzers need a parsed object the loader drops).
            let bytes =
                match unlace_analysis::loader::dyldcache::read_selected_image(Path::new(path)) {
                    Some(image) => {
                        image.map_err(|e| UnlaceError::lowlevel(format!("{path}: {e}")))?
                    }
                    None => std::fs::read(path).map_err(|e| {
                        UnlaceError::lowlevel(format!("Unable to open image file: {path}: {e}"))
                    })?,
                };
            // (unlace `kernelcache`) IMG4 / IM4P / LZFSE / complzss unwrapping and MH_FILESET
            // entry selection, ahead of every other normalization.
            let choice = unlace_decomp::kernelcache::KernelcacheChoice::in_force();
            let peeled =
                unlace_analysis::loader::kernelcache::peel_file(Path::new(path), bytes, &choice)
                    .map_err(UnlaceError::lowlevel)?;
            if let Some(note) = &peeled.note {
                unlace_base::notes::say_once(path, &format!("[unlace] {note}"));
            }
            let bytes = peeled.bytes;
            signed = peeled.signed;
            // (PR-8) Mach-O fat / universal (`0xcafebabe`) peel: `object::File::parse`
            // is a thin, single-arch view and cannot parse a fat header, so a universal
            // binary is reduced to ONE arch slice's bytes here — the single, canonical
            // slice-selection point (design §3.4). Everything downstream (the loader, the
            // analysis passes, the deferred-Listing stash) then sees the SAME thin slice,
            // exactly as for a thin Mach-O. The slice preference is `--slice` (env
            // `UNLACE_MACHO_SLICE`) or the `--target` stem, else x86-64 → arm64 → first.
            // Non-fat input is untouched (the peel returns the bytes verbatim).
            let bytes = select_macho_slice(bytes, options.macho_slice.as_deref(), target);
            // (unlace) ELF section-table tolerance: the second normalization at this same
            // canonical point. An ELF's section table is link-time metadata, but `object`
            // validates it eagerly, so one corrupt half-word rejected an image whose
            // program headers described every loadable byte -- and every unlace surface
            // exited 1 on a file `readelf -l` reads happily. Clearing the unusable table
            // here (and only here) means the loader AND the analysis passes below see the
            // same recovered view. A file with a usable section table is untouched.
            let (bytes, shdr_note) =
                unlace_analysis::loader::elf_shdr::tolerate_unusable_section_table(bytes);
            // (unlace) PE DOS-magic tolerance: an `e_magic` that is not `MZ` in front of an
            // `e_lfanew` that still reaches `PE\0\0` is rewritten in the loaded copy only,
            // before the data-directory clamp, which reads the headers behind it.
            let (bytes, dosmagic_note) =
                unlace_analysis::loader::pe_dosmagic::tolerate_corrupt_dos_magic(bytes);
            // (unlace) PE data-directory tolerance: the same normalization one format over.
            // A PE's `NumberOfRvaAndSizes` is declared separately from the room its own
            // optional header gives the directory array, and packers overwrite it; Windows
            // reads whatever fits, `object` insists on the declared count and rejects the
            // image before any code is mapped. Clamping here (and only here) keeps the
            // loader and the analysis passes on the same recovered view, and reads the
            // imports from the real table rather than fabricating one.
            let (bytes, datadir_note) =
                unlace_analysis::loader::pe_datadirs::tolerate_oversized_data_directories(bytes);
            let (bytes, clamp_note) =
                unlace_analysis::loader::machotolerance::clamp_out_of_file_ranges(bytes);
            let crypt_note = unlace_analysis::loader::machotolerance::encryption_note(&bytes);
            let load_notes: Vec<String> = [
                shdr_note,
                dosmagic_note,
                datadir_note,
                clamp_note,
                crypt_note,
            ]
            .into_iter()
            .flatten()
            .collect();
            (
                unlace_analysis::image_bytes::ImageBytes::from(bytes),
                load_notes,
            )
        }
    };
    for note in &load_notes {
        unlace_base::notes::say_once(path, &format!("[unlace] {note}"));
    }
    // (unlace goreg) The Go toolchain version is a BUILD-TIME fact: the goreg
    // shells are interned inside the cspec decode during the sleigh build
    // below, upstream of every per-image fact write, and their layouts drift
    // by release (go1.23's g.syscallbp, go1.25's dropped gobuf.ret), and a
    // release older than the register ABI takes the stack model. It travels
    // on the load options, which every gate below reads; this scope replaces the
    // caller's until the load returns.
    // An environment-reading load takes the version from the image alone: a
    // stale `UNLACE_GOVERSION` must not outlive a non-Go image.
    let mut options = options.clone();
    let stated = if from_env { None } else { options.go_version };
    options.go_version =
        unlace_analysis::loader::gobuildinfo::go_toolchain_version(&bytes).or(stated);
    let _load = enter_load(&options, from_env);
    let explicit_isa = isa.is_some();
    let import_proofs = unlace_analysis::loader::ImportProofScope::enter(&bytes);
    // LoadImageBfd(filename) + open(): parse the ELF (machine, segments, symbols).
    let mut loader = ObjectLoadImage::from_image_bytes_with_target(path, bytes.clone(), target)?;

    // resolveArchitecture: the arch id is the loader's getArchType() (the object
    // machine → SLEIGH language id), unless an explicit target overrides it;
    // buildSpecFile -> buildTranslator -> the Architecture::init tail follow.
    let arch_type = String::from_utf8_lossy(&loader.get_arch_type()).into_owned();
    let mut sleigh = build_sleigh_for_loader(
        path,
        target,
        languages,
        &registry,
        &arch_type,
        loader.fallback_arch_id(),
    )?;

    // (unlace) MIPS import-name recovery (Increment 27): the o32 ABI calls libc
    // imports indirectly through a GOT slot (`lw $t9, off($gp); jalr $t9`), with no
    // `.plt` code section and no `R_MIPS_JUMP_SLOT` relocations.  `elf_plt` names
    // each import's `.MIPS.stubs` stub and marks the GOT external slots constant
    // (`ObjectLoadImage::const_ranges` → `get_readonly`); turning on
    // `readonlypropagate` for MIPS lets `ActionVarnodeProps::fillinReadOnly` fold
    // the GOT load to the stub address so the call resolves to the import name
    // (`puts`/`printf`) instead of `sub_<addr>`.  Scoped to MIPS so non-MIPS
    // ELF output is unchanged; `option readonly off` restores the raw GOT load.
    // The XML datatest path never reaches `bootstrap_from_object`, so the parity
    // oracles are structurally untouched.
    if arch_type.starts_with("MIPS:") {
        sleigh.base_mut().unwrap().readonlypropagate = true;
    }

    // postSpecFile: attach the engine's default code space to the loader so its
    // loadFill/getNextSymbol build Addresses in the right space (C++
    // `RawBinaryArchitecture::postSpecFile`'s `attachToSpace(getDefaultCodeSpace())`).
    let code_space = default_code_space(&sleigh)?;
    loader.attach_to_space(Rc::clone(&code_space));

    // The container's ARM decode-mode evidence, read off the one policy table
    // both PE-family loaders share: a whole-image claim paints every code
    // section; an entry that only carries the Thumb bit arms the
    // `entrythumbflow` walk, exactly as a TE with that shape does.
    let arch_id = sleigh.arch_id().to_string();
    let parsed = is_arm32_language(&arch_id)
        .then(|| unlace_analysis::loadimage_object::parse_object(&*bytes).ok())
        .flatten();
    let mips_linkage = loader
        .mips_linkage()
        .filter(|_| arch_id.starts_with("MIPS:"))
        .cloned();
    let riscv_import_slots: Vec<u64> = if arch_id.starts_with("RISCV:") {
        loader
            .reloc_symbols()
            .iter()
            .filter(|sym| sym.undefined)
            .map(|sym| sym.vma)
            .collect()
    } else {
        Vec::new()
    };
    let isa = isa.or_else(|| {
        let file = parsed.as_ref()?;
        unlace_analysis::loadimage_object::arm_isa_hint(file, &bytes)
            .map(|thumb| if thumb { ArmIsa::Thumb } else { ArmIsa::Arm })
    });
    let entry_thumb_walk = isa
        .is_none()
        .then(|| {
            let file = parsed.as_ref()?;
            let entry = unlace_analysis::loadimage_object::arm_entry_thumb_hint(file, &bytes)?;
            Some(PendingEntryThumb {
                executable_ranges: loader.executable_ranges(),
                entry,
            })
        })
        .flatten();
    let m_profile = unlace_analysis::loader::cortexmdevice::is_m_profile(&arch_id, parsed.as_ref());
    drop(parsed);
    sleigh.base_mut().unwrap().mapped_flow_boundary_image =
        unlace_decomp::mappedflowboundary::eligible_elf(&bytes, &arch_id);
    let input_context_paints = install_input_isa(
        sleigh.base_mut().unwrap(),
        &arch_id,
        &code_space,
        &loader.executable_ranges(),
        isa,
        explicit_isa,
    )?;

    // Architecture::fillinReadOnlyFromLoader on the ELF path (the analog of the
    // XML path's collect-before-handoff above): gather the loader's read-only
    // ranges while the image is still in hand. Load-bearing for string rendering
    // (the printer's push_ptr_char_constant_ir gates a string literal on
    // is_read_only at the constant's address).
    let readonly_ranges = loader_readonly_ranges(&loader, sleigh.base().unwrap().manage());

    // Run the program-prep analysis passes (the unlace analyzer tier) over the
    // parsed object, keeping each pass's facts keyed by id. Read-only; the facts
    // are STASHED here and committed (gated) at `read symbols` — NOT eagerly —
    // so the per-pass `--option <id> on|off` flags (emitted by the CLI before
    // `read symbols`) are in effect when the commit runs (the deferred fix for
    // conflict #4, analysis-port-log.md). Bound to the real-ELF path ONLY — the
    // XML <binaryimage> bootstrap never runs these, so the datatest parity oracle
    // is structurally untouched.
    let mut pending_analysis = unlace_analysis::passes::run_default_analyses_per_pass(
        &bytes,
        &loader,
        sleigh.base().unwrap(),
        // The Listing/xref tier's decoder: the engine's `Translate` (the same
        // `Sleigh` the decompile drives), coerced to `&dyn Translate`. The
        // `.sla` is loaded and the loadimage attached (above), so a flag-gated
        // `Listing::build` can decode through it. Default-off ⇒ unused.
        sleigh.base().unwrap().translate(),
    );
    pending_analysis.extend(input_isa_stash(input_context_paints));
    // (unlace `arm64evcall`) A kernelcache entry's signed slots lost their signing
    // context when the collection was fixed up; its virtual calls are resolved
    // against the whole collection's slots instead.
    if let Some(signed) = &signed {
        if let Ok(file) = unlace_analysis::loadimage_object::parse_object(&bytes) {
            let vcall_sites = unlace_analysis::rtti::arm64evcall::resolve_signed(&file, signed);
            pending_analysis.retain(|(id, _)| *id != "arm64evcall");
            pending_analysis.push((
                "arm64evcall",
                unlace_analysis::pass::AnalysisOutput {
                    vcall_sites,
                    ..Default::default()
                },
            ));
        }
    }
    let mut nullable = std::collections::BTreeMap::<u64, Vec<_>>::new();
    for record in loader.nullable_relocations() {
        nullable
            .entry(record.field)
            .or_default()
            .push(record.clone());
    }
    let mut literals = std::collections::BTreeSet::new();
    for record in loader.nullable_relocations() {
        literals.extend((0..16).map(|byte| record.symbol.wrapping_add(byte)));
        if record.slot != 0 {
            literals.extend((0..record.pointer_size as u64).map(|byte| record.slot + byte));
        }
    }
    if !loader.reloc_sections().is_empty() {
        for &(lo, hi) in loader.import_slot_ranges() {
            literals.extend(lo..hi);
        }
        for &(slot, entry) in loader.function_address_aliases() {
            literals.extend((0..16).map(|byte| entry.wrapping_add(byte)));
            literals.extend((0..8).map(|byte| slot.wrapping_add(byte)));
        }
    }
    sleigh.base_mut().unwrap().nullable_literal_values = std::rc::Rc::new(literals);
    sleigh
        .base_mut()
        .unwrap()
        .unlace_states
        .set::<unlace_decomp::nullable_reloc::Relocations>(std::rc::Rc::new(nullable));
    pending_analysis.extend(object_import_slot_stash(
        !loader.reloc_sections().is_empty(),
        loader.import_slot_ranges(),
    ));

    // (unlace `dynrelocs`) The PT_GNU_RELRO-frozen dynamic-relocation slots, read
    // off the same loader while it is still in hand. `readonly_ranges` above
    // already covers them (the loader reports them through `get_readonly`), which
    // paints `Varnode::readonly`; this second list is what lets
    // `ActionVarnodeProps` FOLD those particular reads without the program-wide
    // `option readonly`. Empty for a non-ELF, an `ET_REL` object, or the gate off.
    let dynreloc_const: Vec<(u64, u64)> = loader.dynreloc_const_ranges().to_vec();

    // (unlace, RE-need `bulk-decompilation-decodes-pe`) The import pointer slots,
    // read off the same loader: `read_loader_symbols_generic` below installs a
    // FunctionSymbol at each of them for call naming, and the whole-binary
    // enumeration needs to know those addresses hold a pointer, not a body.
    let import_slots: Vec<(u64, u64)> = loader.import_slot_ranges().to_vec();
    let function_address_aliases = loader.function_address_aliases().to_vec();
    // (unlace `pltlocal`) The PLT stubs the image's own relocations bind to a
    // function it defines, so a call through one is built at the definition.
    let plt_local: Vec<(u64, u64)> = loader.plt_local_targets().to_vec();
    let elfv1_tocs = loader.elfv1_descriptors().entry_tocs();
    let image_elfv1_toc = !loader.elfv1_descriptors().0.is_empty();
    let elf_functions = loader.elf_function_provenance().clone();
    let loader_aliases = loader.func_symbol_aliases();

    // (unlace `litpoolconst`) The image's executable read-only regions, read off the
    // same loader: `r-x` memory cannot be written, so the literal-pool words the
    // instruction stream carries inside itself fold to their constants without the
    // program-wide `option readonly`. Sections when the image has a usable table,
    // the `PF_X` load segments when it does not.
    let litpool_const: Vec<(u64, u64)> = unlace_decomp::litpoolconst::code_const_ranges(
        &loader.section_snapshot(),
        &unlace_sleigh::loadimage::LoadImage::get_segments(&loader),
    );
    let globalref_ranges: Vec<(u64, u64)> = loader.data_object_ranges().to_vec();
    let cstring_ranges: Vec<(u64, u64)> = unlace_decomp::cstringconst::literal_sections(
        loader
            .section_metadata()
            .iter()
            .map(|s| (s.name.as_str(), s.kind.as_str(), s.vma, s.size)),
    );

    // (unlace `bejoin callers`) The exception-table sections, at the addresses
    // the loader maps them to (an object's synthetic layout, relocated), so
    // the caller evidence can read the landing pads off the image's bytes, and
    // the function symbols' sizes, which end each function's extent.
    let eh_sections: Vec<(String, u64, u64)> = loader
        .section_metadata()
        .iter()
        .filter(|s| unlace_decomp::bejoin::is_exception_table(&s.name))
        .map(|s| (s.name.clone(), s.vma, s.size))
        .collect();
    let func_sizes = loader.func_symbol_sizes();

    // readLoaderSymbols (the ELF FUNC symbols) BEFORE handing the loader off.
    let mut symbols = read_loader_symbols_generic(&loader);
    let object_sections: Vec<ObjectSectionLocation> = loader
        .reloc_sections()
        .iter()
        .map(|section| ObjectSectionLocation {
            index: section.index,
            name: section.name.clone(),
            vma: section.vma,
            size: section.size,
        })
        .collect();
    for symbol in &mut symbols {
        if let Some(info) = loader
            .reloc_symbols()
            .iter()
            .find(|info| info.vma == symbol.addr.get_offset())
        {
            symbol.object_location = match (
                info.section_index,
                info.section_name.as_ref(),
                info.section_offset,
            ) {
                (Some(section_index), Some(section), Some(offset)) => Some(ObjectLocation {
                    section_index,
                    section: section.clone(),
                    offset,
                }),
                _ => None,
            };
            symbol.binding = Some(info.binding.clone());
            symbol.provenance = if info.undefined {
                EntryProvenance::UndefinedExternal
            } else {
                EntryProvenance::DefinedObject
            };
        }
    }
    // The data half of the same symbol tables (`STT_OBJECT`), read here for the
    // same reason — the loader is about to be moved into the engine. Installed at
    // the analysis commit, after DWARF and the detected strings have claimed their
    // addresses. See `ConsoleProgram::loader_data_objects`.
    let loader_data_objects = loader.data_symbols();
    let loader_data_exports = loader.data_exports().to_vec();
    // The container entry and named section table, for the project README.
    let image_metadata = ProgramImageMetadata {
        entry: loader.image_entry(),
        sections: loader.section_metadata().to_vec(),
    };

    // (unlace `sourcelang`) Record the loader's source-language verdict on the
    // Architecture. Unlike the analyzer facts below this is not a pass output but
    // a one-value property of the image, and it has to reach the ENGINE (the
    // per-function rules in `unlace_rustabi` / `unlace_reloadarg`) rather than the
    // Listing, so it is written straight onto the arch here at load, upstream of
    // every `option` command (the `UNLACE_SOURCELANG` loadtime override is already
    // applied by `effective_compiler_bytes`; the later `option sourcelang` arm
    // layers the per-run force on top). The XML `<binaryimage>` bootstrap never
    // reaches this line, which is why `option rustabi auto` is inert on the
    // datatest corpus by construction.
    let compiler = unlace_analysis::sourcelang::effective_compiler_bytes(&bytes);
    sleigh.base_mut().unwrap().source_lang_detected = compiler.to_source_lang();
    let rust_image = compiler == unlace_analysis::sourcelang::Compiler::Rustc;
    sleigh.base_mut().unwrap().rustc_stable_version =
        unlace_analysis::sourcelang::stable_rustc_version(&bytes, rust_image);
    if let Some(layout) = unlace_analysis::sourcelang::fmt_pieces_layout(&bytes, rust_image) {
        sleigh.base_mut().unwrap().rustc_pieces_layout = true;
        sleigh.base_mut().unwrap().rust_fmt_pieces_relro = layout.relro;
    }
    if matches!(
        sleigh.base().unwrap().rustc_stable_version,
        Some((1, 93, 0 | 1))
    ) || sleigh.base().unwrap().rustc_pieces_layout
    {
        let metadata = unlace_analysis::sourcelang::formatter_metadata(&bytes);
        let formatters = metadata.integers;
        sleigh.base_mut().unwrap().rust_display_formatters = formatters
            .iter()
            .filter_map(|(&address, formatter)| {
                (formatter.kind == unlace_decomp::rustfmtflags::Trait::Display)
                    .then_some((address, formatter.primitive))
            })
            .collect();
        *sleigh
            .base_mut()
            .unwrap()
            .unlace_tables
            .get_mut::<unlace_decomp::rustfmtflags::IntegerFormatters>() = formatters;
        sleigh.base_mut().unwrap().rust_str_display_formatters = metadata.strings;
        *sleigh
            .base_mut()
            .unwrap()
            .unlace_tables
            .get_mut::<unlace_decomp::rustfmtwrite::WriterMethods>() = metadata.writers.methods;
        sleigh.base_mut().unwrap().rust_fmt_write_relro = metadata.writers.relro;
        *sleigh
            .base_mut()
            .unwrap()
            .unlace_tables
            .get_mut::<unlace_decomp::rustfmtio::WriterProfiles>() = metadata.io_writers;
    }
    // (unlace `pebnames`) The same kind of one-bit image fact: is this a Windows
    // GUI/console PE, whose segment base holds a user-mode TEB?  `option pebnames
    // auto` acts only when it is.
    sleigh.base_mut().unwrap().image_windows_user =
        unlace_analysis::loader::format::pe::is_windows_user_mode_image(&bytes);
    // (unlace `syscallregs`) And whether this is a program for an operating
    // system's user space, whose system calls return a result: `option
    // syscallregs auto` acts only when it is.
    sleigh.base_mut().unwrap().image_os_userland =
        unlace_analysis::loader::format::elf_userland::is_os_userland_image(&bytes);
    // (unlace `linuxsyscall`) And whether it is an ELF built for Linux: `option
    // linuxsyscall auto` names an x86 `int 0x80` only when it is.
    sleigh.base_mut().unwrap().image_linux_elf =
        unlace_analysis::loader::format::elf_userland::is_linux_image(&bytes);
    // (unlace `spsolve`) And whether it is an ELF at all: the stack-pointer solve
    // stands in for the analysis that records a callee's `ret n`, which an XML
    // `<binaryimage>` never had.
    sleigh.base_mut().unwrap().image_elf = matches!(
        object::FileKind::parse(&*bytes),
        Ok(object::FileKind::Elf32 | object::FileKind::Elf64)
    );
    let image_family = unlace_analysis::formatstring::fmtstatic::image_family(&bytes);
    // (unlace `chkstkdarwin`) And whether it is an Apple container: the Darwin
    // stack probe is removed only there.
    sleigh.base_mut().unwrap().image_apple =
        image_family == unlace_decomp::formatstring::ImageFamily::Apple;
    // (unlace `callmechanisms`) And whether the loader validated PPC64 ELFv1
    // function descriptors (a linked image's or an object's `.opd`), whose ABI
    // reserves `0x28(r1)` for the TOC save: `option callmechanisms auto`
    // installs the cspec's TOC-reload return payloads only when it did.
    sleigh.base_mut().unwrap().image_elfv1_toc = image_elfv1_toc;
    // (unlace `formatstring`) And one more: does this target pass a variadic
    // argument the way it passes a named one? On AArch64 that is the container's
    // answer (Apple puts every vararg on the stack), which only the image knows.
    // (unlace, issue #666) And the last one-bit image fact: does this container
    // decorate a C identifier with a leading `_`? Read off the container magic
    // rather than the parsed file, so it costs nothing on the load path.
    let symbol_underscore_prefix = matches!(
        object::FileKind::parse(&*bytes),
        Ok(object::FileKind::MachO32 | object::FileKind::MachO64)
    );
    let vararg_abi =
        unlace_decomp::formatstring::vararg_abi(&sleigh.base().unwrap().archid, Some(image_family));
    *sleigh
        .base_mut()
        .unwrap()
        .unlace_tables
        .get_mut::<unlace_decomp::formatstring::ImageVarargAbi>() = Some(vararg_abi);

    // Hand the loader to the engine (the C++ `loader` back-pointer the decode
    // reads on load_fill).
    sleigh.base_mut().unwrap().set_loader(Box::new(loader));

    let description = sleigh.base().unwrap().get_description().to_string();

    let mut prog = empty_program(sleigh, registry, ProgramContainer::Object, description);
    if let Some(linkage) = mips_linkage {
        let (elf32, little) = (linkage.elf32, linkage.little);
        prog.arch_mut().loader_transfer_sites = Rc::new(
            linkage
                .transfers
                .into_iter()
                .map(|(site, _)| Address::new(Rc::clone(&code_space), site))
                .collect(),
        );
        prog.arch_mut().loader_mips_imports = Rc::new(
            elf_functions
                .imports
                .iter()
                .map(|&entry| Address::new(Rc::clone(&code_space), entry))
                .collect(),
        );
        if let Ok(loc) = prog.arch().get_register_varnode(b"t9") {
            prog.arch_mut().loader_mips_t9 = Some((
                loc.clone(),
                mips_t9_probe(prog.arch().translate().loader_rc(), elf32, little, loc.size),
            ));
        }
    }
    if !riscv_import_slots.is_empty() {
        prog.arch_mut().loader_mips_imports = Rc::new(
            riscv_import_slots
                .into_iter()
                .map(|vma| Address::new(Rc::clone(&code_space), vma))
                .collect(),
        );
    }
    prog.load_notes = load_notes;
    prog.symbols = SymbolStream::from_loader(symbols);
    prog.object_sections = object_sections;
    prog.image_metadata = Some(image_metadata);
    // Stash the per-pass analysis facts + the code space for the gated commit
    // at `read symbols` (IfcReadSymbols -> commit_analysis_passes).
    prog.pending_analysis = pending_analysis;
    prog.analysis_code_space = Some(Rc::clone(&code_space));
    // Stash the image bytes + path, with the load's import proof, for the DEFERRED
    // Listing build (PR6 build-timing fix): the Listing is gated on `--option listing on`, set
    // by the CLI after `load file`, so it is built at the deferred commit
    // (`read symbols`) when the flag is known — not at load. `bytes` is moved
    // here (it is unused below this point).
    prog.callwide = crate::callwide::State::object(&bytes);
    if explicit_isa {
        prog.callwide_unavailable("explicit decode mode requires a new complete image proof");
    }
    let proof_memo = import_proofs.memo();
    drop(import_proofs);
    prog.analysis_image = Some((path.to_string(), bytes, Some(proof_memo)));
    prog.loader_data_objects = loader_data_objects;
    prog.loader_data_exports = loader_data_exports;
    prog.import_slots = crate::importslots::ImportSlots::new(import_slots);
    prog.function_address_aliases = function_address_aliases.into_iter().collect();
    prog.symbol_underscore_prefix = symbol_underscore_prefix;
    if let Ok(loc) = prog.arch().get_register_varnode(b"r2") {
        if loc.size == 8 {
            for (entry, val) in elfv1_tocs {
                let begin = Address::new(Rc::clone(&code_space), entry);
                prog.arch_mut()
                    .loader_entry_tracks
                    .entry(begin)
                    .or_default()
                    .push(unlace_sleigh::globalcontext::TrackedContext {
                        loc: loc.clone(),
                        val,
                    });
            }
        }
    }
    prog.elf_functions = elf_functions;
    for (raw, name) in loader_aliases {
        let name = unlace_decomp::symbolnamebound::bound_scope_path(&name, "::").into_owned();
        let vma = prog.thumb_normalized(raw);
        prog.loader_aliases.entry(vma).or_default().push(name);
    }
    prog.pending_entry_thumb = entry_thumb_walk;
    if m_profile {
        let mapped = prog.sections();
        unlace_analysis::loader::cortexmdevice::paint_volatile(
            prog.arch_mut(),
            &code_space,
            &mapped,
        );
    }
    // conf->readLoaderSymbols("::"): install the ELF symbols as FunctionSymbols.
    // The deferred analysis commit at `read symbols` REQUIRES this to have run
    // first (no-return/callfixup address+name resolution finds the funcsyms).
    prog.read_loader_symbols()?;

    // Apply the collected read-only ranges now that prog owns the architecture.
    apply_readonly_ranges(&mut prog, &readonly_ranges);

    // (unlace `dynrelocs`) ... and hand the foldable subset of them to the engine.
    // Sorted so `GlobalContainer::dynreloc_const_contains` can binary-search.
    {
        let mut ranges = dynreloc_const;
        ranges.sort_unstable();
        prog.arch_mut().dynreloc_const = std::rc::Rc::new(ranges);
    }
    prog.arch_mut().plt_local = std::rc::Rc::new(plt_local);

    // (unlace `litpoolconst`) ... and the executable read-only regions the in-code
    // literal pools live in. Already sorted, disjoint and merged by
    // `code_const_ranges`, so `GlobalContainer::litpool_const_contains` can
    // binary-search.
    prog.arch_mut().litpool_const = std::rc::Rc::new(litpool_const);
    prog.arch_mut().eh_sections = Some(std::rc::Rc::new(eh_sections));
    prog.arch_mut().func_sizes = std::rc::Rc::new(func_sizes);

    // (unlace `globalref`) ... and the sections a program's data objects live in.
    prog.arch_mut().globalref_ranges = std::rc::Rc::new(globalref_ranges);
    // (unlace `cstringconst`) ... and the sections that hold only string literals.
    prog.arch_mut().cstring_ranges = std::rc::Rc::new(cstring_ranges);

    // NB: the analysis-pass facts are committed later, gated, in
    // `commit_analysis_passes` (called from `IfcReadSymbols`), after the per-pass
    // `--option` flags are applied. See `ConsoleProgram::pending_analysis`.
    Ok(prog)
}

/// Commit a merged [`unlace_analysis::pass::AnalysisOutput`] into the engine's
/// symbol/type tables — the unlace-console side of the unlace-analysis pass boundary.
///
/// Each fact is **additive** (only adds knowledge) and **idempotent** against the
/// funcsym stream `read_loader_symbols` already committed (the `find_function`
/// overlap check no-ops a duplicate). Bound to the real-ELF path; the XML
/// `<binaryimage>` path never produces an `AnalysisOutput`, so this never runs
/// there. See `docs/missing-analyses.md` for the per-fact-kind API rationale.
/// Bind each fact's function to its named prototype model, recovering its
/// parameters and those of every direct call to it under that model. A model
/// the registry does not hold is a silent no-op.
fn commit_model_facts(
    prog: &mut ConsoleProgram,
    code_space: &Rc<AddrSpace>,
    facts: &[unlace_analysis::pass::ModelFact],
) {
    if facts.is_empty() {
        return;
    }
    let mut models = (*prog.arch().loader_proto_models).clone();
    for fact in facts {
        let Some(model) = prog.arch().get_model(fact.model).cloned() else {
            continue;
        };
        let model = if let Some(inputs) = &fact.leaf_stack_inputs {
            let Some(limit) = inputs.proven_limit(prog.arch(), fact.func_addr) else {
                continue;
            };
            let Some(bounded) = model.unlace_bound_stack_inputs(limit) else {
                continue;
            };
            Rc::new(bounded)
        } else {
            model
        };
        models.insert((code_space.get_index(), fact.func_addr), model);
    }
    prog.arch_mut().loader_proto_models = Rc::new(models);
}

/// Park each fact as an unlocked input hint on its function's entry, the
/// register resolved through the language (one it does not define is a silent
/// no-op). A function already hinted keeps the hints it has.
fn commit_input_hints(
    prog: &mut ConsoleProgram,
    code_space: &Rc<AddrSpace>,
    facts: &[unlace_analysis::pass::InputHintFact],
) {
    let mut hints: std::collections::BTreeMap<Address, Vec<unlace_decomp::inputhints::InputHint>> =
        std::collections::BTreeMap::new();
    for fact in facts {
        let Ok(loc) = prog.arch().get_register_varnode(fact.reg.as_bytes()) else {
            continue;
        };
        let Some(space) = loc.space.clone() else {
            continue;
        };
        let entry = Address::new(Rc::clone(code_space), fact.func_addr);
        hints
            .entry(entry)
            .or_default()
            .push(unlace_decomp::inputhints::InputHint {
                addr: Address::new(space, loc.offset),
                size: loc.size as i32,
                name: fact.name.clone(),
                ct: fact.type_.clone(),
            });
    }
    for (entry, list) in hints {
        prog.arch_mut()
            .unlace_tables
            .get_mut::<unlace_decomp::inputhints::LoaderHints>()
            .0
            .entry(entry)
            .or_insert_with(|| Rc::new(list));
    }
}

fn commit_analysis_output(
    prog: &mut ConsoleProgram,
    code_space: &Rc<AddrSpace>,
    mut out: unlace_analysis::pass::AnalysisOutput,
    zero_size_data_names: Vec<String>,
) -> UnlaceResult<()> {
    use unlace_analysis::pass::SymKind;

    let num_spaces = prog.arch().manage().num_spaces();
    if !out.data_vetoed.is_empty() {
        let vetoed: std::collections::BTreeSet<u64> = out.data_vetoed.iter().copied().collect();
        out.entries.retain(|e| !vetoed.contains(e));
    }

    // 0. (unlace `cppproto`) The DWARF C++ arm's facts, stashed apart by the
    //    producing pass: they fold into the normal symbol/local streams below and
    //    their address-keyed prototypes are applied at step 5a.
    if prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::analysisgates::Dwarfnocall>()
        .0
    {
        out.apply_dwarf_nocall();
    }
    if let Some(entry) = out.go_chanrecv2 {
        prog.arch_mut().go_chanrecv2 = Some(entry);
    }
    if !out.case_entries.is_empty() {
        let cases: std::collections::BTreeSet<u64> = out.case_entries.iter().copied().collect();
        out.entries.retain(|e| !cases.contains(e));
    }
    for slot in std::mem::take(&mut out.ppc32_pic_slots) {
        prog.arch_mut()
            .unlace_tables
            .get_mut::<unlace_decomp::ppc32piccalls::PicImports>()
            .insert(slot.address, slot);
    }
    let cpp = std::mem::take(&mut out.cpp_dwarf);
    unlace_analysis::dwarf::merge_cpp_symbols(&mut out.symbols, cpp.symbols);
    out.locals.extend(cpp.locals);
    out.cpp_dwarf.prototypes = cpp.prototypes;
    // 0d. (unlace `dwarfglobaltypes`) A DWARF global keeps its declared type:
    //     its untyped sized entry is replaced by the typed one.
    if let Some(layout) = out.tls_layout.take() {
        prog.arch_mut().unlace_states.set(Rc::new(layout));
    }
    let dwarf_globals = std::mem::take(&mut out.dwarf_typed_globals);
    if prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::analysisgates::Dwarfglobaltypes>()
        .0
    {
        let typed: std::collections::BTreeSet<u64> = dwarf_globals.iter().map(|g| g.addr).collect();
        out.data_objects.retain(|d| !typed.contains(&d.addr));
        out.typed_data.splice(0..0, dwarf_globals);
    }
    // 0e. (unlace `dwarfdecls`) An import's DWARF declaration types its calls where
    //     no other prototype fact names that import or its entry.
    let dwarf_decls = std::mem::take(&mut out.dwarf_decl_prototypes);
    if prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::analysisgates::Dwarfdecls>()
        .0
    {
        let named: std::collections::BTreeSet<String> =
            out.prototypes.iter().map(|p| p.name.clone()).collect();
        let placed: std::collections::BTreeSet<u64> =
            out.prototypes_at.iter().map(|(at, _)| *at).collect();
        out.prototypes_at.extend(
            dwarf_decls
                .into_iter()
                .filter(|(at, p)| !placed.contains(at) && !named.contains(&p.name)),
        );
    }
    let go_prototypes = if prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::analysisgates::Godwarfsig>()
        .0
    {
        out.go_dwarf
            .iter()
            .flat_map(|facts| facts.materialize(prog.arch(), &out.go_pointer_methods))
            .collect::<Vec<_>>()
    } else {
        Vec::new()
    };
    out.go_dwarf.clear();
    out.symbols.extend(
        go_prototypes
            .iter()
            .map(|fact| unlace_analysis::pass::SymFact {
                addr: fact.entry,
                name: fact.pieces.name.clone(),
                kind: SymKind::Function,
            }),
    );
    // 0a. (unlace `cortexmscs`) The System Control Space of a Cortex-M image:
    //     its types are built here, not at load, so the gate decides whether
    //     they exist; the ranges are marked volatile at step 4b.
    let scs_ranges = match out.cortexm_scs.take() {
        Some(blocks) => {
            let (globals, ranges) =
                unlace_analysis::cortexmscs::materialize(prog.arch().types(), blocks);
            out.typed_data.extend(globals);
            ranges
        }
        None => Vec::new(),
    };
    // 0a'. (unlace `swiftobjcthunk`) Off, every function the Swift metadata
    //      pass named after an `@objc` member takes its positional name back.
    let positional = std::mem::take(&mut out.swift_positional_names);
    if !prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::analysisgates::Swiftobjcthunk>()
        .0
        && !positional.is_empty()
    {
        let back: HashMap<u64, (String, String)> = positional
            .into_iter()
            .map(|(addr, member, slot)| (addr, (member, slot)))
            .collect();
        let rename = |addr: u64, name: &mut String| {
            if let Some((_, slot)) = back.get(&addr).filter(|(member, _)| member == name) {
                *name = slot.clone();
            }
        };
        out.symbols
            .iter_mut()
            .for_each(|s| rename(s.addr, &mut s.name));
        out.fid_names
            .iter_mut()
            .for_each(|f| rename(f.addr, &mut f.name));
    }
    // 0b. (unlace `swifttypes`) The Swift type-layout arm's facts, the same
    //     deferred shape: on, the typed metadata records and the accessor
    //     prototypes fold into their streams (the register-pinned parameters
    //     are parked at step 7b); off, all three are dropped.
    // 0a. (unlace `valuewitness`) The value witness functions' names and
    //     prototypes, and the tables typed beside the static ones: on, they
    //     fold into their streams; off, they are dropped.
    let witnesses = std::mem::take(&mut out.swift_witnesses);
    if prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::valuewitness::Valuewitness>()
        .0
    {
        out.symbols.extend(witnesses.names);
        out.prototypes_at.extend(witnesses.prototypes);
        if prog
            .arch()
            .unlace_options
            .get::<unlace_decomp::analysisgates::Swifttypes>()
            .0
        {
            out.typed_data.extend(witnesses.typed_data);
        }
    }
    if prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::analysisgates::Swifttypes>()
        .0
    {
        let swift = std::mem::take(&mut out.swift_types);
        out.typed_data.extend(swift.typed_data);
        out.prototypes.extend(swift.prototypes);
        out.swift_types.param_locks = swift.param_locks;
        if prog
            .arch()
            .unlace_options
            .get::<unlace_decomp::swiftcall::Swiftcall>()
            .0
        {
            out.swift_types.models = swift.models;
            out.swift_types.input_hints = swift.input_hints;
            out.swift_types.no_self = swift.no_self;
            out.swift_types.regs = swift.regs;
            out.swift_types.declared = swift.declared;
            out.swift_types.runtime_context = swift.runtime_context;
            out.swift_types.async_imports = swift.async_imports;
        }
    } else {
        out.swift_types = Default::default();
    }
    // (unlace `swifthelpers`) The Swift helper arm's facts, the same deferred
    // shape: on, they fold into their streams; off, they are dropped.
    let helpers = std::mem::take(&mut out.swift_helpers);
    if prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::analysisgates::Swifthelpers>()
        .0
    {
        out.symbols.extend(helpers.symbols);
        out.fid_names.extend(helpers.fid_names);
        out.typed_data.extend(helpers.typed_data);
        out.prototypes_at.extend(helpers.prototypes_at);
    }
    // 0c. (unlace `gotypeglobals`) A Go image's `_type` descriptors as named,
    //     typed data globals, the same deferred shape: on, they fold into the
    //     typed-data stream and commit at arm 4b (`type:main.Point` of shell
    //     `go.typedesc`, `typelock|namelock`); off, they are dropped whole and
    //     the image renders exactly what the `gotypes` provider alone renders.
    if prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::analysisgates::GoTypeGlobals>()
        .0
    {
        let descriptors = std::mem::take(&mut out.go_type_globals);
        out.typed_data.extend(descriptors);
        let itabs = std::mem::take(&mut out.go_itabs);
        out.symbols.extend(itabs);
    } else {
        out.go_type_globals = Vec::new();
        out.go_itabs = Vec::new();
    }
    // 0a. (unlace `cppsig`) The demangled-signature arm's prototypes. Same deferred
    //     shape as `cppproto` above, but the gate is three-valued, so the mode
    //     selects WHICH certainty tiers survive: `proven` only the prototypes the
    //     mangling entails, `inferred` those plus the class-evidence inferences,
    //     `off` neither.
    let cppsig_mode = prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::cppsig::CppSigMode>();
    let (msvc_byval, msvc_builders) = if cppsig_mode.enabled() {
        (
            std::mem::take(&mut out.cpp_sig.msvc_byval),
            std::mem::take(&mut out.cpp_sig.msvc_builders),
        )
    } else {
        (Vec::new(), Vec::new())
    };
    // (unlace `iokitclasses on`) The IOKit classes are typed like the Itanium
    // ones, whether or not `vtabletypes` types those.
    let iokit = if prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::analysisgates::IokitClasses>()
        .types
    {
        std::mem::take(&mut out.iokit_cxx)
    } else {
        Default::default()
    };
    let typed_vtables = prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::coreoptions::Vtabletypes>()
        .0
        || !iokit.vtables.classes.is_empty();
    if !prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::coreoptions::Vtabletypes>()
        .0
    {
        out.cpp_vtables = Default::default();
    }
    out.cpp_vtables
        .classes
        .extend(iokit.vtables.classes.iter().cloned());
    out.cpp_vtables
        .slot_ranges
        .extend(iokit.vtables.slot_ranges.iter().copied());
    // (unlace `vtabletypes`) A function a vtable slot holds is a virtual member,
    // so its implicit `this` is certain: an inferred-tier declaration of one
    // that takes `this` is as good as a proven one.
    if typed_vtables {
        let held: std::collections::HashSet<u64> = out
            .cpp_vtables
            .classes
            .iter()
            .flat_map(|c| c.slots.iter().flat_map(|s| s.targets.iter().copied()))
            .collect();
        let (members, rest): (Vec<_>, Vec<_>) = std::mem::take(&mut out.cpp_sig.inferred)
            .into_iter()
            .partition(|(addr, pieces)| {
                held.contains(addr) && pieces.innames.first().is_some_and(|n| n == "this")
            });
        out.cpp_sig.proven.extend(members);
        out.cpp_sig.inferred = rest;
    }
    let cppsig_protos = if cppsig_mode.enabled() {
        unlace_analysis::demangle::cppsig::select(
            std::mem::take(&mut out.cpp_sig),
            cppsig_mode.inferred(),
        )
    } else {
        Vec::new()
    };
    let out = out;
    let signature_names =
        signature_names::SignatureNames::collect(prog, &out, zero_size_data_names);

    // Keep lookup identities even when richer debug information wins the map;
    // a spelling shared by several objects resolves to its lowest address. A
    // data import is looked up by the name of the `externref` slot holding it.
    let externref_slots: std::collections::HashSet<u64> =
        out.externref.iter().map(|&(first, _)| first).collect();
    let aliases: Vec<(String, u64)> = prog
        .loader_data_objects
        .iter()
        .map(|(address, name, _)| (name.clone(), *address))
        .chain(
            prog.loader_data_exports
                .iter()
                .map(|(address, name)| (name.clone(), *address)),
        )
        .chain(
            out.symbols
                .iter()
                .filter(|s| s.kind == SymKind::Data)
                .map(|s| (s.name.clone(), s.addr)),
        )
        .chain(out.data_objects.iter().map(|d| (d.name.clone(), d.addr)))
        .chain(out.typed_data.iter().map(|d| (d.name.clone(), d.addr)))
        .chain(
            out.import_slot_names
                .iter()
                .filter(|(slot, _)| externref_slots.contains(slot))
                .map(|(slot, name)| (name.clone(), *slot)),
        )
        .collect();
    for (name, address) in aliases {
        let slot = prog.data_name_aliases.entry(name).or_insert(address);
        *slot = (*slot).min(address);
    }

    let mut data_names = crate::dataidentifiers::Names::new(
        prog.symbols
            .iter()
            .map(|s| s.name.clone())
            .chain(
                prog.loader_data_objects
                    .iter()
                    .map(|(_, name, _)| name.clone()),
            )
            .chain(
                prog.global_data_symbols()
                    .into_iter()
                    .map(|(name, _, _)| name),
            )
            .chain(out.symbols.iter().map(|s| s.name.clone()))
            .chain(out.data_objects.iter().map(|d| d.name.clone()))
            .chain(out.typed_data.iter().map(|d| d.name.clone())),
        unlace_decomp::symbolnamechars::symbolnamechars_mode()
            == unlace_decomp::symbolnamechars::NameChars::Ident,
    );

    // 0b. (unlace `libctypes glibc`) The load-time target decision, carried to the
    //     one consumer that runs with the object file out of reach
    //     (`seed_declared_libc_prototype`). Set unconditionally so a second
    //     `load file` of a foreign-arch image clears what the first established.
    prog.libctypes_glibc = out.libctypes_glibc;
    prog.libctypes_refused = out.libctypes_refused;
    prog.libctypes_streams = out.libctypes_streams;

    // 0c. (unlace `objc`) The Objective-C reference slots the `objc` pass
    //     reported constant: painted `Varnode::readonly` like 1b below AND added to
    //     the `dynrelocs` foldable set, so `ActionVarnodeProps` folds a load through
    //     a selref/classref/superref without the program-wide `option readonly`.
    //     Painted BEFORE the slots' own `selRef_`/`classRef_` symbols are mapped at
    //     1a: `Scope::addMap` copies the range property into the SymbolEntry, and
    //     the per-function snapshot reads the symbol's flags.
    //     `objcivars` gates the ivar offset variables the same way.
    let ivars_on = prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::objcivars::ObjcIvars>()
        .0;
    let const_on = |gate: unlace_analysis::pass::ConstGate| match gate {
        unlace_analysis::pass::ConstGate::ObjcRefs => true,
        unlace_analysis::pass::ConstGate::ObjcIvars => ivars_on,
    };
    if out.const_ranges.iter().any(|r| const_on(r.gate)) {
        let mut ranges = prog.arch().dynreloc_const.as_ref().clone();
        for r in out.const_ranges.iter().filter(|r| const_on(r.gate)) {
            let begin = Address::new(Rc::clone(code_space), r.first);
            let end = Address::new(Rc::clone(code_space), r.last_open);
            prog.arch_mut().symboltab.set_property_range(
                unlace_decomp::varnode::varnode_flags::readonly,
                &begin,
                &end,
            );
            ranges.push((r.first, r.last_open - 1));
        }
        ranges.sort_unstable();
        prog.arch_mut().dynreloc_const = Rc::new(ranges);
    }
    // 0e. (unlace `vtabletypes`) The vtable slot words, the same way: a load of a
    //     slot through a constant vtable address folds to the method it holds,
    //     so a call on an object whose vptr store the function can see becomes
    //     a direct call. Painted before the vptr labels are mapped at 1.
    if typed_vtables && !out.cpp_vtables.slot_ranges.is_empty() {
        let mut ranges = prog.arch().dynreloc_const.as_ref().clone();
        for &(first, last) in &out.cpp_vtables.slot_ranges {
            let begin = Address::new(Rc::clone(code_space), first);
            let end = Address::new(Rc::clone(code_space), last + 1);
            prog.arch_mut().symboltab.set_property_range(
                unlace_decomp::varnode::varnode_flags::readonly,
                &begin,
                &end,
            );
            ranges.push((first, last));
        }
        ranges.sort_unstable();
        let mut merged: Vec<(u64, u64)> = Vec::with_capacity(ranges.len());
        for (lo, hi) in ranges {
            match merged.last_mut() {
                Some(last) if lo <= last.1.saturating_add(1) => last.1 = last.1.max(hi),
                _ => merged.push((lo, hi)),
            }
        }
        prog.arch_mut().dynreloc_const = Rc::new(merged);
    }

    // 1. Extra symbols a pass discovered. Function symbols install like the
    //    funcsym stream (idempotent); Data symbols (typed string/data objects)
    //    land via add_symbol_mapped. (No pass emits these yet in this increment;
    //    the commit path is wired so the string/entry passes plug in cleanly.)
    for s in &out.symbols {
        let addr = Address::new(Rc::clone(code_space), s.addr);
        match s.kind {
            SymKind::Function => {
                let type_code = prog.arch().types().get_type_code()?;
                let min_size = prog.arch().min_funcsymbol_size;
                {
                    let arch = prog.arch_mut();
                    let (scope, base) = arch
                        .symboltab
                        .find_create_scope_from_symbol_name(&s.name, "::", None, num_spaces)?;
                    match arch.symboltab.find_function(scope, &addr) {
                        None => {
                            arch.symboltab
                                .add_function(scope, &addr, &base, min_size, type_code)?;
                        }
                        // A slot-index name only says which vtable slot the function
                        // fills; a real name a later pass recovers replaces it.
                        Some(sym)
                            if replaces_slot_name(&s.name, &arch.symboltab.symbol(sym).name) =>
                        {
                            arch.symboltab.rename_symbol(sym, &base)?;
                        }
                        Some(_) => {}
                    }
                }
                prog.register_overload(&s.name, addr);
            }
            SymKind::Data => {
                let name = data_names.name(&s.name, s.addr);
                let arch = prog.arch_mut();
                let (scope, base) = arch
                    .symboltab
                    .find_create_scope_from_symbol_name(&name, "::", None, num_spaces)?;
                // Untyped data object (a typed string symbol carries its char[N]
                // type through a dedicated fact added with the string pass).
                let ct = arch.types().get_type_code()?;
                let (sid, _) = arch.symboltab.add_symbol_mapped(
                    scope,
                    &base,
                    ct,
                    &addr,
                    &Address::new_invalid(),
                )?;
                arch.symboltab
                    .set_attribute(sid, unlace_decomp::varnode::varnode_flags::namelock);
            }
        }
    }

    // 1--. (unlace `arm64evcall`) The methods each arm64e virtual call site's slot
    //      can hold; flow reads them when it builds the CALLIND.
    let meta_slots: std::collections::HashMap<u64, &Vec<u64>> =
        iokit.meta_slots.iter().map(|(m, s)| (*m, s)).collect();
    for v in &out.vcall_sites {
        // (unlace `iokitclasses on`) A call on a metaclass object calls the
        // method that metaclass's own vtable holds.
        let own = v
            .object
            .and_then(|(obj, word)| meta_slots.get(&obj)?.get(word as usize).copied())
            .filter(|t| v.targets.contains(t));
        let targets = own.map_or_else(|| v.targets.clone(), |t| vec![t]);
        let call = unlace_decomp::architecture::VcallTargets {
            register: v.register,
            targets,
        };
        Rc::make_mut(&mut prog.arch_mut().unlace_vcall_targets).insert(v.site, call);
    }

    // 1---. (unlace `outlinedinline`) Flag clang's MachineOutliner fragments inline,
    //       so flow splices each into its callers.
    if prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::flow::OutlinedInline>()
        .0
    {
        let fragments: Vec<Address> = prog
            .symbols
            .iter()
            .filter(|s| unlace_decomp::outlinedinline::is_outlined_name(&s.name))
            .map(|s| s.addr.clone())
            .collect();
        unlace_decomp::outlinedinline::mark_inline(prog.arch_mut(), &fragments);
    }

    // 1-. (unlace `elfgotimports`) The import a loader import slot holds. A
    //     `FunctionSymbol` in the symbol table, exactly as the format's own import
    //     names are, so `query_function` resolves a read or a call through the slot;
    //     but not registered in the function inventory, because the slot is a
    //     pointer word, not a function.
    for (slot, name) in &out.import_slot_names {
        let addr = Address::new(Rc::clone(code_space), *slot);
        let type_code = prog.arch().types().get_type_code()?;
        let min_size = prog.arch().min_funcsymbol_size;
        let arch = prog.arch_mut();
        let (scope, base) = arch
            .symboltab
            .find_create_scope_from_symbol_name(name, "::", None, num_spaces)?;
        if arch.symboltab.find_function(scope, &addr).is_none() {
            arch.symboltab
                .add_function(scope, &addr, &base, min_size, type_code)?;
        }
    }
    let code_space_index = code_space.get_index();
    prog.arch_mut().data_import_slots.extend(
        out.data_import_slots
            .iter()
            .map(|&slot| (code_space_index, slot)),
    );

    // 1a. Named data globals with a known byte size (`out.data_objects`, the DWARF
    //     top-level variables). Mapped into the global scope with an
    //     `undefined<size>` type so a memory access of the object's storage
    //     (`mov [max_width], eax`) queries `queryContainer(addr, size)` and finds a
    //     covering SymbolEntry — the ActionNameVars global-scope query then binds the
    //     name, rendering `max_width` instead of `dat_<addr>`. A plain `SymFact{Data}`
    //     is installed with a size-1 code type, which only covers a 1-byte access, so
    //     multi-byte globals (`int`/`char*`) were left unnamed. Matches IDA Pro /
    //     Ghidra, which name data globals from the symbol table. `namelock` keeps the
    //     name; the `undefined<size>` type is NOT typelocked, so type propagation still
    //     infers the object's real type from its uses. A synthetic-`namelock` symbol
    //     is skipped where the address already carries a function or a covering data
    //     Symbol (a string `s_<addr>` or a hand-`map addr`ed global must not be
    //     shadowed) — the same guard the string-literal placement uses.
    //     The extent is clamped into the type factory's `int4` domain exactly as
    //     arm 4a does. This arm cannot actually overflow — `d.size` is produced
    //     from a `Datatype::get_size()`, itself an `int4`, and filtered to `>= 1`
    //     (`analyzers/dwarf/mod.rs`), so it already lives in `1..=int4::MAX` —
    //     but the two arms must not differ in shape, or the safe one reads as an
    //     endorsement of the unsafe one.
    for d in &out.data_objects {
        let addr = Address::new(Rc::clone(code_space), d.addr);
        let occupied = {
            let arch = prog.arch();
            match arch.symboltab.get_global_scope() {
                Some(global) => {
                    arch.symboltab.find_function(global, &addr).is_some()
                        || arch
                            .symboltab
                            .find_container(global, &addr, 1, &Address::new_invalid())
                            .is_some()
                }
                None => false,
            }
        };
        if occupied {
            continue;
        }
        let ct = prog.arch().types().get_base(
            d.size.clamp(1, int4::MAX as u32) as int4,
            unlace_decomp::dtype::type_metatype::TYPE_UNKNOWN,
        )?;
        let name = data_names.name(&d.name, d.addr);
        let arch = prog.arch_mut();
        let (scope, base) = arch
            .symboltab
            .find_create_scope_from_symbol_name(&name, "::", None, num_spaces)?;
        let (sid, _) =
            arch.symboltab
                .add_symbol_mapped(scope, &base, ct, &addr, &Address::new_invalid())?;
        arch.symboltab
            .set_attribute(sid, unlace_decomp::varnode::varnode_flags::namelock);
    }

    // 1b. Extra read-only address ranges a pass discovered (`out.readonly`) — e.g.
    //     the MSVC RTTI vftable slot arrays (`rtti` R3). OR `Varnode::readonly`
    //     over each `[first, last_open)` range in the symbol-table property map, the
    //     same `symboltab->setPropertyRange(Varnode::readonly, *iter)` the loader's
    //     section-derived read-only ranges use (bootstrap_program). With `option
    //     readonly` on this lets a load of a vtable slot fold to its constant; the
    //     ranges are additive and only ever WIDEN the read-only set. PE `.rdata` is
    //     already read-only from its section flags, so this is belt-and-suspenders
    //     there; it is load-bearing for any pass that marks a range the loader did
    //     not. Empty on every default run (only the gated real-binary passes emit).
    for &(first, last_open) in &out.readonly {
        let begin = Address::new(Rc::clone(code_space), first);
        let end = Address::new(Rc::clone(code_space), last_open);
        prog.arch_mut().symboltab.set_property_range(
            unlace_decomp::varnode::varnode_flags::readonly,
            &begin,
            &end,
        );
    }

    // 1c. (unlace) External-reference address ranges (`out.externref`) — the PE IAT,
    //     typed Mach-O symbol-pointer or ELF `.got` import slots `peimportcall` reports. OR `Varnode::externref`
    //     over each `[first, last_open)` range in the same symbol-table property map,
    //     which `Scope::queryProperties` folds into every global Varnode covering the
    //     range. That one flag is what `ActionDeindirect`'s `queryExternalRefFunction`
    //     arm requires (`isPersist() && isExternalRef()`) before it will resolve a
    //     CALLIND through the slot to the import FunctionSymbol registered there — the
    //     unlace stand-in for Ghidra's `ExternRefSymbol` (`Scope::addExternalRef`), which
    //     the port never carried. Empty on other formats and whenever the gate is off.
    for &(first, last_open) in &out.externref {
        let begin = Address::new(Rc::clone(code_space), first);
        let end = Address::new(Rc::clone(code_space), last_open);
        prog.arch_mut().symboltab.set_property_range(
            unlace_decomp::varnode::varnode_flags::externref,
            &begin,
            &end,
        );
    }
    // (unlace `guarddispatch`) The PE load configuration's guard dispatch slots,
    // which the flow reads to print a call through one as the call it guards.
    let space_index = code_space.get_index();
    let dispatch = out
        .guard_dispatch_slots
        .iter()
        .map(|&addr| (space_index, addr));
    prog.arch_mut().guard_dispatch_slots.extend(dispatch);

    // 2. Discovered entry points (stripped targets): name + add_function +
    //    register_symbol (the `map function` recipe).
    //
    //    Naming: an entry that carries a Ghidra-faithful name in the `entry_names`
    //    overlay (the dynamic INIT/FINI array elements — `_INIT_<i>` / `_FINI_<i>`,
    //    and the single `_DT_INIT`/`_DT_FINI`, per `ElfProgramBuilder`) is named
    //    with it; every other discovered VMA falls back to the generic
    //    `name_function` (`sub_<addr>`), exactly as before.
    //
    //    The idempotence probe resolves ACROSS SCOPES (C++ `Scope::queryFunction`
    //    spans the scope tree), which is what lets a real `.symtab`/`.dynsym` name
    //    win on a non-stripped binary. A scope-local probe only ever saw the GLOBAL
    //    scope (the synthetic `sub_<addr>`/`_INIT_<i>` names carry no `::`), so a
    //    demangled C++ callee living in a namespace scope — `Account::deposit` in
    //    scope `Account` — looked absent and a duplicate generic FunctionSymbol was
    //    installed in GLOBAL alongside it. `find_function_across_scopes` searches
    //    global first, so that duplicate then shadowed the real name at every call
    //    site and the printer rendered `sub_<addr>` (DIV-59).
    // (unlace `lazyfuncs`) On, an entry keeps its NAME but no `Function` is created here.
    let lazy_funcs = prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::analysisgates::Lazyfuncs>()
        .0;
    let jump_thunks = if prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::analysisgates::Thunknames>()
        .0
    {
        thunknames::jump_thunks(prog.arch(), code_space, &out.entries)
    } else {
        Default::default()
    };
    let eager = if lazy_funcs {
        let mut eager = crate::lazyfuncs::fact_entries(&out);
        let named_thunks = thunknames::thunks_to(&jump_thunks, &eager);
        eager.extend(named_thunks);
        eager
    } else {
        std::collections::HashSet::new()
    };
    if lazy_funcs {
        let starts: Vec<u64> = out
            .entries
            .iter()
            .copied()
            .filter(|v| !eager.contains(v))
            .collect();
        prog.arch_mut().set_lazy_entry_starts(starts);
    }
    let named_placeholders: std::collections::HashSet<u64> = if lazy_funcs {
        prog.symbols
            .iter()
            .filter_map(|s| u64::from_str_radix(s.name.strip_prefix("sub_")?, 16).ok())
            .collect()
    } else {
        std::collections::HashSet::new()
    };
    for &vma in &out.entries {
        if lazy_funcs
            && !eager.contains(&vma)
            && prog
                .arch()
                .unlace_options
                .get::<unlace_decomp::coreoptions::NameStyleAngr>()
                .0
            && !named_placeholders.contains(&vma)
            && prog.thumb_normalized(vma) == vma
        {
            prog.anonymous_entries.push((vma, next_revision()));
            continue;
        }
        let addr = Address::new(Rc::clone(code_space), vma);
        let name = out
            .entry_names
            .iter()
            .find(|(a, _)| *a == vma)
            .map(|(_, n)| n.clone())
            .unwrap_or_else(|| prog.arch().name_function(&addr));
        let type_code = prog.arch().types().get_type_code()?;
        let min_size = prog.arch().min_funcsymbol_size;
        if !lazy_funcs || eager.contains(&vma) {
            let arch = prog.arch_mut();
            if arch.symboltab.find_function_across_scopes(&addr).is_none() {
                let (scope, base) = arch
                    .symboltab
                    .find_create_scope_from_symbol_name(&name, "::", None, num_spaces)?;
                arch.symboltab
                    .add_function(scope, &addr, &base, min_size, type_code)?;
            }
        }
        prog.register_symbol(&name, addr);
    }

    prog.anonymous_entries
        .sort_unstable_by(|a, b| a.0.cmp(&b.0).then_with(|| b.1.cmp(&a.1)));
    prog.anonymous_entries.dedup_by_key(|entry| entry.0);
    prog.anonymous_symbols.take();
    prog.symbols.revision = next_revision();

    // 3. No-return functions: resolve each matched function and set the no-return
    //    flag (the batch form of OptionNoReturn::apply). A fact with no matching
    //    function is the faithful no-op — Ghidra only iterates existing symbols.
    //
    //    Resolution is by **address** (find_function_across_scopes, the same
    //    cross-scope resolver the call resolver uses): the address is the stable
    //    key. The demangle pass renames the funcsym before it is installed, so a
    //    mangled C++ no-return symbol (`_ZSt9terminatev`) is installed as
    //    `std::terminate` in scope `std` — a name lookup of the raw mangled string
    //    would miss it, but the funcsym is still at the same address the no-return
    //    scan saw. The name path is the fallback for an import that exists only as
    //    a differently-addressed PLT stub (e.g. when the scan's `.dynsym` address
    //    is 0 / unmapped but the PLT-named FunctionSymbol resolves by name).
    //    NOTE: the public Database method, NOT the private
    //    Architecture::set_function_no_return.
    let mut nr = out.noreturn.clone();
    nr.sort_by(|a, b| (a.addr, &a.name).cmp(&(b.addr, &b.name)));
    nr.dedup();
    for fact in &nr {
        // Address path (preferred): resolves a demangled/namespaced funcsym.
        let by_addr = if fact.addr != 0 {
            let addr = Address::new(Rc::clone(code_space), fact.addr);
            prog.arch()
                .symboltab
                .find_function_across_scopes(&addr)
                .map(|(sid, _)| sid)
        } else {
            None
        };
        let sid = match by_addr {
            Some(sid) => Some(sid),
            // Name fallback: an import with no function installed at `fact.addr`
            // (e.g. an undefined-address `.dynsym` entry whose only installed
            // FunctionSymbol is the PLT stub, resolved by its installed name).
            None => prog.arch().query_global_function(&fact.name).ok(),
        };
        // Neither resolves: the fact names a listing function that is no commit entry,
        // so give it its Function now, unless it is an entry's landing-pad successor
        // (the address just past an entry's 4-byte endbr64 or bti), which is mid-body.
        let inside_body = fact.addr >= 4
            && prog
                .arch()
                .symboltab
                .find_function_across_scopes(&Address::new(Rc::clone(code_space), fact.addr - 4))
                .is_some();
        let sid = match sid {
            None if fact.addr != 0 && !inside_body => {
                let addr = Address::new(Rc::clone(code_space), fact.addr);
                let _ = prog.ensure_function_symbol(addr.clone());
                prog.arch()
                    .symboltab
                    .find_function_across_scopes(&addr)
                    .map(|(sid, _)| sid)
            }
            other => other,
        };
        if let Some(sid) = sid {
            prog.arch_mut().symboltab.set_function_no_return(sid, true);
        }
    }

    // 3a'. (unlace, Ghidra-gap) Stash the `call error(nonzero,…)` prune list on the arch
    //      so `decompile-all` applies CALL_RETURN flow overrides per function (prunes the
    //      fall-through Ghidra also prunes). Empty unless the Listing + `noreturn_error`
    //      are on, so the datatest/console parity paths (no Listing) are unaffected.
    if !out.no_fallthru_calls.is_empty() {
        let mut sites = out.no_fallthru_calls.clone();
        sites.sort_unstable();
        sites.dedup();
        prog.arch_mut().error_noreturn_callsites = sites;
    }

    // (unlace `itaniumeh`) Park the call-site table and the two registers the
    // unwinder fills at a pad. Empty unless the gate is on.
    if !out.eh_call_sites.is_empty() || !out.msvc_eh_sites.is_empty() {
        let mut table = unlace_decomp::itaniumeh::EhTable::new(out.eh_call_sites.clone());
        let arch = prog.arch();
        let reg = |names: &[&str]| {
            names
                .iter()
                .find_map(|n| arch.get_register_varnode(n.as_bytes()).ok())
                .map(|v| (v.get_addr(), v.size as i32))
        };
        let (exc, sel): (&[&str], &[&str]) = if arch.archid.starts_with("x86:LE:64") {
            (&["RAX"], &["RDX"])
        } else if arch.archid.starts_with("x86") {
            (&["EAX"], &["EDX"])
        } else if arch.archid.starts_with("AARCH64") {
            (&["x0"], &["x1"])
        } else {
            (&["r0"], &["r1"])
        };
        table.exception_reg = reg(exc);
        table.selector_reg = reg(sel);
        // (unlace `msvceh`) The catch funclets entered as pads, with the parent's
        // frame register resolved.
        if !out.msvc_eh_sites.is_empty() {
            table.stack_reg = if arch.archid.starts_with("x86:LE:64") {
                reg(&["RSP"])
            } else {
                reg(&["ESP"])
            };
            table.establisher_reg = reg(&["RDX"]);
            let funclets = out
                .msvc_funclets
                .iter()
                .map(|f| unlace_decomp::itaniumeh::FuncletPad {
                    pad: f.pad,
                    frame: f.frame_reg.as_deref().and_then(|r| reg(&[r])),
                    frame_offset: f.frame_offset,
                    returns: f.returns.clone(),
                    x86: f.x86,
                    cleanup_end: f.cleanup_end,
                })
                .collect();
            table = table.with_msvc(out.msvc_eh_sites.clone(), funclets);
        }
        prog.arch_mut().unlace_states.set(std::rc::Rc::new(table));
    }

    // (unlace `callerreads`) Park where each direct call returns to. Empty without
    // the Listing, so the datatest/console parity paths are unaffected.
    if !out.call_returns.is_empty() {
        let mut sites = out.call_returns.clone();
        sites.sort_unstable();
        sites.dedup();
        prog.arch_mut().unlace_call_returns = sites;
    }

    // (unlace `kernelbug`) Park the `__bug_table` sites for the flow, sorted by
    // trap address. Empty on every image without the table.
    if !out.kernel_bugs.is_empty() {
        let mut sites = out.kernel_bugs.clone();
        sites.sort_by_key(|s| s.addr);
        sites.dedup_by_key(|s| s.addr);
        *prog
            .arch_mut()
            .unlace_tables
            .get_mut::<unlace_decomp::kernelbug::BugSites>() = sites;
    }

    // (unlace `poolextents`) Park the ARM32 literal-pool extents the Listing's
    // trusted instructions prove. Empty without the Listing; `funcboundflow`
    // gates their use at flow time.
    if !out.arm_pool_extents.is_empty() {
        let mut runs = out.arm_pool_extents.clone();
        runs.sort_unstable();
        runs.dedup();
        prog.arch_mut().arm_pool_extents = std::rc::Rc::new(runs);
    }

    // 3a''. (unlace `formatstring static`) Park the per-call-site printf/scanf
    //       prototype overrides the load-time resolver recovered, keyed by the
    //       CONTAINING function so the decompile step can hand exactly this
    //       function's sites to the FIRST drive. Empty unless the Listing and
    //       `formatstring` are both on, so the datatest/console parity paths
    //       (which never build a Listing) are unaffected.
    if !out.format_sites.is_empty() {
        let mut parked: std::collections::BTreeMap<
            u64,
            Vec<unlace_decomp::formatstring::ParkedFormatSite>,
        > = std::collections::BTreeMap::new();
        for site in &out.format_sites {
            parked.entry(site.func).or_default().push(
                unlace_decomp::formatstring::ParkedFormatSite {
                    callpoint: site.callpoint,
                    pieces: site.pieces.clone(),
                    format_slot: site.format_slot,
                    format_vma: site.format_vma,
                },
            );
        }
        for sites in parked.values_mut() {
            sites.sort_by_key(|s| s.callpoint);
            sites.dedup_by_key(|s| s.callpoint);
        }
        *prog
            .arch_mut()
            .unlace_tables
            .get_mut::<unlace_decomp::formatstring::ParkedSites>() = parked;
    }

    // (unlace) Park the prototypes a pass stated for single call instructions
    // (`unlace_decomp::callsiteproto`) and the interface instances the
    // `uefi` pass found installed.
    for (site, pieces) in &out.call_prototypes {
        prog.arch_mut()
            .unlace_callsite_protos
            .entry(*site)
            .or_insert_with(|| pieces.clone());
    }
    prog.arch_mut()
        .unlace_uefi_installs
        .clone_from(&out.uefi_installs);

    // (unlace `pushpadread`) The stack-argument count per format call site, carried
    // for the callee-body probe (not the varargs typing above, so independent of
    // the `formatstring` gate). gcc pushes a format call's stack arguments below
    // an alignment pad, and the probe uses this count to tell the two apart.
    if !out.format_sites.is_empty() {
        let model = prog.arch().default_fp().cloned();
        let stack_idx = prog
            .arch()
            .manage()
            .get_stack_space()
            .map(|sp| sp.get_index());
        if let (Some(model), Some(stack_idx)) = (model, stack_idx) {
            let mut map: std::collections::BTreeMap<u64, usize> = std::collections::BTreeMap::new();
            let void = prog.arch().types().get_type_void().ok();
            for site in &out.format_sites {
                let mut res = Vec::new();
                let mut pieces = site.pieces.clone();
                if pieces.outtype.is_none() {
                    pieces.outtype = void.clone();
                }
                if model
                    .assign_parameter_storage(
                        &pieces,
                        &mut res,
                        true,
                        prog.arch().types(),
                        prog.arch().manage(),
                    )
                    .is_ok()
                {
                    // res[0] is the return; the parameters follow. A parameter
                    // whose storage is in the stack space is a stack argument.
                    let n = res
                        .iter()
                        .skip(1)
                        .filter(|p| {
                            p.addr
                                .get_space()
                                .is_some_and(|sp| sp.get_index() == stack_idx)
                        })
                        .count();
                    map.insert(site.callpoint, n);
                }
            }
            prog.arch_mut().format_stack_args = Rc::new(map);
        }
    }

    // 3b. FID re-identification (the unlace analog of Ghidra's FID identification
    //     analyzer): RENAME a function whose instruction-stream fingerprint matched
    //     a known-library record. Unlike the SymFact arm (step 1) — an idempotent
    //     *add* that no-ops on an already-installed function — FID overwrites the
    //     engine placeholder name of a function that DOES exist. Resolution is by
    //     ADDRESS (`find_function_across_scopes`, the no-return arm's resolver).
    //
    //     The LABEL GATE (`is_generic_placeholder_name`) is unlace's analog of
    //     Ghidra's `!alwaysApplyFidLabels && hasUserOrImportedSymbols` gate: FID
    //     only ever overwrites the engine's OWN `sub_<addr>`/`func_<addr>`/`FUN_*`
    //     placeholder, NEVER a real `.symtab`/DWARF/imported name. On a stripped
    //     binary every function is a placeholder ⇒ FID fires; on a named binary it
    //     defers (the real name wins). A fact with no function at `addr`, or whose
    //     function already carries a real name, is the faithful no-op.
    for &(entry, body) in &out.function_bodies {
        if body > 0 {
            prog.function_bodies.insert(entry, body);
        }
    }
    //
    //     Metadata names (PDB, ObjC, Swift) go first, so a code-signature guess
    //     (FID, FLIRT) never replaces one. Signature names at one address apply
    //     only when every one of them agrees; FID and FLIRT disagreeing leaves
    //     the placeholder. A held name (`signature_vetoes`, a `fid strict`
    //     match without specific-hash support) joins that check but never
    //     applies alone.
    use unlace_analysis::pass::FidMatch;
    let (mut fids, guesses): (Vec<FidMatch>, Vec<FidMatch>) =
        out.fid_names.iter().cloned().partition(|m| !m.by_signature);
    fids.sort_by(|a, b| (a.addr, &a.name).cmp(&(b.addr, &b.name)));
    fids.dedup();
    let mut by_addr: BTreeMap<u64, BTreeSet<String>> = BTreeMap::new();
    for m in guesses {
        by_addr.entry(m.addr).or_default().insert(m.name);
    }
    for m in &out.signature_vetoes {
        if let Some(names) = by_addr.get_mut(&m.addr) {
            names.insert(m.name.clone());
        }
    }
    fids.extend(
        by_addr
            .into_iter()
            .filter(|(_, names)| names.len() == 1)
            .filter_map(|(addr, names)| {
                let name = names.into_iter().next()?;
                Some(FidMatch {
                    addr,
                    name,
                    by_signature: true,
                })
            }),
    );
    let mut signature_renames = Vec::new();
    for m in &fids {
        let addr = Address::new(Rc::clone(code_space), m.addr);
        let sid = prog
            .arch()
            .symboltab
            .find_function_across_scopes(&addr)
            .map(|(sid, _)| sid);
        if let Some(sid) = sid {
            if !is_generic_placeholder_name(prog.arch().symboltab.symbol(sid).get_name()) {
                continue;
            }
            if m.by_signature {
                if !signature_names.blocks(prog, m.addr, &m.name) {
                    signature_renames.push((addr, sid, m.name.as_str()));
                }
                continue;
            }
            prog.arch_mut().symboltab.rename_symbol(sid, &m.name)?;
            prog.register_symbol(&m.name, addr.clone());
            // (unlace) The new name brings what the name means: the
            // libc prototype and the no-return verdict.
            prog.apply_renamed_library_facts(sid, &m.name, &addr);
        }
    }
    let contested = signature_names::contested_addresses(
        signature_renames
            .iter()
            .map(|(addr, _, name)| (prog.thumb_normalized(addr.get_offset()), *name)),
    );
    for (addr, sid, name) in signature_renames {
        if !contested.contains(&prog.thumb_normalized(addr.get_offset())) {
            prog.arch_mut().symboltab.rename_symbol(sid, name)?;
            prog.register_symbol(name, addr.clone());
            prog.apply_renamed_library_facts(sid, name, &addr);
        }
    }

    // 3''. Lowest-priority names (`cvftrace`), after every other name source:
    //      only an existing placeholder is renamed, and never to a name that any
    //      function, data symbol or registered alias already uses.
    for m in &out.fallback_names {
        let addr = Address::new(Rc::clone(code_space), m.addr);
        let Some((sid, _)) = prog.arch().symboltab.find_function_across_scopes(&addr) else {
            continue;
        };
        let taken = prog.lookup_symbol(&m.name).is_some()
            || prog.lookup_data_alias(&m.name).is_some()
            || prog
                .arch()
                .symboltab
                .get_global_scope()
                .is_some_and(|global| {
                    !prog
                        .arch()
                        .symboltab
                        .find_by_name(global, &m.name)
                        .is_empty()
                });
        if taken || !is_generic_placeholder_name(prog.arch().symboltab.symbol(sid).get_name()) {
            continue;
        }
        prog.arch_mut().symboltab.rename_symbol(sid, &m.name)?;
        prog.register_symbol(&m.name, addr);
    }

    // 3'''. (unlace `thunknames`) A placeholder jump thunk takes its target's name
    //       behind `j_`, after every other name source has named the targets.
    let renamed_thunks = thunknames::commit(prog, code_space, &jump_thunks)?;
    if prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::analysisgates::Nullsubs>()
        .0
    {
        thunknames::name_nullsubs(prog, code_space, &out.entries)?;
    }

    // 4. Detected string literals: place a typelocked `char[len]` data symbol at
    //    each (the unlace analog of `DataUtilities.createData` for an ASCII string),
    //    so the engine+printer render the literal instead of the bare constant.
    //    Ghidra's StringsAnalyzer marks the data and locks its type; the typelock
    //    is what keeps the array char[N] type through type propagation.
    //    (unlace `widestrings`) The 2-byte width rides the same arm: a UTF-16LE
    //    literal gets a `wchar2[N]` (element count `len / 2`) instead of a
    //    `char[N]`, which is what makes the printer emit the `L` prefix and read the
    //    bytes two at a time (`L"ntdll.dll"` rather than `"n"`).
    //
    //    The wide facts are committed FIRST, and the order is the fix rather than a
    //    detail. Against `StringLiteralPass`'s own 1-byte facts the order is
    //    immaterial — a wide unit demands a zero high byte, so five consecutive
    //    1-byte-charset bytes never occur inside a wide run and neither width can
    //    reach the other's address. It matters against `operand_refs`, whose facts
    //    arrive in this same stream and whose run test accepts a SINGLE visible
    //    character: at a wide literal it reads the first unit's low byte and the
    //    high-byte NUL behind it as a complete `char[2]`, which is exactly the
    //    `LoadLibraryW("n")` defect. Whichever fact is planted first wins the
    //    `occupied` guard below, so the width that read the whole literal has to go
    //    first. The stream is dropped entirely when the gate is off — `off` is
    //    byte-identical to the 1-byte markup alone. (unlace `widestrings32`) The
    //    4-byte width (`wchar4[N]`, element count `len / 4`) goes before both on
    //    the same grounds, under its own gate.
    //    (unlace `fatstr`) The length-BOUNDED facts (`strings::strrecords`,
    //    Rust `&str` records) go before every scanned width: a record states the
    //    literal's exact extent where the NUL scan can only guess a run, and the
    //    occupied-address guard below then retires the glued row the NUL scan
    //    produced for the same address (the measured witness: three adjacent
    //    unterminated literals read back as one 39-byte string). A bounded
    //    fact's `len` is the exact element count — there is no terminator.
    let blob_extents = crate::blobdata::Extents::new(&out.blobs);
    let wide = if prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::analysisgates::Widestrings>()
        .0
    {
        out.wide_strings.as_slice()
    } else {
        &[]
    };
    let wide32 = if prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::analysisgates::Widestrings32>()
        .0
    {
        out.wide_strings32.as_slice()
    } else {
        &[]
    };
    //    The shared `len / char_size` element count stays exact for both: a
    //    terminated fact's len includes its NUL slot, a bounded fact's len IS
    //    the element count (char_size 1, no terminator byte to add).
    let typed_spans: Vec<(u64, u64)> = {
        let mut spans: Vec<(u64, u64)> = out
            .typed_data
            .iter()
            .map(|d| (d.addr, d.addr + d.type_.get_size().max(1) as u64))
            .collect();
        spans.sort_unstable();
        let mut merged: Vec<(u64, u64)> = Vec::with_capacity(spans.len());
        for (lo, hi) in spans {
            match merged.last_mut() {
                Some(last) if lo <= last.1 => last.1 = last.1.max(hi),
                _ => merged.push((lo, hi)),
            }
        }
        merged
    };
    let in_typed_span = |addr: u64| {
        let i = typed_spans.partition_point(|&(lo, _)| lo <= addr);
        i > 0 && addr < typed_spans[i - 1].1
    };
    //    A bounded literal that starts inside a NUL-scan row ends the row there:
    //    rustc packs literals back to back, so the row glues the literal before
    //    it to this one (IDA 9.5 rust.so splits at every referenced byte the
    //    same way).
    let narrow: Vec<unlace_analysis::pass::StringFact> = if prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::fatstr::FatStrMode>(
    )
        != unlace_decomp::fatstr::FatStrMode::Off
    {
        let mut starts: Vec<u64> = out.bounded_strings.iter().map(|f| f.addr).collect();
        starts.sort_unstable();
        out.strings
            .iter()
            .map(|f| {
                let i = starts.partition_point(|&s| s <= f.addr);
                match starts.get(i) {
                    Some(&s) if s < f.addr + u64::from(f.len) => {
                        unlace_analysis::pass::StringFact {
                            addr: f.addr,
                            len: (s - f.addr) as u32,
                        }
                    }
                    _ => *f,
                }
            })
            .collect()
    } else {
        out.strings.clone()
    };
    for (fact, char_size) in out
        .bounded_strings
        .iter()
        .map(|f| (f, 1u32))
        .chain(wide32.iter().map(|f| (f, 4u32)))
        .chain(wide.iter().map(|f| (f, 2u32)))
        .chain(narrow.iter().map(|f| (f, 1u32)))
    {
        if blob_extents.contains(fact.addr) {
            continue;
        }
        let addr = Address::new(Rc::clone(code_space), fact.addr);
        // Conservative guard: skip an address that already carries a symbol (an
        // existing data/function symbol must not be shadowed). Ghidra likewise
        // only lays string data where the listing is undefined.
        let occupied = {
            let arch = prog.arch();
            match arch.symboltab.get_global_scope() {
                Some(global) => {
                    arch.symboltab.find_function(global, &addr).is_some()
                        || arch.is_lazy_entry(addr.get_offset())
                        || arch
                            .symboltab
                            .find_container(global, &addr, 1, &Address::new_invalid())
                            .is_some()
                }
                None => false,
            }
        };
        if occupied || in_typed_span(fact.addr) {
            continue;
        }

        // char[len]: getTypeChar(getSizeOfChar()) -> getTypeArray(len, char). Both
        // are fallible TypeFactory queries (the type group must be built by now).
        // `fact.len` is the BYTE span including the terminator, so the array's
        // element count is `len / char_size` — identical for the 1-byte width.
        let ch = if char_size == 1 {
            prog.arch()
                .types()
                .get_type_char(prog.arch().types().get_size_of_char())?
        } else {
            // A language whose <coretypes> declares no 2- or 4-byte character type
            // has no `wchar2`/`wchar4` to plant. Skip the wide fact rather than fail
            // the whole commit — the 1-byte arm keeps its original hard failure.
            match prog.arch().types().get_type_char(char_size as int4) {
                Ok(ch) => ch,
                Err(_) => continue,
            }
        };
        let arr = prog
            .arch()
            .types()
            .get_type_array((fact.len / char_size) as i32, ch)?;

        // A cosmetic synthetic name `s_<addr>` (the symbol exists to carry the
        // char[N] type at the address; the printer renders the literal, not the
        // name). Placed in its namespace-resolved scope (global here).
        let name = format!("s_{:x}", fact.addr);
        let arch = prog.arch_mut();
        let (scope, base) = arch
            .symboltab
            .find_create_scope_from_symbol_name(&name, "::", None, num_spaces)?;
        let (sid, _) =
            arch.symboltab
                .add_symbol_mapped(scope, &base, arr, &addr, &Address::new_invalid())?;
        arch.symboltab
            .set_attribute(sid, unlace_decomp::varnode::varnode_flags::typelock);
    }

    // 4a'. (unlace `cfstrings`) Mach-O Core Foundation constant strings. Each
    //     `__cfstring` entry is typed a typelocked opaque `struct __CFString`
    //     symbol, whose pointer the factory spells `CFStringRef`, so a reference
    //     to the entry is a `CFStringRef`; AND the StringManager is seeded at the
    //     entry address with the string its char pointer resolved to, so the
    //     printer renders the literal (`CFSTR("launch-report")`) instead of
    //     `dat_<addr>`, across the CFString struct indirection it cannot follow
    //     on its own. The type spans the entry, never the string: a string-sized
    //     type would overrun the next entry and hide it behind this one's symbol.
    //     The seed goes in before the symbol, at char width 1, the width the
    //     printer reads an entry's string with. The entry ranges were marked
    //     read-only by the pass (arm 1b), which the route requires. A data
    //     symbol already on an entry keeps its name, but the entry is still
    //     seeded, and a symbol inside the entry, mapped before the paint, takes
    //     the read-only flag. Empty under `--option cfstrings off`.
    let cfstring_record = match out.cfstrings.first() {
        Some(fact) => unlace_decomp::cfstr::declare_types(
            prog.arch().types(),
            fact.size as i32,
            code_space.get_word_size(),
        )?,
        None => None,
    };
    for fact in &out.cfstrings {
        let addr = Address::new(Rc::clone(code_space), fact.addr);
        let (function, holder) = {
            let arch = prog.arch();
            match arch.symboltab.get_global_scope() {
                Some(global) => (
                    arch.symboltab.find_function(global, &addr).is_some()
                        || arch.is_lazy_entry(addr.get_offset()),
                    arch.symboltab
                        .find_container(global, &addr, 1, &Address::new_invalid())
                        .map(|e| {
                            let entry = arch.symboltab.entry(global, e);
                            let start = entry.addr.get_offset();
                            let end =
                                start.saturating_add(u64::try_from(entry.size).unwrap_or(u64::MAX));
                            let inside = start >= fact.addr
                                && end <= fact.addr.saturating_add(u64::from(fact.size));
                            (entry.symbol, inside)
                        }),
                ),
                None => (false, None),
            }
        };
        if function {
            continue;
        }
        prog.arch()
            .string_manager
            .borrow_mut()
            .base
            .register_string_at(&addr, &fact.bytes, 1);
        let arch = prog.arch_mut();
        arch.cfstring_entries.insert(fact.addr);
        if let Some((sid, inside)) = holder {
            if inside {
                arch.symboltab
                    .set_attribute(sid, unlace_decomp::varnode::varnode_flags::readonly);
            }
            continue;
        }
        let ty = match &cfstring_record {
            Some(record) if record.get_size() == fact.size as i32 => Rc::clone(record),
            _ => {
                let ch = prog
                    .arch()
                    .types()
                    .get_type_char(prog.arch().types().get_size_of_char())?;
                prog.arch().types().get_type_array(fact.size as i32, ch)?
            }
        };
        let name = format!("s_{:x}", fact.addr);
        let arch = prog.arch_mut();
        let (scope, base) = arch
            .symboltab
            .find_create_scope_from_symbol_name(&name, "::", None, num_spaces)?;
        let (sid, _) =
            arch.symboltab
                .add_symbol_mapped(scope, &base, ty, &addr, &Address::new_invalid())?;
        arch.symboltab
            .set_attribute(sid, unlace_decomp::varnode::varnode_flags::typelock);
    }

    // 4b. (unlace `libctypes`) Data symbols the analysis tier types outright — the
    //     stdio stream slots. Installed `typelock|namelock`: the name so the slot
    //     renders `stdout` rather than `dat_c088`, the TYPE because a dynamic
    //     relocation binding `stdout` is a declaration that the word holds a
    //     `FILE *`, not a guess type propagation may improve on. Without the
    //     typelock the two renderings of one global disagree inside a single
    //     binary — a function that also calls `__overflow(FILE *, int)` infers the
    //     stream, and one that only hands `stdout` to the image's own helper does
    //     not.
    //
    //     Placed BETWEEN the string literals (arm 4) and the loader data stream
    //     (arm 4a), so the two richer sources above still win every address they
    //     claim, and the loader's own untyped `undefined8` naming of the same slot
    //     is skipped by its `occupied` guard below. The stream is empty unless the
    //     `libctypes` gate is on (`LibcTypesPass` returns before it collects).
    for &(start, size) in &scs_ranges {
        let Some(end) = start
            .checked_add(size)
            .filter(|end| *end > start && *end - 1 <= code_space.get_highest())
        else {
            continue;
        };
        prog.arch_mut().symboltab.set_property_range(
            unlace_decomp::varnode::varnode_flags::volatil,
            &Address::new(Rc::clone(code_space), start),
            &Address::new(Rc::clone(code_space), end),
        );
    }
    let stream_syms = out.typed_data.as_slice();
    for fact in stream_syms {
        let addr = Address::new(Rc::clone(code_space), fact.addr);
        // A function symbol on an import slot only carries the import's name; the
        // slot is still a pointer word whose type the stream declares.
        let import_slot = prog.is_import_slot(fact.addr);
        let occupied = {
            let arch = prog.arch();
            match arch.symboltab.get_global_scope() {
                Some(global) => {
                    let names_import = |s: &unlace_decomp::database::Symbol| {
                        import_slot
                            && matches!(
                                s.kind,
                                unlace_decomp::database::SymbolKind::Function { .. }
                            )
                    };
                    (arch.symboltab.find_function(global, &addr).is_some() && !import_slot)
                        || arch.is_lazy_entry(addr.get_offset())
                        || arch
                            .symboltab
                            .find_container_matching(
                                global,
                                &addr,
                                1,
                                &Address::new_invalid(),
                                |s| !names_import(s),
                            )
                            .is_some()
                }
                None => false,
            }
        };
        if occupied {
            continue;
        }
        let name = data_names.name(&fact.name, fact.addr);
        let arch = prog.arch_mut();
        let (scope, base) = arch
            .symboltab
            .find_create_scope_from_symbol_name(&name, "::", None, num_spaces)?;
        let (sid, _) = arch.symboltab.add_symbol_mapped(
            scope,
            &base,
            Rc::clone(&fact.type_),
            &addr,
            &Address::new_invalid(),
        )?;
        arch.symboltab.set_attribute(
            sid,
            unlace_decomp::varnode::varnode_flags::typelock
                | unlace_decomp::varnode::varnode_flags::namelock,
        );
    }

    // 4a. Loader data symbols: the defined `STT_OBJECT` entries of `.symtab` /
    //     `.dynsym` (`ConsoleProgram::loader_data_objects`). Installed exactly like
    //     the DWARF data globals of arm 1a — an `undefined<size>` global with
    //     `namelock` only, so the container query matches at the real access width
    //     and type propagation still infers the object's real type — but committed
    //     HERE, last, so the two richer sources win every address they claim: a
    //     DWARF-described global keeps its DWARF extent (arm 1a) and a detected
    //     string literal keeps its `char[N]` typelock (arm 4). What is left is the
    //     set neither reaches, and that is precisely the interesting one: a
    //     copy-relocated libc extern (`optind`, `stdin`, `stdout`, `optarg`) has a
    //     `.bss` address and a `.dynsym` entry but no `.debug_info` DIE, so before
    //     this arm it rendered `dat_20a098`. IDA Pro and Ghidra both name data
    //     objects from the symbol table independently of debug info.
    //     The stream is collected at `load file` but committed HERE at `read
    //     symbols`; the stash is drained so a second `read symbols` does not
    //     re-commit.
    let loader_data_objects = std::mem::take(&mut prog.loader_data_objects);
    let global_widths: std::collections::BTreeMap<u64, u32> =
        out.global_widths.iter().copied().collect();
    for (sym_addr, name, size) in &loader_data_objects {
        let addr = Address::new(Rc::clone(code_space), *sym_addr);
        let occupied = {
            let arch = prog.arch();
            match arch.symboltab.get_global_scope() {
                Some(global) => {
                    arch.symboltab.find_function(global, &addr).is_some()
                        || arch.is_lazy_entry(addr.get_offset())
                        || arch
                            .symboltab
                            .find_container(global, &addr, 1, &Address::new_invalid())
                            .is_some()
                }
                None => false,
            }
        };
        if occupied {
            continue;
        }
        // `size` is a raw ELF/PE/Mach-O `st_size`: a `u64` read straight out of
        // attacker-controlled bytes that no header check validates. Clamp it into
        // the type factory's `int4` domain BEFORE the cast. Clamping after the cast
        // (`.max(1) as int4`) truncates first, so `0x1_0000_0000` became a size-0
        // type that `add_symbol_internal` rejects — aborting the WHOLE analysis
        // commit for the binary, not one symbol — and `0xffff_fff0` became a
        // NEGATIVE size that indexed the type factory's cache out of bounds and
        // took the process down. A declared extent is never trusted to be
        // representable. GH-339.
        let clamped = (*size).clamp(1, int4::MAX as u64) as int4;
        let width = global_widths.get(sym_addr).copied().unwrap_or(0) as int4;
        let ct = if width > 0 && width < clamped && clamped % width == 0 {
            let types = prog.arch().types();
            let elem = types.get_base(width, unlace_decomp::dtype::type_metatype::TYPE_UNKNOWN)?;
            types.get_type_array(clamped / width, elem)?
        } else {
            prog.arch()
                .types()
                .get_base(clamped, unlace_decomp::dtype::type_metatype::TYPE_UNKNOWN)?
        };
        let name = data_names.name(name, *sym_addr);
        let arch = prog.arch_mut();
        let (scope, base) = arch
            .symboltab
            .find_create_scope_from_symbol_name(&name, "::", None, num_spaces)?;
        let (sid, _) =
            arch.symboltab
                .add_symbol_mapped(scope, &base, ct, &addr, &Address::new_invalid())?;
        arch.symboltab
            .set_attribute(sid, unlace_decomp::varnode::varnode_flags::namelock);
    }

    // 4c. (unlace `blobs`) Embedded images and archives, last so every named or
    //     typed claim on the address is kept.
    crate::blobdata::commit(prog, code_space, &out.blobs, &mut data_names, num_spaces)?;

    // 4b. The C runtime declaration `elfmain` has for an executable's own
    //     `main`. Not parked on the symbol: the drive locks only its `int`
    //     return and names and types the parameters `main`'s own analysis
    //     recovers (`unlace_decomp::elfmaindecl`). Any prototype another
    //     stream parks on `main` (DWARF) wins outright.
    for (addr, pieces) in out.main_decl_at {
        prog.arch_mut().elfmain_main_decl =
            Some((Address::new(Rc::clone(code_space), addr), pieces));
    }

    // 5. Library prototypes (the unlace analog of ApplyDataArchiveAnalyzer): park each
    //    on its named global callee. `ActionDefaultParams` later copies the callee's
    //    prototype into the caller's call spec, so the argument constants get typed
    //    (e.g. `puts(char*)` types `0x400915` as a char pointer, which — with the
    //    read-only markup applied above and the StringManager — renders the string
    //    literal `puts("Username: ")`). A name with no matching FunctionSymbol is a
    //    silent no-op.
    //    (unlace `objcivars`) An Objective-C method whose class has an instance
    //    struct takes `self` as `Class *` instead of the encoding's `id`.
    let self_types: std::collections::HashMap<String, Rc<unlace_decomp::dtype::Datatype>> = if prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::objcivars::ObjcIvars>()
        .0
    {
        out.objc_self_types.into_iter().collect()
    } else {
        Default::default()
    };
    // (unlace `objcrettype`/`objcresolve`) The ObjC class table the engine types
    // and resolves message sends with; it rides the `objc` gate like the labels.
    if let Some(mut table) = out.objc_classes {
        if prog
            .arch()
            .unlace_options
            .get::<unlace_decomp::analysisgates::Objc>()
            .0
        {
            let data_slots: std::collections::HashSet<u64> =
                out.data_import_slots.iter().copied().collect();
            table.class_slot_at.extend(
                out.import_slot_names
                    .iter()
                    .filter(|(slot, _)| data_slots.contains(slot))
                    .filter_map(|(slot, name)| {
                        Some((
                            *slot,
                            name.trim_start_matches('_')
                                .strip_prefix("OBJC_CLASS_$_")?
                                .to_string(),
                        ))
                    }),
            );
            prog.arch_mut().unlace_states.set(Rc::new(table));
        }
    }
    // (unlace `xnutables`) The kalloc_type views' structs the engine types a
    // typed allocation's result with.
    if !out.kalloc_types.is_empty() {
        prog.arch_mut()
            .unlace_states
            .set::<unlace_decomp::kalloctype::KallocTypes>(Rc::new(
                out.kalloc_types.iter().cloned().collect(),
            ));
    }
    // (unlace `com`) The interface ids the engine types a COM request's
    // out-parameter by.
    if !out.com_interfaces.is_empty() {
        prog.arch_mut()
            .unlace_states
            .set(Rc::new(unlace_decomp::comtyping::ComInterfaces(
                out.com_interfaces.iter().cloned().collect(),
            )));
    }
    for mut pieces in out.prototypes {
        if let Some(st) = self_types.get(&pieces.name) {
            if let Some(first) = pieces.intypes.first_mut() {
                *first = Rc::clone(st);
            }
        }
        let name = pieces.name.clone();
        prog.arch_mut()
            .merge_function_prototype_pieces(&name, pieces);
    }

    // 5c. Library prototypes bound by ENTRY ADDRESS. Same
    //     store as 5, different key, and the key is the whole point: a PE import
    //     is registered TWICE (the size-0 IAT slot the engine constant-folds
    //     through and the `FF 25` thunk veneer a direct `call` targets), the
    //     global by-name query of step 5 answers with the slot, and
    //     `ActionDefaultParams` reads `callee_proto_pieces(entry)` at whichever
    //     one the call actually resolves to. Applied after 5 so an address-keyed
    //     signature wins over a by-name one for the same function, and before the
    //     C++ streams below so DWARF ground truth still wins over both.
    for (addr, pieces) in out.prototypes_at {
        let a = Address::new(Rc::clone(code_space), addr);
        prog.arch_mut()
            .merge_function_prototype_pieces_at(&a, pieces);
    }
    let held: Vec<_> = out
        .arm_float_prototypes
        .into_iter()
        .map(|(at, pieces)| (at.map(|a| Address::new(Rc::clone(code_space), a)), pieces))
        .collect();
    prog.arch_mut().arm_float_library_prototypes.extend(held);
    // (unlace `honestgaps`) What the load withheld, for the decompile to name.
    {
        let withheld = prog
            .arch_mut()
            .unlace_tables
            .get_mut::<unlace_decomp::honestgaps::WithheldPrototypes>();
        for (at, name, cause) in out.withheld_prototypes {
            withheld.record(at, &name, cause);
        }
    }

    // 5d. A C runtime import is `__cdecl` even where the image's default
    //     convention leaves the cleanup to each callee (`x86win.cspec`'s
    //     `__stdcall`), so its signature must not be read as bytes it pops.
    //     An x87 math intrinsic (`_CIsin`) keeps the x87 model bound in 7a.
    let default_pop_unknown = prog
        .arch()
        .default_fp()
        .is_some_and(|m| m.get_extra_pop() == unlace_decomp::fspec::EXTRAPOP_UNKNOWN);
    let cdecl = prog
        .arch()
        .get_model("__cdecl")
        .filter(|m| m.get_alias_parent().is_none())
        .filter(|m| m.get_extra_pop() != unlace_decomp::fspec::EXTRAPOP_UNKNOWN)
        .cloned();
    if let (true, Some(cdecl)) = (default_pop_unknown, cdecl) {
        for name in &out.c_runtime_imports {
            if unlace_decomp::x87intrinsic::is_intrinsic(name) {
                continue;
            }
            prog.arch_mut()
                .set_function_prototype_model(name, Rc::clone(&cdecl));
        }
    }

    // 5b. (unlace `cppsig`) The DEMANGLED prototypes, bound by entry address like
    //     the DWARF ones below. Applied BEFORE them on purpose: a mangled symbol
    //     carries a DECLARATION (which can disagree with the code a compiler
    //     actually emitted), DWARF carries ground truth, so wherever both reach a
    //     function the DWARF signature must be the one that survives. Empty when
    //     `--option cppsig off`. An MSVC declaration laid out for a named
    //     convention is parked with that model, and dropped where the spec does
    //     not register it as a model of its own (only an alias of the default),
    //     since its storage would then be the default's. It is also locked onto
    //     the symbol, as a `prototype` directive is, because a call through a PE
    //     import slot reads the symbol's prototype, not the parked pieces; and
    //     the address is recorded so the flow can make such a call direct.
    //     (unlace `msvcbyval`) An MSVC import applied open at a by-value class also
    //     parks its whole declaration for the call sites to size, and the entries
    //     that build an object at an address they are handed (a constructor, or an
    //     applied declaration returning a class by value) are recorded.
    let mut msvc_applied: std::collections::BTreeSet<u64> = std::collections::BTreeSet::new();
    for sig in cppsig_protos {
        let unlace_analysis::demangle::cppsig::SelectedSig {
            addr,
            pieces,
            model,
            msvc,
        } = sig;
        let a = Address::new(Rc::clone(code_space), addr);
        let model = match model {
            Some(name) => {
                let model = prog
                    .arch()
                    .get_model(name)
                    .filter(|m| m.get_alias_parent().is_none())
                    .cloned();
                let Some(model) = model else { continue };
                prog.arch_mut()
                    .set_function_prototype_model_at(&a, Rc::clone(&model));
                Some(model)
            }
            None => None,
        };
        if msvc {
            let target = crate::assertions::ProtoTarget::At(a.clone(), String::new());
            crate::assertions::lock_prototype_on_symbol(prog, &target, &pieces, model.as_ref());
            if let Some(space) = a.get_space() {
                prog.arch_mut()
                    .msvcsig_import_slots
                    .insert((space.get_index(), addr));
            }
            msvc_applied.insert(addr);
        }
        prog.arch_mut()
            .merge_function_prototype_pieces_at(&a, pieces);
    }
    let space_index = code_space.get_index();
    for (addr, decl) in msvc_byval {
        if msvc_applied.contains(&addr) {
            prog.arch_mut()
                .unlace_states
                .make_mut::<unlace_decomp::msvcbyval::ByvalDecls>()
                .insert((space_index, addr), decl);
        }
    }
    for (addr, kind) in msvc_builders {
        let applied =
            kind == unlace_decomp::msvcbyval::Builder::This || msvc_applied.contains(&addr);
        if applied {
            prog.arch_mut()
                .unlace_states
                .make_mut::<unlace_decomp::msvcbyval::Builders>()
                .insert((space_index, addr), kind);
        }
    }

    // 5a. (unlace `cppproto`) The DWARF prototypes bound by ENTRY ADDRESS. Applied
    //     AFTER the by-name pass so the address-resolved signature wins wherever
    //     both reach the same function — address is the key the read side already
    //     uses, and the only one that survives C++ (a demangled template name is
    //     normalized to `maxof`; a qualified name lives in a nested scope the
    //     global by-name query never reaches). Empty when the gate is off.
    for (addr, pieces) in out.cpp_dwarf.prototypes {
        let a = Address::new(Rc::clone(code_space), addr);
        prog.arch_mut()
            .merge_function_prototype_pieces_at(&a, pieces);
    }

    // 5f. (unlace `vtabletypes`) The typed vtables, after every prototype source
    //     above so a slot's function pointer carries the methods' signature.
    if typed_vtables {
        unlace_decomp::vtabletypes::install(prog.arch(), code_space, &out.cpp_vtables.classes)?;
        crate::iokittypes::commit(prog, code_space, &iokit)?;
        crate::msvcclasses::commit(prog, code_space, &out.cpp_vtables)?;
    }

    // 5e. (unlace `importvote`) The call sites of every PLT import, read by the
    //     engine when a function tail-calls one no declaration reached.
    let space = code_space.get_index();
    let sites: std::collections::HashMap<(i32, u64), Vec<u64>> = out
        .import_call_sites
        .into_iter()
        .map(|(stub, sites)| ((space, stub), sites))
        .collect();
    if !sites.is_empty() {
        prog.arch_mut().unlace_import_sites = Rc::new(sites);
    }
    for fact in go_prototypes {
        let a = Address::new(Rc::clone(code_space), fact.entry);
        if let Some(site) = fact.status_site {
            prog.arch_mut()
                .go_chanrecv_status_sites
                .insert(fact.entry, site);
        }
        prog.arch_mut()
            .set_go_dwarf_prototype_at(&a, fact.pieces, fact.string_input);
        if let Some(receiver) = fact.pointer_receiver {
            prog.arch_mut()
                .symboltab
                .attach_go_pointer_receiver(&a, receiver);
        }
    }

    // 6. Processor-context decode-mode paints (the unlace analog of ARM's
    //    `ARM_ElfExtension`/`ArmSymbolAnalyzer` `programContext.setValue(TMode,…)`).
    //    Paint each over the engine's ContextDatabase BEFORE any instruction is
    //    decoded (we are still inside bootstrap_from_object, before any `load
    //    function` decode — the timing the ARM Thumb mode requires). `end: None`
    //    is the single-address point set (paint-to-next-change-point, Ghidra's
    //    per-symbol `setValue(v,a,a,val)` shape); `Some(end)` paints the explicit
    //    `[addr, end)` range (the `$t`-run form).
    //
    //    CRITICAL gate-safety: `set_variable`/`set_variable_region` return Err when
    //    the named context variable is NOT registered by the active language (e.g.
    //    `TMode` on x86-64). That MUST be a SILENT no-op — otherwise every non-ARM
    //    ELF decompile would regress. The producing pass already gates on the
    //    object being ARM (so on a non-ARM binary `out.context_paints` is empty),
    //    and this swallow is the belt-and-suspenders second guard.
    prog.arch_mut().arm_inventory_modes = out
        .inventory_context_paints
        .iter()
        .filter_map(|paint| Some((paint.addr, paint.end?, paint.value)))
        .collect();
    for paint in &out.context_paints {
        let begin = Address::new(Rc::clone(code_space), paint.addr);
        // Drop the Result: an unregistered context variable (non-ARM language) is
        // a faithful no-op, mirroring ArmSymbolAnalyzer.canAnalyze == false.
        let _ = prog.arch().with_context_db_mut(|db| match paint.end {
            Some(end) => {
                let endad = Address::new(Rc::clone(code_space), end);
                db.set_variable_region(paint.var.as_bytes(), &begin, &endad, paint.value)
            }
            None => db.set_variable(paint.var.as_bytes(), &begin, paint.value),
        });
    }

    // 7. Tracked register VALUES (the unlace analog of MipsAddressAnalyzer's
    //    per-function register-value seeding / the console `set track <reg> <val>
    //    <start> <end>`). For each fact, resolve the register varnode and seed the
    //    constant, truncated to the register's width, over `[func_addr,
    //    func_addr+1)` via `create_set` — the exact `IfcSettrackedrange` recipe (ifacedecomp.rs IfcSettrackedrange). The
    //    per-function `build_arch_handle` then snapshots the track base into the
    //    per-function ArchContext (`tracked_sets = clone_trackbase()`), and `ActionConstbase` (S3)
    //    emits `COPY #val -> reg` at the entry block, which constant propagation
    //    consumes (so a MIPS PIC `$gp`-relative load resolves). Committed here, at
    //    `read symbols`, BEFORE any `load function` decode — the correct timing.
    //
    //    CRITICAL gate-safety (same shape as the context paints above):
    //    `get_register_varnode` returns Err when the named register is NOT defined
    //    by the active language (e.g. `t9` on x86-64). That MUST be a SILENT no-op —
    //    otherwise a non-MIPS decompile would regress. The producing pass already
    //    gates on the object being MIPS (so on a non-MIPS binary `out.tracked_regs`
    //    is empty), and this swallow is the belt-and-suspenders second guard.
    for fact in &out.tracked_regs {
        let Ok(loc) = prog.arch().get_register_varnode(fact.reg.as_bytes()) else {
            // Register not defined by this language (non-MIPS): faithful no-op.
            continue;
        };
        let begin = Address::new(Rc::clone(code_space), fact.func_addr);
        // `[func_addr, func_addr+1)` — the per-function point range Ghidra uses
        // (setRegisterValue(funcAddr, funcAddr, …)); +1 makes the [addr1, addr2)
        // create_set range non-empty (addr2 > addr1, as IfcSettrackedrange requires).
        let end = Address::new(Rc::clone(code_space), fact.func_addr.wrapping_add(1));
        let val = fact.value & unlace_base::address::calc_mask(loc.size as i32);
        prog.arch().with_context_db_mut(|db| {
            // C++ createSet(addr1,addr2); track = def (copy default as base); push —
            // the exact IfcSettrackedrange body for a ranged `set track`.
            let def = db.get_tracked_default().clone();
            let track = db.create_set(&begin, &end);
            *track = def;
            track.push(unlace_sleigh::globalcontext::TrackedContext { loc, val });
        });
    }
    for fact in &out.entry_tracks {
        let Ok(loc) = prog.arch().get_register_varnode(fact.reg.as_bytes()) else {
            continue;
        };
        let val = fact.value & unlace_base::address::calc_mask(loc.size as i32);
        let begin = Address::new(Rc::clone(code_space), fact.func_addr);
        let track = prog
            .arch_mut()
            .loader_entry_tracks
            .entry(begin)
            .or_default();
        if !track.iter().any(|seed| seed.loc == loc) {
            track.push(unlace_sleigh::globalcontext::TrackedContext { loc, val });
        }
    }

    // 7a. A function bound to a named prototype model without a signature: its
    //     parameters, and those of every direct call to it, are recovered under
    //     that model.
    commit_model_facts(prog, code_space, &out.models);

    // 7b. (unlace `swifttypes`) Register-pinned parameters: each resolved through
    //     the language's register table and parked on the function's entry in
    //     the shape of a console `map param`, which the decompile drive seeds
    //     the function's own decompile with. A register the language does not
    //     define is a silent no-op, as for the tracked registers above.
    if prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::analysisgates::Swifttypes>()
        .0
    {
        for fact in &out.swift_types.param_locks {
            let Ok(loc) = prog.arch().get_register_varnode(fact.reg.as_bytes()) else {
                continue;
            };
            let Some(space) = loc.space.clone() else {
                continue;
            };
            let piece = unlace_decomp::fspec::ParameterPieces {
                addr: Address::new(space, loc.offset),
                type_: Some(Rc::clone(&fact.type_)),
                flags: unlace_decomp::fspec::parameter_pieces_flags::TYPELOCK
                    | unlace_decomp::fspec::parameter_pieces_flags::NAMELOCK,
            };
            let entry = Address::new(Rc::clone(code_space), fact.func_addr);
            let locks = prog.arch_mut().loader_param_locks.entry(entry).or_default();
            locks.retain(|(i, _, _)| *i != fact.index);
            locks.push((fact.index, fact.name.clone(), piece));
        }
        // (unlace `swiftcall`) Declared prototypes from mangled names: the
        // pieces parked by address under their model, `self` pinned to the
        // `swiftself` register as explicit input storage.
        for fact in &out.swift_types.declared {
            let Some(model) = prog.arch().get_model(fact.model).cloned() else {
                continue;
            };
            let mut pieces = fact.pieces.clone();
            // A struct member's `self` arrives exploded into the argument
            // registers unless its body reads `swiftself` first (a mutating
            // member); a body that never touches the register got it exploded.
            let by_value = fact.exploded_self.clone().filter(|_| {
                unlace_analysis::analyzers::swift::self_first(
                    prog.arch().translate(),
                    code_space,
                    fact.self_reg,
                    fact.func_addr,
                ) != Some(true)
            });
            let self_slot = match (by_value, fact.self_slot) {
                (Some(t), Some(slot)) => {
                    if let Some(ty) = pieces.intypes.get_mut(slot as usize) {
                        *ty = t;
                    }
                    None
                }
                (_, slot) => slot,
            };
            if let Some(slot) = self_slot {
                let Ok(loc) = prog.arch().get_register_varnode(fact.self_reg.as_bytes()) else {
                    continue;
                };
                let Some(space) = loc.space.clone() else {
                    continue;
                };
                let Some(ty) = pieces.intypes.get(slot as usize).cloned() else {
                    continue;
                };
                pieces.input_storage.push((
                    slot,
                    unlace_decomp::fspec::ParameterPieces {
                        addr: Address::new(space, loc.offset),
                        type_: Some(ty),
                        flags: unlace_decomp::fspec::parameter_pieces_flags::TYPELOCK
                            | unlace_decomp::fspec::parameter_pieces_flags::NAMELOCK,
                    },
                ));
            }
            let a = Address::new(Rc::clone(code_space), fact.func_addr);
            if let Some((sid, _)) = prog.arch().symboltab.find_function_across_scopes(&a) {
                pieces.name = prog.arch().symboltab.symbol(sid).get_name().to_string();
            }
            prog.arch_mut().set_function_prototype_model_at(&a, model);
            prog.arch_mut().set_function_prototype_pieces_at(&a, pieces);
        }
        // (unlace `swiftcall`) Model-only bindings and the unlocked `self`
        // hints, the register again resolved through the language.
        commit_model_facts(prog, code_space, &out.swift_types.models);
        commit_input_hints(prog, code_space, &out.swift_types.input_hints);
        use unlace_decomp::swiftcall::{
            SWIFTASYNCCALL, SWIFTASYNCCALL_THROWS, SWIFTCALL, SWIFTCALL_THROWS,
        };
        // (unlace `swiftcall`) The runtime's `swiftasync` entry points, by
        // name: the caller's context pinned to the `swiftasync` register.
        if let Some((_, _, async_reg)) = out.swift_types.regs {
            let loc = prog.arch().get_register_varnode(async_reg.as_bytes()).ok();
            let model = prog.arch().get_model(SWIFTASYNCCALL).cloned();
            if let (Some(loc), Some(model)) = (loc, model) {
                for fact in &out.swift_types.runtime_context {
                    let Some(space) = loc.space.clone() else {
                        break;
                    };
                    let mut pieces = fact.pieces.clone();
                    let Some(ty) = pieces.intypes.get(fact.context_slot as usize).cloned() else {
                        continue;
                    };
                    pieces.input_storage.push((
                        fact.context_slot,
                        unlace_decomp::fspec::ParameterPieces {
                            addr: Address::new(space, loc.offset),
                            type_: Some(ty),
                            flags: unlace_decomp::fspec::parameter_pieces_flags::TYPELOCK
                                | unlace_decomp::fspec::parameter_pieces_flags::NAMELOCK,
                        },
                    ));
                    let name = pieces.name.clone();
                    prog.arch_mut()
                        .set_function_prototype_model(&name, Rc::clone(&model));
                    prog.arch_mut().set_function_prototype_pieces(&name, pieces);
                }
            }
        }
        let model = |name: &str| prog.arch().get_model(name).cloned();
        let reg = |name: &str| {
            let loc = prog.arch().get_register_varnode(name.as_bytes()).ok()?;
            Some((
                Address::new(loc.space.clone()?, loc.offset),
                loc.size as i32,
            ))
        };
        let models = (
            model(SWIFTCALL),
            model(SWIFTCALL_THROWS),
            model(SWIFTASYNCCALL),
            model(SWIFTASYNCCALL_THROWS),
        );
        if let (
            Some((self_reg, error_reg, async_reg)),
            (Some(plain), Some(throws), Some(asynccall), Some(asynccall_throws)),
        ) = (out.swift_types.regs, models)
        {
            if let (Some(self_reg), Some(error_reg), Some(async_reg)) =
                (reg(self_reg), reg(error_reg), reg(async_reg))
            {
                let maybe_self = out
                    .swift_types
                    .models
                    .iter()
                    .filter(|f| f.maybe_self)
                    .map(|f| (code_space.get_index(), f.func_addr))
                    .collect();
                let no_self = out
                    .swift_types
                    .no_self
                    .iter()
                    .map(|&f| (code_space.get_index(), f))
                    .collect();
                let swift_abi = Rc::new(unlace_decomp::swiftcall::SwiftAbi {
                    self_reg,
                    error_reg,
                    async_reg,
                    async_names: out
                        .swift_types
                        .async_imports
                        .iter()
                        .flat_map(|(n, throws)| {
                            let bare = n.strip_prefix('_').filter(|b| b.starts_with('$'));
                            std::iter::once((n.clone(), *throws))
                                .chain(bare.map(|b| (b.to_string(), *throws)))
                        })
                        .collect(),
                    async_context: prog
                        .arch()
                        .types()
                        .find_by_name("swift.AsyncContext")
                        .ok()
                        .flatten()
                        .and_then(|t| prog.arch().types().get_type_pointer(8, t, 1).ok()),
                    throws,
                    plain,
                    asynccall,
                    asynccall_throws,
                    maybe_self,
                    no_self,
                });
                prog.arch_mut().unlace_states.set(swift_abi);
            }
        }
    }

    // 7c. An Objective-C direct method's `self`, the same unlocked hint; a
    //     function Swift already hinted keeps that one.
    commit_input_hints(prog, code_space, &out.objc_self_hints);
    // 7c''. (unlace `dextrpc`) A DriverKit instance method's `this`, the same
    //       unlocked hint.
    commit_input_hints(prog, code_space, &out.dext_this_hints);
    // 7c'. (unlace `goitabcalls`) A stripped Go function's interface table word,
    //      typed from the static itabs its callers pass; a function another
    //      source already hinted keeps that hint.
    commit_input_hints(prog, code_space, &out.go_itab_inputs);

    // 7d. (unlace `swiftmetadata`) Each local Swift enum's case count by its
    //     metadata accessor: the bound of the table its `switch` indexes
    //     (`p2_lift/switchextent.rs`).
    prog.arch_mut().loader_swift_enum_cases =
        Rc::new(out.swift_enum_cases.iter().copied().collect());

    // 8. Call-fixups (the unlace analog of CallFixupAnalyzer's install loop): for
    //    each function the pass matched to a cspec call-fixup `<target>`, tag it
    //    with that fixup's inject id so the engine replaces the CALL with the fixup
    //    body (e.g. the `-pg` `mcount`/`__fentry__` profiling call dissolves). This
    //    is precisely the `IfcFixupApply` body (resolve fixup name → inject id;
    //    resolve function name → sid; set_function_inject_id), driven by the
    //    analyzer instead of by hand — and guarded by Ghidra's `getCallFixup()==null`
    //    check (`CallFixupAnalyzer.java:89`): only set when no fixup is already
    //    parked, so a hand-applied `fixup apply` is never clobbered. A name with no
    //    registered fixup or no matching FunctionSymbol is a silent no-op.
    //    Function names recovered by the analysis passes (PDB, DWARF, FID) are
    //    probed too, as Ghidra's analyzer probes every program function: an MSVC
    //    image names its CRT helpers only in its PDB.
    let map = unlace_analysis::callfixup::target_fixup_map(prog.arch());
    if !map.is_empty() {
        let names: std::collections::BTreeSet<&str> = out
            .call_fixups
            .iter()
            .map(|fact| fact.func_name.as_str())
            .chain(
                out.symbols
                    .iter()
                    .filter(|s| s.kind == SymKind::Function)
                    .map(|s| s.name.as_str()),
            )
            .collect();
        for func_name in names {
            if unlace_analysis::callfixup::call_fixup_name_for_function(func_name, &map).is_none() {
                continue;
            }
            // Every FunctionSymbol of that name: an ARM Thumb function also has an
            // `entry|1` twin, and calls resolve to the even entry.
            let Some(scope) = prog.arch().symboltab.get_global_scope() else {
                continue;
            };
            for sid in prog.arch().symboltab.query_by_name(scope, func_name) {
                install_named_call_fixup(prog.arch_mut(), sid, func_name);
            }
        }
        // A fact with an address names the FunctionSymbol there too: a Mach-O
        // import stub keeps its `sub_` name under an alias.
        for fact in &out.call_fixups {
            let Some(addr) = fact.addr else { continue };
            let a = Address::new(Rc::clone(code_space), addr);
            let arch = prog.arch();
            let Some(scope) = arch.symboltab.get_global_scope() else {
                continue;
            };
            let Some(sid) = arch.symboltab.find_function(scope, &a) else {
                continue;
            };
            install_named_call_fixup(prog.arch_mut(), sid, &fact.func_name);
        }
    }

    // 8. DWARF stack LOCALS (the unlace analog of `DWARFFunctionImporter`'s
    //    `commitLocal` loop — DWARF subtask 3): park each named, typed
    //    `DW_OP_fbreg` local on its owning function (by entry VMA). Unlike the
    //    other arms, a local is NOT installed into a persistent symbol table here:
    //    a function's `ScopeLocal` is built fresh per-decompile (it is owned by the
    //    transient `Funcdata`, not the global symboltab). So these are stashed and
    //    re-seeded into the rebuilt `Funcdata`'s stack scope at decompile time by
    //    `IfcDecompile` (via `dwarf_locals_for` -> the `map addr`/`seed_mapped_symbols`
    //    path) — exactly how the console carries a hand-typed `map addr` stack
    //    symbol across the IR rebuild. `stack_offset` is already in stack-space
    //    coordinates (`call_frame_cfa + fbreg`); the Address is built lazily at
    //    lookup so it binds the live stack space.
    for fact in out.locals {
        prog.dwarf_locals
            .push((fact.func_addr, fact.name, fact.type_, fact.stack_offset));
    }
    // 8a. (unlace `dwarfscopes`) DWARF parameters that arrive in a register,
    //     where the default model would put them elsewhere (a `regparm` or
    //     IPA-optimized callee): the function's own decompile takes them as
    //     `map param` locks, and its parked prototype states the storage for
    //     its callers. A function the model already describes is left alone,
    //     and so is one the model gives a hidden return pointer: the two then
    //     disagree about the return, which input storage cannot settle.
    let mut by_func: std::collections::BTreeMap<
        u64,
        Vec<(i32, String, unlace_decomp::fspec::ParameterPieces)>,
    > = std::collections::BTreeMap::new();
    for fact in &out.dwarf_param_regs {
        let Ok(vd) = prog.arch().get_register_varnode(fact.reg.as_bytes()) else {
            continue;
        };
        let Some(space) = vd.space.clone() else {
            continue;
        };
        let size = fact.type_.get_size() as u64;
        if size == 0 || size > u64::from(vd.size) {
            continue;
        }
        let offset = if space.is_big_endian() {
            vd.offset + u64::from(vd.size) - size
        } else {
            vd.offset
        };
        let piece = unlace_decomp::fspec::ParameterPieces {
            addr: Address::new(space, offset),
            type_: Some(Rc::clone(&fact.type_)),
            flags: unlace_decomp::fspec::parameter_pieces_flags::TYPELOCK
                | unlace_decomp::fspec::parameter_pieces_flags::NAMELOCK,
        };
        by_func.entry(fact.func_addr).or_default().push((
            fact.start as i32,
            fact.name.clone(),
            piece,
        ));
    }
    for (func, params) in by_func {
        let entry = Address::new(Rc::clone(code_space), func);
        let Some(mut pieces) = prog
            .arch()
            .symboltab
            .function_proto_pieces_across_scopes(&entry)
            .cloned()
        else {
            continue;
        };
        let modelled = prog.arch().default_fp().and_then(|model| {
            let mut res = Vec::new();
            let manager = prog.arch().manage();
            model
                .assign_parameter_storage(&pieces, &mut res, true, prog.arch().types(), manager)
                .ok()?;
            if res
                .iter()
                .any(|p| p.flags & unlace_decomp::fspec::parameter_pieces_flags::HIDDENRETPARM != 0)
            {
                return Some(true);
            }
            let inputs: Vec<Address> = res
                .iter()
                .skip(1)
                .filter(|p| {
                    p.flags & unlace_decomp::fspec::parameter_pieces_flags::HIDDENRETPARM == 0
                })
                .map(|p| p.addr.clone())
                .collect();
            Some(
                params
                    .iter()
                    .all(|(i, _, p)| inputs.get(*i as usize) == Some(&p.addr)),
            )
        });
        if modelled != Some(false) {
            continue;
        }
        for (index, name, piece) in params {
            pieces.input_storage.retain(|(i, _)| *i != index);
            pieces.input_storage.push((index, piece.clone()));
            let locks = prog
                .arch_mut()
                .loader_param_locks
                .entry(entry.clone())
                .or_default();
            locks.retain(|(i, _, _)| *i != index);
            locks.push((index, name, piece));
        }
        prog.arch_mut()
            .set_function_prototype_pieces_at(&entry, pieces);
    }
    // 8b. (unlace `dwarfscopes`) Register-held DWARF locals, parked on the
    //     architecture by function entry and mapped by the decompile at the
    //     use point of the value the register holds at `start`.
    for fact in out.dwarf_reg_locals {
        let Ok(vd) = prog.arch().get_register_varnode(fact.reg.as_bytes()) else {
            continue;
        };
        let Some(space) = vd.space.clone() else {
            continue;
        };
        let size = fact.type_.get_size() as u64;
        if size == 0 || size > u64::from(vd.size) {
            continue;
        }
        let offset = if space.is_big_endian() {
            vd.offset + u64::from(vd.size) - size
        } else {
            vd.offset
        };
        prog.arch_mut()
            .dwarf_reg_locals
            .entry(fact.func_addr)
            .or_default()
            .push((
                fact.name,
                fact.type_,
                Address::new(space, offset),
                fact.start,
            ));
    }

    // 9. Source-line comments from the DWARF and CVF trace analyzers.
    //    Each `.debug_line` row's `file:line` is installed into the architecture's
    //    `commentdb` as a `Comment::user2` (the instruction-comment type the C
    //    printer emits as a `/* … */` line at the op's address). The printer reads
    //    `arch.commentdb` at `print C` time and `CommentSorter` places each comment
    //    in the basic block holding its instruction. `func_addr`/`addr` build their
    //    Address in the code space; a duplicate (same fad,ad,text) is dropped by
    //    `add_comment_no_duplicate` (the script also de-dups via `appendComment`).
    //    Produced by opt-in source-line passes; empty otherwise, so
    //    the default output is byte-identical to before this arm.
    for fact in out.header_comments {
        let fad = Address::new(Rc::clone(code_space), fact.func_addr);
        prog.arch_mut().commentdb.add_comment_no_duplicate(
            unlace_decomp::comment::comment_type::HEADER,
            &fad,
            &fad,
            &fact.text,
        );
    }
    for fact in out.comments {
        let fad = Address::new(Rc::clone(code_space), fact.func_addr);
        let ad = Address::new(Rc::clone(code_space), fact.addr);
        prog.arch_mut().commentdb.add_comment_no_duplicate(
            unlace_decomp::comment::comment_type::USER2,
            &fad,
            &ad,
            &fact.text,
        );
    }

    crate::fidproto::apply(prog, code_space, out.fid_prototypes);

    // 10. (unlace `thunknames`) A renamed jump thunk takes its target's prototype,
    //     after every prototype stream above has parked its own.
    thunknames::inherit_prototypes(prog, code_space, &jump_thunks, &renamed_thunks);

    Ok(())
}

/// Bootstrap from a parsed XML document root (a `<binaryimage>` or a
/// `<decompilertest>` wrapping one), reading the arch id off the
/// `<binaryimage>` element.  Used by `load file` (path → parse → bootstrap).
pub fn bootstrap_from_root(
    root: &Rc<Element>,
    spec_roots: &[String],
) -> UnlaceResult<ConsoleProgram> {
    Bootstrap::new(spec_roots)
        .options(&LoadOptions::from_env_for_load())
        .xml_root(root)
}

/// The arch id and `<binaryimage>` a parsed XML document root names.
pub(crate) fn xml_root_image(root: &Rc<Element>) -> UnlaceResult<(Rc<Element>, String)> {
    let binaryimage = find_binaryimage(root)
        .ok_or_else(|| UnlaceError::lowlevel("Could not find binaryimage tag"))?;
    let arch_id = attr(&binaryimage, "arch")
        .ok_or_else(|| UnlaceError::lowlevel("<binaryimage> has no arch attribute"))?;
    Ok((binaryimage, arch_id))
}

/// The ELF magic (`\x7fELF`), used to route `load file` to the object path.
const ELF_MAGIC: [u8; 4] = [0x7f, b'E', b'L', b'F'];
// Mach-O magics (design §1.4). On-disk byte orders of `MH_MAGIC*`/`FAT_MAGIC`.
const MACHO_LE64: [u8; 4] = [0xcf, 0xfa, 0xed, 0xfe]; // 0xfeedfacf, little-endian
const MACHO_LE32: [u8; 4] = [0xce, 0xfa, 0xed, 0xfe]; // 0xfeedface, little-endian
const MACHO_BE64: [u8; 4] = [0xfe, 0xed, 0xfa, 0xcf]; // 0xfeedfacf, big-endian
const MACHO_BE32: [u8; 4] = [0xfe, 0xed, 0xfa, 0xce]; // 0xfeedface, big-endian
const MACHO_FAT: [u8; 4] = [0xca, 0xfe, 0xba, 0xbe]; // FAT_MAGIC (big-endian on disk)

/// The COFF `IMAGE_FILE_MACHINE_*` values that begin a bare COFF object — the
/// leading little-endian `u16` of a relocatable `.obj`/`.o` (no `MZ`/`PE` header).
/// Limited to the machines unlace ships a `.sla` for (mirrors the design's
/// "COFF machine-type prefix" set); an unknown machine simply isn't claimed as a
/// COFF object and falls through to the XML branch (or `object`'s own reject).

/// Does `bytes` look like an object-format binary the [`ObjectLoadImage`] loader
/// can drive (design §1.4)? This admits **all** the supported object formats
/// unconditionally — ELF, Mach-O (`0xfeedfac*` / fat `0xcafebabe`), PE (`MZ` DOS
/// stub — the typed parser validates the PE header downstream), and a bare COFF
/// object (a leading `IMAGE_FILE_MACHINE_*` `u16`). Anything else routes to the
/// XML branch. (Multi-format support was promoted from the former
/// `--experimental-formats` flag to the default in increment 46; the XML/datatest
/// corpus never carries a PE/Mach-O/COFF magic, so its dispatch is unchanged.)
fn is_object_binary(bytes: &[u8]) -> bool {
    if bytes.len() < 4 {
        return false;
    }
    let m: [u8; 4] = [bytes[0], bytes[1], bytes[2], bytes[3]];
    if m == ELF_MAGIC {
        return true; // ELF — always admitted (the established path).
    }
    // Mach-O thin (any of the four byte orders) or fat/universal.
    if matches!(
        m,
        MACHO_LE64 | MACHO_LE32 | MACHO_BE64 | MACHO_BE32 | MACHO_FAT
    ) {
        return true;
    }
    // PE: the `MZ` DOS stub. `object`'s typed PE parser validates the `PE\0\0`
    // header at the e_lfanew offset; a bare `MZ` that isn't a real PE will be
    // rejected there with a clean error (not silently mis-loaded).
    if &bytes[..2] == b"MZ"
        || unlace_analysis::loader::pe_dosmagic::is_pe_with_corrupt_dos_magic(bytes)
    {
        return true;
    }
    // Bare COFF object: a leading little-endian `IMAGE_FILE_MACHINE_*` machine
    // type (no DOS stub). Restricted to known machines so a coincidental 2-byte
    // prefix on XML/other input doesn't get mis-claimed.
    let machine = u16::from_le_bytes([bytes[0], bytes[1]]);
    PE_MACHINES.contains(&machine)
}

/// Reduce a Mach-O fat / universal binary to one arch slice's bytes — the single,
/// canonical slice-selection point at dispatch (design §3.4 / §8 PR-8). For a
/// thin (non-fat) input the `bytes` are returned **verbatim** (an exact, zero-copy
/// move), so the ELF / thin-Mach-O / PE / COFF paths are byte-identical.
///
/// The slice preference is, in order: an explicit `--slice <arch>` (the
/// `UNLACE_MACHO_SLICE` env var the CLI exports), then the `--target` token's
/// leading arch stem (so the existing language-override flag also steers the
/// slice), else the deterministic default (x86-64 → arm64 → first arch present).
/// A fat header that cannot be peeled (unparsable, or no usable slice) is left
/// untouched, so the downstream `object::File::parse` produces the existing
/// "Unsupported file format" error rather than this silently mis-loading.
fn select_macho_slice(bytes: Vec<u8>, slice: Option<&str>, target: &str) -> Vec<u8> {
    use unlace_analysis::loader::macho_fat::{peel_fat_image, slice_pref};
    peel_fat_image(bytes, slice_pref(slice, Some(target)))
}

/// An IMG4 / IM4P / compressed kernelcache, admitted while `kernelcache` is not off.
fn is_apple_container(bytes: &[u8]) -> bool {
    unlace_decomp::kernelcache::KernelcacheChoice::in_force()
        != unlace_decomp::kernelcache::KernelcacheChoice::Off
        && unlace_analysis::loader::kernelcache::is_container(bytes)
}

const RAW_IMAGE_INPUT_HINT: &str = "unrecognized input format; for a headerless image use --raw-image --target <SLEIGH-language-id> --base <address> and at least one --entry/--addr <address>";

/// Bootstrap from a file path (the `decomp_dbg` `load file [<target>] <path>`
/// body). Detects the format by its leading bytes: `VZ` routes to the direct TE
/// loader, an object-format magic ([`is_object_binary`]) routes to
/// [`ObjectLoadImage`], and a non-object is accepted as XML only when it parses
/// and contains the corpus's `<binaryimage>` element. Other bytes receive the
/// raw-image command guidance.
///
/// This mirrors the C++ `ArchitectureCapability::findCapability` dispatch: the
/// `xml` capability's `isFileMatch` claims a `<bi…` document, otherwise the BFD
/// path handles the real binary.  `target` is the optional `load file` target
/// token (the C++ BFD target / an explicit SLEIGH language id); it is honored on
/// the object path and ignored on the XML path (the XML carries its own `arch`).
///
/// [`is_object_binary`] admits ELF, PE, Mach-O and COFF; the XML / datatest
/// corpus never carries an object-format magic, so its dispatch routes to the XML
/// branch exactly as before.
pub fn bootstrap_from_file(
    path: &str,
    target: &str,
    spec_roots: &[String],
) -> UnlaceResult<ConsoleProgram> {
    Bootstrap::new(spec_roots)
        .target(target)
        .options(&LoadOptions::from_env_for_load())
        .file(path)
}

/// What [`bootstrap_from_file`] found at a path, by its leading bytes.
pub(crate) enum FileInput {
    Wasm(Vec<u8>),
    Mz(Vec<u8>),
    Te(Vec<u8>),
    Dex(Vec<u8>),
    Class(Vec<u8>),
    Esp(unlace_analysis::loader::firmware::esp::EspImage),
    Cil(Box<CilImage>),
    Retro(Vec<u8>),
    Object,
    Xml(Rc<Element>),
}

/// Read and classify the file [`bootstrap_from_file`] loads.
pub(crate) fn classify_file(path: &str) -> UnlaceResult<FileInput> {
    if unlace_analysis::loader::dyldcache::is_dyld_cache_file(Path::new(path))
        || unlace_analysis::image_bytes::ImageBytes::map_thin_macho(path)
            .ok()
            .flatten()
            .is_some()
    {
        return Ok(FileInput::Object);
    }
    let bytes = std::fs::read(path)
        .map_err(|e| UnlaceError::lowlevel(format!("Unable to recognize imagefile {path}: {e}")))?;
    if is_wasm_module(&bytes) {
        return Ok(FileInput::Wasm(bytes));
    }
    if is_mz_dos_image(&bytes) {
        return Ok(FileInput::Mz(bytes));
    }
    if is_te_image(&bytes) {
        return Ok(FileInput::Te(bytes));
    }
    if unlace_analysis::loadimage_dex::is_dex_image(&bytes) {
        return Ok(FileInput::Dex(bytes));
    }
    if unlace_analysis::loadimage_class::is_class_image(&bytes) {
        return Ok(FileInput::Class(bytes));
    }
    if let Some(image) = unlace_analysis::loader::firmware::esp::parse(&bytes) {
        return Ok(FileInput::Esp(image));
    }
    if let Some(image) = cil_image(&bytes) {
        return Ok(FileInput::Cil(Box::new(image)));
    }
    if unlace_analysis::loader::retroimage::is_retro_image(&bytes) {
        return Ok(FileInput::Retro(bytes));
    }
    if is_object_binary(&bytes) || is_apple_container(&bytes) {
        return Ok(FileInput::Object);
    }
    if !bytes
        .iter()
        .copied()
        .skip_while(u8::is_ascii_whitespace)
        .next()
        .is_some_and(|byte| byte == b'<')
    {
        return Err(UnlaceError::lowlevel(RAW_IMAGE_INPUT_HINT));
    }
    let mut store = DocumentStorage::new();
    let root = match store.parse_document(&bytes) {
        Ok(document) => document.get_root().clone(),
        Err(error) => {
            return Err(UnlaceError::lowlevel(format!(
                "{error}; {RAW_IMAGE_INPUT_HINT}"
            )));
        }
    };
    if find_binaryimage(&root).is_none() {
        return Err(UnlaceError::lowlevel(RAW_IMAGE_INPUT_HINT));
    }
    Ok(FileInput::Xml(root))
}

/// Iterate the opened [`LoadImageXml`]'s symbol records (name → address) into a
/// [`ProgramSymbol`] list (the `readLoaderSymbols` hook).
fn read_loader_symbols(loader: Option<&LoadImageXml>) -> Vec<ProgramSymbol> {
    match loader {
        Some(l) => read_loader_symbols_generic(l),
        None => Vec::new(),
    }
}

/// `readLoaderSymbols` over any opened [`LoadImage`] (the ELF path reuses this
/// against the [`ObjectLoadImage`]; the symbol must already be attached to a
/// space so `getNextSymbol` can build the `Address`).
fn read_loader_symbols_generic(loader: &dyn LoadImage) -> Vec<ProgramSymbol> {
    let mut out = Vec::new();
    loader.open_symbols();
    loop {
        let mut record = LoadImageFunc::default();
        if !loader.get_next_symbol(&mut record) {
            break;
        }
        let name = String::from_utf8_lossy(&record.name).into_owned();
        // (unlace `symbolnamebound`) Bound the loader's own name list to the same
        // scope path the symbol table will nest it under, so ONE spelling
        // reaches every surface -- `functions`, the `// Function:` header, the
        // emitted declaration and the call site. A no-op (borrowed, unallocated)
        // for every real name.
        let name = unlace_decomp::symbolnamebound::bound_scope_path(&name, "::").into_owned();
        out.push(ProgramSymbol {
            ordinal: 0,
            name,
            addr: record.address,
            object_location: None,
            binding: None,
            provenance: EntryProvenance::Mapped,
        });
    }
    out
}

/// A load image that errors on every read — handed to `build_translator` as the
/// placeholder before the real opened image replaces it (the C++ `DummyImg` /
/// e2e-gate shape).
struct NullLoad;

impl LoadImage for NullLoad {
    fn get_file_name(&self) -> &str {
        "null"
    }
    fn load_fill(&mut self, _ptr: &mut [u8], _addr: &Address) -> UnlaceResult<()> {
        Err(UnlaceError::data_unavail("null load image"))
    }
    fn get_arch_type(&self) -> Vec<u8> {
        Vec::new()
    }
    fn adjust_vma(&mut self, _adjust: i64) {}
}

/// Default the analysis-size bound (`load function`/`load addr` size 0 = the
/// function's natural extent), mirroring the C++ `IfcFuncload` / `IfcAddrrangeLoad`
/// unbounded follow.
pub const UNBOUNDED_SIZE: int4 = 0;

#[cfg(test)]
mod te_probe_tests;

#[cfg(test)]
mod tests;

#[cfg(test)]
mod symbolstream_tests;

/// (unlace) `UNLACE_ENTRY_TRACE`: print on stderr each function entry, and each
/// function symbol, a load-time or Listing-consumer pass commits, with the pass
/// id, so an inventory entry can be traced to its source. A value that parses
/// as a hex address (`0x4024d0`) restricts the trace to that address.
fn trace_entry_sources(id: &str, out: &unlace_analysis::pass::AnalysisOutput) {
    static WANT: std::sync::OnceLock<Option<Option<u64>>> = std::sync::OnceLock::new();
    let want = WANT.get_or_init(|| {
        unlace_base::env::var("UNLACE_ENTRY_TRACE").ok().map(|v| {
            u64::from_str_radix(v.trim().trim_start_matches("0x"), 16)
                .ok()
                .filter(|_| v.trim().starts_with("0x"))
        })
    });
    let Some(only) = want else {
        return;
    };
    let shown = |vma: u64| only.is_none_or(|w| w == vma);
    for &vma in out.entries.iter().filter(|&&vma| shown(vma)) {
        eprintln!("entry-source: {id} entry 0x{vma:x}");
    }
    for sym in out
        .symbols
        .iter()
        .filter(|s| matches!(s.kind, unlace_analysis::pass::SymKind::Function) && shown(s.addr))
    {
        eprintln!("entry-source: {id} function 0x{:x} {}", sym.addr, sym.name);
    }
}
