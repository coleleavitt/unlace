use super::*;

#[test]
fn a_record_round_trips() {
    let replay = ArmFrameReplay {
        recovered: true,
        frames: vec![0x8000, 0x8040],
        pointers: vec![],
        aif: Some(AifReplay {
            entries: vec![0x9000],
            pool_entries: vec![],
            pointer_entries: vec![0x9100],
        }),
        retained: vec![0x8100],
    };
    assert_eq!(ArmFrameReplay::decode(&replay.encode()), Ok(replay));
    let none = ArmFrameReplay::default();
    assert_eq!(ArmFrameReplay::decode(&none.encode()), Ok(none));
}

#[test]
fn a_foreign_file_is_refused() {
    assert!(ArmFrameReplay::decode("frames 10\n").is_err());
}
