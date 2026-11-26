use super::*;

#[test]
fn test_error_display_is_bare_explain() {
    let e = UnlaceError::lowlevel("Restarting decompilation");
    assert_eq!(e.to_string(), "Restarting decompilation");
    assert_eq!(e.explain(), "Restarting decompilation");
    let e = UnlaceError::unimpl("Unable to translate instruction", 4);
    assert_eq!(e.to_string(), "Unable to translate instruction");
    match e {
        UnlaceError::Unimpl {
            instruction_length, ..
        } => assert_eq!(instruction_length, 4),
        _ => panic!("wrong variant"),
    }
}

#[test]
fn test_error_decoder_outside_lowlevel_hierarchy() {
    // catch(LowlevelError) in C++ catches all subclasses ...
    assert!(UnlaceError::lowlevel("x").is_lowlevel());
    assert!(UnlaceError::recov("x").is_lowlevel());
    assert!(UnlaceError::parse("x").is_lowlevel());
    assert!(UnlaceError::sleigh("x").is_lowlevel());
    assert!(UnlaceError::unimpl("x", 0).is_lowlevel());
    assert!(UnlaceError::bad_data("x").is_lowlevel());
    assert!(UnlaceError::data_unavail("x").is_lowlevel());
    assert!(UnlaceError::evaluation("x").is_lowlevel());
    assert!(UnlaceError::param_unassigned("x").is_lowlevel());
    assert!(UnlaceError::jumptable_thunk("x").is_lowlevel());
    assert!(UnlaceError::java("IOException", "x").is_lowlevel());
    // ... but NOT DecoderError, which is not derived from it.
    assert!(!UnlaceError::decoder("Unexpected end of stream").is_lowlevel());
}

#[test]
fn test_error_java_carries_class_type() {
    let e = UnlaceError::java("java.lang.IllegalArgumentException", "bad arg");
    match &e {
        UnlaceError::Java { type_name, explain } => {
            assert_eq!(type_name, "java.lang.IllegalArgumentException");
            assert_eq!(explain, "bad arg");
        }
        _ => panic!("wrong variant"),
    }
}
