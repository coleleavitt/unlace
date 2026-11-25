use super::*;
use unlace_decomp::dtype::TypeFactoryImpl;

/// A configured [`TypeFactory`] (the dtype-test recipe + the core-type cache):
/// default alignment map, max base size 8, a 64-bit `setup_sizes`, and the
/// cached core types (`char`/`void`/`code`) — enough for every
/// `get_base`/`get_type_char`/`get_type_void`/`get_type_pointer` path. The
/// encoding decoder is arch-neutral, so an 8-byte-pointer factory suffices
/// (pointer width is passed explicitly via `ptr_size`).
fn factory() -> TypeFactoryImpl {
    let f = TypeFactoryImpl::new();
    f.set_default_alignment_map();
    f.set_max_basetype_size(8);
    // 64-bit sizes (sp=8 ⇒ int=4, long=8, ptr=8) + the core-type cache so
    // get_type_char / get_type_void resolve.
    f.setup_sizes(Some(8), 8, 4);
    let _ = f.cache_core_types();
    f
}

/// `-(int)greet:(int)n` → `i20@0:8i16`: return `int`, then `id self`,
/// `SEL _cmd`, `int n` (the implicit receiver/selector + the one real arg).
#[test]
fn decode_greet_method() {
    let f = factory();
    let (ptr, ws): (i32, u32) = (8, 1);
    let p = decode_method(
        "-[Greeter greet:]",
        "i20@0:8i16",
        &TypeCtx::new(&f, ptr, ws),
        None,
    )
    .expect("the greet: encoding decodes");
    assert_eq!(p.name, "-[Greeter greet:]");
    assert_eq!(p.intypes.len(), 3, "self + _cmd + n");
    assert_eq!(p.innames, vec!["self", "_cmd", "arg1"]);
    // Return is a 4-byte int.
    assert_eq!(p.outtype.as_ref().unwrap().get_size(), 4);
    // self/_cmd are pointer-sized (id/SEL); n is a 4-byte int.
    assert_eq!(p.intypes[0].get_size(), ptr, "id self is a pointer");
    assert_eq!(p.intypes[1].get_size(), ptr, "SEL _cmd is a pointer");
    assert_eq!(p.intypes[2].get_size(), 4, "int n");
}

/// `-(void)set:(double)` style `v` return + a `d` double arg; and the
/// frame-offset digits are consumed (not mis-parsed as a type).
#[test]
fn decode_void_return_double_arg() {
    let f = factory();
    let (ptr, ws): (i32, u32) = (8, 1);
    let p = decode_method("-[C set:]", "v24@0:8d16", &TypeCtx::new(&f, ptr, ws), None).unwrap();
    assert_eq!(
        p.outtype.as_ref().unwrap().get_size(),
        0,
        "void is the size-0 void type"
    );
    assert_eq!(p.intypes.len(), 3);
    assert_eq!(p.intypes[2].get_size(), 8, "double arg");
}

/// An ivar encoding (no trailing frame offset): `q` → a signed 8-byte int.
#[test]
fn decode_ivar_long() {
    let f = factory();
    let ty = decode_ivar_type("q", &TypeCtx::new(&f, 8, 1)).unwrap();
    assert_eq!(ty.get_size(), 8);
}

/// `^i` (int*) and `^v` (void*) decode to pointer-sized types. (The char-cache
/// the `*` char* path needs is populated by the real `Architecture` bootstrap,
/// not by this minimal test factory, so the char* case is covered by the
/// end-to-end console test rather than here.)
#[test]
fn decode_pointers() {
    let f = factory();
    assert_eq!(
        decode_ivar_type("^i", &TypeCtx::new(&f, 8, 1))
            .unwrap()
            .get_size(),
        8,
        "int*"
    );
    assert_eq!(
        decode_ivar_type("^v", &TypeCtx::new(&f, 8, 1))
            .unwrap()
            .get_size(),
        8,
        "void*"
    );
}

/// An empty / garbage encoding yields `None` — the IMP keeps its name, only the
/// typed prototype is dropped.
#[test]
fn empty_encoding_is_none() {
    let f = factory();
    assert!(decode_method("-[C x]", "", &TypeCtx::new(&f, 8, 1), None).is_none());
    assert!(decode_ivar_type("", &TypeCtx::new(&f, 8, 1)).is_none());
}

/// An ivar's `@"NSString"` names its class: the pointee is the opaque struct
/// `NSString`, and a protocol-qualified `@"<Proto>"` falls back to `objc_object`.
#[test]
fn decode_ivar_quoted_class() {
    let f = factory();
    let tctx = TypeCtx::new(&f, 8, 1);
    let t = decode_ivar_type("@\"NSString\"", &tctx).unwrap();
    assert_eq!(t.get_metatype(), type_metatype::TYPE_PTR);
    assert_eq!(t.get_ptr_to().unwrap().get_name(), "NSString");
    let t = decode_ivar_type("@\"<Greeter>\"", &tctx).unwrap();
    assert_eq!(t.get_ptr_to().unwrap().get_name(), "objc_object");
}

/// A class name another kind of type already holds is not that class:
/// `@"Foo"` beside an enum `Foo` is a `void *`, never a pointer to the enum.
#[test]
fn a_same_named_non_struct_is_not_the_class() {
    let f = factory();
    f.get_type_enum("Foo").unwrap();
    let t = decode_ivar_type("@\"Foo\"", &TypeCtx::new(&f, 8, 1)).unwrap();
    assert_eq!(
        t.get_ptr_to().unwrap().get_metatype(),
        type_metatype::TYPE_VOID
    );
}

/// A block (`@?`) is one pointer, and pointer nesting is bounded.
#[test]
fn blocks_are_one_type_and_nesting_is_bounded() {
    let f = factory();
    let tctx = TypeCtx::new(&f, 8, 1);
    let p = decode_method("-[C a:]", "v24@0:8@?16", &tctx, None).unwrap();
    assert_eq!(
        p.intypes.len(),
        3,
        "the block is one argument, not `@` then `?`"
    );
    let deep = format!("{}i", "^".repeat(MAX_POINTER_DEPTH + 1));
    assert!(decode_ivar_type(&deep, &tctx).is_none());
    assert!(decode_ivar_type("^^i", &tctx).is_some());
}

/// A struct by value is the struct the encoding spells; an array is an array.
#[test]
fn by_value_aggregates_are_types() {
    let f = factory();
    let tctx = TypeCtx::new(&f, 8, 1);
    let t = decode_ivar_type("{CGRect={CGPoint=dd}{CGSize=dd}}", &tctx).unwrap();
    assert_eq!(t.get_name(), "CGRect");
    assert_eq!(t.get_size(), 32);
    let leaves = struct_fields_at("{Pair=\"lo\"{Half=\"a\"i\"b\"i}\"hi\"q}", 0).unwrap();
    assert_eq!(
        leaves,
        vec![
            (Some("a".into()), "i".into()),
            (Some("b".into()), "i".into()),
            (Some("hi".into()), "q".into())
        ]
    );
    assert_eq!(
        struct_members(
            "{CGRect=\"origin\"{CGPoint=\"x\"d\"y\"d}\"size\"{CGSize=\"width\"d\"height\"d}}"
        )
        .unwrap(),
        vec!["d".to_string(); 4]
    );
    let a = decode_ivar_type("[4i]", &tctx).unwrap();
    assert_eq!(a.get_metatype(), type_metatype::TYPE_ARRAY);
    assert_eq!(a.get_size(), 16);
    let p = decode_method("-[C setFrame:]", "v48@0:8{CGRect=dddd}16", &tctx, None).unwrap();
    assert_eq!(p.intypes[2].get_name(), "CGRect");
    assert!(decode_ivar_type("[0i]", &tctx).is_none());
    assert!(
        decode_ivar_type("[", &tctx).is_none(),
        "an unterminated array"
    );
    assert!(decode_ivar_type("[4", &tctx).is_none());
}

#[test]
fn split_method_keeps_struct_and_class_text() {
    let (ret, args) = split_method("v40@0:8{CGRect=dddd}16@\"UIView\"32^v40@?48").unwrap();
    assert_eq!(ret, "v");
    assert_eq!(args, ["@", ":", "{CGRect=dddd}", "@\"UIView\"", "^v", "@?"]);
    assert!(split_method("").is_none());
    assert!(split_method("v@:!").is_none());
}

/// A binary-controlled encoding a million `^` or `{` deep is refused at
/// the depth caps instead of recursing once per level; a real depth parses.
#[test]
fn hostile_nesting_is_refused_not_recursed() {
    let n = 1_000_000;
    assert!(split_method(&format!("v@:{}i", "^".repeat(n))).is_none());
    assert_eq!(split_method("^^^i16@0:8").unwrap().0, "^^^i");
    let nested = format!("{}i{}", "{S=".repeat(n), "}".repeat(n));
    assert_eq!(struct_members(&nested), None);
    let f = factory();
    let tctx = TypeCtx::new(&f, 8, 1);
    assert!(decode_method("-[C a:]", &format!("v@:{nested}"), &tctx, None).is_none());
    let arrays = format!("{}i{}", "[1".repeat(n), "]".repeat(n));
    assert!(decode_ivar_type(&arrays, &tctx).is_none());
    let wide = format!("{{Wide={}}}", "q".repeat(MAX_RECORD_FIELDS + 1));
    assert!(decode_ivar_type(&wide, &tctx).is_none());
    assert!(decode_ivar_type("{Big=[65536[65536q]]}", &tctx).is_none());
    assert!(
        split_method(&format!("v@:{nested}")).is_some(),
        "a by-value struct is skipped linearly"
    );
    let deep = format!("{}d{}", "{S=".repeat(8), "}".repeat(8));
    assert_eq!(struct_members(&deep), Some(vec!["d".to_string()]));
}

#[test]
fn struct_type_builds_nested_geometry() {
    let f = factory();
    let tctx = TypeCtx::new(&f, 8, 1);
    let rect = struct_type("{CGRect={CGPoint=dd}{CGSize=dd}}", &tctx).unwrap();
    assert_eq!((rect.get_name(), rect.get_size()), ("CGRect", 32));
    assert_eq!(
        struct_members("{CGRect={CGPoint=dd}{CGSize=dd}}"),
        Some(vec!["d".to_string(); 4])
    );
    assert_eq!(struct_members("{CGRect=dd"), None);
    let range = struct_type("{_NSRange=QQ}", &tctx).unwrap();
    assert_eq!(range.get_size(), 16);
    assert!(Rc::ptr_eq(
        &rect,
        &struct_type("{CGRect={CGPoint=dd}{CGSize=dd}}", &tctx).unwrap()
    ));
}

/// A pointer member is one field the size of a pointer, not its pointee's
/// codes laid out as further members.
#[test]
fn a_pointer_member_is_one_pointer_field() {
    assert_eq!(struct_members("{S=^i}"), Some(vec!["^i".to_string()]));
    assert_eq!(
        struct_members("{S=^{T=ii}q@\"NSString\"}"),
        Some(vec![
            "^{T=ii}".to_string(),
            "q".to_string(),
            "@\"NSString\"".to_string()
        ])
    );
    let f = factory();
    let tctx = TypeCtx::new(&f, 8, 1);
    let s = struct_type("{PtrPair=^ii}", &tctx).unwrap();
    assert_eq!(s.get_size(), 16);
    let first = s.get_field(0).unwrap();
    assert_eq!(first.field_type.get_metatype(), type_metatype::TYPE_PTR);
    assert_eq!(s.get_field(1).unwrap().offset, 8);
    assert!(s.get_field(2).is_none());
}

/// A pointer to a named struct layout is a pointer to that struct, with
/// the member names the encoding carries and `[N T]` members as arrays; a
/// quoted string after `@` is a class only when another name follows it.
#[test]
fn a_pointer_to_a_struct_layout_points_to_the_struct() {
    let f = factory();
    let tctx = TypeCtx::new(&f, 8, 1);
    let ptr = decode_ivar_type(
        "^{State=\"state\"Q\"items\"^@\"owner\"@\"Bag\"\"mutations\"^Q\"extra\"[5Q]}",
        &tctx,
    )
    .unwrap();
    let s = ptr.get_ptr_to().unwrap();
    assert_eq!((s.get_name(), s.get_size()), ("State", 72));
    let fields: Vec<(String, i32, i32)> = (0..5)
        .map(|k| s.get_field(k).unwrap())
        .map(|f| (f.name.clone(), f.offset, f.field_type.get_size()))
        .collect();
    assert_eq!(
        fields,
        [
            ("state", 0, 8),
            ("items", 8, 8),
            ("owner", 16, 8),
            ("mutations", 24, 8),
            ("extra", 32, 40)
        ]
        .map(|(n, o, z)| (n.to_string(), o, z))
    );
    assert_eq!(
        s.get_field(4).unwrap().field_type.get_metatype(),
        type_metatype::TYPE_ARRAY
    );
    assert_eq!(
        s.get_field(1).unwrap().field_type.get_metatype(),
        type_metatype::TYPE_PTR
    );
    let anonymous = decode_ivar_type("^{?=QQ}", &tctx).unwrap();
    assert_eq!(anonymous.get_ptr_to().unwrap().get_name(), "struct_QQ");
    let opaque = decode_ivar_type("^{__Opaque=}", &tctx).unwrap();
    let pointee = opaque.get_ptr_to().unwrap();
    assert_eq!(
        (pointee.get_name(), pointee.is_incomplete()),
        ("__Opaque", true),
        "an empty layout is the incomplete record"
    );
}

/// Members sit at their C offsets: a nested struct is padded to its own
/// alignment before the next member, and a struct of 4-byte members is not
/// padded to a pointer.
#[test]
fn struct_layout_follows_c_alignment() {
    let f = factory();
    let tctx = TypeCtx::new(&f, 8, 1);
    let outer = decode_ivar_type("^{Outer={Inner=iC}Ci}", &tctx)
        .unwrap()
        .get_ptr_to()
        .unwrap();
    let offsets: Vec<i32> = (0..4).map(|k| outer.get_field(k).unwrap().offset).collect();
    assert_eq!((offsets, outer.get_size()), (vec![0, 4, 8, 12], 16));
    assert_eq!(struct_type("{Tri=iii}", &tctx).unwrap().get_size(), 12);
    assert_eq!(struct_type("{Three=CCC}", &tctx).unwrap().get_size(), 3);
    assert_eq!(
        struct_type("{Tagged=Cd}", &tctx)
            .unwrap()
            .get_field(1)
            .unwrap()
            .offset,
        8
    );
    let rect = struct_type("{CGRect={CGPoint=dd}{CGSize=dd}}", &tctx).unwrap();
    assert_eq!(
        (rect.get_size(), rect.get_field(3).unwrap().offset),
        (32, 24)
    );
    let packed = decode_ivar_type("^{Packed=b8b4b20[8S]}", &tctx).unwrap();
    assert_eq!(
        packed.get_ptr_to().unwrap().get_size(),
        20,
        "a 32-bit run of bit-fields is one 4-byte field"
    );
}

/// A struct reached through a chain of pointers deeper than the cap stops
/// at a `void *` instead of recursing.
#[test]
fn a_hostile_pointer_chain_is_cut() {
    let f = factory();
    let tctx = TypeCtx::new(&f, 8, 1);
    let mut enc = "Q".to_string();
    for k in 0..200 {
        enc = format!("^{{S{k}=\"p\"{enc}}}");
    }
    assert!(decode_ivar_type(&enc, &tctx).is_some());
    let nested = format!("{}Q{}", "[1".repeat(10_000), "]".repeat(10_000));
    assert!(decode_ivar_type(&format!("{{Deep=\"a\"{nested}}}"), &tctx).is_none());
}

fn layout(t: &Datatype) -> Vec<(i32, String, i32)> {
    (0..t.num_depend())
        .map(|i| t.get_field(i).unwrap())
        .map(|f| (f.offset, f.name.clone(), f.field_type.get_size()))
        .collect()
}

/// Members sit at their natural alignment, a nested struct as a unit, and
/// the record is padded to its own.
#[test]
fn records_follow_the_c_layout() {
    let f = factory();
    let tctx = TypeCtx::new(&f, 8, 1);
    let s = decode_ivar_type("{Outer=C{Inner=Cq}C}", &tctx).unwrap();
    assert_eq!((s.get_size(), s.get_alignment()), (32, 8));
    assert_eq!(
        layout(&s).iter().map(|f| f.0).collect::<Vec<_>>(),
        [0, 8, 16, 24]
    );
    let m = decode_ivar_type("{Mixed=i[4d]C}", &tctx).unwrap();
    assert_eq!(m.get_size(), 48);
    assert_eq!(
        layout(&m),
        [
            (0, "field_0".into(), 4),
            (8, "field_1".into(), 32),
            (40, "field_2".into(), 1)
        ]
    );
    let c = decode_ivar_type("{Chars=[16C]i}", &tctx).unwrap();
    assert_eq!((c.get_size(), c.get_alignment()), (20, 4));
    let z = decode_ivar_type("{Tail=q[0C]C}", &tctx).unwrap();
    assert_eq!(layout(&z).iter().map(|f| f.0).collect::<Vec<_>>(), [0, 8]);
}

/// A union's members share offset zero; a run of bit-fields is one field.
#[test]
fn unions_and_bit_fields_are_laid_out() {
    let f = factory();
    let tctx = TypeCtx::new(&f, 8, 1);
    let u = decode_ivar_type("(Word=qf)", &tctx).unwrap();
    assert_eq!(
        (u.get_metatype(), u.get_size()),
        (type_metatype::TYPE_UNION, 8)
    );
    assert_eq!(
        layout(&u),
        [(0, "field_0".into(), 8), (0, "field_1".into(), 4)]
    );
    let b = decode_ivar_type("{Flags=b3b5S}", &tctx).unwrap();
    assert_eq!(b.get_size(), 4);
    assert_eq!(
        layout(&b),
        [(0, "field_0".into(), 1), (2, "field_1".into(), 2)]
    );
    let w = decode_ivar_type("{?=(?={?=b1b1b1b1b1b32b1b1b1}Q)}", &tctx).unwrap();
    assert_eq!(w.get_size(), 8);
    let l = decode_ivar_type("{Long=^vQb63b1}", &tctx).unwrap();
    assert_eq!(l.get_size(), 24);
    let p = decode_method("-[C word:]", "q24@0:8(Word=qf)16", &tctx, None).unwrap();
    assert_eq!(p.intypes[2].get_name(), "Word");
}

/// A record with no name is one type per layout, whatever names an ivar
/// quotes; a flattened name that repeats takes its member's name.
#[test]
fn unnamed_records_are_named_by_their_members() {
    let f = factory();
    let tctx = TypeCtx::new(&f, 8, 1);
    let t = decode_ivar_type("{?=qiIq}", &tctx).unwrap();
    assert_eq!((t.get_name(), t.get_size()), ("struct_qiIq", 24));
    let quoted =
        decode_ivar_type("{?=\"value\"q\"timescale\"i\"flags\"I\"epoch\"q}", &tctx).unwrap();
    assert!(Rc::ptr_eq(&t, &quoted));
    let range = decode_ivar_type(
        "{?=\"start\"{Stamp=\"value\"q\"scale\"i}\"duration\"{Stamp=\"value\"q\"scale\"i}}",
        &tctx,
    )
    .unwrap();
    let names: Vec<String> = layout(&range).into_iter().map(|f| f.1).collect();
    assert_eq!(
        names,
        ["value", "scale", "duration_value", "duration_scale"]
    );
    assert_eq!(range.get_size(), 32);
    assert!(range.get_name().starts_with("struct_"));
    assert_eq!(
        decode_ivar_type("(?=dq)", &tctx).unwrap().get_name(),
        "union_dq"
    );
}

/// `{Name}` spells no layout: a pointer to it reads, a value of it does
/// not, and neither does a record holding itself or an empty one.
#[test]
fn a_record_without_a_layout_is_not_a_value() {
    let f = factory();
    let tctx = TypeCtx::new(&f, 8, 1);
    let p = decode_ivar_type("^{Opaque}", &tctx).unwrap();
    assert_eq!(p.get_ptr_to().unwrap().get_name(), "Opaque");
    assert!(decode_ivar_type("{Opaque}", &tctx).is_none());
    assert!(decode_method("-[C a:]", "v24@0:8{Opaque}16", &tctx, None).is_none());
    assert!(decode_method("-[C a]", "{Opaque}16@0:8", &tctx, None).is_none());
    assert!(decode_ivar_type("{Self={Self=i}}", &tctx).is_none());
    assert!(decode_ivar_type("{Empty=}", &tctx).is_none());
    assert!(decode_ivar_type("(?=)", &tctx).is_none());
    assert!(decode_ivar_type("{?=[4]}", &tctx).is_none());
    let node = decode_ivar_type("{Node=q^{Node}}", &tctx).unwrap();
    assert_eq!(node.get_size(), 16);
    assert!(Rc::ptr_eq(
        &node.get_field(1).unwrap().field_type.get_ptr_to().unwrap(),
        &node
    ));
}

/// An array argument is the pointer C passes.
#[test]
fn an_array_argument_is_a_pointer() {
    let f = factory();
    let tctx = TypeCtx::new(&f, 8, 1);
    let p = decode_method("-[C fill:]", "v24@0:8[10Q]16", &tctx, None).unwrap();
    assert_eq!(p.intypes[2].get_metatype(), type_metatype::TYPE_PTR);
    assert_eq!(p.intypes[2].get_ptr_to().unwrap().get_size(), 8);
}
