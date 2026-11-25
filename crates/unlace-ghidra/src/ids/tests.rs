use super::*;

/// The verified upstream numbers (`ghidra_arch.cc:30-48` ==
/// `ElementId.java:371-427`; `signature.cc:29-40` == `ElementId.java:433-440`).
#[test]
fn test_protocol_id_numbers_match_upstream() {
    assert_eq!(ELEM_DOC.get_id(), 229);
    assert_eq!(ELEM_UNIMPL.get_id(), 114);
    assert_eq!(ELEM_COMMAND_ISNAMEUSED.get_id(), 239);
    assert_eq!(ELEM_COMMAND_GETBYTES.get_id(), 240);
    assert_eq!(ELEM_COMMAND_GETCALLFIXUP.get_id(), 241);
    assert_eq!(ELEM_COMMAND_GETCALLMECH.get_id(), 242);
    assert_eq!(ELEM_COMMAND_GETCALLOTHERFIXUP.get_id(), 243);
    assert_eq!(ELEM_COMMAND_GETCODELABEL.get_id(), 244);
    assert_eq!(ELEM_COMMAND_GETCOMMENTS.get_id(), 245);
    assert_eq!(ELEM_COMMAND_GETCPOOLREF.get_id(), 246);
    assert_eq!(ELEM_COMMAND_GETDATATYPE.get_id(), 247);
    assert_eq!(ELEM_COMMAND_GETEXTERNALREF.get_id(), 248);
    assert_eq!(ELEM_COMMAND_GETMAPPEDSYMBOLS.get_id(), 249);
    assert_eq!(ELEM_COMMAND_GETNAMESPACEPATH.get_id(), 250);
    assert_eq!(ELEM_COMMAND_GETPCODE.get_id(), 251);
    assert_eq!(ELEM_COMMAND_GETPCODEEXECUTABLE.get_id(), 252);
    assert_eq!(ELEM_COMMAND_GETREGISTER.get_id(), 253);
    assert_eq!(ELEM_COMMAND_GETREGISTERNAME.get_id(), 254);
    assert_eq!(ELEM_COMMAND_GETSTRINGDATA.get_id(), 255);
    assert_eq!(ELEM_COMMAND_GETTRACKEDREGISTERS.get_id(), 256);
    assert_eq!(ELEM_COMMAND_GETUSEROPNAME.get_id(), 257);
    assert_eq!(ELEM_MAJOR.get_id(), 261);
    assert_eq!(ELEM_MINOR.get_id(), 262);
    assert_eq!(ELEM_SETTINGS.get_id(), 264);
    assert_eq!(ELEM_SIGSETTINGS.get_id(), 268);
    assert_eq!(ATTRIB_MAXSIZE.get_id(), 120);
}
