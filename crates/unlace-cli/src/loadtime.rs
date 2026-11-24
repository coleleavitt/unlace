//! Translate CLI options into the load-time variables a load reads: handed to a
//! console child through its environment, and read into `LoadOptions` for an
//! in-process load without writing the process environment.
//!
//! The console subprocess and in-process loader share these conversions. Runtime
//! option validation still runs after loading; these preserve the loader's legacy
//! fallback values, including its different boolean vocabularies.

use std::collections::BTreeMap;
use std::process::Command;
use std::sync::Mutex;

use unlace_decomp::{
    calltargettype, debuglink, delphiabi, dyldcache, exporttrie, goabi, ifuncfpret, kernelcache,
    libctypes, loadoptions, macho_arm64e, objcivars, objcsdk, ppcapu, sourcelang, symbolnamechars,
};

#[derive(Clone, Copy)]
enum Encoding {
    DefaultOn,
    DefaultOff,
    SymbolNameChars,
    Trimmed,
    LibcTypes,
    Kernelcache,
    SourceLang,
    Ppc32Pic,
}

fn binding(name: &str) -> Option<(&'static str, Encoding)> {
    use Encoding::*;
    Some(match name {
        "ppc32picimports" => (unlace_decomp::ppc32picimports::ENV, Ppc32Pic),
        "ifuncfpret" => (ifuncfpret::IFUNCFPRET_ENV, DefaultOn),
        "ppcapu" => (ppcapu::PPCAPU_ENV, DefaultOff),
        "delphiabi" => (delphiabi::DELPHIABI_ENV, DefaultOn),
        "ruststdsigs" => (unlace_decomp::ruststdsigs::RUSTSTDSIGS_ENV, Trimmed),
        "debuglink" => (debuglink::DEBUGLINK_ENV, DefaultOn),
        "kernelcache" => (kernelcache::KERNELCACHE_ENV, Kernelcache),
        "kernelcache-boot" => (
            unlace_decomp::kernelcacheboot::KERNELCACHE_BOOT_ENV,
            Trimmed,
        ),
        "goabi" => (goabi::GOABI_ENV, DefaultOn),
        "cil" => (unlace_decomp::cil::CIL_ENV, DefaultOn),
        "symbolnamechars" => (symbolnamechars::SYMBOLNAMECHARS_ENV, SymbolNameChars),
        "libctypes" => (libctypes::LIBCTYPES_ENV, LibcTypes),
        "dwarfscopes" => (
            unlace_analysis::dwarf::dwarfscopes::DWARFSCOPES_ENV,
            DefaultOn,
        ),
        "dwarfenumtypedef" => (
            unlace_analysis::dwarf::dwarfenumtypedef::DWARFENUMTYPEDEF_ENV,
            DefaultOn,
        ),
        "calltargettype" => (calltargettype::CALLTARGETTYPE_ENV, DefaultOn),
        "macho-arm64e" => (macho_arm64e::MACHO_ARM64E_ENV, DefaultOn),
        "sourcelang" => (sourcelang::SOURCELANG_ENV, SourceLang),
        "objcivars" => (objcivars::OBJCIVARS_ENV, DefaultOn),
        "objcsdk" => (objcsdk::OBJCSDK_ENV, Trimmed),
        "dyldimage" => (dyldcache::DYLDIMAGE_ENV, Trimmed),
        "dyldcrossrefs" => (dyldcache::DYLDCROSSREFS_ENV, DefaultOn),
        "exporttrie" => (exporttrie::EXPORTTRIE_ENV, DefaultOn),
        "codestrings" => (loadoptions::CODESTRINGS_ENV, DefaultOn),
        "nameladder" => (loadoptions::NAMELADDER_ENV, DefaultOn),
        "swifttypes" => (loadoptions::SWIFTTYPES_ENV, DefaultOn),
        _ => return None,
    })
}

impl Encoding {
    fn encode(self, value: &str) -> Option<String> {
        let token = value.trim().to_ascii_lowercase();
        let off = matches!(token.as_str(), "off" | "0" | "false");
        Some(match self {
            Self::DefaultOn => if off { "off" } else { "on" }.into(),
            Self::DefaultOff => if matches!(token.as_str(), "on" | "1" | "true" | "") {
                "on"
            } else {
                "off"
            }
            .into(),
            Self::SymbolNameChars => symbolnamechars::NameChars::parse(value)
                .unwrap_or_default()
                .as_str()
                .into(),
            Self::Ppc32Pic => unlace_decomp::ppc32picimports::Mode::from_env_value(value)
                .as_str()
                .into(),
            Self::Trimmed => value.trim().into(),
            Self::Kernelcache => kernelcache::KernelcacheChoice::parse(value)
                .unwrap_or_default()
                .as_str()
                .into(),
            Self::LibcTypes => {
                if off {
                    "off".into()
                } else {
                    token
                }
            }
            // A forced language travels as its token; `auto` (and any value the
            // console `option` arm will refuse anyway) clears the variable so
            // detection decides.
            Self::SourceLang => {
                return sourcelang::SourceLang::parse_forced(value)
                    .map(|lang| lang.as_str().into());
            }
        })
    }
}

pub(crate) fn is_loadtime_gate(name: &str) -> bool {
    binding(name).is_some()
}

/// The load-time gates that choose which image of a file is read: the
/// `MH_FILESET` entry, the collections its pointers are resolved against, and
/// the dyld shared cache image.
const IMAGE_SELECTION: [&str; 3] = ["kernelcache", "kernelcache-boot", "dyldimage"];

/// The load-time variables this invocation states for every surface and every
/// child process: the global `--image`, the image-selection `--option`s, and
/// the images `--follow-images` adds. Set in `main`, read in place of the
/// environment; the process environment itself is never written.
static INVOCATION: Mutex<BTreeMap<&'static str, Option<String>>> = Mutex::new(BTreeMap::new());

/// Set one invocation variable ([`INVOCATION`]).
pub(crate) fn set_invocation_var(name: &'static str, value: &str) {
    INVOCATION
        .lock()
        .unwrap_or_else(|e| e.into_inner())
        .insert(name, Some(value.to_string()));
}

/// The invocation variables ([`INVOCATION`]).
pub(crate) fn invocation() -> BTreeMap<&'static str, Option<String>> {
    INVOCATION.lock().unwrap_or_else(|e| e.into_inner()).clone()
}

/// `name` as this invocation states it: its invocation value, else the
/// environment's.
pub(crate) fn invocation_var(name: &str) -> Option<String> {
    match invocation().get(name) {
        Some(value) => value.clone(),
        None => unlace_base::env::var(name).ok(),
    }
}

/// The load options this invocation states: the environment with the
/// invocation variables over it. `main` enters them for the whole run.
pub(crate) fn invocation_options() -> loadoptions::LoadOptions {
    loadoptions::LoadOptions::from_env_with(&invocation())
}

/// Hand the invocation variables to a child process.
pub(crate) fn apply_invocation(cmd: &mut Command) {
    for (name, value) in invocation() {
        match value {
            Some(value) => cmd.env(name, value),
            None => cmd.env_remove(name),
        };
    }
}

/// Record the image-selection gates `argv` sets with `--option NAME VALUE` for
/// the whole invocation, as the global `--image` is: every surface that reads
/// the image itself (the reference walk, the string and constant scans, the
/// call graph) then reads the image the engine loads. The last value wins.
pub(crate) fn export_image_selection(argv: &[String]) {
    for (key, value) in image_selection(argv) {
        set_invocation_var(key, &value);
    }
}

fn image_selection(argv: &[String]) -> BTreeMap<&'static str, String> {
    let mut values = BTreeMap::new();
    let mut i = 0;
    while i < argv.len() {
        if argv[i] != "--option" || i + 2 >= argv.len() {
            i += 1;
            continue;
        }
        let name = argv[i + 1].as_str();
        if let Some((key, encoding)) = binding(name).filter(|_| IMAGE_SELECTION.contains(&name)) {
            values.extend(encoding.encode(&argv[i + 2]).map(|value| (key, value)));
        }
        i += 3;
    }
    values
}

pub(crate) fn last_option_value<'a>(
    options: &'a [(String, String)],
    name: &str,
) -> Option<&'a str> {
    options
        .iter()
        .rev()
        .find(|(key, _)| key == name)
        .map(|(_, value)| value.as_str())
}

pub(crate) fn explicit_output_language(options: &[(String, String)]) -> Option<&str> {
    options
        .iter()
        .rev()
        .find(|(name, _)| matches!(name.as_str(), "setlanguage" | "outlang"))
        .map(|(_, value)| value.as_str())
}

fn settings(
    options: &[(String, String)],
    slice: Option<&str>,
    decode_lanes: usize,
    functions_inventory: bool,
) -> BTreeMap<&'static str, Option<String>> {
    let mut values = invocation();
    for (name, value) in options {
        if let Some((key, encoding)) = binding(name) {
            values.insert(key, encoding.encode(value));
        }
    }
    if explicit_output_language(options).is_some_and(|l| l.starts_with("rust")) {
        values.insert(calltargettype::CALLTARGETTYPE_ENV, Some("off".into()));
    }
    if let Some(slice) = slice.filter(|s| !s.trim().is_empty()) {
        values.insert("UNLACE_MACHO_SLICE", Some(slice.into()));
    }
    if decode_lanes > 1 {
        values.insert(
            unlace_analysis::listing::pdecode::DECODE_JOBS_ENV,
            Some(decode_lanes.to_string()),
        );
    }
    let objc = last_option_value(options, "objc").unwrap_or("on");
    values.insert(
        unlace_analysis::passes::LOAD_OBJC_ENV,
        Some(
            if matches!(objc.trim(), "off" | "0" | "false") {
                "off"
            } else {
                "on"
            }
            .into(),
        ),
    );
    let strings = if functions_inventory {
        "off"
    } else {
        last_option_value(options, "strings").unwrap_or("on")
    };
    values.insert(
        unlace_analysis::passes::LOAD_STRINGS_ENV,
        Some(
            if matches!(strings.trim(), "off" | "0" | "false") {
                "off"
            } else {
                "on"
            }
            .into(),
        ),
    );
    values
}

pub(crate) fn apply_to_command(
    cmd: &mut Command,
    options: &[(String, String)],
    slice: Option<&str>,
) {
    for (name, value) in settings(options, slice, 1, false) {
        match value {
            Some(value) => cmd.env(name, value),
            None => cmd.env_remove(name),
        };
    }
}

/// The load options `options` and `slice` state over the invocation and the
/// process environment, without changing either.
pub(crate) fn load_options(
    options: &[(String, String)],
    slice: Option<&str>,
    decode_lanes: usize,
    functions_inventory: bool,
) -> loadoptions::LoadOptions {
    loadoptions::LoadOptions::from_env_with(&settings(
        options,
        slice,
        decode_lanes,
        functions_inventory,
    ))
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn load_pass_gates_follow_options_and_surface() {
        use unlace_analysis::passes::{LOAD_OBJC_ENV, LOAD_STRINGS_ENV};
        for (objc, strings, inventory, expected_objc, expected_strings) in [
            (None, None, false, "on", "on"),
            (Some("off"), None, false, "off", "on"),
            (Some("on"), Some("off"), false, "on", "off"),
            (None, Some("on"), true, "on", "off"),
        ] {
            let options: Vec<(String, String)> = [("objc", objc), ("strings", strings)]
                .into_iter()
                .filter_map(|(name, value)| Some((name.into(), value?.into())))
                .collect();
            let values = settings(&options, None, 1, inventory);
            assert_eq!(values[LOAD_OBJC_ENV].as_deref(), Some(expected_objc));
            assert_eq!(values[LOAD_STRINGS_ENV].as_deref(), Some(expected_strings));
        }
    }

    #[test]
    fn loader_value_vocabularies_are_preserved() {
        for (name, cases) in [
            (
                "ppc32picimports",
                vec![
                    ("off", Some("off")),
                    ("on", Some("on")),
                    (" ABI ", Some("abi")),
                    (" TRUE ", Some("on")),
                    ("1", Some("on")),
                    ("", Some("on")),
                    ("0", Some("off")),
                    ("yes", Some("off")),
                    ("invalid", Some("off")),
                ],
            ),
            (
                "objcivars",
                vec![
                    (" OFF ", Some("off")),
                    ("false", Some("off")),
                    ("no", Some("on")),
                    ("invalid", Some("on")),
                    ("", Some("on")),
                ],
            ),
            (
                "ppcapu",
                vec![
                    (" TRUE ", Some("on")),
                    ("", Some("on")),
                    ("yes", Some("off")),
                    ("invalid", Some("off")),
                ],
            ),
            (
                "macho-arm64e",
                vec![
                    (" YES ", Some("on")),
                    ("1", Some("on")),
                    ("", Some("on")),
                    ("off", Some("off")),
                    ("0", Some("off")),
                ],
            ),
            (
                "kernelcache",
                vec![
                    (" AUTO ", Some("auto")),
                    ("OFF", Some("off")),
                    ("IOSurface", Some("IOSurface")),
                    ("two words", Some("auto")),
                ],
            ),
            (
                "libctypes",
                vec![
                    (" GLIBC ", Some("glibc")),
                    ("0", Some("off")),
                    ("future", Some("future")),
                ],
            ),
            (
                "symbolnamechars",
                vec![("off", Some("off")), ("invalid", Some("safe"))],
            ),
        ] {
            let (_, encoding) = binding(name).unwrap();
            for (input, expected) in cases {
                assert_eq!(
                    encoding.encode(input).as_deref(),
                    expected,
                    "{name} {input:?}"
                );
            }
        }
    }

    #[test]
    fn image_selection_takes_the_last_entry_and_image_options_only() {
        let argv: Vec<String> = [
            "bin",
            "--option",
            "kernelcache",
            "A",
            "--option",
            "dyldimage",
            " libfoo.dylib ",
            "--option",
            "objc",
            "off",
            "--option",
            "kernelcache",
            "PMGR",
            "--option",
            "kernelcache",
        ]
        .map(String::from)
        .to_vec();
        assert_eq!(
            image_selection(&argv),
            BTreeMap::from([
                (kernelcache::KERNELCACHE_ENV, "PMGR".to_string()),
                (dyldcache::DYLDIMAGE_ENV, "libfoo.dylib".to_string()),
            ])
        );
        assert!(image_selection(&["--option".into(), "kernelcache".into()]).is_empty());
    }

    #[test]
    fn command_overrides_keep_last_values_and_explicit_removals() {
        let options = [
            ("objcivars".into(), "on".into()),
            ("objcivars".into(), "off".into()),
            ("macho-arm64e".into(), "off".into()),
            ("dyldcrossrefs".into(), "off".into()),
            ("cil".into(), "off".into()),
            ("sourcelang".into(), "auto".into()),
            ("unrelated".into(), "on".into()),
        ];
        let mut cmd = Command::new("unused");
        apply_to_command(&mut cmd, &options, Some("arm64"));
        let actual: BTreeMap<_, _> = cmd
            .get_envs()
            .map(|(k, v)| (k.to_str().unwrap(), v.map(|v| v.to_str().unwrap())))
            .collect();
        assert_eq!(
            actual,
            BTreeMap::from([
                ("UNLACE_OBJCIVARS", Some("off")),
                ("UNLACE_MACHO_ARM64E", Some("off")),
                ("UNLACE_MACHO_SLICE", Some("arm64")),
                ("UNLACE_DYLDCROSSREFS", Some("off")),
                ("UNLACE_CIL", Some("off")),
                (sourcelang::SOURCELANG_ENV, None),
                (unlace_analysis::passes::LOAD_OBJC_ENV, Some("on")),
                (unlace_analysis::passes::LOAD_STRINGS_ENV, Some("on")),
            ])
        );
        assert_eq!(settings(&[], Some("  "), 1, false).len(), 2);
        assert_eq!(
            settings(&[], None, 4, false)[unlace_analysis::listing::pdecode::DECODE_JOBS_ENV],
            Some("4".into())
        );
    }
}
