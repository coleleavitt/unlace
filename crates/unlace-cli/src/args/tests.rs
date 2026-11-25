use super::*;

/// A `kernelcache` value is refused before it can reach a console script,
/// which would read only its first word.
#[test]
fn kernelcache_values_are_checked_whole() {
    let argv = |v: &str| ["--option", "kernelcache", v].map(String::from).to_vec();
    let mut i = 0;
    assert!(
        take_option(&argv("two words"), &mut i)
            .unwrap_err()
            .contains("kernelcache")
    );
    let mut i = 0;
    assert_eq!(
        take_option(&argv("IOSurface"), &mut i).unwrap().1,
        "IOSurface"
    );
}
