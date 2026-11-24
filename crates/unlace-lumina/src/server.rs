//! A blocking Lumina server: one thread per connection, HELO first, then a dispatch loop.
//!
//! The handshake follows `sub_38E40`: the first frame must be HELO; a version above
//! [`MAX_PROTOCOL_VERSION`] or a refused login gets `RPC_FAIL` and the connection closes; an accepted
//! one gets `HELO_RESULT` (protocol 5 and later) or an empty `RPC_OK`. Each command in 14..=48 is gated
//! by its [`auth_mask`]: the admin bit needs an admin session, and the decompile and telemetry feature
//! bits need the session to hold them. `PULL_MD`, `PUSH_MD`, `GET_POP`, `SHOW_HISTORY`, `DUMP_MD`,
//! `GET_LUMINA_INFO` and `GET_LUMINA_STATS` are served; every other packet gets `RPC_FAIL`.

use std::collections::BTreeMap;
use std::io::{self, Read, Write};
use std::net::{SocketAddr, TcpListener};
use std::sync::atomic::{AtomicUsize, Ordering};
use std::sync::{Arc, Mutex};
use std::time::Duration;

use crate::helo::{FEATURE_ADMIN, Helo, HeloResult, LicenseInfo, MAX_PROTOCOL_VERSION};
use crate::messages::{
    FuncInfo, FuncInfoAndFrequency, PullMd, PullMdResult, PushMd, PushMdResult, RpcFail, codes,
};
use crate::protocol::{ADMIN_BIT, Packet, auth_mask, features};
use crate::tls::Acceptor;
use crate::wire::{
    DEFAULT_MAX_PAYLOAD, Frame, max_payload_for, read_frame_limited, read_vuint32, write_cstring,
    write_frame, write_raw_bytes, write_u64_split, write_vuint32,
};

/// What the server reports for `GET_LUMINA_INFO`.
pub const SERVER_BANNER: &str = "unlace Lumina server (protocol 6)";

/// Concurrent connections served at once; further ones are closed on accept.
pub const MAX_CONNECTIONS: usize = 64;

/// Rows a read-only listing (`GET_POP`, `SHOW_HISTORY`, `DUMP_MD`) returns at most.
pub const MAX_QUERY_ITEMS: u32 = 4096;

/// Rows a filtered listing returns when the request names no count.
pub const DEFAULT_QUERY_ITEMS: u32 = 100;

/// A connection idle this long is dropped.
pub const IDLE_TIMEOUT: Duration = Duration::from_secs(300);

/// Largest reply the server writes (a `PULL_MD_RESULT` for many functions).
const MAX_REPLY: u32 = crate::wire::MAX_PUSH_PAYLOAD;

/// The session a HELO opened.
#[derive(Debug, Clone)]
pub struct Session {
    pub peer: SocketAddr,
    pub protocol_version: u32,
    pub username: String,
    pub is_admin: bool,
    /// Feature bits (`protocol::features`) the session holds.
    pub features: u32,
}

/// A handler's verdict on a HELO.
#[derive(Debug, Clone)]
pub struct HeloAccept {
    pub username: String,
    pub is_admin: bool,
    pub features: u32,
}

/// Counts for `GET_LUMINA_STATS`.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct LuminaStats {
    pub funcs: u64,
    pub pushes: u64,
    pub history: u64,
    pub users: u64,
}

/// A stored function as the listings return it: its key, its metadata and its push count.
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct FuncRecord {
    pub key: Vec<u8>,
    pub info: FuncInfo,
    pub popularity: u32,
}

/// One `history` row: a version of a function that a user pushed.
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct HistoryRecord {
    pub id: u64,
    pub username: String,
    pub timestamp: u64,
    pub func: FuncRecord,
}

/// The store behind a server.
pub trait Handler: Send + Sync {
    /// Accept or refuse a login. The default accepts everyone as a non-admin with every feature.
    fn handle_helo(&self, _peer: SocketAddr, helo: &Helo) -> io::Result<HeloAccept> {
        Ok(HeloAccept {
            username: helo.username.clone().unwrap_or_default(),
            is_admin: false,
            features: u32::MAX,
        })
    }

    /// One answer per key (a `PatternId` data), `None` when the key is unknown.
    fn pull(
        &self,
        session: &Session,
        keys: &[Vec<u8>],
    ) -> io::Result<Vec<Option<FuncInfoAndFrequency>>>;

    /// Store a push; one result code per function (`codes::ADDED`, `codes::OK`, `codes::ERROR`).
    fn push(&self, session: &Session, push: &PushMd) -> io::Result<Vec<i32>>;

    fn lumina_info(&self, _session: &Session) -> io::Result<String> {
        Ok(SERVER_BANNER.to_string())
    }

    fn lumina_stats(&self, _session: &Session) -> io::Result<LuminaStats> {
        Ok(LuminaStats::default())
    }

    /// The most pushed stored functions, most popular first (`GET_POP`).
    fn get_pop(&self, _session: &Session, _limit: u32) -> io::Result<Vec<FuncRecord>> {
        unsupported("GET_POP")
    }

    /// The newest history rows, newest first (`SHOW_HISTORY`).
    fn show_history(
        &self,
        _session: &Session,
        _max_entries: u32,
    ) -> io::Result<Vec<HistoryRecord>> {
        unsupported("SHOW_HISTORY")
    }

    /// The stored functions in insertion order (`DUMP_MD`).
    fn dump_md(&self, _session: &Session, _max_entries: u32) -> io::Result<Vec<FuncRecord>> {
        unsupported("DUMP_MD")
    }
}

/// A map-backed store for tests and throwaway servers.
#[derive(Debug, Default)]
pub struct InMemoryHandler {
    inner: Mutex<InMemoryState>,
}

#[derive(Debug, Default)]
struct InMemoryState {
    funcs: BTreeMap<Vec<u8>, FuncInfoAndFrequency>,
    pushes: u64,
}

impl InMemoryHandler {
    pub fn new() -> Self {
        Self::default()
    }

    fn state(&self) -> std::sync::MutexGuard<'_, InMemoryState> {
        self.inner.lock().unwrap_or_else(|e| e.into_inner())
    }

    pub fn len(&self) -> usize {
        self.state().funcs.len()
    }

    pub fn is_empty(&self) -> bool {
        self.len() == 0
    }
}

impl Handler for InMemoryHandler {
    fn pull(
        &self,
        _session: &Session,
        keys: &[Vec<u8>],
    ) -> io::Result<Vec<Option<FuncInfoAndFrequency>>> {
        let state = self.state();
        Ok(keys.iter().map(|k| state.funcs.get(k).cloned()).collect())
    }

    fn push(&self, _session: &Session, push: &PushMd) -> io::Result<Vec<i32>> {
        let mut state = self.state();
        state.pushes += 1;
        let mut out = Vec::with_capacity(push.contents.len());
        for c in &push.contents {
            let code = match state.funcs.get_mut(&c.pattern.data) {
                Some(existing) => {
                    existing.popularity = existing.popularity.saturating_add(1);
                    existing.info = c.info.clone();
                    codes::OK
                }
                None => {
                    state.funcs.insert(
                        c.pattern.data.clone(),
                        FuncInfoAndFrequency {
                            info: c.info.clone(),
                            popularity: 1,
                        },
                    );
                    codes::ADDED
                }
            };
            out.push(code);
        }
        Ok(out)
    }

    fn lumina_stats(&self, _session: &Session) -> io::Result<LuminaStats> {
        let state = self.state();
        Ok(LuminaStats {
            funcs: state.funcs.len() as u64,
            pushes: state.pushes,
            history: 0,
            users: 0,
        })
    }
}

fn unsupported<T>(what: &str) -> io::Result<T> {
    Err(io::Error::new(
        io::ErrorKind::Unsupported,
        format!("{what} is not supported by this store"),
    ))
}

/// Bind `addr` and serve until the listener fails.
pub fn serve<H: Handler + 'static>(
    addr: SocketAddr,
    handler: Arc<H>,
    tls: Option<Acceptor>,
) -> io::Result<()> {
    run_listener(TcpListener::bind(addr)?, handler, tls)
}

/// The accept loop: one thread per connection, at most [`MAX_CONNECTIONS`] at once.
pub fn run_listener<H: Handler + 'static>(
    listener: TcpListener,
    handler: Arc<H>,
    tls: Option<Acceptor>,
) -> io::Result<()> {
    let live = Arc::new(AtomicUsize::new(0));
    loop {
        let (sock, peer) = match listener.accept() {
            Ok(pair) => pair,
            Err(e) if e.kind() == io::ErrorKind::Interrupted => continue,
            Err(e) => return Err(e),
        };
        if live.fetch_add(1, Ordering::SeqCst) >= MAX_CONNECTIONS {
            live.fetch_sub(1, Ordering::SeqCst);
            drop(sock);
            continue;
        }
        let handler = Arc::clone(&handler);
        let tls = tls.clone();
        let live = Arc::clone(&live);
        std::thread::spawn(move || {
            let result = (|| {
                sock.set_read_timeout(Some(IDLE_TIMEOUT))?;
                sock.set_write_timeout(Some(IDLE_TIMEOUT))?;
                let stream: Box<dyn crate::Stream> = match &tls {
                    Some(acceptor) => acceptor.accept(sock)?,
                    None => Box::new(sock),
                };
                serve_connection(stream, peer, &*handler)
            })();
            if let Err(e) = result {
                log(format_args!("connection from {peer} ended: {e}"));
            }
            live.fetch_sub(1, Ordering::SeqCst);
        });
    }
}

fn send<W: Write>(w: &mut W, frame: &Frame) -> io::Result<()> {
    write_frame(w, frame, MAX_REPLY)
}

fn fail<W: Write>(w: &mut W, message: impl Into<String>) -> io::Result<()> {
    send(w, &RpcFail::new(message).to_frame())
}

/// Serve one connection: the handshake, then requests until the peer closes.
pub fn serve_connection<S: Read + Write, H: Handler + ?Sized>(
    mut stream: S,
    peer: SocketAddr,
    handler: &H,
) -> io::Result<()> {
    let session = handshake(&mut stream, peer, handler)?;
    loop {
        let frame = match read_frame_limited(&mut stream, max_payload_for) {
            Ok(f) => f,
            Err(e) if e.kind() == io::ErrorKind::UnexpectedEof => return Ok(()),
            Err(e) => return Err(e),
        };
        match dispatch(&frame, &session, handler) {
            Ok(reply) => send(&mut stream, &reply)?,
            Err(e) => fail(&mut stream, e.to_string())?,
        }
    }
}

fn handshake<S: Read + Write, H: Handler + ?Sized>(
    stream: &mut S,
    peer: SocketAddr,
    handler: &H,
) -> io::Result<Session> {
    let frame = read_frame_limited(stream, |_| DEFAULT_MAX_PAYLOAD)?;
    if frame.id != Packet::Helo.as_u8() {
        let _ = fail(stream, "Expected HELO");
        return Err(io::Error::new(
            io::ErrorKind::InvalidData,
            "first frame was not HELO",
        ));
    }
    let helo = Helo::decode(&frame.payload)?;
    if helo.protocol_version > MAX_PROTOCOL_VERSION {
        let _ = fail(stream, "Lumina protocol version not compatible with server");
        return Err(io::Error::new(
            io::ErrorKind::InvalidData,
            format!("HELO protocol version {}", helo.protocol_version),
        ));
    }
    let accept = match handler.handle_helo(peer, &helo) {
        Ok(a) => a,
        Err(e) => {
            let _ = fail(stream, e.to_string());
            return Err(e);
        }
    };
    if helo.protocol_version >= 5 {
        let reply = HeloResult {
            license: LicenseInfo {
                id: String::new(),
                name: "unlace".into(),
                email: String::new(),
            },
            username: accept.username.clone(),
            karma: 0,
            last_active: unix_now(),
            features: if accept.is_admin { FEATURE_ADMIN } else { 0 },
        };
        send(
            stream,
            &Frame::new(Packet::HeloResult.as_u8(), reply.encode()?),
        )?;
    } else {
        send(stream, &Frame::new(Packet::RpcOk.as_u8(), Vec::new()))?;
    }
    Ok(Session {
        peer,
        protocol_version: helo.protocol_version,
        username: accept.username,
        is_admin: accept.is_admin,
        features: accept.features,
    })
}

/// Why `session` may not run packet `id`, if it may not.
pub fn refusal(id: u8, session: &Session) -> Option<&'static str> {
    let mask = auth_mask(id)?;
    if mask & ADMIN_BIT != 0 && !session.is_admin {
        return Some("Operation not permitted: administrator only");
    }
    let gated = mask & (features::DECOMPILE | features::TELEMETRY);
    if gated & !session.features != 0 {
        return Some("Operation not permitted: feature not enabled for this user");
    }
    None
}

/// A listing's row count from its request: one `dd`, an empty payload means `default`.
fn read_count_arg(payload: &[u8], default: u32) -> io::Result<u32> {
    if payload.is_empty() {
        return Ok(default);
    }
    let mut pos = 0;
    read_vuint32(payload, &mut pos)
}

/// A filtered listing's row limit: an empty or zero count means `DEFAULT_QUERY_ITEMS`.
fn read_query_limit(payload: &[u8]) -> io::Result<u32> {
    let n = read_count_arg(payload, 0)?;
    let n = if n == 0 { DEFAULT_QUERY_ITEMS } else { n };
    Ok(n.min(MAX_QUERY_ITEMS))
}

fn write_record(out: &mut Vec<u8>, row: &FuncRecord) -> io::Result<()> {
    write_raw_bytes(out, &row.key);
    write_cstring(out, &row.info.name)?;
    write_u64_split(out, u64::from(row.info.size));
    write_raw_bytes(out, &row.info.metadata);
    write_vuint32(out, row.popularity);
    Ok(())
}

fn records_frame(packet: Packet, rows: &[FuncRecord]) -> io::Result<Frame> {
    let mut out = Vec::new();
    write_vuint32(&mut out, rows.len() as u32);
    for row in rows {
        write_record(&mut out, row)?;
    }
    Ok(Frame::new(packet.as_u8(), out))
}

fn dispatch<H: Handler + ?Sized>(
    frame: &Frame,
    session: &Session,
    handler: &H,
) -> io::Result<Frame> {
    if let Some(why) = refusal(frame.id, session) {
        return Ok(RpcFail::new(why).to_frame());
    }
    match Packet::from_u8(frame.id) {
        Some(Packet::PullMd) => {
            let req = PullMd::decode(&frame.payload)?;
            let keys: Vec<Vec<u8>> = req.patterns.into_iter().map(|p| p.data).collect();
            let answers = handler.pull(session, &keys)?;
            if answers.len() != keys.len() {
                return Err(io::Error::other(
                    "store answered a different number of keys",
                ));
            }
            PullMdResult::from_answers(answers).to_frame()
        }
        Some(Packet::PushMd) => {
            let req = PushMd::decode(&frame.payload)?;
            let codes = handler.push(session, &req)?;
            PushMdResult { codes }.to_frame()
        }
        Some(Packet::GetLuminaInfo) => {
            let mut out = Vec::new();
            write_cstring(&mut out, &handler.lumina_info(session)?)?;
            Ok(Frame::new(Packet::GetLuminaInfoResult.as_u8(), out))
        }
        Some(Packet::GetLuminaStats) => {
            let s = handler.lumina_stats(session)?;
            let mut out = Vec::new();
            for v in [s.funcs, s.pushes, s.history, s.users] {
                write_u64_split(&mut out, v);
            }
            Ok(Frame::new(Packet::GetLuminaStatsResult.as_u8(), out))
        }
        Some(Packet::GetPop) => {
            let limit = read_count_arg(&frame.payload, 10)?.min(MAX_QUERY_ITEMS);
            let rows = handler.get_pop(session, limit)?;
            records_frame(Packet::GetPopResult, &rows)
        }
        Some(Packet::ShowHistory) => {
            let max = read_query_limit(&frame.payload)?;
            let rows = handler.show_history(session, max)?;
            let mut out = Vec::new();
            write_vuint32(&mut out, rows.len() as u32);
            for row in &rows {
                write_u64_split(&mut out, row.id);
                write_u64_split(&mut out, row.timestamp);
                write_cstring(&mut out, &row.username)?;
                write_record(&mut out, &row.func)?;
            }
            Ok(Frame::new(Packet::ShowHistoryResult.as_u8(), out))
        }
        Some(Packet::DumpMd) => {
            let max = read_query_limit(&frame.payload)?;
            let rows = handler.dump_md(session, max)?;
            records_frame(Packet::DumpMdResult, &rows)
        }
        Some(p) => {
            Ok(RpcFail::new(format!("{} is not implemented by this server", p.name())).to_frame())
        }
        None => Ok(RpcFail::new(format!("Unknown command {}", frame.id)).to_frame()),
    }
}

pub(crate) fn unix_now() -> u64 {
    std::time::SystemTime::now()
        .duration_since(std::time::UNIX_EPOCH)
        .map(|d| d.as_secs())
        .unwrap_or(0)
}

fn log(args: std::fmt::Arguments<'_>) {
    eprintln!("[lumina] {args}");
}

/// A function record as the in-memory and sqlite stores keep it.
pub fn record(info: &FuncInfo, popularity: u32) -> FuncInfoAndFrequency {
    FuncInfoAndFrequency {
        info: info.clone(),
        popularity,
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::net::{IpAddr, Ipv4Addr};

    fn session(is_admin: bool, features: u32) -> Session {
        Session {
            peer: SocketAddr::new(IpAddr::V4(Ipv4Addr::LOCALHOST), 1),
            protocol_version: 6,
            username: "u".into(),
            is_admin,
            features,
        }
    }

    #[test]
    fn admin_commands_need_an_admin() {
        let user = session(false, u32::MAX);
        assert!(refusal(Packet::KillSessions.as_u8(), &user).is_some());
        assert!(refusal(Packet::GetLuminaStats.as_u8(), &user).is_some());
        assert!(refusal(Packet::PullMd.as_u8(), &user).is_none());
        assert!(refusal(Packet::GetLuminaStats.as_u8(), &session(true, 0)).is_none());
        assert!(refusal(Packet::ShowHistory.as_u8(), &user).is_some());
        assert!(refusal(Packet::DumpMd.as_u8(), &user).is_some());
        assert!(refusal(Packet::GetPop.as_u8(), &user).is_none());
    }

    #[test]
    fn feature_bits_gate_decompile_and_telemetry() {
        let plain = session(false, features::METADATA);
        assert!(refusal(Packet::Decompile.as_u8(), &plain).is_some());
        assert!(refusal(Packet::PushTlm.as_u8(), &plain).is_some());
        assert!(refusal(Packet::PushMd.as_u8(), &plain).is_none());
    }

    #[test]
    fn dispatch_answers_unknown_and_unimplemented_packets_with_fail() {
        let h = InMemoryHandler::new();
        let s = session(true, u32::MAX);
        for id in [Packet::ShowPushes.as_u8(), 99] {
            let reply = dispatch(&Frame::new(id, Vec::new()), &s, &h).unwrap();
            assert_eq!(reply.id, Packet::RpcFail.as_u8());
        }
    }

    #[test]
    fn a_connection_that_does_not_start_with_helo_is_refused() {
        let mut wire = Vec::new();
        write_frame(
            &mut wire,
            &Frame::new(Packet::PullMd.as_u8(), vec![0, 0, 0]),
            64,
        )
        .unwrap();
        let mut conn = Duplex {
            input: io::Cursor::new(wire),
            output: Vec::new(),
        };
        let peer = SocketAddr::new(IpAddr::V4(Ipv4Addr::LOCALHOST), 1);
        assert!(serve_connection(&mut conn, peer, &InMemoryHandler::new()).is_err());
        assert_eq!(conn.output[4], Packet::RpcFail.as_u8());
    }

    #[test]
    fn records_frame_layout() {
        let row = FuncRecord {
            key: vec![7; 2],
            info: FuncInfo {
                name: "f".into(),
                size: 0x20,
                metadata: vec![9],
            },
            popularity: 3,
        };
        let frame = records_frame(Packet::GetPopResult, &[row]).unwrap();
        assert_eq!(frame.id, Packet::GetPopResult.as_u8());
        assert_eq!(frame.payload, vec![1, 2, 7, 7, b'f', 0, 0x20, 0, 1, 9, 3]);
    }

    struct Duplex {
        input: io::Cursor<Vec<u8>>,
        output: Vec<u8>,
    }

    impl Read for Duplex {
        fn read(&mut self, buf: &mut [u8]) -> io::Result<usize> {
            self.input.read(buf)
        }
    }

    impl Write for Duplex {
        fn write(&mut self, buf: &[u8]) -> io::Result<usize> {
            self.output.write(buf)
        }

        fn flush(&mut self) -> io::Result<()> {
            Ok(())
        }
    }
}
