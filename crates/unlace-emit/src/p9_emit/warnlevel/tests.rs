use super::*;

#[test]
fn apply_parses_caveats_and_all() {
    let (caveats, msg) = OptionWarnLevel.apply("caveats").unwrap();
    assert!(caveats);
    assert_eq!(msg, "Warning level set to caveats");
    let (caveats, msg) = OptionWarnLevel.apply("all").unwrap();
    assert!(!caveats);
    assert_eq!(msg, "Warning level set to all");
    assert!(OptionWarnLevel.apply("quiet").is_err());
    assert_eq!(OptionWarnLevel::NAME, "warnlevel");
}

fn kind(text: &str) -> String {
    Warning::new(Some(0x1000), text).kind()
}

#[test]
fn rewrite_warnings_are_narration() {
    for text in [
        "WARNING: branchflip: flipped negated guard for linearity (positive condition, if/else arms swapped)",
        "WARNING: tailcalljump: recovered tail call -> introduced call to 0x1640",
        "WARNING: taildup: duplicated return-call tail to remove goto",
        "WARNING: crossjumprevert: duplicated cross-jump tail to remove goto",
        "WARNING: returndup: duplicated 2 shared bare-epilogue return(s) for early-return recovery in f",
        "WARNING: earlyreturn: hoisted 3 const-guard early-return(s) in f",
        "WARNING: switchreturn: hoisted 2 const-case return(s) in f",
        "WARNING: dedupitetail: merged 1 duplicated if/else tail(s) in f",
        "WARNING: iteregion: rewrote 4 if/else assignment diamond(s) to ?: ternary in f",
        "WARNING: ifelseflatten: dropped 1 else-arm(s) after a terminating if in f",
    ] {
        assert!(is_narration(&kind(text)), "{text}");
    }
}

#[test]
fn caveats_are_not_narration() {
    for text in [
        "WARNING: Subroutine does not return",
        "WARNING: Treating indirect jump as call",
        "WARNING (jumptable): Treating indirect jump as call",
        "WARNING: Treating indirect jump as return",
        "WARNING: Inlined function: add50",
        "WARNING: Could not inline here",
        "WARNING: int3pad: flow enters a debug-trap pad of 4 bytes",
        "WARNING: Could not recover jumptable at 0x1000. Too many branches",
        "WARNING: something novel happened",
    ] {
        assert!(!is_narration(&kind(text)), "{text}");
    }
}
