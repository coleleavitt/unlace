//! Regression gate for loop-latch operand rebasing in the C printer.
//!
//! `array_mix` in `type_stack_o2.elf` (`-O2`) increments its counter in the
//! loop body and compares the updated counter in the latch. The printer once
//! rebased the latch operand onto the increment expression even though the
//! body had already overwritten the counter, emitting
//! `} while (v16 != result_0 + 1LL);` and running one iteration short.

use std::process::Command;

fn decompile_function(fixture: &str, function: &str) -> String {
    let path = format!("{}/../../fixtures/{fixture}", env!("CARGO_MANIFEST_DIR"));
    let output = Command::new(env!("CARGO_BIN_EXE_unlace"))
        .env_remove("RUST_LOG")
        .args(["decompile", "--emit", "c", "--function", function])
        .arg(&path)
        .output()
        .unwrap_or_else(|e| panic!("failed to run unlace on {fixture}: {e}"));
    assert!(
        output.status.success(),
        "decompile of {fixture}:{function} failed: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    String::from_utf8_lossy(&output.stdout).into_owned()
}

#[test]
fn array_mix_latch_compares_updated_counter() {
    let c = decompile_function("type_stack_o2.elf", "array_mix");
    let latch = c
        .lines()
        .map(str::trim)
        .find(|line| line.starts_with("} while ("))
        .unwrap_or_else(|| panic!("array_mix should keep its do/while latch:\n{c}"));
    // The printer may pack several short statements onto one line.
    let counter = c
        .lines()
        .flat_map(|line| line.split(';'))
        .map(str::trim)
        .find_map(|statement| statement.strip_prefix("++"))
        .unwrap_or_else(|| panic!("array_mix should emit its counter increment:\n{c}"));
    let increment = format!("{counter} + 1");
    assert!(
        !latch.contains(&increment),
        "latch re-applies the body increment `{increment}`: {latch}\n{c}"
    );
}
