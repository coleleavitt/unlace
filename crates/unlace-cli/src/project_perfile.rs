//! `unlace decompile-project --per-file` — the **resumable per-function** export.
//!
//! ```text
//!   unlace decompile-project <binary> --per-file [-o DIR] [--functions a,b,..] [--addr 0xVMA]..
//! ```
//!
//! Writes one file per decompiled function to `<DIR>/functions/<addr:08x>_<name>.c`
//! (the `decompile-all` rendering of that function, or a `/* FAILED: .. */` stub) and
//! `<DIR>/manifest.json`, which lists `addr`, `name`, `file` and `status` (`ok` or
//! `failed`) for every function the folder holds. A rerun reads the manifest and
//! decompiles only the functions that are not complete on disk: one whose file is
//! missing, empty, a failed stub or recorded as `failed` is decompiled again.
//!
//! Each file is written as its function lands, so an interrupted run keeps the
//! functions it finished; the manifest is replaced in one step at the end. A function
//! that cross-function convergence later changes is rewritten with its final text at
//! the end of its run. If the run stops before then, a resumed run keeps the earlier
//! text of that function.
//!
//! Only the function files and the manifest are written. The `.h`, `.asm` and README
//! describe the whole program, so they need every function decompiled in one run.
//! `--stream`, `--progress` and `--assert` are not available with `--per-file`.

use std::collections::BTreeMap;
use std::io::Read;
use std::path::{Path, PathBuf};

use serde::{Deserialize, Serialize};
use unlace_console::project::{FuncResult, render_c};

const MANIFEST_FILE: &str = "manifest.json";
const FUNCTIONS_DIR: &str = "functions";
const STUB_PREFIX: &[u8] = b"/* FAILED:";
const MANIFEST_VERSION: u8 = 1;

/// One function's line in `manifest.json`.
#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub(crate) struct ManifestEntry {
    pub(crate) addr: u64,
    pub(crate) name: String,
    pub(crate) file: String,
    pub(crate) status: String,
}

#[derive(Serialize, Deserialize)]
struct Manifest {
    #[serde(default = "default_version")]
    version: u8,
    #[serde(default)]
    functions: Vec<ManifestEntry>,
}

fn default_version() -> u8 {
    MANIFEST_VERSION
}

/// The export folder: the function files under `functions/` and the manifest beside them.
pub(crate) struct PerFileExport {
    root: PathBuf,
    dir: PathBuf,
    prior: BTreeMap<u64, ManifestEntry>,
}

impl PerFileExport {
    /// Create the folder and read the manifest a previous run left, if any.
    pub(crate) fn open(root: &Path) -> Result<Self, String> {
        let dir = root.join(FUNCTIONS_DIR);
        std::fs::create_dir_all(&dir)
            .map_err(|e| format!("cannot create {}: {e}", dir.display()))?;
        let prior = read_manifest(root)
            .into_iter()
            .map(|entry| (entry.addr, entry))
            .collect();
        Ok(Self {
            root: root.to_path_buf(),
            dir,
            prior,
        })
    }

    /// Whether a previous run left this function complete on disk.
    pub(crate) fn is_done(&self, addr: u64, name: &str) -> bool {
        let path = self.dir.join(file_name(addr, name));
        if !path.metadata().is_ok_and(|m| m.is_file() && m.len() > 0) {
            return false;
        }
        if self
            .prior
            .get(&addr)
            .is_some_and(|entry| entry.status == "failed")
        {
            return false;
        }
        !is_failed_stub(&path)
    }

    /// Write one function's file, replacing any earlier one, and describe it.
    pub(crate) fn write(&self, result: &FuncResult) -> Result<ManifestEntry, String> {
        let file = file_name(result.address, &result.name);
        let path = self.dir.join(&file);
        let (text, status) = match &result.code {
            Some(_) => (render_c(std::slice::from_ref(result)), "ok"),
            None => {
                let reason = result.error.as_deref().unwrap_or("no decompiled body");
                (
                    format!("/* FAILED: {} \u{2014} {} */\n", result.name, reason),
                    "failed",
                )
            }
        };
        std::fs::write(&path, text).map_err(|e| format!("cannot write {}: {e}", path.display()))?;
        Ok(ManifestEntry {
            addr: result.address,
            name: result.name.clone(),
            file,
            status: status.to_string(),
        })
    }

    /// Replace the manifest in one step. The entries in `written` overlay the previous
    /// manifest, so a run over a subset of the binary keeps the rest of it.
    pub(crate) fn finish(&self, written: Vec<ManifestEntry>) -> Result<(), String> {
        let mut by_addr = self.prior.clone();
        for entry in written {
            by_addr.insert(entry.addr, entry);
        }
        let manifest = Manifest {
            version: MANIFEST_VERSION,
            functions: by_addr.into_values().collect(),
        };
        let json = serde_json::to_string_pretty(&manifest)
            .map_err(|e| format!("cannot encode the manifest: {e}"))?;
        let path = self.root.join(MANIFEST_FILE);
        let temp = self.root.join(format!("{MANIFEST_FILE}.tmp"));
        std::fs::write(&temp, json).map_err(|e| format!("cannot write {}: {e}", temp.display()))?;
        std::fs::rename(&temp, &path).map_err(|e| {
            let _ = std::fs::remove_file(&temp);
            format!("cannot replace {}: {e}", path.display())
        })
    }
}

/// The file a function is written to: its address, then its name with every
/// character outside `[A-Za-z0-9_.]` replaced, so a name never leaves the folder.
pub(crate) fn file_name(addr: u64, name: &str) -> String {
    let safe: String = name
        .chars()
        .take(80)
        .map(|c| {
            if c.is_ascii_alphanumeric() || c == '_' || c == '.' {
                c
            } else {
                '_'
            }
        })
        .collect();
    format!("{addr:08x}_{safe}.c")
}

fn is_failed_stub(path: &Path) -> bool {
    let Ok(mut file) = std::fs::File::open(path) else {
        return false;
    };
    let mut prefix = [0_u8; 16];
    let Ok(read) = file.read(&mut prefix) else {
        return false;
    };
    prefix[..read].starts_with(STUB_PREFIX)
}

fn read_manifest(root: &Path) -> Vec<ManifestEntry> {
    let path = root.join(MANIFEST_FILE);
    let Ok(text) = std::fs::read_to_string(&path) else {
        return Vec::new();
    };
    match serde_json::from_str::<Manifest>(&text) {
        Ok(manifest) => manifest.functions,
        Err(e) => {
            eprintln!(
                "warning: {} is not a readable manifest ({e}); continuing from the function files on disk",
                path.display()
            );
            Vec::new()
        }
    }
}

#[cfg(test)]
mod tests {
    use super::file_name;

    #[test]
    fn function_files_are_address_prefixed_and_stay_in_the_folder() {
        assert_eq!(file_name(0x401000, "main"), "00401000_main.c");
        assert_eq!(file_name(0x10, "../etc/x y"), "00000010_.._etc_x_y.c");
    }
}
