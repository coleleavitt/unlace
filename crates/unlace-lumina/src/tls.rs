//! TLS transport over rustls (ring provider). The client trusts the webpki roots unless given a CA
//! file (a self-hosted server's certificate, or the CA Hex-Rays ships with IDA); the server takes a PEM
//! certificate chain and key. Without the `tls` feature every entry point reports `Unsupported`.

use std::io;
use std::net::TcpStream;
use std::path::PathBuf;

use crate::Stream;

#[derive(Debug, Clone, Default)]
pub struct ClientTls {
    /// PEM file of the CAs to trust instead of the webpki roots.
    pub ca_file: Option<PathBuf>,
    /// The name to verify the certificate against, when it differs from the host dialled.
    pub server_name: Option<String>,
}

#[derive(Debug, Clone)]
pub struct ServerTls {
    pub cert_file: PathBuf,
    pub key_file: PathBuf,
}

/// Whether this build carries TLS.
pub fn available() -> bool {
    cfg!(feature = "tls")
}

#[cfg(not(feature = "tls"))]
fn unsupported() -> io::Error {
    io::Error::new(
        io::ErrorKind::Unsupported,
        "this build of unlace-lumina has no TLS support (feature `tls`)",
    )
}

#[cfg(feature = "tls")]
fn other(e: impl std::fmt::Display) -> io::Error {
    io::Error::other(e.to_string())
}

#[cfg(feature = "tls")]
fn provider() -> std::sync::Arc<rustls::crypto::CryptoProvider> {
    std::sync::Arc::new(rustls::crypto::ring::default_provider())
}

/// Wrap a connected socket in a TLS client session for `host`.
#[cfg(feature = "tls")]
pub fn client_stream(tcp: TcpStream, host: &str, opts: &ClientTls) -> io::Result<Box<dyn Stream>> {
    use rustls::pki_types::pem::PemObject;
    use rustls::pki_types::{CertificateDer, ServerName};

    let mut roots = rustls::RootCertStore::empty();
    match &opts.ca_file {
        Some(path) => {
            let certs = CertificateDer::pem_file_iter(path)
                .map_err(|e| other(format!("{}: {e}", path.display())))?;
            for cert in certs {
                let cert = cert.map_err(|e| other(format!("{}: {e}", path.display())))?;
                roots.add(cert).map_err(other)?;
            }
            if roots.is_empty() {
                return Err(other(format!(
                    "{}: no certificate in the file",
                    path.display()
                )));
            }
        }
        None => roots.extend(webpki_roots::TLS_SERVER_ROOTS.iter().cloned()),
    }
    let config = rustls::ClientConfig::builder_with_provider(provider())
        .with_safe_default_protocol_versions()
        .map_err(other)?
        .with_root_certificates(roots)
        .with_no_client_auth();
    let name = opts.server_name.as_deref().unwrap_or(host);
    let server_name = ServerName::try_from(name.to_owned()).map_err(|e| {
        io::Error::new(
            io::ErrorKind::InvalidInput,
            format!("TLS server name {name:?}: {e}"),
        )
    })?;
    let conn =
        rustls::ClientConnection::new(std::sync::Arc::new(config), server_name).map_err(other)?;
    Ok(Box::new(rustls::StreamOwned::new(conn, tcp)))
}

#[cfg(not(feature = "tls"))]
pub fn client_stream(
    tcp: TcpStream,
    _host: &str,
    _opts: &ClientTls,
) -> io::Result<Box<dyn Stream>> {
    drop(tcp);
    Err(unsupported())
}

/// The server side: a loaded certificate and key, shared by every connection.
#[derive(Clone)]
pub struct Acceptor {
    #[cfg(feature = "tls")]
    config: std::sync::Arc<rustls::ServerConfig>,
}

impl Acceptor {
    #[cfg(feature = "tls")]
    pub fn from_files(opts: &ServerTls) -> io::Result<Self> {
        use rustls::pki_types::pem::PemObject;
        use rustls::pki_types::{CertificateDer, PrivateKeyDer};

        let certs = CertificateDer::pem_file_iter(&opts.cert_file)
            .map_err(|e| other(format!("{}: {e}", opts.cert_file.display())))?
            .collect::<Result<Vec<_>, _>>()
            .map_err(|e| other(format!("{}: {e}", opts.cert_file.display())))?;
        if certs.is_empty() {
            return Err(other(format!(
                "{}: no certificate in the file",
                opts.cert_file.display()
            )));
        }
        let key = PrivateKeyDer::from_pem_file(&opts.key_file)
            .map_err(|e| other(format!("{}: {e}", opts.key_file.display())))?;
        let config = rustls::ServerConfig::builder_with_provider(provider())
            .with_safe_default_protocol_versions()
            .map_err(other)?
            .with_no_client_auth()
            .with_single_cert(certs, key)
            .map_err(other)?;
        Ok(Self {
            config: std::sync::Arc::new(config),
        })
    }

    #[cfg(not(feature = "tls"))]
    pub fn from_files(_opts: &ServerTls) -> io::Result<Self> {
        Err(unsupported())
    }

    #[cfg(feature = "tls")]
    pub fn accept(&self, tcp: TcpStream) -> io::Result<Box<dyn Stream>> {
        let conn =
            rustls::ServerConnection::new(std::sync::Arc::clone(&self.config)).map_err(other)?;
        Ok(Box::new(rustls::StreamOwned::new(conn, tcp)))
    }

    #[cfg(not(feature = "tls"))]
    pub fn accept(&self, tcp: TcpStream) -> io::Result<Box<dyn Stream>> {
        drop(tcp);
        Err(unsupported())
    }
}
