//! Embedded interpreter / scripting-runtime API recognition (t397).
//!
//! Classifies a callee symbol name as a call into one of the common
//! *embedded* scripting / VM C-APIs. When a host application links
//! against an interpreter like Lua or CPython, every interaction with
//! the runtime goes through a small, well-known prefix family
//! (`lua_*`, `luaL_*`, `Py*`, `_Py_*`, `rb_*`, `mrb_*`, mangled
//! `v8::*`). Detecting these tells downstream analyses that:
//!
//! * The call boundary is *opaque* — control may run arbitrary script
//!   code, so escape analysis must treat reachable pointers as
//!   escaping.
//! * The function is part of an embedding layer rather than the host's
//!   own logic, which is useful for triage / structure recovery and
//!   for grouping calls in the decompiled output.
//!
//! Unlike [`crate::libc_idioms`], this module does *not* enumerate
//! every API entry point. The interpreter C-APIs are large (hundreds
//! of symbols each) and stable in their *prefix*, so a single prefix
//! check per family is precise enough and far cheaper to maintain
//! than a frozen roster. Anything outside the prefixes returns `None`.
//!
//! The classifier is intentionally side-effect free — it inspects only
//! the symbol string. Callers that want to annotate IR sites with the
//! interpreter kind should walk `Call` instructions themselves (see
//! [`crate::libc_idioms::annotate_libc_calls`] for the canonical
//! pattern).

/// Which embedded interpreter family a symbol belongs to.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum EmbedInterpKind {
    /// Reference Lua C-API (`lua_*`) plus the auxiliary library
    /// (`luaL_*`). Covers Lua 5.1 through 5.4 — the prefixes have not
    /// changed across versions. LuaJIT also re-exports the same
    /// symbols so this variant matches it as well.
    Lua,
    /// CPython public C-API (`Py*`, e.g. `PyObject_GetAttr`,
    /// `PyList_New`) and the private-but-widely-used `_Py_*` family
    /// (`_Py_Dealloc`, `_Py_NoneStruct`, …).
    Python,
    /// MRI Ruby C extension API (`rb_*`, e.g. `rb_define_method`,
    /// `rb_funcall`). Also matched by Ruby's `rb_str_*`, `rb_ary_*`
    /// helpers.
    Ruby,
    /// Google V8 (JavaScript engine). The V8 API is C++ only, so the
    /// classifier matches the Itanium-mangled namespace prefix
    /// `_ZN2v8` (and the MSVC mangling `?...@v8@@`). Any symbol
    /// containing one of those substrings counts.
    V8,
    /// mruby — the embeddable Ruby variant. Its C-API uses the
    /// distinct `mrb_*` prefix (note: also matched before the `rb_*`
    /// rule, so `mrb_foo` is classified as `Mruby` rather than
    /// `Ruby`).
    Mruby,
}

impl EmbedInterpKind {
    /// Lower-snake-case canonical name, suitable for serialising into
    /// annotations or test fixtures.
    pub const fn canonical_name(self) -> &'static str {
        match self {
            EmbedInterpKind::Lua => "lua",
            EmbedInterpKind::Python => "python",
            EmbedInterpKind::Ruby => "ruby",
            EmbedInterpKind::V8 => "v8",
            EmbedInterpKind::Mruby => "mruby",
        }
    }
}

/// Classify `symbol_name` as a call into one of the known embedded
/// interpreter C-APIs, or return `None` if it isn't recognised.
///
/// Match rules (checked in order — the first match wins):
///
/// 1. `mrb_*` → [`EmbedInterpKind::Mruby`]. Checked *before* `rb_*`
///    because mruby symbols start with `mrb`, which has `rb` as a
///    substring but is a different runtime.
/// 2. `lua_*` or `luaL_*` → [`EmbedInterpKind::Lua`].
/// 3. `Py*` or `_Py_*` → [`EmbedInterpKind::Python`]. Note the
///    `Py` family is case-sensitive: `py_foo` does not match.
/// 4. `rb_*` → [`EmbedInterpKind::Ruby`].
/// 5. Contains `_ZN2v8` (Itanium-mangled `v8::`) or `@v8@@` (MSVC
///    mangled `v8` namespace) → [`EmbedInterpKind::V8`]. We match a
///    *substring* rather than a prefix because mangled names start
///    with the mangling preamble (`_Z`, `?`) before reaching the
///    namespace component.
///
/// Returns `None` for anything else — including bare `v8` /
/// unmangled C++ identifiers (the V8 API has no plain-C export
/// surface).
pub fn recognize_interp_api(symbol_name: &str) -> Option<EmbedInterpKind> {
    // mruby must be checked before generic `rb_*` since `mrb_foo`
    // would otherwise need a special-case exclusion in the Ruby rule.
    if symbol_name.starts_with("mrb_") {
        return Some(EmbedInterpKind::Mruby);
    }

    if symbol_name.starts_with("lua_") || symbol_name.starts_with("luaL_") {
        return Some(EmbedInterpKind::Lua);
    }

    if symbol_name.starts_with("_Py_") || symbol_name.starts_with("Py") {
        return Some(EmbedInterpKind::Python);
    }

    if symbol_name.starts_with("rb_") {
        return Some(EmbedInterpKind::Ruby);
    }

    // V8 is C++ only — match the mangled namespace component.
    if symbol_name.contains("_ZN2v8") || symbol_name.contains("@v8@@") {
        return Some(EmbedInterpKind::V8);
    }

    None
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn recognises_lua_core_and_auxlib() {
        assert_eq!(recognize_interp_api("lua_pcall"), Some(EmbedInterpKind::Lua));
        assert_eq!(recognize_interp_api("lua_newstate"), Some(EmbedInterpKind::Lua));
        assert_eq!(recognize_interp_api("luaL_openlibs"), Some(EmbedInterpKind::Lua));
        assert_eq!(recognize_interp_api("luaL_loadstring"), Some(EmbedInterpKind::Lua));
    }

    #[test]
    fn recognises_python_public_and_internal() {
        assert_eq!(
            recognize_interp_api("PyObject_GetAttr"),
            Some(EmbedInterpKind::Python),
        );
        assert_eq!(
            recognize_interp_api("PyList_New"),
            Some(EmbedInterpKind::Python),
        );
        assert_eq!(
            recognize_interp_api("_Py_Dealloc"),
            Some(EmbedInterpKind::Python),
        );
        assert_eq!(
            recognize_interp_api("_Py_NoneStruct"),
            Some(EmbedInterpKind::Python),
        );
    }

    #[test]
    fn recognises_ruby_mri_extensions() {
        assert_eq!(
            recognize_interp_api("rb_define_method"),
            Some(EmbedInterpKind::Ruby),
        );
        assert_eq!(recognize_interp_api("rb_funcall"), Some(EmbedInterpKind::Ruby));
        assert_eq!(recognize_interp_api("rb_str_new"), Some(EmbedInterpKind::Ruby));
    }

    #[test]
    fn recognises_v8_mangled_namespace() {
        // Itanium mangling: `v8::Isolate::New(...)`.
        assert_eq!(
            recognize_interp_api("_ZN2v87Isolate3NewERKNS_15CreateParamsE"),
            Some(EmbedInterpKind::V8),
        );
        // MSVC mangling: `v8::String::NewFromUtf8`.
        assert_eq!(
            recognize_interp_api("?NewFromUtf8@String@v8@@SA?AV?$Local@VString@v8@@@2@PEAVIsolate@2@PEBDW4NewStringType@2@H@Z"),
            Some(EmbedInterpKind::V8),
        );
    }

    #[test]
    fn recognises_mruby_and_does_not_alias_with_ruby() {
        // `mrb_*` is mruby, not MRI.
        assert_eq!(recognize_interp_api("mrb_open"), Some(EmbedInterpKind::Mruby));
        assert_eq!(
            recognize_interp_api("mrb_define_class"),
            Some(EmbedInterpKind::Mruby),
        );
        // Sanity: an `rb_*` symbol still classifies as Ruby, not Mruby.
        assert_eq!(
            recognize_interp_api("rb_define_module"),
            Some(EmbedInterpKind::Ruby),
        );
    }

    #[test]
    fn rejects_unrelated_and_case_mismatched_symbols() {
        // Bare host symbols.
        assert_eq!(recognize_interp_api("main"), None);
        assert_eq!(recognize_interp_api("malloc"), None);
        // Case-sensitive Python rule: lowercase `py_` is not the API.
        assert_eq!(recognize_interp_api("py_helper"), None);
        // Prefix collision: a symbol *containing* `lua_` mid-name is
        // not a Lua API call.
        assert_eq!(recognize_interp_api("my_lua_wrapper"), None);
        // Unmangled `v8` identifier — V8 has no plain-C surface.
        assert_eq!(recognize_interp_api("v8_helper"), None);
        // Empty string.
        assert_eq!(recognize_interp_api(""), None);
    }
}
