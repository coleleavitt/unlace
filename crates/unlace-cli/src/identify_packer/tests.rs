use super::*;

#[test]
fn entropy_is_zero_for_uniform_and_eight_for_full_spread() {
    assert_eq!(shannon_entropy(&[]), 0.0);
    assert_eq!(shannon_entropy(&[0u8; 100]), 0.0);
    let all: Vec<u8> = (0..=255).collect();
    assert!((shannon_entropy(&all) - 8.0).abs() < 1e-9);
}

#[test]
fn upx_section_name_wins_and_unknown_names_do_not_match() {
    let names = vec![".text".to_string(), "UPX1".to_string()];
    assert_eq!(detect_packer(&names), Some("UPX"));
    let plain = vec![".text".to_string(), ".data".to_string()];
    assert_eq!(detect_packer(&plain), None);
}

#[test]
fn no_signal_yields_not_packed_hypothesis() {
    let h = rank_hypotheses(None, true, true, false, 0);
    assert_eq!(h.len(), 1);
    assert!(h[0].contains("likely not packed"));
}

#[test]
fn detected_packer_ranks_first() {
    let h = rank_hypotheses(Some("UPX"), true, false, false, 1);
    assert!(h[0].contains("UPX"));
    assert!(
        h.iter()
            .any(|x| x.contains("Entry point is not in a .text"))
    );
    assert!(h.iter().any(|x| x.contains("high-entropy")));
}
