//! Worker scratch directories whose owner lock proves whether cleanup is safe.

use std::fs::{File, OpenOptions};
use std::path::{Path, PathBuf};

const POOL_PREFIX: &str = "unlace-jobs-";
const SCRATCH_PREFIX: &str = "unlace-jobs-v2-";
const OWNER_LOCK: &str = "owner.lock";

pub(super) struct ScratchDir {
    _owner: Option<File>,
    dir: tempfile::TempDir,
}

impl ScratchDir {
    pub(super) fn create() -> Result<Self, String> {
        Self::create_in(&std::env::temp_dir())
    }

    /// A temporary filesystem without file locks gets no owner marker, so no
    /// sweep can ever reclaim the directory.
    fn create_in(temp: &Path) -> Result<Self, String> {
        sweep_stale_scratch(temp);
        let create_error = |e| {
            format!(
                "cannot create the worker scratch dir in {}: {e}",
                temp.display()
            )
        };
        std::fs::create_dir_all(temp).map_err(create_error)?;
        let prefix = format!("{SCRATCH_PREFIX}{}-", std::process::id());
        let mut builder = tempfile::Builder::new();
        builder.prefix(&prefix);
        #[cfg(unix)]
        {
            use std::os::unix::fs::PermissionsExt;
            builder.permissions(std::fs::Permissions::from_mode(0o700));
        }
        let dir = builder.tempdir_in(temp).map_err(create_error)?;
        #[cfg(unix)]
        {
            use std::os::unix::fs::PermissionsExt;
            std::fs::set_permissions(dir.path(), std::fs::Permissions::from_mode(0o700)).map_err(
                |e| {
                    format!(
                        "cannot restrict the worker scratch dir {}: {e}",
                        dir.path().display()
                    )
                },
            )?;
        }
        let pending = tempfile::NamedTempFile::new_in(dir.path()).map_err(create_error)?;
        let owner = match pending.as_file().try_lock() {
            Ok(()) => Some(
                pending
                    .persist(dir.path().join(OWNER_LOCK))
                    .map_err(|e| create_error(e.error))?,
            ),
            Err(_) => None,
        };
        Ok(Self { _owner: owner, dir })
    }

    pub(super) fn path(&self) -> &Path {
        self.dir.path()
    }
}

/// Reclaim only published, unlocked owners. PIDs and directory ages cannot
/// prove abandonment when processes share storage across PID namespaces.
fn sweep_stale_scratch(temp: &Path) {
    let Ok(entries) = std::fs::read_dir(temp) else {
        return;
    };
    for entry in entries.flatten() {
        let name = entry.file_name();
        if name.to_str().and_then(scratch_owner).is_none()
            || !entry.file_type().is_ok_and(|kind| kind.is_dir())
        {
            continue;
        }
        let Ok(owner) = OpenOptions::new()
            .read(true)
            .write(true)
            .open(entry.path().join(OWNER_LOCK))
        else {
            continue;
        };
        if owner.try_lock().is_ok() {
            let _ = std::fs::remove_dir_all(entry.path());
        }
    }
}

/// Read the diagnostic PID from a versioned scratch name; it does not prove liveness.
fn scratch_owner(name: &str) -> Option<u32> {
    let (pid, suffix) = name.strip_prefix(SCRATCH_PREFIX)?.split_once('-')?;
    if suffix.is_empty() {
        return None;
    }
    pid.parse().ok()
}

/// Recognize the scratch-name prefix used by the parent's assignment protocol.
pub(super) fn pool_scratch(dir: &str) -> Option<PathBuf> {
    let path = Path::new(dir);
    path.file_name()?
        .to_str()?
        .starts_with(POOL_PREFIX)
        .then(|| path.to_path_buf())
}

#[cfg(test)]
mod tests;
