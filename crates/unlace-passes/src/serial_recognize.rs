//! Recognise calls into custom serialisation libraries from a symbol name.
//!
//! Decompiled binaries that use a schema-driven serialisation library
//! (Cap'n Proto, FlatBuffers, MessagePack, Protocol Buffers) leak the
//! library origin through the unmangled or Itanium-mangled symbol of the
//! generated reader/writer/encoder functions.  Tagging these calls early
//! lets downstream passes:
//!
//! * skip type recovery on the wire-format scratch buffers (they're opaque
//!   byte arrays by design, no point inferring a struct layout);
//! * render annotations that show the schema library next to the call so
//!   the reverse engineer immediately recognises generated code; and
//! * cluster generated reader/writer pairs into the same "schema module"
//!   for the variable namer.
//!
//! The matcher is intentionally string-only: it takes either a demangled
//! symbol (e.g. `capnp::message::Builder::new`) or a raw Itanium mangling
//! (e.g. `_ZN5capnp7messageE…`) and returns the recognised
//! [`SerialKind`].  It does **not** parse types or arguments — that's the
//! caller's job once it knows what library is in play.

/// Which custom serialisation library a symbol came from.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum SerialKind {
    /// Cap'n Proto (`capnp::*`, mangled `_ZN5capnp…`).
    CapnProto,
    /// FlatBuffers (`flatbuffers::*`, mangled `_ZN11flatbuffers…`).
    FlatBuffers,
    /// MessagePack (`msgpack::*`, C API `msgpack_pack_*`).
    MsgPack,
    /// Protocol Buffers (`google::protobuf::*`, mangled `_ZN6google8protobuf…`).
    Protobuf,
}

/// Classify `symbol_name` as a call into a recognised serialisation library.
///
/// Accepts demangled (`capnp::message::Builder::new`) or Itanium-mangled
/// (`_ZN5capnp…`) inputs.  Returns `None` if no library prefix matches.
pub fn recognize_serial_api(symbol_name: &str) -> Option<SerialKind> {
    // Cap'n Proto — demangled `capnp::` or mangled `_ZN5capnp`.
    if symbol_name.starts_with("capnp::") || symbol_name.starts_with("_ZN5capnp") {
        return Some(SerialKind::CapnProto);
    }

    // FlatBuffers — demangled `flatbuffers::` or mangled `_ZN11flatbuffers`.
    if symbol_name.starts_with("flatbuffers::") || symbol_name.starts_with("_ZN11flatbuffers") {
    if symbol_name.starts_with("flatbuffers::")
        || symbol_name.starts_with("_ZN11flatbuffers")
    {
        return Some(SerialKind::FlatBuffers);
    }

    // MessagePack — demangled `msgpack::` (C++/Rust) or C-API `msgpack_pack_*`.
    if symbol_name.starts_with("msgpack::") || symbol_name.starts_with("msgpack_pack_") {
        return Some(SerialKind::MsgPack);
    }

    // Protocol Buffers — demangled `google::protobuf::` or mangled
    // `_ZN6google8protobuf`.  The mangled form must match exactly: the
    // length-prefixed segments `6google` then `8protobuf` are unambiguous.
    if symbol_name.starts_with("google::protobuf::")
        || symbol_name.starts_with("_ZN6google8protobuf")
    {
        return Some(SerialKind::Protobuf);
    }

    None
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn recognises_capnp_demangled_and_mangled() {
        assert_eq!(
            recognize_serial_api("capnp::message::Builder::new"),
            Some(SerialKind::CapnProto),
        );
        assert_eq!(
            recognize_serial_api("_ZN5capnp7message7Builder3newEv"),
            Some(SerialKind::CapnProto),
        );
    }

    #[test]
    fn recognises_flatbuffers_demangled_and_mangled() {
        assert_eq!(
            recognize_serial_api("flatbuffers::FlatBufferBuilder::Finish"),
            Some(SerialKind::FlatBuffers),
        );
        assert_eq!(
            recognize_serial_api("_ZN11flatbuffers16FlatBufferBuilder6FinishEv"),
            Some(SerialKind::FlatBuffers),
        );
    }

    #[test]
    fn recognises_msgpack_namespace_and_c_api() {
        assert_eq!(
            recognize_serial_api("msgpack::packer::pack"),
            Some(SerialKind::MsgPack),
        );
        // The C library exposes `msgpack_pack_int`, `msgpack_pack_str`, etc.
        assert_eq!(
            recognize_serial_api("msgpack_pack_int"),
            Some(SerialKind::MsgPack),
        );
        assert_eq!(
            recognize_serial_api("msgpack_pack_str"),
            Some(SerialKind::MsgPack),
        );
    }

    #[test]
    fn recognises_protobuf_demangled_and_mangled() {
        assert_eq!(
            recognize_serial_api("google::protobuf::Message::SerializeToString"),
            Some(SerialKind::Protobuf),
        );
        assert_eq!(
            recognize_serial_api("_ZN6google8protobuf7Message17SerializeToStringEPSs"),
            Some(SerialKind::Protobuf),
        );
    }

    #[test]
    fn rejects_unrelated_and_partial_matches() {
        // Plain libc / user code must not match.
        assert_eq!(recognize_serial_api("memcpy"), None);
        assert_eq!(recognize_serial_api("main"), None);
        assert_eq!(recognize_serial_api(""), None);

        // Bare namespace names without the `::` separator are ambiguous
        // (could be a function literally named `capnp`); require the prefix.
        assert_eq!(recognize_serial_api("capnp"), None);
        assert_eq!(recognize_serial_api("flatbuffers"), None);

        // `msgpack_pack` without trailing `_<typename>` isn't the C API.
        assert_eq!(recognize_serial_api("msgpack_packer_init"), None);

        // `google::` alone — e.g. `google::flags::Init` — is not protobuf.
        assert_eq!(recognize_serial_api("google::flags::Init"), None);

        // Wrong mangled length prefix must not match (e.g. `_ZN6capnp…`
        // would be invalid Itanium for a 5-char namespace; reject).
        assert_eq!(recognize_serial_api("_ZN6capnpX"), None);
    }
}
