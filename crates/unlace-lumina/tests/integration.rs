//! Client and server over a real loopback socket.

#[path = "roundtrip.rs"]
mod roundtrip;
#[path = "v6_roundtrip.rs"]
mod v6_roundtrip;

use std::net::{IpAddr, Ipv4Addr, SocketAddr, TcpListener};
use std::sync::Arc;

use unlace_lumina::client::{Client, ConnectOptions};
use unlace_lumina::helo::Helo;
use unlace_lumina::server::{Handler, run_listener};

/// Serve `handler` on a loopback port bound before the thread starts, so a connect cannot race it.
pub fn boot<H: Handler + 'static>(handler: Arc<H>) -> SocketAddr {
    let listener = TcpListener::bind(SocketAddr::new(IpAddr::V4(Ipv4Addr::LOCALHOST), 0))
        .expect("bind loopback");
    let addr = listener.local_addr().expect("local_addr");
    std::thread::spawn(move || {
        let _ = run_listener(listener, handler, None);
    });
    addr
}

pub fn connect(addr: SocketAddr) -> Client {
    let opts = ConnectOptions {
        timeout: Some(std::time::Duration::from_secs(10)),
        tls: None,
    };
    Client::connect(&addr.to_string(), &opts).expect("connect")
}

pub fn helo(version: u32, user: &str, password: &str) -> Helo {
    Helo {
        protocol_version: version,
        username: Some(user.into()),
        password: Some(password.into()),
        ..Helo::default()
    }
}
