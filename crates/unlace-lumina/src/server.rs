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
//! metadata push/pull, stats/info, user/admin maintenance, history/push
//! listings, telemetry retention, and bounded generic dispatch for the rest of
//! the known packet ids. `DECOMPILE` is exposed as a handler hook because the
//! binary protocol only carries an opaque request/response blob; the actual
//! decompiler backend must be provided by the embedding application.

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

/// Defensive cap for packet-declared arrays. The upstream server enforces
/// connection-local size limits before dispatch; this additional item cap keeps
/// malformed small packets from requesting huge allocations.
pub const MAX_PACKET_ITEMS: usize = 4096;

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

    async fn get_pop(&self, _session: &Session, _limit: u32) -> io::Result<Vec<FuncMetadata>> {
        Ok(Vec::new())
    }

    async fn list_peers(&self, session: &Session) -> io::Result<Vec<PeerInfo>> {
        Ok(vec![PeerInfo {
            id: 1,
            username: session.username.clone(),
            peer: session.peer.to_string(),
            is_admin: session.is_admin,
        }])
    }

    async fn kill_sessions(&self, _session: &Session, ids: &[u32]) -> io::Result<Vec<u32>> {
        Ok(vec![1; ids.len()])
    }

    async fn delete_history(&self, _session: &Session, _filter: MetadataFilter) -> io::Result<u64> {
        Ok(0)
    }

    async fn show_history(
        &self,
        _session: &Session,
        _filter: MetadataFilter,
    ) -> io::Result<Vec<HistoryEntry>> {
        Ok(Vec::new())
    }

    async fn dump_md(
        &self,
        _session: &Session,
        _filter: MetadataFilter,
    ) -> io::Result<Vec<FuncMetadata>> {
        Ok(Vec::new())
    }

    async fn clean_db(&self, _session: &Session) -> io::Result<()> {
        Ok(())
    }

    async fn debugctl(&self, _session: &Session, _args: &[String]) -> io::Result<Vec<String>> {
        Ok(Vec::new())
    }

    async fn decompile(&self, _session: &Session, _request: &[u8]) -> io::Result<Vec<u8>> {
        Err(io::Error::new(
            io::ErrorKind::Unsupported,
            "DECOMPILE requires an application-provided decompiler backend",
        ))
    }

    async fn push_tlm(&self, _session: &Session, _payload: Vec<u8>) -> io::Result<()> {
        Ok(())
    }

    async fn show_tlm_sessions(
        &self,
        _session: &Session,
        _filter: MetadataFilter,
    ) -> io::Result<Vec<TelemetrySession>> {
        Ok(Vec::new())
    }

    async fn show_pushes(
        &self,
        _session: &Session,
        _filter: MetadataFilter,
    ) -> io::Result<Vec<PushEntry>> {
        Ok(Vec::new())
    }

    async fn show_users(&self, _session: &Session, _sort: u32) -> io::Result<Vec<UserInfo>> {
        Ok(Vec::new())
    }

    async fn set_password(
        &self,
        _session: &Session,
        _username: &str,
        _password: &str,
    ) -> io::Result<()> {
        Err(io::Error::new(
            io::ErrorKind::Unsupported,
            "SET_PASSWORD requires a persistent user store",
        ))
    }

    async fn user_operation(&self, _session: &Session, _op: &UserOperation) -> io::Result<()> {
        Err(io::Error::new(
            io::ErrorKind::Unsupported,
            "USER_OPERATION requires a persistent user store",
        ))
    }

    async fn get_func_histories(
        &self,
        _session: &Session,
        hashes: &[[u8; 32]],
    ) -> io::Result<Vec<Vec<HistoryEntry>>> {
        Ok(vec![Vec::new(); hashes.len()])
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

/// Minimal filter used by the sqlite-backed metadata/history commands.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct MetadataFilter {
    pub max_entries: u32,
}

impl Default for MetadataFilter {
    fn default() -> Self {
        Self { max_entries: 100 }
    }
}

/// Stored history entry for `SHOW_HISTORY` and `GET_FUNC_HISTORIES`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct HistoryEntry {
    pub id: u64,
    pub username: String,
    pub timestamp: u64,
    pub func: FuncMetadata,
}

/// Stored push entry for `SHOW_PUSHES`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PushEntry {
    pub id: u64,
    pub username: String,
    pub timestamp: u64,
    pub func: FuncMetadata,
}

/// User row exposed by `SHOW_USERS`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct UserInfo {
    pub username: String,
    pub is_admin: bool,
    pub features: u32,
    pub deleted: bool,
    pub license_id: String,
    pub license_name: String,
    pub license_email: String,
    pub karma: u32,
    pub last_active: u64,
}

/// Nested license identity carried by the recovered user-object codec.
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct LicenseInfo {
    pub id: String,
    pub name: String,
    pub email: String,
}

/// Recovered Lumina user object.
///
/// The on-wire order is:
/// `license.id`, `license.name`, `license.email`, `name`, `karma`,
/// `last_active`, `features`.
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct UserOperationUser {
    pub license: LicenseInfo,
    pub name: String,
    pub karma: u32,
    pub last_active: u64,
    pub features: u32,
}

/// `USER_OPERATION` request body: a user object plus operation type.
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct UserOperation {
    pub user: UserOperationUser,
    pub op_type: u32,
}

/// Peer row exposed by `LIST_PEERS`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PeerInfo {
    pub id: u64,
    pub username: String,
    pub peer: String,
    pub is_admin: bool,
}

/// Telemetry upload summary.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TelemetrySession {
    pub id: u64,
    pub username: String,
    pub timestamp: u64,
    pub payload_len: u64,
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

    async fn get_pop(&self, _session: &Session, limit: u32) -> io::Result<Vec<FuncMetadata>> {
        let g = self.inner.lock().await;
        let mut rows: Vec<_> = g.funcs.values().cloned().collect();
        rows.sort_by(|a, b| b.counter.cmp(&a.counter).then_with(|| a.name.cmp(&b.name)));
        rows.truncate(limit as usize);
        Ok(rows)
    }

    async fn dump_md(
        &self,
        _session: &Session,
        filter: MetadataFilter,
    ) -> io::Result<Vec<FuncMetadata>> {
        let g = self.inner.lock().await;
        let mut rows: Vec<_> = g.funcs.values().cloned().collect();
        rows.truncate(filter.max_entries as usize);
        Ok(rows)
    }

    async fn clean_db(&self, _session: &Session) -> io::Result<()> {
        let mut g = self.inner.lock().await;
        g.funcs.clear();
        g.push_count = 0;
        Ok(())
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
        Some(Packet::RpcNotify) => Ok(Reply::Ok),
        Some(Packet::PullMd) => pull_md_dispatch(frame, session, handler.as_ref()).await,
        Some(Packet::PushMd) => push_md_dispatch(frame, session, handler.as_ref()).await,
        Some(Packet::GetPop) => get_pop_dispatch(frame, session, handler.as_ref()).await,
        Some(Packet::ListPeers) => list_peers_dispatch(session, handler.as_ref()).await,
        Some(Packet::KillSessions) => {
            kill_sessions_dispatch(frame, session, handler.as_ref()).await
        }
        Some(Packet::DelHistory) => del_history_dispatch(frame, session, handler.as_ref()).await,
        Some(Packet::ShowHistory) => show_history_dispatch(frame, session, handler.as_ref()).await,
        Some(Packet::DumpMd) => dump_md_dispatch(frame, session, handler.as_ref()).await,
        Some(Packet::CleanDb) => clean_db_dispatch(session, handler.as_ref()).await,
        Some(Packet::DebugCtl) => debugctl_dispatch(frame, session, handler.as_ref()).await,
        Some(Packet::Decompile) => decompile_dispatch(frame, session, handler.as_ref()).await,
        Some(Packet::PushTlm) => push_tlm_dispatch(frame, session, handler.as_ref()).await,
        Some(Packet::ShowTlmSessions) => {
            show_tlm_sessions_dispatch(frame, session, handler.as_ref()).await
        }
        Some(Packet::ShowPushes) => show_pushes_dispatch(frame, session, handler.as_ref()).await,
        Some(Packet::UserOperation) => {
            user_operation_dispatch(frame, session, handler.as_ref()).await
        }
        Some(Packet::ShowUsers) => show_users_dispatch(frame, session, handler.as_ref()).await,
        Some(Packet::SetPassword) => set_password_dispatch(frame, session, handler.as_ref()).await,
        Some(Packet::GetLuminaInfo) => lumina_info_dispatch(session, handler.as_ref()).await,
        Some(Packet::GetLuminaStats) => lumina_stats_dispatch(session, handler.as_ref()).await,
        Some(Packet::GetFuncHistories) => {
            get_func_histories_dispatch(frame, session, handler.as_ref()).await
        }
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
    let count = read_count(buf, &mut pos, "PULL_MD")?;
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
    let count = read_count(buf, &mut pos, "PUSH_MD")?;
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

async fn get_pop_dispatch<H>(frame: &Frame, session: &Session, handler: &H) -> io::Result<Reply>
where
    H: Handler,
{
    let limit = read_optional_vuint32(&frame.payload, 10)?;
    let rows = handler.get_pop(session, limit).await?;
    let mut out = Vec::new();
    write_vuint32(&mut out, rows.len() as u32);
    for row in rows {
        write_func_record(&mut out, &row)?;
    }
    Ok(Reply::Frame(Frame::new(Packet::GetPopResult.as_u8(), out)))
}

async fn list_peers_dispatch<H>(session: &Session, handler: &H) -> io::Result<Reply>
where
    H: Handler,
{
    let peers = handler.list_peers(session).await?;
    let mut out = Vec::new();
    write_vuint32(&mut out, peers.len() as u32);
    for p in peers {
        write_u64_split(&mut out, p.id);
        write_cstring(&mut out, &p.username)?;
        write_cstring(&mut out, &p.peer)?;
        write_vuint32(&mut out, u32::from(p.is_admin));
    }
    Ok(Reply::Frame(Frame::new(
        Packet::ListPeersResult.as_u8(),
        out,
    )))
}

async fn kill_sessions_dispatch<H>(
    frame: &Frame,
    session: &Session,
    handler: &H,
) -> io::Result<Reply>
where
    H: Handler,
{
    let ids = read_u32_list(&frame.payload, "KILL_SESSIONS")?;
    let statuses = handler.kill_sessions(session, &ids).await?;
    Ok(Reply::Frame(status_vector_frame(
        Packet::KillSessionsResult,
        &statuses,
    )))
}

async fn del_history_dispatch<H>(frame: &Frame, session: &Session, handler: &H) -> io::Result<Reply>
where
    H: Handler,
{
    let filter = read_filter(&frame.payload)?;
    let deleted = handler.delete_history(session, filter).await?;
    let mut out = Vec::new();
    write_vuint32(&mut out, deleted.min(u32::MAX as u64) as u32);
    Ok(Reply::Frame(Frame::new(
        Packet::DelHistoryResult.as_u8(),
        out,
    )))
}

async fn show_history_dispatch<H>(
    frame: &Frame,
    session: &Session,
    handler: &H,
) -> io::Result<Reply>
where
    H: Handler,
{
    let filter = read_filter(&frame.payload)?;
    let rows = handler.show_history(session, filter).await?;
    let mut out = Vec::new();
    write_vuint32(&mut out, rows.len() as u32);
    for row in rows {
        write_history_entry(&mut out, &row)?;
    }
    Ok(Reply::Frame(Frame::new(
        Packet::ShowHistoryResult.as_u8(),
        out,
    )))
}

async fn dump_md_dispatch<H>(frame: &Frame, session: &Session, handler: &H) -> io::Result<Reply>
where
    H: Handler,
{
    let filter = read_filter(&frame.payload)?;
    let rows = handler.dump_md(session, filter).await?;
    let mut out = Vec::new();
    write_vuint32(&mut out, rows.len() as u32);
    for row in rows {
        write_func_record(&mut out, &row)?;
    }
    Ok(Reply::Frame(Frame::new(Packet::DumpMdResult.as_u8(), out)))
}

async fn clean_db_dispatch<H>(session: &Session, handler: &H) -> io::Result<Reply>
where
    H: Handler,
{
    handler.clean_db(session).await?;
    Ok(Reply::Ok)
}

async fn debugctl_dispatch<H>(frame: &Frame, session: &Session, handler: &H) -> io::Result<Reply>
where
    H: Handler,
{
    let args = read_string_list(&frame.payload, "DEBUGCTL")?;
    let replies = handler.debugctl(session, &args).await?;
    let mut out = Vec::new();
    write_vuint32(&mut out, replies.len() as u32);
    for s in replies {
        write_cstring(&mut out, &s)?;
    }
    Ok(Reply::Frame(Frame::new(Packet::RpcOk.as_u8(), out)))
}

async fn decompile_dispatch<H>(frame: &Frame, session: &Session, handler: &H) -> io::Result<Reply>
where
    H: Handler,
{
    let request = read_exact_raw_payload(&frame.payload)?;
    match handler.decompile(session, &request).await {
        Ok(result) => {
            let mut out = Vec::new();
            write_raw_bytes(&mut out, &result);
            Ok(Reply::Frame(Frame::new(
                Packet::DecompileResult.as_u8(),
                out,
            )))
        }
        Err(e) => Ok(Reply::Fail(e.to_string())),
    }
}

async fn push_tlm_dispatch<H>(frame: &Frame, session: &Session, handler: &H) -> io::Result<Reply>
where
    H: Handler,
{
    handler.push_tlm(session, frame.payload.clone()).await?;
    Ok(Reply::Ok)
}

async fn show_tlm_sessions_dispatch<H>(
    frame: &Frame,
    session: &Session,
    handler: &H,
) -> io::Result<Reply>
where
    H: Handler,
{
    let filter = read_filter(&frame.payload)?;
    let rows = handler.show_tlm_sessions(session, filter).await?;
    let mut out = Vec::new();
    write_vuint32(&mut out, rows.len() as u32);
    for row in rows {
        write_u64_split(&mut out, row.id);
        write_u64_split(&mut out, row.timestamp);
        write_cstring(&mut out, &row.username)?;
        write_u64_split(&mut out, row.payload_len);
    }
    Ok(Reply::Frame(Frame::new(
        Packet::ShowTlmSessionsResult.as_u8(),
        out,
    )))
}

async fn show_pushes_dispatch<H>(frame: &Frame, session: &Session, handler: &H) -> io::Result<Reply>
where
    H: Handler,
{
    let filter = read_filter(&frame.payload)?;
    let rows = handler.show_pushes(session, filter).await?;
    let mut out = Vec::new();
    write_vuint32(&mut out, rows.len() as u32);
    for row in rows {
        write_push_entry(&mut out, &row)?;
    }
    Ok(Reply::Frame(Frame::new(
        Packet::ShowPushesResult.as_u8(),
        out,
    )))
}

async fn user_operation_dispatch<H>(
    frame: &Frame,
    session: &Session,
    handler: &H,
) -> io::Result<Reply>
where
    H: Handler,
{
    let op = read_user_operation_payload(&frame.payload)?;
    match handler.user_operation(session, &op).await {
        Ok(()) => Ok(Reply::Ok),
        Err(e) => Ok(Reply::Fail(e.to_string())),
    }
}

async fn show_users_dispatch<H>(frame: &Frame, session: &Session, handler: &H) -> io::Result<Reply>
where
    H: Handler,
{
    let sort = read_optional_vuint32(&frame.payload, 0)?;
    let rows = handler.show_users(session, sort).await?;
    let mut out = Vec::new();
    write_vuint32(&mut out, rows.len() as u32);
    for row in rows {
        write_user_info(&mut out, &row)?;
    }
    if session.protocol_version > 3 {
        write_vuint32(&mut out, 0);
    }
    Ok(Reply::Frame(Frame::new(
        Packet::ShowUsersResult.as_u8(),
        out,
    )))
}

async fn set_password_dispatch<H>(
    frame: &Frame,
    session: &Session,
    handler: &H,
) -> io::Result<Reply>
where
    H: Handler,
{
    let mut pos = 0;
    let username = read_cstring(&frame.payload, &mut pos)?;
    let password = read_cstring(&frame.payload, &mut pos)?;
    handler.set_password(session, &username, &password).await?;
    Ok(Reply::Ok)
}

async fn get_func_histories_dispatch<H>(
    frame: &Frame,
    session: &Session,
    handler: &H,
) -> io::Result<Reply>
where
    H: Handler,
{
    let hashes = read_hash_list(&frame.payload, "GET_FUNC_HISTORIES")?;
    let rows = handler.get_func_histories(session, &hashes).await?;
    let mut out = Vec::new();
    write_vuint32(&mut out, rows.len() as u32);
    for (hash, history) in hashes.iter().zip(rows) {
        out.extend_from_slice(hash);
        write_vuint32(&mut out, history.len() as u32);
        for row in history {
            write_history_entry(&mut out, &row)?;
        }
    }
    Ok(Reply::Frame(Frame::new(
        Packet::GetFuncHistoriesResult.as_u8(),
        out,
    )))
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

fn status_vector_frame(packet: Packet, statuses: &[u32]) -> Frame {
    let mut out = Vec::new();
    write_vuint32(&mut out, statuses.len() as u32);
    for &s in statuses {
        write_vuint32(&mut out, s);
    }
    Frame::new(packet.as_u8(), out)
}

fn read_count(buf: &[u8], pos: &mut usize, ctx: &str) -> io::Result<usize> {
    let count = read_vuint32(buf, pos)? as usize;
    if count > MAX_PACKET_ITEMS {
        return Err(io::Error::new(
            io::ErrorKind::InvalidData,
            format!("{ctx}: item count {count} exceeds max {MAX_PACKET_ITEMS}"),
        ));
    }
    Ok(count)
}

fn read_optional_vuint32(buf: &[u8], default: u32) -> io::Result<u32> {
    if buf.is_empty() {
        return Ok(default);
    }
    let mut pos = 0;
    read_vuint32(buf, &mut pos)
}

fn read_filter(buf: &[u8]) -> io::Result<MetadataFilter> {
    if buf.is_empty() {
        return Ok(MetadataFilter::default());
    }
    let mut pos = 0;
    let max_entries = read_vuint32(buf, &mut pos)?;
    Ok(MetadataFilter {
        max_entries: if max_entries == 0 { 100 } else { max_entries },
    })
}

fn read_u32_list(buf: &[u8], ctx: &str) -> io::Result<Vec<u32>> {
    if buf.is_empty() {
        return Ok(Vec::new());
    }
    let mut pos = 0;
    let count = read_count(buf, &mut pos, ctx)?;
    let mut out = Vec::with_capacity(count);
    for _ in 0..count {
        out.push(read_vuint32(buf, &mut pos)?);
    }
    Ok(out)
}

fn read_string_list(buf: &[u8], ctx: &str) -> io::Result<Vec<String>> {
    if buf.is_empty() {
        return Ok(Vec::new());
    }
    let mut pos = 0;
    let count = read_count(buf, &mut pos, ctx)?;
    let mut out = Vec::with_capacity(count);
    for _ in 0..count {
        out.push(read_cstring(buf, &mut pos)?);
    }
    Ok(out)
}

fn read_hash_list(buf: &[u8], ctx: &str) -> io::Result<Vec<[u8; 32]>> {
    if buf.is_empty() {
        return Ok(Vec::new());
    }
    let mut pos = 0;
    let count = read_count(buf, &mut pos, ctx)?;
    let mut out = Vec::with_capacity(count);
    for _ in 0..count {
        let end = pos
            .checked_add(32)
            .ok_or_else(|| io::Error::new(io::ErrorKind::InvalidData, "hash overflow"))?;
        if end > buf.len() {
            return Err(io::Error::new(io::ErrorKind::UnexpectedEof, "short hash"));
        }
        let mut h = [0u8; 32];
        h.copy_from_slice(&buf[pos..end]);
        pos = end;
        out.push(h);
    }
    Ok(out)
}

fn read_exact_raw_payload(buf: &[u8]) -> io::Result<Vec<u8>> {
    let mut pos = 0;
    let bytes = read_raw_bytes(buf, &mut pos)?;
    if pos != buf.len() {
        return Err(io::Error::new(
            io::ErrorKind::InvalidData,
            "raw payload has trailing bytes",
        ));
    }
    Ok(bytes)
}

fn read_user_operation_payload(buf: &[u8]) -> io::Result<UserOperation> {
    let mut pos = 0;
    let user = read_user_object(buf, &mut pos)?;
    let op_type = read_vuint32(buf, &mut pos)?;
    if pos != buf.len() {
        return Err(io::Error::new(
            io::ErrorKind::InvalidData,
            "USER_OPERATION has trailing bytes",
        ));
    }
    Ok(UserOperation { user, op_type })
}

fn read_user_object(buf: &[u8], pos: &mut usize) -> io::Result<UserOperationUser> {
    let license = LicenseInfo {
        id: read_cstring(buf, pos)?,
        name: read_cstring(buf, pos)?,
        email: read_cstring(buf, pos)?,
    };
    let name = read_cstring(buf, pos)?;
    let karma = read_vuint32(buf, pos)?;
    let last_active = read_u64_split(buf, pos)?;
    let features = read_vuint32(buf, pos)?;
    Ok(UserOperationUser {
        license,
        name,
        karma,
        last_active,
        features,
    })
}

fn write_user_object(out: &mut Vec<u8>, user: &UserOperationUser) -> io::Result<()> {
    write_cstring(out, &user.license.id)?;
    write_cstring(out, &user.license.name)?;
    write_cstring(out, &user.license.email)?;
    write_cstring(out, &user.name)?;
    write_vuint32(out, user.karma);
    write_u64_split(out, user.last_active);
    write_vuint32(out, user.features);
    Ok(())
}

#[cfg(test)]
fn write_user_operation_payload(out: &mut Vec<u8>, op: &UserOperation) -> io::Result<()> {
    write_user_object(out, &op.user)?;
    write_vuint32(out, op.op_type);
    Ok(())
}

fn write_user_info(out: &mut Vec<u8>, row: &UserInfo) -> io::Result<()> {
    let mut features = row.features;
    if row.is_admin {
        features |= 1;
    } else {
        features &= !1;
    }
    write_user_object(
        out,
        &UserOperationUser {
            license: LicenseInfo {
                id: row.license_id.clone(),
                name: row.license_name.clone(),
                email: row.license_email.clone(),
            },
            name: row.username.clone(),
            karma: row.karma,
            last_active: row.last_active,
            features,
        },
    )
}

fn write_func_record(out: &mut Vec<u8>, row: &FuncMetadata) -> io::Result<()> {
    out.extend_from_slice(&row.calcrel_hash);
    write_cstring(out, &row.name)?;
    write_u64_split(out, row.size);
    write_raw_bytes(out, &row.metadata);
    write_vuint32(out, row.counter);
    Ok(())
}

fn write_history_entry(out: &mut Vec<u8>, row: &HistoryEntry) -> io::Result<()> {
    write_u64_split(out, row.id);
    write_u64_split(out, row.timestamp);
    write_cstring(out, &row.username)?;
    write_func_record(out, &row.func)
}

fn write_push_entry(out: &mut Vec<u8>, row: &PushEntry) -> io::Result<()> {
    write_u64_split(out, row.id);
    write_u64_split(out, row.timestamp);
    write_cstring(out, &row.username)?;
    write_func_record(out, &row.func)
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

    #[test]
    fn user_operation_payload_roundtrips_recovered_layout() {
        let op = UserOperation {
            user: UserOperationUser {
                license: LicenseInfo {
                    id: "LIC-1".into(),
                    name: "Alice License".into(),
                    email: "alice@example.test".into(),
                },
                name: "alice".into(),
                karma: 7,
                last_active: 0x1_0000_0002,
                features: 3,
            },
            op_type: 4,
        };
        let mut buf = Vec::new();
        write_user_operation_payload(&mut buf, &op).unwrap();
        assert_eq!(read_user_operation_payload(&buf).unwrap(), op);
    }

    #[test]
    fn decompile_payload_is_strict_raw_blob() {
        let mut buf = Vec::new();
        write_raw_bytes(&mut buf, b"request");
        assert_eq!(read_exact_raw_payload(&buf).unwrap(), b"request");

        let mut trailing = buf.clone();
        trailing.push(0);
        assert!(read_exact_raw_payload(&trailing).is_err());
    }
}
