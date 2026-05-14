//! File-format magic-number recovery (t383).
//!
//! Detects the canonical "is this an ELF / PE / Mach-O / …" probe that file
//! parsers emit near the top of their entry points:
//!
//! ```text
//!     u32 magic = LOAD(buf + 0);
//!     if (magic == 0x464C457F) { /* ELF */ }
//! ```
//!
//! Structurally we look for a `LOAD` whose address is a function parameter
//! (a register-space varnode that is live-in to the function — i.e. no
//! prior defining instruction inside the function), followed by an
//! `INT_EQUAL` / `INT_NOTEQUAL` against a constant.  The constant's bytes
//! (interpreted in both little- and big-endian order) are matched against
//! the well-known magic-number table below.
//!
//! Returning a `Vec<MagicCheck>` rather than mutating the SSA keeps this
//! analysis side-effect-free; downstream passes (variable renaming,
//! signature annotation, decompiler comments) can consume the result.

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

/// A single recovered magic-number probe.
///
/// `magic_bytes` are stored in **on-disk order** — i.e. byte 0 is the first
/// byte at file offset 0 — regardless of the host's or target's endianness.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct MagicCheck {
    pub magic_bytes: Vec<u8>,
    pub format_name: &'static str,
}

/// Canonical magic-number table.  Entries are matched **longest-prefix
/// first** so 4-byte Mach-O signatures aren't shadowed by anything shorter.
/// Bytes are in on-disk order.
const MAGIC_TABLE: &[(&[u8], &str)] = &[
    (&[0x7F, 0x45, 0x4C, 0x46], "ELF"),
    (&[0xFE, 0xED, 0xFA, 0xCE], "Mach-O"),
    (&[0xFE, 0xED, 0xFA, 0xCF], "Mach-O 64"),
    (&[0x00, 0x61, 0x73, 0x6D], "Wasm"),
    (&[0x50, 0x4B, 0x03, 0x04], "ZIP"),
    (&[0x89, 0x50, 0x4E, 0x47], "PNG"),
    (&[0x25, 0x50, 0x44, 0x46], "PDF"),
    (&[0xFF, 0xD8, 0xFF], "JPEG"),
    (&[0x4D, 0x5A], "PE/MZ"),
];

/// Walk every `INT_EQUAL`/`INT_NOTEQUAL` in `func` and return the set of
/// magic-number probes whose other operand was loaded at offset 0 of a
/// function-parameter pointer.
///
/// The returned vector is deterministic: instructions are visited in
/// block-key order, then by insn index, so two runs on the same SSA
/// function yield identical output.
pub fn detect_magic_check(func: &SsaFunction) -> Vec<MagicCheck> {
    let mut hits = Vec::new();
    for block in func.function.blocks.values() {
        let insns = &block.insns;
        for (i, insn) in insns.iter().enumerate() {
            if insn.op != IrOp::IntEqual && insn.op != IrOp::IntNotequal {
                continue;
            }
            if insn.inputs.len() != 2 {
                continue;
            }
            let (loaded_vn, const_vn) = match classify_inputs(&insn.inputs[0], &insn.inputs[1]) {
                Some(pair) => pair,
                None => continue,
            };
            // The loaded operand must come from a LOAD whose address is a
            // function-parameter pointer (offset 0).
            let load_idx = match find_def(insns, i, &loaded_vn) {
                Some(idx) => idx,
                None => continue,
            };
            let load = &insns[load_idx];
            if load.op != IrOp::Load {
                continue;
            }
            let addr_vn = match load_address(load) {
                Some(v) => v,
                None => continue,
            };
            if !is_parameter_pointer(insns, load_idx, &addr_vn, block.id, func) {
                continue;
            }
            let const_size = const_vn.size as usize;
            if const_size == 0 || const_size > 8 {
                continue;
            }
            if let Some(name) = match_magic(const_vn.offset, const_size) {
                let on_disk = magic_on_disk_bytes(const_vn.offset, const_size, name);
                hits.push(MagicCheck {
                    magic_bytes: on_disk,
                    format_name: name,
                });
            }
        }
    }
    hits
}

/// Of the two `INT_EQUAL` inputs, return `(non_const, const)` if exactly one
/// side is a constant.
fn classify_inputs(a: &Varnode, b: &Varnode) -> Option<(Varnode, Varnode)> {
    match (a.space, b.space) {
        (SpaceId::Const, SpaceId::Const) => None,
        (_, SpaceId::Const) => Some((*a, *b)),
        (SpaceId::Const, _) => Some((*b, *a)),
        _ => None,
    }
}

/// Extract the address operand from a `LOAD` instruction.  LOAD inputs are
/// either `[space_id_const, addr]` (the Ghidra/p-code convention used
/// elsewhere in this crate) or just `[addr]`.
fn load_address(load: &IrInsn) -> Option<Varnode> {
    match load.inputs.len() {
        1 => Some(load.inputs[0]),
        2.. => {
            if load.inputs[0].space == SpaceId::Const {
                Some(load.inputs[1])
            } else {
                Some(load.inputs[0])
            }
        }
        _ => None,
    }
}

/// Locate the most recent intra-block definition of `target` strictly
/// before `before`.  Cross-block defs (live-ins) return `None`, which is
/// the signal we use to recognise function-parameter pointers.
fn find_def(insns: &[IrInsn], before: usize, target: &Varnode) -> Option<usize> {
    for j in (0..before).rev() {
        if let Some(out) = insns[j].output
            && out == *target
        {
            return Some(j);
        }
    }
    None
}

/// True when `vn` looks like a pointer-typed function parameter loaded at
/// offset 0.  We accept either:
///
///   * a register-space varnode with no prior intra-block definition
///     (i.e. it was live-in to the entry block), or
///   * `param + 0` / `param` reached through an `INT_ADD` with constant 0
///     or a `COPY` of the above.
///
/// "Offset 0" is enforced by requiring any `INT_ADD` we traverse to have a
/// zero constant operand.
fn is_parameter_pointer(
    insns: &[IrInsn],
    before: usize,
    vn: &Varnode,
    block_id: unlace_ir::BlockId,
    func: &SsaFunction,
) -> bool {
    if vn.space == SpaceId::Const {
        return false;
    }
    if let Some(def_idx) = find_def(insns, before, vn) {
        let def = &insns[def_idx];
        match def.op {
            IrOp::Copy if def.inputs.len() == 1 => {
                is_parameter_pointer(insns, def_idx, &def.inputs[0], block_id, func)
            }
            IrOp::IntAdd | IrOp::Ptradd if def.inputs.len() >= 2 => {
                let (a, b) = (def.inputs[0], def.inputs[1]);
                let (base, off) = if b.space == SpaceId::Const {
                    (a, b.offset)
                } else if a.space == SpaceId::Const {
                    (b, a.offset)
                } else {
                    return false;
                };
                if off != 0 {
                    return false;
                }
                is_parameter_pointer(insns, def_idx, &base, block_id, func)
            }
            _ => false,
        }
    } else {
        // No intra-block def → live-in at this block.  For the entry block
        // a register-space live-in is a function parameter by construction.
        // For non-entry blocks we conservatively also accept register
        // live-ins (it could be a parameter that survived through phi
        // copies); we deliberately do NOT accept stack-space varnodes here
        // because those are typically `[rsp + N]` callee-locals.
        let _ = block_id;
        let _ = func;
        matches!(vn.space, SpaceId::Register | SpaceId::Unique)
    }
}

/// Match the constant against the magic table.  We try both byte orders so
/// the pass works regardless of target endianness (the LOAD output sits in
/// a register, and integer comparisons against magic numbers may have
/// either endianness depending on how the source code was written).
///
/// `size` is the constant's varnode size in bytes — i.e. how many low-order
/// bytes of `value` are meaningful.  Magic numbers longer than `size` can't
/// match (the comparison would always be false); shorter magic numbers
/// match only if they exactly equal the comparison width — otherwise we'd
/// accept e.g. a 2-byte MZ probe against an 8-byte qword load, which is
/// not what the source intended.
fn match_magic(value: u64, size: usize) -> Option<&'static str> {
    let le = value.to_le_bytes();
    let be_full = value.to_be_bytes();
    // BE bytes for `size`-wide value live in the *low* `size` bytes of
    // `to_be_bytes()` (after a right-shift of `8-size` bytes); take the
    // tail to get on-disk BE order.
    let be = &be_full[8 - size..];
    let le = &le[..size];

    for (magic, name) in MAGIC_TABLE {
        if magic.len() != size {
            continue;
        }
        if *magic == le || *magic == be {
            return Some(name);
        }
    }
    None
}

/// Reconstruct the on-disk byte order of `value`, chosen so the result
/// equals the canonical table entry for `name`.  Falls back to little-
/// endian if the table lookup somehow fails (shouldn't happen — `name`
/// always comes from `match_magic`).
fn magic_on_disk_bytes(value: u64, size: usize, name: &str) -> Vec<u8> {
    for (magic, n) in MAGIC_TABLE {
        if *n == name {
            return magic.to_vec();
        }
    }
    value.to_le_bytes()[..size].to_vec()
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_single_block_ssa(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    /// Little-endian ELF probe: u32 at [buf+0] compared against 0x464C457F.
    #[test]
    fn test_detect_elf_magic_little_endian() {
        let buf_ptr = Varnode::reg(0, 8); // RDI on x86-64 SysV — function param 0
        let loaded = Varnode::unique(0, 4);
        let cmp = Varnode::unique(16, 1);

        // ELF magic bytes 7F 45 4C 46 → little-endian u32 = 0x464C457F.
        let elf_le: u64 = 0x464C457F;

        let insns = vec![
            IrInsn::with_output(
                IrOp::Load,
                loaded,
                smallvec![Varnode::constant(1, 4), buf_ptr],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::IntEqual,
                cmp,
                smallvec![loaded, Varnode::constant(elf_le, 4)],
                0x1004,
            ),
        ];

        let ssa = make_single_block_ssa(insns);
        let hits = detect_magic_check(&ssa);
        assert_eq!(hits.len(), 1, "expected exactly one magic probe");
        assert_eq!(hits[0].format_name, "ELF");
        assert_eq!(hits[0].magic_bytes, vec![0x7F, 0x45, 0x4C, 0x46]);
    }

    /// Big-endian PNG probe: same value but the source compared the
    /// already-byte-swapped 0x89504E47 — should still be recognised.
    /// Also exercises `INT_NOTEQUAL` (the typical `if (magic != PNG) error`
    /// shape) and a `param + 0` indirection through `INT_ADD`.
    #[test]
    fn test_detect_png_magic_big_endian_with_zero_offset_and_notequal() {
        let buf_ptr = Varnode::reg(0, 8);
        let buf_plus_zero = Varnode::unique(0, 8);
        let loaded = Varnode::unique(8, 4);
        let cmp = Varnode::unique(20, 1);

        // PNG magic bytes 89 50 4E 47 written big-endian = 0x89504E47.
        let png_be: u64 = 0x89504E47;

        let insns = vec![
            // buf_plus_zero = buf_ptr + 0   (compiler-emitted no-op offset)
            IrInsn::with_output(
                IrOp::IntAdd,
                buf_plus_zero,
                smallvec![buf_ptr, Varnode::constant(0, 8)],
                0x1000,
            ),
            // loaded = LOAD(ram, buf_plus_zero)
            IrInsn::with_output(
                IrOp::Load,
                loaded,
                smallvec![Varnode::constant(1, 4), buf_plus_zero],
                0x1004,
            ),
            // cmp = (loaded != 0x89504E47)
            IrInsn::with_output(
                IrOp::IntNotequal,
                cmp,
                smallvec![loaded, Varnode::constant(png_be, 4)],
                0x1008,
            ),
        ];

        let ssa = make_single_block_ssa(insns);
        let hits = detect_magic_check(&ssa);
        assert_eq!(hits.len(), 1);
        assert_eq!(hits[0].format_name, "PNG");
        assert_eq!(hits[0].magic_bytes, vec![0x89, 0x50, 0x4E, 0x47]);
    }

    /// Two-byte MZ (PE) probe: short magics must match without bleeding
    /// into wider loads.  Uses a 2-byte load + 2-byte comparison.
    #[test]
    fn test_detect_pe_mz_two_byte_magic() {
        let buf_ptr = Varnode::reg(0, 8);
        let loaded = Varnode::unique(0, 2);
        let cmp = Varnode::unique(16, 1);

        // "MZ" = 4D 5A → little-endian u16 = 0x5A4D.
        let mz_le: u64 = 0x5A4D;

        let insns = vec![
            IrInsn::with_output(
                IrOp::Load,
                loaded,
                smallvec![Varnode::constant(1, 4), buf_ptr],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::IntEqual,
                cmp,
                smallvec![loaded, Varnode::constant(mz_le, 2)],
                0x1004,
            ),
        ];

        let ssa = make_single_block_ssa(insns);
        let hits = detect_magic_check(&ssa);
        assert_eq!(hits.len(), 1);
        assert_eq!(hits[0].format_name, "PE/MZ");
        assert_eq!(hits[0].magic_bytes, vec![0x4D, 0x5A]);
    }

    /// Negative cases: the comparison constant doesn't match any known
    /// magic, and a load against a *stack-local* (not a param) is rejected
    /// even if the constant happens to coincide with a magic value.
    #[test]
    fn test_rejects_non_magic_constants_and_non_param_loads() {
        // Case 1: load from a parameter but compared against a non-magic.
        let buf_ptr = Varnode::reg(0, 8);
        let loaded_a = Varnode::unique(0, 4);
        let cmp_a = Varnode::unique(16, 1);
        let insns_a = vec![
            IrInsn::with_output(
                IrOp::Load,
                loaded_a,
                smallvec![Varnode::constant(1, 4), buf_ptr],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::IntEqual,
                cmp_a,
                smallvec![loaded_a, Varnode::constant(0xDEADBEEF, 4)],
                0x1004,
            ),
        ];
        let ssa_a = make_single_block_ssa(insns_a);
        assert!(detect_magic_check(&ssa_a).is_empty());

        // Case 2: same comparison but the load is against a *stack slot*,
        // which the heuristic must NOT treat as a parameter pointer.
        let stack_ptr = Varnode::stack(0x10, 8);
        let loaded_b = Varnode::unique(0, 4);
        let cmp_b = Varnode::unique(16, 1);
        let elf_le: u64 = 0x464C457F;
        let insns_b = vec![
            IrInsn::with_output(
                IrOp::Load,
                loaded_b,
                smallvec![Varnode::constant(1, 4), stack_ptr],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::IntEqual,
                cmp_b,
                smallvec![loaded_b, Varnode::constant(elf_le, 4)],
                0x1004,
            ),
        ];
        let ssa_b = make_single_block_ssa(insns_b);
        assert!(
            detect_magic_check(&ssa_b).is_empty(),
            "stack-relative load should not be classified as a parameter pointer"
        );

        // Case 3: param-loaded ELF magic but at a NON-ZERO offset (`buf + 8`)
        // — must be rejected because real magic probes read offset 0.
        let buf_ptr_c = Varnode::reg(0, 8);
        let addr_c = Varnode::unique(0, 8);
        let loaded_c = Varnode::unique(8, 4);
        let cmp_c = Varnode::unique(20, 1);
        let insns_c = vec![
            IrInsn::with_output(
                IrOp::IntAdd,
                addr_c,
                smallvec![buf_ptr_c, Varnode::constant(8, 8)],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::Load,
                loaded_c,
                smallvec![Varnode::constant(1, 4), addr_c],
                0x1004,
            ),
            IrInsn::with_output(
                IrOp::IntEqual,
                cmp_c,
                smallvec![loaded_c, Varnode::constant(elf_le, 4)],
                0x1008,
            ),
        ];
        let ssa_c = make_single_block_ssa(insns_c);
        assert!(
            detect_magic_check(&ssa_c).is_empty(),
            "non-zero offset load should not match magic probe"
        );
    }
}
