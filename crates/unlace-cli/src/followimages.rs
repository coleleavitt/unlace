//! `--follow-images N`: load the dyld shared cache image a requested address
//! lies in.
//!
//! `--image` names the images of a cache to load, and an address outside them
//! is "not mapped". A call followed out of one image ends at such an address,
//! so `decompile`, `disassemble` and `xrefs` look every `0x` address of the
//! request up in the cache's image ranges first and widen the selection by up
//! to N images (`--follow-images 0` turns this off). `decompile` and
//! `disassemble` also take a stub-island address, which belongs to no image, as
//! the function the stub jumps to; `xrefs` leaves it alone, since the island is
//! what the call sites reference. A note on stderr says what was added.

use std::path::Path;

use unlace_analysis::loader::dyldcache::{follow_images, is_dyld_cache_file};

/// The images a request may add when `--follow-images` is not given.
pub(crate) const DEFAULT_LIMIT: usize = 2;

/// Remove a global `--follow-images N` from `argv`; the last one wins.
pub(crate) fn take_limit(argv: &mut Vec<String>) -> Result<usize, String> {
    let mut limit = DEFAULT_LIMIT;
    let mut i = 0;
    while i < argv.len() {
        let value = if argv[i] == "--follow-images" {
            let value = argv
                .get(i + 1)
                .cloned()
                .ok_or("--follow-images requires a count")?;
            argv.drain(i..i + 2);
            value
        } else if let Some(value) = argv[i].strip_prefix("--follow-images=") {
            let value = value.to_string();
            argv.remove(i);
            value
        } else {
            i += 1;
            continue;
        };
        limit = value
            .parse()
            .map_err(|_| format!("--follow-images takes a count, got {value:?}"))?;
    }
    Ok(limit)
}

fn address(token: &str) -> Option<u64> {
    let digits = token
        .strip_prefix("0x")
        .or_else(|| token.strip_prefix("0X"))?;
    u64::from_str_radix(digits, 16).ok()
}

/// Widen the image selection so it holds the addresses `argv` names, and
/// rewrite a stub address to the function it jumps to.
pub(crate) fn apply(sub: &str, argv: &mut [String], limit: usize) {
    let through_stubs = match sub {
        "decompile" | "disassemble" => true,
        "xrefs" => false,
        _ => return,
    };
    let Some(selected) = unlace_decomp::dyldcache::selected_image() else {
        return;
    };
    let Some(cache) = argv
        .iter()
        .find(|a| !a.starts_with('-') && is_dyld_cache_file(Path::new(a)))
        .cloned()
    else {
        return;
    };
    let addrs: Vec<(u64, bool)> = argv
        .iter()
        .filter_map(|a| address(a))
        .map(|a| (a, through_stubs))
        .collect();
    if addrs.is_empty() {
        return;
    }
    let Ok(followed) = follow_images(Path::new(&cache), &selected, &addrs, limit) else {
        return;
    };
    for step in &followed.steps {
        let stub = if step.target == step.requested {
            String::new()
        } else {
            format!(" is a stub for {:#x}, which", step.target)
        };
        if step.loaded {
            eprintln!(
                "[unlace] {:#x}{stub} lies in {}; loading that image too",
                step.requested, step.image
            );
        } else {
            eprintln!(
                "[unlace] {:#x}{stub} lies in {}, which is not loaded: add it to --image or raise --follow-images (now {limit})",
                step.requested, step.image
            );
            continue;
        }
        for token in argv
            .iter_mut()
            .filter(|t| address(t) == Some(step.requested))
        {
            *token = format!("{:#x}", step.target);
        }
    }
    if followed.images == selected {
        return;
    }
    crate::loadtime::set_invocation_var(unlace_decomp::dyldcache::DYLDIMAGE_ENV, &followed.images);
    for i in 2..argv.len() {
        if argv[i - 2] == "--option" && argv[i - 1] == "dyldimage" {
            argv[i] = followed.images.clone();
        }
    }
}

#[cfg(test)]
mod tests;
