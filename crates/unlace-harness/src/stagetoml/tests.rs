use super::*;

const SAMPLE: &str = r#"
[image]
arch = "8051:BE:16:default"

[script]
commands = ["quit"]

[[match]]
name = "a literal"
count = 1
literal = "P1 = 2;"
"#;

#[test]
fn a_computed_count_reads_the_compiled_catalog() {
    let all = SAMPLE.replace("count = 1", "count = { settables = {}, plus = 3 }");
    let t = parse(&all).unwrap();
    let n = i32::try_from(unlace_num_settables()).unwrap() + 3;
    assert_eq!((t.matches[0].min, t.matches[0].max), (n, n));
    let core = SAMPLE.replace("count = 1", "count = { settables = { tier = \"core\" } }");
    let core = parse(&core).unwrap().matches[0].min;
    assert!(0 < core && core < n, "{core}");
    let bad = SAMPLE.replace("count = 1", "count = { settables = { colour = \"red\" } }");
    assert!(
        parse(&bad)
            .unwrap_err()
            .contains("no catalog field `colour`")
    );
}
