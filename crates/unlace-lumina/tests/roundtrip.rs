//! End-to-end client <-> server metadata round-trip (ROADMAP Phase F.2).
//!
//! Proves the full Lumina v6 path the CLI relies on: a [`Client`] performs the
//! HELO handshake against a running [`run_listener`] accept loop, pushes
//! function-metadata records (`PUSH_MD`), then pulls them back by their
//! `calcrel_hash` identity key (`PULL_MD`) and asserts the retrieved metadata
//! matches what was pushed.
//!
//! The harness mirrors the established pattern in the crate's other tests: the
//! server is driven over a real loopback `TcpListener` bound to port 0 (the OS
//! assigns a free port), spawned before the client connects so the accept loop
//! is ready. This is deterministic — there is no fixed port, sleep, or retry —
//! and uses only the crate's real public API plus `std`/`tokio`.
//!
//! Two backing stores are exercised:
//!   * [`InMemoryHandler`] — the crate's `BTreeMap`-backed test handler.
//!   * [`SqliteStore`]      — the crate's real sqlite-backed `Handler`
//!     (opened in-memory), proving the persistence path round-trips too.

use std::net::{IpAddr, Ipv4Addr, SocketAddr};
use std::sync::Arc;

use tokio::net::TcpListener;

use unlace_lumina::client::Client;
use unlace_lumina::db::SqliteStore;
use unlace_lumina::server::{FuncMetadata, Handler, InMemoryHandler, run_listener};

/// Boot an accept loop on a loopback port backed by `handler` and return its
/// bound address. The listener is created (and bound) synchronously before the
/// spawned task takes ownership, so a subsequent `Client::connect` can never
/// race ahead of `bind`.
async fn boot<H: Handler + 'static>(handler: Arc<H>) -> SocketAddr {
    let listener = TcpListener::bind(SocketAddr::new(IpAddr::V4(Ipv4Addr::LOCALHOST), 0))
        .await
        .expect("bind loopback");
    let addr = listener.local_addr().expect("local_addr");
    tokio::spawn(async move {
        let _ = run_listener(listener, handler).await;
    });
    addr
}

/// Distinct sample records keyed by `calcrel_hash`.
fn sample_records() -> Vec<FuncMetadata> {
    vec![
        FuncMetadata {
            name: "parse_header".into(),
            size: 0x120,
            metadata: vec![0xDE, 0xAD, 0xBE, 0xEF],
            counter: 3,
            calcrel_hash: [0xA1u8; 32],
        },
        FuncMetadata {
            name: "free_chunk".into(),
            size: 0x33,
            metadata: vec![0x01, 0x02],
            counter: 9,
            calcrel_hash: [0xB2u8; 32],
        },
    ]
}

/// Run the full HELO + PUSH_MD + PULL_MD round-trip against `handler` and
/// assert every pushed record comes back byte-for-byte when pulled by key.
async fn exercise_roundtrip<H: Handler + 'static>(handler: Arc<H>) {
    let addr = boot(handler).await;

    // 1. Connect + HELO handshake at protocol version 6.
    let mut client = Client::connect(addr).await.expect("connect");
    let outcome = client.helo(6, "phase-f2", "").await.expect("helo");
    assert!(
        outcome.is_admin,
        "default open-mode handler grants admin on HELO"
    );

    let records = sample_records();

    // 2. PUSH_MD: upload the records; every status is 0 (== ok).
    let statuses = client.push_md(&records).await.expect("push_md");
    assert_eq!(
        statuses,
        vec![0; records.len()],
        "every pushed record reported ok"
    );

    // 3. PULL_MD: request each record by its calcrel_hash signature, plus an
    //    absent key in the middle to prove misses are reported as None.
    let absent = [0xFFu8; 32];
    let keys: Vec<[u8; 32]> = vec![records[0].calcrel_hash, absent, records[1].calcrel_hash];
    let pulled = client.pull_md(&keys).await.expect("pull_md");
    assert_eq!(pulled.len(), keys.len(), "one result per requested key");

    // 4. Assert retrieved metadata equals what was pushed. The server does not
    //    echo the hash back over PULL_MD_RESULT, so compare the wire-carried
    //    fields (name/size/metadata) explicitly.
    let got0 = pulled[0].as_ref().expect("record 0 present");
    assert_eq!(got0.name, records[0].name);
    assert_eq!(got0.size, records[0].size);
    assert_eq!(got0.metadata, records[0].metadata);

    assert!(pulled[1].is_none(), "absent key returns None");

    let got1 = pulled[2].as_ref().expect("record 1 present");
    assert_eq!(got1.name, records[1].name);
    assert_eq!(got1.size, records[1].size);
    assert_eq!(got1.metadata, records[1].metadata);
}

/// In-memory handler: client <-> server HELO/PUSH_MD/PULL_MD round-trip.
#[tokio::test]
async fn metadata_roundtrip_in_memory() {
    exercise_roundtrip(Arc::new(InMemoryHandler::new())).await;
}

/// Sqlite-backed handler (opened in-memory): the same round-trip exercised
/// against the crate's real persistence layer.
#[tokio::test]
async fn metadata_roundtrip_sqlite() {
    let store = SqliteStore::open_in_memory().expect("open in-memory sqlite store");
    exercise_roundtrip(Arc::new(store)).await;
}
