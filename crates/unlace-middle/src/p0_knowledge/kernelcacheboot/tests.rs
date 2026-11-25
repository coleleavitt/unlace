use super::*;

#[test]
fn parses_auto_off_and_paths() {
    assert_eq!(KernelcacheBoot::parse(""), KernelcacheBoot::Auto);
    assert_eq!(KernelcacheBoot::parse(" Auto "), KernelcacheBoot::Auto);
    assert_eq!(KernelcacheBoot::parse("OFF"), KernelcacheBoot::Off);
    let here = std::env::temp_dir();
    let (choice, _) = parse_kernelcache_boot(here.to_str().unwrap()).unwrap();
    assert_eq!(choice, KernelcacheBoot::Path(here));
    assert!(parse_kernelcache_boot("/definitely/not/here.kc").is_err());
}
