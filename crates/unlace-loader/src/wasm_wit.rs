//! WebAssembly Interface Types (WIT) parser for Component Model.
//!
//! Parses WIT package descriptions to extract interface definitions,
//! world imports/exports, and type declarations.

/// A WIT world definition.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct WitWorld {
    pub name: String,
    pub imports: Vec<String>,
    pub exports: Vec<String>,
}

/// A WIT package parsed from a `.wit` file or embedded in a component.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct WitPackage {
    pub namespace: String,
    pub name: String,
    pub version: Option<String>,
    pub interfaces: Vec<WitInterface>,
    pub worlds: Vec<WitWorld>,
}

/// A WIT interface definition.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct WitInterface {
    pub name: String,
    pub functions: Vec<WitFunction>,
    pub types: Vec<WitTypeDef>,
}

/// A function signature in a WIT interface.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct WitFunction {
    pub name: String,
    pub params: Vec<(String, WitType)>,
    pub results: Vec<WitType>,
}

/// A type definition in WIT.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct WitTypeDef {
    pub name: String,
    pub kind: WitTypeKind,
}

/// WIT type kinds.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum WitTypeKind {
    Record(Vec<(String, WitType)>),
    Variant(Vec<(String, Option<WitType>)>),
    Enum(Vec<String>),
    Flags(Vec<String>),
    Alias(WitType),
}

/// WIT primitive and composite types.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum WitType {
    U8,
    U16,
    U32,
    U64,
    S8,
    S16,
    S32,
    S64,
    F32,
    F64,
    Bool,
    Char,
    String_,
    List(Box<WitType>),
    Option_(Box<WitType>),
    Result_ {
        ok: Option<Box<WitType>>,
        err: Option<Box<WitType>>,
    },
    Named(String),
}

/// Parse a simplified WIT text format.
pub fn parse_wit_text(input: &str) -> Option<WitPackage> {
    let mut pkg = WitPackage::default();

    for line in input.lines() {
        let trimmed = line.trim();
        if let Some(rest) = trimmed.strip_prefix("package ") {
            let rest = rest.trim_end_matches(';');
            if let Some((ns_name, version)) = rest.split_once('@') {
                pkg.version = Some(version.to_string());
                if let Some((ns, name)) = ns_name.split_once(':') {
                    pkg.namespace = ns.to_string();
                    pkg.name = name.to_string();
                }
            } else if let Some((ns, name)) = rest.split_once(':') {
                pkg.namespace = ns.to_string();
                pkg.name = name.to_string();
            }
        } else if let Some(rest) = trimmed.strip_prefix("interface ") {
            let name = rest.trim_end_matches(" {").trim().to_string();
            pkg.interfaces.push(WitInterface {
                name,
                functions: Vec::new(),
                types: Vec::new(),
            });
        }
    }

    if pkg.namespace.is_empty() {
        return None;
    }
    Some(pkg)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_parse_wit_package() {
        let wit = "package wasi:http@0.2.0;\n\ninterface types {\n}\n\ninterface handler {\n}\n";
        let pkg = parse_wit_text(wit).unwrap();
        assert_eq!(pkg.namespace, "wasi");
        assert_eq!(pkg.name, "http");
        assert_eq!(pkg.version.as_deref(), Some("0.2.0"));
        assert_eq!(pkg.interfaces.len(), 2);
        assert_eq!(pkg.interfaces[0].name, "types");
    }

    #[test]
    fn test_no_package_returns_none() {
        assert!(parse_wit_text("// comment").is_none());
    }
}
