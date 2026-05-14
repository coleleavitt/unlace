//! MSVC `__try`/`__except`/`__finally` structured exception handling (SEH)
//! recovery pass.
//!
//! MSVC compiles C-style SEH (`__try { ... } __except(filter) { ... }`) into:
//!
//! 1. A `__C_specific_handler` scope table in .pdata/.xdata with scope records
//! 2. Each scope record has: begin offset, end offset, handler offset, jump target
//! 3. The `__except` filter is a separate function returning
//!    `EXCEPTION_CONTINUE_SEARCH` (0) / `EXCEPTION_EXECUTE_HANDLER` (1)
//! 4. `__finally` blocks are called both on normal exit and on exception
//!    (handler field == 1 indicates `__finally`, otherwise it's a filter address)
//!
//! This pass maps parsed SEH scope records (from
//! [`unlace_loader::seh::SehFunction`]) onto HIR basic blocks, producing
//! [`SehRegion`] annotations that the C printer can render as
//! `__try { ... } __except(filter) { ... }` or `__try { ... } __finally { ... }`
//! instead of raw goto-based control flow.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SehRegion, SsaFunction};
use unlace_ir::BlockId;

use crate::pass::{Pass, PassError};

// ---------------------------------------------------------------------------
// Data model
// ---------------------------------------------------------------------------

/// A single SEH scope record (mirrors the on-disk `SCOPE_RECORD` produced by
/// `__C_specific_handler`).
///
/// ```text
/// struct SCOPE_RECORD {
///     ULONG BeginAddress;   // RVA of __try start
///     ULONG EndAddress;     // RVA of __try end (exclusive)
///     ULONG HandlerAddress; // RVA of filter (__except) or 1 (__finally)
///     ULONG JumpTarget;     // RVA of handler body / __finally funclet
/// };
/// ```
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SehScopeRecord {
    /// RVA of the beginning of the `__try` region.
    pub begin_addr: u64,
    /// RVA of the end of the `__try` region (exclusive).
    pub end_addr: u64,
    /// RVA of the filter function (`__except(expr)` part) or `1` for `__finally`.
    pub handler_addr: u64,
    /// RVA of the handler/finally body (jump target on exception dispatch).
    pub jump_target: u64,
}

/// Whether a scope record represents `__except` or `__finally`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SehHandlerKind {
    /// `__except(filter_expr)` — the filter is a separate function at the
    /// given address that returns `EXCEPTION_EXECUTE_HANDLER` or
    /// `EXCEPTION_CONTINUE_SEARCH`.
    Except { filter_addr: u64 },
    /// `__finally` — handler with special sentinel value `1` meaning the
    /// funclet is invoked both on normal exit and exception.
    Finally,
}

/// SEH scope-table metadata input for a single function.
///
/// Populated by the loader from the PE's exception directory; the pass
/// consumes this to produce [`SehRegion`] annotations.
#[derive(Debug, Clone, Default)]
pub struct SehScopeTable {
    /// The function's RVA range (from `RUNTIME_FUNCTION`).
    pub func_begin: u64,
    pub func_end: u64,
    /// Scope records parsed from the `__C_specific_handler` data area
    /// following the unwind info.
    pub scopes: Vec<SehScopeRecord>,
}

// ---------------------------------------------------------------------------
// Analysis
// ---------------------------------------------------------------------------

/// Classify a scope record's handler field.
///
/// A handler address of `1` is the MSVC sentinel for `__finally`; any other
/// non-zero value is the RVA of the filter expression for `__except`.
pub fn classify_handler(record: &SehScopeRecord) -> SehHandlerKind {
    if record.handler_addr == 1 {
        SehHandlerKind::Finally
    } else {
        SehHandlerKind::Except {
            filter_addr: record.handler_addr,
        }
    }
}

/// Collect the block IDs from `func` whose entry address falls within
/// `[begin, end)`. The function iterates over all blocks and checks the
/// first instruction's address.
fn blocks_in_range(func: &SsaFunction, begin: u64, end: u64) -> Vec<BlockId> {
    let mut result = Vec::new();
    for (&bid, block) in &func.function.blocks {
        if let Some(first_insn) = block.insns.first() {
            let addr = first_insn.addr;
            if addr >= begin && addr < end {
                result.push(bid);
            }
        }
    }
    result.sort();
    result
}

/// Collect blocks whose entry address equals `target` (the handler's jump
/// target). In practice there's one block per handler entry point, but we
/// also capture any fall-through successors that still belong to the
/// handler before the next scope begins.
fn blocks_at_target(func: &SsaFunction, target: u64, scope_table: &SehScopeTable) -> Vec<BlockId> {
    // Find the next scope boundary or function end after `target`.
    let mut upper_bound = scope_table.func_end;
    for scope in &scope_table.scopes {
        if scope.begin_addr > target && scope.begin_addr < upper_bound {
            upper_bound = scope.begin_addr;
        }
        if scope.jump_target > target && scope.jump_target < upper_bound {
            upper_bound = scope.jump_target;
        }
    }
    blocks_in_range(func, target, upper_bound)
}

/// Build [`SehRegion`] annotations for every scope record in `scope_table`.
///
/// Returns a vector of regions (one per scope record). Regions with no
/// matching blocks are still emitted (with empty block vecs) so that the
/// 1:1 correspondence with scope records is preserved.
pub fn build_seh_regions(func: &SsaFunction, scope_table: &SehScopeTable) -> Vec<SehRegion> {
    let mut regions = Vec::with_capacity(scope_table.scopes.len());

    for record in &scope_table.scopes {
        let try_blocks = blocks_in_range(func, record.begin_addr, record.end_addr);
        let kind = classify_handler(record);

        let (filter, handler_blocks, finally_blocks) = match kind {
            SehHandlerKind::Except { filter_addr } => {
                let handler = blocks_at_target(func, record.jump_target, scope_table);
                (Some(filter_addr), handler, Vec::new())
            }
            SehHandlerKind::Finally => {
                let finally = blocks_at_target(func, record.jump_target, scope_table);
                (None, Vec::new(), finally)
            }
        };

        regions.push(SehRegion {
            try_blocks,
            filter,
            handler_blocks,
            finally_blocks,
        });
    }

    regions
}

// ---------------------------------------------------------------------------
// Pass implementation
// ---------------------------------------------------------------------------

/// MSVC SEH recovery pass.
///
/// Consumes externally-provided [`SehScopeTable`] metadata and annotates the
/// function's IR with [`SehRegion`] markers so the C printer can reconstruct
/// `__try`/`__except`/`__finally` blocks.
pub struct MsvcSehPass {
    /// Per-function scope tables keyed by function entry address.
    pub scope_tables: BTreeMap<u64, SehScopeTable>,
}

impl Pass for MsvcSehPass {
    fn name(&self) -> &str {
        "msvc-seh"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let entry_addr = func.function.addr;
        let Some(scope_table) = self.scope_tables.get(&entry_addr) else {
            return Ok(false);
        };
        if scope_table.scopes.is_empty() {
            return Ok(false);
        }

        let regions = build_seh_regions(func, scope_table);
        if regions.is_empty() {
            return Ok(false);
        }

        // Store recovered SEH regions on the SsaFunction for the C printer.
        func.seh_regions = regions;

        Ok(true)
    }
}

// ---------------------------------------------------------------------------
// C output rendering helpers
// ---------------------------------------------------------------------------

/// Render an [`SehRegion`] in MSVC C style. Returns a pair of
/// (opening annotation, closing annotation) suitable for wrapping the
/// try-block contents.
///
/// Example output:
/// ```c
/// __try {
///     // try_blocks ...
/// } __except(filter_0x1234()) {
///     // handler_blocks ...
/// }
/// ```
pub fn render_seh_region(region: &SehRegion) -> String {
    let mut out = String::new();
    out.push_str("__try {\n");
    for bid in &region.try_blocks {
        out.push_str(&format!("    // {bid}\n"));
    }
    out.push('}');

    if let Some(filter_addr) = region.filter {
        out.push_str(&format!(" __except(filter_{filter_addr:#x}()) {{\n"));
        for bid in &region.handler_blocks {
            out.push_str(&format!("    // {bid}\n"));
        }
        out.push('}');
    }

    if !region.finally_blocks.is_empty() {
        out.push_str(" __finally {\n");
        for bid in &region.finally_blocks {
            out.push_str(&format!("    // {bid}\n"));
        }
        out.push('}');
    }

    out
}

// ---------------------------------------------------------------------------
// Scope table parser (from raw bytes following the handler RVA in .xdata)
// ---------------------------------------------------------------------------

/// Parse `__C_specific_handler` scope records from raw bytes.
///
/// The on-disk layout after the handler-data RVA in .xdata is:
/// ```text
/// u32 count;
/// SCOPE_RECORD records[count]; // each 16 bytes
/// ```
///
/// `base_rva` is the image base used to convert RVAs to absolute VAs
/// when the caller wants VA-space addresses in the output. Pass `0` if
/// the records should stay as raw RVAs.
pub fn parse_scope_table(data: &[u8], base_rva: u64) -> Option<Vec<SehScopeRecord>> {
    if data.len() < 4 {
        return None;
    }
    let count = u32::from_le_bytes([data[0], data[1], data[2], data[3]]) as usize;
    let expected_len = 4 + count * 16;
    if data.len() < expected_len {
        return None;
    }

    let mut records = Vec::with_capacity(count);
    for i in 0..count {
        let off = 4 + i * 16;
        let begin = read_u32_at(data, off) as u64 + base_rva;
        let end = read_u32_at(data, off + 4) as u64 + base_rva;
        let handler = read_u32_at(data, off + 8) as u64;
        // Handler == 1 is the __finally sentinel; don't add base_rva to it.
        let handler_va = if handler == 1 { 1 } else { handler + base_rva };
        let jump = read_u32_at(data, off + 12) as u64 + base_rva;
        records.push(SehScopeRecord {
            begin_addr: begin,
            end_addr: end,
            handler_addr: handler_va,
            jump_target: jump,
        });
    }
    Some(records)
}

fn read_u32_at(buf: &[u8], off: usize) -> u32 {
    u32::from_le_bytes([buf[off], buf[off + 1], buf[off + 2], buf[off + 3]])
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn, IrOp, Varnode};

    /// Helper to build a minimal function with blocks at given addresses.
    fn make_func_with_blocks(addrs: &[(u32, u64)]) -> SsaFunction {
        let entry = BlockId(addrs[0].0);
        let mut func = Function::new("test_seh", entry, addrs[0].1);
        for &(id, addr) in addrs {
            let mut bb = BasicBlock::new(BlockId(id));
            bb.insns.push(IrInsn::without_output(
                IrOp::Return,
                smallvec![Varnode::constant(0, 8)],
                addr,
            ));
            func.insert_block(bb);
        }
        build_ssa(func)
    }

    #[test]
    fn classify_except_vs_finally() {
        let except_record = SehScopeRecord {
            begin_addr: 0x1000,
            end_addr: 0x1040,
            handler_addr: 0x2000,
            jump_target: 0x3000,
        };
        assert_eq!(
            classify_handler(&except_record),
            SehHandlerKind::Except {
                filter_addr: 0x2000
            }
        );

        let finally_record = SehScopeRecord {
            begin_addr: 0x1000,
            end_addr: 0x1040,
            handler_addr: 1,
            jump_target: 0x3000,
        };
        assert_eq!(classify_handler(&finally_record), SehHandlerKind::Finally);
    }

    #[test]
    fn build_regions_single_except() {
        // Function with blocks at: 0x1000 (try), 0x1020 (try), 0x2000 (handler)
        let ssa = make_func_with_blocks(&[(0, 0x1000), (1, 0x1020), (2, 0x2000)]);

        let scope_table = SehScopeTable {
            func_begin: 0x1000,
            func_end: 0x3000,
            scopes: vec![SehScopeRecord {
                begin_addr: 0x1000,
                end_addr: 0x1040,
                handler_addr: 0x5000, // filter addr
                jump_target: 0x2000,  // handler body
            }],
        };

        let regions = build_seh_regions(&ssa, &scope_table);
        assert_eq!(regions.len(), 1);

        let r = &regions[0];
        assert_eq!(r.filter, Some(0x5000));
        assert!(r.try_blocks.contains(&BlockId(0)));
        assert!(r.try_blocks.contains(&BlockId(1)));
        assert!(r.handler_blocks.contains(&BlockId(2)));
        assert!(r.finally_blocks.is_empty());
    }

    #[test]
    fn build_regions_single_finally() {
        let ssa = make_func_with_blocks(&[(0, 0x1000), (1, 0x1020), (2, 0x2000)]);

        let scope_table = SehScopeTable {
            func_begin: 0x1000,
            func_end: 0x3000,
            scopes: vec![SehScopeRecord {
                begin_addr: 0x1000,
                end_addr: 0x1040,
                handler_addr: 1,     // __finally sentinel
                jump_target: 0x2000, // finally body
            }],
        };

        let regions = build_seh_regions(&ssa, &scope_table);
        assert_eq!(regions.len(), 1);

        let r = &regions[0];
        assert_eq!(r.filter, None);
        assert!(r.try_blocks.contains(&BlockId(0)));
        assert!(r.try_blocks.contains(&BlockId(1)));
        assert!(r.handler_blocks.is_empty());
        assert!(r.finally_blocks.contains(&BlockId(2)));
    }

    #[test]
    fn parse_scope_table_basic() {
        // 2 scope records
        let mut data = Vec::new();
        data.extend_from_slice(&2u32.to_le_bytes()); // count

        // Record 0: __except
        data.extend_from_slice(&0x100u32.to_le_bytes()); // begin
        data.extend_from_slice(&0x140u32.to_le_bytes()); // end
        data.extend_from_slice(&0x500u32.to_le_bytes()); // handler (filter)
        data.extend_from_slice(&0x200u32.to_le_bytes()); // jump target

        // Record 1: __finally
        data.extend_from_slice(&0x300u32.to_le_bytes()); // begin
        data.extend_from_slice(&0x340u32.to_le_bytes()); // end
        data.extend_from_slice(&1u32.to_le_bytes()); // handler = 1 (__finally)
        data.extend_from_slice(&0x400u32.to_le_bytes()); // jump target

        let records = parse_scope_table(&data, 0x1_0000).unwrap();
        assert_eq!(records.len(), 2);

        // Record 0: __except with base_rva applied
        assert_eq!(records[0].begin_addr, 0x1_0100);
        assert_eq!(records[0].end_addr, 0x1_0140);
        assert_eq!(records[0].handler_addr, 0x1_0500); // filter addr + base
        assert_eq!(records[0].jump_target, 0x1_0200);

        // Record 1: __finally — handler stays as 1 (sentinel)
        assert_eq!(records[1].begin_addr, 0x1_0300);
        assert_eq!(records[1].end_addr, 0x1_0340);
        assert_eq!(records[1].handler_addr, 1);
        assert_eq!(records[1].jump_target, 0x1_0400);
    }

    #[test]
    fn parse_scope_table_truncated_returns_none() {
        // Count says 3, but only provide data for 1 record.
        let mut data = Vec::new();
        data.extend_from_slice(&3u32.to_le_bytes());
        data.extend_from_slice(&[0u8; 16]); // only 1 record
        assert!(parse_scope_table(&data, 0).is_none());
    }

    #[test]
    fn render_except_region() {
        let region = SehRegion {
            try_blocks: vec![BlockId(0), BlockId(1)],
            filter: Some(0x5000),
            handler_blocks: vec![BlockId(2)],
            finally_blocks: Vec::new(),
        };
        let output = render_seh_region(&region);
        assert!(output.contains("__try"));
        assert!(output.contains("__except(filter_0x5000())"));
        assert!(output.contains("BB_0"));
        assert!(output.contains("BB_2"));
    }

    #[test]
    fn render_finally_region() {
        let region = SehRegion {
            try_blocks: vec![BlockId(0)],
            filter: None,
            handler_blocks: Vec::new(),
            finally_blocks: vec![BlockId(3)],
        };
        let output = render_seh_region(&region);
        assert!(output.contains("__try"));
        assert!(output.contains("__finally"));
        assert!(output.contains("BB_3"));
        assert!(!output.contains("__except"));
    }

    #[test]
    fn pass_returns_false_when_no_scope_table() {
        let mut ssa = make_func_with_blocks(&[(0, 0x1000)]);
        let pass = MsvcSehPass {
            scope_tables: BTreeMap::new(),
        };
        let changed = pass.run(&mut ssa).unwrap();
        assert!(!changed);
    }

    #[test]
    fn pass_annotates_when_scope_table_present() {
        let mut ssa = make_func_with_blocks(&[(0, 0x1000), (1, 0x2000)]);
        let mut scope_tables = BTreeMap::new();
        scope_tables.insert(
            0x1000,
            SehScopeTable {
                func_begin: 0x1000,
                func_end: 0x3000,
                scopes: vec![SehScopeRecord {
                    begin_addr: 0x1000,
                    end_addr: 0x1040,
                    handler_addr: 0x5000,
                    jump_target: 0x2000,
                }],
            },
        );
        let pass = MsvcSehPass { scope_tables };
        let changed = pass.run(&mut ssa).unwrap();
        assert!(changed);
        assert!(!ssa.seh_regions.is_empty());
    }
}
