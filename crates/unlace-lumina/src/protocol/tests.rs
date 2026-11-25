use super::*;

#[test]
fn packet_id_roundtrip_for_all_known_ids() {
    for raw in 10u8..=49 {
        let p = Packet::from_u8(raw).expect("known id");
        assert_eq!(p.as_u8(), raw);
    }
}

#[test]
fn packet_id_rejects_unknown() {
    assert!(Packet::from_u8(0).is_none());
    assert!(Packet::from_u8(9).is_none());
    assert!(Packet::from_u8(50).is_none());
    assert!(Packet::from_u8(255).is_none());
}

#[test]
fn auth_mask_admin_examples() {
    // LIST_PEERS, KILL_SESSIONS, CLEAN_DB, DEBUGCTL, USER_OPERATION,
    // SET_PASSWORD, GET_LUMINA_STATS, KILL_SESSIONS_RESULT, LIST_PEERS_RESULT
    for id in [20u8, 21, 22, 23, 30, 31, 39, 42, 45, 46] {
        assert!(admin_required(id), "id {id} should require admin");
    }
}

#[test]
fn auth_mask_non_admin_examples() {
    // PULL_MD, PUSH_MD, GET_POP, DECOMPILE, PUSH_TLM, GET_LUMINA_INFO,
    // GET_FUNC_HISTORIES
    for id in [14u8, 16, 18, 32, 34, 43, 47] {
        assert!(!admin_required(id), "id {id} should NOT require admin");
    }
}

#[test]
fn auth_mask_out_of_range() {
    assert!(auth_mask(13).is_none()); // HELO
    assert!(auth_mask(10).is_none()); // RPC_OK
    assert!(auth_mask(49).is_none()); // HELO_RESULT
}

#[test]
fn show_history_uses_both_admin_and_metadata() {
    assert_eq!(auth_mask(26), Some(0x4000_0001));
}
