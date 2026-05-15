//! x64 SEH `.pdata` / `.xdata` parsers (header MVP).
//!
//! Decodes the on-disk `RUNTIME_FUNCTION` table and `UNWIND_INFO` records.
//! Live PE-loader integration (resolving the exception directory, walking
//! chained unwind info) is deferred — see `pe.rs` `parse_pdata` which already
//! handles a different code path via the `object` crate. These standalone
//! parsers exist for synthetic / fuzzing use and future raw-RVA decode paths.

pub const UNW_FLAG_EHANDLER: u8 = 0x1;
pub const UNW_FLAG_UHANDLER: u8 = 0x2;
pub const UNW_FLAG_CHAININFO: u8 = 0x4;

#[derive(Debug, Clone, Copy)]
pub struct RuntimeFunction {
    pub begin_addr: u32,
    pub end_addr: u32,
    pub unwind_info_addr: u32,
}

#[derive(Debug, Clone)]
pub struct SehInfo {
    pub functions: Vec<SehFunction>,
}

#[derive(Debug, Clone)]
pub struct SehFunction {
    pub begin: u64,
    pub end: u64,
    pub unwind_info: UnwindInfo,
    pub handler: Option<u64>,
}

#[derive(Debug, Clone)]
pub struct UnwindInfo {
    pub version: u8,
    pub flags: u8,
    pub size_of_prolog: u8,
    pub count_of_codes: u8,
    pub frame_register: u8,
    pub frame_offset: u8,
    pub unwind_codes_raw: Vec<u16>,
    pub handler_rva: Option<u32>,
}

fn read_u32(buf: &[u8], off: usize) -> Option<u32> {
    let slice = buf.get(off..off + 4)?;
    Some(u32::from_le_bytes([slice[0], slice[1], slice[2], slice[3]]))
}

fn read_u16(buf: &[u8], off: usize) -> Option<u16> {
    let slice = buf.get(off..off + 2)?;
    Some(u16::from_le_bytes([slice[0], slice[1]]))
}

pub fn parse_runtime_function_table(buf: &[u8]) -> Vec<RuntimeFunction> {
    let mut out = Vec::with_capacity(buf.len() / 12);
    let mut off = 0;
    while off + 12 <= buf.len() {
        let begin = read_u32(buf, off).unwrap();
        let end = read_u32(buf, off + 4).unwrap();
        let uw = read_u32(buf, off + 8).unwrap();
        if begin == 0 && end == 0 && uw == 0 {
            break;
        }
        out.push(RuntimeFunction {
            begin_addr: begin,
            end_addr: end,
            unwind_info_addr: uw,
        });
        off += 12;
    }
    out
}

pub fn parse_unwind_info(buf: &[u8]) -> Option<UnwindInfo> {
    if buf.len() < 4 {
        return None;
    }
    let byte0 = buf[0];
    let version = byte0 & 0x7;
    let flags = (byte0 >> 3) & 0x1F;
    let size_of_prolog = buf[1];
    let count_of_codes = buf[2];
    let frame_byte = buf[3];
    let frame_register = frame_byte & 0x0F;
    let frame_offset = (frame_byte >> 4) & 0x0F;

    let codes_start = 4usize;
    let codes_end = codes_start.checked_add((count_of_codes as usize).checked_mul(2)?)?;
    if buf.len() < codes_end {
        return None;
    }
    let mut unwind_codes_raw = Vec::with_capacity(count_of_codes as usize);
    for i in 0..count_of_codes as usize {
        unwind_codes_raw.push(read_u16(buf, codes_start + i * 2)?);
    }

    // Each unwind code slot is u16; pad to a u32 boundary if count is odd.
    let padded_codes = if count_of_codes % 2 == 1 {
        count_of_codes as usize + 1
    } else {
        count_of_codes as usize
    };
    let after_codes = codes_start + padded_codes * 2;

    let handler_rva = if flags & (UNW_FLAG_EHANDLER | UNW_FLAG_UHANDLER) != 0 {
        read_u32(buf, after_codes)
    } else {
        None
    };

    Some(UnwindInfo {
        version,
        flags,
        size_of_prolog,
        count_of_codes,
        frame_register,
        frame_offset,
        unwind_codes_raw,
        handler_rva,
    })
}

// ---------------------------------------------------------------------------
// MSVC C++ exception-handling structures
//
// Layout follows the public CRT header `vc/crt/src/eh/i386/ehdata.h`
// (Microsoft Visual C++ runtime). The on-disk encoding is identical for
// x86 and x64 (all pointer-like fields are u32 RVAs), with the single
// exception that `HandlerType.dispFrameOffset` is only present for
// FuncInfo magics 0x19930521 and 0x19930522 — the x86 variant (0x19930520)
// omits it. We track the magic on `FuncInfo` so the caller can size
// `HandlerType` correctly via [`handler_type_size`].
//
// Wiring this into the broader loader (collecting per-function FuncInfo
// blobs out of `.xdata`'s `__CxxFrameHandler*` payloads) is intentionally
// out of scope here — `seh::SehInfo` already surfaces raw handler RVAs,
// and the C++ EH decoder layered on top is a separate pass. These
// structural decoders exist so that pass can be built and unit-tested in
// isolation against synthetic byte fixtures.
// ---------------------------------------------------------------------------

/// Magic number for x86 `_s_FuncInfo` records.
pub const FUNCINFO_MAGIC_X86: u32 = 0x1993_0520;
/// Magic number for x64 / IA64 `_s_FuncInfo` records (with `dispFrameOffset`
/// on `HandlerType`).
pub const FUNCINFO_MAGIC_X64: u32 = 0x1993_0521;
/// Magic number for x64 `_s_FuncInfo` records carrying an extra
/// `pESTypeList` (exception spec) trailer. Layout of the first seven
/// fields is identical to [`FUNCINFO_MAGIC_X64`].
pub const FUNCINFO_MAGIC_X64_ESTYPELIST: u32 = 0x1993_0522;

/// Decoded MSVC `_s_FuncInfo` record.
///
/// Anchors a function's C++ EH metadata: the unwind map drives stack
/// destruction, the try-block map drives `catch` dispatch, and the
/// IP→state map maps return addresses back to unwind states.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct FuncInfo {
    /// `0x19930520` (x86) / `0x19930521` (x64) / `0x19930522` (x64 + ESType).
    pub magic_number: u32,
    /// Total state count — one entry per row of the unwind map.
    pub max_state: i32,
    /// RVA of the unwind map (array of `_s_UnwindMapEntry`).
    pub p_unwind_map: u32,
    /// Number of entries in the try-block map.
    pub n_try_blocks: u32,
    /// RVA of the try-block map (array of [`TryBlockMapEntry`]).
    pub p_try_block_map: u32,
    /// Number of entries in the IP→state map.
    pub n_ip_map_entries: u32,
    /// RVA of the IP→state map (array of `_s_IPtoStateMapEntry`).
    pub p_ip_to_state_map: u32,
}

/// One row of the C++ EH try-block map: which states cover a `try { }`
/// block and how many `catch` clauses follow it.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct TryBlockMapEntry {
    /// Lowest state value covered by the try.
    pub try_low: i32,
    /// Highest state value covered by the try.
    pub try_high: i32,
    /// Highest state value covered by the *catch* (states beyond try_high
    /// belong to the catch handlers themselves).
    pub catch_high: i32,
    /// Number of [`HandlerType`] entries in `p_handler_array`.
    pub n_catches: i32,
    /// RVA of the handler array.
    pub p_handler_array: u32,
}

/// Decoded MSVC `_s_HandlerType` — describes a single `catch` clause.
///
/// `disp_frame_offset` only appears for FuncInfo magics 0x19930521 and
/// 0x19930522 (x64). For x86 records the field is set to `0` by the
/// decoder and the caller should ignore it.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct HandlerType {
    /// Catch-clause attribute flags (HT_IsConst, HT_IsReference, …).
    pub adjectives: u32,
    /// RVA of the `TypeDescriptor` matched by this catch (or `0` for
    /// `catch (...)`).
    pub p_type: u32,
    /// EBP-relative displacement of the catch object on the stack.
    pub disp_catch_obj: i32,
    /// RVA of the handler funclet entry.
    pub disp_of_handler: i32,
    /// x64-only frame offset for the catch object; `0` for x86 records.
    pub disp_frame_offset: i32,
}

/// Decoded MSVC `_s_CatchableType` — describes one type to which a
/// thrown object is assignable.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CatchableType {
    /// Catchable-type flags (e.g. `CT_IsScalar`, `CT_HasVirtualBase`).
    pub properties: u32,
    /// RVA of the `TypeDescriptor` for this catchable type.
    pub p_type: u32,
    /// PMD record (`mdisp`, `pdisp`, `vdisp`) describing the `this`-pointer
    /// adjustment from the thrown object to this catchable subobject.
    pub this_displacement: Pmd,
    /// Size of the type in bytes (for value-copy catches).
    pub size_or_offset: i32,
    /// RVA of a copy constructor for the type, or `0` when none.
    pub copy_function: u32,
}

/// MSVC PMD (pointer-to-member-data) triple used by `_s_CatchableType`
/// to describe a `this`-pointer adjustment from the thrown object to a
/// catchable subobject.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct Pmd {
    /// Member displacement.
    pub mdisp: i32,
    /// vbtable displacement (`-1` if absent).
    pub pdisp: i32,
    /// vbase displacement.
    pub vdisp: i32,
}

/// Decoded MSVC `_s_CatchableTypeArray`.
///
/// The on-disk record is a `u32` count followed by `n_catchable_types`
/// RVAs (each pointing at a [`CatchableType`]). We surface the RVAs raw
/// so the caller can resolve them lazily.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CatchableTypeArray {
    /// Number of `array_of_catchable_types` entries.
    pub n_catchable_types: u32,
    /// RVAs of each `CatchableType` record.
    pub array_of_catchable_types: Vec<u32>,
}

fn read_i32(buf: &[u8], off: usize) -> Option<i32> {
    read_u32(buf, off).map(|v| v as i32)
}

/// Size in bytes of a [`HandlerType`] record for the given `FuncInfo`
/// magic. x86 records are 16 bytes (no `dispFrameOffset`); x64 records
/// (magics 0x19930521 and 0x19930522) are 20 bytes.
pub fn handler_type_size(magic: u32) -> usize {
    match magic {
        FUNCINFO_MAGIC_X86 => 16,
        FUNCINFO_MAGIC_X64 | FUNCINFO_MAGIC_X64_ESTYPELIST => 20,
        // Unknown magic — default to the x64 layout, which is the most
        // common form encountered on modern Windows binaries.
        _ => 20,
    }
}

/// Parse an MSVC `_s_FuncInfo` record starting at `off`.
///
/// Returns `None` when the buffer is too short or the magic number does
/// not match a recognised FuncInfo signature. Recognised magics are
/// `0x19930520`, `0x19930521`, and `0x19930522`.
pub fn parse_funcinfo(data: &[u8], off: usize) -> Option<FuncInfo> {
    // Seven u32 fields = 28 bytes minimum.
    if data.len() < off.checked_add(28)? {
        return None;
    }
    let magic = read_u32(data, off)?;
    if magic != FUNCINFO_MAGIC_X86
        && magic != FUNCINFO_MAGIC_X64
        && magic != FUNCINFO_MAGIC_X64_ESTYPELIST
    {
        return None;
    }
    Some(FuncInfo {
        magic_number: magic,
        max_state: read_i32(data, off + 4)?,
        p_unwind_map: read_u32(data, off + 8)?,
        n_try_blocks: read_u32(data, off + 12)?,
        p_try_block_map: read_u32(data, off + 16)?,
        n_ip_map_entries: read_u32(data, off + 20)?,
        p_ip_to_state_map: read_u32(data, off + 24)?,
    })
}

/// Parse `n` consecutive [`TryBlockMapEntry`] records starting at `off`.
///
/// Each entry is 20 bytes (`5 × u32`). Truncated buffers yield an empty
/// vector; partial reads are skipped rather than silently mis-aligning.
pub fn parse_try_block_map(data: &[u8], off: usize, n: usize) -> Vec<TryBlockMapEntry> {
    const ENTRY_SIZE: usize = 20;
    let mut out = Vec::with_capacity(n);
    for i in 0..n {
        let base = match off.checked_add(i.saturating_mul(ENTRY_SIZE)) {
            Some(b) => b,
            None => break,
        };
        let try_low = match read_i32(data, base) {
            Some(v) => v,
            None => break,
        };
        let try_high = match read_i32(data, base + 4) {
            Some(v) => v,
            None => break,
        };
        let catch_high = match read_i32(data, base + 8) {
            Some(v) => v,
            None => break,
        };
        let n_catches = match read_i32(data, base + 12) {
            Some(v) => v,
            None => break,
        };
        let p_handler_array = match read_u32(data, base + 16) {
            Some(v) => v,
            None => break,
        };
        out.push(TryBlockMapEntry {
            try_low,
            try_high,
            catch_high,
            n_catches,
            p_handler_array,
        });
    }
    out
}

/// Parse a single [`HandlerType`] record at `off`, sized according to
/// `magic` (x86 magics omit `dispFrameOffset`).
///
/// Returns `None` when the buffer is too short for the chosen layout.
pub fn parse_handler_type(data: &[u8], off: usize, magic: u32) -> Option<HandlerType> {
    let size = handler_type_size(magic);
    if data.len() < off.checked_add(size)? {
        return None;
    }
    let adjectives = read_u32(data, off)?;
    let p_type = read_u32(data, off + 4)?;
    let disp_catch_obj = read_i32(data, off + 8)?;
    let disp_of_handler = read_i32(data, off + 12)?;
    let disp_frame_offset = if size == 20 {
        read_i32(data, off + 16)?
    } else {
        0
    };
    Some(HandlerType {
        adjectives,
        p_type,
        disp_catch_obj,
        disp_of_handler,
        disp_frame_offset,
    })
}

/// Parse a [`CatchableTypeArray`] header + its trailing RVA array at
/// `off`. Returns `None` when the buffer is too short for the declared
/// count.
pub fn parse_catchable_type_array(data: &[u8], off: usize) -> Option<CatchableTypeArray> {
    let n = read_u32(data, off)?;
    let n_usize = n as usize;
    let array_end = off.checked_add(4)?.checked_add(n_usize.checked_mul(4)?)?;
    if data.len() < array_end {
        return None;
    }
    let mut array = Vec::with_capacity(n_usize);
    for i in 0..n_usize {
        array.push(read_u32(data, off + 4 + i * 4)?);
    }
    Some(CatchableTypeArray {
        n_catchable_types: n,
        array_of_catchable_types: array,
    })
}

/// Parse a single [`CatchableType`] record at `off`. Returns `None`
/// when the buffer is too short (records are 28 bytes).
pub fn parse_catchable_type(data: &[u8], off: usize) -> Option<CatchableType> {
    if data.len() < off.checked_add(28)? {
        return None;
    }
    Some(CatchableType {
        properties: read_u32(data, off)?,
        p_type: read_u32(data, off + 4)?,
        this_displacement: Pmd {
            mdisp: read_i32(data, off + 8)?,
            pdisp: read_i32(data, off + 12)?,
            vdisp: read_i32(data, off + 16)?,
        },
        size_or_offset: read_i32(data, off + 20)?,
        copy_function: read_u32(data, off + 24)?,
    })
}

// ---------------------------------------------------------------------------
// t203: high-level FuncInfo → catch-handler region builder.
//
// Walks a [`FuncInfo`] record together with its `pTryBlockMap` and per-entry
// `pHandlerArray` to produce a vec of [`CppEhTryRegion`]s — one per try-block
// in the function. Each entry carries the raw [`HandlerType`]s plus the
// already-resolved `TypeDescriptor` name for each catch (or `None` for
// `catch (...)` whose `p_type == 0`).
//
// The RVA-to-offset and type-descriptor resolvers are supplied as closures
// so this layer stays buffer-only (no PE-specific RVA arithmetic). Callers
// wiring this into `BinaryImage` are expected to bind closures that
//   1. convert the RVA to an offset inside the same `data` slice,
//   2. invoke [`crate::msvc_rtti::parse_type_descriptor`] there.
// ---------------------------------------------------------------------------

/// One try-block recovered from a [`FuncInfo`] record.
///
/// Mirrors a [`TryBlockMapEntry`] plus the fully-decoded handler array. The
/// `try_low`/`try_high` fields are MSVC unwind-state values, not insn
/// addresses — translating to address ranges requires walking the
/// IP-to-state map (deferred).
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CppEhTryRegion {
    /// Lowest unwind state covered by the `try { }` body.
    pub try_low: i32,
    /// Highest unwind state covered by the `try { }` body.
    pub try_high: i32,
    /// Highest unwind state covered by any of this try's catch handlers.
    pub catch_high: i32,
    /// One entry per `catch` clause attached to this try, in source order.
    pub catches: Vec<CppEhCatch>,
}

/// One typed (or catch-all) `catch` clause attached to a [`CppEhTryRegion`].
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CppEhCatch {
    /// Raw decoded MSVC handler record.
    pub handler: HandlerType,
    /// Resolved class name from the `TypeDescriptor` at `handler.p_type`.
    /// `None` either when `handler.p_type == 0` (catch-all `catch (...)`)
    /// or when the resolver could not parse a name at that RVA.
    pub type_name: Option<String>,
}

/// Build the full set of [`CppEhTryRegion`]s for a function whose
/// `FuncInfo` record sits at `funcinfo_off` inside `data`.
///
/// `rva_to_offset` maps an RVA (`p_try_block_map`, `p_handler_array`) to
/// an offset inside `data`. `resolve_type_descriptor` maps a
/// `TypeDescriptor` RVA (`HandlerType::p_type`) to a decoded
/// [`crate::msvc_rtti::TypeDescriptor`]. Returning `None` from either
/// closure is tolerated — the affected entry is dropped (or its
/// `type_name` left empty) rather than failing the whole build.
///
/// Returns `None` only when the `FuncInfo` header itself fails to parse.
pub fn build_cpp_eh_regions<R, T>(
    data: &[u8],
    funcinfo_off: usize,
    rva_to_offset: R,
    resolve_type_descriptor: T,
) -> Option<(FuncInfo, Vec<CppEhTryRegion>)>
where
    R: Fn(u32) -> Option<usize>,
    T: Fn(u32) -> Option<crate::msvc_rtti::TypeDescriptor>,
{
    let funcinfo = parse_funcinfo(data, funcinfo_off)?;

    // n_try_blocks == 0 short-circuits to an empty region list — still
    // a valid result (function has no `try` clauses).
    if funcinfo.n_try_blocks == 0 {
        return Some((funcinfo, Vec::new()));
    }

    let try_map_off = match rva_to_offset(funcinfo.p_try_block_map) {
        Some(o) => o,
        None => return Some((funcinfo, Vec::new())),
    };
    let entries = parse_try_block_map(data, try_map_off, funcinfo.n_try_blocks as usize);

    let handler_size = handler_type_size(funcinfo.magic_number);
    let mut regions = Vec::with_capacity(entries.len());
    for entry in entries {
        let mut catches = Vec::with_capacity(entry.n_catches.max(0) as usize);
        if entry.n_catches > 0
            && let Some(handler_array_off) = rva_to_offset(entry.p_handler_array)
        {
            for i in 0..entry.n_catches as usize {
                let off = handler_array_off + i * handler_size;
                let Some(handler) = parse_handler_type(data, off, funcinfo.magic_number) else {
                    break;
                };
                let type_name = if handler.p_type == 0 {
                    None
                } else {
                    resolve_type_descriptor(handler.p_type).map(|td| td.name)
                };
                catches.push(CppEhCatch { handler, type_name });
            }
        }
        regions.push(CppEhTryRegion {
            try_low: entry.try_low,
            try_high: entry.try_high,
            catch_high: entry.catch_high,
            catches,
        });
    }
    Some((funcinfo, regions))
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn parse_runtime_function_table_two_entries() {
        let mut buf = Vec::with_capacity(24);
        buf.extend_from_slice(&0x1000u32.to_le_bytes());
        buf.extend_from_slice(&0x1050u32.to_le_bytes());
        buf.extend_from_slice(&0x4000u32.to_le_bytes());
        buf.extend_from_slice(&0x1060u32.to_le_bytes());
        buf.extend_from_slice(&0x1080u32.to_le_bytes());
        buf.extend_from_slice(&0x4010u32.to_le_bytes());

        let entries = parse_runtime_function_table(&buf);
        assert_eq!(entries.len(), 2);
        assert_eq!(entries[0].begin_addr, 0x1000);
        assert_eq!(entries[0].end_addr, 0x1050);
        assert_eq!(entries[0].unwind_info_addr, 0x4000);
        assert_eq!(entries[1].begin_addr, 0x1060);
        assert_eq!(entries[1].end_addr, 0x1080);
        assert_eq!(entries[1].unwind_info_addr, 0x4010);
    }

    #[test]
    fn parse_unwind_info_basic() {
        // version=1, flags=0, prolog=5, count=0, frameReg=0, frameOff=0.
        let buf = [0x01u8, 0x05, 0x00, 0x00];
        let ui = parse_unwind_info(&buf).unwrap();
        assert_eq!(ui.version, 1);
        assert_eq!(ui.flags, 0);
        assert_eq!(ui.size_of_prolog, 5);
        assert_eq!(ui.count_of_codes, 0);
        assert_eq!(ui.frame_register, 0);
        assert_eq!(ui.frame_offset, 0);
        assert!(ui.unwind_codes_raw.is_empty());
        assert!(ui.handler_rva.is_none());
    }

    #[test]
    fn parse_unwind_info_with_handler() {
        // version=1, flags=EHANDLER(<<3)=0x08, prolog=3, count=0.
        let mut buf = vec![0x01 | (UNW_FLAG_EHANDLER << 3), 0x03, 0x00, 0x00];
        buf.extend_from_slice(&0xABCD_1234u32.to_le_bytes());
        let ui = parse_unwind_info(&buf).unwrap();
        assert_eq!(ui.version, 1);
        assert_eq!(ui.flags, UNW_FLAG_EHANDLER);
        assert_eq!(ui.handler_rva, Some(0xABCD_1234));
    }

    // -----------------------------------------------------------------
    // t175: MSVC C++ exception-handling structure decoders
    // -----------------------------------------------------------------

    /// Helper: pack a `FuncInfo` record (seven u32 fields = 28 bytes).
    fn build_funcinfo(
        magic: u32,
        max_state: i32,
        p_unwind_map: u32,
        n_try_blocks: u32,
        p_try_block_map: u32,
        n_ip_map_entries: u32,
        p_ip_to_state_map: u32,
    ) -> Vec<u8> {
        let mut v = Vec::with_capacity(28);
        v.extend_from_slice(&magic.to_le_bytes());
        v.extend_from_slice(&max_state.to_le_bytes());
        v.extend_from_slice(&p_unwind_map.to_le_bytes());
        v.extend_from_slice(&n_try_blocks.to_le_bytes());
        v.extend_from_slice(&p_try_block_map.to_le_bytes());
        v.extend_from_slice(&n_ip_map_entries.to_le_bytes());
        v.extend_from_slice(&p_ip_to_state_map.to_le_bytes());
        v
    }

    #[test]
    fn parse_funcinfo_magic_19930520() {
        // Pad the start to verify `off` plumbing. x86 FuncInfo:
        //   maxState=4, pUnwindMap=0x10_2000, nTryBlocks=1,
        //   pTryBlockMap=0x10_3000, nIPMapEntries=12,
        //   pIPtoStateMap=0x10_4000.
        let mut data = vec![0xAAu8; 16];
        data.extend(build_funcinfo(
            FUNCINFO_MAGIC_X86,
            4,
            0x0010_2000,
            1,
            0x0010_3000,
            12,
            0x0010_4000,
        ));
        let fi = parse_funcinfo(&data, 16).expect("FuncInfo must parse");
        assert_eq!(fi.magic_number, FUNCINFO_MAGIC_X86);
        assert_eq!(fi.max_state, 4);
        assert_eq!(fi.p_unwind_map, 0x0010_2000);
        assert_eq!(fi.n_try_blocks, 1);
        assert_eq!(fi.p_try_block_map, 0x0010_3000);
        assert_eq!(fi.n_ip_map_entries, 12);
        assert_eq!(fi.p_ip_to_state_map, 0x0010_4000);

        // Negative path: unrecognised magic must yield None.
        let mut bad = build_funcinfo(0xDEAD_BEEF, 0, 0, 0, 0, 0, 0);
        let fi_bad = parse_funcinfo(&bad, 0);
        assert!(fi_bad.is_none(), "non-MSVC magic must not parse");

        // Truncated buffer must yield None even with a valid magic.
        bad.truncate(20);
        bad[..4].copy_from_slice(&FUNCINFO_MAGIC_X64.to_le_bytes());
        assert!(parse_funcinfo(&bad, 0).is_none());
    }

    #[test]
    fn parse_try_block_map_two_blocks() {
        // Two TryBlockMapEntry records back-to-back (20 bytes each).
        //   block 0: tryLow=1, tryHigh=2, catchHigh=3, nCatches=1, pHandlerArray=0xA000
        //   block 1: tryLow=4, tryHigh=5, catchHigh=7, nCatches=2, pHandlerArray=0xA040
        let mut data = vec![0u8; 8]; // leading pad
        for (try_low, try_high, catch_high, n_catches, p_handler_array) in
            [(1i32, 2i32, 3i32, 1i32, 0xA000u32), (4, 5, 7, 2, 0xA040)]
        {
            data.extend_from_slice(&try_low.to_le_bytes());
            data.extend_from_slice(&try_high.to_le_bytes());
            data.extend_from_slice(&catch_high.to_le_bytes());
            data.extend_from_slice(&n_catches.to_le_bytes());
            data.extend_from_slice(&p_handler_array.to_le_bytes());
        }
        let blocks = parse_try_block_map(&data, 8, 2);
        assert_eq!(blocks.len(), 2);
        assert_eq!(blocks[0].try_low, 1);
        assert_eq!(blocks[0].try_high, 2);
        assert_eq!(blocks[0].catch_high, 3);
        assert_eq!(blocks[0].n_catches, 1);
        assert_eq!(blocks[0].p_handler_array, 0xA000);
        assert_eq!(blocks[1].try_low, 4);
        assert_eq!(blocks[1].try_high, 5);
        assert_eq!(blocks[1].catch_high, 7);
        assert_eq!(blocks[1].n_catches, 2);
        assert_eq!(blocks[1].p_handler_array, 0xA040);

        // Asking for one extra block past the end short-circuits without
        // panicking — the function silently stops on truncation.
        let blocks_overrun = parse_try_block_map(&data, 8, 3);
        assert_eq!(blocks_overrun.len(), 2);
    }

    #[test]
    fn parse_handler_type_x86_and_x64_variants() {
        // x86 layout — 16 bytes, no dispFrameOffset.
        let mut x86 = Vec::with_capacity(16);
        x86.extend_from_slice(&0x40u32.to_le_bytes()); // adjectives (HT_IsConst)
        x86.extend_from_slice(&0x0010_5000u32.to_le_bytes()); // pType
        x86.extend_from_slice(&(-0x20i32).to_le_bytes()); // dispCatchObj
        x86.extend_from_slice(&0x0010_6000i32.to_le_bytes()); // dispOfHandler

        let ht_x86 =
            parse_handler_type(&x86, 0, FUNCINFO_MAGIC_X86).expect("x86 HandlerType must parse");
        assert_eq!(ht_x86.adjectives, 0x40);
        assert_eq!(ht_x86.p_type, 0x0010_5000);
        assert_eq!(ht_x86.disp_catch_obj, -0x20);
        assert_eq!(ht_x86.disp_of_handler, 0x0010_6000);
        // x86 magic synthesises a 0 dispFrameOffset.
        assert_eq!(ht_x86.disp_frame_offset, 0);

        // Same record but with an extra dispFrameOffset trailer for x64.
        let mut x64 = x86.clone();
        x64.extend_from_slice(&0x18i32.to_le_bytes());
        let ht_x64 =
            parse_handler_type(&x64, 0, FUNCINFO_MAGIC_X64).expect("x64 HandlerType must parse");
        assert_eq!(ht_x64.adjectives, 0x40);
        assert_eq!(ht_x64.disp_frame_offset, 0x18);

        // Magic 0x19930522 follows the same per-handler layout.
        let ht_x64_v2 = parse_handler_type(&x64, 0, FUNCINFO_MAGIC_X64_ESTYPELIST)
            .expect("x64 v2 HandlerType must parse");
        assert_eq!(ht_x64_v2.disp_frame_offset, 0x18);

        // Truncation — the x86 buffer is one byte short of the x64 size.
        assert!(parse_handler_type(&x86, 0, FUNCINFO_MAGIC_X64).is_none());
    }

    #[test]
    fn parse_catchable_type_array() {
        // Header: nCatchableTypes=3, followed by three RVAs.
        let rvas = [0x0010_7000u32, 0x0010_7100, 0x0010_7200];
        let mut data = vec![0u8; 4]; // pad
        data.extend_from_slice(&3u32.to_le_bytes());
        for r in &rvas {
            data.extend_from_slice(&r.to_le_bytes());
        }
        let cta =
            super::parse_catchable_type_array(&data, 4).expect("CatchableTypeArray must parse");
        assert_eq!(cta.n_catchable_types, 3);
        assert_eq!(cta.array_of_catchable_types, rvas);

        // Truncated buffer: count says 3 but only 1 RVA follows.
        let mut short = vec![0u8; 4];
        short.extend_from_slice(&3u32.to_le_bytes());
        short.extend_from_slice(&0x0010_7000u32.to_le_bytes());
        assert!(super::parse_catchable_type_array(&short, 4).is_none());

        // Smoke-check parse_catchable_type using the first RVA target —
        // build a single CatchableType record (28 bytes) and decode it
        // to prove the per-record parser stays in sync with the array
        // parser's downstream consumers.
        let mut ct_bytes = Vec::with_capacity(28);
        ct_bytes.extend_from_slice(&0x1u32.to_le_bytes()); // properties = CT_IsScalar
        ct_bytes.extend_from_slice(&0x0010_8000u32.to_le_bytes()); // pType
        ct_bytes.extend_from_slice(&4i32.to_le_bytes()); // PMD.mdisp
        ct_bytes.extend_from_slice(&(-1i32).to_le_bytes()); // PMD.pdisp
        ct_bytes.extend_from_slice(&0i32.to_le_bytes()); // PMD.vdisp
        ct_bytes.extend_from_slice(&8i32.to_le_bytes()); // sizeOrOffset
        ct_bytes.extend_from_slice(&0x0010_9000u32.to_le_bytes()); // copyFunction
        let ct = super::parse_catchable_type(&ct_bytes, 0).expect("CatchableType must parse");
        assert_eq!(ct.properties, 1);
        assert_eq!(ct.p_type, 0x0010_8000);
        assert_eq!(ct.this_displacement.mdisp, 4);
        assert_eq!(ct.this_displacement.pdisp, -1);
        assert_eq!(ct.this_displacement.vdisp, 0);
        assert_eq!(ct.size_or_offset, 8);
        assert_eq!(ct.copy_function, 0x0010_9000);
    }
}
