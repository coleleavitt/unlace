//! Itanium C++ ABI demangler — minimal but correct for common patterns.
//!
//! Implements a subset of the Itanium mangling grammar:
//! - Function names: `_ZN<nested><suffix>` → `class::method`
//! - Length-prefixed identifiers: `5Class` → `Class`
//! - Basic builtin types: `v`/`i`/`l`/`f`/`d` → `void`/`int`/`long`/`float`/`double`
//! - Pointers and references: `P<T>` → `T*`, `R<T>` → `T&`
//! - Qualifiers: `K<T>` → `const T`
//! - Constructors/destructors: `C1`, `D1` etc.
//!
//! Spec: https://itanium-cxx-abi.github.io/cxx-abi/abi.html#mangling

/// Demangle an Itanium C++ ABI mangled name.
///
/// Returns the demangled string, or `None` if the input doesn't look like
/// a mangled C++ name (e.g., plain C identifiers).
pub fn demangle_itanium(s: &str) -> Option<String> {
    if !s.starts_with("_Z") {
        return None;
    }
    let mut p = Parser::new(&s[2..]);
    p.parse_mangled_name()
}

struct Parser<'a> {
    bytes: &'a [u8],
    pos: usize,
}

impl<'a> Parser<'a> {
    fn new(s: &'a str) -> Self {
        Self {
            bytes: s.as_bytes(),
            pos: 0,
        }
    }

    fn peek(&self) -> Option<u8> {
        self.bytes.get(self.pos).copied()
    }

    fn advance(&mut self) {
        self.pos += 1;
    }

    fn parse_mangled_name(&mut self) -> Option<String> {
        // <mangled-name> ::= _Z <encoding>
        // <encoding> ::= <function name> <bare-function-type>
        //              | <data name>
        //              | <special-name>
        let name = if self.peek() == Some(b'N') {
            self.advance();
            self.parse_nested_name()?
        } else {
            self.parse_unqualified_name()?
        };

        // Skip the rest (params) — we don't reproduce the full signature.
        // Just append `()` for typical function names.
        if self.peek().is_some() {
            // Try to parse a parameter list for readability.
            let mut params = Vec::new();
            while self.peek().is_some() && self.peek() != Some(b'E') {
                if let Some(t) = self.parse_type() {
                    params.push(t);
                } else {
                    break;
                }
            }
            if params.is_empty() {
                Some(format!("{name}()"))
            } else {
                Some(format!("{name}({})", params.join(", ")))
            }
        } else {
            Some(name)
        }
    }

    fn parse_nested_name(&mut self) -> Option<String> {
        // <nested-name> ::= N [<CV-qualifiers>] <prefix> <unqualified-name> E
        let mut components: Vec<String> = Vec::new();
        let mut const_qual = false;

        // CV qualifiers (optional).
        while let Some(c) = self.peek() {
            if c == b'K' {
                const_qual = true;
                self.advance();
            } else if c == b'V' {
                self.advance(); // volatile
            } else if c == b'r' {
                self.advance(); // restrict
            } else {
                break;
            }
        }

        while let Some(c) = self.peek() {
            if c == b'E' {
                self.advance();
                break;
            }
            // Special: C1/C2/C3 = ctor; D0/D1/D2 = dtor.
            if c == b'C' {
                self.advance();
                if let Some(_kind) = self.peek() {
                    self.advance();
                }
                if let Some(last) = components.last().cloned() {
                    components.push(last);
                } else {
                    components.push("<ctor>".to_string());
                }
                continue;
            }
            if c == b'D' {
                self.advance();
                if let Some(_kind) = self.peek() {
                    self.advance();
                }
                if let Some(last) = components.last().cloned() {
                    components.push(format!("~{last}"));
                } else {
                    components.push("<dtor>".to_string());
                }
                continue;
            }
            // Otherwise must be a length-prefixed identifier.
            let comp = self.parse_unqualified_name()?;
            components.push(comp);
        }

        let mut result = components.join("::");
        if const_qual {
            result = format!("{result} const");
        }
        Some(result)
    }

    fn parse_unqualified_name(&mut self) -> Option<String> {
        // Length-prefixed: digit+ then that many bytes of identifier.
        let len = self.parse_length()?;
        let start = self.pos;
        let end = start + len;
        if end > self.bytes.len() {
            return None;
        }
        let ident = std::str::from_utf8(&self.bytes[start..end]).ok()?;
        self.pos = end;
        Some(ident.to_string())
    }

    fn parse_length(&mut self) -> Option<usize> {
        let start = self.pos;
        while let Some(c) = self.peek() {
            if c.is_ascii_digit() {
                self.advance();
            } else {
                break;
            }
        }
        if self.pos == start {
            return None;
        }
        let s = std::str::from_utf8(&self.bytes[start..self.pos]).ok()?;
        s.parse().ok()
    }

    fn parse_type(&mut self) -> Option<String> {
        let c = self.peek()?;
        match c {
            b'v' => {
                self.advance();
                Some("void".to_string())
            }
            b'b' => {
                self.advance();
                Some("bool".to_string())
            }
            b'c' => {
                self.advance();
                Some("char".to_string())
            }
            b's' => {
                self.advance();
                Some("short".to_string())
            }
            b'i' => {
                self.advance();
                Some("int".to_string())
            }
            b'l' => {
                self.advance();
                Some("long".to_string())
            }
            b'x' => {
                self.advance();
                Some("long long".to_string())
            }
            b'f' => {
                self.advance();
                Some("float".to_string())
            }
            b'd' => {
                self.advance();
                Some("double".to_string())
            }
            b'e' => {
                self.advance();
                Some("long double".to_string())
            }
            b'P' => {
                self.advance();
                let inner = self.parse_type()?;
                Some(format!("{inner}*"))
            }
            b'R' => {
                self.advance();
                let inner = self.parse_type()?;
                Some(format!("{inner}&"))
            }
            b'K' => {
                self.advance();
                let inner = self.parse_type()?;
                Some(format!("const {inner}"))
            }
            b'N' => {
                self.advance();
                self.parse_nested_name()
            }
            c if c.is_ascii_digit() => self.parse_unqualified_name(),
            _ => None,
        }
    }
}

// ---------------------------------------------------------------------------
// vtable header recognition
// ---------------------------------------------------------------------------

/// Result of identifying a vtable header in memory.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct VtableHeader {
    /// Offset-to-top from the vtable's start.
    pub offset_to_top: i64,
    /// Address of the RTTI structure.
    pub rtti_ptr: u64,
}

/// Try to read a vtable header from a slice of pointer-sized values.
///
/// Itanium vtable layout: `[offset-to-top, RTTI-ptr, virtual-fn-0, ...]`.
/// `slots` is the array of pointer-sized words read from .rodata.
pub fn read_vtable_header(slots: &[u64]) -> Option<VtableHeader> {
    if slots.len() < 2 {
        return None;
    }
    let offset_to_top = slots[0] as i64;
    let rtti_ptr = slots[1];

    // Heuristic: offset-to-top is usually 0 for primary vtables, negative
    // for non-primary. RTTI is a non-null pointer.
    if rtti_ptr == 0 {
        return None;
    }
    // Offset-to-top should be small in magnitude.
    if offset_to_top.unsigned_abs() > 0x10_0000 {
        return None;
    }

    Some(VtableHeader {
        offset_to_top,
        rtti_ptr,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_itanium_demangle_simple_function() {
        // _Z3fooi → foo(int)
        let r = demangle_itanium("_Z3fooi");
        assert_eq!(r, Some("foo(int)".to_string()));
    }

    #[test]
    fn test_itanium_demangle_nested_method() {
        // _ZN5Class6methodEv → Class::method(void) or Class::method()
        let r = demangle_itanium("_ZN5Class6methodEv");
        assert_eq!(r, Some("Class::method(void)".to_string()));
    }

    #[test]
    fn test_itanium_demangle_void_no_args() {
        // _Z3fooi takes one int, but _Z3foov takes void.
        let r = demangle_itanium("_Z3foov");
        assert_eq!(r, Some("foo(void)".to_string()));
    }

    #[test]
    fn test_itanium_demangle_pointer_arg() {
        // _Z3fooPi → foo(int*)
        let r = demangle_itanium("_Z3fooPi");
        assert_eq!(r, Some("foo(int*)".to_string()));
    }

    #[test]
    fn test_itanium_demangle_const_pointer() {
        // _Z3fooPKc → foo(const char*)
        let r = demangle_itanium("_Z3fooPKc");
        assert_eq!(r, Some("foo(const char*)".to_string()));
    }

    #[test]
    fn test_itanium_demangle_not_mangled() {
        let r = demangle_itanium("main");
        assert_eq!(r, None);
    }

    #[test]
    fn test_itanium_demangle_namespace() {
        // _ZN3std3fooEi → std::foo(int)
        let r = demangle_itanium("_ZN3std3fooEi");
        assert_eq!(r, Some("std::foo(int)".to_string()));
    }

    #[test]
    fn test_vtable_header_valid() {
        let slots = [0u64, 0x401000];
        let h = read_vtable_header(&slots).unwrap();
        assert_eq!(h.offset_to_top, 0);
        assert_eq!(h.rtti_ptr, 0x401000);
    }

    #[test]
    fn test_vtable_header_rejects_null_rtti() {
        let slots = [0u64, 0];
        assert!(read_vtable_header(&slots).is_none());
    }

    #[test]
    fn test_vtable_header_rejects_huge_offset() {
        let slots = [0xDEADBEEFCAFEBABE_u64, 0x401000];
        assert!(read_vtable_header(&slots).is_none());
    }

    #[test]
    fn test_vtable_header_negative_offset_to_top() {
        let slots = [(-8i64) as u64, 0x401000];
        let h = read_vtable_header(&slots).unwrap();
        assert_eq!(h.offset_to_top, -8);
    }
}
