//! Minimal Lumina v6 async client. Implements the handshake plus the
//! handful of RPC bodies the CLI needs to drive push/pull workflows.

use std::io;
use std::net::SocketAddr;

use tokio::io::{ReadHalf, WriteHalf};
use tokio::net::TcpStream;

use crate::helo::{Helo, HeloResult};
use crate::protocol::Packet;
use crate::server::FuncMetadata;
use crate::wire::{
    DEFAULT_MAX_PAYLOAD, Frame, read_cstring, read_frame, read_raw_bytes, read_u64_split,
    read_vuint32, write_cstring, write_frame, write_raw_bytes, write_u64_split, write_vuint32,
};

/// Result of a successful HELO handshake (only populated when the peer was
/// version >= 5; older peers reply with an empty `RPC_OK`).
#[derive(Debug, Clone, Default)]
pub struct HandshakeOutcome {
    pub server_banner: Option<String>,
    pub features: u32,
    pub is_admin: bool,
}

/// Lumina client backed by an owned `TcpStream` split into halves.
pub struct Client {
    r: ReadHalf<TcpStream>,
    w: WriteHalf<TcpStream>,
    proto: u32,
}

impl Client {
    /// Connect to `addr` (no handshake performed yet).
    pub async fn connect(addr: SocketAddr) -> io::Result<Self> {
        let sock = TcpStream::connect(addr).await?;
        let (r, w) = tokio::io::split(sock);
        Ok(Self { r, w, proto: 0 })
    }

    /// Send a HELO at `protocol_version` with the supplied credentials, then
    /// read the server's response (empty `RPC_OK` for proto <= 4, or
    /// `HELO_RESULT` for proto >= 5).
    pub async fn helo(
        &mut self,
        protocol_version: u32,
        username: &str,
        password: &str,
    ) -> io::Result<HandshakeOutcome> {
        let h = Helo {
            protocol_version,
            license_blob: Vec::new(),
            license_id: [0u8; 6],
            record_conv: false,
            username: if protocol_version > 2 {
                Some(username.into())
            } else {
                None
            },
            password: if protocol_version > 2 {
                Some(password.into())
            } else {
                None
            },
        };
        let payload = h.encode()?;
        write_frame(
            &mut self.w,
            &Frame::new(Packet::Helo.as_u8(), payload),
            DEFAULT_MAX_PAYLOAD,
        )
        .await?;

        let reply = read_frame(&mut self.r, DEFAULT_MAX_PAYLOAD).await?;
        self.proto = protocol_version;
        if reply.id == Packet::HeloResult.as_u8() {
            let parsed = HeloResult::decode(&reply.payload)?;
            return Ok(HandshakeOutcome {
                server_banner: Some(parsed.welcome),
                features: parsed.features,
                is_admin: parsed.is_admin,
            });
        }
        if reply.id == Packet::RpcOk.as_u8() {
            return Ok(HandshakeOutcome::default());
        }
        if reply.id == Packet::RpcFail.as_u8() {
            let mut pos = 0;
            let msg = read_cstring(&reply.payload, &mut pos).unwrap_or_default();
            return Err(io::Error::new(io::ErrorKind::PermissionDenied, msg));
        }
        Err(io::Error::new(
            io::ErrorKind::InvalidData,
            format!("unexpected handshake reply id {}", reply.id),
        ))
    }

    /// `PULL_MD` over the wire: request rows for each of `hashes`.
    pub async fn pull_md(&mut self, hashes: &[[u8; 32]]) -> io::Result<Vec<Option<FuncMetadata>>> {
        let mut payload = Vec::new();
        write_vuint32(&mut payload, hashes.len() as u32);
        for h in hashes {
            payload.extend_from_slice(h);
        }
        let reply = self
            .raw_request(Frame::new(Packet::PullMd.as_u8(), payload))
            .await?;
        if reply.id != Packet::PullMdResult.as_u8() {
            return Err(rpc_error(&reply, "PULL_MD"));
        }
        let buf = &reply.payload;
        let mut pos = 0;
        let count = read_vuint32(buf, &mut pos)? as usize;
        let mut out = Vec::with_capacity(count);
        for _ in 0..count {
            let status = read_vuint32(buf, &mut pos)?;
            if status == 0 {
                let name = read_cstring(buf, &mut pos)?;
                let size = read_u64_split(buf, &mut pos)?;
                let metadata = read_raw_bytes(buf, &mut pos)?;
                let counter = read_vuint32(buf, &mut pos)?;
                out.push(Some(FuncMetadata {
                    name,
                    size,
                    metadata,
                    counter,
                    calcrel_hash: [0u8; 32], // server doesn't echo the hash
                }));
            } else {
                out.push(None);
            }
        }
        Ok(out)
    }

    /// `PUSH_MD` over the wire: upload one or more records.
    pub async fn push_md(&mut self, recs: &[FuncMetadata]) -> io::Result<Vec<u32>> {
        let mut payload = Vec::new();
        write_vuint32(&mut payload, recs.len() as u32);
        for r in recs {
            write_cstring(&mut payload, &r.name)?;
            write_u64_split(&mut payload, r.size);
            write_raw_bytes(&mut payload, &r.metadata);
            write_vuint32(&mut payload, r.counter);
            payload.extend_from_slice(&r.calcrel_hash);
        }
        let reply = self
            .raw_request(Frame::new(Packet::PushMd.as_u8(), payload))
            .await?;
        if reply.id != Packet::PushMdResult.as_u8() {
            return Err(rpc_error(&reply, "PUSH_MD"));
        }
        let buf = &reply.payload;
        let mut pos = 0;
        let count = read_vuint32(buf, &mut pos)? as usize;
        let mut out = Vec::with_capacity(count);
        for _ in 0..count {
            out.push(read_vuint32(buf, &mut pos)?);
        }
        Ok(out)
    }

    /// Send `frame` and read back a single reply frame. Used by tests and
    /// the CLI for commands we haven't typed yet.
    pub async fn raw_request(&mut self, frame: Frame) -> io::Result<Frame> {
        write_frame(&mut self.w, &frame, DEFAULT_MAX_PAYLOAD).await?;
        read_frame(&mut self.r, DEFAULT_MAX_PAYLOAD).await
    }
}

fn rpc_error(reply: &Frame, ctx: &str) -> io::Error {
    if reply.id == Packet::RpcFail.as_u8() {
        let mut pos = 0;
        let msg = read_cstring(&reply.payload, &mut pos).unwrap_or_default();
        return io::Error::other(format!("{ctx}: {msg}"));
    }
    io::Error::new(
        io::ErrorKind::InvalidData,
        format!("{ctx}: unexpected reply id {}", reply.id),
    )
}
