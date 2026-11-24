//! (unlace `flirt inspect`) Read-only summary of an IDA `.sig` file: its
//! header and the public names of its modules, from the `flirt-sig` reader.
//! Nothing is matched or written; the file is parsed once and reported.

use flirt_sig::{FLAG_STARTUP, Signature};

/// The header fields and public names of one signature file.
pub struct SigSummary {
    pub library_name: String,
    pub version: u8,
    pub processor: u8,
    pub file_formats: u32,
    pub flags: u16,
    /// Whether the header marks a startup signature (`FLAG_STARTUP`).
    pub startup: bool,
    pub pattern_len: u16,
    /// Number of modules (leaves of the pattern tree) the file holds.
    pub modules: usize,
    /// Every public name, in module order.
    pub names: Vec<String>,
}

/// Parse a whole `.sig` file and summarise it. A parse failure carries the
/// reader's message.
pub fn summarize_sig(bytes: &[u8]) -> Result<SigSummary, String> {
    let sig = Signature::parse(bytes).map_err(|e| e.to_string())?;
    let header = &sig.header;
    let names = sig
        .modules
        .iter()
        .flat_map(|m| m.publics.iter())
        .map(|p| String::from_utf8_lossy(&p.name).into_owned())
        .collect();
    Ok(SigSummary {
        library_name: header.library_name.clone(),
        version: header.version,
        processor: header.processor,
        file_formats: header.file_formats,
        flags: header.flags,
        startup: header.flags & FLAG_STARTUP != 0,
        pattern_len: header.pattern_len,
        modules: sig.modules.len(),
        names,
    })
}
