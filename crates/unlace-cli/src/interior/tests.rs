use super::*;
use crate::jsonfmt::dumps_compact;

#[test]
fn transcript_answer_round_trips_through_the_note_and_the_record() {
    let transcript = "[decomp]> function containing 0x140001040\n\
                          0x140001040 is interior to sub_140001030 at 0x140001030 (+0x10)\n\
                          Registered sub_140001040 at 0x140001040 without a body assertion\n";
    let interior = from_transcript(transcript).expect("parsed");
    assert_eq!(
        interior,
        Interior {
            addr: 0x140001040,
            owner: "sub_140001030".into(),
            entry: 0x140001030
        }
    );
    assert_eq!(
        note(&interior),
        "note: 0x140001040 is interior to sub_140001030 (0x140001030+0x10), not an entry \
             unlace discovered; decompiled from 0x140001040 as asked (--define-function \
             0x140001040 declares a function there)"
    );
    assert_eq!(
        dumps_compact(&json(&interior)),
        r#"{"name":"sub_140001030","address":5368713264,"address_hex":"0x140001030","offset":16}"#
    );
}

#[test]
fn an_owner_name_with_spaces_and_parentheses_survives() {
    let line = "0x401010 is interior to Foo::bar(int, char) at 0x401000 (+0x10)";
    let interior = from_transcript(line).expect("parsed");
    assert_eq!(interior.owner, "Foo::bar(int, char)");
    assert_eq!(interior.entry, 0x401000);
    assert!(from_transcript("0x401010 is interior to no function").is_none());
}
