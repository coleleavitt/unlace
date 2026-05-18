//! Lumina v6 async TCP server, handshake, and command dispatch.
//!
//! The handshake mirrors `sub_38E40.c`: read packet id 13 (HELO), validate the
//! protocol version, optionally check user credentials, then send back an
//! empty `RPC_OK` (proto <= 4) or a `HELO_RESULT` (proto >= 5).
//!
//! After handshake the server loops over inbound frames. Each request id in
//! 14..=48 is gated by [`crate::protocol::auth_mask`] before being dispatched
//! to a [`Handler`]. Unauthorized or unknown commands produce `RPC_FAIL`.
//!
//! **Coverage:** this implementation wires the full handshake, mask gating,
//! and bodies for `PULL_MD`, `PUSH_MD`, `GET_LUMINA_INFO`, and
//! `GET_LUMINA_STATS`. The rest (DECOMPILE, telemetry, history dumps, user
//! ops) currently return `RPC_FAIL` with a clear `not implemented` message;
//! see the top-level handoff note for the data-section reverse-engineering
//! needed to flesh those out.

use std::collections::BTreeMap;
use std::io;
use std::net::SocketAddr;
use std::sync::Arc;

use tokio::io::{AsyncRead, AsyncWrite};
use tokio::net::TcpListener;
use tokio::sync::Mutex;

use crate::helo::{Helo, HeloResult, MAX_PROTOCOL_VERSION};
use crate::protocol::{ADMIN_BIT, Packet, auth_mask};
use crate::wire::{
    DEFAULT_MAX_PAYLOAD, Frame, read_cstring, read_frame, read_raw_bytes, read_u64_split,
    read_vuint32, write_cstring, write_frame, write_raw_bytes, write_u64_split, write_vuint32,
};

/// Server banner. The reverse-engineered binary identifies as
/// "Hex-Rays IDA Pro Lumina Server v9.3, 2026". We append a marker so peers
/// and operators can tell this is the unlace reimplementation rather than the
/// upstream binary.
pub const SERVER_BANNER: &str = "Hex-Rays IDA Pro Lumina Server v9.3, 2026 (unlace)";

// -------------------------------------------------------------- types -----

/// A function-metadata record as exchanged by `PULL_MD` / `PUSH_MD`.
///
/// Field names mirror the SQL columns referenced in the C source:
/// `funcs.name`, `funcs.size`, `funcs.metadata`, `func_freqs.counter`,
/// `calcrel_hash.hash`.
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct FuncMetadata {
    pub name: String,
    pub size: u64,
    pub metadata: Vec<u8>,
    pub counter: u32,
    /// Identity hash (32 bytes — IDA's `calcrel_hash.hash`).
    pub calcrel_hash: [u8; 32],
}

/// Per-session context passed to handlers. The auth flags reflect what
/// [`Handler::handle_helo`] returned for this session.
#[derive(Debug, Clone)]
pub struct Session {
    pub peer: SocketAddr,
    pub protocol_version: u32,
    pub username: String,
    pub is_admin: bool,
    pub features: u32,
}

/// Outcome of a handler call.
#[derive(Debug)]
pub enum Reply {
    /// A typed Lumina frame to send back to the peer.
    Frame(Frame),
    /// Convenience: respond with `RPC_OK` and no payload.
    Ok,
    /// Convenience: respond with `RPC_FAIL` and a human-readable message.
    Fail(String),
    /// Close the connection cleanly.
    CloseConnection,
}

/// Application-level glue between the transport and persistence layers.
///
/// Implementations cover the per-packet bodies. Returning `Reply::Fail` is
/// allowed for unimplemented commands.
#[async_trait::async_trait]
pub trait Handler: Send + Sync {
    /// Authenticate the HELO. Default implementation accepts everything and
    /// reports `is_admin = true` so in-memory tests work out of the box.
    async fn handle_helo(&self, _peer: SocketAddr, helo: &Helo) -> io::Result<HeloAccept> {
        Ok(HeloAccept {
            username: helo.username.clone().unwrap_or_default(),
            is_admin: true,
            features: u32::MAX,
        })
    }

    /// `PULL_MD`: client supplies one-or-more `calcrel_hash`es; server returns
    /// the matching `funcs` rows. Implementations should return `None` for any
    /// hash not in the database.
    async fn pull_md(
        &self,
        session: &Session,
        hashes: &[[u8; 32]],
    ) -> io::Result<Vec<Option<FuncMetadata>>>;

    /// `PUSH_MD`: client uploads new or updated `funcs`. Returns one status
    /// per uploaded record (`0 = ok`, `1 = error`).
    async fn push_md(&self, session: &Session, recs: &[FuncMetadata]) -> io::Result<Vec<u32>>;

    /// `GET_LUMINA_INFO`: return server banner / build identifier.
    async fn lumina_info(&self, _session: &Session) -> io::Result<String> {
        Ok(SERVER_BANNER.to_string())
    }

    /// `GET_LUMINA_STATS`: counts of `funcs`, `pushes`, `history`, `idbs`,
    /// `inputs`. Implementations free to fill zeros where they don't track
    /// the column yet.
    async fn lumina_stats(&self, _session: &Session) -> io::Result<LuminaStats> {
        Ok(LuminaStats::default())
    }

    /// Fallback for everything we haven't wired up. Returning `Reply::Fail`
    /// surfaces a clean error message to the peer.
    async fn handle_other(&self, _session: &Session, frame: &Frame) -> io::Result<Reply> {
        Ok(Reply::Fail(format!(
            "packet id {} ({}) not implemented",
            frame.id,
            Packet::from_u8(frame.id)
                .map(|p| p.name())
                .unwrap_or("unknown")
        )))
    }
}

/// Result of a successful HELO check.
#[derive(Debug, Clone)]
pub struct HeloAccept {
    pub username: String,
    pub is_admin: bool,
    pub features: u32,
}

/// Aggregate counts returned by `GET_LUMINA_STATS`.
#[derive(Debug, Clone, Default)]
pub struct LuminaStats {
    pub funcs: u64,
    pub pushes: u64,
    pub history: u64,
    pub idbs: u64,
    pub inputs: u64,
}

// --------------------------------------------------------- InMemoryHandler

/// A trivial [`Handler`] backing store for tests. Stores `FuncMetadata`
/// keyed by `calcrel_hash` in a `BTreeMap` for determinism.
#[derive(Debug, Default)]
pub struct InMemoryHandler {
    inner: Mutex<InMemoryState>,
}

#[derive(Debug, Default)]
struct InMemoryState {
    funcs: BTreeMap<[u8; 32], FuncMetadata>,
    push_count: u64,
}

impl InMemoryHandler {
    pub fn new() -> Self {
        Self::default()
    }

    pub async fn snapshot(&self) -> Vec<FuncMetadata> {
        let g = self.inner.lock().await;
        g.funcs.values().cloned().collect()
    }
}

#[async_trait::async_trait]
impl Handler for InMemoryHandler {
    async fn pull_md(
        &self,
        _session: &Session,
        hashes: &[[u8; 32]],
    ) -> io::Result<Vec<Option<FuncMetadata>>> {
        let g = self.inner.lock().await;
        Ok(hashes.iter().map(|h| g.funcs.get(h).cloned()).collect())
    }

    async fn push_md(&self, _session: &Session, recs: &[FuncMetadata]) -> io::Result<Vec<u32>> {
        let mut g = self.inner.lock().await;
        let mut out = Vec::with_capacity(recs.len());
        for r in recs {
            g.funcs.insert(r.calcrel_hash, r.clone());
            g.push_count += 1;
            out.push(0);
        }
        Ok(out)
    }

    async fn lumina_stats(&self, _session: &Session) -> io::Result<LuminaStats> {
        let g = self.inner.lock().await;
        Ok(LuminaStats {
            funcs: g.funcs.len() as u64,
            pushes: g.push_count,
            history: 0,
            idbs: 0,
            inputs: 0,
        })
    }
}

// ----------------------------------------------------------- entry points

/// Bind a listener on `addr` and drive it with [`run_listener`].
pub async fn serve<H>(addr: SocketAddr, handler: Arc<H>) -> io::Result<()>
where
    H: Handler + 'static,
{
    let listener = TcpListener::bind(addr).await?;
    run_listener(listener, handler).await
}

/// Accept loop. Spawns one task per connection.
pub async fn run_listener<H>(listener: TcpListener, handler: Arc<H>) -> io::Result<()>
where
    H: Handler + 'static,
{
    loop {
        let (sock, peer) = listener.accept().await?;
        let h = handler.clone();
        tokio::spawn(async move {
            if let Err(e) = serve_connection(sock, peer, h).await {
                tracing_log(format_args!("connection from {peer} ended: {e}"));
            }
        });
    }
}

/// Drive a single accepted connection: handshake then dispatch loop.
pub async fn serve_connection<S, H>(stream: S, peer: SocketAddr, handler: Arc<H>) -> io::Result<()>
where
    S: AsyncRead + AsyncWrite + Unpin,
    H: Handler + 'static,
{
    let (mut r, mut w) = tokio::io::split(stream);
    let session = handshake(&mut r, &mut w, peer, &handler).await?;
    dispatch_loop(&mut r, &mut w, &session, &handler).await
}

async fn handshake<R, W, H>(
    r: &mut R,
    w: &mut W,
    peer: SocketAddr,
    handler: &Arc<H>,
) -> io::Result<Session>
where
    R: AsyncRead + Unpin,
    W: AsyncWrite + Unpin,
    H: Handler,
{
    let helo_frame = read_frame(r, DEFAULT_MAX_PAYLOAD).await?;
    if helo_frame.id != Packet::Helo.as_u8() {
        // Per `sub_38E40`, the server expects HELO immediately; anything else
        // is a fatal protocol violation. We write a single RPC_FAIL so a
        // friendly peer can render the reason.
        let mut payload = Vec::new();
        let _ = write_cstring(&mut payload, "expected HELO");
        let _ = write_frame(
            w,
            &Frame::new(Packet::RpcFail.as_u8(), payload),
            DEFAULT_MAX_PAYLOAD,
        )
        .await;
        return Err(io::Error::new(
            io::ErrorKind::InvalidData,
            "first frame was not HELO",
        ));
    }
    let helo = Helo::decode(&helo_frame.payload)?;

    if helo.protocol_version > MAX_PROTOCOL_VERSION {
        let mut payload = Vec::new();
        let _ = write_cstring(
            &mut payload,
            "Lumina protocol version not compatible with server",
        );
        let _ = write_frame(
            w,
            &Frame::new(Packet::RpcFail.as_u8(), payload),
            DEFAULT_MAX_PAYLOAD,
        )
        .await;
        return Err(io::Error::new(
            io::ErrorKind::InvalidData,
            "HELO protocol version out of range",
        ));
    }

    let accept = handler.handle_helo(peer, &helo).await?;

    if helo.protocol_version >= 5 {
        let reply = HeloResult {
            welcome: SERVER_BANNER.into(),
            features: accept.features,
            is_admin: accept.is_admin,
        };
        let payload = reply.encode()?;
        write_frame(
            w,
            &Frame::new(Packet::HeloResult.as_u8(), payload),
            DEFAULT_MAX_PAYLOAD,
        )
        .await?;
    } else {
        // proto <= 4: empty RPC_OK
        write_frame(
            w,
            &Frame::new(Packet::RpcOk.as_u8(), Vec::new()),
            DEFAULT_MAX_PAYLOAD,
        )
        .await?;
    }

    Ok(Session {
        peer,
        protocol_version: helo.protocol_version,
        username: accept.username,
        is_admin: accept.is_admin,
        features: accept.features,
    })
}

async fn dispatch_loop<R, W, H>(
    r: &mut R,
    w: &mut W,
    session: &Session,
    handler: &Arc<H>,
) -> io::Result<()>
where
    R: AsyncRead + Unpin,
    W: AsyncWrite + Unpin,
    H: Handler,
{
    loop {
        let frame = match read_frame(r, DEFAULT_MAX_PAYLOAD).await {
            Ok(f) => f,
            Err(e) if e.kind() == io::ErrorKind::UnexpectedEof => return Ok(()),
            Err(e) => return Err(e),
        };

        let reply = dispatch(&frame, session, handler).await?;
        match reply {
            Reply::Frame(out) => write_frame(w, &out, DEFAULT_MAX_PAYLOAD).await?,
            Reply::Ok => {
                write_frame(
                    w,
                    &Frame::new(Packet::RpcOk.as_u8(), Vec::new()),
                    DEFAULT_MAX_PAYLOAD,
                )
                .await?
            }
            Reply::Fail(msg) => {
                let mut payload = Vec::new();
                let _ = write_cstring(&mut payload, &msg);
                write_frame(
                    w,
                    &Frame::new(Packet::RpcFail.as_u8(), payload),
                    DEFAULT_MAX_PAYLOAD,
                )
                .await?
            }
            Reply::CloseConnection => return Ok(()),
        }
    }
}

async fn dispatch<H>(frame: &Frame, session: &Session, handler: &Arc<H>) -> io::Result<Reply>
where
    H: Handler,
{
    // Auth-mask gate per `sub_421D0.c`. Unknown ids fall through to
    // `handle_other` so applications can extend the protocol.
    if let Some(mask) = auth_mask(frame.id) {
        let admin_required = mask & ADMIN_BIT != 0;
        if admin_required && !session.is_admin {
            return Ok(Reply::Fail(format!(
                "packet {} requires admin",
                Packet::from_u8(frame.id).map(|p| p.name()).unwrap_or("?")
            )));
        }
        let feature_bits = mask & !ADMIN_BIT;
        if feature_bits != 0 && (session.features & feature_bits) != feature_bits {
            return Ok(Reply::Fail(format!(
                "packet {} disabled for this user",
                Packet::from_u8(frame.id).map(|p| p.name()).unwrap_or("?")
            )));
        }
    }

    let packet = Packet::from_u8(frame.id);
    match packet {
        Some(Packet::PullMd) => pull_md_dispatch(frame, session, handler.as_ref()).await,
        Some(Packet::PushMd) => push_md_dispatch(frame, session, handler.as_ref()).await,
        Some(Packet::GetLuminaInfo) => lumina_info_dispatch(session, handler.as_ref()).await,
        Some(Packet::GetLuminaStats) => lumina_stats_dispatch(session, handler.as_ref()).await,
        _ => handler.handle_other(session, frame).await,
    }
}

// ---------------------------------------------------- per-packet bodies --

async fn pull_md_dispatch<H>(frame: &Frame, session: &Session, handler: &H) -> io::Result<Reply>
where
    H: Handler,
{
    // PULL_MD payload: vuint32 count, then `count` × 32 raw bytes.
    let buf = &frame.payload;
    let mut pos = 0;
    let count = read_vuint32(buf, &mut pos)? as usize;
    let mut hashes = Vec::with_capacity(count);
    for _ in 0..count {
        let end = pos
            .checked_add(32)
            .ok_or_else(|| io::Error::new(io::ErrorKind::InvalidData, "PULL_MD: overflow"))?;
        if end > buf.len() {
            return Err(io::Error::new(
                io::ErrorKind::UnexpectedEof,
                "PULL_MD: short hash",
            ));
        }
        let mut h = [0u8; 32];
        h.copy_from_slice(&buf[pos..end]);
        pos = end;
        hashes.push(h);
    }

    let rows = handler.pull_md(session, &hashes).await?;

    // PULL_MD_RESULT payload: vuint32 count, then per-row:
    //   vuint32 status (0 = present, 1 = absent)
    //   if present:
    //     cstring  name
    //     u64      size (split)
    //     raw      metadata
    //     vuint32  counter
    let mut out = Vec::new();
    write_vuint32(&mut out, rows.len() as u32);
    for row in rows {
        match row {
            Some(r) => {
                write_vuint32(&mut out, 0);
                write_cstring(&mut out, &r.name)?;
                write_u64_split(&mut out, r.size);
                write_raw_bytes(&mut out, &r.metadata);
                write_vuint32(&mut out, r.counter);
            }
            None => write_vuint32(&mut out, 1),
        }
    }
    Ok(Reply::Frame(Frame::new(Packet::PullMdResult.as_u8(), out)))
}

async fn push_md_dispatch<H>(frame: &Frame, session: &Session, handler: &H) -> io::Result<Reply>
where
    H: Handler,
{
    let buf = &frame.payload;
    let mut pos = 0;
    let count = read_vuint32(buf, &mut pos)? as usize;
    let mut recs = Vec::with_capacity(count);
    for _ in 0..count {
        let name = read_cstring(buf, &mut pos)?;
        let size = read_u64_split(buf, &mut pos)?;
        let metadata = read_raw_bytes(buf, &mut pos)?;
        let counter = read_vuint32(buf, &mut pos)?;
        let end = pos
            .checked_add(32)
            .ok_or_else(|| io::Error::new(io::ErrorKind::InvalidData, "PUSH_MD: overflow"))?;
        if end > buf.len() {
            return Err(io::Error::new(
                io::ErrorKind::UnexpectedEof,
                "PUSH_MD: short hash",
            ));
        }
        let mut calcrel_hash = [0u8; 32];
        calcrel_hash.copy_from_slice(&buf[pos..end]);
        pos = end;
        recs.push(FuncMetadata {
            name,
            size,
            metadata,
            counter,
            calcrel_hash,
        });
    }

    let statuses = handler.push_md(session, &recs).await?;
    let mut out = Vec::new();
    write_vuint32(&mut out, statuses.len() as u32);
    for s in statuses {
        write_vuint32(&mut out, s);
    }
    Ok(Reply::Frame(Frame::new(Packet::PushMdResult.as_u8(), out)))
}

async fn lumina_info_dispatch<H>(session: &Session, handler: &H) -> io::Result<Reply>
where
    H: Handler,
{
    let banner = handler.lumina_info(session).await?;
    let mut out = Vec::new();
    write_cstring(&mut out, &banner)?;
    Ok(Reply::Frame(Frame::new(
        Packet::GetLuminaInfoResult.as_u8(),
        out,
    )))
}

async fn lumina_stats_dispatch<H>(session: &Session, handler: &H) -> io::Result<Reply>
where
    H: Handler,
{
    let s = handler.lumina_stats(session).await?;
    let mut out = Vec::new();
    write_u64_split(&mut out, s.funcs);
    write_u64_split(&mut out, s.pushes);
    write_u64_split(&mut out, s.history);
    write_u64_split(&mut out, s.idbs);
    write_u64_split(&mut out, s.inputs);
    Ok(Reply::Frame(Frame::new(
        Packet::GetLuminaStatsResult.as_u8(),
        out,
    )))
}

fn tracing_log(args: std::fmt::Arguments<'_>) {
    // No tracing dep here yet — keep stderr logging behind a debug build
    // toggle so unit tests aren't noisy.
    #[cfg(debug_assertions)]
    eprintln!("[lumina] {args}");
    #[cfg(not(debug_assertions))]
    let _ = args;
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::client::Client;
    use std::net::{IpAddr, Ipv4Addr};

    #[tokio::test]
    async fn auth_mask_admin_command_rejected_for_non_admin() {
        struct FakeHandler;
        #[async_trait::async_trait]
        impl Handler for FakeHandler {
            async fn handle_helo(&self, _peer: SocketAddr, _helo: &Helo) -> io::Result<HeloAccept> {
                Ok(HeloAccept {
                    username: "bob".into(),
                    is_admin: false,
                    features: u32::MAX,
                })
            }
            async fn pull_md(
                &self,
                _s: &Session,
                _h: &[[u8; 32]],
            ) -> io::Result<Vec<Option<FuncMetadata>>> {
                Ok(vec![])
            }
            async fn push_md(&self, _s: &Session, _r: &[FuncMetadata]) -> io::Result<Vec<u32>> {
                Ok(vec![])
            }
        }

        let listener = TcpListener::bind(SocketAddr::new(IpAddr::V4(Ipv4Addr::LOCALHOST), 0))
            .await
            .unwrap();
        let addr = listener.local_addr().unwrap();
        let h: Arc<FakeHandler> = Arc::new(FakeHandler);
        tokio::spawn(async move {
            let _ = run_listener(listener, h).await;
        });

        let mut c = Client::connect(addr).await.unwrap();
        c.helo(6, "bob", "pw").await.unwrap();
        // KILL_SESSIONS is admin-only; expect RPC_FAIL.
        let reply = c
            .raw_request(Frame::new(Packet::KillSessions.as_u8(), Vec::new()))
            .await
            .unwrap();
        assert_eq!(reply.id, Packet::RpcFail.as_u8());
    }
}
