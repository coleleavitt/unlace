# Original unlace (origin/master) vs main: Mach-O, dyld cache and ObjC loaders

Scope: `crates/unlace-loader/src/macho.rs` (4694 lines), `dyld_cache.rs` (3445) and `objc.rs` (1820) on `origin/master`, read with `git show` only. Main is `origin/main` at 188480126a. Every "have" below was checked by reading main's files, not by running anything.

Main is ahead on this whole area. Main has its own loader tree (`crates/unlace-analysis/src/loader/format/macho/`), a full ObjC analyzer (`analyzers/objc/`) and a dyld cache reader with split caches and slide info v1 to v5. Almost every technique in the three master files is present. Only two small items are worth porting, and both are listed in the first table. Items are ranked by value.

## Ranked gaps

| # | Technique | Original (origin/master) | Main status (file:line) | Port? | Size |
|---|---|---|---|---|---|
| 1 | Dependency list on every Mach-O: `LC_LOAD_DYLIB`, weak, reexport, upward and lazy dylibs, plus `LC_RPATH` | `macho.rs:1717` `load_dylibs_and_rpaths`; dylib ordinal names at `macho.rs:689` | **Partial.** Only the SBOM collector reads the commands (`unlace-cli/src/sbom/collect.rs:414-418`) and dyld cache extraction does (`dyldcache/extract.rs:57`). The loaded-image model has no dylib or rpath field (grep for `DylibDep`, `LC_RPATH` and `rpath` finds none) | **Yes.** Cross-image resolution and provenance need the list on any Mach-O, not only cache members. It is a fact read from the file, so it needs no option | S |
| 2 | Swift-mangled ObjC selectors demangled when read (`_$s...` becomes a readable name) | `objc.rs:147-158` `decode_objc_selector_name`; test at `objc.rs:1294` (protocol method lists) | **Missing.** `analyzers/objc/mod.rs:41` says selectors are plain ASCII and need no demangler; `methods.rs:127` reads the raw string. The Swift demangler exists (`analyzers/demangle/swift.rs:115`) but is used only for class names (`objc/swiftclassnames.rs:11`) | **Yes, small.** Route selector reads through the existing demangler, gated on the `$s` / `_$s` prefixes. Rare in practice, but protocol lists are where it shows up | S |
| 3 | `LC_SEGMENT_SPLIT_INFO` kind byte and length | `macho.rs:951-1003` (header only: kind byte plus payload length) | **Missing.** `dyldcache/extract.rs:14` says extracted images drop split-segment info | No. The original only records the kind byte and never decodes the delta stream, so there is no analysis to gain | XS |
| 4 | Per-slot arm64e auth records (key, diversity, address diversity) returned from the cache slide walk | `dyld_cache.rs:579` `ArmAuthMeta`, `:1513` `AuthPointer`, `:1534` `ExtractedImage`, `:1570` `extract_image_with_slide_ex` | **Partial.** `dyldcache/slide.rs:16` says diversity and key are not modelled on the rewrite path. The decode happens at the use site instead: `format/macho/chained.rs:213` keeps the fields per fixup, and `analyzers/rtti/arm64evcall.rs:5` decodes the raw word for virtual calls | No for now. The virtual-call path already covers the use case. Revisit only if an arm64e cache call goes unannotated | M |
| 5 | Fat slice choice: arm64 before the first slice | `macho.rs:119` `preference_rank`, `:133` `parse_fat_arches` | **Different order, by design.** `loader/macho_fat.rs:33` prefers x86-64, then arm64, then the first slice | No. Deliberate on main | - |
| 6 | Named special bind ordinals (self, main-executable, flat-namespace, weak-lookup) | `macho.rs:689` `dylib_ordinal_name` | **Not needed.** Main's bind interpreter keeps only symbol names (`format/macho/dyldinfo.rs:120-200`), so ordinals are ignored | No | - |

## Already on main (no port needed)

- Classic bind opcodes, including lazy binds, with an operation budget: `format/macho/dyldinfo.rs:40` (`MAX_BINDS`). Original: `macho.rs:555`.
- Classic rebase opcodes as a pointer source: `loader/dataptrs.rs:11` and `:256`. Original: `macho.rs:447`.
- Export trie walk with a cycle guard and caps: `format/macho/exports.rs:68-100` (seen set at `:70`, caps at `:19-20`). Original: `macho.rs:699-765`.
- Chained fixups, including arm64e ordinal widths and addends: `format/macho/chained.rs:116-122` and `:1062-1087`. Original: `macho.rs:1068-1410`.
- `LC_FUNCTION_STARTS`, relative to the `__TEXT` vmaddr: `analyzers/entry/macho_entry.rs:143-191`. Original: `macho.rs:878`.
- Indirect-symbol stubs and reserved-field stub sizes: `loader/macho_stubs.rs`. Original: `macho.rs:1472-1716`.
- `__auth_ptr` and `__auth_got` slots bound to imports: `loader/authptrcall.rs:26-30`, `analyzers/iokit/tables.rs:440-459`. Original: `macho.rs:1868`.
- Dyld cache header, images, mappings, and split caches with sub-cache routing: `loader/dyldcache.rs:6-7` and `:411` (`subcache_names`). Original: `dyld_cache.rs:82`, `:339`, `:410-466`.
- Plan, assemble and extract an image as a Mach-O: `loader/dyldcache/extract.rs`. Original: `dyld_cache.rs:157`, `:268`, `:321`. The original 16 MiB fixed window (`dyld_cache.rs:22`) is superseded.
- Slide info v1 to v5: `loader/dyldcache/slide.rs` (v3 at `:303`, v5 at `:313`). Original: `dyld_cache.rs:1013`, `:1161`, `:1306`, `:1643`, `:1767`.
- ObjC `class_t` and `class_ro_t`: `analyzers/objc/classt.rs:1-20` and `:93`. Original: `objc.rs:160`.
- ObjC ivars, properties and protocols: `analyzers/objc/objcivars.rs`, `objcprops.rs`, `objcprotos.rs:45`. Original: `objc.rs:234-410`.
- ObjC categories and the category namespace map, resolved through binds and symbols: `analyzers/objc/objccats.rs:51`, `:93`, `:127`. Original: `objc.rs:456-669`.
- ObjC method lists in direct and relative encodings: `analyzers/objc/methods.rs:31-33` and `:86`. Original: `objc.rs:74-130`.

## Out of scope

Debugger, emulator, LSP and hand-written lifters are not covered here, per the owner's brief.

## Method

Read the three master files from `git show origin/master:<path>` and outlined them by function. Checked each technique against main with `git grep` over `crates/` (and `notes/archived-master-inventory.md`, `notes/ida-gap/apple-objc-macho.md`). Read the relevant bodies on main where a grep hit could be a false match. No cargo, no builds, no unlace binaries were run.
