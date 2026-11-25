//! Port of `decompiler/cpp/analyzesigs.{cc,hh}` — the console commands for
//! signature/feature generation (item `w8-sig-pack`).
//!
//! These are the `signature settings`, `print signatures`, `save signatures`,
//! `saveall signatures`, and `produce signatures` console commands.  Each drives
//! the [`signature`](crate::signature) pipeline over the current (or every)
//! decompiled function.
//!
//! # Boundaries (the W9 console surface)
//!
//! The whole file hangs off the W9 interactive-console subsystem
//! (`IfaceCapability` / `IfaceDecompCommand` / `IfaceStatus` / `IfaceDecompData`
//! — `decompiler/cpp/ifacedecomp.{hh,cc}`), which is **not yet ported**.  The
//! command *registration* (`registerCom`), the `dcp->fd` / `dcp->conf` data
//! pointers, the `status->fileoptr` output streams, the `istream` argument
//! parsing, and `iterateFunctionsAddrOrder` all belong to that wave.
//!
//! So this module ports the **decision bodies** of the commands as standalone,
//! testable functions that take the values the console would otherwise resolve
//! (the parsed settings integer, the `&Funcdata`, a `&mut dyn Encoder` /
//! output buffer), and stubs the console plumbing.  When W9 lands, the
//! `IfaceDecompCommand::execute` wrappers parse their `istream` and call these.

use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::marshal::Encoder;

use crate::funcdata::Funcdata;
use crate::signature::{GraphSigManager, Hashword, debug_signature, set_settings};

/// The capability name registered by `IfaceAnalyzeSigsCapability`
/// (analyzesigs.cc:27).
pub const CAPABILITY_NAME: &str = "analyzesigs";

/// The console commands this capability registers (C++
/// `IfaceAnalyzeSigsCapability::registerCommands`, analyzesigs.cc:30-38).
///
/// Each entry is the `(command-words, kind)` the C++ `registerCom` would file.
/// Exposed as data (rather than a `register` call) because the `IfaceStatus`
/// registry is the W9 surface; a future W9 `registerCommands` walks this list.
pub const COMMANDS: &[(&str, &str, AnalyzeSigsCommand)] = &[
    (
        "signature",
        "settings",
        AnalyzeSigsCommand::SignatureSettings,
    ),
    ("print", "signatures", AnalyzeSigsCommand::PrintSignatures),
    ("save", "signatures", AnalyzeSigsCommand::SaveSignatures),
    (
        "saveall",
        "signatures",
        AnalyzeSigsCommand::SaveAllSignatures,
    ),
    (
        "produce",
        "signatures",
        AnalyzeSigsCommand::ProduceSignatures,
    ),
];

/// Identity of an analyze-signatures console command (the C++
/// `IfcSignatureSettings` / `IfcPrintSignatures` / ... classes).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AnalyzeSigsCommand {
    /// `signature settings <val>` (`IfcSignatureSettings`).
    SignatureSettings,
    /// `print signatures [...]` (`IfcPrintSignatures`).
    PrintSignatures,
    /// `save signatures <file> [...]` (`IfcSaveSignatures`).
    SaveSignatures,
    /// `saveall signatures <file> [...]` (`IfcSaveAllSignatures`).
    SaveAllSignatures,
    /// `produce signatures <file> [...]` (`IfcProduceSignatures`).
    ProduceSignatures,
}

// ===========================================================================
// IfcSignatureSettings (analyzesigs.cc:44-55)
// ===========================================================================

/// Change global settings for signature generation (C++
/// `IfcSignatureSettings::execute`, analyzesigs.cc:44-55).
///
/// `mysetting` is the integer the console parsed from the command stream.  A
/// zero value is rejected (the C++ `throw IfaceParseError("Must specify settings
/// integer")`).  On success the process-global settings are updated and a
/// confirmation line is returned for the caller to print to `status->optr`.
pub fn signature_settings(mysetting: u32) -> UnlaceResult<String> {
    if mysetting == 0 {
        return Err(UnlaceError::parse("Must specify settings integer"));
    }
    set_settings(mysetting);
    Ok(format!("Signature settings set to {mysetting:x}"))
}

// ===========================================================================
// IfcPrintSignatures (analyzesigs.cc:63-80)
// ===========================================================================

/// Calculate and print signatures for a function (C++
/// `IfcPrintSignatures::execute`, analyzesigs.cc:63-80).
///
/// The C++ checks `dcp->fd != 0` and `dcp->fd->isProcComplete()` (the W9 data
/// pointer + the completeness gate), builds a `GraphSigManager`, configures it
/// from the stream (the optional `maxiter`), generates, and prints one feature
/// per line to `status->fileoptr`.
///
/// This port takes the resolved `&Funcdata` and the already-parsed
/// `maxiter_override`, enforces the completeness gate, and returns the printed
/// block of feature lines (`Signature::print`, signature.cc:62-68 — `*origin =
/// 0x........`).  The `printOrigin` of a `VarnodeSignature`/`BlockSignature`
/// needs the W8 print surface (`Varnode::printRaw`/`FlowBlock::printHeader`); a
/// generic feature prints its bare hash, so the printed text is built from
/// [`GraphSigManager::get_signature_vector`] (the sorted hash list) — the same
/// hashes, without the per-feature origin string (STUB(W8)).
pub fn print_signatures(fd: &Funcdata, maxiter_override: Option<i32>) -> UnlaceResult<String> {
    if !fd.is_proc_complete() {
        return Err(UnlaceError::lowlevel(
            "Function has not been fully analyzed",
        ));
    }
    let mut smanage = GraphSigManager::new()?;
    smanage.initialize_from_stream(maxiter_override);
    smanage.set_current_function(fd)?;
    smanage.generate(fd);

    let mut out = String::new();
    out.push_str(&format!("Signatures for {}\n", fd.get_name()));
    // Signature::print is `*<origin> = 0x........`; the origin string needs the
    // W8 print surface, so emit the hash list (sorted) one per line.
    for h in smanage.get_signature_vector() {
        out.push_str(&format!("* = 0x{h:08x}\n"));
    }
    Ok(out)
}

// ===========================================================================
// IfcSaveSignatures (analyzesigs.cc:88-117)
// ===========================================================================

/// Calculate signatures for a function and encode them (C++
/// `IfcSaveSignatures::execute`, analyzesigs.cc:88-117).
///
/// The C++ opens the named file, builds an `XmlEncode` over it, and writes the
/// full feature description (`smanage.encode`).  This port takes the resolved
/// `&Funcdata`, the parsed `maxiter_override`, and the destination encoder (the
/// file-open / filename parse is the W9 console surface), running the same
/// generate + `encode` path.  The `<varsig>`/`<blocksig>` encodes need the W8
/// marshal surface and STUB inside [`GraphSigManager::encode`].
pub fn save_signatures(
    fd: &Funcdata,
    maxiter_override: Option<i32>,
    encoder: &mut dyn Encoder,
) -> UnlaceResult<()> {
    if !fd.is_proc_complete() {
        return Err(UnlaceError::lowlevel(
            "Function has not been fully analyzed",
        ));
    }
    let mut smanage = GraphSigManager::new()?;
    smanage.initialize_from_stream(maxiter_override);
    smanage.set_current_function(fd)?;
    smanage.generate(fd);
    smanage.encode(encoder)
}

// ===========================================================================
// IfcProduceSignatures::iterationCallback (analyzesigs.cc:214-241)
// ===========================================================================

/// Compute the overall combined hash for one function (the per-function body of
/// C++ `IfcProduceSignatures::iterationCallback`, analyzesigs.cc:233-238).
///
/// The C++ re-decompiles the function (the W9 action-database drive), generates,
/// then writes `<name> = 0x<16-hex>` to the output file.  This port takes the
/// already-decompiled `&Funcdata` and the parsed `maxiter_override`, generates,
/// and returns the formatted line (the re-decompilation + file write are the W9
/// surface).
pub fn produce_signature_line(
    fd: &Funcdata,
    maxiter_override: Option<i32>,
) -> UnlaceResult<String> {
    let mut smanage = GraphSigManager::new()?;
    smanage.initialize_from_stream(maxiter_override);
    smanage.set_current_function(fd)?;
    smanage.generate(fd);
    let finalsig: Hashword = smanage.get_overall_hash();
    Ok(format!("{} = 0x{:016x}", fd.get_name(), finalsig))
}

// ===========================================================================
// IfcSaveAllSignatures::iterationCallback (analyzesigs.cc:165-204)
// ===========================================================================

/// Encode the per-function record body of `saveall signatures` (the encode tail
/// of C++ `IfcSaveAllSignatures::iterationCallback`, analyzesigs.cc:184-201).
///
/// The C++ writes a binary header (space index, offset, sig count, name length,
/// name) then the `XmlEncode` of the manager.  The header is built from
/// `fd->getAddress()` + `fd->getName()`; the binary framing and the
/// per-architecture function iteration (`iterateFunctionsAddrOrder`, the action
/// re-drive, the `status->fileoptr` binary stream) are the W9 console surface
/// and STUB.  This port runs the generate + `encode` core (the part that is not
/// console plumbing) into the given encoder, returning the number of features.
pub fn saveall_signature_record(
    fd: &Funcdata,
    maxiter_override: Option<i32>,
    encoder: &mut dyn Encoder,
) -> UnlaceResult<i32> {
    let mut smanage = GraphSigManager::new()?;
    smanage.initialize_from_stream(maxiter_override);
    smanage.set_current_function(fd)?;
    smanage.generate(fd);
    let numsigs = smanage.num_signatures();
    if numsigs != 0 {
        smanage.encode(encoder)?;
    }
    Ok(numsigs)
}

/// Calculate signatures for a function and encode the full description with the
/// `debug` variant (the `debugSignature`-style sorted full encode), the body
/// behind a future `IfcSaveSignatures` debug mode.  Kept as a thin wrapper over
/// [`debug_signature`](crate::signature::debug_signature) so callers have a
/// single entry point that mirrors the C++ free function.
pub fn save_debug_signatures(fd: &Funcdata, encoder: &mut dyn Encoder) -> UnlaceResult<()> {
    debug_signature(fd, encoder)
}

#[cfg(test)]
mod tests;
