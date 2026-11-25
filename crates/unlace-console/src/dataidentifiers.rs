//! Opt-in, collision-safe C identifiers for imported data names.
use std::borrow::Cow;
use std::collections::{HashMap, HashSet};

pub(crate) struct Names {
    enabled: bool,
    reserved: HashSet<String>,
    assigned: HashMap<(String, u64), String>,
}

impl Names {
    pub(crate) fn new(names: impl IntoIterator<Item = String>, enabled: bool) -> Self {
        Self {
            enabled,
            reserved: if enabled {
                names.into_iter().collect()
            } else {
                HashSet::new()
            },
            assigned: HashMap::new(),
        }
    }

    pub(crate) fn name<'a>(&mut self, original: &'a str, address: u64) -> Cow<'a, str> {
        let base = basename(original);
        if !self.enabled || !invalid(base) {
            return Cow::Borrowed(original);
        }
        let key = (original.to_string(), address);
        if let Some(name) = self.assigned.get(&key) {
            return Cow::Owned(name.clone());
        }
        let mut stem: String = base
            .chars()
            .map(|c| {
                if c == '_' || unicode_ident::is_xid_continue(c) {
                    c
                } else {
                    '_'
                }
            })
            .collect();
        if stem.trim_matches('_').is_empty() {
            stem = format!("unlace_global_{address:x}");
        } else {
            if !stem
                .chars()
                .next()
                .is_some_and(|c| c == '_' || unicode_ident::is_xid_start(c))
            {
                stem.insert(0, '_');
            }
            if invalid(&stem) {
                stem.push('_');
            }
        }
        let qualify = |name: &str| match original.rsplit_once("::") {
            Some((scope, _)) => format!("{scope}::{name}"),
            None => name.to_string(),
        };
        let mut qualified = qualify(&stem);
        let mut suffix = 0;
        while !self.reserved.insert(qualified.clone()) {
            suffix += 1;
            qualified = qualify(&format!("{stem}_{suffix}"));
        }
        self.assigned.insert(key, qualified.clone());
        Cow::Owned(qualified)
    }
}

fn basename(name: &str) -> &str {
    name.rsplit("::").next().unwrap_or(name)
}

fn invalid(name: &str) -> bool {
    name.is_empty()
        || !name
            .chars()
            .next()
            .is_some_and(|c| c == '_' || unicode_ident::is_xid_start(c))
        || name.chars().any(|c| !unicode_ident::is_xid_continue(c))
        || matches!(
            name,
            "auto"
                | "break"
                | "case"
                | "char"
                | "const"
                | "continue"
                | "default"
                | "do"
                | "double"
                | "else"
                | "enum"
                | "extern"
                | "float"
                | "for"
                | "goto"
                | "if"
                | "inline"
                | "int"
                | "long"
                | "register"
                | "restrict"
                | "return"
                | "short"
                | "signed"
                | "sizeof"
                | "static"
                | "struct"
                | "switch"
                | "typedef"
                | "union"
                | "unsigned"
                | "void"
                | "volatile"
                | "while"
                | "_Alignas"
                | "_Alignof"
                | "_Atomic"
                | "_Bool"
                | "_Complex"
                | "_Generic"
                | "_Imaginary"
                | "_Noreturn"
                | "_Static_assert"
                | "_Thread_local"
                | "bool"
                | "true"
                | "false"
                | "asm"
                | "__asm__"
                | "typeof"
                | "__typeof__"
        )
}

#[cfg(test)]
mod tests;
