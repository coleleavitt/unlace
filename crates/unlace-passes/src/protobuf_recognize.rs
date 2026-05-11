//! Generated-Protobuf C++ message recognition (t384).
//!
//! Google's `protoc` C++ backend emits a *highly stylised* class per
//! `message` declaration: every generated class inherits from
//! `google::protobuf::Message` (or `MessageLite`) and overrides a fixed
//! roster of virtual methods — `SerializeToString`,
//! `SerializeWithCachedSizes`, `MergePartialFromCodedStream`,
//! `ByteSizeLong`, `Clear`, `CopyFrom`, etc. The roster is *the*
//! reliable fingerprint: it's emitted verbatim regardless of the
//! message's own field names, and it dominates the vtable layout
//! enough that even a partial recovery (3 of 6 methods) is strongly
//! distinguishing.
//!
//! This pass takes a class name plus its reconstructed vtable layout
//! and returns `Some(ProtobufMessage)` when ≥3 of the canonical
//! methods are present. Three is the threshold chosen empirically:
//!
//! * Two-method matches occur in unrelated serialisation code
//!   (e.g. Boost.Serialization adapters re-using `Clear` + `CopyFrom`
//!   semantically).
//! * Three-method matches are essentially exclusive to protoc output
//!   — non-protobuf classes virtually never carry a `ByteSizeLong`
//!   *and* a `SerializeWithCachedSizes`.
//!
//! The detector is intentionally tolerant of compiler-induced naming
//! variation: vtable slot names can arrive demangled
//! (`MyMsg::SerializeToString`) or as a bare method tail
//! (`SerializeToString`). We match on the tail after the final `::`,
//! which works for both. We also accept the `MergePartialFrom*`
//! family broadly (Coded stream / Zero copy stream variants) so that
//! protoc output across protobuf 2.x / 3.x versions classifies
//! identically.

use unlace_loader::rtti::{VtableLayout, VtableSlotKind};

/// A class identified as a generated Protobuf message.
///
/// The boolean fields report *which* of the canonical methods were
/// observed in the vtable, so downstream passes can decide whether the
/// recovery is good enough to e.g. synthesise a `.proto` skeleton or
/// merely tag the class for human triage.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ProtobufMessage {
    /// The class name as supplied by the caller — usually the
    /// demangled C++ qualified name (`tutorial::Person`).
    pub class_name: String,
    /// `true` iff a `SerializeToString` slot was found.
    pub has_serialize: bool,
    /// `true` iff a `MergePartialFrom*` (Coded/ZeroCopy/Stream) slot
    /// was found. Named `has_parse` for terseness — `Merge*` is how
    /// protoc spells "parse a wire-format payload".
    pub has_parse: bool,
    /// `true` iff a `ByteSizeLong` (or legacy `ByteSize`) slot was
    /// found. This method is the single most distinguishing
    /// protobuf-ism — almost no other library uses the name.
    pub has_byte_size: bool,
}

/// Extract the method-name tail from a (possibly qualified) slot
/// name: `tutorial::Person::Clear` → `Clear`, bare `Clear` → `Clear`.
fn method_tail(name: &str) -> &str {
    match name.rsplit_once("::") {
        Some((_, tail)) => tail,
        None => name,
    }
}

/// Returns `Some(ProtobufMessage)` if `vtable` looks like the vtable
/// of a generated Protobuf C++ message — that is, ≥3 of the canonical
/// protobuf method names appear among its function slots.
///
/// Returns `None` when `vtable` is `None` or when fewer than three
/// matches are found. The `class_name` is recorded verbatim in the
/// returned [`ProtobufMessage`] but is *not* used as a matching
/// signal: relying on the class name would miss obfuscated or
/// renamed messages, while the vtable fingerprint survives renaming.
pub fn detect_protobuf_message(
    class_name: &str,
    vtable: Option<&VtableLayout>,
) -> Option<ProtobufMessage> {
    let vtable = vtable?;

    // Collect demangled method tails from every subtable's function
    // slots. Multiple inheritance / virtual bases mean methods can
    // live in non-primary subtables, so we walk all of them.
    let mut has_serialize = false;
    let mut has_serialize_cached = false;
    let mut has_parse = false;
    let mut has_byte_size = false;
    let mut has_clear = false;
    let mut has_copy_from = false;

    for sub in &vtable.subtables {
        for slot in &sub.functions {
            let VtableSlotKind::Function { name: Some(name), .. } = slot else {
                continue;
            };
            let tail = method_tail(name);
            match tail {
                "SerializeToString" => has_serialize = true,
                "SerializeWithCachedSizes" => has_serialize_cached = true,
                "ByteSizeLong" | "ByteSize" => has_byte_size = true,
                "Clear" => has_clear = true,
                "CopyFrom" => has_copy_from = true,
                t if t.starts_with("MergePartialFrom") => has_parse = true,
                _ => {}
            }
        }
    }

    let match_count = [
        has_serialize,
        has_serialize_cached,
        has_parse,
        has_byte_size,
        has_clear,
        has_copy_from,
    ]
    .iter()
    .filter(|b| **b)
    .count();

    if match_count < 3 {
        return None;
    }

    // For the reported booleans, fold the two serialise variants into
    // `has_serialize` (callers want "does it serialise?", not the
    // exact spelling) and treat `has_parse` / `has_byte_size` as-is.
    Some(ProtobufMessage {
        class_name: class_name.to_string(),
        has_serialize: has_serialize || has_serialize_cached,
        has_parse,
        has_byte_size,
    })
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_loader::rtti::VtableSubtable;

    /// Build a single-subtable vtable whose function slots have the
    /// given demangled names. Address fields are set to dummy values
    /// — this pass only inspects method names.
    fn vtable_with_methods(class: &str, methods: &[&str]) -> VtableLayout {
        let functions = methods
            .iter()
            .enumerate()
            .map(|(i, m)| VtableSlotKind::Function {
                va: 0x1000 + (i as u64) * 8,
                name: Some(format!("{class}::{m}")),
                is_thunk: false,
            })
            .collect();
        VtableLayout {
            vtable_addr: 0x1000,
            total_size: 0,
            subtables: vec![VtableSubtable {
                address_point: 0x1010,
                offset_to_top: 0,
                rtti_addr: 0,
                virtual_base_offsets: vec![],
                functions,
            }],
        }
    }

    #[test]
    fn detects_full_protobuf_message_roster() {
        // Canonical generated-protobuf vtable: all six methods present.
        let vt = vtable_with_methods(
            "tutorial::Person",
            &[
                "SerializeToString",
                "SerializeWithCachedSizes",
                "MergePartialFromCodedStream",
                "ByteSizeLong",
                "Clear",
                "CopyFrom",
            ],
        );
        let msg = detect_protobuf_message("tutorial::Person", Some(&vt))
            .expect("full protobuf roster should classify");
        assert_eq!(msg.class_name, "tutorial::Person");
        assert!(msg.has_serialize);
        assert!(msg.has_parse);
        assert!(msg.has_byte_size);
    }

    #[test]
    fn detects_at_threshold_three_methods() {
        // Exactly three matches — the minimum. Pick the three most
        // distinguishing methods so the test also documents that
        // `ByteSizeLong` + `MergePartialFrom*` + `SerializeToString`
        // alone are enough.
        let vt = vtable_with_methods(
            "obfuscated::Foo",
            &[
                "SerializeToString",
                "MergePartialFromCodedStream",
                "ByteSizeLong",
                // Decoy: some unrelated virtual method.
                "DoSomethingElse",
            ],
        );
        let msg = detect_protobuf_message("obfuscated::Foo", Some(&vt))
            .expect("3-of-6 should hit the threshold");
        assert!(msg.has_serialize);
        assert!(msg.has_parse);
        assert!(msg.has_byte_size);
    }

    #[test]
    fn rejects_too_few_matches() {
        // Two matches → below threshold. `Clear` alone is common
        // enough in non-protobuf code (resettable containers) that
        // pairing it with one other method must not classify.
        let vt = vtable_with_methods(
            "boost::SomeContainer",
            &["Clear", "CopyFrom", "Resize", "Reserve", "Sort"],
        );
        assert!(detect_protobuf_message("boost::SomeContainer", Some(&vt)).is_none());

        // Zero matches.
        let vt = vtable_with_methods("MyWidget", &["Paint", "Resize", "Show"]);
        assert!(detect_protobuf_message("MyWidget", Some(&vt)).is_none());

        // No vtable at all → `None`.
        assert!(detect_protobuf_message("Anything", None).is_none());
    }

    #[test]
    fn matches_bare_method_names_without_qualifier() {
        // Some recovery paths produce bare method names (no `::`
        // qualifier). The detector must handle that — it strips the
        // final `::`-separated tail, which is a no-op on a bare name.
        let functions = vec![
            VtableSlotKind::Function {
                va: 0x2000,
                name: Some("SerializeToString".to_string()),
                is_thunk: false,
            },
            VtableSlotKind::Function {
                va: 0x2008,
                name: Some("MergePartialFromZeroCopyStream".to_string()),
                is_thunk: false,
            },
            VtableSlotKind::Function {
                va: 0x2010,
                name: Some("ByteSize".to_string()), // legacy spelling
                is_thunk: false,
            },
            // Throw in an anonymous slot — must be skipped, not panic.
            VtableSlotKind::Function {
                va: 0x2018,
                name: None,
                is_thunk: false,
            },
            VtableSlotKind::Zero,
        ];
        let vt = VtableLayout {
            vtable_addr: 0x2000,
            total_size: 0,
            subtables: vec![VtableSubtable {
                address_point: 0x2010,
                offset_to_top: 0,
                rtti_addr: 0,
                virtual_base_offsets: vec![],
                functions,
            }],
        };
        let msg = detect_protobuf_message("BareNames", Some(&vt))
            .expect("bare-named methods should still match");
        assert!(msg.has_serialize);
        assert!(msg.has_parse, "MergePartialFromZeroCopyStream is a parse variant");
        assert!(msg.has_byte_size, "legacy ByteSize should still set the flag");
    }
}
