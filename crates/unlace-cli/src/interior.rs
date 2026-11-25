//! Address selections that land inside another function's extent.
//!
//! `--addr` declares that a function starts where it points, which is how an
//! entry discovery missed gets decompiled at all, so such a selection is never
//! refused. But the same command at an address inside a function discovery did
//! find prints a plausible `sub_<addr>` body that is a fragment of its
//! neighbour, and nothing said so -- nor did the `sub_<addr>` name of that
//! fragment, which selects the same address. Every surface that takes an
//! explicit selection now prints a `note:` on stderr naming the containing
//! inventory entry and the offset, decided from the address the selection
//! resolved to, and the `--json` record of such a target carries the same fact
//! as `interior_to` (absent everywhere else, so every other document is
//! byte-identical). A `--define-function` at the address makes it an entry,
//! which is the way to say the fragment is meant.

use std::collections::BTreeMap;

use unlace_console::engine::{ConsoleProgram, FunctionEntry};

use crate::decompile_all::Args;
use crate::jsonfmt::Json;

/// The containing entry of one addressed target, in the target's display units.
#[derive(Clone, Debug, PartialEq, Eq)]
pub(crate) struct Interior {
    pub(crate) addr: u64,
    pub(crate) owner: String,
    pub(crate) entry: u64,
}

/// The selected targets inside another entry's extent, keyed by the target's
/// byte address.
pub(crate) type Interiors = BTreeMap<u64, Interior>;

/// Note each explicitly selected target (`--addr`/`--functions`, already
/// resolved and deduplicated) that lands inside another function. An
/// unfiltered run selects inventory entries only, so it asks nothing.
pub(crate) fn selections(
    prog: &ConsoleProgram,
    args: &Args,
    targets: &[FunctionEntry],
) -> Interiors {
    if args.addrs.is_empty() && args.names.is_none() {
        return Interiors::new();
    }
    of_targets(prog, targets)
}

/// [`selections`] for targets chosen outside the argument list (the embedding
/// API's per-call selection), where every target counts as explicitly selected.
pub(crate) fn of_targets(prog: &ConsoleProgram, targets: &[FunctionEntry]) -> Interiors {
    let mut found = Interiors::new();
    let bytes: Vec<u64> = targets.iter().map(|t| t.addr.get_offset()).collect();
    for (byte, owner) in bytes.iter().zip(prog.entries_containing(&bytes)) {
        let Some(owner) = owner else {
            if let Some(note) = past_flow_note(prog, *byte) {
                eprintln!("{note}");
            }
            continue;
        };
        let interior = Interior {
            addr: prog.output_code_offset(*byte),
            owner: owner.name,
            entry: prog.output_code_offset(owner.addr.get_offset()),
        };
        eprintln!("{}", note(&interior));
        found.insert(*byte, interior);
    }
    found
}

/// The stderr line, one wording for every surface.
pub(crate) fn note(i: &Interior) -> String {
    format!(
        "note: {:#x} is interior to {} ({:#x}+{:#x}), not an entry unlace discovered; \
         decompiled from {:#x} as asked (--define-function {:#x} declares a function there)",
        i.addr,
        i.owner,
        i.entry,
        i.addr - i.entry,
        i.addr,
        i.addr
    )
}

/// (unlace #1288) The stderr line for a selection past the end of the flow of
/// the function in front of it (`ConsoleProgram::flow_ended_before`): an
/// MS-DOS program's data after a function's code is in no function.
fn past_flow_note(prog: &ConsoleProgram, byte: u64) -> Option<String> {
    let (owner, end) = prog.flow_ended_before(byte)?;
    Some(past_flow_line(
        prog.output_code_offset(byte),
        &owner.name,
        prog.output_code_offset(end),
    ))
}

fn past_flow_line(at: u64, owner: &str, end: u64) -> String {
    format!(
        "note: {at:#x} is past the end of {owner} at {end:#x}, after the last instruction its flow \
         reaches, and in no function unlace discovered; decompiled from {at:#x} as asked \
         (--define-function {at:#x} declares a function there)"
    )
}

/// The `function containing` answer for a selection past the end of the flow
/// of the function in front of it, as [`past_flow_note`] words it:
/// `<addr> is past the end of <name> at <end>`.
pub(crate) fn past_flow_from_transcript(transcript: &str) -> Option<String> {
    transcript.lines().find_map(|line| {
        let line = line.trim();
        let line = line.strip_prefix("[decomp]>").unwrap_or(line).trim();
        let (addr, rest) = line.split_once(" is past the end of ")?;
        let (owner, end) = rest.rsplit_once(" at ")?;
        Some(past_flow_line(hex(addr)?, owner, hex(end)?))
    })
}

/// The record field: the containing function and the offset into it.
pub(crate) fn json(i: &Interior) -> Json {
    Json::Object(vec![
        ("name".into(), Json::Str(i.owner.clone())),
        ("address".into(), Json::Number(i.entry.to_string())),
        ("address_hex".into(), Json::Str(format!("{:#x}", i.entry))),
        (
            "offset".into(),
            Json::Number((i.addr - i.entry).to_string()),
        ),
    ])
}

/// The `function containing` answer in a `decomp_dbg` transcript:
/// `<addr> is interior to <name> at <entry> (+<offset>)`.
pub(crate) fn from_transcript(transcript: &str) -> Option<Interior> {
    transcript.lines().find_map(|line| {
        let line = line.trim();
        let line = line.strip_prefix("[decomp]>").unwrap_or(line).trim();
        let (addr, rest) = line.split_once(" is interior to ")?;
        let (rest, _) = rest.strip_suffix(')')?.rsplit_once(" (+")?;
        let (owner, entry) = rest.rsplit_once(" at ")?;
        Some(Interior {
            addr: hex(addr)?,
            owner: owner.to_string(),
            entry: hex(entry)?,
        })
    })
}

fn hex(token: &str) -> Option<u64> {
    u64::from_str_radix(token.strip_prefix("0x")?, 16).ok()
}

#[cfg(test)]
mod tests;
