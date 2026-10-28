//! SSA construction via Cytron et al. 1991.
//!
//! Builds a dominator tree, computes dominance frontiers, inserts phi
//! functions (MULTIEQUAL), and performs variable renaming with monotonic
//! SSA version numbers.

use std::collections::{BTreeMap, BTreeSet, VecDeque};

use petgraph::algo::dominators::simple_fast;
use petgraph::stable_graph::StableDiGraph;

use crate::cfg::{ControlFlowGraph, build_cfg};
use crate::{ArchId, BlockId, Function, OsAbi, Varnode};

fn ssa_trace_enabled() -> bool {
    tracing::enabled!(target: "unlace::ssa", tracing::Level::DEBUG)
}

macro_rules! ssa_trace_line {
    ($($arg:tt)*) => {
        tracing::debug!(target: "unlace::ssa", "{}", format_args!($($arg)*))
    };
}

#[derive(
    Copy, Clone, Debug, PartialEq, Eq, Hash, PartialOrd, Ord, serde::Serialize, serde::Deserialize,
)]
pub struct SsaVarnode {
    pub base: Varnode,
    pub version: u32,
}

/// A phi (MULTIEQUAL) node at a block entry.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct PhiNode {
    pub output: SsaVarnode,
    pub inputs: Vec<(BlockId, SsaVarnode)>,
}

/// Wrapper around the petgraph dominator tree result.
#[derive(Clone, Debug, serde::Serialize, serde::Deserialize)]
pub struct DominatorTree {
    idom: BTreeMap<BlockId, BlockId>,
    children: BTreeMap<BlockId, Vec<BlockId>>,
    root: BlockId,
}

impl DominatorTree {
    pub fn new(
        idom: BTreeMap<BlockId, BlockId>,
        children: BTreeMap<BlockId, Vec<BlockId>>,
        root: BlockId,
    ) -> Self {
        Self {
            idom,
            children,
            root,
        }
    }

    pub fn root(&self) -> BlockId {
        self.root
    }

    pub fn idom(&self, block: BlockId) -> Option<BlockId> {
        self.idom.get(&block).copied()
    }

    pub fn children(&self, block: BlockId) -> &[BlockId] {
        self.children.get(&block).map_or(&[], |v| v.as_slice())
    }
}

/// Detected calling convention for a function.
///
/// Determined by [`CallingConventionDetectPass`](https://docs.rs/unlace-passes)
/// examining which argument registers are read before being written in the
/// function entry block.
#[derive(
    Copy, Clone, Debug, PartialEq, Eq, Hash, Default, serde::Serialize, serde::Deserialize,
)]
pub enum CallingConvention {
    /// System V AMD64 ABI: args in RDI, RSI, RDX, RCX, R8, R9; return in RAX.
    SystemV,
    /// Microsoft x64 ABI: args in RCX, RDX, R8, R9; return in RAX; 32-byte shadow space.
    MicrosoftX64,
    /// AArch64 (AAPCS64): args in X0–X7; return in X0.
    AArch64,
    /// 32-bit x86 cdecl: all args on stack (right-to-left), caller cleans up.
    Cdecl,
    /// 32-bit x86 stdcall: all args on stack (right-to-left), callee cleans up.
    Stdcall,
    /// 32-bit x86 thiscall: `this` in ECX, remaining args on stack, callee cleans up.
    Thiscall,
    /// Could not determine (insufficient evidence or unsupported architecture).
    #[default]
    Unknown,
}

impl std::fmt::Display for CallingConvention {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::SystemV => f.write_str("System V AMD64"),
            Self::MicrosoftX64 => f.write_str("Microsoft x64"),
            Self::AArch64 => f.write_str("AArch64 AAPCS64"),
            Self::Cdecl => f.write_str("cdecl"),
            Self::Stdcall => f.write_str("stdcall"),
            Self::Thiscall => f.write_str("thiscall"),
            Self::Unknown => f.write_str("unknown"),
        }
    }
}

/// Inferred signature of a function — return type and parameter types.
///
/// Populated by the inter-procedural type propagation pipeline after each
/// function has been individually analyzed. Keyed by function entry address
/// in the [`FunctionSignatureRegistry`] so that `Call` instructions whose
/// target is a constant address can look up callee types.
///
/// Param types are listed in calling-convention order (e.g. for SystemV:
/// RDI, RSI, RDX, RCX, R8, R9). An entry of [`PrimitiveType::Unknown`]
/// means the type was not determinable from the callee body alone.
#[derive(Clone, Debug, PartialEq, Eq, Default, serde::Serialize, serde::Deserialize)]
pub struct FunctionSignature {
    /// Inferred return type (corresponds to the value left in RAX/X0/etc.).
    pub return_type: PrimitiveType,
    /// Inferred parameter types in calling-convention order.
    pub param_types: Vec<PrimitiveType>,
    /// Calling convention used to interpret the parameter slots.
    pub calling_convention: CallingConvention,
}

/// Map from function entry address to its inferred [`FunctionSignature`].
///
/// Built by the CLI driver after a first analysis pass over every function
/// in the binary. On a second analysis pass, [`InterprocTypePropPass`] uses
/// this map at every `Call` instruction to refine caller-side argument and
/// return-value types.
pub type FunctionSignatureRegistry = BTreeMap<u64, FunctionSignature>;

/// Counterexample-guided explanation for an ambiguous primitive type.
///
/// Type refinement records these when two concrete candidates are both
/// locally plausible and a witness value can distinguish their semantics.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct TypeCounterexample {
    /// The SSA value whose candidate type set was ambiguous.
    pub varnode: SsaVarnode,
    /// Candidate selected by the refinement step.
    pub preferred: PrimitiveType,
    /// Other locally plausible candidate rejected by the witness.
    pub alternative: PrimitiveType,
    /// Concrete bit-vector value that exercises a semantic difference.
    pub witness: u64,
    /// Width of the witness in bits.
    pub width_bits: u8,
    /// Human-readable reason suitable for trace/debug output.
    pub reason: String,
}

/// Inferred primitive type for an SSA varnode.
///
/// The type lattice starts at [`Unknown`](Self::Unknown) and is refined by
/// [`TypeInferPass`](https://docs.rs/unlace-passes) as it walks instructions.
/// Width is in **bytes** (matching [`Varnode::size`](crate::Varnode::size)).
#[derive(
    Copy,
    Clone,
    Debug,
    PartialEq,
    Eq,
    Hash,
    PartialOrd,
    Ord,
    Default,
    serde::Serialize,
    serde::Deserialize,
)]
pub enum PrimitiveType {
    /// No type information yet — joins with anything to become that type.
    #[default]
    Unknown,
    /// Boolean (1 byte, value in {0, 1}).
    Bool,
    /// Integer of the given width in bytes (signedness ambiguous in MVP).
    Int(u8),
    /// Unsigned integer of the given width in bytes (used for zero-extend, unsigned div, etc.).
    UnsignedInt(u8),
    /// IEEE-754 binary32 (4 bytes).
    Float,
    /// IEEE-754 binary64 (8 bytes).
    Double,
    /// Pointer (size = pointer width, typically 8 on 64-bit targets).
    Ptr,
    /// SIMD register value (`__m128i`, `__m256`, ...).
    Vector(crate::types::VectorType),
}

impl PrimitiveType {
    /// Join two types in the lattice. `Unknown` yields the other; two equal
    /// concrete types stay; mismatched concrete types collapse to `Unknown`
    /// (conflict — recorded but not blocking).
    pub fn join(self, other: Self) -> Self {
        match (self, other) {
            (Self::Unknown, t) | (t, Self::Unknown) => t,
            (a, b) if a == b => a,
            // Int and UnsignedInt of same width — keep Int (less specific).
            (Self::Int(w), Self::UnsignedInt(w2)) | (Self::UnsignedInt(w2), Self::Int(w))
                if w == w2 =>
            {
                Self::Int(w)
            }
            (Self::Vector(a), Self::Vector(b)) => a.join(b).map_or(Self::Unknown, Self::Vector),
            // A SIMD value moved through memory or general integer ops of
            // its own width is still that vector.
            (Self::Vector(v), Self::Int(w) | Self::UnsignedInt(w))
            | (Self::Int(w) | Self::UnsignedInt(w), Self::Vector(v))
                if w == v.size() =>
            {
                Self::Vector(v)
            }
            // Conflict: collapse back to Unknown.
            _ => Self::Unknown,
        }
    }
}

impl std::fmt::Display for PrimitiveType {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::Unknown => f.write_str("unknown"),
            Self::Bool => f.write_str("bool"),
            Self::Int(w) => write!(f, "i{}", w * 8),
            Self::UnsignedInt(w) => write!(f, "u{}", w * 8),
            Self::Float => f.write_str("f32"),
            Self::Double => f.write_str("f64"),
            Self::Ptr => f.write_str("ptr"),
            Self::Vector(v) => write!(f, "{v}"),
        }
    }
}

/// Explicit gap between two recovered stack slots.
///
/// Surfaced by `StackPointerTrackingPass`. Distinct from
/// [`SsaFunction::stack_holes`]: that map covers every uncovered byte
/// range in `[min_sp_depth, 0)`; `FrameHole` only flags inter-slot gaps
/// whose width is suspicious (too large for a single saved register but
/// smaller than the widest known primitive type — 8 bytes on 64-bit ABIs).
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct FrameHole {
    /// RSP-relative offset of the hole's first byte.
    pub offset: i64,
    /// Byte length of the hole.
    pub size: u32,
}

/// A recovered stack variable at a fixed RSP-relative offset.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct StackVar {
    /// RSP-relative offset (negative = below entry RSP, e.g. -8 for first push).
    pub offset: i64,
    /// Human-readable name (e.g. `local_8`, `local_10`).
    pub name: String,
    /// Inferred primitive type from accesses.
    pub ty: PrimitiveType,
    /// SSA varnodes that access this stack slot (loads and stores).
    pub accesses: Vec<SsaVarnode>,
}

/// A raw DWARF local or parameter record staged before stack-offset
/// calibration. Carries the CFA-relative `frame_offset` and the per-function
/// `cfa_to_rbp_delta` derived from `.eh_frame` so the calibration step can
/// land the name onto the resolved stack slot.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct PendingDwarfLocal {
    /// CFA-relative `DW_OP_fbreg` offset from the loader.
    pub frame_offset: i64,
    /// Source identifier for this local/parameter.
    pub name: String,
    /// DWARF-rendered source type name, when present.
    #[serde(default)]
    pub type_name: Option<String>,
    /// DWARF byte size for the source type, when cheaply recoverable.
    #[serde(default)]
    pub byte_size: Option<u64>,
    /// Raw CFA-relative span from the loader, before calibration.
    #[serde(default)]
    pub raw_span: Option<DwarfStackLocalSpan>,
    /// Span after applying the selected per-function calibration delta.
    #[serde(default)]
    pub calibrated_span: Option<DwarfStackLocalSpan>,
    /// Per-function CFA→RBP delta from `.eh_frame` (the constant offset of
    /// the `CFA = RBP + offset` rule). `None` for no-frame-pointer / leaf
    /// functions, where no uniform shift is valid.
    pub cfa_to_rbp_delta: Option<i64>,
    /// `true` when the DWARF type is a bare struct / union / array aggregate
    /// the decl emitter cannot yet render faithfully — such slots are
    /// excluded from name calibration so a coalesced buffer is not de-fused
    /// into mistyped scalars (the `type_stack_o2` canary).
    pub is_aggregate: bool,
    /// `true` when this record is a spilled parameter home slot (consumed to
    /// drive duplicate-local suppression downstream).
    pub is_param: bool,
}

/// A byte span from DWARF stack-local metadata.
#[derive(Copy, Clone, Debug, PartialEq, Eq, Hash, serde::Serialize, serde::Deserialize)]
pub struct DwarfStackLocalSpan {
    /// Inclusive start offset in the corresponding frame coordinate space.
    pub start: i64,
    /// Number of bytes covered by the source variable.
    pub byte_size: u64,
}

#[derive(
    Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash, serde::Serialize, serde::Deserialize,
)]
pub enum PanicKind {
    Panic,
    BoundsCheck,
    UnwrapFailed,
    ExpectFailed,
    Abort,
}

impl std::fmt::Display for PanicKind {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::Panic => f.write_str("panic"),
            Self::BoundsCheck => f.write_str("index out of bounds"),
            Self::UnwrapFailed => f.write_str("unwrap on Err/None"),
            Self::ExpectFailed => f.write_str("expect failed"),
            Self::Abort => f.write_str("abort"),
        }
    }
}

/// Metadata for a Rust `Future::poll` state machine recovered from an async fn.
///
/// The pass records the pinned future base (`Pin<&mut T>`'s underlying `T`),
/// the generator-state byte/word offset, observed state constants, recursive
/// or nested poll call sites, and `Poll::{Ready, Pending}`-shaped returns.
/// Printers surface this as a recovered `async fn` while leaving the original
/// state-machine body available for inspection.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct RustAsyncInfo {
    /// SSA varnode holding the future/generator object base.
    pub future_base: SsaVarnode,
    /// Byte offset of the generator state/discriminant field from `future_base`.
    pub state_offset: u64,
    /// Observed state constants from comparisons and state-field stores.
    pub states: Vec<u64>,
    /// Call sites in the poll path, keyed as `(BlockId, insn_index)`.
    pub poll_calls: Vec<(BlockId, usize)>,
    /// `Poll::Ready` / `Poll::Pending` return shapes observed in this function.
    pub poll_returns: Vec<RustPollReturnKind>,
}

#[derive(
    Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash, serde::Serialize, serde::Deserialize,
)]
pub enum RustPollReturnKind {
    Ready,
    Pending,
}

/// Metadata for an indirect call resolved as a Rust trait object vtable dispatch.
///
/// Rust trait objects are fat pointers `(data_ptr, vtable_ptr)`. The vtable
/// is a struct `{ drop_fn, size, align, method_0, method_1, ... }`. A vtable
/// dispatch loads the vtable pointer from `[obj + 8]`, then loads a method
/// pointer from `[vtable + offset]`, then calls it indirectly.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct VtableCallInfo {
    /// The SSA varnode holding the base of the fat pointer (the trait object).
    pub base_varnode: SsaVarnode,
    /// Byte offset into the vtable from which the method pointer was loaded.
    pub vtable_offset: u64,
    /// Vtable slot index (`vtable_offset / 8`).
    ///
    /// - Slot 0: `drop_in_place` (destructor)
    /// - Slot 1: `size`
    /// - Slot 2: `align`
    /// - Slot 3+: trait methods in declaration order
    pub slot_index: usize,
}

/// Classification of an indirect call's resolved target set.
///
/// Companion metadata to [`SsaFunction::resolved_indirect_calls`] (which
/// stores only a single concrete address). The C printer / downstream
/// consumers use this enum to decide how to render the call site —
/// `Resolved` becomes a direct symbol, `VtableSlot` becomes a
/// `this->vftable[N]` slot, `ObjcSelector` becomes `[receiver sel]`,
/// `Multiple` becomes a comment listing candidates, and `Unknown` falls
/// back to the raw indirect printer.
///
/// Populated lazily and per-call-site by specialised passes:
/// - `Resolved` / `Multiple` / `Unknown` by
///   [`IndirectCallResolvePass`](https://docs.rs/unlace-passes).
/// - `VtableSlot` by `CppVtablePass`; `resolve_virtual_calls` names the
///   receiver class and slot method from RTTI.
/// - `ObjcSelector` by `ObjcDispatchPass` (separate follow-up).
#[derive(Clone, Debug, PartialEq, Eq, Hash, serde::Serialize, serde::Deserialize)]
pub enum TargetSet {
    /// Single direct target recovered by constant-pointer tracing.
    Resolved { addr: u64, name: String },
    /// Multiple plausible targets (e.g. a function pointer fed from
    /// several constant call sites within the same function body).
    Multiple(Vec<(u64, String)>),
    /// C++ virtual method call: dispatch is `receiver->vftable[slot_idx]`.
    VtableSlot {
        /// The object whose vptr was loaded, when the dispatch chain was
        /// traced back to it.
        receiver: Option<SsaVarnode>,
        /// Static class of the receiver; empty when unknown.
        class_name: String,
        slot_idx: u16,
        /// Method name of the slot (`speak`, `~Animal`) recovered from RTTI
        /// vtables.
        method: Option<String>,
    },
    /// Objective-C message send: selector is fixed, receiver class is
    /// dynamic.
    ObjcSelector(String),
    /// No analysis could identify the target — render as raw indirect.
    Unknown,
}

/// Kind of C++ variant-like discriminator recovered by `CppVariantPass`.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub enum CppVariantKind {
    /// `std::variant<Ts...>` — tag byte encodes the active alternative index.
    Variant,
    /// `std::optional<T>` — tag byte is 0 (empty) or 1 (engaged).
    Optional,
}

/// A recovered C++ `std::variant` / `std::optional` discriminator site.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct CppVariantDiscriminant {
    /// SSA varnode of the loaded tag byte.
    pub tag_sv: SsaVarnode,
    /// Location (block, insn index) of the LOAD that reads the tag.
    pub tag_load_loc: (BlockId, usize),
    /// Byte offset from the object base pointer where the tag lives.
    pub tag_offset: i64,
    /// Whether this is a full variant or an optional.
    pub kind: CppVariantKind,
    /// Map from tag constant value → human-readable alternative name.
    pub variants: std::collections::BTreeMap<u64, String>,
    /// Locations of comparison instructions that branch on the tag.
    pub comparison_locs: Vec<(BlockId, usize)>,
}

/// One Go `defer` registration recovered from `runtime.deferproc`.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct GoDeferSite {
    /// CFG block holding the defer registration call.
    pub defer_block: BlockId,
    /// Constant `*funcval` address passed to `runtime.deferproc`, or 0 when
    /// the deferred target is not statically known.
    pub deferred_func: u64,
    /// Whether the enclosing function also contains a `runtime.gorecover`
    /// call, indicating at least one deferred closure in the frame performs
    /// panic recovery.
    pub has_recover: bool,
}

/// Pipeline maturity level, modeled after Hex-Rays `sub_14B8B0`.
///
/// Each level represents a guarantee about what analysis has been performed
/// on the function. The pipeline driver advances maturity monotonically,
/// with the exception of the "type-changed" downgrade (`sub_F9180`
/// equivalent) which may reset to `Generated` to re-run optimization
/// with newly-discovered type facts.
///
/// Ordinal values match the IDA `mba_maturity_t` constants:
/// `MMAT_ZERO`=0 through `MMAT_LVARS`=6, plus our `Final`=7.
#[derive(
    Copy,
    Clone,
    Debug,
    Default,
    PartialEq,
    Eq,
    PartialOrd,
    Ord,
    Hash,
    serde::Serialize,
    serde::Deserialize,
)]
pub enum Maturity {
    /// Raw lifted IR, no optimization applied.
    #[default]
    Zero = 0,
    /// SSA built, initial microcode refinement complete.
    Generated = 1,
    /// Peephole/algebraic simplification done.
    PreOptimized = 2,
    /// Local dataflow, stack/frame recovery, intra-block opts done.
    LocalOpt = 3,
    /// Inter-procedural facts resolved (call targets, signatures).
    Calls = 4,
    /// Global optimization fixed-point converged.
    GlobalOpt = 5,
    /// Local variable allocation and naming complete.
    Lvars = 6,
    /// Ctree/HIR construction and final C output ready.
    Final = 7,
}

impl Maturity {
    /// Stable 0-based ordinal for serialization and diagnostics.
    pub const fn ordinal(self) -> u8 {
        self as u8
    }

    /// Human-readable short name for tracing/diagnostics.
    pub const fn name(self) -> &'static str {
        match self {
            Self::Zero => "M_ZERO",
            Self::Generated => "M_GENERATED",
            Self::PreOptimized => "M_PREOPTIMIZED",
            Self::LocalOpt => "M_LOCOPT",
            Self::Calls => "M_CALLS",
            Self::GlobalOpt => "M_GLBOPT",
            Self::Lvars => "M_LVARS",
            Self::Final => "M_FINAL",
        }
    }
}

#[derive(Clone, Debug, serde::Serialize, serde::Deserialize)]
pub struct SsaFunction {
    pub function: Function,
    /// Target architecture this function was lifted from.
    ///
    /// Batch 2: consulted by stack-recovery passes via
    /// [`crate::stack::StackSpec::for_arch`] so SP/FP register offsets are
    /// resolved per-arch instead of hard-coded to x86_64. Defaults to
    /// [`ArchId::Unknown(0)`] when constructed by [`build_ssa`]; the CLI
    /// pipeline overwrites it from the loaded `BinaryImage` before passes
    /// run.
    pub arch: ArchId,
    /// Platform ABI of the binary; [`OsAbi::Unknown`] from [`build_ssa`] until
    /// the CLI pipeline copies it from the `BinaryImage`.
    pub os_abi: OsAbi,
    /// Current pipeline maturity level. Initialized to [`Maturity::Zero`]
    /// in [`build_ssa`]; advanced by the pipeline driver as passes complete.
    /// May be downgraded by the type-changed check (sub_F9180 equivalent).
    pub maturity: Maturity,
    pub cfg: ControlFlowGraph,
    pub dom_tree: DominatorTree,
    /// Post-dominator tree computed from the reversed CFG.
    /// Used to find join points (convergence) for if/else and switch constructs.
    pub post_dom_tree: Option<DominatorTree>,
    pub phi_map: BTreeMap<BlockId, Vec<PhiNode>>,
    pub var_map: VarMap,
    pub var_types: BTreeMap<SsaVarnode, PrimitiveType>,
    /// Counterexample-guided refinements recorded for ambiguous primitive
    /// inferences. Populated by `TypeConstraintSolverPass` when Z3-style
    /// witness search finds a concrete value separating two candidates.
    pub type_counterexamples: Vec<TypeCounterexample>,
    pub calling_convention: CallingConvention,
    /// Recovered stack variables keyed by RSP-relative offset.
    pub stack_vars: BTreeMap<i64, StackVar>,
    /// Pre-optimization stack offset map. Keyed by (BlockId, insn_idx) of
    /// LOAD/STORE instructions. Value is the resolved RSP/RBP-relative offset.
    /// Populated before the fixedpoint loop; consumed by StackVarRecoveryPass.
    pub stack_offset_hints: BTreeMap<(BlockId, usize), i64>,
    /// SSA varnodes whose defining instruction can be folded inline as a
    /// sub-expression rather than emitted as a statement.
    /// Populated by [`ExpressionPass`](https://docs.rs/unlace-passes).
    pub foldable_exprs: BTreeSet<SsaVarnode>,
    /// Whether this function never returns to its caller (calls `exit`,
    /// `abort`, `panic`, etc.).
    /// Populated by [`NoreturnDetectPass`](https://docs.rs/unlace-passes).
    pub noreturn: bool,
    /// Blocks whose terminator is a tail call (unconditional branch to an
    /// address outside the function). Maps `BlockId → target address`.
    /// Populated by [`TailCallDetectPass`](https://docs.rs/unlace-passes).
    pub tail_call_map: BTreeMap<BlockId, u64>,
    /// Canonical C variable names after SSA version merging.
    ///
    /// Multiple `SsaVarnode`s sharing the same base [`Varnode`] map to the
    /// same name. Populated by `VariableMergePass`.
    pub merged_names: BTreeMap<SsaVarnode, String>,
    pub enum_discriminants: Vec<EnumDiscriminant>,
    /// Recovered C++ `std::variant`/`std::optional` discriminator sites.
    pub cpp_variant_discriminants: Vec<CppVariantDiscriminant>,
    pub panic_sites: BTreeMap<(BlockId, usize), PanicKind>,
    /// Go `defer` registrations keyed only by discovery order. Populated by
    /// the CLI pipeline from symbol-aware runtime-helper matching.
    pub go_defer_sites: Vec<GoDeferSite>,
    /// Rust async state-machine metadata, when this function looks like a
    /// lowered `Future::poll` implementation for an `async fn`.
    pub rust_async: Option<RustAsyncInfo>,
    /// Indirect calls resolved as Rust trait object vtable dispatches.
    /// Keyed by `(BlockId, insn_index)` of the `CALLIND` instruction.
    /// Populated by [`RustVtablePass`](https://docs.rs/unlace-passes).
    pub vtable_calls: BTreeMap<(BlockId, usize), VtableCallInfo>,
    /// Indirect calls resolved as C++ virtual method dispatches.
    /// Pattern: `CALLIND(LOAD(LOAD(this + 0) + N))` — vptr at offset 0.
    /// Populated by `CppVtablePass`.
    pub cpp_vtable_calls: BTreeMap<(BlockId, usize), VtableCallInfo>,
    /// Indirect calls recognized as ObjC `objc_msgSend` dispatches.
    /// Keyed by `(BlockId, insn_index)` of the `CALL`/`CALLIND` instruction.
    /// Value is the annotation string (e.g. `"objc_msgSend(self, selector)"`).
    pub objc_dispatch_calls: BTreeMap<(BlockId, usize), String>,
    /// Go `defer` / `recover` runtime calls rendered in source style.
    /// Keyed by `(BlockId, insn_index)` of the runtime `CALL`; the value is a
    /// printer-ready annotation such as `"defer funcval"`, `"recover()"`, or
    /// `"deferreturn"`.
    pub go_defer_recover_calls: BTreeMap<(BlockId, usize), String>,
    /// Inferred function parameters from calling convention register usage.
    /// Each entry is `(name, type)` — e.g. `("a1", PrimitiveType::Int(8))`.
    /// Populated by [`ParamInferPass`](https://docs.rs/unlace-passes).
    pub inferred_params: Vec<(String, PrimitiveType)>,
    /// Inferred return type from RETURN instruction analysis.
    /// Populated by [`ReturnTypeInferPass`](https://docs.rs/unlace-passes).
    pub inferred_return_type: PrimitiveType,
    /// Instructions identified as prologue/epilogue frame setup code.
    /// Keyed by `(BlockId, insn_index)`. Populated by
    /// [`PrologueElimPass`](https://docs.rs/unlace-passes).
    pub frame_setup_insns: BTreeSet<(BlockId, usize)>,
    /// Optional DWARF-provided names for stack variables, keyed by
    /// frame-pointer-relative offset (matches
    /// `LocalVariable::frame_offset` from the loader). Populated by the
    /// pipeline when DWARF info is available; consumed by
    /// [`StackVarRecoveryPass`](https://docs.rs/unlace-passes) to override
    /// the synthesised `local_X` names.
    pub dwarf_local_names: BTreeMap<i64, String>,
    /// Stack offsets (in the same calibrated space as `dwarf_local_names`)
    /// whose DWARF type is a bare struct / union / array aggregate. The
    /// array-fusion guard consults this so that two *aggregate*-named slots
    /// may still coalesce into one byte buffer (e.g. a `struct` + array that
    /// share a frame region), while two distinct *scalar*-named slots
    /// (`int a, b, c, d, e;`) are kept separate.
    pub dwarf_aggregate_offsets: BTreeSet<i64>,
    /// Raw, *uncalibrated* DWARF local/parameter records staged by the
    /// pipeline at SSA-build time and consumed by the structural-stage
    /// calibration step once real stack-access offsets are known. The
    /// `frame_offset` is the CFA-relative `DW_OP_fbreg` offset; calibration
    /// applies the per-function `cfa_to_rbp_delta` (carried on each record)
    /// to land the name/type on the resolved stack slot. Empty when no DWARF
    /// info is present or after calibration has cleared it.
    pub pending_dwarf_locals: Vec<PendingDwarfLocal>,
    /// Composite (struct/array/typed-pointer) types inferred from stack-slot
    /// layout or DWARF. Keyed by the starting RSP-relative offset of the
    /// composite. Populated by
    /// [`StackVarRecoveryPass`](https://docs.rs/unlace-passes) when adjacent
    /// stack slots share a primitive type.
    pub inferred_structs: BTreeMap<i64, crate::types::Type>,
    /// Per-varnode composite types that should survive primitive type
    /// inference. The lattice for `var_types` is intentionally primitive
    /// (`Copy`, no recursion); when the loader resolves a DWARF `Type::Struct`
    /// or `Type::Array` for a particular SSA varnode it goes here so passes
    /// like [`TypeInferPass`](https://docs.rs/unlace-passes) can preserve
    /// the richer information end-to-end.
    pub composite_var_types: BTreeMap<SsaVarnode, crate::types::Type>,
    /// Detected array stride for an `INT_ADD` / `PTRADD` instruction whose
    /// second operand is `idx * stride`. Keyed by `(BlockId, insn_idx)` of
    /// the addition. Stride values 1/2/4/8 imply byte / word / dword /
    /// qword element sizes respectively. The C printer uses this to recover
    /// `base[idx]` array subscripts in place of raw pointer arithmetic.
    pub array_strides: BTreeMap<(BlockId, usize), u64>,
    /// Inferred signatures of *other* functions in the binary, keyed by their
    /// entry address. Populated by the CLI driver between two analysis
    /// passes so the inter-procedural type propagation pass can refine
    /// caller-side argument and return-value types at every `Call`
    /// instruction whose target is a constant address.
    ///
    /// Empty by default — single-function decompilation has no peer info.
    pub external_signatures: FunctionSignatureRegistry,
    /// Exception-handling landing-pad addresses for this function, recovered
    /// from `.eh_frame` + `.gcc_except_table` (LSDA call-site table).
    ///
    /// Each entry is the absolute virtual address of a landing pad — the
    /// first instruction of a catch / cleanup handler reachable from a
    /// `try`-protected call site within this function. Empty for functions
    /// without LSDA data (pure C, no try/catch, missing unwind tables).
    ///
    /// Populated by the CLI pipeline; consumed by
    /// `unlace_struct::structure_with_landing_pads` to materialise
    /// `HirNode::TryCatch` nodes at the correct boundaries instead of
    /// relying on `__cxa_begin_catch` call-site heuristics.
    pub eh_landing_pads: BTreeSet<u64>,
    /// Typed catch arms recovered for each EH landing pad. Keyed by landing
    /// pad VA; each value is the ordered action-chain catch type list decoded
    /// from LSDA type filters. A `PrimitiveType::Unknown` entry denotes the
    /// Itanium catch-all sentinel (`catch (...)`).
    ///
    /// This refines [`Self::eh_landing_pads`]: the set still answers "where is
    /// the handler?", while this map answers "what does it catch?".
    pub eh_landing_pad_catches: BTreeMap<u64, Vec<crate::types::Type>>,
    /// EH landing pads that are cleanup-only regions rather than catch
    /// handlers. Itanium LSDA call-site entries encode these as landing pads
    /// with no catch action chain; the structurer renders them as
    /// `TryFinally` instead of manufacturing a catch-all handler.
    pub eh_cleanup_landing_pads: BTreeSet<u64>,
    /// Detected stack-frame gaps (regions of the local frame that no
    /// LOAD/STORE/Stack-space access has covered). Keyed by RSP-relative
    /// start offset; value is the gap's byte length. Populated by
    /// [`StackVarRecoveryPass`](https://docs.rs/unlace-passes); only gaps
    /// strictly larger than 8 bytes (heuristic for real explicit storage
    /// rather than ABI alignment padding) are recorded.
    pub stack_gaps: BTreeMap<i64, u32>,
    /// Total local-frame size in bytes recovered from the entry-block
    /// prologue (`sub rsp, K` ⇒ `K`). Zero when the prologue is missing or
    /// could not be matched.
    pub frame_size: u32,
    /// Per-instruction stack-pointer delta relative to function entry,
    /// keyed by `(BlockId, insn_index)`. Populated by
    /// [`StackPointerTrackingPass`](https://docs.rs/unlace-passes). Mirrors
    /// IDA's `add_auto_stkpnt`: lets later passes reason about mid-function
    /// frame growth (alloca, dynamic stack arrays, struct-return holes).
    pub sp_delta_at: BTreeMap<(BlockId, usize), i64>,
    /// Frame-region holes: byte ranges in `[min_sp_depth, 0)` not covered
    /// by any recovered `stack_var`. Keyed by RSP-relative offset; value
    /// is the hole's byte size. Mirrors IDA's `func_has_stkframe_hole`.
    pub stack_holes: BTreeMap<i64, u32>,
    /// Whether the function adjusts RSP by a non-constant value mid-body
    /// (alloca / dynamic stack arrays). When true the C printer emits an
    /// explanatory comment in the function preamble.
    pub dynamic_sp: bool,
    /// SP delta at the *entry* of each block, relative to function entry.
    /// The entry block's delta is always `0`; successor blocks inherit the
    /// fall-through delta from their CFG predecessor. Computed by
    /// [`StackPointerTrackingPass`](https://docs.rs/unlace-passes).
    pub block_entry_sp_delta: BTreeMap<BlockId, i64>,
    /// Inter-slot gaps detected in the recovered stack layout. See
    /// [`FrameHole`] for the precise definition; this is a strictly
    /// additive companion to [`Self::stack_holes`].
    pub frame_holes: Vec<FrameHole>,
    /// Stack slot offsets (RSP-relative) that hold callee-saved registers
    /// stashed by the prologue. Surfaced so later passes / the printer
    /// can render those slots as `saved_<reg>` rather than as `local_*`.
    pub saved_register_slots: BTreeSet<i64>,
    /// Type associated with an `IrInsn` whose constant operand was
    /// recognised as `sizeof(T)`. Keyed by `(BlockId, insn_index)`. The
    /// IR has no `Sizeof` opcode (the 75-opcode spec is frozen), so this
    /// side-map is the IR producer's output: callers consult it to render
    /// `sizeof(struct Foo)` in place of the literal byte count. Populated
    /// by [`SizeofRecognitionPass`](https://docs.rs/unlace-passes).
    pub sizeof_type_map: BTreeMap<(BlockId, usize), crate::types::Type>,
    /// Type associated with an `IntAnd` whose mask was recognised as the
    /// bit-pattern for `alignof(T)`. Keyed by `(BlockId, insn_index)`.
    /// Companion to `sizeof_type_map`.
    pub alignof_type_map: BTreeMap<(BlockId, usize), crate::types::Type>,
    /// Indirect calls (`Callind`) for which a unique concrete target address
    /// has been recovered (e.g. via constant function pointers, vtable-slot
    /// reads of read-only memory). Keyed by `(BlockId, insn_index)` of the
    /// `Callind`; value is the resolved callee address. Populated by
    /// [`IndirectCallResolvePass`](https://docs.rs/unlace-passes).
    pub resolved_indirect_calls: BTreeMap<(BlockId, usize), u64>,
    /// Per-call-site classification of an indirect call's recovered target
    /// set. Keyed by `(BlockId, insn_index)` of the `Callind` (or `Call`
    /// for ObjC `objc_msgSend`). See [`TargetSet`] for variant semantics.
    ///
    /// This is *metadata* — emitters consult it to decide how to render
    /// the call, but it does not replace
    /// [`Self::resolved_indirect_calls`] (which remains the
    /// singleton-address fast path consumed by interprocedural type
    /// propagation).
    pub indirect_call_targets: BTreeMap<(BlockId, usize), TargetSet>,
    /// Inferred argument types for variadic-tail slots at each call site.
    /// Keyed by `(BlockId, insn_index)` of a `Call`/`Callind`; value is the
    /// list of `PrimitiveType`s in argument order, starting at the first
    /// variadic slot (i.e. after the fixed-parameter prefix). Populated by
    /// [`VarargDetectPass`](https://docs.rs/unlace-passes) primarily for
    /// printf-family format-string parsing.
    pub variadic_call_types: BTreeMap<(BlockId, usize), Vec<PrimitiveType>>,
    /// Monotonically increasing counter of *observable signature changes*:
    /// flips of `inferred_params`, `inferred_return_type`, or `noreturn`.
    /// The reanalysis fixpoint loop in `unlace-passes::reanalysis` snapshots
    /// this before re-running per-function refinement passes; if it bumps,
    /// every caller of this function is re-enqueued so its inferred call
    /// arguments / return-type slots can be refined to match.
    pub signature_revision: u64,
    /// Per-operand type bindings (struct-offset / enum-constant) attached to
    /// individual instruction inputs. Populated by `OpTypeBindingPass`;
    /// consumed by the C printer to render `s->field` and enum variant
    /// names instead of raw offsets and integer literals.
    pub op_bindings: OpTypeBindings,
    /// Recovered Objective-C `__block` (byref) variable boxes, keyed by
    /// the box's base [`Varnode`] (typically the alloca address on the
    /// stack frame). Populated by `unlace_passes::objc_byref::apply_objc_byref`
    /// and consumed by the C printer to render the alloca as
    /// `__block T name;` instead of the unnamed 40-byte struct.
    pub byref_boxes: BTreeMap<Varnode, ByrefBox>,
    /// Synthesised stack frame layout: one [`StackLocal`] per distinct
    /// RSP/RBP-relative offset observed in LOAD/STORE addresses, together
    /// with the inferred frame bounds. Populated by
    /// [`unlace_passes::stack_frame_recovery::recover_stack_frame`] after
    /// the SSA pipeline reaches steady state. `None` until the recovery
    /// pass has run.
    ///
    /// This is a higher-level companion to [`Self::stack_vars`]: where
    /// `stack_vars` keys access lists by raw SSA varnode, `stack_frame`
    /// groups *only the access widths* together with explicit frame
    /// bounds, ready for the type-recovery layer to project into
    /// `local_X`/`arg_X` declarations.
    pub stack_frame: Option<StackFrame>,
    /// Batch 17 stack-access provenance: one entry per resolved
    /// `LOAD`/`STORE` whose effective address is `SP/BP + const`. Used
    /// by the printer/lvar layer to render named locals without re-deriving
    /// the offset from raw arithmetic, and by the quality report to count
    /// lost-frame-provenance gaps.
    #[serde(default)]
    pub stack_accesses: Vec<StackAccess>,
    /// Parameter-byref / local-byref bookkeeping populated by
    /// [`unlace_passes::byref_detect::detect_byref`]. `None` until the
    /// detector has run; an empty `ByrefInfo` means "ran, found nothing".
    pub byref_info: Option<ByrefInfo>,
    /// Canonical libc-family name recognised at a `Call` site, keyed by
    /// `(BlockId, insn_idx)` of the `Call`. Value is the lowercase
    /// canonical name (`"memcpy"`, `"memset"`, `"malloc"`, …) chosen
    /// from a small fixed roster of memory / string / allocator idioms,
    /// produced by [`unlace_passes::libc_idioms`].
    ///
    /// Populated independently of the verbose
    /// [`unlace_passes::libc_signatures`] database — that one carries
    /// per-symbol prototypes; this map only carries the canonical
    /// family label that later analyses (e.g. allocator escape, copy
    /// elision, string idiom) gate on.
    pub libc_call_annotations: BTreeMap<(BlockId, usize), String>,
    /// Full per-call-site libc prototype stamped from the static
    /// signature database in `unlace_passes::libc_signatures::LIBC_SIG_TABLE`.
    /// Keyed identically to [`Self::libc_call_annotations`]; an entry here
    /// implies an entry there for the same `(BlockId, insn_idx)` (the
    /// reverse is *not* guaranteed — a call may be recognised as a libc
    /// family without a full prototype, e.g. when the symbol name maps to
    /// a `LibcKind` family but the signature DB has no exact-name match).
    ///
    /// Used by the C printer to render call sites with their proper return
    /// and argument types. The stored value is an *owned* clone of the
    /// static table entry so this crate stays free of any
    /// `unlace_passes` dependency (avoiding a `passes → ir → passes`
    /// cycle).
    pub libc_sig_annotations: BTreeMap<(BlockId, usize), crate::types::CallSiteLibcSig>,
    /// Array-of-structs layouts recovered from per-loop access patterns:
    /// `*(arr_ptr + stride * iv + offset) = ...`.
    /// Keyed by the *base pointer* SSA varnode (`arr_ptr`); value is the
    /// inferred struct layout (per-element stride + the set of accessed
    /// fields). Populated by
    /// [`unlace_passes::struct_field_recovery::recover_structs`].
    ///
    /// Distinct from [`Self::inferred_structs`], which keys *stack-frame
    /// composites* by RSP-relative offset. This map captures heap / global
    /// / parameter-pointer struct layouts surfaced by loop induction
    /// strides rather than stack-slot adjacency.
    pub array_struct_layouts: BTreeMap<SsaVarnode, crate::types::InferredStruct>,
    /// Role-based names for SSA varnodes, keyed per-`SsaVarnode`.
    ///
    /// Populated by `unlace_passes::var_naming::VarNamingPass` (t211 +
    /// t227 wiring): every SSA value classified as a `LoopCounter`,
    /// `LoopBound`, `SavedRegister`, `Argument`, … gets a human-meaningful
    /// name like `this`, `i`, `j`, `len`, `buf`, `saved_rbx`, `a1`, or
    /// `result`. Empty for `Temporary` values — those fall through to the printer's existing
    /// `merged_names` / fresh-`vN` chain.
    ///
    /// Consulted by the C printer *between* a non-default
    /// [`Self::merged_names`] entry (which always wins when present and
    /// non-`vN`) and the default fresh-`vN` allocator.
    pub var_role_names: BTreeMap<SsaVarnode, String>,
    /// Late-pipeline finalized prototype, recovered by
    /// `unlace_passes::calling_conv_finalize::CallingConvFinalizePass`
    /// (t216 + t230 wiring). `Some` once the pass has run; the C printer
    /// prefers its `params` / `return_type` over the raw
    /// [`Self::inferred_params`] / [`Self::inferred_return_type`] when
    /// emitting the function header, and surfaces
    /// `dropped_param_count` as a `// dropped N param(s)` comment.
    pub finalized_signature: Option<FinalizedSignature>,
    /// Cryptographic algorithm annotations detected by
    /// `unlace_passes::crypto_idioms::CryptoIdiomPass`. Each entry
    /// records the algorithm name (e.g. `"AES-128-ECB"`) and the
    /// `(BlockId, insn_index)` of the first instruction in the matched
    /// sequence. Empty until the pass runs.
    pub crypto_annotations: Vec<CryptoAnnotation>,
    /// C++ lambda closure captures recovered from constructor/call-operator
    /// context. Populated by `unlace_passes::cpp_lambda` and surfaced by the
    /// C printer as a source-like `[&x, this]` annotation on lambda
    /// `operator()` functions.
    pub cpp_lambda_captures: Vec<CppLambdaCapture>,
    /// MSVC structured exception handling (SEH) regions recovered from
    /// `__C_specific_handler` scope tables. Each entry describes a
    /// `__try { ... } __except(filter) { ... }` or
    /// `__try { ... } __finally { ... }` region. Populated by
    /// `unlace_passes::msvc_seh::MsvcSehPass`.
    pub seh_regions: Vec<SehRegion>,
    /// C++20 coroutine frame metadata recovered by
    /// `unlace_passes::cpp_coroutine::CppCoroutinePass`. Each entry
    /// describes a coroutine ramp/resume/destroy function and its
    /// suspension points (`co_await` / `co_yield`). Empty until the pass
    /// runs.
    pub coroutine_sites: Vec<CoroutineSite>,
    /// Recovered jump tables for indexed indirect branches (`Branchind`).
    /// Keyed by the **branch instruction's virtual address**; value is the
    /// table metadata + decoded targets. Populated in two phases by
    /// [`unlace_passes::indirect_jump_resolve::IndirectJumpResolvePass`]
    /// (candidate detection) and the CLI pipeline's section-aware
    /// resolution step (target decoding). Empty when no Branchind in the
    /// function matches the table-load pattern, or when the candidate's
    /// table base falls outside any read-only section.
    pub resolved_jump_tables: BTreeMap<u64, JumpTableInfo>,
    /// Logical-variable candidates (Batch 3 slice 1).
    ///
    /// Populated by
    /// [`unlace_passes::lvar_collect::LvarCollectPass`] after
    /// `VariableMergePass` runs. Empty by default. Ordered by
    /// [`crate::lvar::LvarId`] (dense from 0) so iteration is
    /// deterministic across runs. Duplicates across storage classes are
    /// permitted in this slice; coalescing lands in a follow-up batch.
    ///
    /// Treated as **metadata only** by the current C printer — emitter
    /// behaviour does not consult `lvars` yet.
    pub lvars: Vec<crate::lvar::Lvar>,
    /// C++ method classification recovered from the Itanium ABI mangled
    /// symbol name. `Some(CppKind::Ctor)` / `Some(CppKind::Dtor)` for
    /// constructors / destructors; `Some(CppKind::RegularMethod)` for
    /// any other `_ZN...E...` symbol with a parseable class prefix; and
    /// `None` for free functions or unmangled names.
    ///
    /// Populated by `unlace_passes::cpp_method::CppMethodPass`.
    pub cpp_kind: Option<CppKind>,
    /// Demangled class name for the method (`"Foo"` for `_ZN3FooC1Ev`),
    /// or `None` for free functions. Populated alongside `cpp_kind`.
    pub cpp_class_name: Option<String>,
    /// Call-site indices whose first argument has been classified as a
    /// `this` pointer of the enclosing class. Keyed by
    /// `(BlockId, insn_index)` of the `Call` / `Callind`. Populated by
    /// `CppMethodPass` when the call target is a vtable slot read off
    /// `[this + N]`.
    pub cpp_this_args: BTreeSet<(BlockId, usize)>,
    /// `Some` when the function takes C-style `...` arguments. Set before
    /// the pass pipeline from debug info, a known prototype, or the
    /// `va_start` register save area in the prologue (see
    /// `unlace_passes::vararg_detect`). Parameter inference stops at
    /// [`Variadic::fixed_params`].
    pub variadic: Option<Variadic>,
    /// Stack-passed parameters detected as positive RSP-relative loads
    /// (`[rsp + 8 + N*8]` on SysV — past the saved return address) in the
    /// entry block, before any matching write. Each entry is the
    /// RSP-relative byte offset of the slot. Empty when no stack-passed
    /// parameters were detected. Populated by
    /// [`ParamInferPass`](https://docs.rs/unlace-passes).
    pub inferred_stack_params: BTreeSet<i64>,
}

/// Classification of a C++ method recovered from its mangled name.
#[derive(Copy, Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub enum CppKind {
    /// Constructor (Itanium `C1`/`C2`/`C3` tag).
    Ctor,
    /// Destructor (Itanium `D0`/`D1`/`D2` tag).
    Dtor,
    /// Any other member function with a recognised nested-name prefix
    /// (`_ZN...E...` shape).
    RegularMethod,
}

/// One recovered C++ lambda capture.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct CppLambdaCapture {
    /// Stable display name (`this`, `x`, `capture_0`, ...).
    pub name: String,
    /// `true` when the capture is by reference (`&x`); false means by value.
    pub by_ref: bool,
    /// Optional recovered capture type.
    pub ty: Option<crate::types::Type>,
    /// Byte offset in the closure object when known.
    pub offset: Option<u64>,
}

/// A recovered MSVC structured exception handling (SEH) region.
///
/// Annotated onto [`SsaFunction::seh_regions`] so the C printer can
/// reconstitute the original `__try`/`__except`/`__finally` source shape.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct SehRegion {
    /// Blocks covered by the `__try { ... }` body.
    pub try_blocks: Vec<BlockId>,
    /// Address of the filter expression function (`__except(expr)` part).
    /// `None` for `__finally` regions.
    pub filter: Option<u64>,
    /// Blocks constituting the `__except { ... }` handler body.
    pub handler_blocks: Vec<BlockId>,
    /// Blocks constituting the `__finally { ... }` body.
    pub finally_blocks: Vec<BlockId>,
}

/// Kind of a C++20 coroutine suspension point.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub enum SuspensionKind {
    /// `co_await expr` — suspends and resumes when the awaited value is ready.
    CoAwait,
    /// `co_yield expr` — stores a value into the promise and suspends.
    CoYield,
    /// Initial or final suspension point inserted by the compiler.
    Implicit,
}

/// A single suspension point in a C++20 coroutine.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct SuspensionPoint {
    /// Kind of suspension (`co_await`, `co_yield`, or implicit).
    pub kind: SuspensionKind,
    /// Suspension index stored into the frame's index field before returning.
    pub index: u64,
    /// Location of the store to the suspension index field.
    pub store_loc: (BlockId, usize),
    /// If `co_yield`: byte offset in the promise where the yielded value is
    /// stored. `None` for pure `co_await` / implicit suspensions.
    pub yield_value_offset: Option<u64>,
}

/// Role of a function within a C++20 coroutine triple.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub enum CoroutineRole {
    /// The ramp function: allocates the coroutine frame, stores resume/destroy
    /// pointers, and performs the initial call to the resume path.
    Ramp,
    /// The resume (body) function: takes the frame pointer and advances
    /// the coroutine state machine through suspension points.
    Resume,
    /// The destroy function: deallocates the coroutine frame.
    Destroy,
}

/// Recovered C++20 coroutine frame metadata.
///
/// C++20 coroutines compile into a "split" ABI:
/// - A **ramp** function allocates the coroutine frame (`operator new`),
///   stores resume/destroy function pointers at known offsets (0/8),
///   and returns the handle.
/// - A **resume** function receives the frame pointer and executes the body,
///   using a suspension-index field to dispatch to the correct resume point.
/// - A **destroy** function receives the frame pointer and deallocates.
///
/// This struct captures the detected pattern so the decompiler can
/// reconstruct `co_await` / `co_yield` pseudo-syntax.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct CoroutineSite {
    /// Role of the current function in the coroutine triple.
    pub role: CoroutineRole,
    /// Address of the frame allocation (`operator new` call) in the ramp,
    /// or 0 if this is a resume/destroy function.
    pub frame_alloc_addr: u64,
    /// Byte offset within the frame where the resume function pointer is stored.
    pub resume_fn_offset: u64,
    /// Byte offset within the frame where the destroy function pointer is stored.
    pub destroy_fn_offset: u64,
    /// Byte offset of the suspension index field within the coroutine frame.
    pub suspend_index_offset: u64,
    /// Byte offset of the promise object within the coroutine frame (if detected).
    pub promise_offset: Option<u64>,
    /// Detected suspension points in the resume body.
    pub suspension_points: Vec<SuspensionPoint>,
}

/// A recovered jump table backing an indexed indirect branch (`Branchind`).
///
/// Batch 9: populated by
/// [`IndirectJumpResolvePass`](https://docs.rs/unlace-passes) — which detects
/// the `Branchind`-after-table-load pattern — and finalized by the CLI
/// pipeline once the binary's read-only sections are available to decode the
/// concrete target addresses. The C-emit path converts each entry into the
/// `unlace_struct::switch_recovery::JumpTable` shape and feeds it to
/// `refine_switches_with_tables` so structured `HirNode::Switch` arms get
/// explicit `case` labels.
///
/// Lives in `unlace-ir` (rather than reusing `unlace-struct`'s `JumpTable`)
/// because `unlace-struct` depends on `unlace-ir`, not the reverse; the two
/// types are intentionally kept field-compatible.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct JumpTableInfo {
    /// Base virtual address of the table in the binary image.
    pub base: u64,
    /// Size of each table entry in bytes (typically 4 or 8).
    pub entry_size: u8,
    /// Number of entries. `0` means "candidate detected, not yet resolved".
    pub num_entries: u32,
    /// Entry count proven by the dispatch site: the bounds check guarding
    /// the dispatch block, or a mask on the index. `None` when neither was
    /// recognised and the table length must be probed.
    pub bound: Option<u32>,
    /// `true` for little-endian table entries, `false` for big-endian.
    pub endian_little: bool,
    /// Concrete target addresses, one per entry. Empty until the pipeline's
    /// section-aware resolution step decodes the table bytes.
    pub targets: Vec<u64>,
    /// Block of each entry of `targets`, recorded when the dispatch edges
    /// are wired. Passes may later remove the leading instructions of a
    /// target block, after which it can no longer be found by address.
    /// Empty until wired.
    #[serde(default)]
    pub target_blocks: Vec<BlockId>,
}

impl CppLambdaCapture {
    pub fn new(name: impl Into<String>, by_ref: bool) -> Self {
        Self {
            name: name.into(),
            by_ref,
            ty: None,
            offset: None,
        }
    }

    pub fn by_value(name: impl Into<String>) -> Self {
        Self::new(name, false)
    }

    pub fn by_reference(name: impl Into<String>) -> Self {
        Self::new(name, true)
    }

    pub fn with_type(mut self, ty: crate::types::Type) -> Self {
        self.ty = Some(ty);
        self
    }

    pub fn with_offset(mut self, offset: u64) -> Self {
        self.offset = Some(offset);
        self
    }
}

/// A recognized cryptographic algorithm sequence within a function.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct CryptoAnnotation {
    /// Human-readable algorithm name (e.g. `"AES-128-ECB"`).
    pub algorithm: String,
    /// Location of the first instruction in the matched sequence.
    pub start_loc: (BlockId, usize),
    /// Location of the last instruction in the matched sequence.
    pub end_loc: (BlockId, usize),
}

/// Prototype shape of a variadic function: the named parameters that
/// precede `...`.
#[derive(Clone, Copy, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct Variadic {
    /// Number of named parameters, counted in calling-convention slot order.
    pub fixed_params: usize,
}

/// Finalized function prototype produced by
/// `unlace_passes::calling_conv_finalize::finalize_signature` (t216).
///
/// Mirrors the passes-layer type structurally so the IR can store it
/// without depending on `unlace-passes`. The passes layer constructs
/// instances of this type and writes them to
/// [`SsaFunction::finalized_signature`]; the printer consumes them.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct FinalizedSignature {
    /// Final parameter list in calling-convention order. Names match
    /// the originals from [`SsaFunction::inferred_params`] — only
    /// types may have been narrowed (e.g. `int8` for byte-masked
    /// params).
    pub params: Vec<(String, crate::types::Type)>,
    /// Final return type — either the existing
    /// [`SsaFunction::inferred_return_type`] (wrapped in
    /// `Type::Primitive`) or a refinement from consistent caller-side
    /// use.
    pub return_type: crate::types::Type,
    /// Number of parameters dropped relative to
    /// [`SsaFunction::inferred_params`].
    pub dropped_param_count: usize,
    /// When `true`, the first parameter is a hidden struct-return pointer
    /// (sret). The printer should hide it from the parameter list and
    /// render the function as returning the pointed-to struct type instead.
    /// Detected by [`unlace_passes::calling_conv_finalize::detect_sret`].
    #[serde(default)]
    pub sret: bool,
    /// When `true`, `params` are the named parameters and the prototype
    /// ends in `...`.
    #[serde(default)]
    pub variadic: bool,
    /// Incoming stack slot (byte offset from the entry stack pointer) of each
    /// parameter the caller passes on the stack, keyed by its index in
    /// `params`. The printer names reads of those slots after the parameter.
    #[serde(default)]
    pub stack_param_slots: BTreeMap<usize, i64>,
}

/// Classification of a recovered stack-frame slot (Batch 2 slice 2).
///
/// Distinguishes locally-allocated storage from caller-frame regions
/// surfaced by post-prologue SP delta tracking. Consumers use this to
/// render parameter-region slots as `a1+N` style stack args rather than
/// fictional locals like `local_8`, and to suppress declarations for
/// callee-saved register stashes that already live in
/// [`SsaFunction::saved_register_slots`].
#[derive(
    Copy, Clone, Debug, Default, PartialEq, Eq, Hash, serde::Serialize, serde::Deserialize,
)]
pub enum FrameSlotKind {
    /// Function-local storage below the post-prologue SP (offset < 0
    /// when measured from function-entry RSP). The default for slots
    /// the classifier did not otherwise tag.
    #[default]
    Local,
    /// Caller-passed argument that overflowed the register file. On
    /// SysV x86_64 the first such slot lives at `[rsp+8]` after the
    /// caller's `call` pushed the return address; on Microsoft x64 the
    /// first stack arg lives at `[rsp+40]` (above the 32-byte shadow
    /// space + return address).
    StackArg,
    /// Microsoft x64 shadow space — the 32-byte caller-reserved region
    /// at `[rsp+8 .. rsp+40]` used as scratch storage for the four
    /// register-passed arguments. Always non-arguments per the ABI but
    /// frequently *written* by the callee, so the recovery pass would
    /// otherwise mistake it for an inbound stack arg.
    ShadowSpace,
    /// Callee-saved register stashed by the prologue (mirrors the
    /// offset already present in [`SsaFunction::saved_register_slots`]).
    /// Rendered as `saved_rbx` etc. rather than `local_*`.
    SavedRegister,
    /// Entry return-address carrier at `[entry_rsp, entry_rsp + ptr_size)`.
    /// This is ABI-owned control-flow storage, not a source local.
    ReturnAddress,
    /// Register spill slot — a local slot whose only stores are register
    /// writes followed by register reads of the same width. Reserved for
    /// a future refinement pass; currently unused by the classifier but
    /// part of the public enum so downstream consumers can match
    /// exhaustively.
    SpillSlot,
}

/// One synthesised local-frame slot.
///
/// Mirrors the spec from Wave 24 / t209: the `access_widths` vector
/// preserves every distinct byte width observed at this offset (1, 2, 4
/// or 8) so the type-recovery layer can spot mixed-width unions and
/// pick the dominant access size for the inferred primitive type.
#[derive(Clone, Debug, Default, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct StackLocal {
    /// RSP/RBP-relative byte offset. Negative for locals below the frame
    /// pointer, non-negative for incoming-parameter slots above it.
    pub offset: i64,
    /// Inferred slot width in bytes — the *maximum* access width seen at
    /// this offset (small accesses are typically partial reads of a wider
    /// slot, not independent variables).
    pub size: u64,
    /// All distinct access widths observed at this offset, in insertion
    /// order. Helps the type-recovery layer notice unions / mixed-size
    /// uses without re-walking the IR.
    pub access_widths: Vec<u8>,
    /// Classification produced by Batch 2 slice 2 — distinguishes locals
    /// from stack-passed arguments, shadow space, and saved registers
    /// using the post-prologue SP delta plus the calling convention.
    /// Defaults to [`FrameSlotKind::Local`] for backward compatibility
    /// with literal struct constructions in tests.
    #[serde(default)]
    pub kind: FrameSlotKind,
}

/// Resolved memory access whose effective address is a function-frame
/// offset.
///
/// Batch 17: provenance record produced by stack/frame recovery. One
/// entry per `LOAD`/`STORE` whose address expression simplifies to
/// `SP/BP + const` (or an aliased frame register). Future printer/lvar
/// code can render these as named slots without re-deriving the offset
/// from raw pointer arithmetic.
#[derive(Clone, Debug, Default, PartialEq, Eq, Hash, serde::Serialize, serde::Deserialize)]
pub struct StackAccess {
    /// Source instruction address (`IrInsn::address`).
    pub source_addr: u64,
    /// Decoded register name of the base — `"rsp"`, `"rbp"`, `"esp"`, etc.
    /// Empty when the base was an aliased SSA temp (the resolver does not
    /// always carry that back to a register name).
    pub base_register: String,
    /// Signed offset from the frame base.
    pub delta: i64,
    /// Access width in bytes (1/2/4/8 typically; 16/32/64 for SIMD).
    pub width: u8,
    /// `true` for `STORE`, `false` for `LOAD` / address-of.
    pub is_store: bool,
    /// Final frame slot offset resolved into [`StackFrame::locals`], when
    /// the access was tied to a recovered local. `None` for accesses that
    /// failed slot resolution (e.g. byref escape, overlapping slot, etc.).
    pub resolved_slot: Option<i64>,
    /// `true` when the offset exists outside any recovered local — usually
    /// indicates a recovery gap (lost frame provenance) rather than a real
    /// out-of-frame access. Quality reports key off this to surface gaps.
    pub lost_provenance: bool,
}

/// Recovered logical layout of a function's stack frame.
///
/// Produced by [`unlace_passes::stack_frame_recovery::recover_stack_frame`].
/// `locals` is keyed by signed frame offset so iteration order matches
/// the slot's lexical position in the frame.
#[derive(Clone, Debug, Default, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct StackFrame {
    /// All recovered locals, keyed by frame offset.
    pub locals: BTreeMap<i64, StackLocal>,
    /// Total local-frame size in bytes: `max_pos_offset - min_neg_offset`
    /// (clamped at 0 when no locals were recovered).
    pub frame_size: u64,
    /// Largest positive offset seen (incoming-parameter region). Zero
    /// when no parameter-region access was recovered.
    pub max_pos_offset: i64,
    /// Smallest (most negative) offset seen (local region). Zero when no
    /// negative-offset access was recovered.
    pub min_neg_offset: i64,
}

/// Per-function byref bookkeeping populated by
/// [`unlace_passes::byref_detect::detect_byref`].
///
/// `byref_params` records parameter indices whose address (computed via
/// `IntAdd(param_value, K)`) appears anywhere in the function — strong
/// evidence the parameter is logically a pointer/reference rather than
/// a passed-by-value scalar. `byref_locals` records the RSP/RBP-relative
/// offsets of stack-allocated locals whose address is observed flowing
/// (after a `Copy` chain) into a `Call` argument register.
#[derive(Clone, Debug, Default, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct ByrefInfo {
    /// Parameter indices (zero-based) marked `&param`.
    pub byref_params: std::collections::BTreeSet<u32>,
    /// Stack-frame offsets of byref-taken locals.
    pub byref_locals: std::collections::BTreeSet<i64>,
}

/// Annotation carried on [`SsaFunction::byref_boxes`] for one detected
/// `__block` allocation.
///
/// Mirrors `unlace_passes::objc_byref::ByrefBox` so the IR layer can
/// surface byref metadata without taking a dependency on the passes
/// crate (which depends on `unlace_ir`).
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct ByrefBox {
    /// User-visible type of the captured payload.
    pub captured_type: crate::types::Type,
    /// SSA varnode of the value stored into the captured slot.
    pub captured_value_sv: SsaVarnode,
    /// Byte offset of the captured slot within the box (24 or 40).
    pub captured_offset: u64,
    /// `(BlockId, insn_idx)` of the captured-payload store, useful for
    /// the printer when it wants to recover the original initializer.
    pub captured_store_loc: (crate::BlockId, usize),
}

/// Per-operand type-binding tables resolved during analysis.
///
/// Both maps are keyed by `(block, insn_idx, operand_idx)` — the operand
/// index references the `IrInsn::inputs` slot whose typed display the
/// printer should consult.
#[derive(Clone, Debug, Default, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct OpTypeBindings {
    /// Struct-offset bindings: an address operand `base + K` where `base` is
    /// a known struct pointer; the printer renders `base->field` rather than
    /// `*(int*)((char*)base + K)`.
    pub stroff: BTreeMap<(BlockId, usize, usize), StrOffBinding>,
    /// Enum-constant bindings: a constant operand compared against a known
    /// enum-discriminant variable; the printer renders the variant name in
    /// place of the integer literal.
    pub enum_const: BTreeMap<(BlockId, usize, usize), EnumConstBinding>,
}

/// One struct-offset operand binding.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct StrOffBinding {
    pub struct_type: crate::types::Type,
    pub field_path: Vec<String>,
}

/// One enum-constant operand binding.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct EnumConstBinding {
    pub enum_name: String,
    pub variant: String,
}

#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct EnumDiscriminant {
    pub load_sv: SsaVarnode,
    pub load_loc: (BlockId, usize),
    pub variants: BTreeMap<u64, String>,
    pub comparison_locs: Vec<(BlockId, usize)>,
}

#[derive(
    Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash, serde::Serialize, serde::Deserialize,
)]
pub enum VarnodeSlot {
    Output,
    Input(usize),
}

/// Encapsulated var_map storage.
///
/// Wraps the `(BlockId, usize, VarnodeSlot) → SsaVarnode` mapping behind
/// a method API so the backing store can be swapped from `BTreeMap` to a
/// flat `Vec<Vec<InsnSlots>>` without touching callers. All access goes
/// through the methods below.
///
/// **Determinism contract**: iteration order is always sorted by
/// `(BlockId, insn_idx, VarnodeSlot)` — the same lexicographic order
/// that `BTreeMap` provides today.
#[derive(Clone, Debug, PartialEq, Eq, Default, serde::Serialize, serde::Deserialize)]
pub struct VarMap {
    /// The underlying storage. Currently a `BTreeMap`; will be replaced with
    /// a flat `Vec<Vec<InsnSlots>>` in Step 3. Public for the migration period
    /// so existing code that builds/destructures `BTreeMap`s can gradually
    /// move to the `VarMap` API methods.
    pub inner: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>,
}

impl<'a> IntoIterator for &'a VarMap {
    type Item = (&'a (BlockId, usize, VarnodeSlot), &'a SsaVarnode);
    type IntoIter =
        std::collections::btree_map::Iter<'a, (BlockId, usize, VarnodeSlot), SsaVarnode>;
    fn into_iter(self) -> Self::IntoIter {
        self.inner.iter()
    }
}

impl std::ops::Deref for VarMap {
    type Target = BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>;
    fn deref(&self) -> &Self::Target {
        &self.inner
    }
}

impl std::ops::DerefMut for VarMap {
    fn deref_mut(&mut self) -> &mut Self::Target {
        &mut self.inner
    }
}

impl From<BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>> for VarMap {
    fn from(inner: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>) -> Self {
        Self { inner }
    }
}

impl VarMap {
    pub fn new() -> Self {
        Self {
            inner: BTreeMap::new(),
        }
    }

    /// Insert a mapping. Returns the previous value if the key was already present.
    #[inline]
    pub fn insert(
        &mut self,
        key: (BlockId, usize, VarnodeSlot),
        value: SsaVarnode,
    ) -> Option<SsaVarnode> {
        self.inner.insert(key, value)
    }

    /// Look up by exact key.
    #[inline]
    pub fn get(&self, key: &(BlockId, usize, VarnodeSlot)) -> Option<&SsaVarnode> {
        self.inner.get(key)
    }

    /// Mutable lookup by exact key.
    #[inline]
    pub fn get_mut(&mut self, key: &(BlockId, usize, VarnodeSlot)) -> Option<&mut SsaVarnode> {
        self.inner.get_mut(key)
    }

    /// Remove a key, returning its value if present.
    #[inline]
    pub fn remove(&mut self, key: &(BlockId, usize, VarnodeSlot)) -> Option<SsaVarnode> {
        self.inner.remove(key)
    }

    /// Remove every `(bid, insn_idx, *)` entry from the map.
    ///
    /// Keys are ordered as `(BlockId, instruction index, slot)`, so all slots for
    /// one instruction are contiguous. This avoids full-map scans in passes that
    /// compact or delete instructions.
    #[inline]
    pub fn remove_site(&mut self, bid: BlockId, insn_idx: usize) {
        let start = (bid, insn_idx, VarnodeSlot::Output);
        let end = (bid, insn_idx, VarnodeSlot::Input(usize::MAX));
        self.inner
            .extract_if(start..=end, |_, _| true)
            .for_each(drop);
    }

    /// Iterate all entries in sorted order.
    #[inline]
    pub fn iter(
        &self,
    ) -> std::collections::btree_map::Iter<'_, (BlockId, usize, VarnodeSlot), SsaVarnode> {
        self.inner.iter()
    }

    /// Iterate all values.
    #[inline]
    pub fn values(
        &self,
    ) -> std::collections::btree_map::Values<'_, (BlockId, usize, VarnodeSlot), SsaVarnode> {
        self.inner.values()
    }

    /// Range query over a key range.
    #[inline]
    pub fn range<R>(
        &self,
        range: R,
    ) -> std::collections::btree_map::Range<'_, (BlockId, usize, VarnodeSlot), SsaVarnode>
    where
        R: std::ops::RangeBounds<(BlockId, usize, VarnodeSlot)>,
    {
        self.inner.range(range)
    }

    /// In-place drain by range + predicate (stable since Rust 1.91).
    #[inline]
    pub fn extract_if<R, F>(
        &mut self,
        range: R,
        pred: F,
    ) -> std::collections::btree_map::ExtractIf<'_, (BlockId, usize, VarnodeSlot), SsaVarnode, R, F>
    where
        R: std::ops::RangeBounds<(BlockId, usize, VarnodeSlot)>,
        F: FnMut(&(BlockId, usize, VarnodeSlot), &mut SsaVarnode) -> bool,
    {
        self.inner.extract_if(range, pred)
    }

    /// Number of entries.
    #[inline]
    pub fn len(&self) -> usize {
        self.inner.len()
    }

    #[inline]
    pub fn is_empty(&self) -> bool {
        self.inner.is_empty()
    }

    /// Get-or-insert-default via the entry API.
    #[inline]
    pub fn entry(
        &mut self,
        key: (BlockId, usize, VarnodeSlot),
    ) -> std::collections::btree_map::Entry<'_, (BlockId, usize, VarnodeSlot), SsaVarnode> {
        self.inner.entry(key)
    }

    /// Keys iterator (used by some passes for scanning).
    #[inline]
    pub fn keys(
        &self,
    ) -> std::collections::btree_map::Keys<'_, (BlockId, usize, VarnodeSlot), SsaVarnode> {
        self.inner.keys()
    }

    /// Clear all entries.
    #[inline]
    pub fn clear(&mut self) {
        self.inner.clear();
    }

    /// Check if a key is present.
    #[inline]
    pub fn contains_key(&self, key: &(BlockId, usize, VarnodeSlot)) -> bool {
        self.inner.contains_key(key)
    }
}

/// Rebuild the CFG and dominator trees from the current function blocks.
///
/// Call this after passes that modify block successors (e.g., after jump table
/// resolution adds new edges) to keep the CFG, dominator tree, and
/// post-dominator tree consistent with the function's actual control flow.
pub fn rebuild_cfg(ssa: &mut SsaFunction) {
    ssa.cfg = build_cfg(&ssa.function);
    ssa.dom_tree = build_dominator_tree(&ssa.cfg);
    ssa.post_dom_tree = Some(build_post_dominator_tree(&ssa.cfg, &ssa.function));
}

pub fn build_ssa(func: Function) -> SsaFunction {
    let cfg = build_cfg(&func);
    let dom_tree = build_dominator_tree(&cfg);
    let post_dom_tree = build_post_dominator_tree(&cfg, &func);
    let df = compute_dominance_frontiers(&cfg, &dom_tree);

    let (defs_per_var, all_blocks) = collect_defs(&func);

    let phi_locations = place_phis(&defs_per_var, &df, &all_blocks);
    if ssa_trace_enabled() {
        let block_count = func.blocks.len();
        let insn_count: usize = func.blocks.values().map(|b| b.insns.len()).sum();
        let df_edges: usize = df.values().map(|frontier| frontier.len()).sum();
        let def_vars = defs_per_var.len();
        let def_blocks: usize = defs_per_var.values().map(|blocks| blocks.len()).sum();
        let phi_sites: usize = phi_locations.values().map(|vars| vars.len()).sum();
        ssa_trace_line!(
            "build-start func={} blocks={} insns={} cfg_nodes={} df_edges={} def_vars={} def_blocks={} phi_sites={}",
            func.name,
            block_count,
            insn_count,
            cfg.node_map().len(),
            df_edges,
            def_vars,
            def_blocks,
            phi_sites,
        );
        for (var, blocks) in &defs_per_var {
            ssa_trace_line!("defs func={} var={:?} blocks={:?}", func.name, var, blocks);
        }
        for (block, vars) in &phi_locations {
            ssa_trace_line!(
                "phi-place func={} block={:?} vars={:?}",
                func.name,
                block,
                vars
            );
        }
    }

    let (phi_map, var_map) = rename_variables(&func, &cfg, &dom_tree, &phi_locations);
    if ssa_trace_enabled() {
        let phis: usize = phi_map.values().map(|phis| phis.len()).sum();
        ssa_trace_line!(
            "build-done func={} phis={} var_map={}",
            func.name,
            phis,
            var_map.len(),
        );
        for (block, phis) in &phi_map {
            for phi in phis {
                ssa_trace_line!(
                    "phi-final func={} block={:?} output={:?} inputs={:?}",
                    func.name,
                    block,
                    phi.output,
                    phi.inputs
                );
            }
        }
    }

    SsaFunction {
        function: func,
        // Default to `Unknown` here; the CLI pipeline overwrites this with
        // the loaded `BinaryImage::arch` before passes run. Stack passes
        // treat `Unknown` as "no stack spec → skip recovery" rather than
        // panicking, so this default is safe.
        arch: ArchId::Unknown(0),
        os_abi: OsAbi::Unknown,
        maturity: Maturity::Zero,
        cfg,
        dom_tree,
        post_dom_tree: Some(post_dom_tree),
        phi_map,
        var_map,
        var_types: BTreeMap::new(),
        type_counterexamples: Vec::new(),
        calling_convention: CallingConvention::Unknown,
        stack_vars: BTreeMap::new(),
        stack_offset_hints: BTreeMap::new(),
        foldable_exprs: BTreeSet::new(),
        noreturn: false,
        tail_call_map: BTreeMap::new(),
        merged_names: BTreeMap::new(),
        enum_discriminants: Vec::new(),
        cpp_variant_discriminants: Vec::new(),
        panic_sites: BTreeMap::new(),
        go_defer_sites: Vec::new(),
        rust_async: None,
        vtable_calls: BTreeMap::new(),
        cpp_vtable_calls: BTreeMap::new(),
        objc_dispatch_calls: BTreeMap::new(),
        go_defer_recover_calls: BTreeMap::new(),
        inferred_params: Vec::new(),
        inferred_return_type: PrimitiveType::Unknown,
        frame_setup_insns: BTreeSet::new(),
        dwarf_local_names: BTreeMap::new(),
        dwarf_aggregate_offsets: BTreeSet::new(),
        pending_dwarf_locals: Vec::new(),
        inferred_structs: BTreeMap::new(),
        composite_var_types: BTreeMap::new(),
        array_strides: BTreeMap::new(),
        external_signatures: BTreeMap::new(),
        eh_landing_pads: BTreeSet::new(),
        eh_landing_pad_catches: BTreeMap::new(),
        eh_cleanup_landing_pads: BTreeSet::new(),
        stack_gaps: BTreeMap::new(),
        frame_size: 0,
        sp_delta_at: BTreeMap::new(),
        stack_holes: BTreeMap::new(),
        dynamic_sp: false,
        block_entry_sp_delta: BTreeMap::new(),
        frame_holes: Vec::new(),
        saved_register_slots: BTreeSet::new(),
        sizeof_type_map: BTreeMap::new(),
        alignof_type_map: BTreeMap::new(),
        resolved_indirect_calls: BTreeMap::new(),
        indirect_call_targets: BTreeMap::new(),
        variadic_call_types: BTreeMap::new(),
        signature_revision: 0,
        op_bindings: OpTypeBindings::default(),
        byref_boxes: BTreeMap::new(),
        stack_frame: None,
        stack_accesses: Vec::new(),
        byref_info: None,
        libc_call_annotations: BTreeMap::new(),
        libc_sig_annotations: BTreeMap::new(),
        array_struct_layouts: BTreeMap::new(),
        var_role_names: BTreeMap::new(),
        finalized_signature: None,
        crypto_annotations: Vec::new(),
        cpp_lambda_captures: Vec::new(),
        seh_regions: Vec::new(),
        coroutine_sites: Vec::new(),
        resolved_jump_tables: BTreeMap::new(),
        lvars: Vec::new(),
        cpp_kind: None,
        cpp_class_name: None,
        cpp_this_args: BTreeSet::new(),
        variadic: None,
        inferred_stack_params: BTreeSet::new(),
    }
}

pub fn build_dominator_tree(cfg: &ControlFlowGraph) -> DominatorTree {
    let entry = cfg.entry_block();
    let Some(entry_ni) = cfg.node_index(entry) else {
        return DominatorTree {
            idom: BTreeMap::new(),
            children: BTreeMap::new(),
            root: entry,
        };
    };

    let dominators = simple_fast(cfg.inner(), entry_ni);

    let mut idom = BTreeMap::new();
    let mut children: BTreeMap<BlockId, Vec<BlockId>> = BTreeMap::new();

    for (&bid, &ni) in cfg.node_map() {
        if bid == entry {
            continue;
        }
        if let Some(dom_ni) = dominators.immediate_dominator(ni) {
            let dom_bid = cfg.inner()[dom_ni];
            idom.insert(bid, dom_bid);
            children.entry(dom_bid).or_default().push(bid);
        }
    }

    for children_list in children.values_mut() {
        children_list.sort();
    }

    DominatorTree {
        idom,
        children,
        root: entry,
    }
}

/// Build a post-dominator tree by reversing the CFG and running the
/// dominator algorithm with the synthetic exit node as root.
pub fn build_post_dominator_tree(cfg: &ControlFlowGraph, _func: &Function) -> DominatorTree {
    let exit_bid = cfg.exit_block();
    let unknown_bid = cfg.unknown_block();

    let mut rev_graph = StableDiGraph::<BlockId, ()>::new();
    let mut rev_node_map: BTreeMap<BlockId, petgraph::stable_graph::NodeIndex> = BTreeMap::new();

    for &bid in cfg.node_map().keys() {
        let ni = rev_graph.add_node(bid);
        rev_node_map.insert(bid, ni);
    }

    for (&bid, &_ni) in cfg.node_map() {
        if bid == unknown_bid {
            continue;
        }
        for (target, _kind) in cfg.edges_from(bid) {
            if target == unknown_bid {
                continue;
            }
            if let (Some(&from_ni), Some(&to_ni)) =
                (rev_node_map.get(&target), rev_node_map.get(&bid))
            {
                rev_graph.add_edge(from_ni, to_ni, ());
            }
        }
    }

    // Dead-end blocks (no successors except synthetic) implicitly exit.
    for (&bid, &_ni) in cfg.node_map() {
        if bid == exit_bid || bid == unknown_bid {
            continue;
        }
        let has_real_succ = cfg.edges_from(bid).iter().any(|(t, _)| *t != unknown_bid);
        if !has_real_succ
            && let (Some(&exit_ni), Some(&bid_ni)) =
                (rev_node_map.get(&exit_bid), rev_node_map.get(&bid))
        {
            rev_graph.add_edge(exit_ni, bid_ni, ());
        }
    }

    let Some(&exit_ni) = rev_node_map.get(&exit_bid) else {
        return DominatorTree {
            idom: BTreeMap::new(),
            children: BTreeMap::new(),
            root: exit_bid,
        };
    };

    let dominators = simple_fast(&rev_graph, exit_ni);

    let mut idom = BTreeMap::new();
    let mut children: BTreeMap<BlockId, Vec<BlockId>> = BTreeMap::new();

    for (&bid, &ni) in &rev_node_map {
        if bid == exit_bid {
            continue;
        }
        if let Some(dom_ni) = dominators.immediate_dominator(ni) {
            let dom_bid = rev_graph[dom_ni];
            idom.insert(bid, dom_bid);
            children.entry(dom_bid).or_default().push(bid);
        }
    }

    for children_list in children.values_mut() {
        children_list.sort();
    }

    DominatorTree {
        idom,
        children,
        root: exit_bid,
    }
}

/// Cytron et al. 1991, Section 4.2: for each CFG edge (P → X),
/// walk P up the dominator tree to idom(X), adding X to DF(node)
/// at each step.
fn compute_dominance_frontiers(
    cfg: &ControlFlowGraph,
    dom_tree: &DominatorTree,
) -> BTreeMap<BlockId, BTreeSet<BlockId>> {
    let mut df: BTreeMap<BlockId, BTreeSet<BlockId>> = BTreeMap::new();

    let exit = cfg.exit_block();
    let unknown = cfg.unknown_block();

    for (&bid, &_ni) in cfg.node_map() {
        if bid == exit || bid == unknown {
            continue;
        }

        let preds = cfg.predecessors(bid);

        let idom_bid = dom_tree.idom(bid);

        for pred in preds {
            if pred == exit || pred == unknown {
                continue;
            }
            let mut runner = pred;
            while Some(runner) != idom_bid {
                df.entry(runner).or_default().insert(bid);
                match dom_tree.idom(runner) {
                    Some(parent) => runner = parent,
                    None => break,
                }
            }
        }
    }

    df
}

fn collect_defs(func: &Function) -> (BTreeMap<Varnode, BTreeSet<BlockId>>, Vec<BlockId>) {
    let mut defs: BTreeMap<Varnode, BTreeSet<BlockId>> = BTreeMap::new();
    let mut all_blocks = Vec::new();

    for (&bid, block) in &func.blocks {
        all_blocks.push(bid);
        for insn in &block.insns {
            if let Some(output) = insn.output {
                defs.entry(output).or_default().insert(bid);
            }
        }
    }

    (defs, all_blocks)
}

fn place_phis(
    defs_per_var: &BTreeMap<Varnode, BTreeSet<BlockId>>,
    df: &BTreeMap<BlockId, BTreeSet<BlockId>>,
    _all_blocks: &[BlockId],
) -> BTreeMap<BlockId, BTreeSet<Varnode>> {
    let mut phi_sites: BTreeMap<BlockId, BTreeSet<Varnode>> = BTreeMap::new();

    for (var, def_blocks) in defs_per_var {
        let mut has_phi: BTreeSet<BlockId> = BTreeSet::new();
        let mut worklist: VecDeque<BlockId> = def_blocks.iter().copied().collect();

        while let Some(block) = worklist.pop_front() {
            let empty = BTreeSet::new();
            let frontier = df.get(&block).unwrap_or(&empty);
            for &df_block in frontier {
                if has_phi.insert(df_block) {
                    phi_sites.entry(df_block).or_default().insert(*var);
                    worklist.push_back(df_block);
                }
            }
        }
    }

    phi_sites
}

/// Result of [`rename_variables`]: the per-block phi list and the
/// `(block, insn, slot) → SSA varnode` lookup map.
///
/// Factored into a named tuple alias to keep clippy's `type_complexity`
/// lint happy.
type RenameResult = (BTreeMap<BlockId, Vec<PhiNode>>, VarMap);

fn rename_variables(
    func: &Function,
    cfg: &ControlFlowGraph,
    dom_tree: &DominatorTree,
    phi_locations: &BTreeMap<BlockId, BTreeSet<Varnode>>,
) -> RenameResult {
    ssa_trace_line!(
        "rename-start func={} root={:?} phi_blocks={} blocks={}",
        func.name,
        dom_tree.root(),
        phi_locations.len(),
        func.blocks.len(),
    );
    let mut version_counter: BTreeMap<Varnode, u32> = BTreeMap::new();
    let mut var_stack: BTreeMap<Varnode, Vec<u32>> = BTreeMap::new();
    let mut phi_map: BTreeMap<BlockId, Vec<PhiNode>> = BTreeMap::new();
    let mut var_map = VarMap::new();

    fn new_version(
        base: Varnode,
        counter: &mut BTreeMap<Varnode, u32>,
        stack: &mut BTreeMap<Varnode, Vec<u32>>,
    ) -> u32 {
        let ver = counter.entry(base).or_insert(0);
        let v = *ver;
        *ver += 1;
        stack.entry(base).or_default().push(v);
        v
    }

    fn current_version(base: Varnode, stack: &BTreeMap<Varnode, Vec<u32>>) -> u32 {
        stack
            .get(&base)
            .and_then(|s| s.last().copied())
            .unwrap_or(0)
    }

    let mut work_stack: Vec<(BlockId, bool)> = vec![(dom_tree.root(), false)];
    let mut push_counts: BTreeMap<BlockId, Vec<(Varnode, usize)>> = BTreeMap::new();

    for (bid, vars) in phi_locations {
        let phis: Vec<PhiNode> = vars
            .iter()
            .map(|&var| PhiNode {
                output: SsaVarnode {
                    base: var,
                    version: 0,
                },
                inputs: Vec::new(),
            })
            .collect();
        ssa_trace_line!(
            "rename-init-phis func={} block={:?} vars={:?}",
            func.name,
            bid,
            vars
        );
        phi_map.insert(*bid, phis);
    }

    while let Some((bid, is_cleanup)) = work_stack.pop() {
        if is_cleanup {
            if let Some(counts) = push_counts.remove(&bid) {
                ssa_trace_line!(
                    "rename-cleanup func={} block={:?} pops={:?}",
                    func.name,
                    bid,
                    counts
                );
                for (var, count) in counts {
                    if let Some(stack) = var_stack.get_mut(&var) {
                        let new_len = stack.len().saturating_sub(count);
                        stack.truncate(new_len);
                    }
                }
            }
            continue;
        }

        work_stack.push((bid, true));

        let mut pushed: Vec<(Varnode, usize)> = Vec::new();
        ssa_trace_line!("rename-enter func={} block={:?}", func.name, bid);

        if let Some(phis) = phi_map.get_mut(&bid) {
            for phi in phis.iter_mut() {
                let ver = new_version(phi.output.base, &mut version_counter, &mut var_stack);
                track_push(&mut pushed, phi.output.base);
                phi.output.version = ver;
                ssa_trace_line!(
                    "rename-phi-def func={} block={:?} base={:?} version={} output={:?}",
                    func.name,
                    bid,
                    phi.output.base,
                    ver,
                    phi.output
                );
            }
        }

        if let Some(block) = func.blocks.get(&bid) {
            for (i, insn) in block.insns.iter().enumerate() {
                for (idx, input) in insn.inputs.iter().enumerate() {
                    if input.space == crate::SpaceId::Const {
                        continue;
                    }
                    let ver = current_version(*input, &var_stack);
                    let sv = SsaVarnode {
                        base: *input,
                        version: ver,
                    };
                    var_map.insert((bid, i, VarnodeSlot::Input(idx)), sv);
                    ssa_trace_line!(
                        "rename-input func={} block={:?} insn={} addr=0x{:x} op={:?} input_idx={} base={:?} version={} sv={:?}",
                        func.name,
                        bid,
                        i,
                        insn.addr,
                        insn.op,
                        idx,
                        input,
                        ver,
                        sv
                    );
                }

                if let Some(output) = insn.output {
                    let ver = new_version(output, &mut version_counter, &mut var_stack);
                    track_push(&mut pushed, output);
                    let sv = SsaVarnode {
                        base: output,
                        version: ver,
                    };
                    var_map.insert((bid, i, VarnodeSlot::Output), sv);
                    ssa_trace_line!(
                        "rename-output func={} block={:?} insn={} addr=0x{:x} op={:?} base={:?} version={} sv={:?}",
                        func.name,
                        bid,
                        i,
                        insn.addr,
                        insn.op,
                        output,
                        ver,
                        sv
                    );
                }
            }
        }

        let successors = cfg.edges_from(bid);
        for (succ, _kind) in &successors {
            if let Some(phis) = phi_map.get_mut(succ) {
                for phi in phis.iter_mut() {
                    let ver = current_version(phi.output.base, &var_stack);
                    let sv = SsaVarnode {
                        base: phi.output.base,
                        version: ver,
                    };
                    phi.inputs.push((bid, sv));
                    ssa_trace_line!(
                        "rename-phi-input func={} pred={:?} succ={:?} base={:?} version={} sv={:?}",
                        func.name,
                        bid,
                        succ,
                        phi.output.base,
                        ver,
                        sv
                    );
                }
            }
        }

        push_counts.insert(bid, pushed);

        let children = dom_tree.children(bid);
        for &child in children.iter().rev() {
            ssa_trace_line!(
                "rename-child func={} parent={:?} child={:?}",
                func.name,
                bid,
                child
            );
            work_stack.push((child, false));
        }
    }

    ssa_trace_line!(
        "rename-done func={} phi_blocks={} var_map={}",
        func.name,
        phi_map.len(),
        var_map.len(),
    );
    (phi_map, var_map)
}

fn track_push(pushed: &mut Vec<(Varnode, usize)>, var: Varnode) {
    if let Some(entry) = pushed.iter_mut().find(|(v, _)| *v == var) {
        entry.1 += 1;
    } else {
        pushed.push((var, 1));
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use super::*;
    use crate::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    fn ctrl_insn(op: IrOp, addr: u64) -> IrInsn {
        IrInsn::without_output(op, smallvec![], addr)
    }

    fn def_insn(output: Varnode, inputs: &[Varnode], addr: u64) -> IrInsn {
        IrInsn::with_output(IrOp::IntAdd, output, smallvec![inputs[0], inputs[1]], addr)
    }

    #[test]
    fn test_ssa_straight_line() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("straight_line", BlockId(0), 0x1000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(def_insn(r0, &[r8, c1], 0x1000));

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(def_insn(r8, &[r0, c1], 0x1010));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0x1020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let ssa = build_ssa(func);

        for phis in ssa.phi_map.values() {
            assert!(phis.is_empty(), "no phis expected in straight-line code");
        }
    }

    #[test]
    fn test_ssa_diamond_phi() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);

        let mut func = Function::new("diamond", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(ctrl_insn(IrOp::Cbranch, 0x2000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(def_insn(r0, &[r8, c1], 0x2010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x2014));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(def_insn(r0, &[r8, c2], 0x2020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x2024));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x2030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let ssa = build_ssa(func);

        let phis_at_3 = ssa.phi_map.get(&BlockId(3)).expect("phi expected at BB3");
        assert!(!phis_at_3.is_empty(), "BB3 must have at least one phi");

        let r0_phi = phis_at_3.iter().find(|p| p.output.base == r0);
        assert!(r0_phi.is_some(), "phi for r0 expected at BB3");

        let phi = r0_phi.expect("phi for r0 at BB3");
        assert_eq!(phi.inputs.len(), 2, "diamond phi must have 2 inputs");
    }

    #[test]
    fn test_ssa_loop_phi() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("loop", BlockId(0), 0x3000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(def_insn(r0, &[r8, c1], 0x3000));
        bb0.insns.push(ctrl_insn(IrOp::Cbranch, 0x3004));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(def_insn(r0, &[r0, c1], 0x3010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x3014));
        bb1.successors = smallvec![BlockId(0)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0x3020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let ssa = build_ssa(func);

        let phis_at_0 = ssa
            .phi_map
            .get(&BlockId(0))
            .expect("phi expected at BB0 (loop header)");
        assert!(!phis_at_0.is_empty(), "BB0 must have a phi (loop header)");

        let r0_phi = phis_at_0.iter().find(|p| p.output.base == r0);
        assert!(r0_phi.is_some(), "phi for r0 expected at loop header BB0");
    }

    #[test]
    fn test_ssa_versions_monotonic() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("monotonic", BlockId(0), 0x4000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(def_insn(r0, &[r8, c1], 0x4000));
        bb0.insns.push(def_insn(r0, &[r0, c1], 0x4004));
        bb0.insns.push(def_insn(r0, &[r0, c1], 0x4008));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0x400c));

        func.insert_block(bb0);

        let ssa = build_ssa(func);

        let mut versions: Vec<u32> = Vec::new();
        for i in 0..3 {
            if let Some(sv) = ssa.var_map.get(&(BlockId(0), i, VarnodeSlot::Output))
                && sv.base == r0
            {
                versions.push(sv.version);
            }
        }

        assert_eq!(versions.len(), 3, "expected 3 defs of r0");
        for window in versions.windows(2) {
            assert!(
                window[0] < window[1],
                "versions must be strictly increasing: {:?}",
                versions,
            );
        }
    }

    #[test]
    fn test_post_dom_simple_diamond() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("diamond_pdom", BlockId(0), 0x5000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(ctrl_insn(IrOp::Cbranch, 0x5000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(def_insn(r0, &[r8, c1], 0x5010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x5014));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(def_insn(r0, &[r8, c1], 0x5020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x5024));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x5030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let ssa = build_ssa(func);
        let pdom = ssa
            .post_dom_tree
            .as_ref()
            .expect("post_dom_tree should be Some");

        assert_eq!(pdom.idom(BlockId(0)), Some(BlockId(3)));
        assert_eq!(pdom.idom(BlockId(1)), Some(BlockId(3)));
        assert_eq!(pdom.idom(BlockId(2)), Some(BlockId(3)));
    }

    #[test]
    fn test_post_dom_chain() {
        let mut func = Function::new("chain_pdom", BlockId(0), 0x6000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(ctrl_insn(IrOp::Branch, 0x6000));
        bb0.successors = smallvec![BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x6010));
        bb1.successors = smallvec![BlockId(2)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0x6020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let ssa = build_ssa(func);
        let pdom = ssa
            .post_dom_tree
            .as_ref()
            .expect("post_dom_tree should be Some");

        assert_eq!(pdom.idom(BlockId(0)), Some(BlockId(1)));
        assert_eq!(pdom.idom(BlockId(1)), Some(BlockId(2)));
    }

    #[test]
    fn test_post_dom_with_early_return() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("early_return_pdom", BlockId(0), 0x7000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(ctrl_insn(IrOp::Cbranch, 0x7000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl_insn(IrOp::Return, 0x7010));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(def_insn(r0, &[r8, c1], 0x7020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x7024));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x7030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let ssa = build_ssa(func);
        let pdom = ssa
            .post_dom_tree
            .as_ref()
            .expect("post_dom_tree should be Some");
        let exit = ssa.cfg.exit_block();

        assert_eq!(pdom.idom(BlockId(0)), Some(exit));
    }

    #[test]
    fn test_post_dom_nested_if() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("nested_pdom", BlockId(0), 0x8000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(ctrl_insn(IrOp::Cbranch, 0x8000));
        bb0.successors = smallvec![BlockId(1), BlockId(4)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl_insn(IrOp::Cbranch, 0x8010));
        bb1.successors = smallvec![BlockId(2), BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(def_insn(r0, &[r8, c1], 0x8020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x8024));
        bb2.successors = smallvec![BlockId(4)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(def_insn(r0, &[r8, c1], 0x8030));
        bb3.insns.push(ctrl_insn(IrOp::Branch, 0x8034));
        bb3.successors = smallvec![BlockId(4)];

        let mut bb4 = BasicBlock::new(BlockId(4));
        bb4.insns.push(ctrl_insn(IrOp::Return, 0x8040));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);
        func.insert_block(bb4);

        let ssa = build_ssa(func);
        let pdom = ssa
            .post_dom_tree
            .as_ref()
            .expect("post_dom_tree should be Some");

        assert_eq!(pdom.idom(BlockId(0)), Some(BlockId(4)));
        assert_eq!(pdom.idom(BlockId(1)), Some(BlockId(4)));
    }

    #[test]
    fn test_post_dom_available_in_build_ssa() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("pdom_available", BlockId(0), 0x9000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(def_insn(r0, &[r8, c1], 0x9000));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0x9004));
        func.insert_block(bb0);

        let ssa = build_ssa(func);
        assert!(ssa.post_dom_tree.is_some());
    }
}
