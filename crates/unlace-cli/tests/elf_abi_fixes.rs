//! ELF objects whose decompile depends on the loader: a Hexagon object, whose
//! packets lift through SLEIGH `crossbuild` (#679), and soft-float ARM objects
//! whose external functions return `float` in `r0` (#681).
use crate::common;
use common::{repo_root, run_unlace};

fn decompile(fixture: &str, function: &str) -> String {
    let path = repo_root()
        .join("crates/unlace-cli/tests/fixtures")
        .join(fixture);
    let (stdout, stderr, code) = run_unlace(&["decompile", path.to_str().unwrap(), function]);
    assert_eq!(code, 0, "{fixture} {function}: {stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(!lower.contains("crossbuild"), "{stdout}");
    stdout
}

#[test]
fn hexagon_object_decompiles_without_a_target() {
    let add = decompile("hexagon_elf/funcs.o", "add");
    assert!(add.contains("return b + a;"), "{add}");
    let pick = decompile("hexagon_elf/funcs.o", "pick");
    assert!(pick.contains("int pick(int a,int b)"), "{pick}");
    let sum = decompile("hexagon_elf/funcs.o", "sum_array");
    assert!(sum.contains("int sum_array(int *p,int n)"), "{sum}");
}

#[test]
fn arm_base_pcs_float_results_come_from_r0() {
    for object in [
        "arm_basepcs/arm.o",
        "arm_basepcs/armeb.o",
        "arm_basepcs/thumbv7m.o",
    ] {
        let scale = decompile(object, "scale");
        assert!(
            scale.contains("return v * (float)n + 0.5f;"),
            "{object}: {scale}"
        );
        let ident = decompile(object, "ident");
        assert!(ident.contains("return a;"), "{object}: {ident}");
        let dscale = decompile(object, "dscale");
        assert!(
            dscale.contains("return v * (double)n;"),
            "{object}: {dscale}"
        );
    }
}
