//! Serialize borrowed inventory records without building a second function list.
//! JSON layout belongs to serde_json; the formatter adds ASCII-safe strings.

use std::io::{self, Write};

use serde::ser::Error as _;
use serde::{Serialize, Serializer};
use serde_json::ser::{Formatter, PrettyFormatter};
use unlace_console::engine::FunctionEntry;

use crate::funcdecl::Declared;
use crate::jsonfmt::{Json, UnicodeEscape};

#[allow(clippy::too_many_arguments)]
pub(super) fn write(
    out: &mut dyn Write,
    binary: &str,
    entries: &[FunctionEntry],
    total: usize,
    error: Option<&str>,
    limits: Option<&Json>,
    display_address: &dyn Fn(u64) -> u64,
    declared: &Declared,
) -> io::Result<()> {
    let fid_databases = declared.fid_databases_field().map(|(_, value)| value);
    let document = Document {
        binary,
        count: entries.len(),
        total,
        error,
        notes: declared.notes(),
        fid_databases: fid_databases.as_ref().map(JsonView),
        functions: Entries {
            entries,
            display_address,
            declared,
        },
        limits: limits.map(JsonView),
    };
    let mut out = io::BufWriter::with_capacity(1 << 16, out);
    let mut serializer =
        serde_json::Serializer::with_formatter(&mut out, AsciiPretty(PrettyFormatter::new()));
    document
        .serialize(&mut serializer)
        .map_err(io::Error::from)?;
    out.write_all(b"\n")?;
    out.flush()
}

#[derive(Serialize)]
struct Document<'a> {
    binary: &'a str,
    count: usize,
    total: usize,
    error: Option<&'a str>,
    #[serde(skip_serializing_if = "<[String]>::is_empty")]
    notes: &'a [String],
    #[serde(skip_serializing_if = "Option::is_none")]
    fid_databases: Option<JsonView<'a>>,
    functions: Entries<'a>,
    #[serde(skip_serializing_if = "Option::is_none")]
    limits: Option<JsonView<'a>>,
}

struct Entries<'a> {
    entries: &'a [FunctionEntry],
    display_address: &'a dyn Fn(u64) -> u64,
    declared: &'a Declared,
}

impl Serialize for Entries<'_> {
    fn serialize<S: Serializer>(&self, serializer: S) -> Result<S::Ok, S::Error> {
        serializer.collect_seq(self.entries.iter().map(|entry| {
            let address = (self.display_address)(entry.addr.get_offset());
            Entry {
                name: &entry.name,
                address,
                address_hex: format!("0x{address:x}"),
                aliases: &entry.aliases,
                object_location: entry.object_location.as_ref().map(|location| Location {
                    section_index: location.section_index,
                    section: &location.section,
                    offset: location.offset,
                    offset_hex: format!("0x{:x}", location.offset),
                }),
                size: entry.size,
                declared: self
                    .declared
                    .bytes_label(entry.addr.get_offset())
                    .map(|bytes| Marker { bytes }),
            }
        }))
    }
}

#[derive(Serialize)]
struct Entry<'a> {
    name: &'a str,
    address: u64,
    address_hex: String,
    aliases: &'a [String],
    object_location: Option<Location<'a>>,
    size: u64,
    #[serde(skip_serializing_if = "Option::is_none")]
    declared: Option<Marker<'a>>,
}

#[derive(Serialize)]
struct Location<'a> {
    section_index: usize,
    section: &'a str,
    offset: u64,
    offset_hex: String,
}

#[derive(Serialize)]
struct Marker<'a> {
    bytes: &'a str,
}

struct JsonView<'a>(&'a Json);

impl Serialize for JsonView<'_> {
    fn serialize<S: Serializer>(&self, serializer: S) -> Result<S::Ok, S::Error> {
        match self.0 {
            Json::Null => serializer.serialize_none(),
            Json::Bool(value) => serializer.serialize_bool(*value),
            Json::Str(value) => serializer.serialize_str(value),
            Json::Number(value) => {
                let raw = serde_json::value::RawValue::from_string(value.clone())
                    .map_err(S::Error::custom)?;
                raw.serialize(serializer)
            }
            Json::Array(values) => serializer.collect_seq(values.iter().map(JsonView)),
            Json::Object(fields) => {
                serializer.collect_map(fields.iter().map(|(key, value)| (key, JsonView(value))))
            }
        }
    }
}

struct AsciiPretty(PrettyFormatter<'static>);

impl Formatter for AsciiPretty {
    fn write_string_fragment<W: ?Sized + Write>(
        &mut self,
        writer: &mut W,
        fragment: &str,
    ) -> io::Result<()> {
        let mut start = 0;
        for (offset, ch) in fragment.char_indices() {
            if ch < '\u{7f}' {
                continue;
            }
            writer.write_all(&fragment.as_bytes()[start..offset])?;
            write!(writer, "{}", UnicodeEscape(ch))?;
            start = offset + ch.len_utf8();
        }
        writer.write_all(&fragment.as_bytes()[start..])
    }

    fn begin_array<W: ?Sized + Write>(&mut self, writer: &mut W) -> io::Result<()> {
        self.0.begin_array(writer)
    }

    fn end_array<W: ?Sized + Write>(&mut self, writer: &mut W) -> io::Result<()> {
        self.0.end_array(writer)
    }

    fn begin_array_value<W: ?Sized + Write>(
        &mut self,
        writer: &mut W,
        first: bool,
    ) -> io::Result<()> {
        self.0.begin_array_value(writer, first)
    }

    fn end_array_value<W: ?Sized + Write>(&mut self, writer: &mut W) -> io::Result<()> {
        self.0.end_array_value(writer)
    }

    fn begin_object<W: ?Sized + Write>(&mut self, writer: &mut W) -> io::Result<()> {
        self.0.begin_object(writer)
    }

    fn end_object<W: ?Sized + Write>(&mut self, writer: &mut W) -> io::Result<()> {
        self.0.end_object(writer)
    }

    fn begin_object_key<W: ?Sized + Write>(
        &mut self,
        writer: &mut W,
        first: bool,
    ) -> io::Result<()> {
        self.0.begin_object_key(writer, first)
    }

    fn begin_object_value<W: ?Sized + Write>(&mut self, writer: &mut W) -> io::Result<()> {
        self.0.begin_object_value(writer)
    }

    fn end_object_value<W: ?Sized + Write>(&mut self, writer: &mut W) -> io::Result<()> {
        self.0.end_object_value(writer)
    }
}

#[cfg(test)]
mod tests;
