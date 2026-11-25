use super::*;

#[test]
fn va_list_functions_by_family() {
    for name in [
        "vfprintf",
        "vprintf",
        "vsnprintf",
        "__vfprintf_chk",
        "__vsnprintf_chk",
        "vasprintf",
        "vsyslog",
    ] {
        assert_eq!(va_list_family(name), Some(true), "{name}");
    }
    for name in ["vsscanf", "__isoc99_vsscanf", "__isoc23_vfscanf", "vscanf"] {
        assert_eq!(va_list_family(name), Some(false), "{name}");
    }
    for name in ["printf", "vfwprintf", "vswprintf", "verify", "fprintf"] {
        assert_eq!(va_list_family(name), None, "{name}");
    }
}

#[test]
fn named_format_functions_exclude_va_list_and_wide_forms() {
    assert_eq!(named_family("g_strdup_printf"), Some(true));
    assert_eq!(named_family("my_sscanf"), Some(false));
    assert_eq!(named_family("g_strdup_vprintf"), None);
    assert_eq!(named_family("vfprintf"), None);
    assert_eq!(named_family("swprintf"), None);
    assert_eq!(named_family("log_msg"), None);
}
