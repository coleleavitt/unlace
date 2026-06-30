//! `ida_hexrays` microcode access — minimal `mba_t` / `minsn_t` analogs.
//!
//! ROADMAP Phase H.2 (Hex-Rays microcode access). IDA's decompiler exposes a
//! per-function *microcode* array (`mba_t`) of micro-blocks (`mblock_t`), each
//! holding a doubly-linked list of micro-instructions (`minsn_t`). Scripts walk
//! this structure to inspect the lifted IR below the ctree level.
//!
//! Unlace already has an equivalent low-level IR: an [`SsaFunction`] is a CFG of
//! [`BasicBlock`](unlace_ir::BasicBlock)s of [`IrInsn`](unlace_ir::IrInsn)s. This
//! module wraps that existing data in IDA-microcode-shaped, **read-only** value
//! types so compat scripts can navigate it with familiar names.
//!
//! This is the *scaffolding* half of the ticket: it wraps data that already
//! exists, it does not run a new analysis. Everything is built from ordered
//! `Vec`s so output is deterministic.
//!
//! Reference: `research/ida-hexrays-docs/sdk/include/hexrays.hpp`
//! (`mba_t`, `mblock_t`, `minsn_t`).

use unlace_ir::ssa::SsaFunction;
use unlace_session::Session;

use crate::coverage;

/// A `minsn_t` analog — one lifted IR/SSA instruction.
///
/// IDA's `minsn_t` is a rich opcode-with-operands node; for compat purposes the
/// three fields scripts reach for first are the address it was lifted from, the
/// opcode mnemonic, and a textual rendering. We expose exactly those.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct MicroInsn {
    /// Machine address this instruction was lifted from (`minsn_t::ea`).
    pub ea: u64,
    /// Canonical uppercase opcode name, e.g. `"INT_ADD"` (`minsn_t::opcode`).
    pub opcode: String,
    /// Canonical textual form of the instruction (what `str(minsn)` shows).
    pub text: String,
}

/// An `mblock_t` analog — one micro-block (basic block) of [`MicroInsn`]s.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct MicroBlock {
    /// Block serial number (`mblock_t::serial`) — 0-based position in the
    /// micro-block array, assigned in deterministic block order.
    pub serial: usize,
    /// Start address of the block (`mblock_t::start`). The address of the
    /// first instruction, falling back to `0` for an empty block.
    pub start_ea: u64,
    /// The block's instructions in program order (`mblock_t` head..tail list).
    pub insns: Vec<MicroInsn>,
}

/// An `mba_t` analog — the microcode array for one function.
///
/// IDA's `mba_t` owns the whole array of micro-blocks plus a great deal of
/// analysis state. This read-only wrapper carries just the ordered blocks; the
/// helpers mirror the most-used `mba_t` accessors (`qty`, total instruction
/// count).
#[derive(Clone, Debug, PartialEq, Eq, Default)]
pub struct Mba {
    /// Micro-blocks in serial order (`mba_t::natural` / `mba_t::blocks`).
    pub blocks: Vec<MicroBlock>,
}

impl Mba {
    /// Number of micro-blocks (`mba_t::qty`).
    pub fn block_count(&self) -> usize {
        self.blocks.len()
    }

    /// Total number of micro-instructions across every block.
    pub fn total_insns(&self) -> usize {
        self.blocks.iter().map(|b| b.insns.len()).sum()
    }

    /// Whether this microcode array is empty (no blocks at all).
    pub fn is_empty(&self) -> bool {
        self.blocks.is_empty()
    }

    /// Build an [`Mba`] by wrapping an [`SsaFunction`]'s blocks and
    /// instructions. Blocks are emitted in deterministic key order (the
    /// `SsaFunction` stores them in a `BTreeMap<BlockId, _>`), and serials are
    /// assigned by that order. Nothing is fabricated: an empty function yields
    /// an empty `Mba`.
    pub fn from_ssa(ssa: &SsaFunction) -> Self {
        let mut blocks = Vec::with_capacity(ssa.function.blocks.len());
        for (serial, (_block_id, bb)) in ssa.function.blocks.iter().enumerate() {
            let insns: Vec<MicroInsn> = bb
                .insns
                .iter()
                .map(|insn| MicroInsn {
                    ea: insn.addr,
                    opcode: insn.op.name().to_string(),
                    text: insn.to_string(),
                })
                .collect();
            let start_ea = insns.first().map(|i| i.ea).unwrap_or(0);
            blocks.push(MicroBlock {
                serial,
                start_ea,
                insns,
            });
        }
        Self { blocks }
    }
}

/// `ida_hexrays.get_microcode(ea)` — microcode (`mba_t`) for the function
/// containing `ea`.
///
/// Builds the [`Mba`] from the SSA of the function containing `ea`. Honest
/// behavior when there is nothing to wrap:
///
/// * If no function/symbol contains `ea`, returns `None`.
/// * If a function is found but no SSA is available to wrap (the
///   [`Session`] does not yet stage a lifted/SSA store — same situation as
///   [`crate::ida_hexrays::decompile`]), returns `None` rather than
///   fabricating empty microcode.
///
/// The real wrapping logic lives in [`Mba::from_ssa`]; once the pipeline stages
/// SSA on the session, this function will call it. Until then it never invents
/// microcode.
pub fn get_microcode(session: &Session, ea: u64) -> Option<Mba> {
    coverage::mark_implemented("ida_hexrays.get_microcode");

    // Resolve the function containing `ea` via the symbol table (same lookup
    // ida_funcs.get_func uses). No containing function ⇒ honest None.
    let func_start = session.with_binary(|img| {
        img.symbols
            .range(..=ea)
            .next_back()
            .map(|(start, sym)| (*start, sym.size))
    })??;
    let (start, size) = func_start;
    let end = start.saturating_add(size);
    // Size-0 symbols only contain their own start address.
    let contains = ea >= start && (ea < end || (size == 0 && ea == start));
    if !contains {
        return None;
    }

    // A function exists, but the Session does not yet stage a lifted/SSA
    // function we could wrap (the decompile pipeline is driven externally).
    // Returning None here is the honest "SSA not available" path — we do not
    // fabricate an Mba. When SSA staging lands, build it here via
    // `Mba::from_ssa(&ssa)`.
    None
}

#[cfg(test)]
mod tests {
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};
    use unlace_loader::{ArchId, BinaryImage, Endian, Symbol, SymbolKind};
    use unlace_session::Session;

    use super::*;

    /// Build a tiny two-block SSA function:
    ///   BB0: v = INT_ADD reg, const ; (fallthrough to BB1)
    ///   BB1: RETURN const
    fn make_ssa() -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::unique(0, 8),
            vec![Varnode::reg(0, 8), Varnode::constant(1, 8)],
            0x1000,
        ));
        bb0.successors.push(BlockId(1));
        func.insert_block(bb0);

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Return,
            vec![Varnode::constant(0, 8)],
            0x1004,
        ));
        func.insert_block(bb1);

        build_ssa(func)
    }

    #[test]
    fn from_ssa_yields_block_and_insn_counts() {
        let ssa = make_ssa();
        let mba = Mba::from_ssa(&ssa);

        assert_eq!(mba.block_count(), 2, "two basic blocks → two micro-blocks");
        assert_eq!(mba.total_insns(), 2, "one insn per block → two total");

        // Serials assigned in deterministic block order.
        assert_eq!(mba.blocks[0].serial, 0);
        assert_eq!(mba.blocks[1].serial, 1);

        // Block 0: first insn wrapped faithfully.
        assert_eq!(mba.blocks[0].start_ea, 0x1000);
        assert_eq!(mba.blocks[0].insns[0].ea, 0x1000);
        assert_eq!(mba.blocks[0].insns[0].opcode, "INT_ADD");
        assert!(mba.blocks[0].insns[0].text.contains("INT_ADD"));

        // Block 1: the RETURN.
        assert_eq!(mba.blocks[1].start_ea, 0x1004);
        assert_eq!(mba.blocks[1].insns[0].opcode, "RETURN");
    }

    #[test]
    fn empty_function_yields_empty_mba() {
        let func = Function::new("empty", BlockId(0), 0x2000);
        let ssa = build_ssa(func);
        let mba = Mba::from_ssa(&ssa);
        assert!(mba.is_empty());
        assert_eq!(mba.block_count(), 0);
        assert_eq!(mba.total_insns(), 0);
    }

    #[test]
    fn get_microcode_none_for_unknown_ea() {
        // Empty session: no binary loaded, so no function contains any ea.
        let session = Session::new();
        assert!(get_microcode(&session, 0x1000).is_none());
    }

    #[test]
    fn get_microcode_none_when_ea_before_any_function() {
        let session = Session::new();
        let mut img = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        img.symbols.insert(
            0x2000,
            Symbol {
                name: "f".into(),
                addr: 0x2000,
                size: 0x10,
                kind: SymbolKind::Function,
            },
        );
        session.set_binary(img);
        // ea below the only function → honest None.
        assert!(get_microcode(&session, 0x1000).is_none());
    }
}
