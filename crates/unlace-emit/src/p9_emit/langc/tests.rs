use super::CDeclarator;

#[derive(Clone, Copy)]
enum Modifier {
    Pointer,
    Array(usize),
    SyntheticPostfix(&'static str),
}

fn spell(modifiers_outer_to_inner: &[Modifier]) -> String {
    let mut decl = CDeclarator::default();
    for modifier in modifiers_outer_to_inner {
        match modifier {
            Modifier::Pointer => decl.pointer(),
            Modifier::Array(n) => decl.postfix(&format!("[{n}]")),
            Modifier::SyntheticPostfix(suffix) => decl.postfix(suffix),
        }
    }
    format!("int {}x{}", decl.front, decl.back)
}

/// The generic helper must distinguish every adjacent pointer/postfix
/// ordering. Synthetic function suffixes here fence the helper's grouping rule
/// independently of prototype storage. The
/// right-hand strings are declarations accepted by a C compiler.
#[test]
fn pointer_array_and_function_precedence_table() {
    use Modifier::{Array as A, Pointer as P, SyntheticPostfix as S};

    let cases: &[(&[Modifier], &str)] = &[
        (&[P], "int *x"),
        (&[A(2)], "int x[2]"),
        (&[P, A(2)], "int (*x)[2]"),
        (&[A(2), P], "int *x[2]"),
        (&[P, S("(void)")], "int (*x)(void)"),
        (&[S("(void)"), P], "int *x(void)"),
        (&[P, P, A(2)], "int (**x)[2]"),
        (&[P, A(2), P], "int *(*x)[2]"),
        (&[A(2), P, A(3)], "int (*x[2])[3]"),
        (&[A(2), P, S("(void)")], "int (*x[2])(void)"),
        (&[P, S("(void)"), P], "int *(*x)(void)"),
        (&[P, S("(void)"), P, A(3)], "int (*(*x)(void))[3]"),
    ];

    for (mods, expected) in cases {
        assert_eq!(spell(mods), *expected);
    }
}

#[test]
fn callback_pointer_does_not_erase_an_unknown_return_width() {
    use std::rc::Rc;

    use crate::dtype::{Datatype, DatatypeKind, type_metatype};
    use crate::fspec::{FuncProto, ParameterPieces};
    use crate::langtypes::{SpellCtx, TypeSpeller};

    let pointer = |to| {
        let mut ty = Datatype::new(8, type_metatype::TYPE_PTR);
        ty.kind = DatatypeKind::Pointer {
            ptrto: to,
            spaceid: None,
            truncate: None,
            wordsize: 1,
        };
        Rc::new(ty)
    };
    let callback = |output| {
        let mut proto = FuncProto::new();
        proto.attach_internal_store(Rc::new(Datatype::new(0, type_metatype::TYPE_VOID)));
        proto.set_output(&ParameterPieces {
            type_: Some(output),
            ..Default::default()
        });
        let mut code = Datatype::new(1, type_metatype::TYPE_CODE);
        code.kind = DatatypeKind::Code {
            proto: Some(Rc::new(proto)),
        };
        pointer(Rc::new(code))
    };
    let cx = SpellCtx {
        enabled: true,
        ..SpellCtx::OFF
    };
    for size in [3, 10, 16] {
        let unknown = Rc::new(Datatype::new(size, type_metatype::TYPE_UNKNOWN));
        assert_eq!(
            super::C_SPELLER.declarator(&cx, &callback(Rc::clone(&unknown))),
            (format!("undefined{size} (*"), ")(void)".into()),
        );
        assert_eq!(
            super::C_SPELLER.declarator(&cx, &callback(pointer(Rc::clone(&unknown)))),
            ("void *(*".into(), ")(void)".into()),
        );
        assert_eq!(
            super::C_SPELLER.declarator(&cx, &pointer(unknown)),
            ("void *".into(), "".into()),
        );
    }
}
