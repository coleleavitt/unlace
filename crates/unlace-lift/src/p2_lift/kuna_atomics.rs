//! (kuna `atomics`) One locked x86 instruction, one AArch64 LSE atomic or one
//! RISC-V AMO becomes an atomic builtin call while it is lifted.
//!
//! SLEIGH lifts `lock xadd [rdi], eax` as `LOCK(); old = *rdi; *rdi = old +
//! eax; eax = old; UNLOCK();` and `ldaddal w1, w0, [x0]` as the same load and
//! store with no marker at all. The instruction's p-code is evaluated
//! symbolically over every path through its internal branches, with `Old` for
//! the value the location holds when the instruction starts, and rewritten in
//! place into `__sync_*` builtins (`docs/spec/02-lift-and-flow.md`).

use std::collections::BTreeMap;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{AddrSpace, spacetype};
use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

use crate::action::{Action, ActionBase, ActionContext, ActionGroupList, ApplyResult};
use crate::context::{BlockId, OpId, VarnodeId};
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata::Funcdata;
use crate::kuna_atomicops::{AtomicUserops, Atomics, LlscFold};
use crate::userop::{
    BUILTIN_ATOMIC_COMPARE_SWAP, BUILTIN_ATOMIC_EXCHANGE, BUILTIN_ATOMIC_FETCH_ADD,
    BUILTIN_ATOMIC_FETCH_AND, BUILTIN_ATOMIC_FETCH_OR, BUILTIN_ATOMIC_FETCH_SUB,
    BUILTIN_ATOMIC_FETCH_XOR,
};
use crate::userop::{atomic_builtin_generic, atomic_builtin_name, msvc_atomic_builtin};

const MAX_OPS: usize = 64;
const MAX_PATHS: usize = 4;
const MAX_STEPS: usize = 128;

#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord)]
struct Storage {
    space: i32,
    offset: u64,
    size: i32,
}

impl Storage {
    fn overlaps(self, other: Storage) -> bool {
        self.space == other.space
            && self.offset < other.offset.saturating_add(other.size as u64)
            && other.offset < self.offset.saturating_add(self.size as u64)
    }
}

#[derive(Clone, Debug, PartialEq, Eq)]
enum Expr {
    Start(Storage),
    Const(u64, i32),
    Old,
    Op(OpCode, i32, Vec<Expr>),
}

fn mask(size: i32) -> u64 {
    if size >= 8 {
        u64::MAX
    } else {
        (1u64 << (8 * size)) - 1
    }
}

impl Expr {
    fn has_old(&self) -> bool {
        match self {
            Expr::Old => true,
            Expr::Op(_, _, args) => args.iter().any(Expr::has_old),
            _ => false,
        }
    }

    fn size(&self, width: i32) -> i32 {
        match self {
            Expr::Start(s) => s.size,
            Expr::Const(_, size) | Expr::Op(_, size, _) => *size,
            Expr::Old => width,
        }
    }
}

/// How the instruction reaches memory: LOADs and a STORE through one pointer
/// storage, or (x86 absolute and RIP-relative operands) the RAM varnode itself.
#[derive(Clone, Copy, PartialEq, Eq)]
enum Access {
    Pointer(Storage),
    Direct(Storage),
}

/// Whether a read of the location runs before or after the write.
#[derive(Clone, Copy, PartialEq, Eq)]
enum Read {
    Before,
    After,
}

/// A read of the location: a LOAD (`slot` -1) or an input slot of a direct op.
type Site = (usize, int4);

struct Eval<'a> {
    fd: &'a Funcdata,
    ops: &'a [OpId],
    userops: &'a AtomicUserops,
    width: i32,
    access: Access,
    first_load: usize,
    store: usize,
    old_home: Option<Storage>,
    value_home: Option<Storage>,
}

#[derive(Clone)]
struct Path {
    pc: usize,
    state: BTreeMap<Storage, Expr>,
    conds: Vec<(Expr, bool)>,
    stored: Option<Expr>,
    old_writes: Vec<Storage>,
    store_state: Option<BTreeMap<Storage, Expr>>,
}

fn storage(fd: &Funcdata, vn: VarnodeId) -> Option<Storage> {
    let v = fd.vbank().get(vn)?;
    Some(Storage {
        space: v.get_space().get_index(),
        offset: v.get_offset(),
        size: v.get_size(),
    })
}

fn space(fd: &Funcdata, index: i32) -> Option<Rc<AddrSpace>> {
    fd.get_arch().manage().get_space(index).cloned()
}

fn is_constant(fd: &Funcdata, vn: VarnodeId) -> Option<(u64, i32)> {
    let v = fd.vbank().get(vn)?;
    v.is_constant().then(|| (v.get_offset(), v.get_size()))
}

impl Eval<'_> {
    fn op(&self, index: usize) -> Option<&crate::op::PcodeOp> {
        self.fd.obank().get(*self.ops.get(index)?)
    }

    fn read(&self, state: &BTreeMap<Storage, Expr>, vn: VarnodeId) -> Option<Expr> {
        if let Some((value, size)) = is_constant(self.fd, vn) {
            return Some(Expr::Const(value & mask(size), size));
        }
        let s = storage(self.fd, vn)?;
        if let Some(e) = state.get(&s) {
            return Some(e.clone());
        }
        let mut overlapping = state.iter().filter(|(k, _)| k.overlaps(s));
        let Some((k, e)) = overlapping.next() else {
            return Some(Expr::Start(s));
        };
        if overlapping.next().is_some()
            || s.offset < k.offset
            || s.offset + s.size as u64 > k.offset + k.size as u64
        {
            return None;
        }
        let low = s.offset - k.offset;
        let big = space(self.fd, s.space).is_some_and(|sp| sp.is_big_endian());
        let shift = if big {
            (k.size - s.size) as u64 - low
        } else {
            low
        };
        Some(self.subpiece(e.clone(), shift, s.size))
    }

    fn write(state: &mut BTreeMap<Storage, Expr>, s: Storage, e: Expr) {
        state.retain(|k, _| !k.overlaps(s));
        state.insert(s, e);
    }

    fn subpiece(&self, a: Expr, k: u64, size: i32) -> Expr {
        if k == 0 && a.size(self.width) == size {
            return a;
        }
        match a {
            Expr::Const(v, _) => Expr::Const((v >> (8 * k.min(7))) & mask(size), size),
            Expr::Start(s) if (k as i64) + i64::from(size) <= i64::from(s.size) => {
                let big = space(self.fd, s.space).is_some_and(|sp| sp.is_big_endian());
                let shift = if big { (s.size - size) as u64 - k } else { k };
                Expr::Start(Storage {
                    offset: s.offset + shift,
                    size,
                    ..s
                })
            }
            Expr::Op(code @ (OpCode::CPUI_INT_ZEXT | OpCode::CPUI_INT_SEXT), _, ref args)
                if k == 0 =>
            {
                let inner = args[0].size(self.width);
                if inner == size {
                    args[0].clone()
                } else if inner > size {
                    self.subpiece(args[0].clone(), 0, size)
                } else {
                    Expr::Op(code, size, vec![args[0].clone()])
                }
            }
            Expr::Op(
                code @ (OpCode::CPUI_INT_ADD
                | OpCode::CPUI_INT_SUB
                | OpCode::CPUI_INT_AND
                | OpCode::CPUI_INT_OR
                | OpCode::CPUI_INT_XOR
                | OpCode::CPUI_INT_MULT),
                _,
                args,
            ) if k == 0 => {
                let args = args
                    .into_iter()
                    .map(|e| self.subpiece(e, 0, size))
                    .collect();
                Expr::Op(code, size, args)
            }
            other => Expr::Op(OpCode::CPUI_SUBPIECE, size, vec![other, Expr::Const(k, 4)]),
        }
    }

    fn build(&self, code: OpCode, size: i32, mut args: Vec<Expr>) -> Expr {
        if size <= 8 {
            if let Some(v) = fold(code, &args) {
                return Expr::Const(v & mask(size), size);
            }
        }
        match code {
            OpCode::CPUI_COPY => args.swap_remove(0),
            OpCode::CPUI_INT_ADD
            | OpCode::CPUI_INT_SUB
            | OpCode::CPUI_INT_OR
            | OpCode::CPUI_INT_XOR
                if matches!(args.get(1), Some(Expr::Const(0, _)))
                    && args[0].size(self.width) == size =>
            {
                args.swap_remove(0)
            }
            OpCode::CPUI_SUBPIECE => match args.get(1) {
                Some(Expr::Const(k, _)) => {
                    let k = *k;
                    self.subpiece(args.swap_remove(0), k, size)
                }
                _ => Expr::Op(code, size, args),
            },
            OpCode::CPUI_INT_ZEXT | OpCode::CPUI_INT_SEXT if args[0].size(self.width) == size => {
                args.swap_remove(0)
            }
            _ => Expr::Op(code, size, args),
        }
    }

    /// Classify a read of the location at `site` on `path`, which must agree
    /// across paths, and check that the storage the rewrite reads instead
    /// still holds the value there.
    fn note_read(&self, path: &Path, site: Site, reads: &mut BTreeMap<Site, Read>) -> Option<Expr> {
        let (kind, value, home) = match &path.stored {
            None => (Read::Before, Expr::Old, self.old_home),
            Some(v) => (Read::After, v.clone(), self.value_home),
        };
        let first = matches!(self.access, Access::Pointer(_)) && site.0 == self.first_load;
        if !first
            && matches!(self.access, Access::Pointer(_))
            && path.state.get(&home?) != Some(&value)
        {
            return None;
        }
        (*reads.entry(site).or_insert(kind) == kind).then_some(value)
    }

    fn generic(
        &self,
        path: &mut Path,
        index: usize,
        reads: &mut BTreeMap<Site, Read>,
    ) -> Option<()> {
        let op = self.op(index)?;
        let out = op.get_out()?;
        let mut args = Vec::with_capacity(op.num_input() as usize);
        for slot in 0..op.num_input() {
            let vn = op.get_in(slot)?;
            let value = match self.access {
                Access::Direct(loc) if storage(self.fd, vn)? == loc => {
                    self.note_read(path, (index, slot), reads)?
                }
                _ => self.read(&path.state, vn)?,
            };
            args.push(value);
        }
        let size = self.fd.vbank().get(out)?.get_size();
        let value = self.build(op.code(), size, args);
        let out = storage(self.fd, out)?;
        if let Access::Direct(loc) = self.access {
            if out == loc {
                if index != self.store || path.stored.is_some() {
                    return None;
                }
                path.store_state = Some(path.state.clone());
                path.stored = Some(value.clone());
            } else if out.overlaps(loc) {
                return None;
            }
        }
        if value == Expr::Old {
            path.old_writes.push(out);
        }
        Self::write(&mut path.state, out, value);
        Some(())
    }

    fn load(&self, path: &mut Path, index: usize, reads: &mut BTreeMap<Site, Read>) -> Option<()> {
        let Access::Pointer(pointer) = self.access else {
            return None;
        };
        let op = self.op(index)?;
        let out = storage(self.fd, op.get_out()?)?;
        if storage(self.fd, op.get_in(1)?)? != pointer || out.size != self.width {
            return None;
        }
        let value = self.note_read(path, (index, -1), reads)?;
        Self::write(&mut path.state, out, value);
        Some(())
    }

    fn store(&self, path: &mut Path, index: usize) -> Option<()> {
        if index != self.store || path.stored.is_some() {
            return None;
        }
        let value = self.read(&path.state, self.op(index)?.get_in(2)?)?;
        if value.size(self.width) != self.width {
            return None;
        }
        path.store_state = Some(path.state.clone());
        path.stored = Some(value);
        Some(())
    }

    /// Run every path through the instruction, recording each read of the
    /// location in `reads`.
    fn run(&self, reads: &mut BTreeMap<Site, Read>) -> Option<Vec<Path>> {
        let mut state = BTreeMap::new();
        if let Access::Direct(loc) = self.access {
            state.insert(loc, Expr::Old);
        }
        let mut pending = vec![Path {
            pc: 0,
            state,
            conds: Vec::new(),
            stored: None,
            old_writes: Vec::new(),
            store_state: None,
        }];
        let mut ends = Vec::new();
        let mut steps = 0;
        while let Some(mut path) = pending.pop() {
            while path.pc < self.ops.len() {
                steps += 1;
                if steps > MAX_STEPS {
                    return None;
                }
                let index = path.pc;
                path.pc += 1;
                let op = self.op(index)?;
                match op.code() {
                    OpCode::CPUI_LOAD => self.load(&mut path, index, reads)?,
                    OpCode::CPUI_STORE => self.store(&mut path, index)?,
                    OpCode::CPUI_CALLOTHER => {
                        if op.get_out().is_some() {
                            return None;
                        }
                        let id = is_constant(self.fd, op.get_in(0)?)?.0 as u32;
                        let envelope = self.userops.lock.is_some_and(|(l, u)| id == l || id == u);
                        if !envelope && !self.userops.ordering.contains(&id) {
                            return None;
                        }
                    }
                    OpCode::CPUI_BRANCH | OpCode::CPUI_CBRANCH => {
                        let (offset, _) = is_constant(self.fd, op.get_in(0)?)?;
                        let target = (index as i64).checked_add(offset as i32 as i64)?;
                        if target <= index as i64 || target > self.ops.len() as i64 {
                            return None;
                        }
                        if op.code() == OpCode::CPUI_BRANCH {
                            path.pc = target as usize;
                            continue;
                        }
                        if pending.len() + ends.len() + 2 > MAX_PATHS {
                            return None;
                        }
                        let cond = self.read(&path.state, op.get_in(1)?)?;
                        let mut taken = path.clone();
                        taken.pc = target as usize;
                        taken.conds.push((cond.clone(), true));
                        pending.push(taken);
                        path.conds.push((cond, false));
                    }
                    OpCode::CPUI_CALL
                    | OpCode::CPUI_CALLIND
                    | OpCode::CPUI_BRANCHIND
                    | OpCode::CPUI_RETURN
                    | OpCode::CPUI_MULTIEQUAL
                    | OpCode::CPUI_INDIRECT => return None,
                    _ => self.generic(&mut path, index, reads)?,
                }
            }
            ends.push(path);
        }
        Some(ends)
    }
}

/// `v`, a value of `size` bytes, sign-extended.
fn sext(v: u64, size: i32) -> i64 {
    let shift = 64 - 8 * size.clamp(1, 8) as u32;
    ((v << shift) as i64) >> shift
}

/// The value of `code` over constant `args` of at most 8 bytes, for the
/// operations a monitor's constant result and the status test after it (an
/// ARM `cmp` and its flags) flow through. The caller masks it to the output.
fn fold(code: OpCode, args: &[Expr]) -> Option<u64> {
    let mut values = Vec::with_capacity(args.len());
    let mut size = 0;
    for a in args {
        let Expr::Const(v, s) = a else { return None };
        if *s > 8 {
            return None;
        }
        if values.is_empty() {
            size = *s;
        }
        values.push(*v);
    }
    let a = *values.first()?;
    let b = values.get(1).copied();
    let wide = |b: u64| {
        let sum = sext(a.wrapping_add(b) & mask(size), size);
        let diff = sext(a.wrapping_sub(b) & mask(size), size);
        (sext(a, size), sext(b, size), sum, diff)
    };
    Some(match code {
        OpCode::CPUI_COPY | OpCode::CPUI_INT_ZEXT => a,
        OpCode::CPUI_INT_SEXT => sext(a, size) as u64,
        OpCode::CPUI_BOOL_NEGATE => u64::from(a == 0),
        OpCode::CPUI_INT_NEGATE => !a,
        OpCode::CPUI_INT_2COMP => a.wrapping_neg(),
        OpCode::CPUI_INT_EQUAL => u64::from(a == b?),
        OpCode::CPUI_INT_NOTEQUAL => u64::from(a != b?),
        OpCode::CPUI_INT_LESS => u64::from(a < b?),
        OpCode::CPUI_INT_LESSEQUAL => u64::from(a <= b?),
        OpCode::CPUI_INT_SLESS => u64::from(sext(a, size) < sext(b?, size)),
        OpCode::CPUI_INT_SLESSEQUAL => u64::from(sext(a, size) <= sext(b?, size)),
        OpCode::CPUI_INT_ADD => a.wrapping_add(b?),
        OpCode::CPUI_INT_SUB => a.wrapping_sub(b?),
        OpCode::CPUI_INT_MULT => a.wrapping_mul(b?),
        OpCode::CPUI_INT_CARRY => u64::from((a.wrapping_add(b?) & mask(size)) < a),
        OpCode::CPUI_INT_SCARRY => {
            let (x, y, sum, _) = wide(b?);
            u64::from((x < 0) == (y < 0) && (sum < 0) != (x < 0))
        }
        OpCode::CPUI_INT_SBORROW => {
            let (x, y, _, diff) = wide(b?);
            u64::from((x < 0) != (y < 0) && (diff < 0) != (x < 0))
        }
        OpCode::CPUI_INT_LEFT => a.checked_shl(u32::try_from(b?).ok()?).unwrap_or(0),
        OpCode::CPUI_INT_RIGHT => a.checked_shr(u32::try_from(b?).ok()?).unwrap_or(0),
        OpCode::CPUI_BOOL_AND | OpCode::CPUI_INT_AND => a & b?,
        OpCode::CPUI_BOOL_OR | OpCode::CPUI_INT_OR => a | b?,
        OpCode::CPUI_BOOL_XOR | OpCode::CPUI_INT_XOR => a ^ b?,
        _ => return None,
    })
}

/// `Old == E` for a branch condition `cond` that went `taken`.
fn equality(cond: &Expr, taken: bool) -> Option<Expr> {
    equality_of(cond, taken, &Expr::Old)
}

/// `target == E` for a branch condition `cond` that went `taken`, with `E`
/// independent of `Old`. A flag tested against 1 or 0 (`if (ZF == 1)`) is
/// the comparison that set it.
fn equality_of(cond: &Expr, taken: bool, target: &Expr) -> Option<Expr> {
    let (code, args) = match cond {
        Expr::Op(OpCode::CPUI_BOOL_NEGATE, _, args) => {
            return equality_of(&args[0], !taken, target);
        }
        Expr::Op(code @ (OpCode::CPUI_INT_EQUAL | OpCode::CPUI_INT_NOTEQUAL), _, args) => {
            (*code, args)
        }
        _ => return None,
    };
    if let (
        flag @ Expr::Op(
            OpCode::CPUI_INT_EQUAL | OpCode::CPUI_INT_NOTEQUAL | OpCode::CPUI_BOOL_NEGATE,
            1,
            _,
        ),
        Expr::Const(c @ (0 | 1), 1),
    ) = (&args[0], &args[1])
    {
        let same = (code == OpCode::CPUI_INT_EQUAL) == (*c == 1);
        return equality_of(flag, taken == same, target);
    }
    if taken != (code == OpCode::CPUI_INT_EQUAL) {
        return None;
    }
    let (mut a, mut b) = (&args[0], &args[1]);
    if let (Expr::Op(OpCode::CPUI_INT_SUB, _, diff), Expr::Const(0, _)) = (a, b) {
        (a, b) = (&diff[0], &diff[1]);
    }
    if a == target && !b.has_old() {
        Some(b.clone())
    } else if b == target && !a.has_old() {
        Some(a.clone())
    } else {
        None
    }
}

fn add_terms(e: &Expr, out: &mut Vec<Expr>) {
    match e {
        Expr::Op(OpCode::CPUI_INT_ADD, _, args) => args.iter().for_each(|a| add_terms(a, out)),
        other => out.push(other.clone()),
    }
}

/// The builtin and operand of a stored value `v` of `Old`.
fn update(v: &Expr, width: i32) -> Option<(u32, Expr)> {
    if !v.has_old() {
        return Some((BUILTIN_ATOMIC_EXCHANGE, v.clone()));
    }
    let free = |e: &Expr| !e.has_old();
    let (builtin, operand) = match v {
        Expr::Op(OpCode::CPUI_INT_ADD, _, _) => {
            let mut terms = Vec::new();
            add_terms(v, &mut terms);
            let at = terms.iter().position(|t| *t == Expr::Old)?;
            terms.remove(at);
            if terms.is_empty() || !terms.iter().all(free) {
                return None;
            }
            let operand = terms
                .into_iter()
                .reduce(|a, b| Expr::Op(OpCode::CPUI_INT_ADD, width, vec![a, b]))?;
            (BUILTIN_ATOMIC_FETCH_ADD, operand)
        }
        Expr::Op(OpCode::CPUI_INT_SUB, _, args) if args[0] == Expr::Old && free(&args[1]) => {
            (BUILTIN_ATOMIC_FETCH_SUB, args[1].clone())
        }
        Expr::Op(
            code @ (OpCode::CPUI_INT_AND | OpCode::CPUI_INT_OR | OpCode::CPUI_INT_XOR),
            _,
            args,
        ) => {
            let other = match (&args[0], &args[1]) {
                (Expr::Old, e) | (e, Expr::Old) if free(e) => e.clone(),
                _ => return None,
            };
            let builtin = match code {
                OpCode::CPUI_INT_AND => BUILTIN_ATOMIC_FETCH_AND,
                OpCode::CPUI_INT_OR => BUILTIN_ATOMIC_FETCH_OR,
                _ => BUILTIN_ATOMIC_FETCH_XOR,
            };
            (builtin, other)
        }
        Expr::Op(OpCode::CPUI_INT_NEGATE, _, args) if args[0] == Expr::Old => {
            (BUILTIN_ATOMIC_FETCH_XOR, Expr::Const(mask(width), width))
        }
        _ => return None,
    };
    if let Expr::Const(c, size @ 1..=8) = operand {
        let top = 1u64 << (8 * size - 1);
        let flipped = match builtin {
            BUILTIN_ATOMIC_FETCH_ADD => BUILTIN_ATOMIC_FETCH_SUB,
            BUILTIN_ATOMIC_FETCH_SUB => BUILTIN_ATOMIC_FETCH_ADD,
            _ => builtin,
        };
        if c & top != 0 && c != top && flipped != builtin {
            return Some((flipped, Expr::Const(c.wrapping_neg() & mask(size), size)));
        }
    }
    Some((builtin, operand))
}

/// Does the update leave the location unchanged? `lock or $0, (%rsp)` is how
/// compilers spell a full fence, and stays one.
fn identity(builtin: u32, operand: &Expr) -> bool {
    match (builtin, operand) {
        (BUILTIN_ATOMIC_FETCH_AND, Expr::Const(c, size)) => *c == mask(*size),
        (BUILTIN_ATOMIC_EXCHANGE | BUILTIN_ATOMIC_FETCH_AND, _) => false,
        (_, Expr::Const(c, _)) => *c == 0,
        _ => false,
    }
}

/// The rewrite, decided before anything changes. `accumulator` is the register
/// a compare-exchange's success path also receives `Old` in, and the storage
/// holding `Old` at its store (`None`: the builtin's own output).
struct Plan {
    builtin: u32,
    operands: Vec<Expr>,
    reads: BTreeMap<Site, Read>,
    accumulator: Option<(Storage, Option<Storage>)>,
}

fn plan(eval: &Eval) -> Option<Plan> {
    let mut reads = BTreeMap::new();
    let ends = eval.run(&mut reads)?;
    let stores: Vec<&Path> = ends.iter().filter(|e| e.stored.is_some()).collect();
    let [store] = stores[..] else { return None };
    let stored = store.stored.as_ref()?;
    if ends.len() == 1 {
        let (builtin, operand) = update(stored, eval.width)?;
        if identity(builtin, &operand) {
            return None;
        }
        return Some(Plan {
            builtin,
            operands: vec![operand],
            reads,
            accumulator: None,
        });
    }
    if ends.len() != 2 || stored.has_old() {
        return None;
    }
    let other = ends.iter().find(|e| e.stored.is_none())?;
    let ([(cond, taken)], [(other_cond, other_taken)]) = (&store.conds[..], &other.conds[..])
    else {
        return None;
    };
    if cond != other_cond || taken == other_taken {
        return None;
    }
    let expected = equality(cond, *taken)?;
    let accumulator = match (&expected, store.store_state.as_ref()) {
        (Expr::Start(s), Some(state))
            if other.old_writes.contains(s) && !state.keys().any(|k| k.overlaps(*s)) =>
        {
            match eval.access {
                Access::Direct(_) => Some((*s, None)),
                Access::Pointer(_) => {
                    let source = state
                        .iter()
                        .find(|(_, v)| **v == Expr::Old)
                        .map(|(k, _)| *k)?;
                    Some((*s, Some(source)))
                }
            }
        }
        _ => None,
    };
    Some(Plan {
        builtin: BUILTIN_ATOMIC_COMPARE_SWAP,
        operands: vec![expected, stored.clone()],
        reads,
        accumulator,
    })
}

/// The state just before op `end`, shared by every path.
fn prefix_state(eval: &Eval, end: usize) -> Option<BTreeMap<Storage, Expr>> {
    let mut path = Path {
        pc: 0,
        state: BTreeMap::new(),
        conds: Vec::new(),
        stored: None,
        old_writes: Vec::new(),
        store_state: None,
    };
    let mut reads = BTreeMap::new();
    for index in 0..end {
        let op = eval.op(index)?;
        match op.code() {
            OpCode::CPUI_CALLOTHER => {}
            OpCode::CPUI_LOAD
            | OpCode::CPUI_STORE
            | OpCode::CPUI_BRANCH
            | OpCode::CPUI_CBRANCH
            | OpCode::CPUI_CALL
            | OpCode::CPUI_CALLIND
            | OpCode::CPUI_BRANCHIND
            | OpCode::CPUI_RETURN => return None,
            _ => eval.generic(&mut path, index, &mut reads)?,
        }
    }
    reads.is_empty().then_some(path.state)
}

/// Where `e` can be read just before the first load without new ops.
fn home(state: &BTreeMap<Storage, Expr>, e: &Expr) -> Option<Storage> {
    if let Some((s, _)) = state.iter().find(|(_, v)| *v == e) {
        return Some(*s);
    }
    match e {
        Expr::Start(s) if !state.keys().any(|k| k.overlaps(*s)) => Some(*s),
        _ => None,
    }
}

fn buildable(state: &BTreeMap<Storage, Expr>, e: &Expr, ops: bool) -> bool {
    match e {
        Expr::Const(..) => true,
        Expr::Old => false,
        _ if home(state, e).is_some() => true,
        Expr::Op(code, _, args) => {
            ops && !matches!(code, OpCode::CPUI_LOAD | OpCode::CPUI_STORE)
                && args.iter().all(|a| buildable(state, a, ops))
        }
        Expr::Start(_) => false,
    }
}

struct Builder<'a> {
    state: &'a BTreeMap<Storage, Expr>,
    before: OpId,
    /// The instruction's first op: the first new op when `before` was first.
    first: OpId,
}

impl Builder<'_> {
    fn varnode(&self, fd: &mut Funcdata, s: Storage) -> Option<VarnodeId> {
        Some(fd.new_varnode(s.size, &Address::new(space(fd, s.space)?, s.offset), None))
    }

    fn emit(&mut self, fd: &mut Funcdata, e: &Expr) -> Option<VarnodeId> {
        if let Expr::Const(v, size) = e {
            return Some(fd.new_constant(*size, *v));
        }
        if let Some(s) = home(self.state, e) {
            return self.varnode(fd, s);
        }
        let Expr::Op(code, size, args) = e else {
            return None;
        };
        let mut inputs = Vec::with_capacity(args.len());
        for a in args {
            inputs.push(self.emit(fd, a)?);
        }
        self.insert(fd, *code, &inputs, *size)
    }

    /// A new op `code` over `inputs` in front of `before`, and its output.
    fn insert(
        &mut self,
        fd: &mut Funcdata,
        code: OpCode,
        inputs: &[VarnodeId],
        size: int4,
    ) -> Option<VarnodeId> {
        let at = fd.obank().get(self.before)?.get_addr().clone();
        let op = fd.new_op(inputs.len() as i32, at);
        fd.op_set_opcode_code(op, code);
        fd.op_set_all_input(op, inputs).ok()?;
        let out = fd.new_unique_out(size, op).ok()?;
        fd.obank_mut().insert_before_dead(op, self.before);
        if self.first == self.before {
            self.first = op;
        }
        Some(out)
    }
}

/// A dead `COPY` of `input` into a fresh temporary, in place of `op`.
fn neutralize(fd: &mut Funcdata, op: OpId, input: VarnodeId, size: int4) -> Option<()> {
    if fd.obank().get(op)?.get_out().is_some() {
        fd.op_unset_output(op);
    }
    fd.op_set_opcode_code(op, OpCode::CPUI_COPY);
    fd.op_set_all_input(op, &[input]).ok()?;
    fd.new_unique_out(size, op).ok()?;
    Some(())
}

/// The location the instruction updates: the pointer storage of its LOADs and
/// STORE, or under a lock envelope the one RAM varnode it writes.
fn access(fd: &Funcdata, ops: &[OpId], envelope: bool) -> Option<(Access, usize, usize, i32)> {
    let code = |i: usize| fd.obank().get(ops[i]).map(|o| o.code());
    let loads: Vec<usize> = (0..ops.len())
        .filter(|&i| code(i) == Some(OpCode::CPUI_LOAD))
        .collect();
    let stores: Vec<usize> = (0..ops.len())
        .filter(|&i| code(i) == Some(OpCode::CPUI_STORE))
        .collect();
    if loads.is_empty() && stores.is_empty() && envelope {
        let ram = fd.get_arch().manage().get_default_data_space()?.get_index();
        let writes: Vec<(usize, Storage)> = (0..ops.len())
            .filter_map(|i| Some((i, storage(fd, fd.obank().get(ops[i])?.get_out()?)?)))
            .filter(|(_, s)| s.space == ram)
            .collect();
        let [(store, loc)] = writes[..] else {
            return None;
        };
        return Some((Access::Direct(loc), 0, store, loc.size));
    }
    let (&first_load, [store]) = (loads.first()?, &stores[..]) else {
        return None;
    };
    let load = fd.obank().get(ops[first_load])?;
    let write = fd.obank().get(ops[*store])?;
    let pointer = storage(fd, load.get_in(1)?)?;
    if storage(fd, write.get_in(1)?)? != pointer
        || storage(fd, write.get_in(0)?)? != storage(fd, load.get_in(0)?)?
    {
        return None;
    }
    Some((
        Access::Pointer(pointer),
        first_load,
        *store,
        storage(fd, load.get_out()?)?.size,
    ))
}

/// Rewrite the instruction `ops` (in emission order) if it is an atomic
/// read-modify-write. Returns the instruction's first op, which changes only
/// when an operand had to be rebuilt in front of it.
pub fn rewrite(fd: &mut Funcdata, ops: &[OpId]) -> Option<OpId> {
    let arch = fd.get_arch();
    if !arch.kuna_options.get::<Atomics>().on()
        || !arch.atomic_userops.enabled()
        || arch.source_lang.is_go()
        || ops.len() > MAX_OPS
    {
        return None;
    }
    let code = |id: &OpId| fd.obank().get(*id).map(|o| o.code());
    let candidate = match arch.atomic_userops.lock {
        Some(_) => ops.first().and_then(code) == Some(OpCode::CPUI_CALLOTHER),
        None => ops.iter().any(|id| code(id) == Some(OpCode::CPUI_STORE)),
    };
    if !candidate {
        return None;
    }
    let userops = arch.atomic_userops.clone();
    let callother = |i: usize| {
        fd.obank()
            .get(ops[i])
            .filter(|o| o.code() == OpCode::CPUI_CALLOTHER)
            .and_then(|o| o.get_in(0))
            .and_then(|v| is_constant(fd, v))
            .map(|(id, _)| id as u32)
    };
    let mut envelope = None;
    if let Some((lock, unlock)) = userops.lock {
        let marks: Vec<usize> = (0..ops.len()).filter(|&i| callother(i).is_some()).collect();
        let [first, last] = marks[..] else {
            return None;
        };
        if callother(first)? != lock || callother(last)? != unlock || last != ops.len() - 1 {
            return None;
        }
        envelope = Some((first, last));
    }
    let Some((access, first_load, store, width)) = access(fd, ops, envelope.is_some()) else {
        return match envelope {
            None => pair(fd, ops, &userops),
            Some(_) => None,
        };
    };
    if !matches!(width, 1 | 2 | 4 | 8 | 16) {
        return None;
    }
    let first_load = match access {
        Access::Direct(_) => envelope?.0,
        Access::Pointer(_) => first_load,
    };
    let (old_home, value_home) = match access {
        Access::Pointer(_) => (
            Some(storage(fd, fd.obank().get(ops[first_load])?.get_out()?)?),
            Some(storage(fd, fd.obank().get(ops[store])?.get_in(2)?)?),
        ),
        Access::Direct(_) => (None, None),
    };
    let eval = Eval {
        fd,
        ops,
        userops: &userops,
        width,
        access,
        first_load,
        store,
        old_home,
        value_home,
    };
    let mut plan = plan(&eval)?;
    if width == 16 && plan.builtin != BUILTIN_ATOMIC_COMPARE_SWAP {
        return None;
    }
    let state = prefix_state(&eval, first_load)?;
    let new_ops = !branches_to_end(fd, ops) && matches!(access, Access::Pointer(_));
    (plan.builtin, plan.operands) = spelled(
        plan.builtin,
        &plan.operands,
        width,
        msvc_spelling(fd),
        |e| buildable(&state, e, new_ops),
    );
    if !plan.operands.iter().all(|e| buildable(&state, e, new_ops)) {
        return None;
    }
    if let (Access::Direct(_), Some(_)) = (access, plan.accumulator) {
        if fd.obank().get(ops[store])?.code() != OpCode::CPUI_COPY
            || plan.reads.values().any(|r| *r == Read::After)
        {
            return None;
        }
    }
    apply(
        fd,
        ops,
        &plan,
        access,
        &state,
        (first_load, store, width, envelope),
    )
}

/// Whether a relative branch of the instruction `ops` targets its end. New
/// ops get sequence numbers after the instruction's last op, where such a
/// branch would find them instead of the next instruction.
fn branches_to_end(fd: &Funcdata, ops: &[OpId]) -> bool {
    ops.iter().enumerate().any(|(i, &id)| {
        let Some(o) = fd.obank().get(id) else {
            return true;
        };
        if !matches!(o.code(), OpCode::CPUI_BRANCH | OpCode::CPUI_CBRANCH) {
            return false;
        }
        match o.get_in(0).and_then(|v| is_constant(fd, v)) {
            Some((offset, _)) => i as i64 + i64::from(offset as i32) >= ops.len() as i64,
            None => false,
        }
    })
}

/// (kuna `atomics`) A compare-and-swap of a register pair (AArch64 `casp` on
/// X registers): two LOADs of `w` bytes at `p` and `p + w`, a branch past
/// the stores unless each half equals its expected value, and two STOREs of
/// values independent of the location to the same addresses. It becomes one
/// `__sync_val_compare_and_swap` on the `2w`-byte location, its result split
/// back into the two loaded halves; the stores become dead copies.
fn pair(fd: &mut Funcdata, ops: &[OpId], userops: &AtomicUserops) -> Option<OpId> {
    let code = |i: usize| fd.obank().get(ops[i]).map(|o| o.code());
    let loads: Vec<usize> = (0..ops.len())
        .filter(|&i| code(i) == Some(OpCode::CPUI_LOAD))
        .collect();
    let stores: Vec<usize> = (0..ops.len())
        .filter(|&i| code(i) == Some(OpCode::CPUI_STORE))
        .collect();
    let (&[l0, l1], &[s0, s1]) = (&loads[..], &stores[..]) else {
        return None;
    };
    if l1 >= s0 || branches_to_end(fd, ops) {
        return None;
    }
    let w = storage(fd, fd.obank().get(ops[l0])?.get_out()?)?.size;
    if !matches!(w, 4 | 8) || storage(fd, fd.obank().get(ops[l1])?.get_out()?)?.size != w {
        return None;
    }
    let width = 2 * w;
    let pointer = storage(fd, fd.obank().get(ops[l0])?.get_in(1)?)?;
    let eval = Eval {
        fd,
        ops,
        userops,
        width,
        access: Access::Pointer(pointer),
        first_load: l0,
        store: s0,
        old_home: None,
        value_home: None,
    };
    let big = fd
        .get_arch()
        .manage()
        .get_default_data_space()
        .is_some_and(|sp| sp.is_big_endian());
    let (k0, k1) = if big { (w as u64, 0) } else { (0, w as u64) };
    let mut path = Path {
        pc: 0,
        state: BTreeMap::new(),
        conds: Vec::new(),
        stored: None,
        old_writes: Vec::new(),
        store_state: None,
    };
    let mut reads = BTreeMap::new();
    let (mut base, mut prefix) = (None, None);
    let mut values = Vec::new();
    let mut conds = Vec::new();
    for index in 0..ops.len() {
        let op = eval.op(index)?;
        match op.code() {
            OpCode::CPUI_LOAD => {
                let at = eval.read(&path.state, op.get_in(1)?)?;
                let out = storage(fd, op.get_out()?)?;
                let half = if index == l0 {
                    prefix = Some(path.state.clone());
                    base = Some(at);
                    k0
                } else {
                    let base = base.as_ref()?;
                    let size = base.size(width);
                    let next = Expr::Op(
                        OpCode::CPUI_INT_ADD,
                        size,
                        vec![base.clone(), Expr::Const(w as u64, size)],
                    );
                    if at != next {
                        return None;
                    }
                    k1
                };
                let value = eval.subpiece(Expr::Old, half, w);
                Eval::write(&mut path.state, out, value);
            }
            OpCode::CPUI_STORE => {
                let at = eval.read(&path.state, op.get_in(1)?)?;
                let value = eval.read(&path.state, op.get_in(2)?)?;
                if value.has_old() || value.size(width) != w {
                    return None;
                }
                values.push((at, value));
            }
            OpCode::CPUI_CBRANCH => {
                let (offset, _) = is_constant(fd, op.get_in(0)?)?;
                let target = index as i64 + i64::from(offset as i32);
                if index < l1 || index > s0 || target <= s1 as i64 {
                    return None;
                }
                conds.push(eval.read(&path.state, op.get_in(1)?)?);
            }
            OpCode::CPUI_CALLOTHER => {
                let id = is_constant(fd, op.get_in(0)?)?.0 as u32;
                if op.get_out().is_some() || !userops.ordering.contains(&id) {
                    return None;
                }
            }
            OpCode::CPUI_BRANCH
            | OpCode::CPUI_CALL
            | OpCode::CPUI_CALLIND
            | OpCode::CPUI_BRANCHIND
            | OpCode::CPUI_RETURN
            | OpCode::CPUI_MULTIEQUAL
            | OpCode::CPUI_INDIRECT => return None,
            _ => eval.generic(&mut path, index, &mut reads)?,
        }
    }
    let base = base?;
    let size = base.size(width);
    let next = Expr::Op(
        OpCode::CPUI_INT_ADD,
        size,
        vec![base.clone(), Expr::Const(w as u64, size)],
    );
    let [(a0, v0), (a1, v1)] = &values[..] else {
        return None;
    };
    let [c0, c1] = &conds[..] else {
        return None;
    };
    if *a0 != base || *a1 != next {
        return None;
    }
    let (lo, hi) = (
        eval.subpiece(Expr::Old, k0, w),
        eval.subpiece(Expr::Old, k1, w),
    );
    let (e0, e1) = match (equality_of(c0, false, &lo), equality_of(c1, false, &hi)) {
        (Some(e0), Some(e1)) => (e0, e1),
        _ => (equality_of(c1, false, &lo)?, equality_of(c0, false, &hi)?),
    };
    let join = |first: &Expr, second: &Expr| {
        let (high, low) = if big {
            (first, second)
        } else {
            (second, first)
        };
        Expr::Op(OpCode::CPUI_PIECE, width, vec![high.clone(), low.clone()])
    };
    let prefix = prefix?;
    let (builtin, operands) = spelled(
        BUILTIN_ATOMIC_COMPARE_SWAP,
        &[join(&e0, &e1), join(v0, v1)],
        width,
        msvc_spelling(fd),
        |e| buildable(&prefix, e, true),
    );
    if !buildable(&prefix, &base, true) || !operands.iter().all(|e| buildable(&prefix, e, true)) {
        return None;
    }
    let mut builder = Builder {
        state: &prefix,
        before: ops[l0],
        first: ops[0],
    };
    let mut inputs = vec![fd.new_constant(4, u64::from(builtin))];
    inputs.push(builder.emit(fd, &base)?);
    for operand in &operands {
        inputs.push(builder.emit(fd, operand)?);
    }
    let old = builder.insert(fd, OpCode::CPUI_CALLOTHER, &inputs, width)?;
    let old = storage(fd, old)?;
    for (load, k) in [(l0, k0), (l1, k1)] {
        let source = builder.varnode(fd, old)?;
        let offset = fd.new_constant(4, k);
        fd.op_set_opcode_code(ops[load], OpCode::CPUI_SUBPIECE);
        fd.op_set_all_input(ops[load], &[source, offset]).ok()?;
    }
    for store in [s0, s1] {
        let value = fd.obank().get(ops[store])?.get_in(2)?;
        neutralize(fd, ops[store], value, w)?;
    }
    Some(builder.first)
}

fn apply(
    fd: &mut Funcdata,
    ops: &[OpId],
    plan: &Plan,
    access: Access,
    state: &BTreeMap<Storage, Expr>,
    (first_load, store, width, envelope): (usize, usize, i32, Option<(usize, usize)>),
) -> Option<OpId> {
    let (atomic, store_op) = (ops[first_load], ops[store]);
    let mut builder = Builder {
        state,
        before: atomic,
        first: ops[0],
    };
    let pointer = match access {
        Access::Pointer(_) => fd.obank().get(atomic)?.get_in(1)?,
        Access::Direct(loc) => {
            let size = space(fd, loc.space)?.get_addr_size() as int4;
            fd.new_constant(size, loc.offset)
        }
    };
    let mut inputs = vec![fd.new_constant(4, u64::from(plan.builtin)), pointer];
    for operand in &plan.operands {
        inputs.push(builder.emit(fd, operand)?);
    }
    fd.op_set_opcode_code(atomic, OpCode::CPUI_CALLOTHER);
    fd.op_set_all_input(atomic, &inputs).ok()?;
    let old = match access {
        Access::Pointer(_) => storage(fd, fd.obank().get(atomic)?.get_out()?)?,
        Access::Direct(_) => {
            let out = fd.new_unique_out(width, atomic).ok()?;
            storage(fd, out)?
        }
    };
    let value = match access {
        Access::Pointer(_) => fd.obank().get(store_op)?.get_in(2)?,
        Access::Direct(_) => fd.obank().get(store_op)?.get_out()?,
    };
    let new_value = match (access, plan.accumulator) {
        (Access::Direct(_), None) => {
            fd.op_unset_output(store_op);
            let out = fd.new_unique_out(width, store_op).ok()?;
            Some(storage(fd, out)?)
        }
        _ => None,
    };
    let value_home = match access {
        Access::Pointer(_) => storage(fd, value),
        Access::Direct(_) => new_value,
    };
    for (&(index, slot), &read) in &plan.reads {
        if index == first_load && slot < 0 {
            continue;
        }
        let source = builder.varnode(
            fd,
            if read == Read::Before {
                old
            } else {
                value_home?
            },
        )?;
        if slot < 0 {
            fd.op_set_opcode_code(ops[index], OpCode::CPUI_COPY);
            fd.op_set_all_input(ops[index], &[source]).ok()?;
        } else {
            fd.op_set_input(ops[index], source, slot).ok()?;
        }
    }
    match (plan.accumulator, access) {
        (Some((acc, source)), _) => {
            let input = builder.varnode(fd, source.unwrap_or(old))?;
            fd.op_unset_output(store_op);
            fd.op_set_opcode_code(store_op, OpCode::CPUI_COPY);
            fd.op_set_all_input(store_op, &[input]).ok()?;
            let addr = Address::new(space(fd, acc.space)?, acc.offset);
            fd.new_varnode_out(acc.size, &addr, store_op).ok()?;
        }
        (None, Access::Pointer(_)) => neutralize(fd, store_op, value, width)?,
        (None, Access::Direct(_)) => {}
    }
    if let Some((lock, unlock)) = envelope {
        for mark in [lock, unlock] {
            if ops[mark] != atomic {
                let zero = fd.new_constant(1, 0);
                neutralize(fd, ops[mark], zero, 1)?;
            }
        }
    }
    Some(builder.first)
}

fn builtin(data: &Funcdata, op: OpId) -> Option<u32> {
    let o = data
        .obank()
        .get(op)
        .filter(|o| o.code() == OpCode::CPUI_CALLOTHER && !o.is_dead())?;
    let (id, _) = is_constant(data, o.get_in(0)?)?;
    let id = u32::try_from(id).ok()?;
    atomic_builtin_name(id).map(|_| id)
}

/// Whether the builtins take their MSVC spelling: option `atomics msvc`, or
/// `auto` on a Windows image.
fn msvc_spelling(fd: &Funcdata) -> bool {
    let arch = fd.get_arch();
    arch.kuna_options
        .get::<Atomics>()
        .msvc(arch.windows_cspec || arch.image_windows_user)
}

/// `builtin` and its `operands` (after the address) in the MSVC spelling when
/// `msvc` is set and every operand passes `buildable`, else as they are.
/// MSVC has no fetch-and-subtract, so a subtraction becomes
/// `_InterlockedExchangeAdd` of the negated operand, and
/// `_InterlockedCompareExchange` takes the new value before the expected one.
fn spelled(
    builtin: u32,
    operands: &[Expr],
    width: i32,
    msvc: bool,
    buildable: impl Fn(&Expr) -> bool,
) -> (u32, Vec<Expr>) {
    let keep = (builtin, operands.to_vec());
    if !msvc {
        return keep;
    }
    let (generic, spelled) = match (builtin, operands) {
        (BUILTIN_ATOMIC_FETCH_SUB, [Expr::Const(c, size)]) => (
            BUILTIN_ATOMIC_FETCH_ADD,
            vec![Expr::Const(c.wrapping_neg() & mask(*size), *size)],
        ),
        (BUILTIN_ATOMIC_FETCH_SUB, [x]) => (
            BUILTIN_ATOMIC_FETCH_ADD,
            vec![Expr::Op(OpCode::CPUI_INT_2COMP, width, vec![x.clone()])],
        ),
        (BUILTIN_ATOMIC_COMPARE_SWAP, [expected, new]) => {
            (builtin, vec![new.clone(), expected.clone()])
        }
        _ => keep.clone(),
    };
    match msvc_atomic_builtin(generic, width) {
        Some(id) if spelled.iter().all(buildable) => (id, spelled),
        _ => keep,
    }
}

/// The atomic builtins of `data`, which access memory through their address
/// operand: `kuna_memoryguard` guards memory across them as across a call.
pub fn memory_ops(data: &Funcdata) -> Vec<OpId> {
    if !data.get_arch().atomic_userops.builtins() {
        return Vec::new();
    }
    data.obank()
        .iter_code(OpCode::CPUI_CALLOTHER)
        .filter(|&op| builtin(data, op).is_some())
        .collect()
}

/// The value type of a builtin's location: the integer its address operand
/// already points to, else unsigned for the bitwise updates and signed for the
/// rest.
fn value_type(data: &Funcdata, op: OpId, size: int4) -> Option<Rc<Datatype>> {
    let meta = match atomic_builtin_generic(builtin(data, op)?)? {
        BUILTIN_ATOMIC_FETCH_AND | BUILTIN_ATOMIC_FETCH_OR | BUILTIN_ATOMIC_FETCH_XOR => {
            type_metatype::TYPE_UINT
        }
        _ => type_metatype::TYPE_INT,
    };
    let pointer = data
        .vbank()
        .get(data.obank().get(op)?.get_in(1)?)?
        .get_type();
    if pointer.get_metatype() == type_metatype::TYPE_PTR {
        if let Some(pointee) = pointer.get_ptr_to() {
            let integer = matches!(
                pointee.get_metatype(),
                type_metatype::TYPE_INT | type_metatype::TYPE_UINT
            );
            if integer && pointee.get_size() == size {
                return Some(pointee);
            }
        }
    }
    data.get_arch().types()?.get_base(size, meta).ok()
}

/// A builtin's address operand points to its value type; its other operands,
/// whose width is the location's, have that type.
pub fn input_type(data: &Funcdata, op: OpId, slot: int4) -> Option<Rc<Datatype>> {
    let o = data.obank().get(op)?;
    let width = data.vbank().get(o.get_in(2)?)?.get_size();
    let input = data.vbank().get(o.get_in(slot)?)?;
    let value = value_type(data, op, width)?;
    if slot != 1 {
        return (slot > 1 && input.get_size() == width).then_some(value);
    }
    let space = data.get_arch().manage().get_default_data_space()?;
    if input.get_size() != space.get_addr_size() as int4 {
        return None;
    }
    data.get_arch()
        .types()?
        .get_type_pointer(input.get_size(), value, space.get_word_size())
        .ok()
}

/// A builtin returns the location's old value.
pub fn output_type(data: &Funcdata, op: OpId) -> Option<Rc<Datatype>> {
    let width = data
        .vbank()
        .get(data.obank().get(op)?.get_out()?)?
        .get_size();
    value_type(data, op, width)
}

/// (kuna `llscfold`) `ActionLlscLoop` — fold an AArch64 load-exclusive /
/// store-exclusive retry loop into the atomic builtin its one successful
/// iteration performs.
///
/// ```text
///   L: ldaxr w8, [x0]          ;  w8 = __sync_fetch_and_add(x0, w1);
///      add   w9, w8, w1        ;  w9 = w8 + w1;
///      stlxr w10, w9, [x0]     ;  (the monitor passes, the store is the builtin's,
///      cbnz  w10, L            ;   the status is 0 and the loop exits)
/// ```
///
/// Pre-SSA, the store-exclusive lifts to a block ending in a branch on
/// `ExclusiveMonitorPass`, a block holding the STORE and
/// `ExclusiveMonitorsStatus`, and a block that branches back to the loop head
/// on the status. With the monitor passing and the status 0, the head and those
/// blocks are evaluated like one atomic instruction (`docs/spec/02-lift-and-flow.md`).
/// The LOAD becomes the builtin, the monitor's pass and status become the
/// constants 1 and 0, and the STORE a dead copy; dead-branch removal then
/// deletes the back edge.
pub struct ActionLlscLoop {
    base: ActionBase,
}

impl ActionLlscLoop {
    pub fn boxed(g: impl Into<String>) -> Box<dyn Action> {
        Box::new(ActionLlscLoop {
            base: ActionBase::new(0, "llscfold", g),
        })
    }
}

impl Action for ActionLlscLoop {
    fn base(&self) -> &ActionBase {
        &self.base
    }
    fn base_mut(&mut self) -> &mut ActionBase {
        &mut self.base
    }
    fn clone_filtered(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Action>> {
        grouplist.contains(self.get_group()).then(|| {
            Box::new(Self {
                base: self.base.clone(),
            }) as Box<dyn Action>
        })
    }
    fn apply(&mut self, data: &mut Funcdata, _ctx: &mut ActionContext) -> ApplyResult {
        if !data.get_arch().kuna_options.get::<LlscFold>().0
            || data.get_heritage_pass() != 0
            || data.get_arch().atomic_userops.monitor.is_none()
            || data.get_arch().source_lang.is_go()
        {
            return 0;
        }
        let blocks: Vec<BlockId> = (0..data.bblocks_get_size())
            .map(|i| data.bblocks_get_block(i))
            .collect();
        let mut changed = 0;
        for block in blocks {
            if fold_loop(data, block).is_some() {
                changed += 1;
            }
        }
        self.base.count += changed;
        (changed != 0) as ApplyResult
    }
}

fn block_ops(data: &Funcdata, b: BlockId) -> Vec<OpId> {
    let mut ops = Vec::new();
    let mut cursor = data.bb_op_head(b);
    while let Some(op) = cursor {
        ops.push(op);
        cursor = data.bb_op_next(op);
    }
    ops
}

/// The successor `b` goes to when its CBRANCH condition is `cond`.
fn successor(data: &Funcdata, b: BlockId, cond: bool) -> Option<BlockId> {
    let fb = data.bblocks_ref().block(b);
    let tail = data.obank().get(data.bb_op_tail(b)?)?;
    if fb.size_out() != 2 || tail.code() != OpCode::CPUI_CBRANCH {
        return None;
    }
    Some(if cond != tail.is_boolean_flip() {
        fb.get_true_out()
    } else {
        fb.get_false_out()
    })
}

fn starts(e: &Expr, out: &mut Vec<Storage>) {
    match e {
        Expr::Start(s) => out.push(*s),
        Expr::Op(_, _, args) => args.iter().for_each(|a| starts(a, out)),
        Expr::Const(..) | Expr::Old => {}
    }
}

/// The retry loop around the store-exclusive block `p`: its head `h` (which
/// holds the load-exclusive: `p` itself, or `p`'s one predecessor when a
/// compare between them leaves the loop), the store block `s` and the block `f`
/// that branches back to `h` on the status.
fn loop_blocks(data: &Funcdata, p: BlockId) -> Option<(BlockId, BlockId, BlockId)> {
    let pb = data.bblocks_ref().block(p);
    if pb.size_out() != 2 {
        return None;
    }
    let outs = [pb.get_true_out(), pb.get_false_out()];
    for (s, f) in [(outs[0], outs[1]), (outs[1], outs[0])] {
        let sb = data.bblocks_ref().block(s);
        let fb = data.bblocks_ref().block(f);
        if s == p
            || f == p
            || sb.size_in() != 1
            || sb.size_out() != 1
            || sb.get_out(0) != f
            || fb.size_out() != 2
        {
            continue;
        }
        let back = if fb.get_true_out() == p || fb.get_false_out() == p {
            p
        } else {
            if pb.size_in() != 1 {
                continue;
            }
            let h = pb.get_in(0);
            let hb = data.bblocks_ref().block(h);
            let enters = pb.size_in() == 1
                && hb.size_out() == 2
                && (hb.get_true_out() == p || hb.get_false_out() == p);
            if !enters
                || !(fb.get_true_out() == h || fb.get_false_out() == h)
                || [s, f].contains(&h)
            {
                continue;
            }
            h
        };
        return Some((back, s, f));
    }
    None
}

/// The ops of `b`, without the CBRANCH that ends it.
fn body(data: &Funcdata, b: BlockId) -> Vec<OpId> {
    let mut ops = block_ops(data, b);
    if ops
        .last()
        .and_then(|&o| data.obank().get(o))
        .is_some_and(|o| o.code() == OpCode::CPUI_CBRANCH)
    {
        ops.pop();
    }
    ops
}

/// A compare-exchange loop's exit from its head `h` when the compare fails:
/// it may branch back to `h` only if it computes nothing (`clrex`, a branch).
fn quiet_exit(data: &Funcdata, h: BlockId, x: BlockId) -> bool {
    let xb = data.bblocks_ref().block(x);
    let loops = (0..xb.size_out()).any(|i| xb.get_out(i) == h);
    !loops
        || block_ops(data, x).iter().all(|&o| {
            data.obank().get(o).is_some_and(|op| {
                op.get_out().is_none()
                    && matches!(op.code(), OpCode::CPUI_CALLOTHER | OpCode::CPUI_BRANCH)
            })
        })
}

/// Whether no storage in `suspects`, values the folded loop computes from a
/// register it also writes (and so would compute differently after a retry),
/// can be read after the loop: each is a temporary, or is written before it is
/// read on the straight-line path from the exit block `b` (at most four
/// blocks), or is a one-byte flag still unread where that path calls,
/// returns or jumps away.
fn dead_after(data: &Funcdata, mut b: BlockId, suspects: &[Storage]) -> bool {
    let mut live: Vec<Storage> = suspects
        .iter()
        .copied()
        .filter(|s| {
            !space(data, s.space).is_some_and(|sp| sp.get_type() == spacetype::IPTR_INTERNAL)
        })
        .collect();
    for _ in 0..4 {
        if live.is_empty() {
            return true;
        }
        for op in block_ops(data, b) {
            let Some(o) = data.obank().get(op) else {
                return false;
            };
            for slot in 0..o.num_input() {
                let read = o.get_in(slot).and_then(|v| storage(data, v));
                if read.is_some_and(|r| live.iter().any(|l| l.overlaps(r))) {
                    return false;
                }
            }
            if matches!(
                o.code(),
                OpCode::CPUI_CALL
                    | OpCode::CPUI_CALLIND
                    | OpCode::CPUI_RETURN
                    | OpCode::CPUI_BRANCHIND
            ) {
                return live.iter().all(|l| l.size == 1);
            }
            if let Some(out) = o.get_out().and_then(|v| storage(data, v)) {
                live.retain(|l| {
                    !(l.space == out.space
                        && out.offset <= l.offset
                        && l.offset + l.size as u64 <= out.offset + out.size as u64)
                });
            }
            if live.is_empty() {
                return true;
            }
        }
        let fb = data.bblocks_ref().block(b);
        if fb.size_out() != 1 {
            return false;
        }
        b = fb.get_out(0);
    }
    live.is_empty()
}

fn fold_loop(data: &mut Funcdata, p: BlockId) -> Option<()> {
    let (pass, status) = data.get_arch().atomic_userops.monitor?;
    let (h, s, f) = loop_blocks(data, p)?;
    let userops = data.get_arch().atomic_userops.clone();
    let head = if h == p { Vec::new() } else { body(data, h) };
    let (p_ops, s_ops, f_ops) = (body(data, p), body(data, s), body(data, f));
    let ops: Vec<OpId> = head
        .iter()
        .chain(&p_ops)
        .chain(&s_ops)
        .chain(&f_ops)
        .copied()
        .collect();
    if ops.len() > MAX_OPS {
        return None;
    }
    let p_end = head.len() + p_ops.len();
    let code = |i: usize| data.obank().get(ops[i]).map(|o| o.code());
    let callother = |i: usize| {
        data.obank()
            .get(ops[i])
            .filter(|o| o.code() == OpCode::CPUI_CALLOTHER)?
            .get_in(0)
            .and_then(|v| is_constant(data, v))
            .map(|(id, _)| id as u32)
    };
    let loads: Vec<usize> = (0..ops.len())
        .filter(|&i| code(i) == Some(OpCode::CPUI_LOAD))
        .collect();
    let stores: Vec<usize> = (0..ops.len())
        .filter(|&i| code(i) == Some(OpCode::CPUI_STORE))
        .collect();
    let (&first_load, [store]) = (loads.first()?, &stores[..]) else {
        return None;
    };
    let pass_at = (head.len()..p_end).find(|&i| callother(i) == Some(pass))?;
    let status_at = match status {
        Some(status) => Some((p_end..p_end + s_ops.len()).find(|&i| callother(i) == Some(status))?),
        None => None,
    };
    if first_load >= pass_at
        || (h != p && first_load >= head.len())
        || !(p_end..p_end + s_ops.len()).contains(store)
    {
        return None;
    }
    let load = data.obank().get(ops[first_load])?;
    let write = data.obank().get(ops[*store])?;
    let (load_at, store_at) = (load.get_in(1)?, write.get_in(1)?);
    let monitored = data.obank().get(ops[pass_at])?.get_in(1)?;
    let pointer = storage(data, load_at)?;
    let width = storage(data, load.get_out()?)?.size;
    if !matches!(width, 1 | 2 | 4 | 8) {
        return None;
    }
    let eval = Eval {
        fd: data,
        ops: &ops,
        userops: &userops,
        width,
        access: Access::Pointer(pointer),
        first_load,
        store: *store,
        old_home: Some(storage(data, load.get_out()?)?),
        value_home: Some(storage(data, write.get_in(2)?)?),
    };
    let mut path = Path {
        pc: 0,
        state: BTreeMap::new(),
        conds: Vec::new(),
        stored: None,
        old_writes: Vec::new(),
        store_state: None,
    };
    let mut reads = BTreeMap::new();
    let (mut at_load, mut address, mut h_state) = (None, None, None);
    let (mut h_cond, mut p_cond) = (None, None);
    let cond_of = |b: BlockId| data.obank().get(data.bb_op_tail(b)?)?.get_in(1);
    for index in 0..ops.len() {
        if index == head.len() && h != p {
            h_cond = Some(eval.read(&path.state, cond_of(h)?)?);
            h_state = Some(path.state.clone());
        }
        if index == p_end {
            p_cond = Some(eval.read(&path.state, cond_of(p)?)?);
        }
        if index == first_load {
            at_load = Some(path.state.clone());
            address = Some(eval.read(&path.state, load_at)?);
        }
        let through = match index {
            i if i == *store => Some(store_at),
            i if i == pass_at => Some(monitored),
            _ => None,
        };
        if let Some(vn) = through {
            if eval.read(&path.state, vn)? != *address.as_ref()? {
                return None;
            }
        }
        let op = eval.op(index)?;
        match op.code() {
            OpCode::CPUI_LOAD => eval.load(&mut path, index, &mut reads)?,
            OpCode::CPUI_STORE => eval.store(&mut path, index)?,
            OpCode::CPUI_CALLOTHER => {
                let id = callother(index)?;
                if id == pass || Some(id) == status {
                    let out = storage(data, op.get_out()?)?;
                    Eval::write(
                        &mut path.state,
                        out,
                        Expr::Const(u64::from(id == pass), out.size),
                    );
                } else if op.get_out().is_some() || !userops.ordering.contains(&id) {
                    return None;
                }
            }
            OpCode::CPUI_BRANCH
            | OpCode::CPUI_CBRANCH
            | OpCode::CPUI_CALL
            | OpCode::CPUI_CALLIND
            | OpCode::CPUI_BRANCHIND
            | OpCode::CPUI_RETURN
            | OpCode::CPUI_MULTIEQUAL
            | OpCode::CPUI_INDIRECT => return None,
            _ => eval.generic(&mut path, index, &mut reads)?,
        }
    }
    let f_cond = eval.read(&path.state, cond_of(f)?)?;
    let (Some(Expr::Const(pc, _)), Expr::Const(fc, _)) = (p_cond, &f_cond) else {
        return None;
    };
    let exit = successor(data, f, *fc != 0)?;
    if successor(data, p, pc != 0)? != s || exit == h {
        return None;
    }
    let stored = path.stored.clone()?;
    let mut h_exit = None;
    let (builtin, operands) = if h == p {
        let (builtin, operand) = update(&stored, width)?;
        (builtin, vec![operand])
    } else {
        let to_p = successor(data, h, true)? == p;
        let exit = successor(data, h, !to_p)?;
        let expected = equality(h_cond.as_ref()?, to_p)?;
        if stored.has_old() || !quiet_exit(data, h, exit) {
            return None;
        }
        h_exit = Some(exit);
        (BUILTIN_ATOMIC_COMPARE_SWAP, vec![expected, stored.clone()])
    };
    let written: Vec<Storage> = ops
        .iter()
        .filter_map(|&o| data.obank().get(o)?.get_out())
        .filter_map(|v| storage(data, v))
        .collect();
    let tainted = |e: &Expr| {
        let mut leaves = Vec::new();
        starts(e, &mut leaves);
        leaves
            .iter()
            .any(|leaf| written.iter().any(|w| w.overlaps(*leaf)))
    };
    if [address.as_ref()?, &stored]
        .into_iter()
        .chain(&operands)
        .any(&tainted)
    {
        return None;
    }
    let suspects = |state: &BTreeMap<Storage, Expr>| -> Vec<Storage> {
        state
            .iter()
            .filter(|&(_, e)| tainted(e))
            .map(|(s, _)| *s)
            .collect()
    };
    if !dead_after(data, exit, &suspects(&path.state)) {
        return None;
    }
    if let (Some(x), Some(state)) = (h_exit, h_state.as_ref()) {
        if !dead_after(data, x, &suspects(state)) {
            return None;
        }
    }
    let markers: Vec<OpId> = (0..ops.len())
        .filter(|&i| callother(i).is_some_and(|id| userops.ordering.contains(&id)))
        .map(|i| ops[i])
        .collect();
    let at_load = at_load?;
    let (builtin, operands) = spelled(builtin, &operands, width, msvc_spelling(data), |e| {
        buildable(&at_load, e, false)
    });
    if !operands.iter().all(|e| buildable(&at_load, e, false))
        || reads
            .iter()
            .any(|(&(i, _), &r)| i != first_load && r != Read::Before)
    {
        return None;
    }
    let mut builder = Builder {
        state: &at_load,
        before: ops[first_load],
        first: ops[0],
    };
    let atomic = ops[first_load];
    let mut inputs = vec![
        data.new_constant(4, u64::from(builtin)),
        data.obank().get(atomic)?.get_in(1)?,
    ];
    for operand in &operands {
        inputs.push(builder.emit(data, operand)?);
    }
    data.op_set_opcode_code(atomic, OpCode::CPUI_CALLOTHER);
    data.op_set_all_input(atomic, &inputs).ok()?;
    let old = storage(data, data.obank().get(atomic)?.get_out()?)?;
    for &(index, _) in reads.keys().filter(|(i, _)| *i != first_load) {
        let source = builder.varnode(data, old)?;
        data.op_set_opcode_code(ops[index], OpCode::CPUI_COPY);
        data.op_set_all_input(ops[index], &[source]).ok()?;
    }
    for &op in &markers {
        let zero = data.new_constant(1, 0);
        neutralize(data, op, zero, 1)?;
    }
    for (at, value) in [(Some(pass_at), 1), (status_at, 0)] {
        let Some(at) = at else {
            continue;
        };
        let size = data
            .vbank()
            .get(data.obank().get(ops[at])?.get_out()?)?
            .get_size();
        let constant = data.new_constant(size, value);
        data.op_set_opcode_code(ops[at], OpCode::CPUI_COPY);
        data.op_set_all_input(ops[at], &[constant]).ok()?;
    }
    let value = data.obank().get(ops[*store])?.get_in(2)?;
    neutralize(data, ops[*store], value, width)
}

/// Fill this pass's hooks ([`crate::kuna_passhooks`]).
pub fn provide(hooks: &mut crate::kuna_passhooks::KunaHookSlots) {
    hooks.atomics_input_type = Some(input_type);
    hooks.atomics_output_type = Some(output_type);
}

#[cfg(test)]
mod tests;
