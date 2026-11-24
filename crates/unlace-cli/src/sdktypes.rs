//! (unlace `sdktypes`) C declarations from the SDK a Mach-O was built against,
//! read with the `--types` reader.
//!
//! `--option sdktypes <SDK root>` builds one header that includes the umbrella
//! header of every framework the image links (`<CoreFoundation/CoreFoundation.h>`)
//! and each `usr/include` header that declares a function the image imports,
//! runs the preprocessor over it for the image's target (`clang -E -x c -isysroot
//! <root> -target arm64-apple-ios`, or the `--types-cpp` command), and hands
//! the text to [`kuna_cheader::load_text`]. Every record, enum and typedef the
//! headers define becomes a `typedef` directive, and the declaration of each
//! imported function a `prototype` directive; they go ahead of the run's
//! `--types` and `--assert` directives, so those still win. An include the
//! preprocessor refuses is left out and the rest is preprocessed again.
//! Objective-C `@interface`/`@protocol` bodies are blanked before reading.
//! Nothing derived from the headers is written anywhere: the generated header
//! lives in the temporary directory for the length of the preprocessor run.

use std::collections::BTreeSet;
use std::path::{Path, PathBuf};

use object::read::macho::{LoadCommandVariant, MachHeader};
use object::{Object, ObjectSymbol, macho};

use unlace_console::assertions::Directive;
use unlace_console::kuna_cheader;

/// Headers under `usr/include` that are scanned for imported names.
const MAX_HEADERS: usize = 20_000;
/// Largest `usr/include` header scanned.
const MAX_SCANNED_BYTES: u64 = 4 << 20;
/// Largest preprocessor output read.
const MAX_OUTPUT_BYTES: usize = 128 << 20;
/// Preprocessor runs after the first, each without the includes the last refused.
const MAX_RETRIES: usize = 32;

/// The SDK root the run's last `--option sdktypes` names, if any.
pub(crate) fn sdk_root(options: &[(String, String)]) -> Result<Option<PathBuf>, String> {
    match options.iter().rev().find(|(name, _)| name == "sdktypes") {
        Some((_, value)) => unlace_decomp::kuna_sdktypes::parse_option_value(value),
        None => Ok(None),
    }
}

/// The `sdktypes` directives for `binary`: `None` when the option is off,
/// an empty list when the image is not a Mach-O.
pub(crate) fn directives(
    binary: &str,
    options: &[(String, String)],
    slice: Option<&str>,
    target: Option<&str>,
    cpp: Option<&str>,
) -> Result<Option<Vec<Directive>>, String> {
    let Some(root) = sdk_root(options)? else {
        return Ok(None);
    };
    let bytes = std::fs::read(binary).map_err(|e| format!("{binary}: {e}"))?;
    let pref = unlace_analysis::loader::macho_fat::slice_pref(slice, target);
    let offset = usize::try_from(crate::image::slice_offset(binary, pref)).unwrap_or(0);
    let Some(image) = bytes.get(offset..).and_then(|b| Image::read(b, &root)) else {
        eprintln!("note: --option sdktypes: {binary} is not a Mach-O; no SDK headers read");
        return Ok(Some(Vec::new()));
    };
    let mut includes = umbrella_headers(&root, &image.frameworks);
    includes.extend(declaring_headers(&root, &image.imports));
    let mut seen = BTreeSet::new();
    includes.retain(|h| seen.insert(h.clone()));
    if includes.is_empty() {
        return Ok(Some(Vec::new()));
    }
    let text = preprocess(cpp.unwrap_or("clang"), &root, &image.triple, &includes)?;
    let text = blank_objc_containers(&text);
    let shown = root.to_string_lossy();
    Ok(Some(kuna_cheader::load_text(
        &shown,
        &text,
        kuna_cheader::SDK_ORIGIN,
        &|name| image.imports.contains(name),
    )))
}

/// What the preprocessor run needs to know about the image.
struct Image {
    triple: String,
    frameworks: Vec<String>,
    imports: BTreeSet<String>,
}

impl Image {
    fn read(bytes: &[u8], root: &Path) -> Option<Image> {
        let file = object::File::parse(bytes).ok()?;
        if file.format() != object::BinaryFormat::MachO {
            return None;
        }
        use object::Architecture as A;
        let arch = match file.architecture() {
            A::Aarch64 => "arm64",
            A::Aarch64_Ilp32 => "arm64_32",
            A::X86_64 => "x86_64",
            A::I386 => "i386",
            A::Arm => "armv7",
            _ => return None,
        };
        let os = platform(bytes)
            .or_else(|| sdk_platform(root))
            .unwrap_or(if arch == "x86_64" { "macos" } else { "ios" });
        let imports = file
            .symbols()
            .filter(|s| s.is_undefined())
            .filter_map(|s| s.name().ok())
            .map(|n| n.strip_prefix('_').unwrap_or(n).to_string())
            .collect();
        Some(Image {
            triple: format!("{arch}-apple-{os}"),
            frameworks: unlace_analysis::objc::kuna_objcsdk::linked_frameworks(&file, bytes),
            imports,
        })
    }
}

/// The Clang target OS the image's `LC_BUILD_VERSION` or `LC_VERSION_MIN_*` names.
fn platform(bytes: &[u8]) -> Option<&'static str> {
    fn read<Mach: MachHeader<Endian = object::Endianness>>(bytes: &[u8]) -> Option<u32> {
        let header = Mach::parse(bytes, 0).ok()?;
        let endian = header.endian().ok()?;
        let mut commands = header.load_commands(endian, bytes, 0).ok()?;
        while let Ok(Some(command)) = commands.next() {
            match command.variant() {
                Ok(LoadCommandVariant::BuildVersion(build)) => {
                    return Some(build.platform.get(endian));
                }
                Ok(LoadCommandVariant::VersionMin(_)) => {
                    return Some(match command.cmd() {
                        macho::LC_VERSION_MIN_MACOSX => macho::PLATFORM_MACOS,
                        macho::LC_VERSION_MIN_IPHONEOS => macho::PLATFORM_IOS,
                        macho::LC_VERSION_MIN_TVOS => macho::PLATFORM_TVOS,
                        _ => macho::PLATFORM_WATCHOS,
                    });
                }
                _ => {}
            }
        }
        None
    }
    let platform = match object::FileKind::parse(bytes).ok()? {
        object::FileKind::MachO64 => read::<macho::MachHeader64<object::Endianness>>(bytes),
        object::FileKind::MachO32 => read::<macho::MachHeader32<object::Endianness>>(bytes),
        _ => None,
    }?;
    Some(match platform {
        macho::PLATFORM_MACOS => "macos",
        macho::PLATFORM_IOS => "ios",
        macho::PLATFORM_TVOS => "tvos",
        macho::PLATFORM_WATCHOS => "watchos",
        macho::PLATFORM_MACCATALYST => "ios-macabi",
        macho::PLATFORM_IOSSIMULATOR => "ios-simulator",
        macho::PLATFORM_TVOSSIMULATOR => "tvos-simulator",
        macho::PLATFORM_WATCHOSSIMULATOR => "watchos-simulator",
        macho::PLATFORM_DRIVERKIT => "driverkit",
        macho::PLATFORM_VISIONOS => "xros",
        macho::PLATFORM_VISIONOSSIMULATOR => "xros-simulator",
        _ => return None,
    })
}

/// The target OS an SDK directory's name (`iPhoneOS16.5.sdk`) implies.
fn sdk_platform(root: &Path) -> Option<&'static str> {
    let name = root.file_name()?.to_str()?;
    [
        ("MacOSX", "macos"),
        ("iPhoneOS", "ios"),
        ("iPhoneSimulator", "ios-simulator"),
        ("AppleTVOS", "tvos"),
        ("AppleTVSimulator", "tvos-simulator"),
        ("WatchOS", "watchos"),
        ("WatchSimulator", "watchos-simulator"),
        ("DriverKit", "driverkit"),
        ("XROS", "xros"),
        ("XRSimulator", "xros-simulator"),
    ]
    .iter()
    .find(|(prefix, _)| name.starts_with(prefix))
    .map(|(_, os)| *os)
}

/// `<F/F.h>` for each linked framework whose umbrella header the SDK has.
fn umbrella_headers(root: &Path, frameworks: &[String]) -> Vec<String> {
    let fw_root = root.join("System/Library/Frameworks");
    frameworks
        .iter()
        .filter(|f| {
            fw_root
                .join(format!("{f}.framework/Headers/{f}.h"))
                .is_file()
        })
        .map(|f| format!("{f}/{f}.h"))
        .collect()
}

/// The `usr/include` headers (C++ headers aside) that declare a function
/// `imports` names, relative to `usr/include`, sorted.
fn declaring_headers(root: &Path, imports: &BTreeSet<String>) -> Vec<String> {
    let include = root.join("usr/include");
    let mut files = Vec::new();
    walk(&include, &include.join("c++"), &mut files, 0);
    files.sort();
    files
        .iter()
        .filter(|path| {
            std::fs::metadata(path).is_ok_and(|m| m.len() <= MAX_SCANNED_BYTES)
                && std::fs::read(path).is_ok_and(|text| declares_any(&text, imports))
        })
        .filter_map(|path| path.strip_prefix(&include).ok())
        .map(|rel| rel.to_string_lossy().into_owned())
        .collect()
}

fn walk(dir: &Path, skip: &Path, out: &mut Vec<PathBuf>, depth: usize) {
    if depth > 8 || dir == skip {
        return;
    }
    let Ok(entries) = std::fs::read_dir(dir) else {
        return;
    };
    for entry in entries.flatten() {
        if out.len() >= MAX_HEADERS {
            return;
        }
        let path = entry.path();
        match entry.file_type() {
            Ok(t) if t.is_dir() => walk(&path, skip, out, depth + 1),
            Ok(t) if t.is_file() && path.extension().is_some_and(|x| x == "h") => out.push(path),
            _ => {}
        }
    }
}

/// Does `text` spell one of `names` followed by `(`?
fn declares_any(text: &[u8], names: &BTreeSet<String>) -> bool {
    let ident = |c: u8| c.is_ascii_alphanumeric() || c == b'_';
    let mut i = 0;
    while i < text.len() {
        if !ident(text[i]) || text[i].is_ascii_digit() {
            i += 1;
            continue;
        }
        let start = i;
        while i < text.len() && ident(text[i]) {
            i += 1;
        }
        let mut next = i;
        while next < text.len() && matches!(text[next], b' ' | b'\t') {
            next += 1;
        }
        if text.get(next) == Some(&b'(')
            && std::str::from_utf8(&text[start..i]).is_ok_and(|w| names.contains(w))
        {
            return true;
        }
    }
    false
}

/// Preprocess one header that includes every one of `includes`. When the
/// preprocessor fails, the includes its diagnostics trace back to are left out
/// and it runs again.
fn preprocess(cpp: &str, root: &Path, triple: &str, includes: &[String]) -> Result<String, String> {
    let mut words = cpp.split_whitespace();
    let program = words.next().ok_or("--types-cpp: empty command")?;
    let given: Vec<&str> = words.collect();
    let mut args: Vec<String> = given.iter().map(|w| w.to_string()).collect();
    if !given.contains(&"-E") {
        args.push("-E".into());
    }
    if !given.contains(&"-x") {
        args.extend(["-x".into(), "c".into()]);
    }
    if !given.contains(&"-isysroot") {
        args.extend(["-isysroot".into(), root.to_string_lossy().into_owned()]);
    }
    if !given
        .iter()
        .any(|w| *w == "-target" || w.starts_with("--target"))
    {
        args.extend(["-target".into(), triple.into()]);
    }
    let umbrella = tempfile::Builder::new()
        .prefix("unlace-sdktypes-")
        .suffix(".h")
        .tempfile()
        .map_err(|e| format!("--option sdktypes: {e}"))?;
    let shown = umbrella.path().to_string_lossy().into_owned();
    let mut live = vec![true; includes.len()];
    let mut refused = Vec::new();
    for _ in 0..=MAX_RETRIES {
        let text: String = includes
            .iter()
            .zip(&live)
            .map(|(h, on)| {
                if *on {
                    format!("#include <{h}>\n")
                } else {
                    "\n".into()
                }
            })
            .collect();
        std::fs::write(umbrella.path(), text).map_err(|e| format!("--option sdktypes: {e}"))?;
        let out = std::process::Command::new(program)
            .args(&args)
            .arg(umbrella.path())
            .stdin(std::process::Stdio::null())
            .output()
            .map_err(|e| format!("--option sdktypes: {cpp:?}: {e}"))?;
        if out.status.success() {
            if !refused.is_empty() {
                eprintln!(
                    "note: --option sdktypes: left out {} the preprocessor refused: {}",
                    refused.len(),
                    refused.join(", ")
                );
            }
            if out.stdout.len() > MAX_OUTPUT_BYTES {
                return Err(format!(
                    "--option sdktypes: larger than {} MiB once preprocessed",
                    MAX_OUTPUT_BYTES >> 20
                ));
            }
            return Ok(String::from_utf8_lossy(&out.stdout).into_owned());
        }
        let stderr = String::from_utf8_lossy(&out.stderr);
        let culprits = umbrella_lines(&stderr, &shown);
        let mut dropped = false;
        for line in culprits {
            if let Some(on) = line.checked_sub(1).and_then(|i| live.get_mut(i))
                && *on
            {
                *on = false;
                dropped = true;
                refused.push(includes[line - 1].clone());
            }
        }
        if !dropped {
            let first = stderr
                .lines()
                .find(|l| !l.trim().is_empty())
                .unwrap_or("no diagnostic");
            return Err(format!("--option sdktypes: {cpp:?} failed: {first}"));
        }
    }
    Err(format!(
        "--option sdktypes: the preprocessor still fails after leaving out {}",
        refused.join(", ")
    ))
}

/// The lines of the generated header a preprocessor's diagnostics name
/// (`In file included from <umbrella>:3:`, `<umbrella>:3:10: fatal error: ...`).
fn umbrella_lines(stderr: &str, umbrella: &str) -> BTreeSet<usize> {
    let mut out = BTreeSet::new();
    for line in stderr.lines() {
        let Some(at) = line.find(umbrella) else {
            continue;
        };
        let rest = &line[at + umbrella.len()..];
        let Some(rest) = rest.strip_prefix(':') else {
            continue;
        };
        let digits = rest
            .find(|c: char| !c.is_ascii_digit())
            .unwrap_or(rest.len());
        if let Ok(n) = rest[..digits].parse() {
            out.insert(n);
        }
    }
    out
}

/// Blank the Objective-C `@interface`/`@protocol`/`@implementation` bodies
/// and `@class` lines a C-mode preprocessor leaves in a framework's text,
/// keeping every newline so line markers still hold.
fn blank_objc_containers(text: &str) -> String {
    let mut out = String::with_capacity(text.len());
    let mut inside = false;
    for line in text.split_inclusive('\n') {
        let t = line.trim_start();
        let opens = ["@interface", "@protocol", "@implementation"]
            .iter()
            .any(|k| t.starts_with(k));
        let forward =
            t.starts_with("@class") || (t.starts_with("@protocol") && t.trim_end().ends_with(';'));
        if forward && !inside {
            out.push_str(if line.ends_with('\n') { "\n" } else { "" });
            continue;
        }
        if opens {
            inside = true;
        }
        if inside {
            if t.contains("@end") {
                inside = false;
            }
            out.push_str(if line.ends_with('\n') { "\n" } else { "" });
            continue;
        }
        out.push_str(line);
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn objc_containers_are_blanked_and_lines_kept() {
        let text = "typedef long NSInteger;\n@class NSString;\n@protocol P;\n\
                    @interface NSObject <P>\n- (id)init;\n@end\nvoid NSLog(id format, ...);\n";
        let got = blank_objc_containers(text);
        assert_eq!(
            got,
            "typedef long NSInteger;\n\n\n\n\n\nvoid NSLog(id format, ...);\n"
        );
    }

    #[test]
    fn a_header_declares_an_import_only_before_a_parenthesis() {
        let names: BTreeSet<String> = ["sqlite3_open".to_string()].into_iter().collect();
        assert!(declares_any(
            b"int sqlite3_open (const char *, sqlite3 **);",
            &names
        ));
        assert!(!declares_any(
            b"#define sqlite3_open_v2 x\nint sqlite3_openx(void);",
            &names
        ));
        assert!(!declares_any(b"typedef int sqlite3_open;", &names));
    }

    #[test]
    fn diagnostics_name_the_umbrella_lines() {
        let err = "In file included from /tmp/u.h:3:\n/tmp/u.h:7:10: fatal error: 'x.h' file not found\n\
                   /usr/include/a.h:2:1: error: bad\n";
        assert_eq!(
            umbrella_lines(err, "/tmp/u.h")
                .into_iter()
                .collect::<Vec<_>>(),
            vec![3, 7]
        );
    }

    #[test]
    fn an_sdk_name_implies_its_platform() {
        assert_eq!(sdk_platform(Path::new("/x/iPhoneOS16.5.sdk")), Some("ios"));
        assert_eq!(sdk_platform(Path::new("/x/MacOSX14.sdk")), Some("macos"));
        assert_eq!(sdk_platform(Path::new("/x/other")), None);
    }
}
