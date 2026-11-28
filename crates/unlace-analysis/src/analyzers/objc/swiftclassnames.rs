//! (unlace) The one place an Objective-C runtime class name becomes the name
//! unlace shows: a Swift class registers with the runtime as `_TtC6Toyota3Foo`,
//! and every rendering of it — method labels, the instance struct, `@"…"`
//! pointer types, ivar offset symbols — says `Toyota.Foo`. Lookups between the ObjC tables keep the runtime spelling.

/// The class name unlace renders: the Swift demangling of an ObjC runtime name
/// (`_TtC6Toyota3Foo` → `Toyota.Foo`) when the name is in the demangler's
/// coverage, else the runtime spelling as is.
pub fn display_class_name(runtime_name: &str) -> String {
    if is_swift_runtime_name(runtime_name)
        && let Some(d) = crate::demangle::swift::demangle_swift_name(runtime_name) {
            return d;
        }
    runtime_name.to_string()
}

/// A class the Swift compiler registered with the ObjC runtime.
pub fn is_swift_runtime_name(runtime_name: &str) -> bool {
    runtime_name.starts_with("_Tt")
}

#[cfg(test)]
mod tests;
