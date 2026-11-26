use super::*;

#[test]
fn the_slowest_known_files_go_first_and_unknown_ones_before_them() {
    let files: Vec<String> = ["a", "b", "c", "d"].map(String::from).to_vec();
    let known = std::collections::BTreeMap::from([("a".to_string(), 1.0), ("c".to_string(), 9.0)]);
    assert_eq!(longest_first(&files, &known), [1, 3, 2, 0]);
}

#[test]
fn a_run_round_trips_through_its_result_file() {
    let run = FileRun {
        file: "a.toml".into(),
        output: "Success -- x\nFAIL -- y\n".into(),
        failures: vec![
            "y".into(),
            "Execution failed for a.toml\nwith a newline".into(),
        ],
        applied: 2,
        succeeded: 1,
        wall_ms: 0,
    };
    let back = decode("a.toml", &encode(&run)).unwrap();
    assert_eq!(
        (back.output, back.failures, back.applied, back.succeeded),
        (run.output, run.failures, run.applied, run.succeeded)
    );
    assert!(decode("a.toml", b"1 1 3\n2\nab").is_none());
}
