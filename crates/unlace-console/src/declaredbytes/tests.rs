use super::*;

#[test]
fn a_transcript_warning_round_trips() {
    let sentence = "declared function rom at 0x50000 is not mapped in this input; it is kept";
    let transcript = format!(
        "[decomp]> function bounds 0x50000 as rom\nDeclared rom at 0x50000 spanning 0 bytes\n{}",
        transcript_line(sentence)
    );
    assert_eq!(from_transcript(&transcript), vec![sentence.to_string()]);
    assert!(from_transcript("warning: something else entirely").is_empty());
}

#[test]
fn labels_are_the_documented_spellings() {
    assert_eq!(DeclaredBytes::Mapped.label(), "mapped");
    assert_eq!(
        DeclaredBytes::Partial { first_unmapped: 4 }.label(),
        "partial"
    );
    assert_eq!(DeclaredBytes::Unmapped.label(), "unmapped");
}
