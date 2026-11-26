//! (unlace) Language facets — what a C-shaped type *means* in the binary's
//! source language (`docs/multilang.md` W3).
//!
//! A Rust `&str`, a Rust `&[T]` and a Go `string` all reach the decompiler as
//! an ordinary sized struct (`{ptr, len}` words) or as its two words moved
//! separately; nothing in the `type_metatype` lattice can say which. unlace
//! never extends the metatype enum for this — its ~3,700 consumers match it
//! non-exhaustively, so a new variant would silently take default branches
//! (`dwarfvariants.rs` documents the same decision). Instead a facet is
//! a **name-keyed side record on the type factory**, the `VariantLayout`
//! pattern: the underlying type stays a plain struct every existing pass
//! handles, and the few places where language meaning changes behavior (the
//! `fatstr` literal rule now; printing and propagation later) look the facet
//! up by the type's name.
//!
//! Facets are registered by type providers — DWARF import, a language pack's
//! synthesized shells — through [`crate::dtype::TypeFactory`]'s
//! `unlace_register_lang_facet`, and survive `clear_noncore` exactly as
//! `VariantLayout` records do (both key by name, not by interned identity).

/// What a named type means in the source language.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum LangFacet {
    /// A Rust `&str`: `{ptr, len}`, length-carried UTF-8, never
    /// NUL-terminated.
    RustStr,
    /// A Rust `&[elem]` slice header: `{ptr, len}` with `len` counted in
    /// elements. The element is recorded by type NAME (the facet table's
    /// keying currency) so the record never pins an interned `Rc` across a
    /// `clear_noncore`.
    RustSlice {
        /// The element type's name.
        elem: String,
    },
    /// A Go `string` header: `{ptr, len}`, length-carried UTF-8, never
    /// NUL-terminated.
    GoString,
    /// A Go slice header: `{ptr, len, cap}` with `len`/`cap` counted in
    /// elements; the element is recorded by type name, as `RustSlice` does.
    GoSlice {
        /// The element type's name.
        elem: String,
    },
    /// A Go interface header: `{tab/type, data}` — two words. `eface` is the
    /// empty-interface form (`any`: runtime type word), otherwise an `iface`
    /// (itab word).
    GoIface {
        /// `true` for the empty-interface (`any`) form.
        eface: bool,
    },
    /// Two amd64 Go integer results carried by an ordinary joined struct.
    GoPairResults { signed: [bool; 2] },
    /// An amd64 Go int result followed by an error's separate table and data words.
    GoIntErrorResults,
    /// A per-interface Go itab layout (`go.itab.<interface>`): the
    /// `internal/abi.ITab` header, then one function-pointer slot per method
    /// of `interface`, named after the method (`crate::goitabcalls`).
    GoItab {
        /// The interface, spelled as the linker spells it (`io.Writer`).
        interface: String,
    },
    /// A named Go struct's interface-typed fields: `(byte offset, interface)`
    /// for each, the interface spelled as the linker spells it. The field's
    /// first word is the itab pointer (`crate::goitabcalls`).
    GoInterfaceFields {
        /// `(byte offset, interface)` per interface-typed field, in field order.
        fields: Vec<(i32, String)>,
    },
}

impl LangFacet {
    /// `true` for the facets whose pointed-at bytes are text (a bounded
    /// string literal is the right rendering for a constant one).
    pub fn is_text(&self) -> bool {
        matches!(self, LangFacet::RustStr | LangFacet::GoString)
    }

    /// Validate the complete storage before treating a struct as paired results.
    pub fn go_pair_fields(
        &self,
        ty: &crate::dtype::Datatype,
    ) -> Option<[std::rc::Rc<crate::dtype::Datatype>; 2]> {
        use crate::dtype::{DatatypeKind, type_metatype};
        let Self::GoPairResults { signed } = self else {
            return None;
        };
        if ty.get_metatype() != type_metatype::TYPE_STRUCT
            || ty.get_size() != 16
            || ty.get_alignment() != 8
            || ty.is_incomplete()
            || ty.has_bitfields()
            || ty.num_depend() != 2
            || !matches!(&ty.kind, DatatypeKind::Struct { bitfield, .. } if bitfield.is_empty())
            || crate::typequal::is_volatile(ty)
        {
            return None;
        }
        let fields = [ty.get_field(0)?, ty.get_field(1)?];
        for (index, field) in fields.iter().enumerate() {
            let meta = if signed[index] {
                type_metatype::TYPE_INT
            } else {
                type_metatype::TYPE_UINT
            };
            if field.offset != index as i32 * 8
                || field.name != ["result0", "result1"][index]
                || field.field_type.get_size() != 8
                || field.field_type.get_metatype() != meta
                || crate::typequal::is_volatile(&field.field_type)
            {
                return None;
            }
        }
        Some(fields.map(|field| std::rc::Rc::clone(&field.field_type)))
    }

    /// Validate the integer and both interface words without conflating typed nil with nil.
    pub fn go_int_error_fields(
        &self,
        ty: &crate::dtype::Datatype,
    ) -> Option<[std::rc::Rc<crate::dtype::Datatype>; 3]> {
        use crate::dtype::{DatatypeKind, type_metatype};
        if *self != Self::GoIntErrorResults
            || ty.get_metatype() != type_metatype::TYPE_STRUCT
            || ty.get_size() != 24
            || ty.get_alignment() != 8
            || ty.is_incomplete()
            || ty.has_bitfields()
            || ty.num_depend() != 3
            || !matches!(&ty.kind, DatatypeKind::Struct { bitfield, .. } if bitfield.is_empty())
            || crate::typequal::is_volatile(ty)
        {
            return None;
        }
        let fields = [ty.get_field(0)?, ty.get_field(1)?, ty.get_field(2)?];
        for (index, field) in fields.iter().enumerate() {
            let field_type = &field.field_type;
            if field.offset != index as i32 * 8
                || field.name != ["result0", "error_tab", "error_data"][index]
                || field_type.get_size() != 8
                || field_type.is_incomplete()
                || field_type.has_bitfields()
                || crate::typequal::is_volatile(field_type)
            {
                return None;
            }
            if index == 0 {
                if field_type.get_metatype() != type_metatype::TYPE_INT {
                    return None;
                }
            } else {
                if field_type.get_metatype() != type_metatype::TYPE_PTR {
                    return None;
                }
                let DatatypeKind::Pointer {
                    ptrto,
                    spaceid: None,
                    truncate: None,
                    wordsize: 1,
                } = &field_type.kind
                else {
                    return None;
                };
                if ptrto.get_metatype() != type_metatype::TYPE_VOID
                    || ptrto.get_size() != 0
                    || ptrto.is_incomplete()
                    || crate::typequal::is_volatile(ptrto)
                {
                    return None;
                }
            }
        }
        Some(fields.map(|field| std::rc::Rc::clone(&field.field_type)))
    }
}

#[cfg(test)]
mod tests;
