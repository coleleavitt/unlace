use super::*;

#[test]
fn the_embedded_skill_names_itself() {
    assert_eq!(
        BODY.lines().next().map(str::trim),
        Some("---"),
        "SKILL.md lost its frontmatter"
    );
    assert_eq!(skill_name(), "unlace-decompiler");
}
