use super::*;

const ARM64: Target = Target {
    ptr_size: 8,
    machine: object::Architecture::Aarch64,
    platform: macho::PLATFORM_IOS,
};
const X86_64: Target = Target {
    ptr_size: 8,
    machine: object::Architecture::X86_64,
    platform: macho::PLATFORM_MACOS,
};
const ARM32: Target = Target {
    ptr_size: 4,
    machine: object::Architecture::Arm,
    platform: macho::PLATFORM_IOS,
};

fn fixture(target: Target) -> Vec<Header> {
    let dir = PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("tests/fixtures/sdk_c");
    read_headers(&dir, &[], false, target)
}

fn with<R>(headers: &[Header], names: &[&str], target: Target, run: impl FnOnce(&Index) -> R) -> R {
    let wanted: BTreeSet<&str> = names.iter().copied().collect();
    run(&Index::new(headers, &wanted, target))
}

fn sig(text: &str, name: &str) -> Option<Sig> {
    with(&[header(text, ARM64)], &[name], ARM64, |index| {
        index.signature(name)
    })
}

fn ptr(to: Ty) -> Ty {
    Ty::Ptr(Box::new(to))
}

fn record(name: &str) -> Ty {
    Ty::Record(name.to_string())
}

const LONG: Ty = Ty::Int(8, true);
const INT: Ty = Ty::Int(4, true);

/// The stand-in headers: macro-wrapped prototypes, typedef chains, the enum
/// and object macros, a transparent union, a variadic, and the two
/// declarations that must stay unread.
#[test]
fn reads_the_fixture_headers() {
    let headers = fixture(ARM64);
    let names = [
        "CFStringGetLength",
        "CFStringCreateWithCString",
        "CFStringCompareWithOptions",
        "CFShowFormat",
        "dispatch_async_f",
        "dispatch_set_tier",
        "GadgetGetInfo",
        "GadgetAmbiguous",
        "GadgetOpaque",
    ];
    with(&headers, &names, ARM64, |index| {
        let string = ptr(record("__CFString"));
        assert_eq!(
            index.signature("CFStringGetLength"),
            Some(Sig {
                ret: LONG,
                params: vec![string.clone()],
                vararg: false
            })
        );
        assert_eq!(
            index.signature("CFStringCreateWithCString"),
            Some(Sig {
                ret: string.clone(),
                params: vec![
                    ptr(record("__CFAllocator")),
                    ptr(Ty::Char),
                    Ty::Int(4, false)
                ],
                vararg: false
            })
        );
        assert_eq!(
            index.signature("CFStringCompareWithOptions"),
            Some(Sig {
                ret: Ty::Enum("CFComparisonResult".into(), 8, true),
                params: vec![
                    string.clone(),
                    string.clone(),
                    record("CFRange"),
                    Ty::Enum("CFStringCompareFlags".into(), 8, false)
                ],
                vararg: false,
            })
        );
        assert_eq!(
            index.signature("CFShowFormat"),
            Some(Sig {
                ret: Ty::Void,
                params: vec![string],
                vararg: true
            })
        );
        let queue = ptr(record("dispatch_queue_s"));
        assert_eq!(
            index.signature("dispatch_async_f"),
            Some(Sig {
                ret: Ty::Void,
                params: vec![queue.clone(), ptr(Ty::Void), ptr(Ty::Func)],
                vararg: false
            })
        );
        assert_eq!(
            index.signature("dispatch_set_tier"),
            Some(Sig {
                ret: Ty::Void,
                params: vec![queue, Ty::Enum("dispatch_tier_t".into(), 4, false)],
                vararg: false
            }),
            "a transparent union is its first member"
        );
        assert_eq!(
            index.signature("GadgetGetInfo"),
            Some(Sig {
                ret: INT,
                params: vec![ptr(Ty::Void), ptr(record("GadgetInfo"))],
                vararg: false
            })
        );
        assert_eq!(
            index.signature("GadgetAmbiguous"),
            None,
            "two declarations that disagree"
        );
        assert_eq!(
            index.signature("GadgetOpaque"),
            None,
            "an unresolved type by value"
        );
        let values = |name: &str, size| {
            index
                .enumerators(name, size)
                .unwrap_or_default()
                .into_iter()
                .collect::<Vec<_>>()
        };
        assert_eq!(
            values("CFStringCompareFlags", 8),
            [
                (1, "kCFCompareCaseInsensitive".to_string()),
                (4, "kCFCompareBackwards".to_string()),
                (64, "kCFCompareNumerically".to_string())
            ]
        );
        assert_eq!(
            values("dispatch_tier_t", 4),
            [
                (9, "DISPATCH_TIER_LOW".to_string()),
                (0x21, "DISPATCH_TIER_HIGH".to_string())
            ]
        );
        assert_eq!(
            values("CFComparisonResult", 8)[2],
            (u64::MAX, "kCFCompareLessThan".to_string())
        );
    });
}

/// The branch of an `#if` the target rules out is not read, so `CFIndex`
/// has one width per target instead of two that disagree.
#[test]
fn conditional_branches_follow_the_target() {
    let text = "#if __LP64__\ntypedef long W;\n#else\ntypedef int W;\n#endif\n#ifdef __cplusplus\nextern \"C\" {\n#endif\nW f(W);\n#ifdef __cplusplus\n}\n#endif\n";
    assert_eq!(
        sig(text, "f"),
        Some(Sig {
            ret: LONG,
            params: vec![LONG],
            vararg: false
        })
    );
    let narrow = with(&[header(text, ARM32)], &["f"], ARM32, |index| {
        index.signature("f")
    });
    assert_eq!(
        narrow,
        Some(Sig {
            ret: INT,
            params: vec![INT],
            vararg: false
        })
    );

    let lex_if = |e: &str| condition(&lex(e), ARM64, 0);
    assert_eq!(
        lex_if("defined(__arm64__) && !defined(__cplusplus)"),
        Some(true)
    );
    assert_eq!(
        lex_if("defined(__x86_64__) || defined __i386__"),
        Some(false)
    );
    assert_eq!(lex_if("defined(__x86_64__) || HAVE_FEATURE"), None);
    assert_eq!(lex_if("__LP64__ && FOO"), None);
    assert_eq!(lex_if("!__LP64__ && FOO"), Some(false));
    assert_eq!(lex_if("__IPHONE_OS_VERSION_MIN_REQUIRED < 50000"), None);
    assert_eq!(lex_if("TARGET_OS_IPHONE && !TARGET_OS_OSX"), Some(true));
    assert_eq!(lex_if("__has_feature(assume_nonnull)"), Some(true));
    assert_eq!(lex_if("__has_feature(cxx_rvalue_references)"), None);
    assert_eq!(condition(&lex("TARGET_OS_IPHONE"), X86_64, 0), Some(false));
    assert_eq!(
        condition(
            &lex("TARGET_OS_IPHONE"),
            Target {
                platform: macho::PLATFORM_UNKNOWN,
                ..ARM64
            },
            0
        ),
        None
    );

    let undecided = "#if FEATURE\ntypedef long V;\n#elif __LP64__\ntypedef long V;\n#else\ntypedef char V;\n#endif\nV g(void);\n";
    assert_eq!(
        sig(undecided, "g"),
        Some(Sig {
            ret: LONG,
            params: vec![],
            vararg: false
        }),
        "the else after a taken branch is not read"
    );
    let both = "#if FEATURE\ntypedef long V;\n#else\ntypedef char V;\n#endif\nV g(void);\n";
    assert_eq!(
        sig(both, "g"),
        None,
        "an undecided condition keeps both, and they disagree"
    );
}

#[test]
fn statements_skip_linkage_blocks_and_inline_bodies() {
    let text = "extern \"C\" {\nint a(int);\nstatic inline int b(int x) { return x; }\nstruct S { int f; };\ntypedef CF_ENUM(int, E) { A, B };\n}\nint c(void);";
    let stmts: Vec<&str> = statements(text).into_iter().map(str::trim).collect();
    assert_eq!(
        stmts,
        [
            "int a(int)",
            "struct S { int f; }",
            "typedef CF_ENUM(int, E) { A, B }",
            "int c(void)"
        ]
    );
}

/// Attribute macros in every position, qualifier macros the headers define
/// themselves, and the declarator shapes of a parameter.
#[test]
fn declarations_are_read_through_their_noise() {
    let text = concat!(
        "typedef struct __Ref *Ref;\n",
        "typedef unsigned int CC_LONG;\n",
        "typedef Ref Name CF_TYPED_ENUM;\n",
        "typedef unsigned long offset_t __kernel_ptr_semantics;\n",
        "typedef void (*callback_t)(void *) __TVOS_PROHIBITED;\n",
        "API_AVAILABLE(macos(10.6), ios(4.0)) CF_EXPORT Ref cg_nullable make(Ref cg_nullable src, const double * __nullable v) CG_AVAILABLE_STARTING(10.0, 2.0);\n",
        "extern unsigned char *CC_HASH(const void *data, CC_LONG len, unsigned char *md) API_AVAILABLE(macos(10.4));\n",
        "mig_external\nextern\n__TVOS_PROHIBITED\nint mig_call(offset_t address, Name name);\n",
        "int spawn(char *const argv[__restrict], char buf[16], void (*done)(int), void (^block)(void), callback_t cb);\n",
        "int printf_like(const char * restrict, ...) __printflike(1, 2);\n",
        "int unspecified();\n",
        "long double wide(void);\n",
        "int bits(__int128 v);\n",
    );
    let get = |name: &str| sig(text, name);
    let r = ptr(record("__Ref"));
    assert_eq!(
        get("make"),
        Some(Sig {
            ret: r.clone(),
            params: vec![r.clone(), ptr(Ty::Float(8))],
            vararg: false
        })
    );
    assert_eq!(
        get("CC_HASH"),
        Some(Sig {
            ret: ptr(Ty::Int(1, false)),
            params: vec![ptr(Ty::Void), Ty::Int(4, false), ptr(Ty::Int(1, false))],
            vararg: false
        })
    );
    assert_eq!(
        get("mig_call"),
        Some(Sig {
            ret: INT,
            params: vec![Ty::Int(8, false), r],
            vararg: false
        })
    );
    assert_eq!(
        get("spawn"),
        Some(Sig {
            ret: INT,
            params: vec![
                ptr(ptr(Ty::Char)),
                ptr(Ty::Char),
                ptr(Ty::Func),
                ptr(Ty::Func),
                ptr(Ty::Func)
            ],
            vararg: false
        })
    );
    assert_eq!(
        get("printf_like"),
        Some(Sig {
            ret: INT,
            params: vec![ptr(Ty::Char)],
            vararg: true
        })
    );
    assert_eq!(
        get("unspecified"),
        None,
        "an empty parameter list declares nothing"
    );
    assert_eq!(get("wide"), None);
    assert_eq!(get("bits"), None);
}

/// A typedef defined two ways is unresolved, except that two pointers are
/// still a pointer and an enum agrees with its underlying integer.
#[test]
fn disagreeing_definitions_are_not_chosen_between() {
    let sized = "typedef int T;\ntypedef long T;\nvoid f(T);\nvoid g(T *);\n";
    assert_eq!(sig(sized, "f"), None);
    assert_eq!(
        sig(sized, "g"),
        Some(Sig {
            ret: Ty::Void,
            params: vec![ptr(Ty::Unknown)],
            vararg: false
        })
    );
    let pointers = "typedef struct a_s *T;\nOS_OBJECT_DECL(b);\ntypedef struct b_s *T;\ntypedef T U;\nvoid f(T, b_t, U);\n";
    assert_eq!(
        sig(pointers, "f"),
        Some(Sig {
            ret: Ty::Void,
            params: vec![ptr(Ty::Unknown), ptr(record("b_s")), ptr(Ty::Unknown)],
            vararg: false
        })
    );
    let enums = "OS_ENUM(mode, unsigned int, MODE_A = 1, MODE_B);\ntypedef mode_t alias_t;\ntypedef unsigned int alias_t;\nvoid f(alias_t);\n";
    assert_eq!(
        sig(enums, "f"),
        Some(Sig {
            ret: Ty::Void,
            params: vec![Ty::Enum("mode_t".into(), 4, false)],
            vararg: false
        })
    );
    let bare =
        "NS_ENUM(long, Kind) { KindA, KindB = 4 } API_AVAILABLE(ios(13.0));\nvoid f(Kind);\n";
    assert_eq!(
        sig(bare, "f"),
        Some(Sig {
            ret: Ty::Void,
            params: vec![Ty::Enum("Kind".into(), 8, true)],
            vararg: false
        })
    );
    let repeated = "int f(int);\nint f(int x);\nextern int f(const int);\n";
    assert_eq!(
        sig(repeated, "f"),
        Some(Sig {
            ret: INT,
            params: vec![INT],
            vararg: false
        })
    );
}

/// An SDK root gives the linked frameworks plus `usr/include` without its
/// C++ tree; a kext gets `Kernel.framework` alone.
#[test]
fn header_set_follows_the_image() {
    let root = std::env::temp_dir().join(format!("unlace-sdkprotos-{}", std::process::id()));
    let _ = std::fs::remove_dir_all(&root);
    for file in [
        "System/Library/Frameworks/Alpha.framework/Headers/Alpha.h",
        "System/Library/Frameworks/Beta.framework/Headers/Beta.h",
        "System/Library/Frameworks/Kernel.framework/Headers/IOKit/IOLib.h",
        "usr/include/sys/types.h",
        "usr/include/c++/v1/vector.h",
    ] {
        let path = root.join(file);
        std::fs::create_dir_all(path.parent().unwrap()).unwrap();
        std::fs::write(&path, "int f(void);\n").unwrap();
    }
    let names = |frameworks: &[String], kext| -> Vec<String> {
        header_paths(&root, frameworks, kext)
            .iter()
            .map(|p| p.file_name().unwrap().to_string_lossy().into_owned())
            .collect()
    };
    assert_eq!(names(&["Alpha".to_string()], false), ["Alpha.h", "types.h"]);
    assert_eq!(names(&[], false), ["Alpha.h", "Beta.h", "types.h"]);
    assert_eq!(names(&[], true), ["IOLib.h"]);
    let plain = root.join("usr/include");
    assert_eq!(
        header_paths(&plain, &[], false).len(),
        2,
        "any other directory is read whole"
    );
    std::fs::remove_dir_all(&root).unwrap();

    let mut macho = vec![0u8; 32];
    macho[..4].copy_from_slice(&0xfeed_facfu32.to_le_bytes());
    macho[12..16].copy_from_slice(&object::macho::MH_KEXT_BUNDLE.to_le_bytes());
    assert!(is_kext(&macho));
    macho[12..16].copy_from_slice(&object::macho::MH_EXECUTE.to_le_bytes());
    assert!(!is_kext(&macho) && !is_kext(&macho[..8]));
}

/// Prototypes as the model will place them: a two-word struct spread over
/// two registers, four doubles over four, a wider struct by reference; the
/// layouts behind the pointers; no prototype where the convention differs.
#[test]
fn prototypes_place_by_value_aggregates() {
    let headers = fixture(ARM64);
    let names = [
        "CFStringFindWithOptions",
        "GadgetRectGetWidth",
        "GadgetSum",
        "GadgetGetInfo",
        "CFShowFormat",
        "dispatch_set_tier",
    ];
    let types = super::super::tests::fmt_factory();
    with(&headers, &names, ARM64, |index| {
        let mut builder = Builder::new(index, &types, 8, 1);
        let find = builder
            .prototype("CFStringFindWithOptions")
            .expect("prototype");
        assert_eq!(
            find.intypes.len(),
            6,
            "theString, stringToFind, location, length, options, result"
        );
        assert_eq!(
            find.outtype.as_ref().unwrap().get_metatype(),
            type_metatype::TYPE_BOOL
        );
        assert!(find.intypes[4].is_enum_type());
        let range = find.intypes[5].get_ptr_to().expect("CFRange *");
        assert_eq!((range.get_name(), range.get_size()), ("CFRange", 16));

        let width = builder.prototype("GadgetRectGetWidth").expect("prototype");
        assert_eq!(width.intypes.len(), 4);
        assert!(
            width
                .intypes
                .iter()
                .all(|t| t.get_metatype() == type_metatype::TYPE_FLOAT && t.get_size() == 8)
        );

        let sum = builder.prototype("GadgetSum").expect("prototype");
        assert_eq!(sum.intypes.len(), 2);
        assert_eq!(
            sum.intypes[0].get_ptr_to().map(|t| t.get_size()),
            Some(32),
            "over sixteen bytes: a pointer to the copy"
        );

        let info = builder.prototype("GadgetGetInfo").expect("prototype");
        let layout = info.intypes[1].get_ptr_to().expect("GadgetInfo *");
        assert_eq!(layout.get_size(), 32);
        let offsets: Vec<(i32, String)> = (0..4)
            .filter_map(|k| layout.get_field(k))
            .map(|f| (f.offset, f.name.clone()))
            .collect();
        assert_eq!(
            offsets,
            [
                (0, "version".to_string()),
                (8, "count".to_string()),
                (16, "label".to_string()),
                (24, "flags".to_string())
            ]
        );

        assert_eq!(
            builder
                .prototype("CFShowFormat")
                .expect("prototype")
                .first_var_arg_slot,
            1
        );
        assert_eq!(
            builder
                .prototype("dispatch_set_tier")
                .expect("prototype")
                .intypes[1]
                .get_size(),
            4
        );
    });
    with(&fixture(X86_64), &names, X86_64, |index| {
        let mut builder = Builder::new(index, &types, 8, 1);
        assert!(
            builder.prototype("GadgetRectGetWidth").is_none(),
            "System V passes four doubles in memory"
        );
        assert!(builder.prototype("GadgetSum").is_none());
        assert_eq!(
            builder
                .prototype("CFStringFindWithOptions")
                .map(|p| p.intypes.len()),
            Some(6)
        );
    });
}

/// A packed record, a bitfield and a member of unknown size have no
/// layout: a pointer to one is opaque and a by-value use is refused.
#[test]
fn unreadable_layouts_stay_opaque() {
    let text = concat!(
        "struct Packed { char a; long b; } __attribute__((packed));\n",
        "struct Bits { unsigned a : 3; unsigned b : 5; };\n",
        "struct Sized { long sig; char opaque[SIZE_MACRO]; };\n",
        "struct Node { struct Node *next; long value; };\n",
        "long p(struct Packed *); long b(struct Bits *); long s(struct Sized *); long n(struct Node *);\n",
        "long byvalue(struct Packed);\n",
    );
    let headers = [header(text, ARM64)];
    let types = super::super::tests::fmt_factory();
    with(&headers, &["p", "b", "s", "n", "byvalue"], ARM64, |index| {
        let mut builder = Builder::new(index, &types, 8, 1);
        for name in ["p", "b", "s"] {
            let pointee = builder.prototype(name).expect("prototype").intypes[0]
                .get_ptr_to()
                .expect("pointer");
            assert!(pointee.is_incomplete(), "{name}");
        }
        let node = builder.prototype("n").expect("prototype").intypes[0]
            .get_ptr_to()
            .expect("pointer");
        assert_eq!(
            (node.get_size(), node.get_field(1).map(|f| f.offset)),
            (16, Some(8)),
            "a self-referential record completes"
        );
        assert!(builder.prototype("byvalue").is_none());
    });
}

/// A packing pragma caps the alignment of the members it covers; a form
/// the reader does not follow, or one under an undecided condition, leaves
/// every later record of the file without a layout.
#[test]
fn packing_pragmas_cap_member_alignment() {
    let text = concat!(
        "struct Before { char a; long b; };\n",
        "#pragma pack(push, 4)\n",
        "struct Four { char a; long b; int c; };\n",
        "#pragma pack(push, 1)\n",
        "struct One { char a; long b; };\n",
        "#pragma pack(pop)\n",
        "struct FourAgain { short a; long b; };\n",
        "#pragma pack(pop)\n",
        "struct After { char a; long b; };\n",
        "#pragma options align=mac68k\n",
        "struct Two { char a; long b; };\n",
        "#pragma options align=reset\n",
        "#pragma pack(push, n)\n",
        "struct Lost { char a; long b; };\n",
        "#pragma pack(pop)\n",
        "struct LostToo { char a; long b; };\n",
        "long f(struct Before *, struct Four *, struct One *, struct FourAgain *, struct After *, struct Two *, struct Lost *, struct LostToo *);\n",
    );
    let headers = [header(text, ARM64)];
    let types = super::super::tests::fmt_factory();
    with(&headers, &["f"], ARM64, |index| {
        let proto = Builder::new(index, &types, 8, 1)
            .prototype("f")
            .expect("prototype");
        let shape = |k: usize| {
            let record = proto.intypes[k].get_ptr_to().expect("pointer");
            (!record.is_incomplete())
                .then(|| (record.get_size(), record.get_field(1).map(|f| f.offset)))
        };
        assert_eq!(shape(0), Some((16, Some(8))));
        assert_eq!(shape(1), Some((16, Some(4))));
        assert_eq!(shape(2), Some((9, Some(1))));
        assert_eq!(shape(3), Some((12, Some(4))));
        assert_eq!(shape(4), Some((16, Some(8))));
        assert_eq!(shape(5), Some((10, Some(2))));
        assert_eq!(shape(6), None);
        assert_eq!(shape(7), None);
    });
    let guarded = "#ifdef FEATURE\n#pragma pack(push, 2)\n#endif\nstruct S { char a; long b; };\nlong f(struct S *);\n";
    with(&[header(guarded, ARM64)], &["f"], ARM64, |index| {
        let proto = Builder::new(index, &types, 8, 1)
            .prototype("f")
            .expect("prototype");
        assert!(
            proto.intypes[0]
                .get_ptr_to()
                .expect("pointer")
                .is_incomplete()
        );
    });
}

/// A record or enumerator list under a condition that cannot be decided,
/// or with one inside it, is not taken for the layout: the 32-bit-inode
/// `struct stat` is the shape of this. An include guard is no condition.
#[test]
fn undecided_conditionals_give_no_layout() {
    let text = concat!(
        "#ifndef GUARD_H\n#define GUARD_H\n",
        "#if !defined(OTHER_GUARD)\n#define OTHER_GUARD 1\n",
        "struct Plain { long a; long b; };\n",
        "#if FEATURE\n",
        "struct Either MACRO_BODY;\n",
        "#else\n",
        "struct Either { int old; long layout; };\n",
        "#endif\n",
        "struct Split { long a;\n#ifdef FEATURE\n long extra;\n#endif\n long b; };\n",
        "#if TARGET_OS_IPHONE\n",
        "struct Phone { long a; int b; };\n",
        "typedef enum { PhoneA = 1, PhoneB } PhoneKind;\n",
        "#else\n",
        "struct Phone { int a; };\n",
        "#endif\n",
        "#ifndef OTHER_DEFINES_PLAIN\n",
        "struct Plain { long a; long b; };\n",
        "#endif\n",
        "#if FEATURE\n",
        "typedef enum { MaybeA, MaybeB } MaybeKind;\n",
        "#endif\n",
        "long f(struct Plain *, struct Either *, struct Split *, struct Phone *, PhoneKind, MaybeKind);\n",
        "long g(int a\n#if FEATURE\n, int b\n#endif\n);\n",
        "API_AVAILABLE(ios(2.0))\n#if FEATURE\nint h(long *_Nonnull);\n#else\nint h(long *);\n#endif\n",
        "#ifdef linkage\nlinkage\n#else\nextern\n#endif\nint mig(long port);\n",
        "#if FEATURE\nlong\n#else\nint\n#endif\nwidth(void);\n",
        "#endif\n#endif\n",
    );
    let headers = [header(text, ARM64)];
    let types = super::super::tests::fmt_factory();
    with(&headers, &["f", "g", "h", "mig", "width"], ARM64, |index| {
        let proto = Builder::new(index, &types, 8, 1)
            .prototype("f")
            .expect("prototype");
        let complete = |k: usize| {
            !proto.intypes[k]
                .get_ptr_to()
                .expect("pointer")
                .is_incomplete()
        };
        assert!(
            complete(0),
            "inside two include guards, and repeated the same under a condition"
        );
        assert!(!complete(1), "the other branch may define it");
        assert!(!complete(2), "a member under an undecided condition");
        assert!(complete(3), "a platform condition is decided");
        assert_eq!(
            proto.intypes[3].get_ptr_to().map(|t| t.get_size()),
            Some(16)
        );
        assert!(proto.intypes[4].is_enum_type());
        assert!(
            !proto.intypes[5].is_enum_type(),
            "enumerators under an undecided condition"
        );
        assert_eq!(proto.intypes[5].get_size(), 4);
        assert_eq!(
            index.signature("g"),
            None,
            "a declaration divided by an undecided condition"
        );
        assert_eq!(
            index.signature("h"),
            Some(Sig {
                ret: INT,
                params: vec![ptr(LONG)],
                vararg: false
            }),
            "an attribute ahead of both branches"
        );
        assert_eq!(
            index.signature("mig"),
            Some(Sig {
                ret: INT,
                params: vec![LONG],
                vararg: false
            }),
            "a conditional linkage word ahead of the type"
        );
        assert_eq!(index.signature("width"), None, "a conditional return type");
    });
}

#[test]
fn constant_expressions_evaluate() {
    let value = |text: &str| eval(&lex(text), &BTreeMap::from([("kBase", 16i128)]), 0);
    assert_eq!(value("(1UL << 6) | kBase"), Some(80));
    assert_eq!(value("0x08000100"), Some(0x0800_0100));
    assert_eq!(value("-1L"), Some(-1));
    assert_eq!(value("~0u & 0xff"), Some(0xff));
    assert_eq!(value("'abcd'"), Some(0x6162_6364));
    assert_eq!(value("010 + 2 * 3"), Some(14));
    assert_eq!(value("1 << 200"), None);
    assert_eq!(value("sizeof(int)"), None);
    assert_eq!(value("kOther"), None);
}

/// Unbalanced brackets, hostile nesting and non-ASCII text are read to the
/// end without a prototype, never a panic.
#[test]
fn malformed_headers_yield_nothing() {
    let deep = format!(
        "typedef int {}x{};\nint f(int);\n",
        "(".repeat(5000),
        ")".repeat(5000)
    );
    assert_eq!(
        sig(&deep, "f"),
        Some(Sig {
            ret: INT,
            params: vec![INT],
            vararg: false
        })
    );
    let chain: String = (0..200)
        .map(|k| format!("typedef T{} T{};\n", k + 1, k))
        .collect();
    assert_eq!(sig(&format!("{chain}int f(T0);\n"), "f"), None);
    let cyclic =
        "typedef A B;\ntypedef B A;\nstruct S { struct S inner; };\nint f(A);\nint g(struct S);\n";
    assert_eq!(sig(cyclic, "f"), None);
    for text in [
        "int f(int",
        "int f(int));",
        "struct { int f(",
        "int f(caf\u{e9} x);",
        "typedef int \u{e9};\nint f(\u{e9});",
        "int f(int x[1 <<]);",
        "#if (((\nint f(int);",
    ] {
        let _ = sig(text, "f");
    }
    let headers = [header(cyclic, ARM64)];
    let types = super::super::tests::fmt_factory();
    with(&headers, &["g"], ARM64, |index| {
        assert!(Builder::new(index, &types, 8, 1).prototype("g").is_none())
    });
}
