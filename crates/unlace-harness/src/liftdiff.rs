//! B2-grade STRUCTURAL differential between the Rust port and the C++ oracle.
//!
//! The W5 gate needs a differential at the **B2 boundary** — the `break start
//! heritage` point of the `decompile` console command, i.e. pre-SSA dataflow +
//! the recovered basic-block CFG.  A full byte-for-byte diff of the C++
//! `print raw` symbolic rendering needs the W8/W9 *print* stack
//! (`TypeOp::printRaw` plus register-name resolution), which is not yet ported.
//! This module instead compares the **structural skeleton** both engines can
//! produce faithfully today.
//!
//! 1. **op count** (per block + total).
//! 2. **per-op, in block order**: the seqnum *address*, a coarse *opcode class*
//!    (LOAD / STORE / BRANCH / CBRANCH / BRANCHIND / CALL / CALLIND / RETURN /
//!    VALUE — derivable identically from the C++ symbolic line and the Rust
//!    `OpCode`), and the *output-presence* flag.
//! 3. **the block partition**: block count, each block's `(start,stop)` cover
//!    addresses, the ordered op-address list per block, and the inter-block
//!    out-edges (by target-block INDEX in print order).
//!
//! ## How blocks are keyed (cover-start is NOT a key)
//!
//! Both engines print blocks in `BlockGraph::list` order (`block.cc:1301`), which
//! at B2 — right after `structureReset` assigns indices in list order — equals the
//! block `index` order.  Blocks are therefore stored as an **ordered `Vec`** and
//! matched across engines by their **position in print order** (== `index`); the
//! cover `(start,stop)` is compared as *data*, never used as the key.  This is
//! mandatory: a cover-start address is NOT unique — one machine instruction can
//! decode (via a register-window `save`/`restore` inject, a conditional-execution
//! lattice, or any decode-time p-code inject) into several basic blocks that all
//! cover the same address.  The earlier (rejected) design keyed a
//! `BTreeMap<u64,BlockRec>` by cover-start, which silently collapsed such blocks on
//! BOTH engines and produced a spurious PASS over a degenerate projection
//! (`gh6990-returnpair`: a 5-block SPARC CFG → 2 keyed blocks).  Inter-block edges
//! are likewise keyed by target-block **index** (the `Block_N` short-header carries
//! `N` directly; the fall-through edge is the next printed block, index `i+1`), so
//! they too are sound for any control-flow shape.
//!
//! ## What the C++ B2 snapshot is, exactly
//!
//! `unlace.goldens` snapshots B2 as `print raw` + `print tree block` written through
//! one `openfile`.  At `break start heritage` the *structured* blocks (`sblocks`)
//! are still empty, so `print tree block` (`Funcdata::printBlockTree` →
//! `sblocks.printTree`) emits nothing; the whole file is
//! `Funcdata::printRaw` → `BlockGraph::printRaw` (`block.cc:1301`):
//!
//! ```text
//! 0                                         <- top BlockGraph header (index, no range)
//! Basic Block 0 0x..-0x..                   <- BlockBasic::printHeader (index start-stop)
//! <addr>:<time>:\t<out> = <in0> OP <in1>    <- SeqNum ':' + PcodeOp::printRaw
//! ...
//! <addr>:   \t[ goto Block_N:0x.. ]         <- printRawImpliedGoto (fall-through != next)
//! Basic Block 1 ...
//! ```
//!
//! Op-line grammar (derived from real snapshots + `op.cc`/`typeop.cc`):
//!   - SeqNum: `<addr.printRaw>:<time-hex>` then a literal TAB.
//!   - `Varnode::printRaw` renders registers by NAME, uniques as `u0x..`/`r0x..`,
//!     constants as `#0x..`, with a trailing `:<size>` when size != the register's
//!     natural size.  An SSA-less varnode prints `(free)`; a written one prints
//!     `(<defaddr>:<deftime>)`.  The exact varnode rendering needs the print stack;
//!     we read only the *structure* (operator/keyword shape, output presence).
//!
//! ## Pre-heritage actions (the boundary the snapshot actually represents)
//!
//! The snapshot is taken INSIDE `ActionDatabase::universalAction` at `break start
//! heritage` (`coreaction.cc:5756`), so every action registered BEFORE
//! `ActionHeritage` whose group is in the default `"decompile"` group set
//! (`buildDefaultGroups`, `coreaction.cc:5683`) has already run:
//!
//! | Action (order) | group | in `decompile`? | structural effect at B2 |
//! |---|---|---|---|
//! | `ActionStart` | base | yes | `startProcessing` = `followFlow` (`generateOps`+`generateBlocks`) + `structureReset` |
//! | `ActionConstbase` | base | yes | inserts a COPY at block-0 head per tracked-context register (and an entry inject) |
//! | `ActionNormalizeSetup` | normalanalysis | **NO** | (skipped) |
//! | `ActionDefaultParams` | base | yes | sets the default proto model — **no ops** |
//! | `ActionExtraPopSetup` | base | yes | INT_ADD / INDIRECT per call w/ non-zero extrapop |
//! | `ActionPrototypeTypes` | protorecovery | yes | rewrites each RETURN's `in(0)` to `#0x0`; locked-IO extension ops |
//! | `ActionFuncLink` | protorecovery | yes | stack-placeholder INDIRECT per call w/ a spacebase |
//! | `ActionFuncLinkOutOnly` | noproto | **NO** | (skipped) |
//! | `ActionUnreachable` | base | yes | removes unreachable blocks (none here) |
//! | `ActionVarnodeProps` | base | yes | varnode property flags — **no ops** |
//! | `ActionLowerSwitchInstall` | switchnorm | yes | inert without a prior detector record |
//!
//! The Rust port has `ActionStart`'s body (`followFlow`) realized as
//! `FlowInfo::generate_ops` + `generate_blocks`, and `structureReset` as
//! `Funcdata::structure_reset`; the op-adding pre-heritage actions
//! (`ActionConstbase`, `ActionExtraPopSetup`, `ActionFuncLink`) and the RETURN
//! rewrite (`ActionPrototypeTypes`) are NOT ported in the flow path.  This module
//! is **precise, not optimistic** about them:
//!
//!   - **ActionConstbase tracked-context COPYs** are detected on the C++ side
//!     (a single-input COPY/extension at the entry block head whose seqnum-time is
//!     greater than every *decode* op-time at the same address — the `newOp(...,
//!     bb->getStart())` + `opInsertBegin` signature) and excluded from the compared
//!     op set.  A test whose entry block carries such an op is **comparable** (the
//!     exclusion is exact and reported); a test where the count is ambiguous is
//!     marked DIVERGENT, never silently passed.
//!   - **ActionPrototypeTypes RETURN-input rewrite** changes only RETURN *inputs*,
//!     which the structural compare does not read (RETURN carries no output and its
//!     class is unchanged), so it is invisible here — no normalization needed.
//!   - **ActionExtraPopSetup / ActionFuncLink** add ops **only for calls with a
//!     non-zero extrapop or a spacebase**.  Tests whose functions contain a CALL are
//!     only admitted when the C++ op count matches the Rust op count after the
//!     tracked-context exclusion (i.e. those actions provably added nothing); a CALL
//!     test where they fired is reported DIVERGENT with the count delta, not hidden.
//!
//! Tests that reach a W4 stub in `generate_ops` (a BRANCHIND/jump-table or an
//! injected CALLOTHER — `recover_jump_tables_stub`/`inject_pcode` return a stub
//! `Err`) are reported EXCLUDED with the stub reason; they are not counted as
//! failures (the boundary is unreachable until the W4 wave lands).

// ===========================================================================
// Opcode class — the coarse, engine-agnostic op type both sides agree on
// ===========================================================================

/// A coarse opcode class derivable identically from the C++ `print raw` symbolic
/// line and from a Rust `OpCode`.
///
/// The C++ `print raw` form distinguishes the control-flow / memory / call
/// opcodes by an unambiguous KEYWORD or structural shape
/// (`typeop.cc`'s per-opcode `printRaw`): STORE (`*(..)=`), LOAD (`= *(`),
/// BRANCH/CBRANCH (`goto ..`/`goto .. if (..)`), BRANCHIND (`switch ..`),
/// CALL/CALLIND (`call`/`callind` keyword), RETURN (`return(..)`).  Every other
/// value-producing op renders as `out = <expr>` where `<expr>` is an infix
/// operator (`a + b`), a unary operator (`! a`), or a FUNCTION form (`NAME(..)`)
/// — and a single COPY source (`out = a`) is structurally indistinguishable from
/// a one-argument function form without the (un-ported) varnode print stack.  So
/// COPY, INDIRECT, and all arithmetic/logical/function ops collapse into one
/// [`Value`](OpClass::Value) class; the keyword classes stay precise.  This is the
/// finest classification both engines agree on at B2 without the print stack.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum OpClass {
    /// `out = *(space,ptr)` — CPUI_LOAD.
    Load,
    /// `*(space,ptr) = val` — CPUI_STORE.
    Store,
    /// `goto Block_N:..` / `goto <vn>` (no condition) — CPUI_BRANCH.
    Branch,
    /// `goto .. if (..) else ..` — CPUI_CBRANCH.
    Cbranch,
    /// `switch (<vn>)` — CPUI_BRANCHIND.
    Branchind,
    /// `[out =] call <target>(..)` — CPUI_CALL.
    Call,
    /// `[out =] callind <target>(..)` — CPUI_CALLIND.
    Callind,
    /// `return(<vn>)` — CPUI_RETURN.
    Return,
    /// any value-producing `out = <expr>` op: COPY, INDIRECT, every INT_*/FLOAT_*/
    /// BOOL_* arithmetic/logical op, SUBPIECE/PIECE, ZEXT/SEXT, PTRADD/PTRSUB,
    /// CAST, POPCOUNT/LZCOUNT, MULTIEQUAL, and the CALLOTHER user-op (which renders
    /// as a function form, indistinguishable from an arithmetic function op).
    Value,
}

impl OpClass {
    /// Map a Rust `OpCode` to its `OpClass` (the Rust-side classifier).
    pub fn from_opcode(opc: unlace_num::opcodes::OpCode) -> OpClass {
        use unlace_num::opcodes::OpCode::*;
        match opc {
            CPUI_LOAD => OpClass::Load,
            CPUI_STORE => OpClass::Store,
            CPUI_BRANCH => OpClass::Branch,
            CPUI_CBRANCH => OpClass::Cbranch,
            CPUI_BRANCHIND => OpClass::Branchind,
            CPUI_CALL => OpClass::Call,
            CPUI_CALLIND => OpClass::Callind,
            CPUI_RETURN => OpClass::Return,
            // COPY/INDIRECT/CALLOTHER/all arithmetic & function ops -> Value.
            _ => OpClass::Value,
        }
    }
}

// ===========================================================================
// The structural model (shared by the C++ parse and the Rust extract)
// ===========================================================================

/// One op in a basic block, in print order.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct OpRec {
    /// The seqnum instruction address byte-offset (the `0x..` before the `:`).
    pub addr: u64,
    /// The coarse opcode class.
    pub class: OpClass,
    /// Whether the op writes an output Varnode (`out = ..` vs `store`/`branch`/
    /// `return`/`goto`).
    pub has_output: bool,
}

/// One basic block: index, cover range, ordered ops, and out-edge target indices.
#[derive(Debug, Clone)]
pub struct BlockRec {
    /// The block's `index` (the list/print order assigned by `structureReset`).
    /// This is the stable cross-engine key; it equals the block's position in
    /// [`StructModel::blocks`].
    pub index: i64,
    /// Cover start byte-offset (`Basic Block N 0xSTART-0xSTOP`).  Compared as data,
    /// NOT used as a key (cover-start is not unique across blocks).
    pub start: u64,
    /// Cover stop byte-offset.
    pub stop: u64,
    /// The block's ops, in print order.
    pub ops: Vec<OpRec>,
    /// Out-edge target block INDICES (order-insensitive; sorted, deduped).  Keyed
    /// by index — robust to several blocks sharing one cover-start.
    pub out_indices: Vec<i64>,
}

/// The full structural model of a function at B2.
#[derive(Debug, Clone)]
pub struct StructModel {
    /// Blocks in print order (== `BlockGraph::list` order == block-`index` order at
    /// B2).  `blocks[i].index == i`; matched across engines by POSITION, never by
    /// cover-start address.
    pub blocks: Vec<BlockRec>,
}

impl StructModel {
    /// Total op count across all blocks.
    pub fn total_ops(&self) -> usize {
        self.blocks.iter().map(|b| b.ops.len()).sum()
    }
}

// ===========================================================================
// The C++ B2 snapshot parser
// ===========================================================================

/// A parse-level error in a C++ B2 snapshot.
#[derive(Debug)]
pub struct ParseError(pub String);

impl std::fmt::Display for ParseError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "B2 parse error: {}", self.0)
    }
}

/// A raw, parsed op line (kept before tracked-context exclusion runs).
struct RawOp {
    addr: u64,
    time: u64,
    class: OpClass,
    has_output: bool,
}

/// Parse the byte-offset of an `Address::printRaw` token.  The corpus snapshots
/// all use the default code space, which prints as a bare `0x<hex>` (optionally
/// zero-padded); a space-qualified address prints `<space>:0x<hex>` (e.g. `CODE:`
/// on 8051).  Returns the offset.
fn parse_addr(tok: &str) -> Result<u64, ParseError> {
    // Strip an optional `<space>:` prefix (the part before the LAST colon that
    // precedes the hex), keeping the `0x<hex>`.
    let hexpart = tok.rsplit(':').next().unwrap_or(tok);
    let h = hexpart.strip_prefix("0x").unwrap_or(hexpart);
    u64::from_str_radix(h, 16).map_err(|e| ParseError(format!("bad address {tok:?}: {e}")))
}

/// Classify a `PcodeOp::printRaw` body (everything after the `<seqnum>:\t`) into
/// an [`OpClass`] and an output-presence flag.
///
/// The classification follows `typeop.cc`'s per-opcode `printRaw`:
///   - STORE: `*(space,ptr) = val`               (begins with `*(`)
///   - LOAD : `out = *(space,ptr)`                (RHS begins with `*(`)
///   - CBRANCH: `goto .. if (..)`                 (begins `goto ` AND contains ` if (`)
///   - BRANCH : `goto ..` (no `if`)               (begins `goto `)
///   - BRANCHIND: `switch (..)`                   (begins `switch `)
///   - RETURN: `return(..)`                       (begins `return(`)
///   - CALL : `[out = ]call ..`                   (the call keyword is `call`)
///   - CALLIND: `[out = ]callind ..`              (keyword `callind`)
///   - VALUE: every other `out = <expr>` (COPY, INDIRECT, arithmetic, function)
fn classify(body: &str) -> (OpClass, bool) {
    let b = body.trim();
    if b.starts_with("*(") {
        // STORE: `*(space,ptr) = val`
        return (OpClass::Store, false);
    }
    if b.starts_with("return(") {
        return (OpClass::Return, false);
    }
    if b.starts_with("goto ") {
        if b.contains(" if (") {
            return (OpClass::Cbranch, false);
        }
        return (OpClass::Branch, false);
    }
    if b.starts_with("switch ") {
        return (OpClass::Branchind, false);
    }
    // Everything else has an `out = RHS` form.
    let Some((_out, rhs)) = b.split_once(" = ") else {
        // No `=` and not a keyword form: a bare call/branch token (the console
        // `call`/`callind` with a void return reaches here, e.g. `call fother:8(..)`).
        if let Some(c) = call_class(b) {
            return (c, false);
        }
        return (OpClass::Value, false);
    };
    let rhs = rhs.trim();
    // `out = call ..` / `out = callind ..` (CALL/CALLIND with a return value).
    if let Some(c) = call_class(rhs) {
        return (c, true);
    }
    if rhs.starts_with("*(") {
        return (OpClass::Load, true);
    }
    (OpClass::Value, true)
}

/// If `rhs` begins with a call keyword, return the call class.
fn call_class(rhs: &str) -> Option<OpClass> {
    let first = rhs.split_whitespace().next().unwrap_or("");
    match first {
        "call" => Some(OpClass::Call),
        "callind" => Some(OpClass::Callind),
        // CALLOTHER prints as the user-op `name(..)` (a function form), so by
        // keyword alone it is indistinguishable from an arithmetic function op;
        // it folds into VALUE (the Rust side maps CPUI_CALLOTHER -> Value too).
        _ => None,
    }
}

/// Parse a `Block_<index>:0x<start>` short-header token into the block INDEX.
///
/// `FlowBlock::printShortHeader` (`block.cc:643`) prints `Block_<dec index>:<addr>`;
/// the part we key on is the INDEX (the address is auxiliary data we ignore here,
/// since several blocks can share an address).
fn parse_short_header(tok: &str) -> Option<i64> {
    // `Block_N:0xADDR` — the index is the decimal between `Block_` and the FIRST `:`.
    let body = tok.strip_prefix("Block_")?;
    let idx_str = body.split_once(':').map(|(a, _)| a).unwrap_or(body);
    idx_str.trim().parse::<i64>().ok()
}

/// Extract the out-edge target block INDICES from a terminator op body:
///
/// - `goto Block_N:0x..` -> `[N]`
/// - `goto Block_T:0x.. if (..) else Block_F:0x..` -> `[T, F]`
///
/// Returns `None` for non-`goto` bodies (fall-through / return / switch).
fn goto_targets(body: &str) -> Option<Vec<i64>> {
    let b = body.trim();
    let rest = b.strip_prefix("goto ")?;
    let mut out = Vec::new();
    // First token is the (true) target short-header.
    let mut it = rest.split_whitespace();
    if let Some(t0) = it.next() {
        if let Some(s) = parse_short_header(t0) {
            out.push(s);
        }
    }
    // A CBRANCH has `.. else Block_F:0x..` — find the token after `else`.
    if let Some(pos) = rest.find(" else ") {
        let after = &rest[pos + " else ".len()..];
        if let Some(t1) = after.split_whitespace().next() {
            if let Some(s) = parse_short_header(t1) {
                out.push(s);
            }
        }
    }
    if out.is_empty() { None } else { Some(out) }
}

/// Parse a C++ B2 snapshot file into a [`StructModel`].
///
/// `excluded_tracked` is filled with the count of `ActionConstbase`
/// tracked-context COPYs excluded from block 0 (reported by the differential).
pub fn parse_cpp_b2(text: &str, excluded_tracked: &mut usize) -> Result<StructModel, ParseError> {
    // First line is the BlockGraph header (the bare `0`); skip leading blank lines
    // and that header.
    let mut lines = text.lines().peekable();
    // Consume the top-level graph header line: a bare integer (the index, no range
    // since the top graph has an invalid start/stop).
    // (Be tolerant: only consume if it parses as a bare integer.)
    if let Some(first) = lines.peek() {
        if first.trim().parse::<i64>().is_ok() {
            lines.next();
        }
    }

    struct PendingBlock {
        index: i64,
        start: u64,
        stop: u64,
        ops: Vec<RawOp>,
        explicit_targets: Option<Vec<i64>>,
        implied_target: Option<i64>,
    }

    let mut pending: Vec<PendingBlock> = Vec::new();
    let mut cur: Option<PendingBlock> = None;

    for raw_line in lines {
        let line = raw_line;
        if let Some(rest) = line.strip_prefix("Basic Block ") {
            // `Basic Block <index> 0xSTART-0xSTOP`  (range present iff valid).
            if let Some(b) = cur.take() {
                pending.push(b);
            }
            // index is the first token; the rest (if any) is `0xSTART-0xSTOP`.
            let mut it = rest.splitn(2, ' ');
            let index: i64 = it
                .next()
                .and_then(|t| t.trim().parse().ok())
                .ok_or_else(|| ParseError(format!("bad block header {line:?}")))?;
            let (start, stop) = match it.next() {
                Some(range) => {
                    let range = range.trim();
                    let (s, e) = range
                        .split_once('-')
                        .ok_or_else(|| ParseError(format!("bad block range {range:?}")))?;
                    (parse_addr(s)?, parse_addr(e)?)
                }
                None => (0, 0),
            };
            cur = Some(PendingBlock {
                index,
                start,
                stop,
                ops: Vec::new(),
                explicit_targets: None,
                implied_target: None,
            });
            continue;
        }
        // An implied-goto line: `<addr>:   \t[ goto Block_N:0x.. ]`.
        if let Some(b) = cur.as_mut() {
            if let Some(open) = line.find("[ goto ") {
                let inner = &line[open + 2..]; // `goto Block_N:0x.. ]`
                let inner = inner.trim_end_matches(']').trim();
                if let Some(t) = goto_targets(inner) {
                    b.implied_target = t.into_iter().next();
                }
                continue;
            }
        }
        // An op line: `<addr>:<time>\t<body>`  (a literal TAB separates the
        // seqnum from the body).
        if let Some(tab) = line.find('\t') {
            let head = &line[..tab];
            let body = &line[tab + 1..];
            // head = `<addr>:<time>:`  (SeqNum prints `addr ':' time`; the trailing
            // `:` before the TAB is the `BlockBasic::printRaw` separator
            // `getSeqNum() << ":\t"`).
            let head = head.trim_end_matches(':');
            // Split off the LAST `:` -> time; the rest is the address (which may
            // itself contain a `space:` colon).
            let (addr_str, time_str) = head
                .rsplit_once(':')
                .ok_or_else(|| ParseError(format!("bad seqnum head {head:?}")))?;
            let addr = parse_addr(addr_str)?;
            let time = u64::from_str_radix(time_str.trim(), 16)
                .map_err(|e| ParseError(format!("bad seqnum time {time_str:?}: {e}")))?;
            let (class, has_output) = classify(body);
            // Record explicit goto targets from a terminator op.
            if let Some(b) = cur.as_mut() {
                if let Some(t) = goto_targets(body) {
                    b.explicit_targets = Some(t);
                }
                b.ops.push(RawOp {
                    addr,
                    time,
                    class,
                    has_output,
                });
            }
            continue;
        }
        // Blank or unrecognized line: ignore (the trailing newline, etc.).
    }
    if let Some(b) = cur.take() {
        pending.push(b);
    }
    if pending.is_empty() {
        return Err(ParseError("snapshot has no basic blocks".into()));
    }

    // The block print order == the BlockGraph `list` order; the fall-through
    // out-edge target is the NEXT block in print order (when there is no
    // explicit/implied goto).  Blocks are kept in print order (a Vec); the parsed
    // `index` is validated against the position so the C++ list/index ordering is a
    // checked invariant, not an assumption.
    let n = pending.len();
    let entry_start = pending[0].start;

    let mut blocks: Vec<BlockRec> = Vec::with_capacity(n);

    for (i, pb) in pending.into_iter().enumerate() {
        // --- Pre-heritage ENTRY-HEAD exclusion (the ARCHITECTURAL ENTRY block) ---
        //
        // `ActionConstbase` (and `ActionPrototypeTypes::extendInput` for a locked
        // small input) inserts a value-producing op at the entry block head via
        // `opInsertBegin(newOp(isize, bb->getStart()), bb)` — where `bb` is
        // `getBasicBlocks().getBlock(0)` (`coreaction.cc:697`), i.e. block INDEX 0,
        // an identity, NOT merely "some block at the entry address".  We therefore
        // apply the strip only to the block at index 0 / position 0 in print order
        // (the entry).  Keying it by `start == entry_start` (the rejected design)
        // over-reached: on a shared-start shape (gh6990: blocks 0,1,2 all cover
        // 0x32148) it could fire on a non-entry block that merely shared the address.
        //
        // Because the inserted op is created AFTER the whole function is decoded
        // (`generateOps` runs to completion before any action), its seqnum-time is
        // strictly larger than every DECODE op at the entry address; `opInsertBegin`
        // then moves it to the block head.  The signature at the entry block is thus
        // exact and LOCAL: a leading entry-address op with an output whose time
        // exceeds the time of every OTHER op at the entry address.  (A real decode op
        // at the block head is the SMALLEST-time op at the entry address — decode
        // emits in increasing time — so it never matches.)
        //
        // Pre-heritage ops inserted ELSEWHERE — `ActionExtraPopSetup`/`ActionFuncLink`
        // placeholders at a CALL site — are NOT excluded; a call-bearing test where
        // they fired shows up as an op-count / partition divergence and is reported
        // (a documented, unported-action exclusion), never silently passed.
        let mut ops_raw = pb.ops;
        let mut excluded = 0usize;
        let is_entry_block = i == 0;
        if is_entry_block {
            while !ops_raw.is_empty() {
                let head = &ops_raw[0];
                // The inserted op carries an output; a head op without one is a
                // decode terminator (STORE/BRANCH), never an inserted one.
                if !head.has_output || head.addr != entry_start {
                    break;
                }
                let head_time = head.time;
                let max_other = ops_raw
                    .iter()
                    .skip(1)
                    .filter(|o| o.addr == entry_start)
                    .map(|o| o.time)
                    .max();
                match max_other {
                    // Strictly the latest op at the entry address while at the block
                    // head: an `opInsertBegin`-inserted pre-heritage op.
                    Some(m) if head_time > m => {
                        ops_raw.remove(0);
                        excluded += 1;
                    }
                    _ => break,
                }
            }
        }
        *excluded_tracked += excluded;

        let ops: Vec<OpRec> = ops_raw
            .into_iter()
            .map(|o| OpRec {
                addr: o.addr,
                class: o.class,
                has_output: o.has_output,
            })
            .collect();

        // Out-edge target block INDICES: explicit goto > implied goto > fall-through
        // to the next printed block (index i+1).
        let mut out_indices: Vec<i64> = if let Some(t) = pb.explicit_targets {
            t
        } else if let Some(t) = pb.implied_target {
            vec![t]
        } else {
            // Fall-through to the next block in print order (if any, and if this
            // block's last op is not a RETURN/BRANCHIND terminator).  The next
            // printed block's index is i+1 at B2 (list order == index order).
            let terminates = ops
                .last()
                .map(|o| matches!(o.class, OpClass::Return | OpClass::Branchind))
                .unwrap_or(false);
            if !terminates && i + 1 < n {
                // `pending` was consumed by `into_iter`, but at B2 the next printed
                // block's index is exactly i+1 (verified below by the
                // index==position check).
                vec![(i + 1) as i64]
            } else {
                Vec::new()
            }
        };
        out_indices.sort_unstable();
        out_indices.dedup();

        blocks.push(BlockRec {
            index: pb.index,
            start: pb.start,
            stop: pb.stop,
            ops,
            out_indices,
        });
    }

    // At B2 the BlockGraph list order equals the block index order (structureReset
    // numbers blocks in list order).  Validate it: position i must carry index i.
    // If not, the snapshot is not a post-`structureReset` B2 capture and the
    // index-keyed edge model would be unsound — fail loudly rather than mis-key.
    for (i, b) in blocks.iter().enumerate() {
        if b.index != i as i64 {
            return Err(ParseError(format!(
                "block at print position {i} has index {} (expected {i}); \
                 not a post-structureReset B2 capture",
                b.index
            )));
        }
    }

    Ok(StructModel { blocks })
}

// ===========================================================================
// The differential
// ===========================================================================

/// The outcome of comparing the Rust model against the C++ model for one
/// function.
#[derive(Debug)]
pub enum DiffResult {
    /// The structural models are equal (op count, per-op address+class+output,
    /// block partition, and edges).
    Pass,
    /// They diverge; the string is the first divergence, human-readable.
    Divergent(String),
}

/// Compare a Rust-extracted [`StructModel`] (`rust`) against the C++ B2 model
/// (`cpp`).  Blocks are matched by POSITION (== block index in print order), never
/// by cover-start.  Reports the FIRST divergence in a deterministic scan order:
///   1. block count,
///   2. per-block (in index order): cover `(start,stop)` as data, then op count,
///   3. per-block, per-op: address, class, output-presence (in print order),
///   4. per-block out-edge target-INDEX set.
pub fn diff(rust: &StructModel, cpp: &StructModel) -> DiffResult {
    // 1. Block count (the partition cardinality — every block on both sides is
    //    represented, so a collapse of duplicate-cover-start blocks cannot hide a
    //    block here).
    if rust.blocks.len() != cpp.blocks.len() {
        return DiffResult::Divergent(format!(
            "block count differs: rust={} cpp={} (rust covers {}, cpp covers {})",
            rust.blocks.len(),
            cpp.blocks.len(),
            fmt_cover_list(&rust.blocks),
            fmt_cover_list(&cpp.blocks),
        ));
    }
    // 2-4. Per block, in index/print order.
    for (idx, (rb, cb)) in rust.blocks.iter().zip(cpp.blocks.iter()).enumerate() {
        if rb.start != cb.start {
            return DiffResult::Divergent(format!(
                "block#{idx}: cover start differs rust=0x{:x} cpp=0x{:x}",
                rb.start, cb.start
            ));
        }
        if rb.stop != cb.stop {
            return DiffResult::Divergent(format!(
                "block#{idx} @0x{:x}: cover stop differs rust=0x{:x} cpp=0x{:x}",
                rb.start, rb.stop, cb.stop
            ));
        }
        if rb.ops.len() != cb.ops.len() {
            return DiffResult::Divergent(format!(
                "block#{idx} @0x{:x}: op count differs rust={} cpp={}",
                rb.start,
                rb.ops.len(),
                cb.ops.len()
            ));
        }
        for (j, (ro, co)) in rb.ops.iter().zip(cb.ops.iter()).enumerate() {
            if ro.addr != co.addr {
                return DiffResult::Divergent(format!(
                    "block#{idx} op#{j}: address differs rust=0x{:x} cpp=0x{:x}",
                    ro.addr, co.addr
                ));
            }
            if ro.class != co.class {
                return DiffResult::Divergent(format!(
                    "block#{idx} op#{j} @0x{:x}: class differs rust={:?} cpp={:?}",
                    ro.addr, ro.class, co.class
                ));
            }
            if ro.has_output != co.has_output {
                return DiffResult::Divergent(format!(
                    "block#{idx} op#{j} @0x{:x}: output-presence differs rust={} cpp={}",
                    ro.addr, ro.has_output, co.has_output
                ));
            }
        }
        if rb.out_indices != cb.out_indices {
            return DiffResult::Divergent(format!(
                "block#{idx} @0x{:x}: out-edge targets differ rust={} cpp={}",
                rb.start,
                fmt_idx_list(&rb.out_indices),
                fmt_idx_list(&cb.out_indices),
            ));
        }
    }
    DiffResult::Pass
}

fn fmt_idx_list(v: &[i64]) -> String {
    let parts: Vec<String> = v.iter().map(|x| x.to_string()).collect();
    format!("[{}]", parts.join(","))
}

/// Render the cover ranges of an ordered block list for a divergence message.
fn fmt_cover_list(blocks: &[BlockRec]) -> String {
    let parts: Vec<String> = blocks
        .iter()
        .map(|b| format!("0x{:x}-0x{:x}", b.start, b.stop))
        .collect();
    format!("[{}]", parts.join(","))
}

// ===========================================================================
// Unit tests — grammar (classify / addr / goto), parse, exclusion, diff
// ===========================================================================

#[cfg(test)]
mod tests;
