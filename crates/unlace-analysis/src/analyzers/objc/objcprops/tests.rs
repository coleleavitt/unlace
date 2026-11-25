use super::*;

#[test]
fn attributes_yield_typed_getter_and_setter() {
    assert_eq!(
        from_attributes("inner", "T@\"Base\",&,N,Vinner"),
        [
            ("inner".to_string(), "@\"Base\"@:".to_string()),
            ("setInner:".to_string(), "v@:@\"Base\"".to_string())
        ]
    );
    assert_eq!(
        from_attributes("count", "Ti,R,N,Vcount"),
        [("count".to_string(), "i@:".to_string())]
    );
    assert_eq!(
        from_attributes("hidden", "TB,N,GisHidden,SsetIsHidden:,Vhidden"),
        [
            ("isHidden".to_string(), "B@:".to_string()),
            ("setIsHidden:".to_string(), "v@:B".to_string())
        ]
    );
    assert_eq!(
        from_attributes("frame", "T{CGRect={CGPoint=dd}{CGSize=dd}},N,Vframe")[0].1,
        "{CGRect={CGPoint=dd}{CGSize=dd}}@:"
    );
    assert!(
        from_attributes("x", "N,Vx").is_empty(),
        "no type, no declaration"
    );
}
