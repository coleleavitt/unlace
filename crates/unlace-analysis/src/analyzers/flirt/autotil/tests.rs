use super::libraries_for;

#[test]
fn a_line_names_the_library_of_its_signature() {
    let text =
        "; comment\nvc64rtf   vc64rtf_lib ; trailing\nother  lib\nVC64RTF  second.til\n\nlonely\n";
    assert_eq!(libraries_for(text, "vc64rtf"), ["vc64rtf_lib", "second"]);
    assert!(libraries_for(text, "lonely").is_empty());
    assert!(libraries_for(text, "absent").is_empty());
}
