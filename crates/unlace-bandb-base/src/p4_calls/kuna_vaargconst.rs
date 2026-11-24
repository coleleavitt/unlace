//! (kuna `vaargconst`) A SysV x86-64 `va_arg` whose offset test is a constant prints as
//! `va_arg(ap, T)`.
//!
//! gcc expands each `va_arg(ap, T)` on a local `va_list` into a test of `gp_offset`
//! (`fp_offset` for a double) against the end of the register save area, a register
//! arm that reads `reg_save_area + offset` and stores the stepped offset back, and a
//! memory arm that reads through `overflow_arg_area` and steps it:
//!
//! ```text
//!   mov 0x60(%rsp),%eax ; cmp $0x2f,%eax ; ja M      ; site: gp_offset > 47 goes to memory
//!   R: mov %eax,%edx ; add $8,%eax ; add 0x70(%rsp),%rdx ; mov %eax,0x60(%rsp) ; mov (%rdx),%rdx
//!   M: mov 0x68(%rsp),%rdx ; lea 8(%rdx),%rax ; mov %rax,0x68(%rsp) ; mov (%rdx),%rdx
//! ```
//!
//! When the `va_list` is a local the function starts itself, `va_start` stores a
//! constant `gp_offset` (8 per named integer argument) and every offset on a path from it
//! is a constant, so dataflow folds each test and the ladder becomes a plain read of an argument
//! register or a stack argument: `history_w(h, ev, fun, ...)` printed fourteen parameters and
//! no `va_arg`. `vaarg` (P4) finds the expansion only while its test survives.
//!
//! Before heritage, in the same raw-p-code walk as `varargsave` (each write resolved to a
//! symbolic value when it happens), this pass tracks the stack pointer, the 4-byte loads of an
//! offset field, the 8-byte loads of a pointer field and their sums. A *site* is a block ending
//! in a CBRANCH that compares an offset field with the save area's limit (47 or 40 for an integer,
//! 175 or 160 for a double, or one more), one of whose successors reads through
//! `reg_save_area + offset` (the field at `L+16` plus the one at `L` or `L+4`) and the other
//! loads `overflow_arg_area` (the field at `L+8`). `L` must be a `va_list` the function
//! initializes: a 4-byte constant `gp_offset` and the two pointer fields stored in one
//! block. Each register-arm read becomes the CALLOTHER `va_arg(&L, class)` (class 1 for the
//! `fp_offset` half), the stores of the stepped offset in that arm go, and the branch is set
//! to the register arm, so the memory arm is unreachable. `vastart` then folds the prologue
//! (it accepts a lone `gp_offset` store while this option is on) and marks the prototype
//! variadic. With the value `builtin` the call prints as `__builtin_va_arg`.

use std::collections::{HashMap, HashSet, VecDeque};

use unlace_base::types::{int4, uintb};
use unlace_num::opcodes::OpCode;

use crate::context::{BlockId, OpId, VarnodeId};
use crate::funcdata::Funcdata;

/// The value of option `vaargconst`: off (the default), on (printed `va_arg`), or on
/// and printed with gcc's builtin name.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum VaArgConst {
    Off,
    On,
    Builtin,
}

impl crate::kuna_optionset::KunaOption for VaArgConst {
    const NAME: &'static str = "vaargconst";
    crate::kuna_option_id!();

    fn unset() -> Self {
        VaArgConst::Off
    }

    fn shipped() -> Self {
        VaArgConst::Off
    }

    fn parse(value: &str) -> unlace_base::error::KunaResult<(Self, String)> {
        let (choice, what) = match value.trim() {
            "off" => (VaArgConst::Off, "off"),
            "on" => (VaArgConst::On, "on, printed va_arg"),
            "builtin" => (VaArgConst::Builtin, "on, printed __builtin_va_arg"),
            other => {
                return Err(unlace_base::error::KunaError::parse(format!(
                    "vaargconst: expected off, on or builtin, got {other:?}"
                )));
            }
        };
        Ok((choice, format!("constant-offset va_arg recovery {what}")))
    }
}

/// Whether option `vaargconst` is on (either spelling).
pub fn enabled(data: &Funcdata) -> bool {
    data.get_arch().kuna_options.get::<VaArgConst>() != VaArgConst::Off
}

type Key = (int4, u64, i32);

/// A symbolic value, relative to the stack pointer at function entry.
#[derive(Clone, Copy, PartialEq, Eq, Hash, Debug)]
enum Val {
    /// The entry stack pointer plus a constant.
    Sp(i64),
    /// The 4-byte field loaded from stack offset `at`, plus `k`.
    Off {
        at: i64,
        k: i64,
    },
    /// The 8-byte field loaded from stack offset `at`, plus `k`.
    Ptr {
        at: i64,
        k: i64,
    },
    /// The pointer field at `ptr` plus the offset field at `off` plus `k`.
    Sum {
        ptr: i64,
        off: i64,
        k: i64,
    },
    Const(u64),
    Other,
}

#[derive(Clone, Default)]
struct State {
    vals: HashMap<Key, Val>,
}

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

impl State {
    fn read(&self, data: &Funcdata, vn: VarnodeId) -> Val {
        let Some(v) = data.vbank().get(vn) else {
            return Val::Other;
        };
        if v.is_constant() {
            return Val::Const(v.get_offset());
        }
        let Some(k) = key(data, vn) else {
            return Val::Other;
        };
        if let Some(&val) = self.vals.get(&k) {
            return val;
        }
        // the low part of a wider register written whole (EAX after RAX = zext(...))
        self.vals
            .iter()
            .find(|(w, _)| w.0 == k.0 && w.1 == k.1 && w.2 > k.2)
            .map(|(_, &val)| match val {
                Val::Const(c) => {
                    Val::Const(c & ((1u64 << (8 * k.2.min(8) as u32 - 1) << 1).wrapping_sub(1)))
                }
                other => other,
            })
            .unwrap_or(Val::Other)
    }

    fn write(&mut self, k: Key, val: Val) {
        self.vals
            .retain(|w, _| !(w.0 == k.0 && w.1 < k.1 + k.2 as u64 && k.1 < w.1 + w.2 as u64));
        self.vals.insert(k, val);
    }
}

fn signed(c: u64, size: int4) -> i64 {
    let bits = 64 - 8 * size.clamp(1, 8) as u32;
    ((c << bits) as i64) >> bits
}

fn add(a: Val, b: Val, size: int4) -> Val {
    match (a, b) {
        (Val::Sp(o), Val::Const(c)) | (Val::Const(c), Val::Sp(o)) => Val::Sp(o + signed(c, size)),
        (Val::Off { at, k }, Val::Const(c)) | (Val::Const(c), Val::Off { at, k }) => Val::Off {
            at,
            k: k + signed(c, size),
        },
        (Val::Ptr { at, k }, Val::Const(c)) | (Val::Const(c), Val::Ptr { at, k }) => Val::Ptr {
            at,
            k: k + signed(c, size),
        },
        (Val::Sum { ptr, off, k }, Val::Const(c)) | (Val::Const(c), Val::Sum { ptr, off, k }) => {
            Val::Sum {
                ptr,
                off,
                k: k + signed(c, size),
            }
        }
        (Val::Ptr { at: p, k: a }, Val::Off { at: o, k: b })
        | (Val::Off { at: o, k: b }, Val::Ptr { at: p, k: a }) => Val::Sum {
            ptr: p,
            off: o,
            k: a + b,
        },
        (Val::Const(x), Val::Const(y)) => Val::Const(x.wrapping_add(y)),
        _ => Val::Other,
    }
}

/// A read through `reg_save_area + offset` (`list`, class, the op, the stack pointer there).
struct Read {
    op: OpId,
    list: i64,
    fp: bool,
    sp: i64,
}

#[derive(Default)]
struct Walk {
    reads: HashMap<BlockId, Vec<Read>>,
    /// Blocks that load an `overflow_arg_area` field (stack offset).
    overflow: HashMap<BlockId, HashSet<i64>>,
    /// Blocks whose ops compare an offset field (stack offset, fp limit?) with a limit.
    tests: HashMap<BlockId, Vec<(i64, bool)>>,
    /// Stores of an offset field derived from its own load: (block, field, op).
    steps: Vec<(BlockId, i64, OpId)>,
    /// Stores per block: (stack offset, size, value).
    stores: HashMap<BlockId, Vec<(i64, int4, Val)>>,
}

const GP_LIMITS: [u64; 4] = [0x27, 0x28, 0x2f, 0x30];
const FP_LIMITS: [u64; 4] = [0x9f, 0xa0, 0xaf, 0xb0];

fn walk_block(data: &Funcdata, block: BlockId, state: &mut State, sp: Key, out: &mut Walk) {
    for id in data.bb_ops(block) {
        let Some(op) = data.obank().get(id) else {
            continue;
        };
        let ins: Vec<Val> = (0..op.num_input())
            .map(|i| op.get_in(i).map_or(Val::Other, |v| state.read(data, v)))
            .collect();
        let cur_sp = match state.vals.get(&sp) {
            Some(Val::Sp(o)) => Some(*o),
            _ => None,
        };
        match op.code() {
            OpCode::CPUI_CALL | OpCode::CPUI_CALLIND | OpCode::CPUI_CALLOTHER => {
                let keep = state.vals.get(&sp).copied();
                state.vals.clear();
                if let Some(Val::Sp(o)) = keep {
                    let o = if op.code() == OpCode::CPUI_CALLOTHER {
                        o
                    } else {
                        o + 8
                    };
                    state.vals.insert(sp, Val::Sp(o));
                }
                if let Some(k) = op.get_out().and_then(|o| key(data, o)) {
                    state.write(k, Val::Other);
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
                    out.stores.entry(block).or_default().push((*at, size, val));
                    if let Val::Off { at: field, .. } = val {
                        if field == *at {
                            out.steps.push((block, *at, id));
                        }
                    }
                }
                continue;
            }
            _ => {}
        }
        for (i, v) in ins.iter().enumerate() {
            let limit = |c: u64| GP_LIMITS.contains(&c) || FP_LIMITS.contains(&c);
            if let Val::Off { at, .. } = v {
                let other = ins.iter().enumerate().find_map(|(j, w)| match w {
                    Val::Const(c) if j != i && limit(*c) => Some(*c),
                    _ => None,
                });
                if let Some(c) = other {
                    out.tests
                        .entry(block)
                        .or_default()
                        .push((*at, FP_LIMITS.contains(&c)));
                }
            }
        }
        let Some(outv) = op.get_out() else { continue };
        let Some(k) = key(data, outv) else { continue };
        let size = k.2;
        let val = match op.code() {
            OpCode::CPUI_COPY | OpCode::CPUI_INT_ZEXT | OpCode::CPUI_INT_SEXT => ins[0],
            OpCode::CPUI_SUBPIECE if ins.get(1) == Some(&Val::Const(0)) => ins[0],
            OpCode::CPUI_INT_ADD => add(ins[0], ins[1], size),
            OpCode::CPUI_INT_SUB => match ins[1] {
                Val::Const(c) => add(ins[0], Val::Const(signed(c, size).wrapping_neg() as u64), 8),
                _ => Val::Other,
            },
            OpCode::CPUI_INT_MULT if ins.get(1) == Some(&Val::Const(1)) => ins[0],
            OpCode::CPUI_LOAD => match ins.get(1) {
                Some(Val::Sp(at)) if size == 4 => Val::Off { at: *at, k: 0 },
                Some(Val::Sp(at)) if size == 8 => Val::Ptr { at: *at, k: 0 },
                Some(Val::Sum { ptr, off, .. }) => {
                    let fp = *off == ptr - 12;
                    if (*off == ptr - 16 || fp) && cur_sp.is_some() {
                        out.reads.entry(block).or_default().push(Read {
                            op: id,
                            list: ptr - 16,
                            fp,
                            sp: cur_sp.unwrap_or(0),
                        });
                    }
                    Val::Other
                }
                Some(Val::Ptr { at, .. }) => {
                    out.overflow.entry(block).or_default().insert(*at);
                    Val::Other
                }
                _ => Val::Other,
            },
            _ => Val::Other,
        };
        state.write(k, val);
    }
}

/// The va_lists `L` the function starts: in one block a 4-byte constant `gp_offset` (a
/// multiple of 8, at most 48), or both offsets in one 8-byte constant, at `L` and stack
/// addresses stored at `L+8` and `L+16`.
fn started(walk: &Walk) -> HashSet<i64> {
    let mut lists = HashSet::new();
    for stores in walk.stores.values() {
        for &(at, size, val) in stores {
            let gp_ok = |c: u64| c % 8 == 0 && c <= 48;
            let fp_ok = |c: u64| (48..=176).contains(&c) && (c - 48) % 16 == 0;
            // clang writes gp_offset and fp_offset as one 8-byte store
            let gp = matches!(val, Val::Const(c) if (size == 4 && gp_ok(c))
                || (size == 8 && gp_ok(c & 0xffff_ffff) && fp_ok(c >> 32)));
            let ptr = |off: i64| {
                stores
                    .iter()
                    .any(|&(a, s, v)| a == at + off && s == 8 && matches!(v, Val::Sp(_)))
            };
            if gp && ptr(8) && ptr(16) {
                lists.insert(at);
            }
        }
    }
    lists
}

struct Site {
    branch: OpId,
    taken: bool,
    reads: Vec<(OpId, i64, bool, i64)>,
    arm: BlockId,
    list: i64,
    fp: bool,
}

/// Rewrite the constant-offset `va_arg` sites (see the module docs). Called from
/// `ActionStart`, before heritage.
pub fn rewrite(data: &mut Funcdata) {
    if !enabled(data) || data.get_heritage_pass() != 0 {
        return;
    }
    let id = data.get_arch().get_description().to_string();
    if !id.starts_with("x86:LE:64") || crate::kuna_fastfailnoreturn::archid_is_windows(&id) {
        return;
    }
    let Some(spv) = data.get_arch().get_register_varnode(b"RSP").ok() else {
        return;
    };
    let Some(sp_space) = spv.space.clone() else {
        return;
    };
    let sp: Key = (sp_space.get_index(), spv.offset, spv.size as i32);
    let n = data.bblocks_get_size();
    if n < 3 {
        return;
    }
    let trace = std::env::var_os("UNLACE_VAC_TRACE").is_some();
    let entry = data.bblocks_get_block(0);
    let mut walk = Walk::default();
    let mut exits: HashMap<BlockId, State> = HashMap::new();
    let mut seen: HashSet<BlockId> = HashSet::new();
    let mut queue = VecDeque::from([entry]);
    seen.insert(entry);
    while let Some(b) = queue.pop_front() {
        let blk = data.bblocks_ref().block(b);
        let preds: Vec<BlockId> = (0..blk.size_in()).map(|i| blk.get_in(i)).collect();
        let mut state = if b == entry {
            let mut s = State::default();
            s.vals.insert(sp, Val::Sp(0));
            s
        } else if preds.len() == 1 && exits.contains_key(&preds[0]) {
            exits[&preds[0]].clone()
        } else {
            let sps: HashSet<Option<Val>> = preds
                .iter()
                .filter_map(|p| exits.get(p))
                .map(|s| s.vals.get(&sp).copied())
                .collect();
            let mut s = State::default();
            if sps.len() == 1 {
                if let Some(Some(v)) = sps.iter().next() {
                    if matches!(v, Val::Sp(_)) {
                        s.vals.insert(sp, *v);
                    }
                }
            }
            s
        };
        walk_block(data, b, &mut state, sp, &mut walk);
        state.vals.retain(|k, _| {
            space_type(data, k.0) != Some(unlace_base::space::spacetype::IPTR_INTERNAL)
        });
        exits.insert(b, state);
        let blk = data.bblocks_ref().block(b);
        for i in 0..blk.size_out() {
            let s = blk.get_out(i);
            if seen.insert(s) {
                queue.push_back(s);
            }
        }
    }
    let lists = started(&walk);
    if trace {
        eprintln!(
            "vaargconst: lists {:?} reads {} tests {} overflow {}",
            lists,
            walk.reads.values().map(|v| v.len()).sum::<usize>(),
            walk.tests.len(),
            walk.overflow.len()
        );
    }
    if lists.is_empty() {
        return;
    }
    let mut sites = Vec::new();
    for (&b, tests) in &walk.tests {
        let blk = data.bblocks_ref().block(b);
        if blk.size_out() != 2 {
            continue;
        }
        let Some(&branch) = data.bb_ops(b).last() else {
            continue;
        };
        if data.obank().get(branch).map(|o| o.code()) != Some(OpCode::CPUI_CBRANCH) {
            continue;
        }
        let outs = [blk.get_out(0), blk.get_out(1)];
        for &(field, fp_limit) in tests {
            let (list, fp) = if lists.contains(&field) {
                (field, false)
            } else if lists.contains(&(field - 4)) {
                (field - 4, true)
            } else {
                continue;
            };
            if fp != fp_limit {
                continue;
            }
            let reg_arm = outs.iter().position(|o| {
                walk.reads
                    .get(o)
                    .is_some_and(|rs| rs.iter().any(|r| r.list == list && r.fp == fp))
                    && data.bblocks_ref().block(*o).size_in() == 1
            });
            let Some(r) = reg_arm else { continue };
            let m = outs[1 - r];
            if !walk
                .overflow
                .get(&m)
                .is_some_and(|s| s.contains(&(list + 8)))
            {
                if trace {
                    eprintln!("vaargconst: site without an overflow arm at list {list:#x}");
                }
                continue;
            }
            let reads = walk.reads[&outs[r]]
                .iter()
                .filter(|x| x.list == list && x.fp == fp)
                .map(|x| (x.op, x.list, x.fp, x.sp))
                .take(1)
                .collect();
            sites.push(Site {
                branch,
                taken: r == 1,
                reads,
                arm: outs[r],
                list,
                fp,
            });
            break;
        }
    }
    if trace {
        eprintln!("vaargconst: {} sites", sites.len());
    }
    if sites.is_empty() {
        return;
    }
    let addr = unlace_base::address::Address::new(sp_space, spv.offset);
    let vaarg = crate::userop::BUILTIN_VAARG as uintb;
    let mut done: HashSet<OpId> = HashSet::new();
    for site in &sites {
        for &(op, list, fp, at_sp) in &site.reads {
            if !done.insert(op) {
                continue;
            }
            let Some(pc) = data.obank().get(op).map(|o| o.get_addr().clone()) else {
                continue;
            };
            let ptr = data.new_op(2, pc);
            data.op_set_opcode_code(ptr, OpCode::CPUI_INT_ADD);
            let rsp = data.new_varnode(spv.size as int4, &addr, None);
            let off = data.new_constant(spv.size as int4, (list - at_sp) as u64);
            if data.op_set_input(ptr, rsp, 0).is_err() || data.op_set_input(ptr, off, 1).is_err() {
                return;
            }
            let Ok(ap) = data.new_unique_out(spv.size as int4, ptr) else {
                return;
            };
            data.op_insert_before(ptr, op);
            let idv = data.new_constant(4, vaarg);
            let class = data.new_constant(4, fp as uintb);
            if data.op_set_all_input(op, &[idv, ap, class]).is_err() {
                return;
            }
            data.op_set_opcode(op, crate::typeop::type_op_for(OpCode::CPUI_CALLOTHER));
        }
        let field = site.list + if site.fp { 4 } else { 0 };
        for &(b, at, store) in &walk.steps {
            if b == site.arm && at == field && done.insert(store) {
                data.op_destroy(store);
            }
        }
        let cond = data.new_constant(1, site.taken as uintb);
        if data.op_set_input(site.branch, cond, 1).is_err() {
            return;
        }
    }
}
