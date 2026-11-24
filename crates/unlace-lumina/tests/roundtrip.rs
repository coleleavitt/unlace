//! HELO, PUSH_MD, PULL_MD against the in-memory and sqlite stores: what is pushed under a key comes
//! back under that key, and an unknown key comes back empty.

use std::sync::Arc;

use unlace_lumina::db::SqliteStore;
use unlace_lumina::hash::CalcrelBuilder;
use unlace_lumina::messages::{FuncInfo, FuncInfoAndPattern, PatternId, PushMd, codes, push_mode};
use unlace_lumina::metadata;
use unlace_lumina::server::{Handler, InMemoryHandler};
use unlace_lumina::tinfo::{self, CType, CallConv, FuncType, Param};

use super::{boot, connect, helo};

fn key(seed: u8) -> [u8; 16] {
    let mut b = CalcrelBuilder::new();
    b.push(&[0x55, 0xE8, seed, 0, 0, 0, 0xC3], &[0, 0, 0, 0, 0, 0, 0]);
    b.finish()
}

fn prototype() -> Vec<u8> {
    let f = FuncType {
        cc: CallConv::Cdecl,
        ret: CType::Int {
            bytes: 0,
            signed: true,
        },
        params: vec![Param {
            ty: CType::Ptr(Box::new(CType::Char)),
            name: Some("buf".into()),
        }],
    };
    metadata::build(tinfo::encode_type_chunk(&f), Some("reads a header"))
}

fn push_of(names: &[(&str, u8)]) -> PushMd {
    PushMd {
        flags: push_mode::OVERRIDE,
        idb: "sample.i64".into(),
        input_path: "sample".into(),
        input_md5: [3; 16],
        hostname: "localhost".into(),
        contents: names
            .iter()
            .map(|&(name, seed)| FuncInfoAndPattern {
                info: FuncInfo {
                    name: name.into(),
                    size: 7,
                    metadata: prototype(),
                },
                pattern: PatternId::md5(key(seed)),
            })
            .collect(),
        eas: names
            .iter()
            .map(|&(_, seed)| 0x1000 + u64::from(seed))
            .collect(),
    }
}

fn exercise<H: Handler + 'static>(handler: Arc<H>) {
    let addr = boot(handler);
    let mut client = connect(addr);
    let hello = client.helo(&helo(6, "tester", "")).expect("helo");
    assert!(hello.is_some(), "protocol 6 gets HELO_RESULT");

    let push = push_of(&[("parse_header", 1), ("free_chunk", 2)]);
    assert_eq!(
        client.push_md(&push).expect("push"),
        vec![codes::ADDED, codes::ADDED]
    );
    assert_eq!(
        client
            .push_md(&push_of(&[("parse_header", 1)]))
            .expect("push again"),
        vec![codes::OK]
    );

    let pulled = client.pull_md(&[key(1), key(9), key(2)]).expect("pull");
    assert_eq!(pulled.len(), 3);
    let first = pulled[0].as_ref().expect("key 1 present");
    assert_eq!(first.info.name, "parse_header");
    assert_eq!(first.info.size, 7);
    assert_eq!(first.popularity, 2);
    assert!(pulled[1].is_none(), "unknown key is empty");
    assert_eq!(
        pulled[2].as_ref().expect("key 2 present").info.name,
        "free_chunk"
    );

    let summary = metadata::summarize(&first.info.metadata);
    assert_eq!(summary.comment.as_deref(), Some("reads a header"));
    let decl = tinfo::decode_type_chunk(&summary.type_info.expect("type chunk"))
        .expect("decodable type")
        .declaration("parse_header");
    assert_eq!(decl, "int parse_header(char *buf)");
}

#[test]
fn roundtrip_in_memory() {
    exercise(Arc::new(InMemoryHandler::new()));
}

#[test]
fn roundtrip_sqlite() {
    exercise(Arc::new(SqliteStore::open_in_memory().expect("sqlite")));
}

#[test]
fn many_keys_cross_batches() {
    let addr = boot(Arc::new(InMemoryHandler::new()));
    let mut client = connect(addr);
    client.helo(&helo(6, "", "")).expect("helo");
    let keys: Vec<[u8; 16]> = (0..5000u32)
        .map(|i| {
            let mut k = [0u8; 16];
            k[..4].copy_from_slice(&i.to_le_bytes());
            k
        })
        .collect();
    let pulled = client.pull_md(&keys).expect("pull");
    assert_eq!(pulled.len(), keys.len());
    assert!(pulled.iter().all(Option::is_none));
}
