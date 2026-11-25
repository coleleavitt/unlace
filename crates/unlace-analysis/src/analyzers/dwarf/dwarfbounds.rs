//! Constant DWARF subranges use both bounds and the compilation unit's origin.
use super::Reader;

fn integer(value: gimli::AttributeValue<Reader<'_>>) -> Option<i128> {
    match value {
        gimli::AttributeValue::Sdata(value) => Some(i128::from(value)),
        value => value.udata_value().map(i128::from),
    }
}

pub(super) fn array_count(
    count: Option<gimli::AttributeValue<Reader<'_>>>,
    lower: Option<gimli::AttributeValue<Reader<'_>>>,
    upper: Option<gimli::AttributeValue<Reader<'_>>>,
    language: Option<gimli::DwLang>,
) -> Option<u64> {
    if let Some(count) = count {
        return integer(count).and_then(|value| u64::try_from(value).ok());
    }
    let lower = match lower {
        Some(value) => integer(value)?,
        None => match language {
            Some(gimli::DW_LANG_Fortran18 | gimli::DW_LANG_Ada2005 | gimli::DW_LANG_Ada2012) => 1,
            Some(value) => value.default_lower_bound().unwrap_or(0) as i128,
            None => 0,
        },
    };
    let upper = integer(upper?)?;
    u64::try_from(upper - lower + 1).ok()
}

#[cfg(test)]
mod tests;
