use super::*;
use crate::messages::{FuncInfoAndPattern, PatternId};
use std::net::{IpAddr, Ipv4Addr};

fn peer() -> SocketAddr {
    SocketAddr::new(IpAddr::V4(Ipv4Addr::LOCALHOST), 1)
}

fn session() -> Session {
    Session {
        peer: peer(),
        protocol_version: 6,
        username: "alice".into(),
        is_admin: false,
        features: u32::MAX,
    }
}

fn push_of(name: &str, metadata: Vec<u8>, mode: u32) -> PushMd {
    PushMd {
        flags: mode,
        contents: vec![FuncInfoAndPattern {
            info: FuncInfo {
                name: name.into(),
                size: 0x20,
                metadata,
            },
            pattern: PatternId::md5([5; 16]),
        }],
        ..PushMd::default()
    }
}

#[test]
fn push_then_pull() {
    let db = SqliteStore::open_in_memory().unwrap();
    let s = session();
    assert_eq!(
        db.push(&s, &push_of("f", vec![1], push_mode::OVERRIDE))
            .unwrap(),
        vec![codes::ADDED]
    );
    let got = db.pull(&s, &[vec![5; 16], vec![6; 16]]).unwrap();
    assert_eq!(got[0].as_ref().unwrap().info.name, "f");
    assert_eq!(got[0].as_ref().unwrap().popularity, 1);
    assert!(got[1].is_none());
}

#[test]
fn push_modes_decide_who_wins() {
    let db = SqliteStore::open_in_memory().unwrap();
    let s = session();
    db.push(&s, &push_of("rich", vec![1, 2, 3], push_mode::OVERRIDE))
        .unwrap();
    db.push(&s, &push_of("poor", vec![1], push_mode::OVERRIDE_IF_BETTER))
        .unwrap();
    assert_eq!(db.get(&[5; 16]).unwrap().unwrap().info.name, "rich");
    db.push(&s, &push_of("kept", vec![9; 8], push_mode::DO_NOT_OVERRIDE))
        .unwrap();
    assert_eq!(db.get(&[5; 16]).unwrap().unwrap().info.name, "rich");
    assert_eq!(
        db.push(&s, &push_of("forced", vec![], push_mode::OVERRIDE))
            .unwrap(),
        vec![codes::OK]
    );
    let rec = db.get(&[5; 16]).unwrap().unwrap();
    assert_eq!(rec.info.name, "forced");
    assert_eq!(rec.popularity, 4);
    assert_eq!(db.lumina_stats(&s).unwrap().history, 4);
    assert_eq!(db.lumina_stats(&s).unwrap().pushes, 4);
}

#[test]
fn logins_are_required_once_a_user_exists() {
    let db = SqliteStore::open_in_memory().unwrap();
    let helo = |user: &str, pass: &str| Helo {
        protocol_version: 6,
        username: Some(user.into()),
        password: Some(pass.into()),
        ..Helo::default()
    };
    assert!(!db.handle_helo(peer(), &helo("x", "")).unwrap().is_admin);
    db.upsert_user("root", "hunter2", true).unwrap();
    assert!(
        db.handle_helo(peer(), &helo("root", "hunter2"))
            .unwrap()
            .is_admin
    );
    assert!(db.handle_helo(peer(), &helo("root", "wrong")).is_err());
    assert!(db.handle_helo(peer(), &helo("x", "")).is_err());
}

#[test]
fn listings_read_the_funcs_and_history_tables() {
    let db = SqliteStore::open_in_memory().unwrap();
    let s = session();
    db.push(&s, &push_of("first", vec![1], push_mode::OVERRIDE))
        .unwrap();
    db.push(&s, &push_of("second", vec![2], push_mode::OVERRIDE))
        .unwrap();
    let popular = db.get_pop(&s, 10).unwrap();
    assert_eq!(popular.len(), 1);
    assert_eq!(popular[0].key, vec![5; 16]);
    assert_eq!(popular[0].info.name, "second");
    assert_eq!(popular[0].popularity, 2);
    assert!(db.get_pop(&s, 0).unwrap().is_empty());
    let hist = db.show_history(&s, 100).unwrap();
    assert_eq!(hist.len(), 2);
    assert!(hist[0].id > hist[1].id);
    assert_eq!(hist[0].func.info.name, "second");
    assert_eq!(hist[1].func.info.name, "first");
    assert_eq!(hist[0].username, "alice");
    assert_eq!(db.show_history(&s, 1).unwrap().len(), 1);
    let dumped = db.dump_md(&s, 100).unwrap();
    assert_eq!(dumped.len(), 1);
    assert_eq!(dumped[0].info.name, "second");
}

#[test]
fn an_empty_key_is_a_bad_pattern() {
    let db = SqliteStore::open_in_memory().unwrap();
    let mut p = push_of("f", vec![], push_mode::OVERRIDE);
    p.contents[0].pattern.data.clear();
    assert_eq!(db.push(&session(), &p).unwrap(), vec![codes::BAD_PATTERN]);
}
