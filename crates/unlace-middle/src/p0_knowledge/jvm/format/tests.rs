use super::*;

#[test]
fn method_descriptors_split() {
    let (params, ret) = method_descriptor("(I[JLjava/lang/String;[[Lp/Q;D)V").unwrap();
    assert_eq!(params, ["I", "[J", "Ljava/lang/String;", "[[Lp/Q;", "D"]);
    assert_eq!(ret, "V");
    assert!(method_descriptor("(X)V").is_none());
}

#[test]
fn a_universal_binary_is_not_a_class_file() {
    let mut fat = vec![0xCA, 0xFE, 0xBA, 0xBE, 0, 0, 0, 2];
    fat.resize(64, 0);
    assert!(!is_class(&fat));
    let mut class = vec![0xCA, 0xFE, 0xBA, 0xBE, 0, 0, 0, 52];
    class.resize(64, 0);
    assert!(is_class(&class));
}
