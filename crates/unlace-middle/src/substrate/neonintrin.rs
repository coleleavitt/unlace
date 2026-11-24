//! (kuna `neonintrin`) ACLE NEON intrinsic names and vector types for AArch64.
//!
//! The AArch64 SLEIGH spec lifts Advanced SIMD in two ways. Lane-wise arithmetic
//! (`add v0.4s, v1.4s, v2.4s`) is one p-code op per lane on slices of the
//! registers, which `kuna_lanefuse` re-fuses into one built-in named here
//! (`vaddq_s32`). Everything else is a `NEON_<mnemonic>` user op whose last
//! input is the element size in bytes (`NEON_smax(a, b, 4:1)`), plus
//! `a64_TBL`. This maps both to the `<arm_neon.h>` intrinsic a programmer
//! writes (`vmaxq_s32`, `vqtbl1q_u8`) and names the vector types those take
//! (`int32x4_t`, `uint8x16_t`). Hex-Rays ARM builds the same names from
//! templates (hexarm.so name table at 0x4d656f: `vadd$`, `vqtbl#$`, ...) and the
//! types from `%s%dx%dx%d_t` (sub_88450).

/// The element type of a NEON vector.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum Elem {
    /// Signed integer.
    S,
    /// Unsigned integer.
    U,
    /// Floating point.
    F,
    /// Polynomial.
    P,
}

impl Elem {
    fn letter(self) -> char {
        match self {
            Elem::S => 's',
            Elem::U => 'u',
            Elem::F => 'f',
            Elem::P => 'p',
        }
    }

    fn type_word(self) -> &'static str {
        match self {
            Elem::S => "int",
            Elem::U => "uint",
            Elem::F => "float",
            Elem::P => "poly",
        }
    }
}

/// A vector-kind code for `vector_userops`: `0x80 | elem << 4 | log2(lane bytes)`.
/// Codes below `0x80` are the Intel kinds of `kuna_avxintrin`.
pub fn kind_code(elem: Elem, lane: u32) -> u8 {
    let e = match elem {
        Elem::S => 0,
        Elem::U => 1,
        Elem::F => 2,
        Elem::P => 3,
    };
    0x80 | (e << 4) | (lane.trailing_zeros() as u8 & 0xf)
}

/// The lane nibble of a [`kind_code`] whose lane width is the user op's trailing
/// element-size immediate rather than fixed.
pub const VARIABLE_LANE: u8 = 0xf;

/// A vector-kind code whose lane width is read from each call's trailing
/// element-size immediate.
pub fn variable_kind_code(elem: Elem) -> u8 {
    (kind_code(elem, 1) & 0xf0) | VARIABLE_LANE
}

/// The vector kind of the user op or built-in named `name`, for
/// `vector_userops`: a `NEON_` op with an element type, `a64_TBL`, a fixed-name
/// crypto op, or a fused-lane built-in (`vaddq_s32`).
pub fn userop_kind(name: &str) -> Option<u8> {
    if name == "a64_TBL" {
        return Some(kind_code(Elem::U, 1));
    }
    if let Some(mnemonic) = name.strip_prefix("NEON_") {
        let m = map(mnemonic)?;
        return Some(match m.elem {
            Some(elem) => variable_kind_code(elem),
            None if m.stem.ends_with("_u8") => kind_code(Elem::U, 1),
            None if m.stem.ends_with("_u32") => kind_code(Elem::U, 4),
            None => kind_code(Elem::U, 8),
        });
    }
    // A fused-lane built-in: `v<op>[q]_<s|u|f><bits>`.
    let (head, ty) = name.rsplit_once('_')?;
    if !head.starts_with('v') {
        return None;
    }
    let elem = match ty.as_bytes().first()? {
        b's' => Elem::S,
        b'u' => Elem::U,
        b'f' => Elem::F,
        b'p' => Elem::P,
        _ => return None,
    };
    let bits: u32 = ty[1..].parse().ok()?;
    matches!(bits, 8 | 16 | 32 | 64).then(|| kind_code(elem, bits / 8))
}

/// The element type and lane bytes a [`kind_code`] names.
pub fn decode_kind(kind: u8) -> Option<(Elem, u32)> {
    if kind & 0x80 == 0 {
        return None;
    }
    if kind & 0xf == VARIABLE_LANE {
        return None;
    }
    let elem = match (kind >> 4) & 0x7 {
        0 => Elem::S,
        1 => Elem::U,
        2 => Elem::F,
        3 => Elem::P,
        _ => return None,
    };
    Some((elem, 1 << (kind & 0xf)))
}

/// The element type of a [`variable_kind_code`].
pub fn variable_elem(kind: u8) -> Option<Elem> {
    if kind & 0x80 == 0 || kind & 0xf != VARIABLE_LANE {
        return None;
    }
    Some(match (kind >> 4) & 0x7 {
        0 => Elem::S,
        1 => Elem::U,
        2 => Elem::F,
        _ => Elem::P,
    })
}

/// The ACLE vector type of `total` bytes with `lane`-byte `elem` lanes
/// (`int32x4_t`, `uint8x16_t`, `float64x2_t`).
pub fn vector_type_name(total: i32, elem: Elem, lane: u32) -> Option<String> {
    if !matches!(total, 8 | 16) || !matches!(lane, 1 | 2 | 4 | 8) {
        return None;
    }
    if elem == Elem::F && lane == 1 {
        return None;
    }
    let lanes = total as u32 / lane;
    Some(format!("{}{}x{}_t", elem.type_word(), lane * 8, lanes))
}

/// The element type, lane bytes and total bytes of an ACLE vector type name
/// (`int32x4_t`).
pub fn parse_type_name(name: &str) -> Option<(Elem, u32, i32)> {
    let body = name.strip_suffix("_t")?;
    let (elem, rest) = if let Some(r) = body.strip_prefix("uint") {
        (Elem::U, r)
    } else if let Some(r) = body.strip_prefix("int") {
        (Elem::S, r)
    } else if let Some(r) = body.strip_prefix("float") {
        (Elem::F, r)
    } else if let Some(r) = body.strip_prefix("poly") {
        (Elem::P, r)
    } else {
        return None;
    };
    let (bits, lanes) = rest.split_once('x')?;
    let (bits, lanes): (u32, u32) = (bits.parse().ok()?, lanes.parse().ok()?);
    let lane = bits / 8;
    let total = i32::try_from(lane * lanes).ok()?;
    (vector_type_name(total, elem, lane).as_deref() == Some(name)).then_some((elem, lane, total))
}

/// `vget[q]_lane_<t>`: the intrinsic that reads lane `index` of a vector of type
/// `name`, when `size` bytes at byte `offset` are exactly that lane.
pub fn lane_getter(name: &str, offset: u64, size: i32) -> Option<(String, u64)> {
    let (elem, lane, total) = parse_type_name(name)?;
    if size as u32 != lane || offset % u64::from(lane) != 0 || offset >= total as u64 {
        return None;
    }
    let q = if total == 16 { "q" } else { "" };
    Some((
        format!("vget{q}_lane_{}{}", elem.letter(), lane * 8),
        offset / u64::from(lane),
    ))
}

/// The ACLE name of the lane-wise op `op` (`add`, `sub`, `mul`, `and`, `orr`,
/// `eor`, `div`) over `lane`-byte lanes in a `total`-byte register, with the
/// element type it prints with.
pub fn fused_name(op: &str, float: bool, lane: u32, total: i32) -> Option<(String, Elem)> {
    let q = match total {
        8 => "",
        16 => "q",
        _ => return None,
    };
    let elem = if float {
        if !matches!(lane, 2 | 4 | 8) {
            return None;
        }
        Elem::F
    } else if matches!(op, "and" | "orr" | "eor") {
        Elem::U
    } else {
        Elem::S
    };
    if op == "div" && !float {
        return None;
    }
    if op == "mul" && !float && lane == 8 {
        return None;
    }
    let base = match op {
        "and" => "vand",
        "orr" => "vorr",
        "eor" => "veor",
        "add" => "vadd",
        "sub" => "vsub",
        "mul" => "vmul",
        "div" => "vdiv",
        _ => return None,
    };
    Some((format!("{base}{q}_{}{}", elem.letter(), lane * 8), elem))
}

/// How a `NEON_<mnemonic>` user op maps: the ACLE stem, the part after the `q`
/// (`_n` for immediate shifts), and the element type (`None`: fixed name).
struct Map {
    stem: &'static str,
    post: &'static str,
    elem: Option<Elem>,
}

fn map(mnemonic: &str) -> Option<Map> {
    use Elem::*;
    let m = |stem, post, elem| Some(Map { stem, post, elem });
    match mnemonic {
        "smax" => m("vmax", "", Some(S)),
        "umax" => m("vmax", "", Some(U)),
        "fmax" => m("vmax", "", Some(F)),
        "smin" => m("vmin", "", Some(S)),
        "umin" => m("vmin", "", Some(U)),
        "fmin" => m("vmin", "", Some(F)),
        "fmaxnm" => m("vmaxnm", "", Some(F)),
        "fminnm" => m("vminnm", "", Some(F)),
        "smaxp" => m("vpmax", "", Some(S)),
        "umaxp" => m("vpmax", "", Some(U)),
        "fmaxp" => m("vpmax", "", Some(F)),
        "sminp" => m("vpmin", "", Some(S)),
        "uminp" => m("vpmin", "", Some(U)),
        "fminp" => m("vpmin", "", Some(F)),
        "smaxv" => m("vmaxv", "", Some(S)),
        "umaxv" => m("vmaxv", "", Some(U)),
        "fmaxv" => m("vmaxv", "", Some(F)),
        "sminv" => m("vminv", "", Some(S)),
        "uminv" => m("vminv", "", Some(U)),
        "fminv" => m("vminv", "", Some(F)),
        "sqadd" => m("vqadd", "", Some(S)),
        "uqadd" => m("vqadd", "", Some(U)),
        "sqsub" => m("vqsub", "", Some(S)),
        "uqsub" => m("vqsub", "", Some(U)),
        "suqadd" => m("vuqadd", "", Some(S)),
        "usqadd" => m("vsqadd", "", Some(U)),
        "sqdmulh" => m("vqdmulh", "", Some(S)),
        "sqrdmulh" => m("vqrdmulh", "", Some(S)),
        "shadd" => m("vhadd", "", Some(S)),
        "uhadd" => m("vhadd", "", Some(U)),
        "shsub" => m("vhsub", "", Some(S)),
        "uhsub" => m("vhsub", "", Some(U)),
        "srhadd" => m("vrhadd", "", Some(S)),
        "urhadd" => m("vrhadd", "", Some(U)),
        "sabd" => m("vabd", "", Some(S)),
        "uabd" => m("vabd", "", Some(U)),
        "fabd" => m("vabd", "", Some(F)),
        "saba" => m("vaba", "", Some(S)),
        "uaba" => m("vaba", "", Some(U)),
        "sshl" => m("vshl", "", Some(S)),
        "ushl" => m("vshl", "", Some(U)),
        "srshl" => m("vrshl", "", Some(S)),
        "urshl" => m("vrshl", "", Some(U)),
        "sqshl" => m("vqshl", "", Some(S)),
        "uqshl" => m("vqshl", "", Some(U)),
        "sqrshl" => m("vqrshl", "", Some(S)),
        "uqrshl" => m("vqrshl", "", Some(U)),
        "srshr" => m("vrshr", "_n", Some(S)),
        "urshr" => m("vrshr", "_n", Some(U)),
        "sri" => m("vsri", "_n", Some(U)),
        "sli" => m("vsli", "_n", Some(U)),
        "sqshlu" => m("vqshlu", "_n", Some(S)),
        "cls" => m("vcls", "", Some(S)),
        "cnt" => m("vcnt", "", Some(U)),
        "rbit" => m("vrbit", "", Some(U)),
        "rev16" => m("vrev16", "", Some(U)),
        "rev32" => m("vrev32", "", Some(U)),
        "rev64" => m("vrev64", "", Some(U)),
        "pmul" => m("vmul", "", Some(P)),
        "pmull" => m("vmull", "", Some(P)),
        "pmull2" => m("vmull_high", "", Some(P)),
        "fsqrt" => m("vsqrt", "", Some(F)),
        "frecpe" => m("vrecpe", "", Some(F)),
        "frecps" => m("vrecps", "", Some(F)),
        "frsqrte" => m("vrsqrte", "", Some(F)),
        "frsqrts" => m("vrsqrts", "", Some(F)),
        "fmulx" => m("vmulx", "", Some(F)),
        "fcmeq" => m("vceq", "", Some(F)),
        "fcmge" => m("vcge", "", Some(F)),
        "fcmgt" => m("vcgt", "", Some(F)),
        "fcmle" => m("vcle", "", Some(F)),
        "fcmlt" => m("vclt", "", Some(F)),
        "facge" => m("vcage", "", Some(F)),
        "facgt" => m("vcagt", "", Some(F)),
        "ext" => m("vext", "", Some(U)),
        "neg" => m("vneg", "", Some(S)),
        "aese" => m("vaeseq_u8", "", None),
        "aesd" => m("vaesdq_u8", "", None),
        "aesmc" => m("vaesmcq_u8", "", None),
        "aesimc" => m("vaesimcq_u8", "", None),
        "sha1c" => m("vsha1cq_u32", "", None),
        "sha1m" => m("vsha1mq_u32", "", None),
        "sha1p" => m("vsha1pq_u32", "", None),
        "sha1h" => m("vsha1h_u32", "", None),
        "sha1su0" => m("vsha1su0q_u32", "", None),
        "sha1su1" => m("vsha1su1q_u32", "", None),
        "sha256h" => m("vsha256hq_u32", "", None),
        "sha256h2" => m("vsha256h2q_u32", "", None),
        "sha256su0" => m("vsha256su0q_u32", "", None),
        "sha256su1" => m("vsha256su1q_u32", "", None),
        "sha512h" => m("vsha512hq_u64", "", None),
        "sha512h2" => m("vsha512h2q_u64", "", None),
        "sha512su0" => m("vsha512su0q_u64", "", None),
        "sha512su1" => m("vsha512su1q_u64", "", None),
        "sm4e" => m("vsm4eq_u32", "", None),
        "sm4ekey" => m("vsm4ekeyq_u32", "", None),
        _ => None,
    }
}

/// The ACLE spelling of a NEON user op: its name, the user-op inputs it prints
/// (0-based, after the user-op id), and the element type and lane bytes of its
/// vectors (`None` for the fixed-name crypto ops).
///
/// `sizes` are the byte sizes of the user op's inputs, `consts` their values when
/// they are constants, and `out` the size of its result.
/// The element size is that trailing constant (dropped from the arguments); a
/// user op without one (the scalar forms) keeps its SLEIGH name.
pub fn userop_name(
    name: &str,
    sizes: &[i32],
    consts: &[Option<u64>],
    out: i32,
) -> Option<(String, Vec<usize>, Option<(Elem, u32)>)> {
    let last_const = consts.last().copied().flatten();
    if name == "a64_TBL" {
        // a64_TBL(tblx, tables..., index): TBL when tblx is the constant 0, TBX
        // (which keeps out-of-range lanes of tblx) otherwise.
        let n = sizes.len().checked_sub(2)?;
        if !(1..=4).contains(&n) || !matches!(out, 8 | 16) {
            return None;
        }
        let q = if out == 16 { "q" } else { "" };
        if consts.first().copied().flatten() == Some(0) {
            let tables: Vec<usize> = (1..=n + 1).collect();
            return Some((format!("vqtbl{n}{q}_u8"), tables, Some((Elem::U, 1))));
        }
        let all: Vec<usize> = (0..=n + 1).collect();
        return Some((format!("vqtbx{n}{q}_u8"), all, Some((Elem::U, 1))));
    }
    let mnemonic = name.strip_prefix("NEON_")?;
    if let Some(n) = narrow_or_wide(mnemonic, sizes, consts) {
        return Some(n);
    }
    let m = map(mnemonic)?;
    let Some(elem) = m.elem else {
        if !matches!(out, 4 | 8 | 16) {
            return None;
        }
        // `Rd = NEON_aesmc(Rd, Rn)`: the single-operand forms pass the
        // destination as their first input, which the instruction never reads.
        let args = if matches!(mnemonic, "aesmc" | "aesimc") && sizes.len() == 2 {
            vec![1]
        } else {
            (0..sizes.len()).collect()
        };
        return Some((m.stem.to_string(), args, None));
    };
    let lane = u32::try_from(last_const?).ok()?;
    if !matches!(lane, 1 | 2 | 4 | 8) || sizes.len() < 2 || sizes.last() != Some(&1) {
        return None;
    }
    let width = sizes[0];
    let q = match width {
        8 => "",
        16 if m.stem.ends_with("_high") => "",
        16 => "q",
        _ => return None,
    };
    if elem == Elem::F && lane == 1 {
        return None;
    }
    let args: Vec<usize> = (0..sizes.len() - 1).collect();
    Some((
        format!("{}{q}{}_{}{}", m.stem, m.post, elem.letter(), lane * 8),
        args,
        Some((elem, lane)),
    ))
}

/// (kuna `neonintrin`) Print AArch64 Advanced SIMD as ACLE NEON intrinsics on the
/// ACLE vector types (`on`), and also re-fuse lane-wise arithmetic and scalar
/// duplicates into one intrinsic (`all`). A function's context holds it resolved
/// against the image (AArch64 only).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct NeonIntrin {
    pub on: bool,
    pub fuse: bool,
}

impl crate::optionset::KunaOption for NeonIntrin {
    const NAME: &'static str = "neonintrin";
    crate::kuna_option_id!();

    fn unset() -> Self {
        NeonIntrin {
            on: false,
            fuse: false,
        }
    }

    fn shipped() -> Self {
        NeonIntrin {
            on: true,
            fuse: false,
        }
    }

    fn parse(value: &str) -> unlace_base::error::KunaResult<(Self, String)> {
        let (on, fuse) = match value.trim().to_ascii_lowercase().as_str() {
            "all" => (true, true),
            _ => (crate::options::on_or_off(value)?, false),
        };
        let state = match (on, fuse) {
            (_, true) => "all",
            (true, _) => "on",
            _ => "off",
        };
        Ok((
            NeonIntrin { on, fuse },
            format!("ACLE NEON intrinsics turned {state}"),
        ))
    }
}

/// The narrowing (`sqxtun`, `rshrn`, `raddhn`, ...) and widening (`umull`,
/// `sqdmull`, `uaddlv`) user ops. Their element-size immediate is the source's,
/// which is the type ACLE names them by; the `2` forms are the `_high`
/// intrinsics. A narrowing op's first input is its destination register, which
/// only the `2` form reads (it keeps the low half).
fn narrow_or_wide(
    mnemonic: &str,
    sizes: &[i32],
    consts: &[Option<u64>],
) -> Option<(String, Vec<usize>, Option<(Elem, u32)>)> {
    use Elem::*;
    let (base, high) = match mnemonic.strip_suffix('2') {
        Some(b) => (b, true),
        None => (mnemonic, false),
    };
    let (stem, post, elem, narrow) = match base {
        "sqxtun" => ("vqmovun", "", S, true),
        "sqxtn" => ("vqmovn", "", S, true),
        "uqxtn" => ("vqmovn", "", U, true),
        "xtn" => ("vmovn", "", S, true),
        "shrn" => ("vshrn", "_n", S, true),
        "rshrn" => ("vrshrn", "_n", S, true),
        "sqshrn" => ("vqshrn", "_n", S, true),
        "uqshrn" => ("vqshrn", "_n", U, true),
        "sqrshrn" => ("vqrshrn", "_n", S, true),
        "uqrshrn" => ("vqrshrn", "_n", U, true),
        "sqshrun" => ("vqshrun", "_n", S, true),
        "sqrshrun" => ("vqrshrun", "_n", S, true),
        "addhn" => ("vaddhn", "", S, true),
        "raddhn" => ("vraddhn", "", S, true),
        "subhn" => ("vsubhn", "", S, true),
        "rsubhn" => ("vrsubhn", "", S, true),
        "umull" => ("vmull", "", U, false),
        "smull" => ("vmull", "", S, false),
        "sqdmull" => ("vqdmull", "", S, false),
        "uaddlv" if !high => ("vaddlv", "", U, false),
        "saddlv" if !high => ("vaddlv", "", S, false),
        _ => return None,
    };
    let lane = u32::try_from(consts.last().copied().flatten()?).ok()?;
    if !matches!(lane, 1 | 2 | 4 | 8) || sizes.last() != Some(&1) {
        return None;
    }
    let last = sizes.len() - 1;
    let args: Vec<usize> = if narrow && !high {
        (1..last).collect()
    } else {
        (0..last).collect()
    };
    let src = sizes[if narrow { 1 } else { 0 }];
    let q = match (base, src) {
        ("uaddlv" | "saddlv", 16) => "q",
        _ => "",
    };
    let high = if high { "_high" } else { "" };
    Some((
        format!("{stem}{q}{high}{post}_{}{}", elem.letter(), lane * 8),
        args,
        Some((elem, lane)),
    ))
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn names() {
        assert_eq!(
            fused_name("add", false, 4, 16).map(|x| x.0).as_deref(),
            Some("vaddq_s32")
        );
        assert_eq!(
            fused_name("add", true, 4, 8).map(|x| x.0).as_deref(),
            Some("vadd_f32")
        );
        assert_eq!(
            fused_name("eor", false, 8, 16).map(|x| x.0).as_deref(),
            Some("veorq_u64")
        );
        assert_eq!(fused_name("div", false, 4, 16), None);
        assert_eq!(
            userop_name("NEON_smax", &[16, 16, 1], &[None, None, Some(4)], 16),
            Some(("vmaxq_s32".into(), vec![0, 1], Some((Elem::S, 4))))
        );
        assert_eq!(
            userop_name("NEON_urshr", &[8, 1, 1], &[None, Some(3), Some(2)], 8)
                .map(|x| x.0)
                .as_deref(),
            Some("vrshr_n_u16")
        );
        assert_eq!(
            userop_name("NEON_aese", &[16, 16], &[None, None], 16)
                .map(|x| x.0)
                .as_deref(),
            Some("vaeseq_u8")
        );
        assert_eq!(
            userop_name("a64_TBL", &[16, 16, 16], &[Some(0), None, None], 16).map(|x| (x.0, x.1)),
            Some(("vqtbl1q_u8".into(), vec![1, 2]))
        );
        assert_eq!(userop_name("NEON_sqadd", &[4, 4], &[None, None], 4), None);
        assert_eq!(
            vector_type_name(16, Elem::S, 4).as_deref(),
            Some("int32x4_t")
        );
        assert_eq!(
            vector_type_name(8, Elem::U, 1).as_deref(),
            Some("uint8x8_t")
        );
        assert_eq!(decode_kind(kind_code(Elem::F, 8)), Some((Elem::F, 8)));
        assert_eq!(userop_kind("vaddq_s32"), Some(kind_code(Elem::S, 4)));
        assert_eq!(userop_kind("NEON_umax"), Some(variable_kind_code(Elem::U)));
        assert_eq!(userop_kind("NEON_aese"), Some(kind_code(Elem::U, 1)));
        assert_eq!(userop_kind("_mm_add_ps"), None);
        assert_eq!(
            lane_getter("int32x4_t", 4, 4),
            Some(("vgetq_lane_s32".into(), 1))
        );
        assert_eq!(
            lane_getter("uint8x8_t", 3, 1),
            Some(("vget_lane_u8".into(), 3))
        );
        assert_eq!(lane_getter("int32x4_t", 4, 8), None);
        assert_eq!(
            userop_name(
                "NEON_rshrn2",
                &[16, 16, 1, 1],
                &[None, None, Some(8), Some(2)],
                16
            )
            .map(|x| (x.0, x.1)),
            Some(("vrshrn_high_n_s16".into(), vec![0, 1, 2]))
        );
        assert_eq!(
            userop_name("NEON_umull", &[8, 8, 1], &[None, None, Some(4)], 16).map(|x| (x.0, x.1)),
            Some(("vmull_u32".into(), vec![0, 1]))
        );
        assert_eq!(
            userop_name(
                "NEON_raddhn",
                &[8, 16, 16, 1],
                &[None, None, None, Some(8)],
                8
            )
            .map(|x| (x.0, x.1)),
            Some(("vraddhn_s64".into(), vec![1, 2]))
        );
    }
}
