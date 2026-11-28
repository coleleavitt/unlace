//! Bounded MIPS32-BE direct-call closure with private-frame return-token proof.
//! Object, mode, relocation and effective-byte admission is the frontend's job.
//! The whitelist follows `mips32Instructions.sinc` in legacy delay-slot mode.

use std::collections::{BTreeMap, BTreeSet, VecDeque};

use super::CodeRegion;

const MAX_BYTES: usize = 65_536;
const MAX_WORDS: usize = MAX_BYTES / 4;
const MAX_FUNCTION_WORDS: u64 = 512;
const SP: usize = 29;
const FP: usize = 30;
const RA: usize = 31;
const SAVED: [usize; 9] = [16, 17, 18, 19, 20, 21, 22, 23, 28];

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Value {
    Unknown,
    Zero,
    EntryRa,
    EntryFp,
    EntrySaved(usize),
    Link(u64),
    Stack(i32),
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Insn {
    Move(usize, usize),
    Addiu(usize, usize, i16),
    Numeric(usize),
    Load(usize, usize, i16),
    Store(usize, usize, i16),
    Call(u64),
    Return,
}

fn decode(word: u32, pc: u64) -> Option<Insn> {
    let rs = ((word >> 21) & 31) as usize;
    let rt = ((word >> 16) & 31) as usize;
    let rd = ((word >> 11) & 31) as usize;
    let shift = (word >> 6) & 31;
    let imm = word as i16;
    Some(match word >> 26 {
        0 => match word & 63 {
            0 if word == 0x0000_0140 => return None,
            0 | 2 | 3 if rs == 0 => {
                if shift == 0 {
                    Insn::Move(rd, rt)
                } else {
                    Insn::Numeric(rd)
                }
            }
            4 | 6 | 7 if shift == 0 => {
                if rs == 0 {
                    Insn::Move(rd, rt)
                } else {
                    Insn::Numeric(rd)
                }
            }
            0x21 | 0x25 | 0x26 if shift == 0 && rt == 0 => Insn::Move(rd, rs),
            0x21 | 0x25 | 0x26 if shift == 0 && rs == 0 => Insn::Move(rd, rt),
            0x23 if shift == 0 && rt == 0 => Insn::Move(rd, rs),
            0x21 | 0x23..=0x27 | 0x2a | 0x2b if shift == 0 => Insn::Numeric(rd),
            8 if word == 0x03e0_0008 => Insn::Return,
            _ => return None,
        },
        3 => Insn::Call(
            ((pc.checked_add(4)? & 0xf000_0000) | (u64::from(word & 0x03ff_ffff) << 2))
                & 0xffff_ffff,
        ),
        9 => Insn::Addiu(rt, rs, imm),
        0x0a..=0x0e => Insn::Numeric(rt),
        0x0f if rs == 0 => Insn::Numeric(rt),
        0x23 => Insn::Load(rt, rs, imm),
        0x2b => Insn::Store(rt, rs, imm),
        _ => return None,
    })
}

fn ordinary(insn: Insn) -> bool {
    !matches!(insn, Insn::Call(_) | Insn::Return)
}

struct Frame {
    regs: [Value; 32],
    base: Option<i32>,
    cells: BTreeMap<i32, Value>,
    saved_ra: Option<i32>,
}

impl Frame {
    fn new() -> Self {
        let mut regs = [Value::Unknown; 32];
        regs[0] = Value::Zero;
        regs[SP] = Value::Stack(0);
        regs[FP] = Value::EntryFp;
        regs[RA] = Value::EntryRa;
        for reg in SAVED {
            regs[reg] = Value::EntrySaved(reg);
        }
        Self {
            regs,
            base: None,
            cells: BTreeMap::new(),
            saved_ra: None,
        }
    }

    fn write(&mut self, dst: usize, value: Value, restore_ra: bool) -> Option<()> {
        if dst == 0 {
            return Some(());
        }
        if matches!(
            value,
            Value::EntryRa | Value::EntryFp | Value::Link(_) | Value::Stack(_)
        ) && !matches!(dst, SP | FP | RA)
        {
            return None;
        }
        if dst == RA && !(restore_ra && value == Value::EntryRa) {
            return None;
        }
        if dst == SP {
            let Value::Stack(next) = value else {
                return None;
            };
            if let Some(base) = self.base {
                if next != base && next != 0 {
                    return None;
                }
            } else if self.regs[SP] == Value::Stack(0) && next < 0 && next % 8 == 0 {
                self.base = Some(next);
            } else if next != 0 {
                return None;
            }
        }
        self.regs[dst] = value;
        Some(())
    }

    fn cell(&self, base: usize, off: i16) -> Option<i32> {
        let frame = self.base?;
        if self.regs[SP] != Value::Stack(frame) {
            return None;
        }
        let Value::Stack(at) = self.regs[base] else {
            return None;
        };
        let at = at.checked_add(i32::from(off))?;
        (at >= frame && at.checked_add(4)? <= 0 && at % 4 == 0).then_some(at)
    }

    fn step(&mut self, insn: Insn) -> Option<()> {
        match insn {
            Insn::Move(dst, src) => self.write(dst, self.regs[src], false),
            Insn::Addiu(dst, src, imm) => {
                let value = match self.regs[src] {
                    Value::Stack(at) => Value::Stack(at.checked_add(i32::from(imm))?),
                    value if imm == 0 => value,
                    _ => Value::Unknown,
                };
                self.write(dst, value, false)
            }
            Insn::Numeric(dst) => self.write(dst, Value::Unknown, false),
            Insn::Load(dst, base, off) => {
                let cell = self.cell(base, off)?;
                let value = *self.cells.get(&cell)?;
                if dst == RA && Some(cell) != self.saved_ra {
                    return None;
                }
                if matches!(
                    value,
                    Value::EntryRa | Value::EntryFp | Value::Link(_) | Value::Stack(_)
                ) && !matches!(dst, SP | FP | RA)
                {
                    return None;
                }
                self.write(dst, value, dst == RA)
            }
            Insn::Store(src, base, off) => {
                let at = self.cell(base, off)?;
                if self.saved_ra == Some(at) {
                    return None;
                }
                let value = self.regs[src];
                if value == Value::EntryRa {
                    if self.saved_ra.is_some() {
                        return None;
                    }
                    self.saved_ra = Some(at);
                }
                self.cells.insert(at, value);
                Some(())
            }
            Insn::Call(_) | Insn::Return => None,
        }
    }

    fn call(&mut self, link: u64) -> Option<()> {
        if self.regs[SP] != Value::Stack(self.base.unwrap_or(0))
            || self.regs[RA] != Value::Link(link)
        {
            return None;
        }
        let before = self.regs;
        self.regs = [Value::Unknown; 32];
        self.regs[0] = Value::Zero;
        self.regs[SP] = before[SP];
        self.regs[FP] = before[FP];
        for reg in SAVED {
            self.regs[reg] = before[reg];
        }
        self.regs[RA] = Value::Link(link);
        Some(())
    }
}

fn layout(
    start: u64,
    end: u64,
    words: &BTreeMap<u64, u32>,
    entries: &BTreeMap<u64, u64>,
    calls: &mut BTreeSet<(u64, u64)>,
) -> Option<BTreeSet<u64>> {
    let mut at = start;
    let mut returned = false;
    let mut targets = BTreeSet::new();
    while at < end {
        let word = *words.get(&at)?;
        if returned {
            if word != 0 {
                return None;
            }
            at += 4;
            continue;
        }
        match decode(word, at)? {
            Insn::Call(target) => {
                if !entries.contains_key(&target) {
                    return None;
                }
                targets.insert(target);
                calls.insert((at, target));
            }
            Insn::Return => returned = true,
            _ => {
                at += 4;
                continue;
            }
        }
        let delay = at.checked_add(4)?;
        if delay >= end || !ordinary(decode(*words.get(&delay)?, delay)?) {
            return None;
        }
        at += 8;
    }
    returned.then_some(targets)
}

fn prove_frame(start: u64, end: u64, words: &BTreeMap<u64, u32>) -> Option<()> {
    let mut frame = Frame::new();
    let mut at = start;
    while at < end {
        match decode(*words.get(&at)?, at)? {
            Insn::Call(_) => {
                let link = at.checked_add(8)? & 0xffff_ffff;
                frame.regs[RA] = Value::Link(link);
                frame.step(decode(*words.get(&(at + 4))?, at + 4)?)?;
                frame.call(link)?;
                at += 8;
            }
            Insn::Return => {
                if frame.regs[RA] != Value::EntryRa {
                    return None;
                }
                frame.step(decode(*words.get(&(at + 4))?, at + 4)?)?;
                return (frame.regs[SP] == Value::Stack(0)
                    && frame.regs[FP] == Value::EntryFp
                    && SAVED
                        .iter()
                        .all(|&reg| frame.regs[reg] == Value::EntrySaved(reg)))
                .then_some(());
            }
            insn => {
                frame.step(insn)?;
                at += 4;
            }
        }
    }
    None
}

/// Prove executed transfer closure from one sealed process entry. Its exact
/// JAL/NOP/J-self/NOP stub never returns outside the image. Ordinary functions
/// retain only direct calls and proved ABI returns; integer values are not targets.
pub fn closed_image(
    entry: u64,
    regions: &[CodeRegion],
    entries: &[(u64, u64)],
    observed_calls: &BTreeSet<(u64, u64)>,
) -> Option<BTreeMap<u64, Vec<u64>>> {
    closed(Some(entry), regions, entries, observed_calls)
}

fn sealed_root(
    entry: u64,
    words: &BTreeMap<u64, u32>,
    functions: &BTreeMap<u64, u64>,
) -> Option<u64> {
    if functions.get(&entry).copied() != entry.checked_add(16) {
        return None;
    }
    let Insn::Call(target) = decode(*words.get(&entry)?, entry)? else {
        return None;
    };
    let spin = entry.checked_add(8)?;
    let jump = *words.get(&spin)?;
    let destination =
        ((spin.checked_add(4)? & 0xf000_0000) | (u64::from(jump & 0x03ff_ffff) << 2)) & 0xffff_ffff;
    if target == entry
        || !functions.contains_key(&target)
        || *words.get(&entry.checked_add(4)?)? != 0
        || jump >> 26 != 2
        || destination != spin
        || *words.get(&entry.checked_add(12)?)? != 0
    {
        return None;
    }
    Some(target)
}

fn closed(
    root: Option<u64>,
    regions: &[CodeRegion],
    entries: &[(u64, u64)],
    observed_calls: &BTreeSet<(u64, u64)>,
) -> Option<BTreeMap<u64, Vec<u64>>> {
    if regions.is_empty()
        || entries.is_empty()
        || regions.len() > MAX_WORDS
        || entries.len() > MAX_WORDS
        || observed_calls.len() > MAX_WORDS
    {
        return None;
    }
    let mut bytes = 0usize;
    let mut words = BTreeMap::new();
    for region in regions {
        bytes = bytes.checked_add(region.bytes.len())?;
        let end = region.address.checked_add(region.bytes.len() as u64)?;
        if bytes > MAX_BYTES
            || region.bytes.is_empty()
            || region.address % 4 != 0
            || region.bytes.len() % 4 != 0
            || end > 0x1_0000_0000
        {
            return None;
        }
        for (index, chunk) in region.bytes.as_chunks::<4>().0.iter().enumerate() {
            if words
                .insert(
                    region.address + index as u64 * 4,
                    u32::from_be_bytes(*chunk),
                )
                .is_some()
            {
                return None;
            }
        }
    }
    let mut functions = BTreeMap::new();
    let mut owned = BTreeSet::new();
    for &(start, size) in entries {
        let end = start.checked_add(size)?;
        if start % 4 != 0
            || size == 0
            || size % 4 != 0
            || size / 4 > MAX_FUNCTION_WORDS
            || end > 0x1_0000_0000
            || functions.insert(start, end).is_some()
        {
            return None;
        }
        for at in (start..end).step_by(4) {
            if !words.contains_key(&at) || !owned.insert(at) {
                return None;
            }
        }
    }
    if words
        .iter()
        .any(|(at, word)| !owned.contains(at) && *word != 0)
    {
        return None;
    }
    if let Some(entry) = root {
        let end = entry.checked_add(16)?;
        if !regions.iter().any(|region| {
            region.address <= entry
                && region
                    .address
                    .checked_add(region.bytes.len() as u64)
                    .is_some_and(|last| end <= last)
        }) {
            return None;
        }
    }
    let mut calls = BTreeSet::new();
    let mut dependencies = BTreeMap::new();
    let mut callers: BTreeMap<u64, Vec<u64>> = BTreeMap::new();
    for (&start, &end) in &functions {
        let targets = if root == Some(start) {
            let target = sealed_root(start, &words, &functions)?;
            calls.insert((start, target));
            BTreeSet::from([target])
        } else {
            layout(start, end, &words, &functions, &mut calls)?
        };
        if targets.iter().any(|target| Some(*target) == root) {
            return None;
        }
        for &target in &targets {
            callers.entry(target).or_default().push(start);
        }
        dependencies.insert(start, targets.len());
    }
    if &calls != observed_calls {
        return None;
    }
    if root.is_some_and(|entry| !functions.contains_key(&entry)) {
        return None;
    }
    let mut ready: VecDeque<u64> = dependencies
        .iter()
        .filter_map(|(&entry, &n)| (n == 0).then_some(entry))
        .collect();
    let mut proved = 0usize;
    while let Some(entry) = ready.pop_front() {
        if Some(entry) != root {
            prove_frame(entry, functions[&entry], &words)?;
        }
        proved += 1;
        for caller in callers.get(&entry).into_iter().flatten() {
            let count = dependencies.get_mut(caller)?;
            *count = count.checked_sub(1)?;
            if *count == 0 {
                ready.push_back(*caller);
            }
        }
    }
    if proved != functions.len() {
        return None;
    }
    let mut sites: BTreeMap<u64, Vec<u64>> = BTreeMap::new();
    for (at, target) in calls {
        sites.entry(target).or_default().push(at);
    }
    Some(sites)
}

#[cfg(test)]
mod tests;
