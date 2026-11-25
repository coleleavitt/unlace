use super::*;

#[test]
fn crossrefs_default_on_and_off_tokens() {
    for off in ["off", "0", "false"] {
        assert!(
            !crate::options::parse_env_toggle(off, true),
            "`{off}` disables"
        );
    }
    for on in ["on", "1", "true", "", "anything"] {
        assert!(
            crate::options::parse_env_toggle(on, true),
            "`{on}` keeps it on"
        );
    }
}

#[test]
fn none_and_empty_name_no_image() {
    assert_eq!(image_name(" CoreFoundation "), Some("CoreFoundation"));
    assert_eq!(image_name("none"), None);
    assert_eq!(image_name("  "), None);
    let mut options = crate::loadoptions::LoadOptions::default();
    assert!(
        set_option(&mut options, "dyldcrossrefs", "maybe")
            .unwrap()
            .is_err()
    );
    assert!(set_option(&mut options, "dynrelocs", "on").is_none());
    set_option(&mut options, "dyldimage", "libfoo.dylib")
        .unwrap()
        .unwrap();
    assert_eq!(options.dyldimage.as_deref(), Some("libfoo.dylib"));
}
