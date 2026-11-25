//! Package-local names for Go types in a recovered function.

#[doc(hidden)]
pub fn function_package(symbol: &str) -> Option<&str> {
    let prefix = symbol.split(['[', '(']).next()?;
    let start = prefix.rfind('/').map_or(0, |p| p + 1);
    let end = start + prefix[start..].find('.')?;
    let package = &symbol[..end];
    if end == start || package.contains([':', ' ', '\\']) {
        return None;
    }
    Some(package)
}

#[doc(hidden)]
pub fn local_type_name<'a>(package: Option<&str>, name: &'a str) -> &'a str {
    let Some(local) = package
        .and_then(|p| name.strip_prefix(p))
        .and_then(|s| s.strip_prefix('.'))
    else {
        return name;
    };
    let mut chars = local.chars();
    if !chars.next().is_some_and(|c| c == '_' || c.is_alphabetic())
        || !chars.all(|c| c == '_' || c.is_alphanumeric())
    {
        return name;
    }
    local
}

#[cfg(test)]
mod tests;
