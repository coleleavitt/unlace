//! A blocking Lumina client: connect (plain or TLS), HELO, then `PULL_MD`/`PUSH_MD` in batches.

use std::io;
use std::net::{SocketAddr, TcpStream, ToSocketAddrs};
use std::time::Duration;

use crate::Stream;
use crate::helo::{Helo, HeloResult};
use crate::messages::{
    FuncInfoAndFrequency, PatternId, PullMd, PullMdResult, PushMd, PushMdResult, RpcFail,
};
use crate::protocol::Packet;
use crate::tls::{self, ClientTls};
use crate::wire::{
    DEFAULT_MAX_PAYLOAD, Frame, MAX_PUSH_PAYLOAD, read_cstring, read_frame_limited, write_frame,
};

/// Keys per `PULL_MD`.
pub const PULL_BATCH: usize = 4096;

/// Functions per `PUSH_MD`.
pub const PUSH_BATCH: usize = 1024;

#[derive(Debug, Clone, Default)]
pub struct ConnectOptions {
    /// Connect, read and write timeout; `None` waits forever.
    pub timeout: Option<Duration>,
    /// `Some` speaks TLS.
    pub tls: Option<ClientTls>,
}

pub struct Client {
    stream: Box<dyn Stream>,
    protocol_version: u32,
}

fn invalid(msg: &str) -> io::Error {
    io::Error::new(io::ErrorKind::InvalidData, msg.to_string())
}

/// The host part of `HOST:PORT` (`[v6]:PORT` accepted).
pub fn host_of(server: &str) -> io::Result<&str> {
    let bad = || {
        io::Error::new(
            io::ErrorKind::InvalidInput,
            format!("server {server:?}: expected HOST:PORT"),
        )
    };
    let (host, port) = server.rsplit_once(':').ok_or_else(bad)?;
    port.parse::<u16>().map_err(|_| bad())?;
    let host = host
        .strip_prefix('[')
        .and_then(|h| h.strip_suffix(']'))
        .unwrap_or(host);
    if host.is_empty() {
        return Err(bad());
    }
    Ok(host)
}

fn dial(server: &str, timeout: Option<Duration>) -> io::Result<TcpStream> {
    let addrs: Vec<SocketAddr> = server.to_socket_addrs()?.collect();
    let mut last = io::Error::new(
        io::ErrorKind::NotFound,
        format!("{server}: no address to connect to"),
    );
    for addr in addrs {
        let attempt = match timeout {
            Some(t) => TcpStream::connect_timeout(&addr, t),
            None => TcpStream::connect(addr),
        };
        match attempt {
            Ok(s) => return Ok(s),
            Err(e) => last = e,
        }
    }
    Err(last)
}

/// The error a `RPC_FAIL`/`RPC_NOTIFY` (or an unexpected packet) in reply to `ctx` stands for.
fn reply_error(reply: &Frame, ctx: &str, kind: io::ErrorKind) -> io::Error {
    if reply.id == Packet::RpcFail.as_u8() || reply.id == Packet::RpcNotify.as_u8() {
        let fail = RpcFail::decode(&reply.payload);
        return io::Error::new(kind, format!("{ctx}: server said: {}", fail.message));
    }
    io::Error::new(
        io::ErrorKind::InvalidData,
        format!("{ctx}: unexpected reply packet {}", reply.id),
    )
}

impl Client {
    /// Open a connection to `server` (`HOST:PORT`). No packet is sent until [`Client::helo`].
    pub fn connect(server: &str, opts: &ConnectOptions) -> io::Result<Self> {
        let host = host_of(server)?;
        let tcp = dial(server, opts.timeout)?;
        tcp.set_read_timeout(opts.timeout)?;
        tcp.set_write_timeout(opts.timeout)?;
        tcp.set_nodelay(true)?;
        let stream: Box<dyn Stream> = match &opts.tls {
            Some(t) => tls::client_stream(tcp, host, t)?,
            None => Box::new(tcp),
        };
        Ok(Self::from_stream(stream))
    }

    pub fn from_stream(stream: Box<dyn Stream>) -> Self {
        Self {
            stream,
            protocol_version: 0,
        }
    }

    pub fn protocol_version(&self) -> u32 {
        self.protocol_version
    }

    /// Log in. A protocol-5-or-later server answers with its user object; an older one with `RPC_OK`
    /// (`None`).
    pub fn helo(&mut self, helo: &Helo) -> io::Result<Option<HeloResult>> {
        let reply = self.request(&Frame::new(Packet::Helo.as_u8(), helo.encode()?))?;
        match Packet::from_u8(reply.id) {
            Some(Packet::HeloResult) => {
                self.protocol_version = helo.protocol_version;
                Ok(Some(HeloResult::decode(&reply.payload)?))
            }
            Some(Packet::RpcOk) => {
                self.protocol_version = helo.protocol_version;
                Ok(None)
            }
            _ => Err(reply_error(&reply, "HELO", io::ErrorKind::PermissionDenied)),
        }
    }

    /// Pull by calcrel key: one answer per key, in order.
    pub fn pull_md(&mut self, keys: &[[u8; 16]]) -> io::Result<Vec<Option<FuncInfoAndFrequency>>> {
        let mut out = Vec::with_capacity(keys.len());
        for batch in keys.chunks(PULL_BATCH) {
            let req = PullMd {
                flags: 0,
                keys: Vec::new(),
                patterns: batch.iter().map(|k| PatternId::md5(*k)).collect(),
            };
            let reply = self.request(&req.to_frame()?)?;
            if reply.id != Packet::PullMdResult.as_u8() {
                return Err(reply_error(&reply, "PULL_MD", io::ErrorKind::Other));
            }
            let answers = PullMdResult::decode(&reply.payload)?.answers()?;
            if answers.len() != batch.len() {
                return Err(invalid(
                    "PULL_MD_RESULT answers a different number of keys than were asked",
                ));
            }
            out.extend(answers);
        }
        Ok(out)
    }

    /// Push `push.contents` in batches; one result code per function, in order. `push.eas` travels
    /// only when it has one address per function.
    pub fn push_md(&mut self, push: &PushMd) -> io::Result<Vec<i32>> {
        let n = push.contents.len();
        let mut codes = Vec::with_capacity(n);
        for (i, batch) in push.contents.chunks(PUSH_BATCH).enumerate() {
            let lo = i * PUSH_BATCH;
            let eas = if push.eas.len() == n {
                push.eas[lo..lo + batch.len()].to_vec()
            } else {
                Vec::new()
            };
            let req = PushMd {
                flags: push.flags,
                idb: push.idb.clone(),
                input_path: push.input_path.clone(),
                input_md5: push.input_md5,
                hostname: push.hostname.clone(),
                contents: batch.to_vec(),
                eas,
            };
            let reply = self.request(&req.to_frame()?)?;
            if reply.id != Packet::PushMdResult.as_u8() {
                return Err(reply_error(&reply, "PUSH_MD", io::ErrorKind::Other));
            }
            let got = PushMdResult::decode(&reply.payload)?.codes;
            if got.len() != batch.len() {
                return Err(invalid(
                    "PUSH_MD_RESULT answers a different number of functions than were pushed",
                ));
            }
            codes.extend(got);
        }
        Ok(codes)
    }

    /// `GET_LUMINA_INFO`: the server's banner.
    pub fn lumina_info(&mut self) -> io::Result<String> {
        let reply = self.request(&Frame::new(Packet::GetLuminaInfo.as_u8(), Vec::new()))?;
        if reply.id != Packet::GetLuminaInfoResult.as_u8() {
            return Err(reply_error(&reply, "GET_LUMINA_INFO", io::ErrorKind::Other));
        }
        let mut pos = 0;
        read_cstring(&reply.payload, &mut pos)
    }

    /// Send one frame and read the reply.
    pub fn request(&mut self, frame: &Frame) -> io::Result<Frame> {
        write_frame(&mut self.stream, frame, MAX_PUSH_PAYLOAD)?;
        read_frame_limited(&mut self.stream, |id| {
            if id == Packet::PullMdResult.as_u8() {
                MAX_PUSH_PAYLOAD
            } else {
                DEFAULT_MAX_PAYLOAD
            }
        })
    }
}

#[cfg(test)]
mod tests;
