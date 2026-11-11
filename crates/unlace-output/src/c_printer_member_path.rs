//! Offset-to-member lookup for pointers whose pointee struct is known.
//!
//! Hex-Rays resolves `*(T *)(p + off)` against the pointee's `udt` the same
//! way here (hexx64 `sub_E0600`, libida `udt_type_data_t::get_best_fit_member`):
//! find the member that contains `off`, subtract its offset, and descend while
//! the member is itself a struct. The access must land exactly on a leaf
//! member of the accessed width; anything else stays a raw dereference rather
//! than naming a member the access only partly covers.

use std::collections::BTreeMap;

use unlace_loader::{StructField, StructType};

use crate::expr_ast::CExpr;

/// Nested struct layouts are walked at most this deep; DWARF layouts are
/// acyclic by value, so this only guards malformed input.
const MAX_MEMBER_DEPTH: usize = 16;

/// One step from a struct value to the accessed leaf.
#[derive(Debug, Clone, PartialEq, Eq)]
pub(super) enum MemberStep {
    Field(String),
    Index(u64),
}

/// The member chain an access resolves to, e.g. `size.x` or `pts[2].y`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub(super) struct MemberPath(Vec<MemberStep>);

impl MemberPath {
    /// `true` for the path to the struct itself.
    pub(super) fn is_empty(&self) -> bool {
        self.0.is_empty()
    }

    /// Render the access through a pointer `base`: `base->size.x`.
    pub(super) fn through_pointer(&self, base: CExpr) -> CExpr {
        self.render(base, true)
    }

    /// Render the access on a struct value `base`: `base.size.x`.
    pub(super) fn through_value(&self, base: CExpr) -> CExpr {
        self.render(base, false)
    }

    fn render(&self, base: CExpr, mut arrow: bool) -> CExpr {
        let mut expr = base;
        for step in &self.0 {
            expr = match step {
                MemberStep::Field(name) if arrow => CExpr::arrow(expr, name.clone()),
                MemberStep::Field(name) => CExpr::dot(expr, name.clone()),
                MemberStep::Index(idx) => CExpr::index(expr, CExpr::lit(idx.to_string())),
            };
            arrow = false;
        }
        expr
    }
}

/// Struct layouts by name, as recorded in DWARF.
pub(super) struct StructLayouts {
    structs: BTreeMap<String, StructType>,
}

impl StructLayouts {
    pub(super) fn new(structs: BTreeMap<String, StructType>) -> Self {
        Self { structs }
    }

    /// Byte size of the named struct.
    pub(super) fn size_of(&self, struct_name: &str) -> Option<u64> {
        self.structs.get(struct_name).map(|layout| layout.size)
    }

    /// The struct a value of DWARF type `type_name` points to, when it is a
    /// single-level pointer to a known struct (`Rect *`, `const struct Rect *`).
    pub(super) fn pointee_struct<'a>(&self, type_name: &'a str) -> Option<&'a str> {
        let pointee = type_name.trim().strip_suffix('*')?;
        let name = strip_type_qualifiers(pointee);
        self.structs.contains_key(name).then_some(name)
    }

    /// Resolve an access of `width` bytes at byte `offset` into `struct_name`.
    pub(super) fn member_path(
        &self,
        struct_name: &str,
        offset: u64,
        width: u64,
    ) -> Option<MemberPath> {
        let mut steps = Vec::new();
        let mut layout = self.structs.get(struct_name)?;
        let mut offset = offset;
        for _ in 0..MAX_MEMBER_DEPTH {
            let field = member_containing(layout, offset)?;
            let within = offset - field.offset;
            steps.push(MemberStep::Field(field.name.clone()));
            if let Some(nested) = self.struct_of(&field.type_name) {
                layout = nested;
                offset = within;
                continue;
            }
            if let Some((element, count)) = array_element(&field.type_name) {
                let stride = field.size.checked_div(count).filter(|&s| s > 0)?;
                steps.push(MemberStep::Index(within / stride));
                let within_element = within % stride;
                if let Some(nested) = self.struct_of(element) {
                    layout = nested;
                    offset = within_element;
                    continue;
                }
                return (within_element == 0 && stride == width).then_some(MemberPath(steps));
            }
            return (within == 0 && field.size == width).then_some(MemberPath(steps));
        }
        None
    }

    /// The deepest member chain that starts exactly at byte `offset` of
    /// `struct_name` and is at least `width` bytes wide, for an access that
    /// reads it as another type (`*(_QWORD *)&p->size`). The empty path is the
    /// struct itself, at offset 0.
    pub(super) fn member_start(
        &self,
        struct_name: &str,
        offset: u64,
        width: u64,
    ) -> Option<MemberPath> {
        let mut layout = self.structs.get(struct_name)?;
        let mut best = (offset == 0 && width <= layout.size).then(|| MemberPath(Vec::new()));
        let mut steps = Vec::new();
        let mut offset = offset;
        for _ in 0..MAX_MEMBER_DEPTH {
            let Some(field) = member_containing(layout, offset) else {
                break;
            };
            let within = offset - field.offset;
            steps.push(MemberStep::Field(field.name.clone()));
            if within == 0 && field.size >= width {
                best = Some(MemberPath(steps.clone()));
            }
            if let Some(nested) = self.struct_of(&field.type_name) {
                layout = nested;
                offset = within;
                continue;
            }
            let Some((element, count)) = array_element(&field.type_name) else {
                break;
            };
            let Some(stride) = field.size.checked_div(count).filter(|&s| s > 0) else {
                break;
            };
            steps.push(MemberStep::Index(within / stride));
            let within_element = within % stride;
            if within_element == 0 && stride >= width {
                best = Some(MemberPath(steps.clone()));
            }
            let Some(nested) = self.struct_of(element) else {
                break;
            };
            layout = nested;
            offset = within_element;
        }
        best
    }

    fn struct_of(&self, type_name: &str) -> Option<&StructType> {
        self.structs.get(strip_type_qualifiers(type_name))
    }
}

/// The named member whose bytes contain `offset`. The first match wins, which
/// for overlapping bitfield members is the one starting the storage unit,
/// matching `get_best_fit_member`'s walk back to the group's first member.
fn member_containing(layout: &StructType, offset: u64) -> Option<&StructField> {
    layout
        .fields
        .iter()
        .filter(|field| !field.name.is_empty() && field.size > 0)
        .find(|field| field.offset <= offset && offset - field.offset < field.size)
}

/// `int[4]` → `("int", 4)`. Multi-dimensional and unsized arrays are not
/// split; their members are only matched as a whole.
fn array_element(type_name: &str) -> Option<(&str, u64)> {
    let (element, rest) = type_name.trim().split_once('[')?;
    let count = rest.strip_suffix(']')?.trim().parse::<u64>().ok()?;
    (count > 0).then_some((element.trim(), count))
}

fn strip_type_qualifiers(type_name: &str) -> &str {
    let mut name = type_name.trim();
    loop {
        let stripped = ["const ", "volatile ", "struct ", "class "]
            .iter()
            .find_map(|prefix| name.strip_prefix(prefix))
            .or_else(|| name.strip_suffix(" const"))
            .or_else(|| name.strip_suffix(" volatile"))
            .or_else(|| name.strip_suffix(" restrict"));
        match stripped {
            Some(rest) => name = rest.trim(),
            None => return name,
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn field(name: &str, offset: u64, size: u64, type_name: &str) -> StructField {
        StructField {
            name: name.to_string(),
            offset,
            size,
            type_name: type_name.to_string(),
        }
    }

    fn layouts() -> StructLayouts {
        let point = StructType {
            name: "Point".to_string(),
            size: 8,
            template_params: vec![],
            fields: vec![field("x", 0, 4, "int"), field("y", 4, 4, "int")],
        };
        let rect = StructType {
            name: "Rect".to_string(),
            size: 16,
            template_params: vec![],
            fields: vec![field("origin", 0, 8, "Point"), field("size", 8, 8, "Point")],
        };
        let poly = StructType {
            name: "Poly".to_string(),
            size: 40,
            template_params: vec![],
            fields: vec![field("n", 0, 8, "long"), field("pts", 8, 32, "Point[4]")],
        };
        StructLayouts::new(
            [point, rect, poly]
                .into_iter()
                .map(|s| (s.name.clone(), s))
                .collect(),
        )
    }

    fn render(path: &MemberPath) -> String {
        path.through_pointer(CExpr::lit("p")).to_string()
    }

    #[test]
    fn nested_struct_member_resolves_to_leaf() {
        let l = layouts();
        assert_eq!(render(&l.member_path("Rect", 8, 4).unwrap()), "p->size.x");
        assert_eq!(render(&l.member_path("Rect", 12, 4).unwrap()), "p->size.y");
        assert_eq!(render(&l.member_path("Rect", 0, 4).unwrap()), "p->origin.x");
    }

    #[test]
    fn array_member_resolves_to_element() {
        let l = layouts();
        assert_eq!(render(&l.member_path("Poly", 0, 8).unwrap()), "p->n");
        assert_eq!(
            render(&l.member_path("Poly", 28, 4).unwrap()),
            "p->pts[2].y"
        );
    }

    #[test]
    fn partial_or_misaligned_access_is_not_a_member() {
        let l = layouts();
        // An 8-byte load of `size` covers both `x` and `y`: no single leaf.
        assert_eq!(l.member_path("Rect", 8, 8), None);
        assert_eq!(l.member_path("Rect", 10, 2), None);
        assert_eq!(l.member_path("Rect", 16, 4), None);
        assert_eq!(l.member_path("Missing", 0, 4), None);
    }

    #[test]
    fn member_start_finds_the_widest_fit_at_an_offset() {
        let l = layouts();
        let start = |name, offset, width| l.member_start(name, offset, width).map(|p| render(&p));
        // 8 bytes at `size` cover the whole nested Point.
        assert_eq!(start("Rect", 8, 8).as_deref(), Some("p->size"));
        // 4 bytes at `size` reach down to its first member.
        assert_eq!(start("Rect", 8, 4).as_deref(), Some("p->size.x"));
        // Array elements past the first start mid-member.
        assert_eq!(start("Poly", 16, 8).as_deref(), Some("p->pts[1]"));
        // The whole struct at offset 0.
        assert_eq!(start("Rect", 0, 16).as_deref(), Some("p"));
        // Nothing starts at byte 10, and nothing at 8 is 16 bytes wide.
        assert_eq!(start("Rect", 10, 2), None);
        assert_eq!(start("Rect", 8, 16), None);
    }

    #[test]
    fn pointee_struct_requires_single_pointer_to_known_struct() {
        let l = layouts();
        assert_eq!(l.pointee_struct("Rect *"), Some("Rect"));
        assert_eq!(l.pointee_struct("const struct Rect *"), Some("Rect"));
        assert_eq!(l.pointee_struct("Rect"), None);
        assert_eq!(l.pointee_struct("Rect * *"), None);
        assert_eq!(l.pointee_struct("int *"), None);
    }
}
