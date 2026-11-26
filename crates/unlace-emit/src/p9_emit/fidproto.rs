//! (unlace `fid`) The prototype a `.fid` record carries for the function it names.
//!
//! A `.fid` database built from an object that describes its functions keeps
//! each one's prototype as C text beside the name, with the type declarations
//! it needs. [`declaration`] writes that text from the prototype parked on a
//! function symbol, in the vocabulary the C declaration parser reads back:
//! sized core names (`uint4`), a forward `typedef struct N N;` for every
//! record so pointers among them parse in any order, then each definition
//! before its first by-value use.
//!
//! A matched function is decompiled against the parked prototype like any
//! other declared one. A fingerprint match is not proof of identity, so the
//! finished function is checked: [`reads_undeclared_parameter`] holds when the
//! body reads parameter storage the prototype does not declare, and the drive
//! then withdraws the prototype, decompiles the function as it does without
//! one and says so in the function header. A parameter the body never reads is
//! no disagreement.

use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::types::int4;

use crate::architecture::Architecture;
use crate::dtype::{Datatype, DatatypeKind, type_metatype};
use crate::fspec::PrototypePieces;
use crate::funcdata::Funcdata;
use crate::langtypes::SpellCtx;

/// A prototype and the type declarations it needs, as C text.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Declaration {
    pub prototype: String,
    pub typedefs: Vec<String>,
}

/// The header warning of a function whose `.fid` prototype was withdrawn.
pub const WITHDRAWN: &str =
    "WARNING: the .fid prototype was dropped: the body reads parameter storage it does not declare";

/// `pieces` as C text, or `None` when its return type has no plain spelling
/// (a function returning a function pointer).
pub fn declaration(pieces: &PrototypePieces) -> Option<Declaration> {
    const MARK: &str = "@";
    let rt = SpellCtx::OFF;
    let ret = match &pieces.outtype {
        Some(ct) if ct.get_metatype() != type_metatype::TYPE_VOID => {
            let text = crate::printc::declaration_text(ct, MARK, rt.clone());
            text.strip_suffix(MARK)?.trim_end().to_string()
        }
        _ => "void".to_string(),
    };
    let mut params: Vec<String> = pieces
        .intypes
        .iter()
        .enumerate()
        .map(|(i, ct)| {
            let name = pieces
                .innames
                .get(i)
                .map_or("", |n| identifier(n).unwrap_or(""));
            crate::printc::declaration_text(ct, name, rt.clone())
        })
        .collect();
    if pieces.first_var_arg_slot >= 0 {
        params.push("...".to_string());
    }
    let params = if params.is_empty() {
        "void".to_string()
    } else {
        params.join(",")
    };
    let name = identifier(&pieces.name).unwrap_or("f");
    let sep = if ret.ends_with('*') { "" } else { " " };

    let roots = pieces.outtype.iter().chain(&pieces.intypes);
    let types = crate::structdefs::dedup_by_name(&crate::structdefs::referenced_by(roots));
    let record = |ct: &Rc<Datatype>| {
        ct.get_typedef().is_none()
            && matches!(
                &ct.kind,
                DatatypeKind::Struct { .. } | DatatypeKind::Union { .. }
            )
    };
    let mut typedefs: Vec<String> = Vec::new();
    for ct in types.iter().filter(|ct| record(ct)) {
        let kw = if matches!(&ct.kind, DatatypeKind::Union { .. }) {
            "union"
        } else {
            "struct"
        };
        let name = crate::printc::sanitize_type_name(ct.get_name());
        typedefs.push(format!("typedef {kw} {name} {name};"));
    }
    for ct in types
        .iter()
        .filter(|ct| !(record(ct) && (ct.is_incomplete() || !laid_out_again(ct))))
    {
        let text = one_line(&crate::structdefs::definition_text(ct, rt.clone()));
        if !text.is_empty() {
            typedefs.push(sized_enum(
                ct,
                text.replace("undefined1 _pad", "uint1 _pad"),
            ));
        }
    }
    Some(Declaration {
        prototype: format!("{ret}{sep}{name}({params})"),
        typedefs,
    })
}

/// Does the C parser, laying out the definition text of `ct` afresh, put every
/// member where `ct` has it? Not when the text moves bitfields to the end, nor
/// for a member off its natural alignment or a size the alignment does not
/// divide; such a record is stored as its forward declaration alone.
fn laid_out_again(ct: &Datatype) -> bool {
    let align = |t: &Datatype| t.get_alignment().max(1);
    match &ct.kind {
        DatatypeKind::Struct { field, bitfield } => {
            let mut end = 0;
            let mut most = 1;
            for f in field {
                let t = &f.field_type;
                if f.offset < end || f.offset % align(t) != 0 || t.get_align_size() != t.get_size()
                {
                    return false;
                }
                end = f.offset + t.get_size();
                most = most.max(align(t));
            }
            bitfield.is_empty() && ct.get_size() >= end && ct.get_size() % most == 0
        }
        DatatypeKind::Union { field } => {
            ct.get_size()
                == field
                    .iter()
                    .map(|f| f.field_type.get_size())
                    .max()
                    .unwrap_or(0)
        }
        _ => true,
    }
}

/// An enum's definition with its width as a C23 underlying type: the parser
/// otherwise makes it `int`-wide, which moves every member after a packed or
/// `-fshort-enums` one.
fn sized_enum(ct: &Datatype, text: String) -> String {
    if !ct.is_enum_type() || ct.get_typedef().is_some() {
        return text;
    }
    let name = crate::printc::sanitize_type_name(ct.get_name());
    let sign = if ct.get_metatype() == type_metatype::TYPE_INT {
        "int"
    } else {
        "uint"
    };
    text.replacen(
        &format!("typedef enum {name} {{"),
        &format!("typedef enum {name} : {sign}{} {{", ct.get_size()),
        1,
    )
}

fn identifier(name: &str) -> Option<&str> {
    let mut chars = name.chars();
    let first = chars.next()?;
    ((first.is_ascii_alphabetic() || first == '_')
        && chars.all(|c| c.is_ascii_alphanumeric() || c == '_'))
    .then_some(name)
}

/// `text` without its comments, on one line.
fn one_line(text: &str) -> String {
    let mut code = String::with_capacity(text.len());
    let mut rest = text;
    while let Some(start) = rest.find("/*") {
        code.push_str(&rest[..start]);
        rest = rest[start..]
            .find("*/")
            .map_or("", |end| &rest[start + end + 2..]);
    }
    code.push_str(rest);
    code.split_whitespace().collect::<Vec<_>>().join(" ")
}

/// Does the finished `fd` read an input in parameter storage that its
/// prototype does not declare? Never for a variadic prototype.
pub fn reads_undeclared_parameter(fd: &Funcdata) -> bool {
    let proto = fd.get_func_proto();
    if !proto.has_model() || proto.is_dotdotdot() {
        return false;
    }
    let overlaps = |a: &Address, asize: int4, b: &Address, bsize: int4| {
        a.overlap(0, b, bsize) >= 0 || b.overlap(0, a, asize) >= 0
    };
    let declared: Vec<(Address, int4)> = (0..proto.num_params())
        .filter_map(|i| proto.get_param(i))
        .map(|p| (p.get_address(), p.get_size()))
        .collect();
    let entries: Vec<(Address, int4)> = proto
        .model()
        .input()
        .get_entry()
        .iter()
        .map(|e| {
            (
                Address::new(Rc::clone(e.get_space()), e.get_base()),
                e.get_size(),
            )
        })
        .collect();
    fd.vbank()
        .iter_def_flag(crate::varnode::varnode_flags::input)
        .any(|id| {
            fd.vbank().get(id).is_some_and(|v| {
                v.is_input()
                    && !v.has_no_descend()
                    && entries
                        .iter()
                        .any(|(a, s)| overlaps(v.get_addr(), v.get_size(), a, *s))
                    && !declared
                        .iter()
                        .any(|(a, s)| overlaps(v.get_addr(), v.get_size(), a, *s))
            })
        })
}

/// Withdraw the `.fid` prototype of the function at `addr` and say so in its header.
pub fn withdraw(arch: &mut Architecture, addr: &Address) {
    arch.fid_prototypes.remove(&addr.get_offset());
    if let Some((sid, _)) = arch.symboltab.find_function_across_scopes(addr) {
        arch.symboltab.clear_function_proto_pieces(sid);
    }
    arch.commentdb.add_comment_no_duplicate(
        crate::comment::comment_type::WARNINGHEADER,
        addr,
        addr,
        WITHDRAWN,
    );
}

#[cfg(test)]
mod tests;
