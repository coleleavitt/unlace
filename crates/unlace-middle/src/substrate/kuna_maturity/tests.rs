use super::*;

#[test]
fn the_levels_are_listed_in_schedule_order_with_distinct_names() {
    for pair in Maturity::ALL.windows(2) {
        assert!(pair[0] < pair[1], "{} before {}", pair[0], pair[1]);
    }
    let mut names: Vec<&str> = Maturity::ALL.iter().map(|m| m.name()).collect();
    names.sort_unstable();
    names.dedup();
    assert_eq!(names.len(), Maturity::ALL.len());
    assert_eq!(Maturity::default(), Maturity::Raw);
}

#[test]
fn every_level_above_raw_settles_exactly_one_fact() {
    for level in &Maturity::ALL[1..] {
        let facts: Vec<Fact> = Fact::ALL
            .into_iter()
            .filter(|f| f.level() == Some(*level))
            .collect();
        assert_eq!(facts.len(), 1, "{level}: {facts:?}");
    }
    assert_eq!(Fact::Ssa.level(), None);
    assert_eq!(Fact::HighVariables.level(), None);
}
