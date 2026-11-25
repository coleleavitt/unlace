use super::*;

#[test]
fn classifies_the_roster() {
    assert_eq!(
        classify_anti_debug("IsDebuggerPresent"),
        Some(AntiDebugKind::DebuggerCheck)
    );
    assert_eq!(
        classify_anti_debug("ptrace"),
        Some(AntiDebugKind::PtraceSelf)
    );
    assert_eq!(
        classify_anti_debug("QueryPerformanceCounter"),
        Some(AntiDebugKind::TimingCheck)
    );
    assert_eq!(
        classify_anti_debug("OutputDebugStringA"),
        Some(AntiDebugKind::OutputDebug)
    );
}

#[test]
fn ignores_benign_and_near_miss_names() {
    assert_eq!(classify_anti_debug("malloc"), None);
    assert_eq!(classify_anti_debug("ptrace_detach"), None);
    assert_eq!(classify_anti_debug("isdebuggerpresent"), None);
}

#[test]
fn option_values_parse() {
    let (mode, _) = OptionAntiDebug.apply("warn").expect("warn parses");
    assert_eq!(mode, AntiDebugMode::Warn);
    assert!(mode.warns());
    let (off, _) = OptionAntiDebug.apply("off").expect("off parses");
    assert!(!off.warns());
    assert!(OptionAntiDebug.apply("halt").is_err());
}

#[test]
fn warning_names_the_probe() {
    assert_eq!(
        warning_text(AntiDebugKind::DebuggerCheck, "IsDebuggerPresent"),
        "anti-debug probe: IsDebuggerPresent (debugger check)"
    );
}
