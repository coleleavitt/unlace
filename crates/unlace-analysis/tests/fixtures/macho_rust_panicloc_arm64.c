/* A stripped Rust Mach-O keeps no Rust symbols and no toolchain record, but
 * its panic locations carry rustc's source paths in __TEXT,__cstring/__const.
 * clang -target arm64-apple-macos11 -O1 -c macho_rust_panicloc_arm64.c */
const char *location(void) {
    return "/rustc/90b35a6239c3d8bdabc530a6a0816f7ff89a0aaf/library/core/src/panicking.rs";
}
