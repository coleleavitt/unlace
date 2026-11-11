//! pipeline: flirt.

use super::*;

/// User-facing FLIRT controls. Matching is enabled by default with the
/// bundled signature database. Matches score 90% or 100%, so the default
/// threshold of 50% accepts every match.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct FlirtOptions {
    pub enabled: bool,
    pub sig_paths: Vec<PathBuf>,
    pub sig_dirs: Vec<PathBuf>,
    pub min_confidence: u8,
}

impl Default for FlirtOptions {
    fn default() -> Self {
        Self {
            enabled: true,
            sig_paths: Vec::new(),
            sig_dirs: Vec::new(),
            min_confidence: 50,
        }
    }
}

/// Loaded FLIRT state ready for hot-path matching. External `.sig` files
/// are decoded once when the command starts. The shipped `.sig` files
/// (`unlace_flirt::bundled`) are chosen per image from its toolchain, and
/// the hand-checked startup-code table stays the process-wide loader DB.
#[derive(Clone, Debug)]
pub struct FlirtConfig {
    options: FlirtOptions,
    explicit: Arc<unlace_flirt::FlirtMatcher>,
}

impl Default for FlirtConfig {
    fn default() -> Self {
        Self {
            options: FlirtOptions::default(),
            explicit: Arc::new(unlace_flirt::FlirtMatcher::default()),
        }
    }
}

impl FlirtConfig {
    pub fn from_options(options: FlirtOptions) -> Result<Self> {
        if !options.enabled {
            return Ok(Self {
                options,
                explicit: Arc::new(unlace_flirt::FlirtMatcher::default()),
            });
        }

        let sig_paths = collect_sig_paths(&options)?;
        let mut matcher = unlace_flirt::FlirtMatcher::default();
        for path in sig_paths {
            let sig = unlace_flirt::SigFile::load(&path)
                .with_context(|| format!("loading FLIRT signature {}", path.display()))?;
            matcher.push(sig);
        }

        Ok(Self {
            options,
            explicit: Arc::new(matcher),
        })
    }

    pub fn options(&self) -> &FlirtOptions {
        &self.options
    }

    pub(super) fn enabled(&self) -> bool {
        self.options.enabled
    }

    pub(super) fn has_explicit_signatures(&self) -> bool {
        !self.options.sig_paths.is_empty() || !self.options.sig_dirs.is_empty()
    }

    /// The startup-code table and every shipped `.sig` file describe x86.
    pub(super) fn bundled_applicable_to_arch(&self, arch: ArchId) -> bool {
        matches!(arch, ArchId::X86 | ArchId::X86_64)
    }

    pub(super) fn should_scan_for_arch(&self, arch: ArchId) -> bool {
        self.enabled() && (self.has_explicit_signatures() || self.bundled_applicable_to_arch(arch))
    }

    pub(super) fn min_confidence_f32(&self) -> f32 {
        (self.options.min_confidence as f32) / 100.0
    }

    /// The `.sig` files to apply to `image`: the explicit files first,
    /// then the shipped files for the image's toolchain.
    pub(super) fn sig_matcher(&self, image: &BinaryImage) -> unlace_flirt::FlirtMatcher {
        let mut matcher = (*self.explicit).clone();
        let selection = unlace_flirt::select_bundled(image);
        let files: Vec<&str> = selection.sigs.iter().map(|sig| sig.file).collect();
        let missing: Vec<String> = selection
            .missing
            .iter()
            .map(|release| format!("{:?} {}", release.library, release.version))
            .collect();
        tracing::info!(
            target: "unlace::flirt",
            toolchain = %selection.toolchain,
            sigs = ?files,
            missing = ?missing,
            "bundled signature selection"
        );
        for bundled in &selection.sigs {
            match bundled.sig() {
                Ok(sig) => matcher.push_shared(sig),
                Err(err) => tracing::warn!(
                    target: "unlace::flirt",
                    file = bundled.file,
                    error = %err,
                    "bundled signature file does not parse"
                ),
            }
        }
        matcher
    }

    /// Name the functions at `candidates` with the explicit and shipped
    /// `.sig` files. Matching runs over all candidates at once so that
    /// modules which reference other library functions can use names found
    /// meanwhile.
    pub(super) fn sig_hits(
        &self,
        image: &BinaryImage,
        candidates: &[u64],
    ) -> BTreeMap<u64, FlirtConfidence> {
        if candidates.is_empty() {
            return BTreeMap::new();
        }
        let matcher = self.sig_matcher(image);
        if matcher.is_empty() {
            return BTreeMap::new();
        }
        let windows: Vec<unlace_flirt::CodeWindow<'_>> = image
            .sections
            .iter()
            .filter(|section| section.flags.contains(SectionFlags::EXEC))
            .map(|section| unlace_flirt::CodeWindow::new(section.vaddr, &section.data))
            .collect();
        let known = flirt_known_names(image);
        matcher
            .identify(image.arch, &windows, candidates, &known)
            .into_iter()
            .filter(|(_, hit)| hit.confidence >= self.min_confidence_f32())
            .map(|(addr, hit)| {
                let confidence = FlirtConfidence {
                    name: hit.name,
                    confidence: hit.confidence,
                    signature_id: hit.signature_id,
                };
                (addr, confidence)
            })
            .collect()
    }
}

pub(super) fn collect_sig_paths(options: &FlirtOptions) -> Result<Vec<PathBuf>> {
    let mut paths = BTreeSet::new();
    for path in &options.sig_paths {
        if !path.is_file() {
            bail!("FLIRT signature path is not a file: {}", path.display());
        }
        paths.insert(path.clone());
    }
    for dir in &options.sig_dirs {
        if !dir.is_dir() {
            bail!("FLIRT signature dir is not a directory: {}", dir.display());
        }
        let mut entries: Vec<PathBuf> = std::fs::read_dir(dir)
            .with_context(|| format!("reading FLIRT signature dir {}", dir.display()))?
            .filter_map(|entry| entry.ok().map(|entry| entry.path()))
            .filter(|path| path.extension().is_some_and(|ext| ext == "sig"))
            .collect();
        entries.sort();
        paths.extend(entries);
    }
    Ok(paths.into_iter().collect())
}

/// Process-wide FLIRT signature database; lazily built on first use.
pub(super) fn flirt_db() -> &'static FlirtDb {
    use std::sync::OnceLock;
    static DB: OnceLock<FlirtDb> = OnceLock::new();
    DB.get_or_init(unlace_loader::default_flirt_db)
}

/// Try to identify `entry`'s function body as a known library stub.
/// Returns the canonical name when matched.
///
/// FLIRT is only consulted for functions whose user-facing name *already*
/// looks like a stripped-binary stub (`sub_XXXX`, empty / synthesised, or
/// already a known libc name from PLT resolution). For named functions
/// (`main`, application code) we skip the lookup — false-positives there
/// would silently elide user code with a library stub comment. This
/// mirrors IDA's behaviour where FLIRT only renames `unknown_libname`
/// entries.
pub fn flirt_match(image: &BinaryImage, entry: &FunctionEntry) -> Option<String> {
    flirt_match_detailed(image, entry).map(|m| m.name)
}

/// §5.5: confidence-aware FLIRT match result.
///
/// `confidence` is the score reported by the matcher:
///  - `1.0` — every recorded outbound reference resolved (strongest).
///  - `0.9` — byte/CRC matched, signature carried no references.
///
/// `signature_id` is the matched signature's insertion-order index in
/// the process-wide `FlirtDb`. Surfaced so downstream consumers can
/// correlate annotations to a specific entry without re-running the
/// matcher.
#[derive(Debug, Clone, PartialEq)]
pub struct FlirtConfidence {
    pub name: String,
    pub confidence: f32,
    pub signature_id: usize,
}

/// Like [`flirt_match`] but returns the confidence score and the
/// canonical name as a structured pair.
pub fn flirt_match_detailed(image: &BinaryImage, entry: &FunctionEntry) -> Option<FlirtConfidence> {
    let config = FlirtConfig::default();
    flirt_match_detailed_with_config(image, entry, &config)
}

pub fn flirt_match_detailed_with_config(
    image: &BinaryImage,
    entry: &FunctionEntry,
    config: &FlirtConfig,
) -> Option<FlirtConfidence> {
    if !config.should_scan_for_arch(image.arch) || !is_flirt_eligible_name(&entry.name) {
        return None;
    }
    let explicit = config.sig_hits(image, &[entry.addr]).remove(&entry.addr);
    let resolved = flirt_resolved_names_with_config(image, config);
    prefer_flirt_match(
        explicit,
        bundled_flirt_match(image, entry, &resolved, config),
    )
}

/// Prefer the explicit `.sig` match unless the bundled one is more certain.
pub(super) fn prefer_flirt_match(
    explicit: Option<FlirtConfidence>,
    bundled: Option<FlirtConfidence>,
) -> Option<FlirtConfidence> {
    match (explicit, bundled) {
        (Some(a), Some(b)) if b.confidence > a.confidence => Some(b),
        (Some(a), _) => Some(a),
        (None, b) => b,
    }
}

/// Match `entry` against the bundled pattern DB.
pub(super) fn bundled_flirt_match(
    image: &BinaryImage,
    entry: &FunctionEntry,
    resolved: &BTreeMap<u64, String>,
    config: &FlirtConfig,
) -> Option<FlirtConfidence> {
    if !config.enabled()
        || !config.bundled_applicable_to_arch(image.arch)
        || !is_flirt_eligible_name(&entry.name)
    {
        return None;
    }
    let text = text_section(image)?;
    let code = unlace_loader::flirt::FunctionCode::new(text.vaddr, &text.data, entry.addr)?;
    let matched = flirt_db().match_function_with_refs(code, resolved)?;
    (matched.confidence >= config.min_confidence_f32()).then(|| FlirtConfidence {
        name: matched.name.to_string(),
        confidence: matched.confidence,
        signature_id: matched.signature_id,
    })
}

/// Names FLIRT matches can rely on: real function symbols and imports.
pub(super) fn flirt_known_names(image: &BinaryImage) -> BTreeMap<u64, String> {
    let mut known = BTreeMap::new();
    for (&addr, sym) in &image.symbols {
        if sym.kind == SymbolKind::Function && !is_flirt_eligible_name(&sym.name) {
            known.insert(addr, sym.name.clone());
        }
    }
    for (&addr, name) in &image.plt_symbols {
        known.insert(addr, name.clone());
    }
    known
}

pub(super) fn flirt_resolved_names_with_config(
    image: &BinaryImage,
    config: &FlirtConfig,
) -> BTreeMap<u64, String> {
    if !config.enabled() {
        return BTreeMap::new();
    }
    let mut resolved = flirt_known_names(image);

    let mut changed = true;
    while changed {
        changed = false;
        let mut candidates: Vec<(u64, String)> = image
            .symbols
            .iter()
            .filter(|(addr, sym)| {
                sym.kind == SymbolKind::Function
                    && is_flirt_eligible_name(&sym.name)
                    && !resolved.contains_key(addr)
            })
            .filter_map(|(_addr, sym)| {
                let entry = FunctionEntry {
                    name: sym.name.clone(),
                    addr: sym.addr,
                    size: sym.size,
                };
                bundled_flirt_match(image, &entry, &resolved, config).map(|m| (sym.addr, m.name))
            })
            .collect();
        candidates.sort_by_key(|(addr, _)| *addr);
        for (addr, name) in candidates {
            if resolved.insert(addr, name).is_none() {
                changed = true;
            }
        }
    }

    resolved
}

/// Whether `name` looks like a stripped-binary placeholder that FLIRT is
/// allowed to rename. Real symbol names ("main", "process_args") are off
/// limits — the user named them deliberately and a pattern collision
/// would silently swap the body.
pub(super) fn is_flirt_eligible_name(name: &str) -> bool {
    name.is_empty()
        || name.starts_with("sub_")
        || name.starts_with("loc_")
        || name.starts_with("unk_")
        || name.starts_with("nullsub_")
        || name == "entry"
}
