//! Integration test: full HELO + PUSH_MD + PULL_MD round-trip against the
//! [`InMemoryHandler`] over a real TCP loopback connection.

use std::net::{IpAddr, Ipv4Addr, SocketAddr};
use std::sync::Arc;

use tokio::net::TcpListener;

use unlace_lumina::client::Client;
use unlace_lumina::server::{FuncMetadata, InMemoryHandler, run_listener};

async fn boot_server() -> SocketAddr {
    let listener = TcpListener::bind(SocketAddr::new(IpAddr::V4(Ipv4Addr::LOCALHOST), 0))
        .await
        .expect("bind");
    let addr = listener.local_addr().expect("local_addr");
    let handler: Arc<InMemoryHandler> = Arc::new(InMemoryHandler::new());
    tokio::spawn(async move {
        let _ = run_listener(listener, handler).await;
    });
    addr
}

#[tokio::test]
async fn helo_push_pull_roundtrip() {
    let addr = boot_server().await;

    let mut c = Client::connect(addr).await.expect("connect");
    let outcome = c.helo(6, "tester", "").await.expect("helo");
    assert!(outcome.is_admin, "open-mode in-memory handler grants admin");
    assert!(
        outcome
            .server_banner
            .as_deref()
            .unwrap_or("")
            .contains("Hex-Rays")
    );

    let rec_a = FuncMetadata {
        name: "decode_packet".into(),
        size: 0x80,
        metadata: vec![1, 2, 3, 4],
        counter: 1,
        calcrel_hash: [0x11u8; 32],
    };
    let rec_b = FuncMetadata {
        name: "alloc_buf".into(),
        size: 0x40,
        metadata: vec![9, 8, 7],
        counter: 5,
        calcrel_hash: [0x22u8; 32],
    };

    let statuses = c
        .push_md(&[rec_a.clone(), rec_b.clone()])
        .await
        .expect("push");
    assert_eq!(statuses, vec![0, 0]);

    let pulled = c
        .pull_md(&[[0x11u8; 32], [0xFFu8; 32], [0x22u8; 32]])
        .await
        .expect("pull");
    assert_eq!(pulled.len(), 3);
    let got_a = pulled[0].as_ref().expect("a present");
    assert_eq!(got_a.name, rec_a.name);
    assert_eq!(got_a.size, rec_a.size);
    assert_eq!(got_a.metadata, rec_a.metadata);
    assert!(pulled[1].is_none(), "unknown hash should be None");
    let got_b = pulled[2].as_ref().expect("b present");
    assert_eq!(got_b.name, rec_b.name);
    assert_eq!(got_b.size, rec_b.size);
}

#[tokio::test]
async fn helo_v4_replies_with_rpc_ok() {
    let addr = boot_server().await;
    let mut c = Client::connect(addr).await.expect("connect");
    // v4 means no HELO_RESULT, just an empty RPC_OK.
    let outcome = c.helo(4, "", "").await.expect("helo");
    assert!(
        outcome.server_banner.is_none(),
        "no HELO_RESULT under proto v4"
    );
}
