use super::*;

#[test]
fn storage_annotations_are_split_by_parameter() {
    let (text, storage) =
        split_storage("int f(char *a @RDI, void (*cb)(int, int) @ [register,0x80,8], int c) @EAX")
            .unwrap();
    assert_eq!(text, "int f(char *a , void (*cb)(int, int) , int c) ");
    assert_eq!(
        storage,
        vec![
            (Place::Param(0), "RDI".to_string()),
            (Place::Param(1), "[register,0x80,8]".to_string()),
            (Place::Return, "EAX".to_string()),
        ]
    );
}

#[test]
fn misplaced_storage_is_an_error() {
    assert!(split_storage("int @EAX f(void)").is_err());
    assert!(split_storage("int f(int a @RDI @RSI)").is_err());
    assert!(split_storage("int f(int a @)").is_err());
}
