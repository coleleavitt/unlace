//! Lumina-style self-hosted annotation server protocol.
//!
//! Annotations are keyed by a 32-byte function hash (e.g. SHA-256 of the
//! function's normalized byte stream). Clients can push annotations
//! (function/variable names, free-form comments, struct layouts) and
//! query all annotations attached to a given function hash.
//!
//! Wire protocol (JSON over HTTP):
//!   - `POST /annotation`            body: [`Annotation`]
//!   - `GET  /annotations/:fnhash`   fnhash = 64 hex chars, returns `Vec<Annotation>`
//!
//! The server is a tiny `axum` application backed by an in-memory
//! [`AnnotationServer`] behind a `tokio::sync::RwLock`.

use std::collections::BTreeMap;
use std::sync::Arc;

use axum::{
    Json, Router,
    extract::{Path, State},
    http::StatusCode,
    routing::{get, post},
};
use serde::{Deserialize, Serialize};
use tokio::sync::RwLock;

/// Kind discriminator for an [`Annotation`].
#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
pub enum AnnotationKind {
    FunctionName,
    VariableName,
    Comment,
    StructLayout,
}

/// A single user-authored annotation attached to a function (by content hash).
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct Annotation {
    /// 32-byte content hash of the function this annotation targets.
    #[serde(with = "hex32")]
    pub function_hash: [u8; 32],
    /// Symbol name being annotated (function name, variable name, struct tag…).
    pub name: String,
    /// Discriminator for the payload semantics.
    pub kind: AnnotationKind,
    /// Free-form comment / payload (for `StructLayout` this is typically JSON).
    pub comment: String,
    /// Author identity (opaque to the server).
    pub author: String,
    /// Unix epoch seconds.
    pub timestamp: u64,
}

/// In-memory annotation store, keyed by function hash.
#[derive(Debug, Default, Clone)]
pub struct AnnotationServer {
    pub db: BTreeMap<[u8; 32], Vec<Annotation>>,
}

impl AnnotationServer {
    pub fn new() -> Self {
        Self::default()
    }

    /// Append an annotation to the bucket for its `function_hash`.
    pub fn insert(&mut self, ann: Annotation) {
        self.db.entry(ann.function_hash).or_default().push(ann);
    }

    /// Return all annotations attached to `fnhash` (empty slice if none).
    pub fn get(&self, fnhash: &[u8; 32]) -> &[Annotation] {
        self.db.get(fnhash).map(Vec::as_slice).unwrap_or(&[])
    }

    /// Total annotation count across all functions.
    pub fn len(&self) -> usize {
        self.db.values().map(Vec::len).sum()
    }

    pub fn is_empty(&self) -> bool {
        self.db.is_empty()
    }
}

/// Shared state used by the HTTP handlers.
pub type SharedState = Arc<RwLock<AnnotationServer>>;

/// Build an `axum::Router` wired to the supplied [`SharedState`].
pub fn router(state: SharedState) -> Router {
    Router::new()
        .route("/annotation", post(post_annotation))
        .route("/annotations/:fnhash", get(get_annotations))
        .with_state(state)
}

async fn post_annotation(
    State(state): State<SharedState>,
    Json(ann): Json<Annotation>,
) -> StatusCode {
    state.write().await.insert(ann);
    StatusCode::CREATED
}

async fn get_annotations(
    State(state): State<SharedState>,
    Path(fnhash): Path<String>,
) -> Result<Json<Vec<Annotation>>, StatusCode> {
    let bytes = parse_hex32(&fnhash).ok_or(StatusCode::BAD_REQUEST)?;
    let guard = state.read().await;
    Ok(Json(guard.get(&bytes).to_vec()))
}

fn parse_hex32(s: &str) -> Option<[u8; 32]> {
    if s.len() != 64 {
        return None;
    }
    let mut out = [0u8; 32];
    for (i, chunk) in s.as_bytes().chunks(2).enumerate() {
        let hi = hex_nibble(chunk[0])?;
        let lo = hex_nibble(chunk[1])?;
        out[i] = (hi << 4) | lo;
    }
    Some(out)
}

fn hex_nibble(b: u8) -> Option<u8> {
    match b {
        b'0'..=b'9' => Some(b - b'0'),
        b'a'..=b'f' => Some(b - b'a' + 10),
        b'A'..=b'F' => Some(b - b'A' + 10),
        _ => None,
    }
}

fn encode_hex32(b: &[u8; 32]) -> String {
    const HEX: &[u8; 16] = b"0123456789abcdef";
    let mut s = String::with_capacity(64);
    for &byte in b {
        s.push(HEX[(byte >> 4) as usize] as char);
        s.push(HEX[(byte & 0xf) as usize] as char);
    }
    s
}

/// Convenience: SHA-256 of an arbitrary byte slice (e.g. a function's bytes).
pub fn hash_function_bytes(bytes: &[u8]) -> [u8; 32] {
    use sha2::{Digest, Sha256};
    let mut h = Sha256::new();
    h.update(bytes);
    h.finalize().into()
}

mod hex32 {
    use super::{encode_hex32, parse_hex32};
    use serde::{Deserialize, Deserializer, Serializer, de::Error};

    pub fn serialize<S: Serializer>(b: &[u8; 32], s: S) -> Result<S::Ok, S::Error> {
        s.serialize_str(&encode_hex32(b))
    }

    pub fn deserialize<'de, D: Deserializer<'de>>(d: D) -> Result<[u8; 32], D::Error> {
        let s = String::deserialize(d)?;
        parse_hex32(&s).ok_or_else(|| D::Error::custom("expected 64 hex chars"))
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::net::SocketAddr;
    use tokio::net::TcpListener;

    /// Spawn the router on a loopback ephemeral port and return its base URL +
    /// a handle to the shared state for inspection.
    async fn spawn_server() -> (String, SharedState) {
        let state: SharedState = Arc::new(RwLock::new(AnnotationServer::new()));
        let app = router(state.clone());
        let listener = TcpListener::bind(SocketAddr::from(([127, 0, 0, 1], 0)))
            .await
            .expect("bind");
        let addr = listener.local_addr().expect("local_addr");
        tokio::spawn(async move {
            axum::serve(listener, app).await.expect("serve");
        });
        (format!("http://{addr}"), state)
    }

    fn sample_ann(seed: u8, kind: AnnotationKind, name: &str) -> Annotation {
        Annotation {
            function_hash: [seed; 32],
            name: name.into(),
            kind,
            comment: format!("comment-{seed}"),
            author: "alice".into(),
            timestamp: 1_700_000_000 + seed as u64,
        }
    }

    #[test]
    fn in_memory_insert_get_roundtrip() {
        let mut srv = AnnotationServer::new();
        let a = sample_ann(0x11, AnnotationKind::FunctionName, "decode_packet");
        let b = sample_ann(0x11, AnnotationKind::Comment, "parses header");
        srv.insert(a.clone());
        srv.insert(b.clone());

        let got = srv.get(&[0x11; 32]);
        assert_eq!(got, &[a, b][..]);
        assert!(srv.get(&[0xff; 32]).is_empty());
        assert_eq!(srv.len(), 2);
    }

    #[test]
    fn annotation_json_roundtrip_preserves_hash_and_kind() {
        let ann = sample_ann(0xab, AnnotationKind::StructLayout, "packet_t");
        let json = serde_json::to_string(&ann).expect("ser");
        // Function hash must serialize as 64-char lowercase hex.
        assert!(json.contains(&"ab".repeat(32)));
        assert!(json.contains("\"StructLayout\""));
        let back: Annotation = serde_json::from_str(&json).expect("de");
        assert_eq!(ann, back);
    }

    #[tokio::test]
    async fn http_post_then_get_roundtrip() {
        let (base, _state) = spawn_server().await;
        let ann = sample_ann(0x42, AnnotationKind::VariableName, "ctx");

        // POST /annotation
        let body = serde_json::to_vec(&ann).expect("ser");
        let resp = http_request(&format!("{base}/annotation"), "POST", Some(&body))
            .await
            .expect("post");
        assert_eq!(resp.status, 201, "POST status: {}", resp.status);

        // GET /annotations/:fnhash
        let hex = encode_hex32(&ann.function_hash);
        let resp = http_request(&format!("{base}/annotations/{hex}"), "GET", None)
            .await
            .expect("get");
        assert_eq!(resp.status, 200, "GET status: {}", resp.status);
        let list: Vec<Annotation> = serde_json::from_slice(&resp.body).expect("de list");
        assert_eq!(list, vec![ann]);
    }

    #[tokio::test]
    async fn http_get_unknown_hash_returns_empty_list() {
        let (base, _state) = spawn_server().await;
        let hex = encode_hex32(&[0u8; 32]);
        let resp = http_request(&format!("{base}/annotations/{hex}"), "GET", None)
            .await
            .expect("get");
        assert_eq!(resp.status, 200);
        let list: Vec<Annotation> = serde_json::from_slice(&resp.body).expect("de");
        assert!(list.is_empty());

        // Malformed hash -> 400
        let resp = http_request(&format!("{base}/annotations/notahex"), "GET", None)
            .await
            .expect("get");
        assert_eq!(resp.status, 400);
    }

    // --- Minimal HTTP/1.1 client (avoids pulling reqwest just for tests) ---

    struct HttpResponse {
        status: u16,
        body: Vec<u8>,
    }

    async fn http_request(
        url: &str,
        method: &str,
        body: Option<&[u8]>,
    ) -> std::io::Result<HttpResponse> {
        use tokio::io::{AsyncReadExt, AsyncWriteExt};
        use tokio::net::TcpStream;

        let rest = url.strip_prefix("http://").expect("http url");
        let (authority, path) = rest
            .split_once('/')
            .map(|(a, p)| (a, format!("/{p}")))
            .unwrap_or((rest, "/".into()));

        let mut req =
            format!("{method} {path} HTTP/1.1\r\nHost: {authority}\r\nConnection: close\r\n");
        if let Some(b) = body {
            req.push_str(&format!(
                "Content-Type: application/json\r\nContent-Length: {}\r\n",
                b.len()
            ));
        }
        req.push_str("\r\n");

        let mut stream = TcpStream::connect(authority).await?;
        stream.write_all(req.as_bytes()).await?;
        if let Some(b) = body {
            stream.write_all(b).await?;
        }
        stream.flush().await?;

        let mut buf = Vec::with_capacity(1024);
        stream.read_to_end(&mut buf).await?;

        let split = buf
            .windows(4)
            .position(|w| w == b"\r\n\r\n")
            .ok_or_else(|| std::io::Error::new(std::io::ErrorKind::InvalidData, "no header end"))?;
        let header = std::str::from_utf8(&buf[..split])
            .map_err(|e| std::io::Error::new(std::io::ErrorKind::InvalidData, e))?;
        let body = buf[split + 4..].to_vec();

        let status_line = header.lines().next().unwrap_or("");
        let status: u16 = status_line
            .split_whitespace()
            .nth(1)
            .and_then(|s| s.parse().ok())
            .unwrap_or(0);

        // Strip chunked-encoding framing if axum used it. Connection: close
        // means the body up to EOF is the payload, but axum may still chunk it.
        let body = if header
            .to_ascii_lowercase()
            .contains("transfer-encoding: chunked")
        {
            dechunk(&body)
        } else {
            body
        };

        Ok(HttpResponse { status, body })
    }

    fn dechunk(input: &[u8]) -> Vec<u8> {
        let mut out = Vec::with_capacity(input.len());
        let mut i = 0;
        while i < input.len() {
            // read hex size line
            let line_end = match input[i..].windows(2).position(|w| w == b"\r\n") {
                Some(p) => i + p,
                None => break,
            };
            let size_str = std::str::from_utf8(&input[i..line_end]).unwrap_or("0");
            let size = usize::from_str_radix(size_str.trim(), 16).unwrap_or(0);
            i = line_end + 2;
            if size == 0 {
                break;
            }
            if i + size > input.len() {
                break;
            }
            out.extend_from_slice(&input[i..i + size]);
            i += size + 2; // trailing CRLF
        }
        out
    }
}
pub mod privacy_client;
        let mut req = format!(
            "{method} {path} HTTP/1.1\r\nHost: {authority}\r\nConnection: close\r\n"
        );
        if let Some(b) = body {
            req.push_str(&format!(
                "Content-Type: application/json\r\nContent-Length: {}\r\n",
                b.len()
            ));
        }
        req.push_str("\r\n");

        let mut stream = TcpStream::connect(authority).await?;
        stream.write_all(req.as_bytes()).await?;
        if let Some(b) = body {
            stream.write_all(b).await?;
        }
        stream.flush().await?;

        let mut buf = Vec::with_capacity(1024);
        stream.read_to_end(&mut buf).await?;

        let split = buf
            .windows(4)
            .position(|w| w == b"\r\n\r\n")
            .ok_or_else(|| std::io::Error::new(std::io::ErrorKind::InvalidData, "no header end"))?;
        let header = std::str::from_utf8(&buf[..split])
            .map_err(|e| std::io::Error::new(std::io::ErrorKind::InvalidData, e))?;
        let body = buf[split + 4..].to_vec();

        let status_line = header.lines().next().unwrap_or("");
        let status: u16 = status_line
            .split_whitespace()
            .nth(1)
            .and_then(|s| s.parse().ok())
            .unwrap_or(0);

        // Strip chunked-encoding framing if axum used it. Connection: close
        // means the body up to EOF is the payload, but axum may still chunk it.
        let body = if header.to_ascii_lowercase().contains("transfer-encoding: chunked") {
            dechunk(&body)
        } else {
            body
        };

        Ok(HttpResponse { status, body })
    }

    fn dechunk(input: &[u8]) -> Vec<u8> {
        let mut out = Vec::with_capacity(input.len());
        let mut i = 0;
        while i < input.len() {
            // read hex size line
            let line_end = match input[i..].windows(2).position(|w| w == b"\r\n") {
                Some(p) => i + p,
                None => break,
            };
            let size_str = std::str::from_utf8(&input[i..line_end]).unwrap_or("0");
            let size = usize::from_str_radix(size_str.trim(), 16).unwrap_or(0);
            i = line_end + 2;
            if size == 0 {
                break;
            }
            if i + size > input.len() {
                break;
            }
            out.extend_from_slice(&input[i..i + size]);
            i += size + 2; // trailing CRLF
        }
        out
    }
}
pub mod collab;
pub mod conflict_ui;
