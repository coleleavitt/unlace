use super::is_ti_local_label;

#[test]
fn only_numbered_c_labels_match() {
    assert!(is_ti_local_label(b"$C$L1"));
    assert!(is_ti_local_label(b"$C$L20"));
    assert!(!is_ti_local_label(b"$C$L"));
    assert!(!is_ti_local_label(b"$C$DW$1"));
    assert!(!is_ti_local_label(b"ADC_setVREF"));
    assert!(!is_ti_local_label(b"$C$L1x"));
}
