//! High-level IR (HIR) for structured control flow.
//!
//! [`HirNode`] represents a single structured control-flow construct recovered
//! from the SSA-form CFG. The structurer walks the dominator tree and emits
//! these nodes in a recursive descent, falling back to [`Goto`]/[`Label`] pairs
//! for irreducible regions.

use std::collections::{BTreeMap, BTreeSet};
use std::fmt;

use unlace_ir::ssa::{PanicKind, PrimitiveType, SsaVarnode};
use unlace_ir::types::Type;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::switch_recovery::IndirectBranchKind;

/// Opaque label identifier for goto/label fallback.
#[derive(Copy, Clone, Debug, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct LabelId(pub u32);

impl fmt::Display for LabelId {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "label_{}", self.0)
    }
}

/// A single captured value inside an [`HirNode::ObjcBlock`].
///
/// `name` is the source-level identifier (or a synthesized placeholder
/// when the lifter could not recover one). `varnode` records the SSA
/// varnode that the capture loads from — populated when the block
/// recovery pass has high confidence in the value's provenance, `None`
/// otherwise.
///
/// The C printer uses `varnode` to look the capture up in
/// [`HirFunction::byref_boxes`]; a hit renders the capture as
/// `__block T name`, a miss falls back to plain `name`.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct ObjcBlockCapture {
    pub name: String,
    pub varnode: Option<SsaVarnode>,
}

impl ObjcBlockCapture {
    /// Build a capture with an unresolved SSA varnode.
    pub fn unresolved(name: impl Into<String>) -> Self {
        Self {
            name: name.into(),
            varnode: None,
        }
    }

    /// Build a capture whose value was resolved to `sv`.
    pub fn resolved(name: impl Into<String>, sv: SsaVarnode) -> Self {
        Self {
            name: name.into(),
            varnode: Some(sv),
        }
    }
}

/// A single case in a switch statement.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum SwitchCase {
    /// Matches a single constant value.
    Value(u64),
    /// Matches a range `[lo, hi]` (inclusive).
    Range(u64, u64),
}

impl fmt::Display for SwitchCase {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Value(v) => write!(f, "case {v}"),
            Self::Range(lo, hi) => write!(f, "case {lo}..={hi}"),
        }
    }
}

/// A structured control-flow node in the HIR.
///
/// The structurer emits a tree of these nodes from the SSA CFG. Irreducible
/// control flow that cannot be expressed as `If`/`While`/`DoWhile`/`Switch`
/// is captured via [`Goto`]/[`Label`] pairs.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum HirNode {
    /// A sequential block of HIR nodes.
    Block(Vec<HirNode>),

    /// A single IR statement (non-control-flow instruction).
    Statement(IrInsn),

    /// An if/else construct.
    If {
        cond: SsaVarnode,
        then_body: Vec<HirNode>,
        else_body: Option<Vec<HirNode>>,
    },

    /// A while loop (condition tested before the body).
    While {
        cond: SsaVarnode,
        body: Vec<HirNode>,
    },

    /// A do-while loop (condition tested after the body).
    DoWhile {
        body: Vec<HirNode>,
        cond: SsaVarnode,
    },

    /// A C-style for-loop: `for (init; cond; update) body`.
    ///
    /// Recovered from `init; while (cond) { body; update }` patterns by
    /// [`recover_for_loops`](crate::structurer::recover_for_loops). Eligibility
    /// requires:
    ///   1. `init` (when present) defines a base varnode V (the induction variable).
    ///   2. `cond` reads V.
    ///   3. `update` writes V (and reads V plus a constant step).
    ///   4. V is not referenced after the loop in the surrounding scope.
    For {
        /// The init statement (e.g. `i = 0`), or `None` for `for(; cond; step)`.
        init: Option<IrInsn>,
        /// The loop condition (e.g. `i < n`).
        cond: SsaVarnode,
        /// The update statement at the end of the loop body (e.g. `i++`).
        update: IrInsn,
        /// Body statements with the trailing update removed.
        body: Vec<HirNode>,
    },

    /// A switch/case construct.
    Switch {
        cond: SsaVarnode,
        cases: Vec<(SwitchCase, Vec<HirNode>, bool)>,
        default: Option<Vec<HirNode>>,
        /// Address of the jump table that this switch was recovered from,
        /// if any. Populated by [`crate::switch_recovery`] when a jump table
        /// is matched to the switch's instruction address. Used by the C
        /// printer to emit an IDA-style `// jumptable 0x<addr> cases <N>`
        /// annotation above the `switch` keyword.
        jumptable_addr: Option<u64>,
        /// Number of cases in the jump table this switch was recovered from.
        /// Counts table entries, *not* unique case bodies (so duplicated
        /// default-fallthrough entries inflate this number — this matches
        /// IDA's annotation behaviour).
        jumptable_cases: Option<usize>,
    },

    /// Return from the function.
    Return(Option<SsaVarnode>),

    /// Unconditional jump to a label (irreducible fallback).
    Goto(LabelId),

    /// A label target for goto (irreducible fallback).
    Label(LabelId),

    /// A ternary conditional expression: `output = cond ? then_val : else_val`.
    ///
    /// Recovered from `If { then_body: [Statement(copy → V)], else_body: [Statement(copy → V)] }`
    /// patterns where both branches are single COPY assignments to the same output varnode.
    Ternary {
        cond: SsaVarnode,
        then_insn: IrInsn,
        else_insn: IrInsn,
        /// The output varnode that both branches write to.
        output: Varnode,
    },

    TailCall {
        target: u64,
    },

    /// A `break` statement inside a loop body.
    ///
    /// Recovered from gotos that target the loop exit block, allowing the
    /// structurer to emit `break` instead of a goto/label fallback.
    Break,

    /// A `continue` statement inside a loop body.
    ///
    /// Recovered from gotos that target the loop header (while/for) or
    /// latch (do-while), skipping the rest of the loop body.
    Continue,

    /// A `try { } catch (T e) { } [catch (T2 e) { } …]` construct.
    ///
    /// Each catch arm pairs an exception type with its handler body.
    /// A type of [`Type::Primitive(PrimitiveType::Unknown)`] denotes a
    /// catch-all handler — the C printer renders it as `catch (...)`.
    ///
    /// MSVC SEH lowering (t183) emits this variant when a try-block map
    /// entry has one or more typed handlers. The historical
    /// landing-pad-driven structurer also emits it with a single
    /// catch-all arm to model C++ EH cleanup regions (the printer in
    /// turn emits these as `__except` for back-compat with the previous
    /// fixed-shape rendering).
    TryCatch {
        try_body: Vec<HirNode>,
        catch_arms: Vec<(Type, Vec<HirNode>)>,
    },

    /// An MSVC `__try { } __finally { }` construct.
    ///
    /// Recovered by [`crate::structurer::wrap_seh_try_finally`] from the
    /// MSVC SEH unwind-map metadata decoded in
    /// [`unlace_loader::seh`]. Distinct from [`HirNode::TryCatch`] because
    /// `__finally` always runs (normal flow *or* exception flow) and so
    /// has no exception-type parameter.
    TryFinally {
        try_body: Vec<HirNode>,
        finally_body: Vec<HirNode>,
    },

    /// A wrapper that attaches free-form C comments to an inner node.
    ///
    /// `pre` comments render *before* the inner statement (one per line,
    /// at the inner statement's indentation). `post` comments render
    /// *after* the inner statement, on the same line for trailing
    /// `// foo` content if a single short comment, otherwise on their
    /// own lines below.
    ///
    /// Sources for these comments include:
    /// - DWARF source-line annotations (e.g. `// /path/foo.c:42`).
    /// - Symbol metadata (e.g. `// hint: external API`).
    /// - User-provided overrides via the future plugin/comment hook.
    ///
    /// The inner node may be any [`HirNode`] (statement, control-flow
    /// construct, even another `Commented` wrapper). Transform passes
    /// preserve the wrapper, propagating comments from input to output.
    /// The C printer renders pre-comments before the inner node's first
    /// emitted line and post-comments after its last emitted line.
    Commented {
        pre: Vec<String>,
        post: Vec<String>,
        inner: Box<HirNode>,
    },

    /// An Objective-C block literal recovered by `unlace-passes`'s
    /// `objc_blocks` pass.
    ///
    /// MVP rendering: emitted as a placeholder `^{ /* invoke=0x... */ }`
    /// expression with the recovered `invoke` function-pointer address and
    /// captured-variable list. Future work: lower as a proper block
    /// closure with typed parameter list and body.
    ///
    /// Each capture carries the source-level name and (optionally) the
    /// SSA varnode it was lowered from. The C printer cross-references
    /// the varnode against [`HirFunction::byref_boxes`] to decide whether
    /// to render the capture as `__block T name` (when the varnode is a
    /// `__block` box, t176) or as the plain `name` (the fallback used
    /// when no byref metadata is available).
    ObjcBlock {
        invoke: u64,
        captures: Vec<ObjcBlockCapture>,
    },

    /// An ARM/Thumb IT-block guarded region: a contiguous run of statements
    /// that execute only when an architecture condition code holds.
    ///
    /// Emitted by the structurer when consecutive [`IrInsn`]s carry a
    /// matching `guard` (cond code, ARM ARM A8.3 encoding, 0..=15). The C
    /// printer renders this as `if (cond_<mnemonic>) { ... }` since the
    /// flag-producing instruction lives upstream and the cond is taken
    /// directly from the architecture's NZCV state at runtime.
    ///
    /// The `else_body` field carries the fused `E` lane of an `ITE`/`ITEE`/etc.
    /// IT block: when two adjacent [`GuardedIf`] nodes have inverse cond codes
    /// (`cond_b == cond_a ^ 1`), the structurer fuses them into a single
    /// `GuardedIf` whose `else_body` is the second group's body. Empty for
    /// pure `IT` (T-only) blocks.
    GuardedIf {
        cond_code: u8,
        then_body: Vec<HirNode>,
        else_body: Vec<HirNode>,
    },

    /// A select-expression collapse of a [`HirNode::GuardedIf`] whose
    /// `then_body` and `else_body` are each a single `Statement(Copy)`
    /// assigning the same output varnode. Conceptually
    ///
    /// ```text
    /// if (cond_<cc>) { v = a; } else { v = b; }
    /// ```
    ///
    /// becomes
    ///
    /// ```text
    /// v = cond_<cc> ? a : b;
    /// ```
    ///
    /// Recovered by the structurer's `fold_guarded_ternary` pass (t167)
    /// after `fuse_guarded_if_else` has paired the T- and E-lanes of an
    /// IT block. Only fires when both arms have exactly one assignment to
    /// the same lvalue *and* are pure `Copy` ops (no implicit side effects
    /// like Load/Store or Call). `cond_code` is the ARM A8.3 cond code;
    /// the C printer renders the predicate as `cond_<mnemonic>` mirroring
    /// the existing `GuardedIf` output style.
    GuardedTernary {
        cond_code: u8,
        then_insn: IrInsn,
        else_insn: IrInsn,
        /// Output varnode both branches write to.
        output: Varnode,
    },

    /// An AArch64 CSEL ternary recovered from a CMP/SUBS+CSEL pair.
    ///
    /// The lifter emits CSEL as
    /// `Callother(CALLOTHER_AARCH64_CSEL, cond, true_val, false_val) → dst`
    /// preceded by a CMP/SUBS that wrote NZCV. The structurer's
    /// `fold_csel_ternary` pass (t180) collapses the pair into this node,
    /// which the C printer renders as
    ///
    /// ```text
    /// dst = (cmp_lhs <cmp_op> cmp_rhs) ? true_val : false_val;
    /// ```
    ///
    /// `cmp_op` is one of the `Int*` comparison opcodes derived from the
    /// AArch64 condition code (EQ→IntEqual, NE→IntNotequal, GE→IntSlessequal
    /// with operands swapped, LT→IntSless, etc.). `cmp_lhs`/`cmp_rhs` are
    /// the two operands of the preceding `IntSub` (the IR shape that
    /// `lift_cmp`/`lift_subs` emit). Unlike [`HirNode::GuardedTernary`],
    /// which carries an opaque ARM A8.3 cond_code, this node materializes
    /// the comparison explicitly so downstream type-inference / value
    /// tracking can reason about the predicate.
    CselTernary {
        /// Comparison opcode (e.g. `IrOp::IntEqual`, `IrOp::IntSless`).
        cmp_op: IrOp,
        /// Left-hand side of the comparison (the CMP/SUBS Rn).
        cmp_lhs: Varnode,
        /// Right-hand side of the comparison (the CMP/SUBS Rm or immediate).
        cmp_rhs: Varnode,
        /// Value taken when the predicate is true (CSEL Rn).
        true_val: Varnode,
        /// Value taken when the predicate is false (CSEL Rm).
        false_val: Varnode,
        /// Destination register (CSEL Rd).
        output: Varnode,
        /// Machine address of the CSEL instruction (for ordering / debug).
        addr: u64,
    },

    /// An AArch64 CMP+Bcc fold: an `if`/`else` whose predicate is the
    /// explicit comparison the preceding CMP/SUBS produced, rather than
    /// an opaque NZCV flag-byte SSA read.
    ///
    /// The lifter emits a `Cbranch` consuming one of the per-flag bytes
    /// (`NF`/`ZF`/`CF`/`VF` at offsets 264..=267) or the packed `ARM_NZCV`
    /// (offset 272) that a prior CMP/SUBS wrote. The structurer's
    /// `fold_aarch64_bcc_if` pass (t189) detects the pattern and rewrites
    /// the resulting [`HirNode::If`] into this variant, which the C printer
    /// renders as
    ///
    /// ```text
    /// if (cmp_lhs <cmp_op> cmp_rhs) { … } else { … }
    /// ```
    ///
    /// `cmp_op` is one of the `Int*` comparison opcodes derived from the
    /// AArch64 condition code (EQ→IntEqual, NE→IntNotequal, GE→IntSlessequal
    /// with operands swapped, LT→IntSless, …). `cmp_lhs`/`cmp_rhs` are the
    /// two operands of the preceding `IntSub` (the IR shape that
    /// `lift_cmp`/`lift_subs` emit). Mirrors [`HirNode::CselTernary`] for
    /// branches.
    IfCmp {
        /// Comparison opcode (e.g. `IrOp::IntEqual`, `IrOp::IntSless`).
        cmp_op: IrOp,
        /// Left-hand side of the comparison (the CMP/SUBS Rn).
        cmp_lhs: Varnode,
        /// Right-hand side of the comparison (the CMP/SUBS Rm or immediate).
        cmp_rhs: Varnode,
        /// Body executed when the predicate is true.
        then_body: Vec<HirNode>,
        /// Optional body executed when the predicate is false.
        else_body: Option<Vec<HirNode>>,
        /// Machine address of the Bcc instruction (for ordering / debug).
        addr: u64,
    },

    /// One or more raw assembly lines that the lifter could not translate
    /// into structured IR.
    ///
    /// Emitted in C output as an IDA-style `__asm { ... }` block. This
    /// variant is the structurer's safety net for instructions that have
    /// no semantic equivalent (privileged x86 ops, rare FPU paths, opaque
    /// fallback decodes, etc.). The lifter currently produces
    /// [`unlace_ir::IrOp::Unimplemented`] for these and the structurer
    /// surfaces them as `Statement` nodes today; future work will rewrite
    /// runs of `Unimplemented` into `Asm` blocks carrying the original
    /// mnemonic + operands so the output preserves the unlowered text
    /// instead of dropping it.
    ///
    /// Each string in `instructions` represents one raw asm line and is
    /// emitted verbatim (no leading indentation; the printer adds it).
    /// Empty `instructions` produces an empty `__asm { }` block.
    Asm { instructions: Vec<String> },
}

impl HirNode {
    /// Wrap `self` with a single pre-statement comment, building (or extending)
    /// a [`HirNode::Commented`] wrapper. Convenience for plugin/DWARF code that
    /// attaches comments without caring about structural shape.
    pub fn with_pre_comment(self, comment: impl Into<String>) -> HirNode {
        match self {
            HirNode::Commented {
                mut pre,
                post,
                inner,
            } => {
                pre.push(comment.into());
                HirNode::Commented { pre, post, inner }
            }
            other => HirNode::Commented {
                pre: vec![comment.into()],
                post: Vec::new(),
                inner: Box::new(other),
            },
        }
    }

    /// Wrap `self` with a single post-statement comment, building (or extending)
    /// a [`HirNode::Commented`] wrapper.
    pub fn with_post_comment(self, comment: impl Into<String>) -> HirNode {
        match self {
            HirNode::Commented {
                pre,
                mut post,
                inner,
            } => {
                post.push(comment.into());
                HirNode::Commented { pre, post, inner }
            }
            other => HirNode::Commented {
                pre: Vec::new(),
                post: vec![comment.into()],
                inner: Box::new(other),
            },
        }
    }

    /// Borrow the unwrapped, comment-stripped node (recursing through nested
    /// wrappers). Returns `self` when `self` is not [`HirNode::Commented`].
    pub fn unwrap_commented(&self) -> &HirNode {
        let mut cur = self;
        while let HirNode::Commented { inner, .. } = cur {
            cur = inner.as_ref();
        }
        cur
    }
}

/// A structured function in the HIR.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct HirFunction {
    pub name: String,
    pub params: Vec<(String, PrimitiveType)>,
    pub return_type: PrimitiveType,
    pub body: Vec<HirNode>,
    /// Machine address of the function entry point.
    pub addr: u64,
    pub foldable_exprs: BTreeSet<SsaVarnode>,
    /// Panic call sites keyed by instruction machine address.
    pub panic_sites: BTreeMap<u64, PanicKind>,
    /// `true` when the function never returns to its caller (e.g. tail-calls
    /// `exit`/`abort`/`panic`). Mirrors [`unlace_ir::ssa::SsaFunction::noreturn`]
    /// and triggers an `__noreturn` annotation in the C output.
    pub noreturn: bool,
    /// Composite (struct/array) type annotations for SSA varnodes, propagated
    /// from [`SsaFunction::composite_var_types`] for use by the C printer when
    /// emitting `base->field_<offset>` struct field access syntax.
    pub composite_var_types: BTreeMap<SsaVarnode, Type>,
    /// `true` when this function is detected as a C++ constructor.
    ///
    /// Detection sources:
    /// 1. Itanium mangling tags `C1` / `C2` / `C3` in the symbol name
    ///    (handled in [`unlace_output::demangle::demangle`]).
    /// 2. Demangled `ClassName::ClassName(...)` shape where the final
    ///    component matches the enclosing class.
    ///
    /// Populated at structuring time from [`HirFunction::name`] and
    /// preserved across HIR rewriting passes. The C printer uses this to
    /// surface a `ClassName::ClassName(args)` comment above the emitted
    /// signature instead of the raw mangled identifier.
    pub is_ctor: bool,
    /// `true` when this function is detected as a C++ destructor.
    ///
    /// Detection sources:
    /// 1. Itanium mangling tags `D0` / `D1` / `D2` in the symbol name.
    /// 2. Demangled name whose final component starts with `~`.
    pub is_dtor: bool,
    /// The class/struct that owns this member function, when detectable
    /// from the demangled name. `None` for free functions or symbols that
    /// don't demangle as member functions.
    pub class_name: Option<String>,
    /// Per-SSA-varnode names produced by [`unlace_passes::VariableMergePass`]'s
    /// interference-graph coalescer.
    ///
    /// When non-empty, the C printer prefers this map over its default
    /// "one name per base [`Varnode`]" heuristic, allowing several SSA
    /// versions of one base — and (for Unique-space) several distinct bases
    /// with disjoint live ranges — to share one source-level name like
    /// `v3` / `v4`.  Empty when the coalescer was not run or produced no
    /// merges, in which case the printer falls back to its old behaviour.
    pub merged_names: BTreeMap<SsaVarnode, String>,
    /// ObjC dispatch annotations keyed by instruction VA. When the value is
    /// a bracket-form `[Class method:]` the C printer should emit it as the
    /// statement text in place of the synthesized `objc_msgSend(...)` call.
    pub objc_dispatch_calls: BTreeMap<u64, String>,
    /// Per-arch indirect-branch classifications keyed by the BRANCHIND
    /// instruction's machine address. Populated by the structurer when an
    /// indirect branch did not resolve as a structured `Switch` and the
    /// architecture-specific classifier in [`crate::switch_recovery`]
    /// recognised the dispatch pattern. Downstream passes can use these
    /// annotations to drive per-kind table layout recovery.
    pub indirect_branch_kinds: BTreeMap<u64, IndirectBranchKind>,
    /// Recovered Objective-C `__block` (byref) variable boxes, keyed by
    /// the base [`unlace_ir::Varnode`] of the box's alloca. Propagated
    /// from [`unlace_ir::ssa::SsaFunction::byref_boxes`] at structuring
    /// time; consumed by the C printer to render the alloca as
    /// `__block T name;` instead of a 40-byte anonymous struct.
    pub byref_boxes: BTreeMap<unlace_ir::Varnode, unlace_ir::ssa::ByrefBox>,
    /// Indices (zero-based) of parameters whose address is taken — i.e.
    /// the parameter is logically a pointer/reference and the C printer
    /// should append a trailing `// BYREF` comment to the declaration.
    /// Propagated from [`unlace_ir::ssa::SsaFunction::byref_info`] at
    /// structuring time; empty when the byref detector found nothing or
    /// hasn't been run.
    pub byref_params: std::collections::BTreeSet<u32>,
    /// Per-SsaVarnode role-based names propagated from
    /// [`unlace_ir::ssa::SsaFunction::var_role_names`].
    ///
    /// The C printer consults this map *between* a non-default
    /// `merged_names` entry (which always wins when meaningful) and the
    /// fresh-`vN` fallback allocator. Empty when the role-naming pass
    /// classified every SSA value as `Temporary`.
    pub var_role_names: BTreeMap<SsaVarnode, String>,
    /// Late-pipeline finalized prototype propagated from
    /// [`unlace_ir::ssa::SsaFunction::finalized_signature`]. When `Some`,
    /// the C printer prefers its `params` / `return_type` over the raw
    /// [`Self::params`] / [`Self::return_type`] when emitting the header,
    /// and surfaces `dropped_param_count` as a comment.
    pub finalized_signature: Option<unlace_ir::ssa::FinalizedSignature>,
}
