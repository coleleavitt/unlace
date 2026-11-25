//! (unlace) `regcarry` — carry a register's constant to the instructions that
//! fall after it, so an address a fixed-width ISA builds in two instructions is
//! a reference.
//!
//! # The gap
//!
//! [`super::xrefs`] reads a reference out of one instruction's p-code. That is
//! the whole answer where one instruction can hold a whole address — x86-64's
//! `lea rdi,[rip+0x36a]` lifts to `RDI = COPY 0x13c9:8` — and no answer where
//! it cannot:
//!
//! ```text
//! 0x100000418  adrp x0, 0x100000000    ; x0 = the page
//! 0x10000041c  add  x0, x0, #0x488     ; x0 = 0x100000488, "AUDIT_STATIC_LABEL"
//!
//! 0x111a2      lui  a1, 0x12           ; a1 = 0x12000
//! 0x111a6      lw   a1, 0x1d0(a1)      ; reads 0x121d0, audit_global
//! ```
//!
//! Neither instruction names the datum: the first holds a page (or the high
//! twenty bits), the second a register plus a twelve-bit offset. AArch64
//! `adrp`, RISC-V `lui`/`auipc`, MIPS `lui`, PowerPC `lis` and ARM `add rX,pc`
//! all spell an address that way, so every string, global and function pointer
//! a program formed with them was referenced by nothing.
//!
//! # The rule
//!
//! A register an instruction leaves holding a constant that could be an address
//! or its high part — the `checkOperands` floor: at least 4096 and not a byte
//! mask — or a value relative to the PC of any size, is carried to the
//! instruction's fall-through, and each instruction that receives it evaluates
//! its own p-code with the carried values seeded. A carried value lives for at
//! most [`MAX_HOPS`] instructions, is dropped when its register is written with
//! anything the evaluation cannot follow, and survives a call only in a register
//! the calling convention preserves and the call instruction itself did not
//! write (a link register). Three shapes are read, as [`super::picbase`]
//! reads them:
//!
//!  * the address a `LOAD` reads, a [`XrefKind::Read`];
//!  * the address a `STORE` writes, a [`XrefKind::Write`];
//!  * an address an `INT_ADD`/`INT_SUB` composes into a whole register —
//!    `add x0,x0,#0x488` — a [`XrefKind::Data`]: forming an address is not
//!    reading it;
//!  * the slot a `CALLIND` takes its destination from, a [`XrefKind::Call`].
//!    A pointer-width load from a reference leaves its register holding the
//!    word at that address, so `adrp x16,_malloc@GOTPAGE; ldr x16,[x16,..];
//!    blr x16` and `mov rax,[rip+slot]; call rax` call through the slot, as
//!    x86's `call [rip+slot]` does in one instruction (GH #1376). The load
//!    stays the read it is. The word itself is unknown: nothing composes it
//!    into an address, and only a copy of it is still the slot's word.
//!
//! Only a value a carried register contributed to is reported; a single
//! instruction's own constants are [`super::xrefs`]' to report. An AArch64
//! `adrp` page is one of those, and names whatever datum the page starts with:
//! when an instruction the carry holds across completes it into another address,
//! the page was a step, and [`Tracker::superseded`] withdraws the scan's row,
//! unless the run also uses the page itself — an access at it, or the `add #0`
//! that is the `:lo12:` of a page-aligned symbol.
//! The `Data` shape is narrower than the other two because nothing dereferences
//! the value to vouch for it, and the same pair builds integers:
//!
//!  * a copy of a carried value (`mv a1,a0`, which RISC-V spells `addi a1,a0,0`)
//!    is the reference its source already was;
//!  * bitwise composition (`movk`, `ori`, `movt`) and an add narrower than the
//!    register it lands in (RV64's `addiw`, a `w` register) are how a program
//!    builds a number;
//!  * a constant subtracted from a carried address biases it (Swift's string
//!    object is its literal less 0x20, `sub x8,x8,#0x20`): the address it came
//!    from stays the reference;
//!  * a value only formed to form another — the middle `add` of an A32 PLT entry,
//!    whose register the very next instruction consumes as a base and overwrites
//!    — is a step, not an address;
//!  * an access that writes its own address back (`ldr pc,[ip,#0x2f0]!`, `lwzu`)
//!    is one reference, the access;
//!  * a call that composes its own fall-through leaves a return address, but
//!    any other instruction that composes the address after it (`la a0,1f`
//!    ending just before `1:`) forms it, as [`super::xrefs`] reads `adr x0,.+4`.
//!
//! The floor tells a number from an address among immediates, so a value
//! computed from the PC is exempt from it everywhere (GH #1364): in a zero-based
//! image `adrp x0,0x0; add x0,x0,#0x378` forms `0x378`. A PC-relative value is
//! one [`super::pcform`] recomputed from the instruction's encoding
//! (`adrp`'s page 0), or the instruction's own address as the operand of an add
//! (`auipc`'s `(imm << 12) + inst_start`), plus or minus a value that is not
//! one. A difference of two (`sub eax,r13d` after two `lea [rip]`) is a
//! distance, and a mask, a shift or a truncation below 32 bits of one is a
//! number.
//!
//! An ELF `ET_DYN` image is relocated as a whole, so an absolute immediate in it
//! is a number, never an address: `lui s2,0x3; addi s2,s2,-5` in a RISC-V shared
//! object is 12283. There a constant starts a carry only when it was computed
//! from the instruction's own address (`auipc`'s `inst_start + imm`, A32's
//! `pc` read as `inst_start + 8`). x86-64 and AArch64 are exempt: SLEIGH folds
//! their PC-relative operands (`lea rip`, `adrp`) into a plain constant, so the
//! PC is not visible, and neither ISA builds an integer from an add of two
//! immediates.
//!
//! # Where a carried value holds
//!
//! Only along a run that nothing else enters. The walk is breadth-first and
//! decodes an instruction before it has seen every edge into it, so a value is
//! carried on the strength of the edge it arrived by, and each reference it
//! produces records the instructions it travelled through. Once the whole walk
//! has drained, a reference is filed only if none of those instructions is a
//! branch target, a switch case or a function entry — a join, where another
//! path may hand the register a different value. Nothing is carried along a
//! branch edge, and an instruction whose own p-code branches (ARM predication,
//! x86 `rep`) passes on no register it writes. Past a p-code-relative label a
//! value may come from either side of it (`cinc x0,x0,eq` leaves `x0` or
//! `x0 + 1`), so nothing after one is filed.

use std::collections::{BTreeSet, HashMap, HashSet};
use std::rc::Rc;

use smallvec::SmallVec;
use unlace_base::space::{AddrSpace, spacetype};
use unlace_decomp::fasthash::FxBuildHasher;
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::VarnodeData;

use super::pcform::Formed;
use super::poolref::PoolImage;
use super::xrefs::{FullOp, XrefKind, in_range, looks_like_address};

/// How many instructions a carried value may reach past the one that formed
/// it. Compilers schedule the two halves of a pair a few instructions apart
/// (and across a call when the register is callee-saved); every hop is one
/// more instruction over which the register is believed.
const MAX_HOPS: usize = 8;

/// How many registers one instruction may carry on.
const MAX_TRACKED: usize = 8;

/// How far past an instruction's own address a constant may lie and still be
/// its materialized PC: A32 reads `pc` as `inst_start + 8`, Thumb as `+ 4`.
const PC_WINDOW: u64 = 16;

/// The narrowest truncation of a PC-relative value that is still an address:
/// a 32-bit register or pointer. The low byte or half of one is a number.
const ADDR_BYTES: u32 = 4;

/// One register the walk carries.
#[derive(Debug, Clone, Copy)]
struct Held {
    off: u64,
    size: u32,
    v: u64,
    /// How many instructions it has reached since it was formed.
    age: u8,
    pc: bool,
    addr: bool,
    /// The [`Found`] `Data` row that formed it, if one did.
    formed: Option<usize>,
    loaded: bool,
    /// The low half a `movw`/`movz` wrote ([`HalfPairs`]): below the floor, kept
    /// only for the `movt`/`movk` that completes it.
    half: bool,
}

/// What one instruction hands its fall-through: the registers, and the
/// instructions the oldest of them has reached so far, most recent last.
#[derive(Debug, Clone, Default)]
struct Carry {
    held: SmallVec<[Held; MAX_TRACKED]>,
    trail: Trail,
}

/// The instructions a carried value has reached.
type Trail = SmallVec<[u64; MAX_HOPS]>;

/// The fixed facts the evaluation reads.
pub(super) struct Machine<'a> {
    reg: Rc<AddrSpace>,
    data: Option<Rc<AddrSpace>>,
    data_index: Option<u64>,
    big_endian: bool,
    /// An `ET_DYN` image on an ISA whose PC-relative operands keep the PC
    /// visible: only a PC-derived constant may start a carry.
    pc_only: bool,
    preserved: &'a [(u64, u64)],
    mapped: &'a [(u64, u64)],
    pool: Option<&'a PoolImage<'a>>,
    /// The width of a pointer, the only load whose result can be a callee.
    ptr: u32,
    /// AArch64's code, whose `adrp` forms a page the instruction completing
    /// it supersedes; ARM's too when [`Machine::halves`] reads its `movw`.
    code: Option<PoolImage<'a>>,
    /// (unlace `movwpairs`) How a `movw`/`movt` or `movz`/`movk` pair is read.
    halves: HalfPairs,
    /// The image is AArch64 (its `adrp`, its `movz`/`movk`).
    a64: bool,
}

/// (unlace `movwpairs`) What a register pair that builds a 32-bit (or wider) value in
/// 16-bit halves contributes: `movw r0,#lo; movt r0,#hi` (A32/T32) or `movz
/// x0,#lo; movk x0,#hi,lsl #16` (AArch64). The low half is usually below the
/// `checkOperands` floor, so it starts no carry on its own and the pair named
/// nothing.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub(super) enum HalfPairs {
    /// The low half starts no carry (the pre-option behaviour).
    #[default]
    Off,
    /// The completed value is carried: a load or store through it is a read or
    /// a write of the address it builds.
    Access,
    /// As `Access`, and the completed value is also a reference where it lands
    /// in a mapped section (IDA's "valid addresses only").
    On,
}

impl<'a> Machine<'a> {
    pub(super) fn new(
        file: &object::File<'a>,
        reg: Option<&Rc<AddrSpace>>,
        data_space: Option<&Rc<AddrSpace>>,
        preserved: &'a [(u64, u64)],
        mapped: &'a [(u64, u64)],
        pool: Option<&'a PoolImage<'a>>,
        halves: HalfPairs,
    ) -> Option<Self> {
        use object::Object;
        let reg = Rc::clone(reg?);
        if mapped.is_empty() {
            return None;
        }
        let pc_only = file.format() == object::BinaryFormat::Elf
            && file.kind() == object::ObjectKind::Dynamic
            && !matches!(
                file.architecture(),
                object::Architecture::X86_64 | object::Architecture::Aarch64
            );
        let big_endian = reg.is_big_endian();
        Some(Machine {
            big_endian,
            reg,
            data: data_space.cloned(),
            data_index: data_space.and_then(|d| u64::try_from(d.get_index()).ok()),
            pc_only,
            preserved,
            mapped,
            pool,
            ptr: if file.is_64() { 8 } else { 4 },
            code: code(file, halves != HalfPairs::Off),
            halves: if big_endian { HalfPairs::Off } else { halves },
            a64: matches!(
                file.architecture(),
                object::Architecture::Aarch64 | object::Architecture::Aarch64_Ilp32
            ),
        })
    }

    /// The 16-bit half move at `vma`, read off its encoding: `Some(false)` for a
    /// low half that zeroes the rest (A32/T32 `movw`, AArch64 `movz` with no
    /// shift), `Some(true)` for a high half inserted into the register (`movt`,
    /// `movk` with a shift).
    fn half_move(&self, vma: u64) -> Option<bool> {
        if self.halves == HalfPairs::Off {
            return None;
        }
        let b = self.code.as_ref()?.bytes_at(vma, 4)?;
        let w = u32::from_le_bytes([b[0], b[1], b[2], b[3]]);
        if self.a64 {
            let hw = (w >> 21) & 3;
            return match w & 0x7f80_0000 {
                0x5280_0000 if hw == 0 => Some(false),
                0x7280_0000 if hw != 0 => Some(true),
                _ => None,
            };
        }
        let hw1 = w & 0xffff;
        match hw1 & 0xfbf0 {
            0xf240 => return Some(false),
            0xf2c0 => return Some(true),
            _ => {}
        }
        if w >> 28 == 0xf {
            return None;
        }
        match w & 0x0ff0_0000 {
            0x0300_0000 => Some(false),
            0x0340_0000 => Some(true),
            _ => None,
        }
    }

    /// Is the instruction at `vma` an AArch64 `adrp`? Read off its encoding,
    /// since `adr` to a page-aligned label lifts to the same `COPY`.
    fn is_adrp(&self, vma: u64) -> bool {
        self.a64
            && self
                .code
                .as_ref()
                .and_then(|c| c.bytes_at(vma, 4))
                .is_some_and(|b| b[3] & 0x9f == 0x90)
    }

    fn is_register(&self, vn: &VarnodeData) -> bool {
        vn.space.as_ref().is_some_and(|s| Rc::ptr_eq(s, &self.reg))
    }

    /// Could `v` be the address a reference names? A PC-relative value
    /// ([`Val::addr`]) is one whatever its size.
    fn admits(&self, v: u64, addr: bool) -> bool {
        (addr || looks_like_address(v)) && in_range(self.mapped, v)
    }

    /// The slot a pointer-width direct memory operand names (x86's `mov
    /// rax,[rip+slot]`), if `vn` is one.
    fn slot(&self, vn: &VarnodeData) -> Option<u64> {
        let data = matches!((&vn.space, &self.data), (Some(s), Some(d)) if Rc::ptr_eq(s, d));
        (data && vn.size == self.ptr && self.admits(vn.offset, false)).then_some(vn.offset)
    }
}

/// An AArch64 image's executable sections, which an `adrp` is read from, and an
/// ARM image's when its `movw`/`movt` pairs are read (`halves`).
fn code<'a>(file: &object::File<'a>, halves: bool) -> Option<PoolImage<'a>> {
    use object::{Object, ObjectSection};
    let arch = file.architecture();
    let a64 = matches!(
        arch,
        object::Architecture::Aarch64 | object::Architecture::Aarch64_Ilp32
    );
    if !a64 && !(halves && arch == object::Architecture::Arm) {
        return None;
    }
    let ranges = file
        .sections()
        .filter(crate::entry::is_executable)
        .filter_map(|sec| {
            let data = sec.data().ok().filter(|d| !d.is_empty())?;
            let lo = sec.address();
            Some((
                lo,
                lo.saturating_add(sec.size().min(data.len() as u64)),
                data,
            ))
        })
        .collect();
    PoolImage::from_ranges(ranges, 8, true)
}

/// The walk-wide record: what is in flight, every branch target, and the
/// references waiting for [`Tracker::finish`].
#[derive(Default)]
pub(super) struct Tracker {
    pending: HashMap<u64, Carry, FxBuildHasher>,
    targets: HashSet<u64, FxBuildHasher>,
    found: Vec<Found>,
    /// Reused across evaluations, so that none allocates.
    scratch: Frame,
    hits: Vec<Hit>,
}

/// A reference that holds if none of `trail` is a join.
struct Found {
    from: u64,
    to: u64,
    kind: XrefKind,
    trail: Trail,
    /// The same instruction accesses `to`: this is its writeback.
    writeback: bool,
    /// The trails of later references that only used this one as a step.
    stepped: Vec<Trail>,
    /// The `adrp` page [`super::xrefs`] filed on its own, not a row of ours.
    page: bool,
    /// The run used the page itself: an access at it, or the `add #0` that is
    /// the `:lo12:` of a page-aligned symbol.
    pinned: bool,
}

/// One instruction, as [`Tracker::step`] reads it.
pub(super) struct Insn<'a> {
    pub vma: u64,
    pub ops: &'a [FullOp],
    pub fall: Option<u64>,
    /// The static branch targets; none for a call.
    pub branches: &'a [u64],
    /// Some op is a `CALL` or `CALLIND`.
    pub calls: bool,
    /// The values the instruction folded from its own address
    /// ([`super::pcform`]).
    pub formed: Formed,
}

/// A value inside one instruction's evaluation.
#[derive(Debug, Clone, Copy)]
struct Val {
    v: u64,
    /// A carried register contributed to it.
    carried: bool,
    /// The width of the `INT_ADD`/`INT_SUB` of this instruction that combined a
    /// carried value with something else, if one did and nothing since changed
    /// its width.
    composed: Option<u32>,
    /// How many instructions the oldest carried input has reached.
    age: u8,
    /// Computed from the instruction's own address.
    pc: bool,
    /// An address relative to the PC: a value [`super::pcform`] folded,
    /// or the PC plus or minus something that is not one ([`fold`]), kept
    /// through a truncation to [`ADDR_BYTES`] or wider. Exempt from the
    /// `checkOperands` floor.
    addr: bool,
    /// The constant is this instruction's address as SLEIGH spells its PC
    /// (`inst_start`, Thumb's `+ 4`, A32's `+ 8`), which an add or subtract
    /// turns into an [`Val::addr`].
    own: bool,
    /// The [`Found`] `Data` row that formed exactly this value.
    formed: Option<usize>,
    /// The formed value this one was computed from.
    base: Option<usize>,
    /// The pointer-width word stored at `v`, read through a reference: inert
    /// to arithmetic, and a call through it is a call through `v`.
    loaded: bool,
    /// A constant subtracted from a carried address: that address biased
    /// backwards (Swift's string object, `sub x8,x8,#0x20` before the `orr` of
    /// its discriminator), not one of its own.
    bias: bool,
    /// Computed from a low half ([`Held::half`]) that no high half has
    /// completed yet.
    half: bool,
}

impl Val {
    /// The word a load read from the reference `at`.
    fn loaded(at: &Val) -> Val {
        Val {
            composed: None,
            own: false,
            formed: None,
            base: None,
            loaded: true,
            ..*at
        }
    }
}

fn mask(size: u32) -> u64 {
    if size == 0 || size >= 8 {
        u64::MAX
    } else {
        (1u64 << (8 * size)) - 1
    }
}

fn sign_extend(v: u64, size: u32) -> u64 {
    if size == 0 || size >= 8 {
        return v;
    }
    let sign = 1u64 << (8 * size - 1);
    let v = v & mask(size);
    if v & sign != 0 { v | !mask(size) } else { v }
}

fn is_constant(vn: &VarnodeData) -> bool {
    vn.space
        .as_ref()
        .is_some_and(|s| s.get_type() == spacetype::IPTR_CONSTANT)
}

fn is_constant_or_temp(vn: &VarnodeData) -> bool {
    vn.space.as_ref().is_some_and(|s| {
        matches!(
            s.get_type(),
            spacetype::IPTR_CONSTANT | spacetype::IPTR_INTERNAL
        )
    })
}

fn overlaps(a: (u64, u32), b: (u64, u32)) -> bool {
    a.0 < b.0.saturating_add(u64::from(b.1)) && b.0 < a.0.saturating_add(u64::from(a.1))
}

/// The ops [`fold`] models: the only ones that can produce a carried value.
fn folds(code: OpCode) -> bool {
    matches!(
        code,
        OpCode::CPUI_COPY
            | OpCode::CPUI_INT_ZEXT
            | OpCode::CPUI_INT_SEXT
            | OpCode::CPUI_CAST
            | OpCode::CPUI_SUBPIECE
            | OpCode::CPUI_INT_ADD
            | OpCode::CPUI_INT_SUB
            | OpCode::CPUI_INT_OR
            | OpCode::CPUI_INT_AND
            | OpCode::CPUI_INT_XOR
            | OpCode::CPUI_INT_LEFT
            | OpCode::CPUI_INT_RIGHT
            | OpCode::CPUI_PIECE
    )
}

/// Could this instruction, with nothing carried into it, leave a register
/// holding a constant worth carrying? The cheap gate that keeps almost every
/// instruction out of the evaluation: some op must compute an address-like
/// value from constants alone (`adrp`'s page, RISC-V `lui`'s `0x15 << 0xc`) or
/// take a positive address-like constant (`auipc`'s `inst_start`) — not the
/// 12-bit immediate RISC-V copies into a temporary ahead of almost every
/// instruction — and it must not be a call, which nothing it forms survives.
/// Where only a PC-derived value may start a carry, some modelled op must also
/// read a constant in the instruction's PC window, or nothing it forms is kept.
/// And it must give some register a value: the first register an evaluation can
/// know is written by a modelled op from constants and temporaries alone. A
/// register copied whole from a pointer-width direct memory operand (`mov
/// rax,[rip+slot]`) holds that slot's word, which a later call may go through.
fn has_seed(m: &Machine, insn: &Insn) -> bool {
    if insn.calls {
        return false;
    }
    if m.half_move(insn.vma) == Some(false) {
        return true;
    }
    let slot_load = |op: &FullOp| {
        op.opcode == OpCode::CPUI_COPY
            && op.out.as_ref().is_some_and(|o| m.is_register(o))
            && op.ins.first().is_some_and(|vn| m.slot(vn).is_some())
    };
    if insn.ops.iter().any(slot_load) {
        return true;
    }
    let mut seed = false;
    let mut pc = !m.pc_only;
    for op in insn.ops {
        if op.out.is_none() || !folds(op.opcode) {
            continue;
        }
        let mut constants = true;
        for vn in &op.ins {
            if !is_constant(vn) {
                constants = false;
                continue;
            }
            let v = vn.offset & mask(vn.size);
            pc |= v.wrapping_sub(insn.vma) < PC_WINDOW;
            seed |= insn.formed.contains(v)
                || adds(op.opcode) && is_own(insn.vma, v)
                || looks_like_address(v) && sign_extend(v, vn.size) as i64 > 0;
        }
        if !seed && constants {
            let konst = |vn: &VarnodeData| constant(insn.vma, &insn.formed, vn);
            seed = fold(op, op.ins.first().map(konst), op.ins.get(1).map(konst))
                .is_some_and(|v| v.addr || looks_like_address(v.v));
        }
        if seed && pc {
            return insn.ops.iter().any(|op| {
                op.out.as_ref().is_some_and(|o| m.is_register(o))
                    && folds(op.opcode)
                    && op.ins.iter().all(is_constant_or_temp)
            });
        }
    }
    false
}

/// Is `v` the instruction at `vma` reading its own address, as SLEIGH spells
/// the PC: `inst_start` (RISC-V `auipc`), Thumb's `inst_start + 4`, A32's `+ 8`?
fn is_own(vma: u64, v: u64) -> bool {
    [vma, vma.wrapping_add(4), vma.wrapping_add(8)].contains(&v)
}

fn adds(code: OpCode) -> bool {
    matches!(code, OpCode::CPUI_INT_ADD | OpCode::CPUI_INT_SUB)
}

/// The constant `vn` in the instruction at `vma`.
fn constant(vma: u64, formed: &Formed, vn: &VarnodeData) -> Val {
    let v = vn.offset & mask(vn.size);
    Val {
        v,
        carried: false,
        composed: None,
        age: 0,
        pc: v.wrapping_sub(vma) < PC_WINDOW,
        addr: formed.contains(v),
        own: is_own(vma, v),
        formed: None,
        base: None,
        loaded: false,
        bias: false,
        half: false,
    }
}

/// Does `op` branch inside its own instruction — a p-code-relative target, or
/// the instruction's own fall-through? Then what the instruction writes is
/// conditional.
fn branches_within(op: &FullOp, fall: u64) -> bool {
    matches!(op.opcode, OpCode::CPUI_BRANCH | OpCode::CPUI_CBRANCH)
        && op
            .ins
            .first()
            .is_some_and(|vn| is_constant(vn) || vn.offset == fall)
}

/// One instruction's registers and temporaries while it is evaluated.
#[derive(Default)]
struct Frame {
    vma: u64,
    formed: Formed,
    regs: Vec<(u64, u32, Val)>,
    temps: Vec<(u64, u32, Val)>,
    written: Vec<(u64, u32)>,
}

impl Frame {
    fn read(&self, m: &Machine, vn: &VarnodeData) -> Option<Val> {
        let space = vn.space.as_ref()?;
        match space.get_type() {
            spacetype::IPTR_CONSTANT => Some(constant(self.vma, &self.formed, vn)),
            spacetype::IPTR_INTERNAL => self
                .temps
                .iter()
                .find(|&&(o, s, _)| o == vn.offset && s == vn.size)
                .map(|&(_, _, v)| v),
            _ if m.is_register(vn) => {
                let (lo, hi) = (vn.offset, vn.offset.saturating_add(u64::from(vn.size)));
                self.regs.iter().find_map(|&(o, s, val)| {
                    let end = o.saturating_add(u64::from(s));
                    if lo < o || hi > end {
                        return None;
                    }
                    if (lo, hi) == (o, end) {
                        return Some(val);
                    }
                    if val.loaded {
                        return None;
                    }
                    let shift = if m.big_endian { end - hi } else { lo - o };
                    let v = val.v.checked_shr((8 * shift) as u32).unwrap_or(0) & mask(vn.size);
                    Some(Val {
                        v,
                        composed: None,
                        addr: val.addr && shift == 0 && vn.size >= ADDR_BYTES,
                        ..val
                    })
                })
            }
            _ => None,
        }
    }

    fn write(&mut self, m: &Machine, vn: &VarnodeData, val: Option<Val>) {
        let Some(space) = vn.space.as_ref() else {
            return;
        };
        let val = val.map(|v| Val {
            v: v.v & mask(vn.size),
            ..v
        });
        let span = (vn.offset, vn.size);
        if space.get_type() == spacetype::IPTR_INTERNAL {
            self.temps.retain(|&(o, s, _)| !overlaps((o, s), span));
            if let Some(v) = val {
                self.temps.push((vn.offset, vn.size, v));
            }
        } else if m.is_register(vn) {
            self.regs.retain(|&(o, s, _)| !overlaps((o, s), span));
            self.written.push(span);
            if let Some(v) = val {
                self.regs.push((vn.offset, vn.size, v));
            }
        }
    }
}

/// The value `op` produces from `a` (and `b`), where the evaluation models it.
fn fold(op: &FullOp, a: Option<Val>, b: Option<Val>) -> Option<Val> {
    let out = op.out.as_ref()?;
    let a = a?;
    if a.loaded || b.is_some_and(|b| b.loaded) {
        return (op.opcode == OpCode::CPUI_COPY).then_some(a);
    }
    let resized = out.size != op.ins.first()?.size;
    let unary = |v: u64| {
        Some(Val {
            v: v & mask(out.size),
            composed: if resized { None } else { a.composed },
            own: false,
            ..a
        })
    };
    match op.opcode {
        OpCode::CPUI_COPY | OpCode::CPUI_INT_ZEXT | OpCode::CPUI_CAST => unary(a.v),
        OpCode::CPUI_INT_SEXT => unary(sign_extend(a.v, op.ins.first()?.size)),
        OpCode::CPUI_SUBPIECE => {
            let by = b?.v;
            let low = unary(
                a.v.checked_shr(u32::try_from(by.checked_mul(8)?).ok()?)
                    .unwrap_or(0),
            )?;
            Some(Val {
                addr: a.addr && by == 0 && out.size >= ADDR_BYTES,
                ..low
            })
        }
        OpCode::CPUI_INT_ADD
        | OpCode::CPUI_INT_SUB
        | OpCode::CPUI_INT_OR
        | OpCode::CPUI_INT_AND
        | OpCode::CPUI_INT_XOR
        | OpCode::CPUI_INT_LEFT
        | OpCode::CPUI_INT_RIGHT
        | OpCode::CPUI_PIECE => {
            let b = b?;
            let shift = |n: u64| u32::try_from(n).ok().filter(|&n| n < 64);
            let v = match op.opcode {
                OpCode::CPUI_INT_ADD => a.v.wrapping_add(b.v),
                OpCode::CPUI_INT_SUB => a.v.wrapping_sub(b.v),
                OpCode::CPUI_INT_OR => a.v | b.v,
                OpCode::CPUI_INT_AND => a.v & b.v,
                OpCode::CPUI_INT_XOR => a.v ^ b.v,
                OpCode::CPUI_INT_LEFT => shift(b.v).map_or(0, |n| a.v << n),
                OpCode::CPUI_INT_RIGHT => shift(b.v).map_or(0, |n| a.v >> n),
                _ => {
                    let low = op.ins.get(1)?.size;
                    shift(u64::from(low) * 8).map_or(0, |n| a.v << n) | b.v
                }
            } & mask(out.size);
            let moved = (a.carried && v == a.v) || (b.carried && v == b.v);
            let carried = a.carried || b.carried;
            let composed = match op.opcode {
                OpCode::CPUI_INT_ADD | OpCode::CPUI_INT_SUB if carried && !moved => Some(out.size),
                OpCode::CPUI_INT_ADD | OpCode::CPUI_INT_SUB => a.composed.or(b.composed),
                _ => None,
            };
            let input = if a.carried { a } else { b };
            let (formed, base) = if moved {
                (input.formed, input.base)
            } else {
                (None, input.formed.or(input.base))
            };
            let (pa, pb) = (a.addr || a.own, b.addr || b.own);
            let addr = match op.opcode {
                OpCode::CPUI_INT_ADD => pa != pb,
                OpCode::CPUI_INT_SUB => pa && !pb,
                _ => false,
            };
            let (age, pc) = (a.age.max(b.age), a.pc || b.pc);
            let bias = op.opcode == OpCode::CPUI_INT_SUB && a.carried && !b.carried && !moved;
            Some(Val {
                v,
                carried,
                composed,
                age,
                pc,
                addr,
                own: false,
                formed,
                base,
                loaded: false,
                bias,
                half: a.half || b.half,
            })
        }
        _ => None,
    }
}

/// A reference one instruction produces, before it joins [`Tracker::found`].
struct Hit {
    to: u64,
    kind: XrefKind,
    age: u8,
    /// The earlier `Data` row the address was computed from, when it differs.
    base: Option<usize>,
    page: bool,
}

impl Tracker {
    /// Forget what is in flight: a new function body starts with nothing.
    pub(super) fn begin_body(&mut self) {
        self.pending.clear();
    }

    /// Record a branch edge into `to` that the walk did not take through
    /// [`Tracker::step`] (a switch case).
    pub(super) fn enter(&mut self, to: u64) {
        self.targets.insert(to);
    }

    /// Drop what instructions the walk has since discarded contributed.
    pub(super) fn discard(&mut self, removed: &HashSet<u64>) {
        self.pending.clear();
        self.found.retain(|f| !removed.contains(&f.from));
        for f in &mut self.found {
            f.stepped
                .retain(|t| t.last().is_none_or(|at| !removed.contains(at)));
        }
    }

    /// Consume one decoded instruction: evaluate it with what reached it, keep
    /// the references only the carried registers make, and hand what it leaves
    /// on to its fall-through.
    pub(super) fn step(&mut self, m: &Machine, insn: Insn) {
        self.targets.extend(insn.branches.iter().copied());
        let carry = if self.pending.is_empty() {
            None
        } else {
            self.pending.remove(&insn.vma)
        };
        if carry.is_some() || has_seed(m, &insn) {
            self.evaluate(m, &insn, carry.unwrap_or_default());
        }
    }

    fn evaluate(&mut self, m: &Machine, insn: &Insn, carry: Carry) {
        let Tracker {
            pending,
            found,
            scratch: frame,
            hits,
            ..
        } = self;
        let &Insn {
            vma,
            ops,
            fall,
            calls,
            formed,
            ..
        } = insn;
        frame.vma = vma;
        frame.formed = formed;
        frame.regs.clear();
        frame.temps.clear();
        frame.written.clear();
        hits.clear();
        frame.regs.extend(carry.held.iter().map(|h| {
            let val = Val {
                v: h.v,
                carried: true,
                composed: None,
                age: h.age.saturating_add(1),
                pc: h.pc,
                addr: h.addr,
                own: false,
                formed: h.formed,
                base: None,
                loaded: h.loaded,
                bias: false,
                half: h.half,
            };
            (h.off, h.size, val)
        }));
        let first = found.len();
        let base_of = |found: &[Found], val: &Val, to: u64| {
            val.formed
                .or(val.base)
                .filter(|&i| i < first && found[i].to != to)
        };
        let pin = |found: &mut [Found], val: &Val| {
            let at_page = val
                .formed
                .filter(|&i| i < first && found[i].page && found[i].to == val.v);
            if let Some(i) = at_page.filter(|_| val.carried && !val.loaded) {
                found[i].pinned = true;
            }
        };
        let fall_vma = fall.unwrap_or(u64::MAX);
        let half_move = m.half_move(vma);
        let mut conditional = false;
        let mut joined = false;
        for op in ops {
            let from_data = || {
                op.ins
                    .first()
                    .is_some_and(|vn| Some(vn.offset) == m.data_index)
            };
            match op.opcode {
                OpCode::CPUI_LOAD | OpCode::CPUI_STORE => {
                    let load = op.opcode == OpCode::CPUI_LOAD;
                    let mut word = None;
                    if let Some(a) = op.ins.get(1).and_then(|vn| frame.read(m, vn)) {
                        if from_data() {
                            pin(found, &a);
                        }
                        if a.carried && !a.loaded && !joined && from_data() && m.admits(a.v, a.addr)
                        {
                            let kind = if load {
                                XrefKind::Read
                            } else {
                                XrefKind::Write
                            };
                            let base = base_of(found, &a, a.v);
                            hits.push(Hit {
                                to: a.v,
                                kind,
                                age: a.age,
                                base,
                                page: false,
                            });
                            let width = op.out.as_ref().map(|o| o.size).filter(|_| load);
                            if let Some(t) = width.and_then(|w| m.pool?.follow(a.v, w, m.mapped)) {
                                hits.push(Hit {
                                    to: t,
                                    kind: XrefKind::Data,
                                    age: a.age,
                                    base: None,
                                    page: false,
                                });
                            }
                            word = (width == Some(m.ptr)).then(|| Val::loaded(&a));
                        }
                    }
                    if let Some(out) = op.out.as_ref().filter(|_| load) {
                        frame.write(m, out, word);
                    }
                }
                OpCode::CPUI_CALL | OpCode::CPUI_CALLIND | OpCode::CPUI_CALLOTHER => {
                    let dest = op.ins.first().filter(|_| op.opcode == OpCode::CPUI_CALLIND);
                    if let Some(d) = dest.and_then(|vn| frame.read(m, vn)) {
                        if d.loaded && d.carried && !joined {
                            hits.push(Hit {
                                to: d.v,
                                kind: XrefKind::Call,
                                age: d.age,
                                base: None,
                                page: false,
                            });
                        }
                    }
                    if let Some(out) = &op.out {
                        frame.write(m, out, None);
                    }
                    let (preserved, written) = (m.preserved, &frame.written);
                    frame.regs.retain(|&(o, s, _)| {
                        let end = o.saturating_add(u64::from(s));
                        preserved.iter().any(|&(lo, hi)| o >= lo && end <= hi)
                            && !written.iter().any(|&w| overlaps(w, (o, s)))
                    });
                }
                OpCode::CPUI_BRANCH | OpCode::CPUI_CBRANCH => {
                    conditional |= branches_within(op, fall_vma);
                    joined |= op.ins.first().is_some_and(is_constant);
                }
                _ => {
                    let Some(out) = &op.out else { continue };
                    let a = op.ins.first().and_then(|vn| frame.read(m, vn));
                    let b = op.ins.get(1).and_then(|vn| frame.read(m, vn));
                    let mut val = fold(op, a, b).or_else(|| {
                        let v =
                            m.slot(op.ins.first().filter(|_| op.opcode == OpCode::CPUI_COPY)?)?;
                        Some(Val::loaded(&Val {
                            v,
                            pc: false,
                            addr: false,
                            ..constant(vma, &formed, &op.ins[0])
                        }))
                    });
                    if let Some(v) = val.as_mut() {
                        if op.opcode == OpCode::CPUI_INT_ADD {
                            pin(found, v);
                        }
                        // A high half completes what a low half began: the value is
                        // whole now, and with `movwpairs on` it is a reference
                        // where it lands in a mapped section.
                        let completes = v.half
                            && half_move == Some(true)
                            && m.is_register(out)
                            && looks_like_address(v.v);
                        if completes {
                            v.half = false;
                        }
                        if completes
                            && m.halves == HalfPairs::On
                            && v.carried
                            && !joined
                            && m.is_register(out)
                            && looks_like_address(v.v)
                            && m.admits(v.v, false)
                        {
                            let base = base_of(found, v, v.v);
                            hits.push(Hit {
                                to: v.v,
                                kind: XrefKind::Data,
                                age: v.age,
                                base,
                                page: false,
                            });
                            v.formed = Some(first + hits.len() - 1);
                        } else if v.carried
                            && !joined
                            && !v.bias
                            && v.composed == Some(out.size)
                            && m.is_register(out)
                            && !(calls && v.v == fall_vma)
                            && m.admits(v.v, v.addr)
                        {
                            let base = base_of(found, v, v.v);
                            hits.push(Hit {
                                to: v.v,
                                kind: XrefKind::Data,
                                age: v.age,
                                base,
                                page: false,
                            });
                            v.formed = Some(first + hits.len() - 1);
                        } else if !v.carried
                            && op.opcode == OpCode::CPUI_COPY
                            && op.ins.first().is_some_and(is_constant)
                            && v.v & 0xfff == 0
                            && m.is_register(out)
                            && m.admits(v.v, v.addr)
                            && m.is_adrp(vma)
                        {
                            hits.push(Hit {
                                to: v.v,
                                kind: XrefKind::Data,
                                age: 0,
                                base: None,
                                page: true,
                            });
                            v.formed = Some(first + hits.len() - 1);
                        }
                    }
                    frame.write(m, out, val);
                }
            }
        }

        for (k, h) in hits.iter().enumerate() {
            let reach = usize::from(h.age).saturating_sub(1).min(carry.trail.len());
            let mut trail: Trail = carry.trail[carry.trail.len() - reach..]
                .iter()
                .copied()
                .collect();
            trail.push(vma);
            if let Some(i) = h.base {
                if found[i].page || !frame.regs.iter().any(|&(_, _, v)| v.formed == Some(i)) {
                    found[i].stepped.push(trail.clone());
                }
            }
            let writeback = h.kind == XrefKind::Data
                && hits
                    .iter()
                    .enumerate()
                    .any(|(j, o)| j != k && o.to == h.to && o.kind != XrefKind::Data);
            let stepped = Vec::new();
            found.push(Found {
                from: vma,
                to: h.to,
                kind: h.kind,
                trail,
                writeback,
                stepped,
                page: h.page,
                pinned: false,
            });
        }

        let Some(next) = fall else { return };
        let mut held: SmallVec<[Held; MAX_TRACKED]> = SmallVec::new();
        for &(off, size, v) in &frame.regs {
            // A low half is kept on its own say-so: its encoding is a `movw`/`movz`
            // and it was written here from a constant.
            let low = half_move == Some(false) && !v.carried && v.v <= 0xffff;
            let half = v.half || low;
            let keep = usize::from(v.age) < MAX_HOPS
                && (v.addr || half || looks_like_address(v.v))
                && (v.carried || v.pc || !m.pc_only)
                && !(conditional && frame.written.iter().any(|&w| overlaps(w, (off, size))));
            if keep {
                let age = if v.carried { v.age } else { 0 };
                held.push(Held {
                    off,
                    size,
                    v: v.v,
                    age,
                    pc: v.pc,
                    addr: v.addr,
                    formed: v.formed,
                    loaded: v.loaded,
                    half: half && !looks_like_address(v.v),
                });
            }
        }
        if held.is_empty() {
            return;
        }
        held.sort_by_key(|h| h.age);
        held.truncate(MAX_TRACKED);
        let oldest = held.iter().map(|h| usize::from(h.age)).max().unwrap_or(0);
        let mut trail = carry.trail;
        trail.push(vma);
        let keep = oldest.min(trail.len());
        trail.drain(..trail.len() - keep);
        pending.entry(next).or_insert(Carry { held, trail });
    }

    /// The references whose every carrying instruction nothing else enters, as
    /// `(from, to, kind)`.
    pub(super) fn finish(&self, funcs: &BTreeSet<u64>) -> Vec<(u64, u64, XrefKind)> {
        let holds = |trail: &[u64]| {
            trail
                .iter()
                .all(|at| !self.targets.contains(at) && !funcs.contains(at))
        };
        self.found
            .iter()
            .filter(|f| {
                !f.page && !f.writeback && holds(&f.trail) && !f.stepped.iter().any(|t| holds(t))
            })
            .map(|f| (f.from, f.to, f.kind))
            .collect()
    }

    /// The `adrp` pages, as `(adrp, page)`, that an instruction the carry holds
    /// across completed into another address and that the run never used at
    /// offset 0: the page was a step to it, and [`super::xrefs`]' own `Data` row
    /// for it names whatever datum the page happens to start with.
    pub(super) fn superseded(&self, funcs: &BTreeSet<u64>) -> Vec<(u64, u64)> {
        let holds = |trail: &[u64]| {
            trail
                .iter()
                .all(|at| !self.targets.contains(at) && !funcs.contains(at))
        };
        self.found
            .iter()
            .filter(|f| f.page && !f.pinned && f.stepped.iter().any(|t| holds(t)))
            .map(|f| (f.from, f.to))
            .collect()
    }
}

#[cfg(test)]
mod tests;
