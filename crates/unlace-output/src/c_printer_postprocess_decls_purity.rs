pub(in crate::c_printer) fn is_side_effect_free_temp_initializer(init: &str) -> bool {
    let init = init.trim();
    if init.contains("sub_") || init.contains("->") || init.contains('[') || init.contains(']') {
        return false;
    }

    let mut rest = init;
    while let Some(paren) = rest.find('(') {
        let before = rest[..paren].trim_end();
        let ident_start = before
            .rfind(|c: char| !(c == '_' || c.is_ascii_alphanumeric()))
            .map_or(0, |idx| idx + 1);
        let ident = &before[ident_start..];
        if ident.is_empty() {
            rest = &rest[paren + 1..];
            continue;
        }
        if !is_known_pure_macro_call(ident) {
            return false;
        }
        rest = &rest[paren + 1..];
    }
    true
}

pub(in crate::c_printer) fn is_known_pure_macro_call(name: &str) -> bool {
    matches!(
        name,
        "LOBYTE"
            | "BYTE1"
            | "BYTE2"
            | "BYTE3"
            | "LOWORD"
            | "HIWORD"
            | "LODWORD"
            | "HIDWORD"
            | "__OFADD__"
            | "__OFSUB__"
            // Compiler builtins that lower to a single pure instruction (POPCNT/LZCNT/TZCNT)
            // are side-effect-free and safe to drop when their result is unused. Without
            // this, x86 flag-recovery temps like `_BOOL cond = !(__builtin_popcount(x) & 1)`
            // (PF) leak into every function with a comparison.
            | "__builtin_popcount"
            | "__builtin_popcountl"
            | "__builtin_popcountll"
            | "__builtin_clz"
            | "__builtin_clzl"
            | "__builtin_clzll"
            | "__builtin_ctz"
            | "__builtin_ctzl"
            | "__builtin_ctzll"
            | "__builtin_parity"
            | "__builtin_parityl"
            | "__builtin_parityll"
            | "__builtin_bswap16"
            | "__builtin_bswap32"
            | "__builtin_bswap64"
    )
}
