//! (unlace `aeabifloat`) The Arm run-time ABI's floating-point helpers as the C
//! operators and casts they implement.
//!
//! A soft-float caller (or a hard-float one on a single-precision FPU, for its
//! doubles) computes `a + b` as `__aeabi_dadd(a, b)`, `a < b` as
//! `__aeabi_dcmplt(a, b)`, `(int)x` as `__aeabi_d2iz(x)`. RTABI32 section 4.1.2
//! fixes each one's result: IEEE 754 arithmetic rounded to nearest, a comparison
//! returning 1 or 0 (0 when unordered, except `dcmpun`), a conversion to an
//! integer rounding toward zero. Each helper is registered as a `<callfixup>`,
//! like [`crate::arithhelpers`], whose payload list this one extends: the
//! CALL is replaced with the operation in p-code, reading its operands from
//! r0..r3 under the base standard (a `double` low word first on little-endian,
//! high word first on big-endian) and writing its result to r0 or r0:r1, so
//! `return __aeabi_dadd(a,b);` prints `return a + b;`.
//!
//! On by default: RTABI32 requires the helpers to be the IEEE 754 round-to-nearest
//! ones, so on a conforming image the fold changes no value; the option stays for
//! a firmware that links its own non-IEEE helpers under the AEABI names. A
//! conversion to an unsigned integer is read as
//! the signed conversion to a wider integer, exact over the range the C cast is
//! defined on. The conversions with no such reading (`d2ulz`, `f2ulz`, `ul2d`,
//! `ul2f`) keep the call, as do the flag-returning `cdcmp`/`cfcmp` forms.

/// Prefix of every `<callfixup name=...>` this module registers; the installer
/// (`unlace_analysis::analyzers::callfixup`) skips them unless
/// `option aeabifloat on`.
pub const FIXUP_PREFIX: &str = "kuna_aeabifloat_";

/// The `(helper, body)` pairs for one byte order, the helper without its
/// `__aeabi_` prefix.
fn fixups(big_endian: bool) -> Vec<(String, String)> {
    let (lo, hi, blo, bhi) = if big_endian {
        ("r1", "r0", "r3", "r2")
    } else {
        ("r0", "r1", "r2", "r3")
    };
    let a = format!("a:8 = (zext({hi}) << 32) | zext({lo});");
    let b = format!("b:8 = (zext({bhi}) << 32) | zext({blo});");
    let ret = format!("{lo} = r:4; {hi} = r(4);");
    let double = format!("{a} {b}");
    let mut out = Vec::new();
    for (stem, op, swap) in [
        ("add", "f+", false),
        ("sub", "f-", false),
        ("rsub", "f-", true),
        ("mul", "f*", false),
        ("div", "f/", false),
    ] {
        let (x, y) = if swap { ("b", "a") } else { ("a", "b") };
        out.push((
            format!("d{stem}"),
            format!("{double} r:8 = {x} {op} {y}; {ret}"),
        ));
        let (x, y) = if swap { ("r1", "r0") } else { ("r0", "r1") };
        out.push((format!("f{stem}"), format!("r0 = {x} {op} {y};")));
    }
    for (stem, op, swap) in [
        ("cmpeq", "f==", false),
        ("cmplt", "f<", false),
        ("cmple", "f<=", false),
        ("cmpge", "f<=", true),
        ("cmpgt", "f<", true),
    ] {
        let (x, y) = if swap { ("b", "a") } else { ("a", "b") };
        out.push((
            format!("d{stem}"),
            format!("{double} r0 = zext({x} {op} {y});"),
        ));
        let (x, y) = if swap { ("r1", "r0") } else { ("r0", "r1") };
        out.push((format!("f{stem}"), format!("r0 = zext({x} {op} {y});")));
    }
    let unordered = "u:1 = n | m; r0 = zext(u);";
    let rows: [(&str, String); 16] = [
        (
            "dcmpun",
            format!("{double} n:1 = nan(a); m:1 = nan(b); {unordered}"),
        ),
        (
            "fcmpun",
            format!("n:1 = nan(r0); m:1 = nan(r1); {unordered}"),
        ),
        ("d2iz", format!("{a} r0 = trunc(a);")),
        ("d2uiz", format!("{a} t:8 = trunc(a); r0 = t:4;")),
        ("d2lz", format!("{a} r:8 = trunc(a); {ret}")),
        ("f2iz", "r0 = trunc(r0);".to_string()),
        ("f2uiz", "t:8 = trunc(r0); r0 = t:4;".to_string()),
        ("f2lz", format!("r:8 = trunc(r0); {ret}")),
        ("d2f", format!("{a} r0 = float2float(a);")),
        ("f2d", format!("r:8 = float2float(r0); {ret}")),
        ("i2d", format!("r:8 = int2float(r0); {ret}")),
        ("ui2d", format!("z:8 = zext(r0); r:8 = int2float(z); {ret}")),
        ("l2d", format!("{a} r:8 = int2float(a); {ret}")),
        ("i2f", "r0 = int2float(r0);".to_string()),
        ("ui2f", "z:8 = zext(r0); r0 = int2float(z);".to_string()),
        ("l2f", format!("{a} r0 = int2float(a);")),
    ];
    out.extend(
        rows.into_iter()
            .map(|(name, body)| (name.to_string(), body)),
    );
    out
}

/// The libgcc soft-float routine each helper is the same function as (libgcc's
/// ARM `ieee754-df.S`/`ieee754-sf.S` define the two names at one address, and
/// `__aeabi_d2lz`/`__aeabi_f2lz` call `__fixdfdi`/`__fixsfdi`). A static image
/// names the function by whichever symbol the symbol table lists first, and
/// newlib calls the libgcc names directly. The libgcc comparisons (`__eqdf2`,
/// `__ltdf2`, ...) return a three-way result, not the helpers' 1 or 0, and keep
/// their calls.
const LIBGCC: &[(&str, &str)] = &[
    ("dadd", "__adddf3"),
    ("dsub", "__subdf3"),
    ("dmul", "__muldf3"),
    ("ddiv", "__divdf3"),
    ("fadd", "__addsf3"),
    ("fsub", "__subsf3"),
    ("fmul", "__mulsf3"),
    ("fdiv", "__divsf3"),
    ("d2iz", "__fixdfsi"),
    ("d2uiz", "__fixunsdfsi"),
    ("d2lz", "__fixdfdi"),
    ("f2iz", "__fixsfsi"),
    ("f2uiz", "__fixunssfsi"),
    ("f2lz", "__fixsfdi"),
    ("d2f", "__truncdfsf2"),
    ("f2d", "__extendsfdf2"),
    ("i2d", "__floatsidf"),
    ("ui2d", "__floatunsidf"),
    ("l2d", "__floatdidf"),
    ("i2f", "__floatsisf"),
    ("ui2f", "__floatunsisf"),
    ("l2f", "__floatdisf"),
];

/// The synthesized `<callfixup>` elements for one byte order, each targeting
/// `__aeabi_<helper>`, the libgcc routine it is ([`LIBGCC`]), and the
/// one-more-underscore spelling of each, as
/// [`crate::arithhelpers::payload_xml`] does.
pub fn payload_xml(big_endian: bool) -> Vec<String> {
    fixups(big_endian)
        .into_iter()
        .map(|(name, body)| {
            let aeabi = format!("__aeabi_{name}");
            let libgcc = LIBGCC.iter().filter(|(h, _)| *h == name).map(|(_, l)| l.to_string());
            let targets: String = std::iter::once(aeabi)
                .chain(libgcc)
                .flat_map(|t| [format!("_{t}"), t])
                .map(|t| format!("<target name=\"{t}\"/>"))
                .collect();
            format!(
                "<callfixup name=\"{FIXUP_PREFIX}{name}\">{targets}<pcode><body><![CDATA[{body}]]></body></pcode></callfixup>"
            )
        })
        .collect()
}

crate::unlace_flag!(
    /// (unlace `aeabifloat`) Install the AEABI floating-point helper call-fixups
    /// (`p2_lift/aeabifloat.rs`) so `__aeabi_dadd(a,b)` prints as `a + b`.
    /// Read by the analysis-tier call-fixup installer, like `arithhelpers`.
    AeabiFloat,
    "aeabifloat",
    "AEABI floating-point helper call-fixups",
    unset: false,
    shipped: true
);

#[cfg(test)]
mod tests {
    use super::{fixups, payload_xml};

    #[test]
    fn each_helper_is_targeted_once_per_byte_order() {
        for big_endian in [false, true] {
            let mut names: Vec<String> = fixups(big_endian).into_iter().map(|(n, _)| n).collect();
            let len = names.len();
            names.sort_unstable();
            names.dedup();
            assert_eq!(names.len(), len);
            assert_eq!(len, 36);
            assert!(
                names
                    .iter()
                    .all(|n| !n.ends_with("ulz") && !n.starts_with("ul2"))
            );
        }
    }

    #[test]
    fn a_helper_also_targets_the_libgcc_routine_it_is() {
        let dmul = payload_xml(false)
            .into_iter()
            .find(|x| x.contains("kuna_aeabifloat_dmul"))
            .unwrap();
        for t in ["__aeabi_dmul", "___aeabi_dmul", "__muldf3", "___muldf3"] {
            assert!(dmul.contains(&format!("<target name=\"{t}\"/>")), "{dmul}");
        }
        assert!(
            super::LIBGCC
                .iter()
                .all(|(h, _)| fixups(false).iter().any(|(n, _)| n == h))
        );
    }

    #[test]
    fn a_big_endian_double_takes_its_high_word_from_r0() {
        let dadd = payload_xml(true)
            .into_iter()
            .find(|x| x.contains("__aeabi_dadd"))
            .unwrap();
        assert!(
            dadd.contains("a:8 = (zext(r0) << 32) | zext(r1);"),
            "{dadd}"
        );
        assert!(dadd.contains("r1 = r:4; r0 = r(4);"), "{dadd}");
        let drsub = payload_xml(false)
            .into_iter()
            .find(|x| x.contains("__aeabi_drsub"))
            .unwrap();
        assert!(drsub.contains("r:8 = b f- a;"), "{drsub}");
    }
}
