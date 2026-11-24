//! The handshake: the reply by protocol version, refused logins and the admin gate.

use std::sync::Arc;

use unlace_lumina::db::SqliteStore;
use unlace_lumina::protocol::Packet;
use unlace_lumina::server::InMemoryHandler;
use unlace_lumina::wire::Frame;

use super::{boot, connect, helo};

#[test]
fn protocol_4_gets_rpc_ok_and_6_gets_the_user_object() {
    let addr = boot(Arc::new(InMemoryHandler::new()));
    let mut old = connect(addr);
    assert!(old.helo(&helo(4, "", "")).expect("helo v4").is_none());
    let mut new = connect(addr);
    let user = new
        .helo(&helo(6, "bob", ""))
        .expect("helo v6")
        .expect("HELO_RESULT");
    assert_eq!(user.username, "bob");
    assert!(!user.is_admin());
    assert!(new.lumina_info().expect("info").contains("unlace"));
}

#[test]
fn a_newer_protocol_is_refused() {
    let addr = boot(Arc::new(InMemoryHandler::new()));
    let mut c = connect(addr);
    assert!(c.helo(&helo(7, "", "")).is_err());
}

#[test]
fn provisioned_servers_check_passwords_and_gate_admin_commands() {
    let store = SqliteStore::open_in_memory().expect("sqlite");
    store.upsert_user("root", "pw", true).expect("root");
    store.upsert_user("eve", "pw2", false).expect("eve");
    let addr = boot(Arc::new(store));

    assert!(connect(addr).helo(&helo(6, "root", "nope")).is_err());

    let mut eve = connect(addr);
    eve.helo(&helo(6, "eve", "pw2")).expect("eve logs in");
    let reply = eve
        .request(&Frame::new(Packet::GetLuminaStats.as_u8(), Vec::new()))
        .expect("stats reply");
    assert_eq!(reply.id, Packet::RpcFail.as_u8(), "stats are admin-only");

    let mut root = connect(addr);
    let user = root.helo(&helo(6, "root", "pw")).expect("root logs in");
    assert!(user.expect("HELO_RESULT").is_admin());
    let reply = root
        .request(&Frame::new(Packet::GetLuminaStats.as_u8(), Vec::new()))
        .expect("stats reply");
    assert_eq!(reply.id, Packet::GetLuminaStatsResult.as_u8());
}
