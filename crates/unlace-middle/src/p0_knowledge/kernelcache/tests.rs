use super::*;

#[test]
fn parses_auto_off_and_entry_ids() {
    assert_eq!(KernelcacheChoice::parse(""), Some(KernelcacheChoice::Auto));
    assert_eq!(
        KernelcacheChoice::parse(" ON "),
        Some(KernelcacheChoice::Auto)
    );
    assert_eq!(
        KernelcacheChoice::parse("Off"),
        Some(KernelcacheChoice::Off)
    );
    assert_eq!(
        KernelcacheChoice::parse("com.apple.iokit.IOSurface"),
        Some(KernelcacheChoice::Entry("com.apple.iokit.IOSurface".into()))
    );
    assert_eq!(KernelcacheChoice::parse("two words"), None);
    assert!(parse_kernelcache("a\tb").is_err());
}
