//! (unlace `vaargaapcs`) An AAPCS64 `va_arg` expansion prints as `va_arg(ap, T)`.
//!
//! clang and gcc expand `va_arg(ap, T)` on the AAPCS64 `va_list` (`__stack`, `__gr_top`,
//! `__vr_top`, `__gr_offs`, `__vr_offs`, 32 bytes) into one selection and one read:
//!
//! ```text
//!   ldr  w12, [ap, #24]          ; __gr_offs (a double reads __vr_offs at #28)
//!   tbnz w12, #31, R             ; negative: registers are left
//!   ... stack arm: x10 = __stack; __stack += 8; (x10 is the address)
//!   R:   add w11, w12, #8        ; step the offset, store it back to #24
//!        add x12, x9, w12, sxtw  ; x9 = __gr_top; the register-save address
//!   J:   ldr w10, [x10]          ; the read the two arms join at
//! ```
//!
//! The read `J` loads through a register whose value is `__gr_top + __gr_offs` on the register
//! arm and `__stack` on the stack arm: a join of two addresses, which gimple and LLVM both emit as
//! one load. Before heritage, in the same raw p-code walk as `vaargconst` (each value resolved
//! symbolically, the stack pointer tracked from entry), a load whose predecessors all carry that
//! pair of addresses for one `va_list` L is a site. The load becomes `va_arg(&L, class)` (class 1
//! for the `__vr_*` half), the steps of the offset and of `__stack` in the expansion's blocks go,
//! and the selection branches are set to the register arm, so the stack arm is unreachable. The
//! `va_list` itself is folded by `vastart` (its `find_aapcs`), which prints `va_start(ap, last)`.
//!
//! The walk is path-insensitive at loop heads (it keeps the state of the first predecessor it
//! visits), so a register loop variable first holding a constant hides the test: such a ladder is
//! left as it was. Apple arm64 and Windows keep their own `va_list`.

use std::collections::{HashMap, HashSet, VecDeque};

use unlace_base::address::Address;
use unlace_base::types::{int4, uintb};
use unlace_num::opcodes::OpCode;

use crate::context::{BlockId, OpId, VarnodeId};
use crate::funcdata::Funcdata;

/// The value of option `vaargaapcs`: off (the default) or on.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum VaArgAapcs {
    Off,
    On,
}

impl crate::optionset::UnlaceOption for VaArgAapcs {
    const NAME: &'static str = "vaargaapcs";
    crate::unlace_option_id!();

    fn unset() -> Self {
        VaArgAapcs::Off
    }

    fn shipped() -> Self {
        VaArgAapcs::Off
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        let (choice, what) = match value.trim() {
            "off" => (VaArgAapcs::Off, "off"),
            "on" => (VaArgAapcs::On, "on"),
            other => {
                return Err(unlace_base::error::UnlaceError::parse(format!(
                    "vaargaapcs: expected off or on, got {other:?}"
                )));
            }
        };
        Ok((choice, format!("AAPCS64 va_arg and va_start recovery {what}")))
    }
}

/// Whether option `vaargaapcs` is on.
pub fn enabled(data: &Funcdata) -> bool {
    data.get_arch().unlace_options.get::<VaArgAapcs>() == VaArgAapcs::On
}

/// Whether the function is an AAPCS64 one that the option covers: an AArch64 language that
/// is neither Apple's nor Windows' ABI.
pub fn applies(data: &Funcdata) -> bool {
    enabled(data) && data.get_arch().aapcs64_va_list
}

/// A value of `size` bytes truncated from `c`.
pub fn trunc(c: u64, size: int4) -> u64 {
    if size >= 8 {
        c
    } else {
        c & ((1u64 << (8 * size.max(1) as u32)) - 1)
    }
}

/// The signed value of the low `size` bytes of `c`.
pub fn signed(c: u64, size: int4) -> i64 {
    let bits = 64 - 8 * size.clamp(1, 8) as u32;
    ((c << bits) as i64) >> bits
}

/// The constant `vn` holds, through COPY, AND, OR and XOR of constants (the `mov` and `movk`
/// pair an AArch64 constant is built from).
pub fn fold_const(data: &Funcdata, vn: VarnodeId, depth: u32) -> Option<u64> {
    let v = data.vbank().get(vn)?;
    if v.is_constant() {
        return Some(v.get_offset());
    }
    if depth == 0 {
        return None;
    }
    let size = v.get_size();
    let def = data.obank().get(v.get_def()?)?;
    let input = |i: i32| def.get_in(i).and_then(|x| fold_const(data, x, depth - 1));
    match def.code() {
        OpCode::CPUI_COPY => input(0).map(|c| trunc(c, size)),
        OpCode::CPUI_INT_AND => Some(trunc(input(0)? & input(1)?, size)),
        OpCode::CPUI_INT_OR => Some(trunc(input(0)? | input(1)?, size)),
        OpCode::CPUI_INT_XOR => Some(trunc(input(0)? ^ input(1)?, size)),
        _ => None,
    }
}

/// A symbolic value, relative to the stack pointer at function entry.
#[derive(Clone, Copy, Debug, PartialEq, Eq, Hash)]
enum Val {
    /// The entry stack pointer plus a constant.
    Sp(i64),
    /// The 4-byte field loaded from stack offset `at`, plus `k`.
    Off { at: i64, k: i64 },
    /// The 8-byte field loaded from stack offset `at`, plus `k`.
    Ptr { at: i64, k: i64 },
    /// The pointer field at `ptr` plus the offset field at `off`.
    Sum { ptr: i64, off: i64 },
    Const(u64),
    Other,
}

type Key = (int4, u64, i32);

fn key(data: &Funcdata, vn: VarnodeId) -> Option<Key> {
    let v = data.vbank().get(vn)?;
    Some((
        v.get_addr().get_space()?.get_index(),
        v.get_offset(),
        v.get_size(),
    ))
}

fn space_type(data: &Funcdata, idx: int4) -> Option<unlace_base::space::spacetype> {
    data.get_arch()
        .manage()
        .get_space(idx)
        .map(|s| s.get_type())
}

fn add(a: Val, b: Val, size: int4) -> Val {
    match (a, b) {
        (Val::Sp(o), Val::Const(c)) | (Val::Const(c), Val::Sp(o)) => {
            Val::Sp(o.wrapping_add(signed(c, size)))
        }
        (Val::Off { at, k }, Val::Const(c)) | (Val::Const(c), Val::Off { at, k }) => Val::Off {
            at,
            k: k.wrapping_add(signed(c, size)),
        },
        (Val::Ptr { at, k }, Val::Const(c)) | (Val::Const(c), Val::Ptr { at, k }) => Val::Ptr {
            at,
            k: k.wrapping_add(signed(c, size)),
        },
        (Val::Ptr { at: p, k: 0 }, Val::Off { at: o, k: 0 })
        | (Val::Off { at: o, k: 0 }, Val::Ptr { at: p, k: 0 }) => Val::Sum { ptr: p, off: o },
        (Val::Const(x), Val::Const(y)) => Val::Const(trunc(x.wrapping_add(y), size)),
        _ => Val::Other,
    }
}

#[derive(Clone, Default)]
struct State {
    vals: HashMap<Key, Val>,
}

impl State {
    fn read(&self, data: &Funcdata, vn: VarnodeId) -> Val {
        let Some(v) = data.vbank().get(vn) else {
            return Val::Other;
        };
        if v.is_constant() {
            return Val::Const(v.get_offset());
        }
        key(data, vn)
            .and_then(|k| self.vals.get(&k).copied())
            .unwrap_or(Val::Other)
    }

    fn write(&mut self, k: Key, val: Val) {
        self.vals
            .retain(|w, _| !(w.0 == k.0 && w.1 < k.1 + k.2 as u64 && k.1 < w.1 + w.2 as u64));
        self.vals.insert(k, val);
    }
}

#[derive(Default)]
struct Walk {
    /// Stores to a stack offset: (block, op, offset, size, value).
    stores: Vec<(BlockId, OpId, i64, int4, Val)>,
    /// Loads through a register: (block, op, address register, stack pointer there).
    loads: Vec<(BlockId, OpId, Key, Option<i64>)>,
    /// The offset fields an op of the block reads.
    fields: HashMap<BlockId, HashSet<i64>>,
}

fn walk_block(data: &Funcdata, block: BlockId, st: &mut State, sp: Key, out: &mut Walk) {
    for id in data.bb_ops(block) {
        let Some(op) = data.obank().get(id) else {
            continue;
        };
        let ins: Vec<Val> = (0..op.num_input())
            .map(|i| op.get_in(i).map_or(Val::Other, |v| st.read(data, v)))
            .collect();
        for v in &ins {
            if let Val::Off { at, .. } = v {
                out.fields.entry(block).or_default().insert(*at);
            }
        }
        let cur_sp = match st.vals.get(&sp) {
            Some(Val::Sp(o)) => Some(*o),
            _ => None,
        };
        match op.code() {
            OpCode::CPUI_CALL | OpCode::CPUI_CALLIND | OpCode::CPUI_CALLOTHER => {
                let keep = st.vals.get(&sp).copied();
                st.vals.clear();
                if let Some(v @ Val::Sp(_)) = keep {
                    st.vals.insert(sp, v);
                }
                if let Some(k) = op.get_out().and_then(|o| key(data, o)) {
                    st.write(k, Val::Other);
                }
                continue;
            }
            OpCode::CPUI_STORE => {
                if let (Some(Val::Sp(at)), Some(&val), Some(size)) = (
                    ins.get(1),
                    ins.get(2),
                    op.get_in(2)
                        .and_then(|v| data.vbank().get(v))
                        .map(|v| v.get_size()),
                ) {
                    out.stores.push((block, id, *at, size, val));
                }
                continue;
            }
            OpCode::CPUI_LOAD => {
                if let Some(ak) = op.get_in(1).and_then(|v| key(data, v)) {
                    out.loads.push((block, id, ak, cur_sp));
                }
            }
            _ => {}
        }
        let Some(outv) = op.get_out() else { continue };
        let Some(k) = key(data, outv) else { continue };
        let size = k.2;
        let val = match op.code() {
            OpCode::CPUI_COPY | OpCode::CPUI_INT_ZEXT | OpCode::CPUI_INT_SEXT => ins[0],
            OpCode::CPUI_SUBPIECE => match (ins[0], ins.get(1)) {
                (Val::Const(c), Some(Val::Const(s))) => Val::Const(trunc(c.checked_shr((8 * s) as u32).unwrap_or(0), size)),
                (v, Some(Val::Const(0))) => v,
                _ => Val::Other,
            },
            OpCode::CPUI_INT_ADD => add(ins[0], ins[1], size),
            OpCode::CPUI_INT_SUB => match ins[1] {
                Val::Const(c) => add(ins[0], Val::Const(signed(c, size).wrapping_neg() as u64), size),
                _ => Val::Other,
            },
            OpCode::CPUI_INT_AND | OpCode::CPUI_INT_OR | OpCode::CPUI_INT_XOR => {
                match (ins[0], ins.get(1)) {
                    (Val::Const(a), Some(Val::Const(b))) => Val::Const(trunc(
                        match op.code() {
                            OpCode::CPUI_INT_AND => a & b,
                            OpCode::CPUI_INT_OR => a | b,
                            _ => a ^ b,
                        },
                        size,
                    )),
                    _ => Val::Other,
                }
            }
            OpCode::CPUI_LOAD => match ins.get(1) {
                Some(Val::Sp(at)) if size == 4 => Val::Off { at: *at, k: 0 },
                Some(Val::Sp(at)) if size == 8 => Val::Ptr { at: *at, k: 0 },
                _ => Val::Other,
            },
            _ => Val::Other,
        };
        st.write(k, val);
    }
}

/// The blocks reachable from `starts` (forward along successors, or backward along
/// predecessors), not entering `avoid`.
fn reach(data: &Funcdata, starts: &[BlockId], forward: bool, avoid: Option<BlockId>) -> HashSet<BlockId> {
    let mut seen: HashSet<BlockId> = starts.iter().copied().filter(|b| Some(*b) != avoid).collect();
    let mut queue: VecDeque<BlockId> = seen.iter().copied().collect();
    while let Some(b) = queue.pop_front() {
        let blk = data.bblocks_ref().block(b);
        let next: Vec<BlockId> = if forward {
            (0..blk.size_out()).map(|i| blk.get_out(i)).collect()
        } else {
            (0..blk.size_in()).map(|i| blk.get_in(i)).collect()
        };
        for n in next {
            if Some(n) != avoid && seen.insert(n) {
                queue.push_back(n);
            }
        }
    }
    seen
}

struct Site {
    block: BlockId,
    op: OpId,
    list: i64,
    class: uintb,
    field: i64,
    at_sp: i64,
    /// The blocks the expansion occupies: between a field test and the read.
    ladder: HashSet<BlockId>,
    /// The predecessors of the read that take the register arm.
    reg_arm: HashSet<BlockId>,
}

/// Rewrite the AAPCS64 `va_arg` joins (see the module docs). Called from `ActionStart`,
/// before heritage.
pub fn rewrite(data: &mut Funcdata) {
    if !applies(data) || data.get_heritage_pass() != 0 {
        return;
    }
    let Some(spv) = data
        .get_arch()
        .manage()
        .get_stack_space()
        .and_then(|s| s.get_spacebase(0).ok())
    else {
        return;
    };
    if spv.size != 8 {
        return;
    }
    let Some(sp_space) = spv.space.clone() else {
        return;
    };
    let sp: Key = (sp_space.get_index(), spv.offset, spv.size as i32);
    if data.bblocks_get_size() < 3 {
        return;
    }
    let trace = std::env::var_os("UNLACE_VAAPCS_TRACE").is_some();
    let entry = data.bblocks_get_block(0);
    let mut walk = Walk::default();
    let mut exits: HashMap<BlockId, (usize, State)> = HashMap::new();
    let mut seen: HashSet<BlockId> = HashSet::from([entry]);
    let mut queue = VecDeque::from([entry]);
    while let Some(b) = queue.pop_front() {
        let blk = data.bblocks_ref().block(b);
        let preds: Vec<BlockId> = (0..blk.size_in()).map(|i| blk.get_in(i)).collect();
        let mut state = if b == entry {
            let mut s = State::default();
            s.vals.insert(sp, Val::Sp(0));
            s
        } else {
            let mut known: Vec<&(usize, State)> = preds.iter().filter_map(|p| exits.get(p)).collect();
            known.sort_by_key(|e| e.0);
            match known.first() {
                Some(first) => {
                    let mut s = first.1.clone();
                    let sps: HashSet<Option<Val>> =
                        known.iter().map(|e| e.1.vals.get(&sp).copied()).collect();
                    if sps.len() != 1 {
                        s.vals.remove(&sp);
                    }
                    s
                }
                None => State::default(),
            }
        };
        walk_block(data, b, &mut state, sp, &mut walk);
        state
            .vals
            .retain(|k, _| space_type(data, k.0) != Some(unlace_base::space::spacetype::IPTR_INTERNAL));
        let ord = exits.len();
        exits.insert(b, (ord, state));
        let blk = data.bblocks_ref().block(b);
        for i in 0..blk.size_out() {
            let s = blk.get_out(i);
            if seen.insert(s) {
                queue.push_back(s);
            }
        }
    }

    let mut sites: Vec<Site> = Vec::new();
    for &(jb, jop, ak, at_sp) in &walk.loads {
        let Some(at_sp) = at_sp else { continue };
        let jblk = data.bblocks_ref().block(jb);
        if jblk.size_in() < 2 {
            continue;
        }
        let preds: Vec<BlockId> = (0..jblk.size_in()).map(|i| jblk.get_in(i)).collect();
        let vals: Option<Vec<(BlockId, Val)>> = preds
            .iter()
            .map(|p| exits.get(p).and_then(|e| e.1.vals.get(&ak).map(|v| (*p, *v))))
            .collect();
        let Some(vals) = vals else { continue };
        let Some((ptr, off)) = vals.iter().find_map(|(_, v)| match v {
            Val::Sum { ptr, off } => Some((*ptr, *off)),
            _ => None,
        }) else {
            continue;
        };
        let (list, class, field) = if off == ptr + 16 {
            (ptr - 8, 0, ptr + 16)
        } else if off == ptr + 12 {
            (ptr - 16, 1, ptr + 12)
        } else {
            continue;
        };
        let sum = Val::Sum { ptr, off };
        let stack = Val::Ptr { at: list, k: 0 };
        if !vals.iter().all(|(_, v)| *v == sum || *v == stack)
            || !vals.iter().any(|(_, v)| *v == stack)
        {
            continue;
        }
        let reg_arm: HashSet<BlockId> = vals
            .iter()
            .filter(|(_, v)| *v == sum)
            .map(|(p, _)| *p)
            .collect();
        let fblocks: HashSet<BlockId> = walk
            .fields
            .iter()
            .filter(|(_, f)| f.contains(&field))
            .map(|(b, _)| *b)
            .collect();
        let back = reach(data, &[jb], false, None);
        let fwd = reach(data, &fblocks.iter().copied().collect::<Vec<_>>(), true, None);
        let ladder: HashSet<BlockId> = back.intersection(&fwd).copied().collect();
        if !reg_arm.iter().any(|p| fblocks.contains(p)) {
            if trace {
                eprintln!("vaargaapcs: join {jb:?} list {list:#x} has no test of its field");
            }
            continue;
        }
        if trace {
            eprintln!(
                "vaargaapcs: site join {jb:?} list {list:#x} class {class} ladder {}",
                ladder.len()
            );
        }
        sites.push(Site {
            block: jb,
            op: jop,
            list,
            class,
            field,
            at_sp,
            ladder,
            reg_arm,
        });
    }
    if sites.is_empty() {
        return;
    }

    let addr = Address::new(sp_space, spv.offset);
    let vaarg = crate::userop::BUILTIN_VAARG as uintb;
    let mut done: HashSet<OpId> = HashSet::new();
    for site in &sites {
        if !done.insert(site.op) {
            continue;
        }
        let Some(pc) = data.obank().get(site.op).map(|o| o.get_addr().clone()) else {
            continue;
        };
        let ptr = data.new_op(2, pc);
        data.op_set_opcode_code(ptr, OpCode::CPUI_INT_ADD);
        let rsp = data.new_varnode(spv.size as int4, &addr, None);
        let off = data.new_constant(spv.size as int4, (site.list - site.at_sp) as u64);
        if data.op_set_input(ptr, rsp, 0).is_err() || data.op_set_input(ptr, off, 1).is_err() {
            return;
        }
        let Ok(ap) = data.new_unique_out(spv.size as int4, ptr) else {
            return;
        };
        data.op_insert_before(ptr, site.op);
        let idv = data.new_constant(4, vaarg);
        let class = data.new_constant(4, site.class);
        if data.op_set_all_input(site.op, &[idv, ap, class]).is_err() {
            return;
        }
        data.op_set_opcode(site.op, crate::typeop::type_op_for(OpCode::CPUI_CALLOTHER));
        for &(b, store, at, _, _) in &walk.stores {
            if site.ladder.contains(&b)
                && (at == site.list || at == site.field)
                && done.insert(store)
            {
                data.op_destroy(store);
            }
        }
        let fblocks: HashSet<BlockId> = walk
            .fields
            .iter()
            .filter(|(_, f)| f.contains(&site.field))
            .map(|(b, _)| *b)
            .collect();
        for &c in &site.ladder {
            if c == site.block || !fblocks.contains(&c) {
                continue;
            }
            let blk = data.bblocks_ref().block(c);
            if blk.size_out() != 2 {
                continue;
            }
            let outs = [blk.get_out(0), blk.get_out(1)];
            let Some(&branch) = data.bb_ops(c).last() else {
                continue;
            };
            if data.obank().get(branch).map(|o| o.code()) != Some(OpCode::CPUI_CBRANCH) {
                continue;
            }
            let hit: Vec<bool> = outs
                .iter()
                .map(|&s| {
                    reach(data, &[s], true, Some(site.block))
                        .iter()
                        .any(|b| site.reg_arm.contains(b))
                })
                .collect();
            if hit[0] == hit[1] {
                continue;
            }
            let cond = data.new_constant(1, hit[1] as uintb);
            if data.op_set_input(branch, cond, 1).is_err() {
                return;
            }
        }
    }
}
