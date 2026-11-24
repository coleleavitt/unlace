//! (unlace) `varargsave` — the System V x86-64 register save area of a variadic
//! function.
//!
//! A variadic function compiled for System V x86-64 opens by spilling every
//! argument register its named parameters do not use into a 176-byte register
//! save area, so that `va_arg` can find them:
//!
//! ```text
//!   mov [save+8],rsi ... mov [save+40],r9     ; rdi..r9 at save+8*i
//!   test al,al                                ; al = number of vector args
//!   je 1f
//!   movaps [save+48],xmm0 ... [save+160],xmm7 ; xmm0..7 at save+48+16*j
//! 1:
//! ```
//!
//! Every one of those stores reads an argument register, so input recovery
//! gives the function all six integer and eight vector registers as
//! parameters, and the body opens with fourteen copies of them and an
//! `if (al)` on an undefined byte. IDA models the area with its `va_list`
//! adapter (hexx64.so `x64_va_adapter`) and prints `f(const char *fmt, ...)`.
//!
//! Before SSA this pass matches that exact layout: the stores of a suffix
//! `rdi..r9` of the integer argument registers at `base+8*i` in the entry
//! block, which ends in a conditional branch around a block that stores a
//! suffix `xmmN..xmm7` at `base+48+16*j` and rejoins, and in the join block the
//! four `va_start` stores of a `va_list` (`gp_offset` = 8 per named integer
//! register, `fp_offset` = 48 + 16 per named vector register, the overflow
//! area, and the save area's address as `reg_save_area`; clang writes the two
//! offsets as one 8-byte store). The save-area stores are removed, the branch
//! is made to skip the vector block, the `va_list` set-up becomes
//! `va_start(&ap)` on a `__va_list_tag`, and the prototype is marked variadic,
//! so the named parameters are the registers before the saved ones.
//!
//! Raw ops are read before heritage, where a read is not linked to its writer
//! and every instruction reuses the same temporaries, so each block is walked
//! in order and every write is resolved to "register's entry value plus a
//! constant", a constant or unknown when it happens (a raw CALL leaves the
//! stack pointer 8 lower until the callee's `ret`, which the walk adds back).
//!
//! It declines, leaving the code as compiled, when the function reads its own
//! save area (an inlined `va_arg`): when the save area's address reaches
//! anything but the `reg_save_area` store or stays in a register past the
//! block, or when any other load or store addresses the area. gcc then keeps
//! `gp_offset` in a register and splits the loop, so there is no `va_arg`
//! operation left to name. A `-O0` spill of named arguments stores in the
//! opposite order with no vector block, so it does not match.

pub use crate::architecture::Regs;
use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;
use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::VarnodeData;

const GP: [&[u8]; 6] = [b"RDI", b"RSI", b"RDX", b"RCX", b"R8", b"R9"];
const XMM: [&[u8]; 8] = [
    b"XMM0", b"XMM1", b"XMM2", b"XMM3", b"XMM4", b"XMM5", b"XMM6", b"XMM7",
];

/// The key of the caller-saved register `name` in `regs`.
fn named(regs: &Regs, name: &[u8]) -> Option<Key> {
    key_of(
        regs.caller_saved
            .iter()
            .find(|(n, _)| n.as_slice() == name)?
            .1
            .as_ref()?,
    )
}

pub fn regs(arch: &crate::architecture::Architecture) -> Option<Regs> {
    let id = arch.get_description();
    if !arch.unlace_options.get::<crate::varargsave::VarargSave>().0
        || !id.starts_with("x86:LE:64")
        || crate::fastfailnoreturn::archid_is_windows(id)
    {
        return None;
    }
    let get = |names: &[&[u8]]| {
        names
            .iter()
            .map(|n| arch.get_register_varnode(n).ok())
            .collect::<Option<Vec<_>>>()
    };
    let caller_saved = CALLER_SAVED
        .iter()
        .map(|n| (n.to_vec(), arch.get_register_varnode(n).ok()))
        .collect();
    Some(Regs {
        sp: arch.get_register_varnode(b"RSP").ok()?,
        gp: get(&GP)?,
        xmm: get(&XMM)?,
        caller_saved,
    })
}

type Key = (int4, u64, i32);

fn key(data: &Funcdata, id: VarnodeId) -> Option<Key> {
    let v = data.vbank().get(id)?;
    Some((
        v.get_addr().get_space()?.get_index(),
        v.get_offset(),
        v.get_size(),
    ))
}

fn key_of(v: &VarnodeData) -> Option<Key> {
    Some((v.space.as_ref()?.get_index(), v.offset, v.size as i32))
}

/// What a storage location holds at a point in a block, resolved when it is
/// written: before heritage a read is not linked to its writer, and SLEIGH
/// reuses the same temporaries in every instruction.
#[derive(Clone, Copy, PartialEq, Eq, Debug)]
enum Value {
    /// The incoming value of a register (or of a storage nothing wrote here).
    Reg(Key),
    /// A base register's incoming value plus a constant.
    Slot(Key, i64),
    Const(u64),
    Other,
}

#[derive(Clone)]
struct Defs(std::collections::HashMap<Key, Value>, Option<Key>);

impl Defs {
    /// `sp` is the stack pointer, which a raw CALL leaves 8 bytes lower than
    /// the callee's `ret` does.
    fn new(sp: Option<Key>) -> Defs {
        Defs(std::collections::HashMap::new(), sp)
    }

    /// The register state at the end of `block`, to seed its successors.
    fn exit_of(data: &Funcdata, block: crate::context::BlockId, sp: Option<Key>) -> Defs {
        let mut defs = Defs::new(sp);
        for id in data.bb_ops(block) {
            defs.record(data, id);
        }
        let unique = |k: &Key| {
            data.get_arch()
                .manage()
                .get_space(k.0)
                .is_some_and(|s| s.get_type() == unlace_base::space::spacetype::IPTR_INTERNAL)
        };
        defs.0.retain(|k, _| !unique(k));
        defs
    }

    fn value(&self, data: &Funcdata, vn: VarnodeId) -> Value {
        let Some(v) = data.vbank().get(vn) else {
            return Value::Other;
        };
        if v.is_constant() {
            return Value::Const(v.get_offset());
        }
        let Some(k) = key(data, vn) else {
            return Value::Other;
        };
        if let Some(&val) = self.0.get(&k) {
            return val;
        }
        let reg = data
            .get_arch()
            .manage()
            .get_space(k.0)
            .is_some_and(|s| s.get_type() == unlace_base::space::spacetype::IPTR_PROCESSOR);
        if reg { Value::Reg(k) } else { Value::Other }
    }

    fn record(&mut self, data: &Funcdata, id: OpId) {
        let Some(op) = data.obank().get(id) else {
            return;
        };
        if matches!(op.code(), OpCode::CPUI_CALL | OpCode::CPUI_CALLIND) {
            if let Some(sp) = self.1 {
                let popped = match self.0.get(&sp).copied().unwrap_or(Value::Reg(sp)) {
                    Value::Reg(r) => Value::Slot(r, 8),
                    Value::Slot(r, o) => Value::Slot(r, o + 8),
                    other => other,
                };
                self.0.insert(sp, popped);
            }
            return;
        }
        let Some(k) = op.get_out().and_then(|o| key(data, o)) else {
            return;
        };
        let input = |i: int4| {
            op.get_in(i)
                .map(|v| self.value(data, v))
                .unwrap_or(Value::Other)
        };
        let signed = |c: u64, size: int4| {
            let bits = 64 - 8 * size.clamp(1, 8) as u32;
            ((c << bits) as i64) >> bits
        };
        let size = data
            .vbank()
            .get(op.get_out().unwrap())
            .map(|v| v.get_size())
            .unwrap_or(8);
        let val = match op.code() {
            OpCode::CPUI_COPY => input(0),
            OpCode::CPUI_INT_ADD | OpCode::CPUI_INT_SUB => {
                let sub = op.code() == OpCode::CPUI_INT_SUB;
                match (input(0), input(1)) {
                    (Value::Reg(r), Value::Const(c)) => Value::Slot(
                        r,
                        if sub {
                            -signed(c, size)
                        } else {
                            signed(c, size)
                        },
                    ),
                    (Value::Slot(r, o), Value::Const(c)) => Value::Slot(
                        r,
                        o + if sub {
                            -signed(c, size)
                        } else {
                            signed(c, size)
                        },
                    ),
                    (Value::Const(c), Value::Reg(r)) if !sub => Value::Slot(r, signed(c, size)),
                    (Value::Const(c), Value::Slot(r, o)) if !sub => {
                        Value::Slot(r, o + signed(c, size))
                    }
                    _ => Value::Other,
                }
            }
            _ => Value::Other,
        };
        self.0.insert(k, val);
    }

    fn slot(&self, data: &Funcdata, vn: VarnodeId) -> Option<(Key, i64)> {
        match self.value(data, vn) {
            Value::Reg(r) => Some((r, 0)),
            Value::Slot(r, o) => Some((r, o)),
            _ => None,
        }
    }
}

/// A raw STORE: its op, width, where it writes and what it writes.
struct RawStore {
    op: OpId,
    size: int4,
    at: Option<(Key, i64)>,
    value_key: Option<Key>,
    value_slot: Option<(Key, i64)>,
    value_const: Option<u64>,
}

fn raw_stores(data: &Funcdata, block: crate::context::BlockId, seed: &Defs) -> Vec<RawStore> {
    let mut defs = seed.clone();
    let mut out = Vec::new();
    for id in data.bb_ops(block) {
        let Some(op) = data.obank().get(id) else {
            continue;
        };
        if op.code() == OpCode::CPUI_STORE {
            if let (Some(ptr), Some(value)) = (op.get_in(1), op.get_in(2)) {
                let v = defs.value(data, value);
                out.push(RawStore {
                    op: id,
                    size: data.vbank().get(value).map(|v| v.get_size()).unwrap_or(0),
                    at: defs.slot(data, ptr),
                    value_key: match v {
                        Value::Reg(k) => Some(k),
                        _ => None,
                    },
                    value_slot: match v {
                        Value::Slot(r, o) => Some((r, o)),
                        _ => None,
                    },
                    value_const: match v {
                        Value::Const(c) => Some(c),
                        _ => None,
                    },
                });
            }
        }
        defs.record(data, id);
    }
    out
}

/// Raw STOREs in `block` of one of `regs`, as `(register index, op, slot)`.
fn stores_of(
    data: &Funcdata,
    block: crate::context::BlockId,
    regs: &[VarnodeData],
    seed: &Defs,
) -> Vec<(usize, OpId, (Key, i64))> {
    let keys: Vec<_> = regs.iter().map(key_of).collect();
    raw_stores(data, block, seed)
        .into_iter()
        .filter_map(|s| {
            let i = keys.iter().position(|r| r.is_some() && *r == s.value_key)?;
            Some((i, s.op, s.at?))
        })
        .collect()
}

const CALLER_SAVED: [&[u8]; 9] = [
    b"RAX", b"RCX", b"RDX", b"RSI", b"RDI", b"R8", b"R9", b"R10", b"R11",
];

/// The `va_start` stores of one `va_list` in `block`: `gp_offset` (4 bytes,
/// the named integer registers times 8) at `A`, `fp_offset` (48 plus 16 per
/// named vector register; optional) at `A+4`, or both in one 8-byte store,
/// `overflow_arg_area` at `A+8` and `reg_save_area` (the save area's address)
/// at `A+16`. Returns the ops, the one at `A` first.
fn va_start_stores(
    data: &Funcdata,
    block: crate::context::BlockId,
    save: (Key, i64),
    first_gp: usize,
    first_xmm: usize,
    seed: &Defs,
) -> Option<Vec<OpId>> {
    let stores = raw_stores(data, block, seed);
    let reg_save = stores
        .iter()
        .find(|s| s.size == 8 && s.value_slot == Some(save))?;
    let (base, a) = reg_save.at?;
    let a = a - 16;
    let at = |off: i64, size: int4| {
        stores
            .iter()
            .find(|s| s.at == Some((base, a + off)) && s.size == size)
    };
    let (gp_offset, fp_offset) = (8 * first_gp as u64, 48 + 16 * first_xmm as u64);
    let overflow = at(8, 8)?;
    if let Some(both) = at(0, 8) {
        // clang writes both offsets with one 8-byte store.
        return (both.value_const == Some(fp_offset << 32 | gp_offset))
            .then(|| vec![both.op, overflow.op, reg_save.op]);
    }
    let gp = at(0, 4).filter(|s| s.value_const == Some(gp_offset))?;
    let mut ops = vec![gp.op, overflow.op, reg_save.op];
    if let Some(fp) = at(4, 4) {
        if fp.value_const != Some(fp_offset) {
            return None;
        }
        ops.push(fp.op);
    }
    Some(ops)
}

/// Does the save area's address reach anything in `block` but the
/// `reg_save_area` store, or stay in a register past the block? A function
/// that reads the save area itself (an inlined `va_arg`) needs the stores.
fn save_address_escapes(
    data: &Funcdata,
    block: crate::context::BlockId,
    save: (Key, i64),
    keep: OpId,
    seed: &Defs,
) -> bool {
    let caller_saved: Vec<Key> = CALLER_SAVED
        .iter()
        .filter_map(|n| named(data.get_arch().vararg_regs.as_ref()?, n))
        .collect();
    let mut defs = seed.clone();
    let mut holders: std::collections::HashSet<Key> = std::collections::HashSet::new();
    for id in data.bb_ops(block) {
        let Some(op) = data.obank().get(id) else {
            continue;
        };
        let copy = op.code() == OpCode::CPUI_COPY;
        let reads = (0..op.num_input())
            .filter_map(|i| op.get_in(i))
            .filter_map(|v| key(data, v))
            .any(|k| holders.contains(&k));
        if reads && !copy && id != keep {
            return true;
        }
        if matches!(op.code(), OpCode::CPUI_CALL | OpCode::CPUI_CALLIND) {
            holders.retain(|k| !caller_saved.contains(k));
        }
        defs.record(data, id);
        if let Some(k) = op.get_out().and_then(|o| key(data, o)) {
            if defs.0.get(&k) == Some(&Value::Slot(save.0, save.1)) {
                holders.insert(k);
            } else {
                holders.remove(&k);
            }
        }
    }
    let unique = |k: &Key| {
        data.get_arch()
            .manage()
            .get_space(k.0)
            .is_some_and(|s| s.get_type() == unlace_base::space::spacetype::IPTR_INTERNAL)
    };
    holders.iter().any(|k| !unique(k))
}

/// Does any raw LOAD or STORE outside `matched` address the save area
/// `[origin, origin+176)` through a constant offset from its base?
fn save_area_touched(
    data: &Funcdata,
    base: Key,
    origin: i64,
    matched: &[OpId],
    seed: &Defs,
) -> bool {
    let entry = data.bblocks_get_block(0);
    for i in 0..data.bblocks_get_size() {
        let block = data.bblocks_get_block(i);
        let mut defs = if block == entry {
            Defs::new(seed.1)
        } else {
            seed.clone()
        };
        for id in data.bb_ops(block) {
            let Some(op) = data.obank().get(id) else {
                continue;
            };
            if matches!(op.code(), OpCode::CPUI_LOAD | OpCode::CPUI_STORE) && !matched.contains(&id)
            {
                let at = op.get_in(1).and_then(|p| defs.slot(data, p));
                if at.is_some_and(|(b, off)| b == base && off >= origin && off < origin + 176) {
                    return true;
                }
            }
            defs.record(data, id);
        }
    }
    false
}

/// Remove a matched register save area, mark the function variadic and turn
/// its `va_list` set-up into `va_start(&ap)`.
pub fn strip(data: &mut Funcdata) {
    let Some(regs) = data.get_arch().vararg_regs.clone() else {
        return;
    };
    if data.bblocks_get_size() < 3 {
        return;
    }
    let entry = data.bblocks_get_block(0);
    let Some(&branch) = data.bb_ops(entry).last() else {
        return;
    };
    if data.obank().get(branch).map(|o| o.code()) != Some(OpCode::CPUI_CBRANCH) {
        return;
    }
    let sp = key_of(&regs.sp);
    let gp = stores_of(data, entry, &regs.gp, &Defs::new(sp));
    let seed = Defs::exit_of(data, entry, sp);
    // The run of saves at stride 8 that ends at r9; a named register spilled
    // elsewhere (rdi at -O0) is not part of it.
    let Some(&(_, _, (base, last))) = gp.iter().find(|g| g.0 == 5) else {
        return;
    };
    let origin = last - 40;
    let at = |i: usize| {
        gp.iter()
            .filter(|g| g.0 == i && g.2 == (base, origin + 8 * i as i64))
            .map(|g| g.1)
            .next()
    };
    let first = (0..6)
        .rev()
        .take_while(|&i| at(i).is_some())
        .last()
        .unwrap_or(5);
    let gp: Vec<_> = gp
        .into_iter()
        .filter(|g| g.0 >= first && g.2 == (base, origin + 8 * g.0 as i64))
        .collect();
    if gp.len() != 6 - first {
        return;
    }
    let b = data.bblocks_ref().block(entry);
    if b.size_out() != 2 {
        return;
    }
    let (fall, taken) = (b.get_out(0), b.get_out(1));
    let vector_side = [(fall, taken, false), (taken, fall, true)]
        .into_iter()
        .find_map(|(v, join, is_taken)| {
            let vb = data.bblocks_ref().block(v);
            if vb.size_out() != 1 || vb.get_out(0) != join || vb.size_in() != 1 {
                return None;
            }
            let xmm = stores_of(data, v, &regs.xmm, &seed);
            let first_xmm = xmm.iter().map(|x| x.0).min()?;
            let complete = xmm.len() == 8 - first_xmm
                && (first_xmm..8).all(|j| {
                    xmm.iter()
                        .any(|x| x.0 == j && x.2 == (base, origin + 48 + 16 * j as i64))
                });
            complete.then_some((xmm, is_taken, join, first_xmm))
        });
    let Some((xmm, vector_taken, join, first_xmm)) = vector_side else {
        return;
    };
    let save = (base, origin);
    let Some(va) = va_start_stores(data, join, save, first, first_xmm, &seed) else {
        return;
    };
    if save_address_escapes(data, join, save, va[2], &seed) {
        return;
    }
    let matched: Vec<OpId> = gp
        .iter()
        .map(|g| g.1)
        .chain(xmm.iter().map(|x| x.1))
        .chain(va.iter().copied())
        .collect();
    if save_area_touched(data, base, origin, &matched, &seed) {
        return;
    }
    for (_, op, _) in gp.into_iter().chain(xmm) {
        data.op_destroy(op);
    }
    for &op in &va[1..] {
        data.op_destroy(op);
    }
    let Some(ptr) = data.obank().get(va[0]).and_then(|o| o.get_in(1)) else {
        return;
    };
    let id = data.new_constant(4, u64::from(crate::userop::BUILTIN_VA_START));
    if data.op_set_all_input(va[0], &[id, ptr]).is_err() {
        return;
    }
    data.op_set_opcode(va[0], crate::typeop::type_op_for(OpCode::CPUI_CALLOTHER));
    let skip = data.new_constant(1, u64::from(!vector_taken));
    if data.op_set_input(branch, skip, 1).is_err() {
        return;
    }
    data.get_func_proto_mut().set_dotdotdot(true);
}

/// Fill this pass's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::UnlaceHookSlots) {
    hooks.varargsave_regs = Some(regs);
}

crate::unlace_flag!(
    /// (unlace) Remove a System V x86-64 register save area and mark the function
    /// variadic (option `varargsave`).
    VarargSave,
    "varargsave",
    "System V register save area of variadic functions",
    unset: false,
    shipped: false
);
