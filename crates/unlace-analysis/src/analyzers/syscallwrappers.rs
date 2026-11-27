//! (unlace `syscallwrappers`) Name the system-call wrappers of a stripped static
//! x86-64 Linux image by the call they make.
//!
//! A static glibc or musl image keeps no symbol for its C library, so no
//! prototype reaches a libc call and `recv(fd,buf,sizeof buf - 1,0)` prints as
//! `sub_412f00(a0,v2,0x3ff,0)`, with the buffer typed by whatever else touches
//! it. The functions that enter the kernel name themselves, though: each loads
//! the number of the call it makes. They come in three shapes:
//!
//! - direct, `mov eax,NR; syscall`: glibc's non-cancellable wrappers
//!   (`INLINE_SYSCALL_CALL`) and musl's inline `__syscall`;
//! - glibc 2.41 and later, cancellable (`SYSCALL_CANCEL`): `push NR; call
//!   __syscall_cancel`, the number as the seventh argument, which
//!   `__syscall_cancel` passes on to `__internal_syscall_cancel` and
//!   `__syscall_cancel_arch`;
//! - musl, cancellable: `mov edi,NR; call __syscall_cp`, the number first and the
//!   arguments one register up.
//!
//! The pass matches none of them by bytes. From a candidate's entry it walks the
//! lifted p-code of the function and of what it calls, following calls, returns
//! and tail jumps up to [`MAX_FRAMES`] frames deep and both ways at every
//! conditional branch, and tracks what each register and stack slot holds: a
//! constant, one of the function's own parameters (a register argument or an
//! incoming stack slot), the stack pointer at an offset, or anything else. Every
//! `syscall` it reaches is a site: the value of `rax` and of the six argument
//! registers `rdi`, `rsi`, `rdx`, `r10`, `r8`, `r9`. A call it does not enter
//! clobbers the caller-saved registers; a call to an address that is not code, or
//! to a function known not to return, ends its path.
//!
//! A function is the wrapper of system call `N` when
//!
//! 1. the walk finished within its budget and met no indirect jump or call in the
//!    function itself;
//! 2. it reached at least one site, and every site's number is the same constant
//!    `N`, which the Linux x86-64 table ([`LINUX_X86_64`]) names with a known
//!    argument count;
//! 3. at every site each argument the call takes is the function's own parameter
//!    in the same position, or every site fits one of the [`FORMS`] below, which
//!    give the libc function a different name and parameter list than the call:
//!    `recv` and `send` are `recvfrom` and `sendto` with no address (x86-64 has
//!    no `recv` or `send` call), `open` is glibc's `openat(AT_FDCWD, ...)`,
//!    `_exit` makes `exit_group` and `fstatat` makes `newfstatat`, and the mode
//!    of `open`/`openat` and the third argument of `fcntl`/`ioctl` are read
//!    through `va_arg`, so any value is accepted there. A form is tried before
//!    the call's own name.
//!
//! A function that reads anything else into an argument (`raise` passes its own
//! thread id to `tkill`), whose sites disagree (musl's `socket` retries without
//! `SOCK_CLOEXEC` and then calls `fcntl`), or that reaches a call through a
//! pointer, is not named. Neither is one that only forwards to another wrapper
//! under the same name: every site of it is inside that wrapper.
//!
//! Several wrappers of one name are glibc's cancellable function and its
//! non-cancellable twins (`read` and `__read_nocancel`; `close`,
//! `__close_nocancel` and `__close_nocancel_nostatus`). The one that makes a call
//! before it enters the kernel (the cancellation helper, or
//! `__pthread_enable_asynccancel` before glibc 2.41) keeps `N`; a single twin
//! beside it is named `__N_nocancel`, and twins of which there are several stay
//! unnamed. Without exactly one such caller none of them is named.
//!
//! Only a function the image left unnamed is a candidate, its own body (up to
//! the next function entry) at most [`MAX_BODY_INSNS`] instructions, and only
//! one from which the Listing's edges reach a `syscall` instruction through at
//! most [`MAX_FRAMES`] calls ([`reaching`]), so the cost follows the number of
//! system call sites rather than the size of the image. The names go out as signature
//! renames ([`FidMatch`] with `by_signature`): they replace only placeholders,
//! give way to a name the image's metadata states, and at the commit bring the
//! prototype the built-in tables or the type library declare for them. Each
//! named entry is also reported as a discovered entry: a wrapper that only the
//! Listing's call targets found (no FDE or symbol says it is a function) has no
//! function to rename otherwise.

use std::collections::{BTreeMap, BTreeSet, HashMap, VecDeque};

use object::Object;
use unlace_base::space::spacetype;
use unlace_decomp::syscalltables::LINUX_X86_64;
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::VarnodeData;

use crate::formatstring::fmtstatic::{LiftCache, Lifted, lift};
use crate::listing::{FlowKind, Listing, RefKind};
use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, FidMatch, Phase};

#[cfg(test)]
mod tests;

/// How many frames below the candidate the walk enters: glibc's cancellable
/// wrapper reaches its kernel entry three calls down (`__syscall_cancel`,
/// `__internal_syscall_cancel`, `__syscall_cancel_arch`).
const MAX_FRAMES: usize = 3;

const STEP_BUDGET: usize = 4096;

const MAX_BODY_INSNS: usize = 64;

const REGS: [&str; 16] = [
    "RAX", "RCX", "RDX", "RBX", "RSP", "RBP", "RSI", "RDI", "R8", "R9", "R10", "R11", "R12", "R13",
    "R14", "R15",
];
const RAX: usize = 0;
const RCX: usize = 1;
const RDX: usize = 2;
const RSP: usize = 4;
const RSI: usize = 6;
const RDI: usize = 7;
const R8: usize = 8;
const R9: usize = 9;
const R10: usize = 10;
const R11: usize = 11;

const C_ARGS: [usize; 6] = [RDI, RSI, RDX, RCX, R8, R9];
const SYSCALL_ARGS: [usize; 6] = [RDI, RSI, RDX, R10, R8, R9];
const CALLER_SAVED: [usize; 9] = [RAX, RCX, RDX, RSI, RDI, R8, R9, R10, R11];

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(crate) enum Val {
    Const(u64),
    Param(u8),
    Stack(i64),
    Unknown,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub(crate) struct Site {
    pub(crate) nr: Val,
    pub(crate) args: [Val; 6],
    /// The function the site is in when that is not the candidate itself: the
    /// outermost callee active, or the function a tail jump went to.
    pub(crate) via: Option<u64>,
}

#[derive(Clone, Copy, Debug)]
pub(crate) enum Slot {
    Param(u8),
    Const(u32),
    Any,
}

pub(crate) struct Form {
    pub(crate) call: &'static str,
    pub(crate) name: &'static str,
    pub(crate) slots: &'static [Slot],
}

const AT_FDCWD: u32 = -100i32 as u32;

/// The libc functions that make a system call under a different name or
/// signature (glibc `sysdeps/unix/sysv/linux/{recv,send,open64,_exit,fstatat64}.c`,
/// musl `src/network/{recv,send}.c`, `src/exit/_Exit.c`), and the variadic ones.
pub(crate) const FORMS: &[Form] = &[
    Form {
        call: "exit_group",
        name: "_exit",
        slots: &[Slot::Param(0)],
    },
    Form {
        call: "newfstatat",
        name: "fstatat",
        slots: &[
            Slot::Param(0),
            Slot::Param(1),
            Slot::Param(2),
            Slot::Param(3),
        ],
    },
    Form {
        call: "recvfrom",
        name: "recv",
        slots: &[
            Slot::Param(0),
            Slot::Param(1),
            Slot::Param(2),
            Slot::Param(3),
            Slot::Const(0),
            Slot::Const(0),
        ],
    },
    Form {
        call: "sendto",
        name: "send",
        slots: &[
            Slot::Param(0),
            Slot::Param(1),
            Slot::Param(2),
            Slot::Param(3),
            Slot::Const(0),
            Slot::Const(0),
        ],
    },
    Form {
        call: "openat",
        name: "open",
        slots: &[
            Slot::Const(AT_FDCWD),
            Slot::Param(0),
            Slot::Param(1),
            Slot::Any,
        ],
    },
    Form {
        call: "openat",
        name: "openat",
        slots: &[Slot::Param(0), Slot::Param(1), Slot::Param(2), Slot::Any],
    },
    Form {
        call: "open",
        name: "open",
        slots: &[Slot::Param(0), Slot::Param(1), Slot::Any],
    },
    Form {
        call: "fcntl",
        name: "fcntl",
        slots: &[Slot::Param(0), Slot::Param(1), Slot::Any],
    },
    Form {
        call: "ioctl",
        name: "ioctl",
        slots: &[Slot::Param(0), Slot::Param(1), Slot::Any],
    },
];

fn call_entry(nr: u64) -> Option<(&'static str, Option<u8>)> {
    let nr = i64::try_from(nr).ok()?;
    LINUX_X86_64
        .binary_search_by_key(&nr, |e| e.0)
        .ok()
        .map(|i| (LINUX_X86_64[i].1, LINUX_X86_64[i].2))
}

fn fits(slots: &[Slot], args: &[Val; 6]) -> bool {
    slots.iter().zip(args).all(|(slot, arg)| match (slot, arg) {
        (Slot::Any, _) => true,
        (Slot::Param(p), Val::Param(q)) => p == q,
        (Slot::Const(k), Val::Const(c)) => *c as u32 == *k,
        _ => false,
    })
}

/// The libc name of the function whose walk reached `sites`, or `None` when the
/// sites do not make one system call with the function's own arguments.
pub(crate) fn name_of(sites: &[Site]) -> Option<&'static str> {
    let Val::Const(nr) = sites.first()?.nr else {
        return None;
    };
    if sites.iter().any(|s| s.nr != Val::Const(nr)) {
        return None;
    }
    let (call, arity) = call_entry(nr)?;
    let arity = usize::from(arity?);
    let own: Vec<Slot> = (0..arity as u8).map(Slot::Param).collect();
    let forms = FORMS
        .iter()
        .filter(|f| f.call == call && f.slots.len() == arity)
        .map(|f| (f.name, f.slots))
        .chain(std::iter::once((call, own.as_slice())));
    let mut chosen = None;
    for site in sites {
        let name = forms
            .clone()
            .find(|(_, slots)| fits(slots, &site.args))
            .map(|(name, _)| name)?;
        if chosen.is_some_and(|c| c != name) {
            return None;
        }
        chosen = Some(name);
    }
    chosen
}

#[derive(Clone, Debug)]
pub(crate) struct Found {
    pub(crate) name: &'static str,
    pub(crate) calls_out: bool,
    pub(crate) vias: BTreeSet<Option<u64>>,
}

/// The names to give: no forwarder, and each name at one address (a single
/// non-cancellable twin of glibc's renamed `__N_nocancel`).
pub(crate) fn resolve(found: &BTreeMap<u64, Found>) -> Vec<(u64, String)> {
    let mut by_name: BTreeMap<&str, Vec<u64>> = BTreeMap::new();
    for (&entry, f) in found {
        let forwards = f.vias.len() == 1
            && f.vias
                .iter()
                .flatten()
                .any(|via| found.get(via).is_some_and(|g| g.name == f.name));
        if !forwards {
            by_name.entry(f.name).or_default().push(entry);
        }
    }
    let mut names = Vec::new();
    for (name, entries) in by_name {
        if let [one] = entries[..] {
            names.push((one, name.to_string()));
            continue;
        }
        let (calling, direct): (Vec<u64>, Vec<u64>) =
            entries.iter().partition(|e| found[*e].calls_out);
        if let [cancellable] = calling[..] {
            names.push((cancellable, name.to_string()));
            if let [twin] = direct[..] {
                names.push((twin, format!("__{name}_nocancel")));
            }
        }
    }
    names.sort();
    names
}

struct Regs {
    space: usize,
    base: [u64; 16],
}

impl Regs {
    fn new(ctx: &AnalysisCtx) -> Option<Regs> {
        let translate = ctx.arch.translate();
        let mut base = [0u64; 16];
        let mut space = None;
        for (i, name) in REGS.iter().enumerate() {
            let vn = translate.get_register_data(name).ok()?;
            if vn.size != 8 {
                return None;
            }
            let index = vn.space.as_ref()?.get_index() as usize;
            if space.is_some_and(|s| s != index) {
                return None;
            }
            space = Some(index);
            base[i] = vn.offset;
        }
        Some(Regs {
            space: space?,
            base,
        })
    }

    fn slot(&self, vn: &VarnodeData) -> Option<(usize, u64)> {
        if vn.space.as_ref()?.get_index() as usize != self.space {
            return None;
        }
        let end = vn.offset.checked_add(u64::from(vn.size))?;
        self.base
            .iter()
            .position(|&b| vn.offset >= b && end <= b + 8)
            .map(|i| (i, vn.offset - self.base[i]))
    }
}

fn mask(size: u32) -> u64 {
    if size >= 8 {
        u64::MAX
    } else {
        (1u64 << (size * 8)) - 1
    }
}

fn sext(v: u64, size: u32) -> u64 {
    if size == 0 || size >= 8 {
        return v;
    }
    let bits = size * 8;
    let v = v & mask(size);
    if v >> (bits - 1) & 1 == 1 {
        v | !mask(size)
    } else {
        v
    }
}

#[derive(Clone)]
struct Path {
    at: u64,
    op: usize,
    regs: [Val; 16],
    stack: BTreeMap<i64, (u32, Val)>,
    temps: HashMap<(u64, u32), Val>,
    frames: Vec<(u64, u64)>,
    func: u64,
    seen: Vec<(u64, usize)>,
}

impl Path {
    fn read_stack(&self, at: i64, size: u32) -> Val {
        match self.stack.get(&at) {
            Some(&(width, Val::Const(c))) if width >= size => Val::Const(c & mask(size)),
            Some(&(width, v)) if width == size => v,
            _ => Val::Unknown,
        }
    }

    fn write_stack(&mut self, at: i64, size: u32, v: Val) {
        let end = at + i64::from(size);
        self.stack
            .retain(|&o, &mut (w, _)| o + i64::from(w) <= at || o >= end);
        self.stack.insert(at, (size, v));
    }
}

struct Walk {
    sites: Vec<Site>,
    calls_out: bool,
    complete: bool,
}

struct Walker<'a, 'c> {
    ctx: &'a AnalysisCtx<'c>,
    listing: &'a Listing,
    regs: Regs,
    syscall: u64,
    lifts: LiftCache,
}

impl Walker<'_, '_> {
    fn read(&self, path: &Path, vn: &VarnodeData) -> Val {
        let Some(space) = vn.space.as_ref() else {
            return Val::Unknown;
        };
        match space.get_type() {
            spacetype::IPTR_CONSTANT => Val::Const(vn.offset & mask(vn.size)),
            spacetype::IPTR_INTERNAL => path
                .temps
                .get(&(vn.offset, vn.size))
                .copied()
                .unwrap_or(Val::Unknown),
            _ => match self.regs.slot(vn) {
                Some((i, 0)) => match path.regs[i] {
                    Val::Const(c) => Val::Const(c & mask(vn.size)),
                    Val::Stack(d) if vn.size == 8 => Val::Stack(d),
                    Val::Stack(_) => Val::Unknown,
                    v => v,
                },
                Some((i, shift)) => match path.regs[i] {
                    Val::Const(c) => Val::Const((c >> (shift * 8)) & mask(vn.size)),
                    _ => Val::Unknown,
                },
                None => Val::Unknown,
            },
        }
    }

    fn write(&self, path: &mut Path, vn: &VarnodeData, v: Val) {
        let Some(space) = vn.space.as_ref() else {
            return;
        };
        if space.get_type() == spacetype::IPTR_INTERNAL {
            path.temps.insert((vn.offset, vn.size), v);
            return;
        }
        let Some((i, shift)) = self.regs.slot(vn) else {
            return;
        };
        let old = path.regs[i];
        path.regs[i] = match (old, v) {
            _ if vn.size == 8 => v,
            (_, Val::Param(p)) if shift == 0 => Val::Param(p),
            (Val::Const(o), Val::Const(c)) => {
                let m = mask(vn.size) << (shift * 8);
                Val::Const((o & !m) | ((c << (shift * 8)) & m))
            }
            (_, Val::Const(c)) if shift == 0 && vn.size == 4 => Val::Const(c & mask(4)),
            _ => Val::Unknown,
        };
    }

    fn eval(&self, path: &Path, opc: OpCode, out: &VarnodeData, ins: &[VarnodeData]) -> Val {
        let arg = |i: usize| ins.get(i).map_or(Val::Unknown, |vn| self.read(path, vn));
        let same = ins.len() == 2 && ins[0] == ins[1];
        let size = out.size;
        let c = |v: u64| Val::Const(v & mask(size));
        match (opc, arg(0), arg(1)) {
            (OpCode::CPUI_COPY, v, _) => v,
            (OpCode::CPUI_INT_ZEXT, Val::Const(a), _) => c(a),
            (OpCode::CPUI_INT_SEXT, Val::Const(a), _) => c(sext(a, ins[0].size)),
            (OpCode::CPUI_INT_ZEXT | OpCode::CPUI_INT_SEXT, Val::Param(p), _) => Val::Param(p),
            (OpCode::CPUI_SUBPIECE, Val::Const(a), Val::Const(k)) => {
                c(if k >= 8 { 0 } else { a >> (k * 8) })
            }
            (OpCode::CPUI_SUBPIECE, Val::Param(p), Val::Const(0)) => Val::Param(p),
            (OpCode::CPUI_INT_XOR | OpCode::CPUI_INT_SUB, _, _) if same => c(0),
            (OpCode::CPUI_INT_ADD, Val::Stack(d), Val::Const(k))
            | (OpCode::CPUI_INT_ADD, Val::Const(k), Val::Stack(d)) => {
                Val::Stack(d.wrapping_add(sext(k, ins[1].size.min(ins[0].size)) as i64))
            }
            (OpCode::CPUI_INT_SUB, Val::Stack(d), Val::Const(k)) => {
                Val::Stack(d.wrapping_sub(sext(k, ins[1].size) as i64))
            }
            (OpCode::CPUI_INT_ADD, Val::Const(a), Val::Const(b)) => c(a.wrapping_add(b)),
            (OpCode::CPUI_INT_SUB, Val::Const(a), Val::Const(b)) => c(a.wrapping_sub(b)),
            (OpCode::CPUI_INT_AND, Val::Const(a), Val::Const(b)) => c(a & b),
            (OpCode::CPUI_INT_OR, Val::Const(a), Val::Const(b)) => c(a | b),
            (OpCode::CPUI_INT_XOR, Val::Const(a), Val::Const(b)) => c(a ^ b),
            (OpCode::CPUI_LOAD, _, Val::Stack(d)) => path.read_stack(d, size),
            _ => Val::Unknown,
        }
    }

    fn walk(&mut self, entry: u64) -> Walk {
        let mut regs = [Val::Unknown; 16];
        for (n, &r) in C_ARGS.iter().enumerate() {
            regs[r] = Val::Param(n as u8);
        }
        regs[RSP] = Val::Stack(0);
        let start = Path {
            at: entry,
            op: 0,
            regs,
            stack: BTreeMap::from([(8, (8, Val::Param(6))), (16, (8, Val::Param(7)))]),
            temps: HashMap::new(),
            frames: Vec::new(),
            func: entry,
            seen: Vec::new(),
        };
        let mut walk = Walk {
            sites: Vec::new(),
            calls_out: false,
            complete: true,
        };
        let mut steps = 0;
        let mut pending = vec![start];
        while let Some(mut path) = pending.pop() {
            if !self.run(entry, &mut path, &mut pending, &mut walk, &mut steps) {
                walk.complete = false;
                return walk;
            }
        }
        walk
    }

    /// Run `path` to its end, queueing the branches it does not take. `false`
    /// when the candidate cannot be decided.
    fn run(
        &mut self,
        entry: u64,
        path: &mut Path,
        pending: &mut Vec<Path>,
        walk: &mut Walk,
        steps: &mut usize,
    ) -> bool {
        loop {
            if path.op == 0 {
                let key = (path.at, path.frames.len());
                if path.seen.contains(&key) {
                    return true;
                }
                path.seen.push(key);
                path.temps.clear();
                *steps += 1;
                if *steps > STEP_BUDGET {
                    return false;
                }
            }
            let depth = path.frames.len();
            let listing = self.listing;
            let Some(fall_through) = listing.instruction_at(path.at).map(|i| i.fall_through) else {
                return depth > 0;
            };
            let Some(lifted) = lift(self.ctx, path.at, &mut self.lifts).filter(|l| l.ok) else {
                return depth > 0;
            };
            match self.step(entry, path, &lifted, fall_through, pending, walk) {
                Next::Op => path.op += 1,
                Next::Goto(at) => {
                    path.at = at;
                    path.op = 0;
                }
                Next::Jump(op) => path.op = op,
                Next::End => return true,
                Next::Opaque => return depth > 0,
            }
            if path.op >= lifted.ops.len() && path.op != 0 {
                match fall_through {
                    Some(next) => {
                        path.at = next;
                        path.op = 0;
                    }
                    None => return true,
                }
            }
        }
    }

    fn step(
        &self,
        entry: u64,
        path: &mut Path,
        lifted: &Lifted,
        fall_through: Option<u64>,
        pending: &mut Vec<Path>,
        walk: &mut Walk,
    ) -> Next {
        let Some((opc, out, ins)) = lifted.ops.get(path.op) else {
            return Next::Op;
        };
        let target = ins.first();
        let relative = target.and_then(|t| t.space.as_ref()).map(|s| s.get_type())
            == Some(spacetype::IPTR_CONSTANT);
        match *opc {
            OpCode::CPUI_BRANCH if relative => Next::Jump(
                path.op
                    .wrapping_add_signed(target.map_or(0, |t| t.offset as i64) as isize),
            ),
            OpCode::CPUI_BRANCH => {
                let to = target.map_or(0, |t| t.offset);
                if path.frames.is_empty()
                    && to != path.func
                    && self.listing.function_at(to).is_some()
                {
                    path.func = to;
                }
                Next::Goto(to)
            }
            OpCode::CPUI_CBRANCH => {
                let mut taken = path.clone();
                if relative {
                    taken.op = path
                        .op
                        .wrapping_add_signed(target.map_or(0, |t| t.offset as i64) as isize);
                } else {
                    taken.at = target.map_or(0, |t| t.offset);
                    taken.op = 0;
                }
                pending.push(taken);
                Next::Op
            }
            OpCode::CPUI_CALL => {
                let to = target.map_or(0, |t| t.offset);
                if path.frames.is_empty() {
                    walk.calls_out = true;
                }
                let returns = !self.listing.is_noreturn_target(to)
                    && !self
                        .listing
                        .function_at(to)
                        .is_some_and(|f| f.has_no_return);
                let Some(back) = fall_through.filter(|_| returns) else {
                    return Next::End;
                };
                if !self.listing.is_instruction_start(to) {
                    return Next::End;
                }
                if path.frames.len() < MAX_FRAMES {
                    path.frames.push((back, to));
                    return Next::Goto(to);
                }
                for r in CALLER_SAVED {
                    path.regs[r] = Val::Unknown;
                }
                path.regs[RSP] = match path.regs[RSP] {
                    Val::Stack(d) => Val::Stack(d + 8),
                    _ => Val::Unknown,
                };
                Next::Goto(back)
            }
            OpCode::CPUI_RETURN => match path.frames.pop() {
                Some((back, _)) => Next::Goto(back),
                None => Next::End,
            },
            OpCode::CPUI_BRANCHIND | OpCode::CPUI_CALLIND => Next::Opaque,
            OpCode::CPUI_CALLOTHER => {
                if target.is_some_and(|t| t.offset == self.syscall) {
                    let via = path
                        .frames
                        .first()
                        .map(|&(_, callee)| callee)
                        .or((path.func != entry).then_some(path.func));
                    walk.sites.push(Site {
                        nr: path.regs[RAX],
                        args: SYSCALL_ARGS.map(|r| path.regs[r]),
                        via,
                    });
                    path.regs[RAX] = Val::Unknown;
                }
                if let Some(out) = out {
                    self.write(path, out, Val::Unknown);
                }
                Next::Op
            }
            OpCode::CPUI_STORE => {
                if let (Some(at), Some(value)) = (ins.get(1), ins.get(2)) {
                    if let Val::Stack(d) = self.read(path, at) {
                        let v = self.read(path, value);
                        path.write_stack(d, value.size, v);
                    }
                }
                Next::Op
            }
            _ => {
                if let Some(out) = out {
                    let v = self.eval(path, *opc, out, ins);
                    self.write(path, out, v);
                }
                Next::Op
            }
        }
    }
}

enum Next {
    Op,
    Jump(usize),
    Goto(u64),
    End,
    Opaque,
}

/// The function entries from which the Listing reaches a `syscall` instruction
/// through at most [`MAX_FRAMES`] calls. From each site the straight-line run
/// that falls into it is followed back to its start (or to a function entry);
/// every jump into the run is followed back too, and every call into it at one
/// more call. A run that a jump enters in the middle (musl's `__syscall_cp` is a
/// `jmp` into its helper) is still reached from the jump's own function.
fn reaching(walker: &mut Walker<'_, '_>) -> BTreeSet<u64> {
    let listing = walker.listing;
    let mut queue: VecDeque<(u64, usize)> = listing
        .instructions()
        .filter(|(_, insn)| insn.flow.kind == FlowKind::CallOther)
        .map(|(&at, _)| at)
        .filter(|&at| {
            lift(walker.ctx, at, &mut walker.lifts).is_some_and(|l| {
                l.ops.iter().any(|(opc, _, ins)| {
                    *opc == OpCode::CPUI_CALLOTHER
                        && ins.first().is_some_and(|t| t.offset == walker.syscall)
                })
            })
        })
        .map(|at| (at, 0))
        .collect();
    let mut seen = BTreeSet::new();
    let mut entries = BTreeSet::new();
    while let Some((at, calls)) = queue.pop_front() {
        if !seen.insert(at) {
            continue;
        }
        let mut cur = at;
        for _ in 0..MAX_BODY_INSNS {
            for r in listing.refs_to(cur) {
                let next = match r.kind {
                    RefKind::Code => calls,
                    RefKind::Call if calls < MAX_FRAMES => calls + 1,
                    _ => continue,
                };
                queue.push_back((r.from, next));
            }
            if listing.function_at(cur).is_some() {
                entries.insert(cur);
                break;
            }
            match listing.instruction_entry_before(cur) {
                Some((before, insn)) if insn.fall_through == Some(cur) => cur = before,
                _ => break,
            }
        }
    }
    entries
}

pub struct SyscallWrappersPass;

impl AnalysisPass for SyscallWrappersPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "syscallwrappers"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = AnalysisOutput::default();
        let Some(listing) = ctx.listing else {
            return out;
        };
        if ctx.file.architecture() != object::Architecture::X86_64
            || ctx.file.format() != object::BinaryFormat::Elf
            || !listing.has_refs()
            || !crate::loader::format::elf_userland::is_linux_image(ctx.bytes)
        {
            return out;
        }
        let (Some(regs), Some(syscall)) = (
            Regs::new(ctx),
            ctx.arch
                .userops
                .get_op_by_name(b"syscall")
                .map(|op| op.get_index() as u64),
        ) else {
            return out;
        };
        let mut walker = Walker {
            ctx,
            listing,
            regs,
            syscall,
            lifts: LiftCache::new(),
        };
        let mut found = BTreeMap::new();
        for entry in reaching(&mut walker) {
            let Some(f) = listing.function_at(entry) else {
                continue;
            };
            if f.name.is_some() || f.from_symbol {
                continue;
            }
            let end = listing.next_function_after(entry).map(|g| g.entry);
            if listing
                .instructions_in_range(entry, end)
                .nth(MAX_BODY_INSNS)
                .is_some()
            {
                continue;
            }
            let walk = walker.walk(entry);
            if !walk.complete {
                continue;
            }
            if let Some(name) = name_of(&walk.sites) {
                found.insert(
                    entry,
                    Found {
                        name,
                        calls_out: walk.calls_out,
                        vias: walk.sites.iter().map(|s| s.via).collect(),
                    },
                );
            }
        }
        for (addr, name) in resolve(&found) {
            out.entries.push(addr);
            out.fid_names.push(FidMatch {
                addr,
                name,
                by_signature: true,
            });
        }
        out
    }
}
