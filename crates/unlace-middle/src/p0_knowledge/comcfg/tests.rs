use super::ComCfg;

#[test]
fn a_value_is_off_or_an_existing_file() {
    assert_eq!(ComCfg::parse("off"), Ok(ComCfg(None)));
    assert_eq!(ComCfg::parse(" OFF "), Ok(ComCfg(None)));
    assert!(ComCfg::parse("/nonexistent/clsid.cfg").is_err());
    let exe = std::env::current_exe().unwrap();
    let got = ComCfg::parse(exe.to_str().unwrap()).unwrap();
    assert_eq!(got.0.as_deref(), Some(exe.as_path()));
    assert_eq!(got.as_str(), exe.display().to_string());
}
