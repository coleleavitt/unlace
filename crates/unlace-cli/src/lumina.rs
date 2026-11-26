//! `unlace lumina` — IDA's Lumina function-metadata service: hash a binary's functions, pull names and
//! prototypes for them from a server, push the binary's own names, or run a server.
//!
//! ```text
//!   unlace lumina hash  <binary> [--addr A].. [--json]
//!   unlace lumina pull  <binary> --server HOST:PORT [net flags] [--addr A].. [--define-out F]
//!                       [--assert-out F] [--rename-named] [--json]
//!   unlace lumina push  <binary> --server HOST:PORT [net flags] [--addr A].. [--mode M] [--dry-run] [--json]
//!   unlace lumina serve --db FILE [--bind ADDR] [--tls-cert PEM --tls-key PEM] [--json]
//!   unlace lumina serve --db FILE --add-user NAME [--admin]
//! ```
//!
//! Only `pull`, `push` (without `--dry-run`) and `serve` touch the network, and only the server the
//! command names. A pull applies nothing by itself: it writes the `--define-function` and `--assert`
//! files every other subcommand reads (`--define-out`, `--assert-out`), so the names it found reach
//! the decompiler through the same override path as a caller's own.

mod calcrel;

use std::fmt::Write as _;
use std::net::SocketAddr;
use std::sync::Arc;
use std::time::Duration;

use serde_json::{Value, json};
use unlace_lumina::client::{Client, ConnectOptions};
use unlace_lumina::db::SqliteStore;
use unlace_lumina::hash::hex;
use unlace_lumina::helo::{DEFAULT_PROTOCOL_VERSION, Helo, HeloResult, MAX_PROTOCOL_VERSION};
use unlace_lumina::messages::{FuncInfo, FuncInfoAndPattern, PatternId, PushMd, codes, push_mode};
use unlace_lumina::metadata;
use unlace_lumina::privacy::{self, PrivacyPolicy};
use unlace_lumina::tinfo;
use unlace_lumina::tls::{Acceptor, ClientTls, ServerTls};

use crate::args::take_value;

const ENV_SERVER: &str = "UNLACE_LUMINA_SERVER";
const ENV_USER: &str = "UNLACE_LUMINA_USER";
const ENV_PASSWORD: &str = "UNLACE_LUMINA_PASSWORD";
const ENV_LICENSE: &str = "UNLACE_LUMINA_LICENSE_FILE";
const ENV_TLS: &str = "UNLACE_LUMINA_TLS";
const ENV_TLS_CA: &str = "UNLACE_LUMINA_TLS_CA";

const DEFAULT_BIND: &str = "127.0.0.1:65432";
const DEFAULT_TIMEOUT_SECS: u64 = 30;

fn usage() {
    eprintln!(
        "usage: unlace lumina hash  <binary> [--addr A].. [--json]\n\
         \x20      unlace lumina pull  <binary> --server HOST:PORT [--tls] [--tls-ca PEM] [--tls-server-name N]\n\
         \x20                          [--user U] [--password-file F] [--license-file F] [--license-id HEX12]\n\
         \x20                          [--protocol N] [--timeout SECS] [--addr A].. [--define-out FILE]\n\
         \x20                          [--assert-out FILE] [--project FILE] [--rename-named] [--json]\n\
         \x20      unlace lumina push  <binary> --server HOST:PORT [same network flags] [--addr A]..\n\
         \x20                          [--mode override-if-better|override|keep|merge] [--hostname H] [--share-policy FILE] [--dry-run] [--json]\n\
         \x20      unlace lumina serve --db FILE [--bind ADDR (default {DEFAULT_BIND})] [--tls-cert PEM --tls-key PEM] [--json]\n\
         \x20      unlace lumina serve --db FILE --add-user NAME [--admin]   (password from --password-file or ${ENV_PASSWORD})\n\
         \n\
         IDA's Lumina: functions are keyed by the MD5 of their bytes with address operands masked.\n\
         hash computes the keys offline. pull asks a server for them and reports names, prototypes and\n\
         comments; --define-out writes the names as a --define-function file (only for functions the\n\
         binary leaves unnamed, unless --rename-named) and --assert-out the prototypes as --assert\n\
         'prototype NAME DECL' lines; pass those files to decompile/decompile-all to apply them, or\n\
         --project FILE stores the same directives in an 'unlace project' file bound to the binary.\n\
         push sends the binary's named functions; serve runs a server over a sqlite database (open to\n\
         anyone until --add-user provisions a login; then every client must log in).\n\
         Only pull, push and serve use the network, and only the server named. --server, --user,\n\
         --license-file, --tls and --tls-ca default to ${ENV_SERVER}, ${ENV_USER}, ${ENV_LICENSE},\n\
         ${ENV_TLS}=1 and ${ENV_TLS_CA}; the password is read from --password-file or ${ENV_PASSWORD},\n\
         never from the command line. Hex-Rays' public server needs --tls and the ida.key in --license-file.\n\
         --json emits one object: hash {{binary, input_md5, language, functions, skipped}}; pull {{binary,\n\
         server, matched, matches, ...}}; push {{binary, server, pushed, ...}}; serve {{event, ...}}."
    );
}

#[derive(Default)]
struct Net {
    server: Option<String>,
    tls: bool,
    tls_ca: Option<String>,
    tls_server_name: Option<String>,
    user: Option<String>,
    password_file: Option<String>,
    license_file: Option<String>,
    license_id: Option<String>,
    protocol: Option<u32>,
    timeout: Option<u64>,
}

#[derive(Default)]
struct Args {
    binary: Option<String>,
    addrs: Vec<u64>,
    json: bool,
    net: Net,
    define_out: Option<String>,
    assert_out: Option<String>,
    project: Option<String>,
    rename_named: bool,
    dry_run: bool,
    mode: Option<u32>,
    hostname: Option<String>,
    share_policy: Option<String>,
    db: Option<String>,
    bind: Option<String>,
    tls_cert: Option<String>,
    tls_key: Option<String>,
    add_user: Option<String>,
    admin: bool,
}

/// Dispatch `unlace lumina <hash|pull|push|serve>`.
pub fn run(argv: &[String]) -> i32 {
    let Some(sub) = argv.first() else {
        eprintln!("unlace lumina: missing subcommand");
        usage();
        return 2;
    };
    if argv.iter().any(|a| a == "--help" || a == "-h") || sub == "help" {
        usage();
        return 0;
    }
    let args = match parse(sub, &argv[1..]) {
        Ok(a) => a,
        Err(e) => {
            eprintln!("unlace lumina {sub}: {e}");
            usage();
            return 2;
        }
    };
    let result = match sub.as_str() {
        "hash" => cmd_hash(&args),
        "pull" => cmd_pull(&args),
        "push" => cmd_push(&args),
        _ => cmd_serve(&args),
    };
    match result {
        Ok(code) => code,
        Err(e) => {
            eprintln!("unlace lumina {sub}: {e}");
            1
        }
    }
}

fn parse_address(value: &str) -> Result<u64, String> {
    let digits = value
        .strip_prefix("0x")
        .or_else(|| value.strip_prefix("0X"))
        .unwrap_or(value);
    u64::from_str_radix(digits, 16).map_err(|_| format!("invalid address {value:?}"))
}

fn parse_mode(value: &str) -> Result<u32, String> {
    Ok(match value {
        "override-if-better" => push_mode::OVERRIDE_IF_BETTER,
        "override" => push_mode::OVERRIDE,
        "keep" => push_mode::DO_NOT_OVERRIDE,
        "merge" => push_mode::MERGE,
        other => return Err(format!("unknown --mode {other:?}")),
    })
}

fn mode_name(mode: u32) -> &'static str {
    match mode {
        push_mode::OVERRIDE => "override",
        push_mode::DO_NOT_OVERRIDE => "keep",
        push_mode::MERGE => "merge",
        _ => "override-if-better",
    }
}

fn parse(sub: &str, argv: &[String]) -> Result<Args, String> {
    if !matches!(sub, "hash" | "pull" | "push" | "serve") {
        return Err(format!("unknown subcommand {sub:?}"));
    }
    let network = matches!(sub, "pull" | "push");
    let mut a = Args::default();
    let mut i = 0;
    while i < argv.len() {
        let tok = argv[i].as_str();
        match tok {
            "--json" => a.json = true,
            "--addr" if sub != "serve" => a
                .addrs
                .push(parse_address(&take_value(argv, &mut i, tok)?)?),
            "--server" if network => a.net.server = Some(take_value(argv, &mut i, tok)?),
            "--tls" if network => a.net.tls = true,
            "--tls-ca" if network => a.net.tls_ca = Some(take_value(argv, &mut i, tok)?),
            "--tls-server-name" if network => {
                a.net.tls_server_name = Some(take_value(argv, &mut i, tok)?)
            }
            "--user" if network => a.net.user = Some(take_value(argv, &mut i, tok)?),
            "--password-file" if network || sub == "serve" => {
                a.net.password_file = Some(take_value(argv, &mut i, tok)?)
            }
            "--license-file" if network => {
                a.net.license_file = Some(take_value(argv, &mut i, tok)?)
            }
            "--license-id" if network => a.net.license_id = Some(take_value(argv, &mut i, tok)?),
            "--protocol" if network => {
                let v = take_value(argv, &mut i, tok)?;
                let n: u32 = v.parse().map_err(|_| format!("invalid --protocol {v:?}"))?;
                if !(2..=MAX_PROTOCOL_VERSION).contains(&n) {
                    return Err(format!("--protocol must be 2..={MAX_PROTOCOL_VERSION}"));
                }
                a.net.protocol = Some(n);
            }
            "--timeout" if network => {
                let v = take_value(argv, &mut i, tok)?;
                let n: u64 = v.parse().map_err(|_| format!("invalid --timeout {v:?}"))?;
                if n == 0 {
                    return Err("--timeout must be at least 1 second".into());
                }
                a.net.timeout = Some(n);
            }
            "--define-out" if sub == "pull" => a.define_out = Some(take_value(argv, &mut i, tok)?),
            "--assert-out" if sub == "pull" => a.assert_out = Some(take_value(argv, &mut i, tok)?),
            "--project" if sub == "pull" => a.project = Some(take_value(argv, &mut i, tok)?),
            "--rename-named" if sub == "pull" => a.rename_named = true,
            "--dry-run" if sub == "push" => a.dry_run = true,
            "--mode" if sub == "push" => {
                a.mode = Some(parse_mode(&take_value(argv, &mut i, tok)?)?)
            }
            "--hostname" if sub == "push" => a.hostname = Some(take_value(argv, &mut i, tok)?),
            "--share-policy" if sub == "push" => {
                a.share_policy = Some(take_value(argv, &mut i, tok)?)
            }
            "--db" if sub == "serve" => a.db = Some(take_value(argv, &mut i, tok)?),
            "--bind" if sub == "serve" => a.bind = Some(take_value(argv, &mut i, tok)?),
            "--tls-cert" if sub == "serve" => a.tls_cert = Some(take_value(argv, &mut i, tok)?),
            "--tls-key" if sub == "serve" => a.tls_key = Some(take_value(argv, &mut i, tok)?),
            "--add-user" if sub == "serve" => a.add_user = Some(take_value(argv, &mut i, tok)?),
            "--admin" if sub == "serve" => a.admin = true,
            other if other.starts_with('-') => return Err(format!("unknown option {other}")),
            other if sub != "serve" => {
                if a.binary.replace(other.to_string()).is_some() {
                    return Err("expected one binary".into());
                }
            }
            other => return Err(format!("unexpected argument {other:?}")),
        }
        i += 1;
    }
    if sub != "serve" && a.binary.is_none() {
        return Err("a binary is required".into());
    }
    if sub == "serve" {
        if a.db.is_none() {
            return Err("--db FILE is required".into());
        }
        if a.tls_cert.is_some() != a.tls_key.is_some() {
            return Err("--tls-cert and --tls-key go together".into());
        }
        if a.admin && a.add_user.is_none() {
            return Err("--admin needs --add-user".into());
        }
    }
    Ok(a)
}

fn env(name: &str) -> Option<String> {
    unlace_base::env::var(name).ok().filter(|v| !v.is_empty())
}

fn env_flag(name: &str) -> bool {
    env(name).is_some_and(|v| matches!(v.as_str(), "1" | "true" | "yes" | "on"))
}

/// The password: the first line of `--password-file`, else the environment, else empty.
fn password(net: &Net) -> Result<String, String> {
    if let Some(path) = &net.password_file {
        let text =
            std::fs::read_to_string(path).map_err(|e| format!("--password-file {path}: {e}"))?;
        return Ok(text.lines().next().unwrap_or("").to_string());
    }
    Ok(env(ENV_PASSWORD).unwrap_or_default())
}

fn emit_json(value: &Value) -> i32 {
    let text = serde_json::to_string_pretty(value).unwrap_or_else(|_| "null".into());
    crate::output::emit_with_status(&format!("{text}\n"), 0)
}

/// A connected, logged-in client and what the server said about the session.
struct Session {
    client: Client,
    server: String,
    tls: bool,
    user: Option<HeloResult>,
    protocol: u32,
}

fn open(net: &Net) -> Result<Session, String> {
    let server = net
        .server
        .clone()
        .or_else(|| env(ENV_SERVER))
        .ok_or_else(|| format!("--server HOST:PORT (or {ENV_SERVER}) is required"))?;
    let tls_ca = net.tls_ca.clone().or_else(|| env(ENV_TLS_CA));
    let tls = net.tls || tls_ca.is_some() || env_flag(ENV_TLS);
    let opts = ConnectOptions {
        timeout: Some(Duration::from_secs(
            net.timeout.unwrap_or(DEFAULT_TIMEOUT_SECS),
        )),
        tls: tls.then(|| ClientTls {
            ca_file: tls_ca.map(Into::into),
            server_name: net.tls_server_name.clone(),
        }),
    };
    let license_blob = match net.license_file.clone().or_else(|| env(ENV_LICENSE)) {
        Some(path) => std::fs::read(&path).map_err(|e| format!("license file {path}: {e}"))?,
        None => Vec::new(),
    };
    let mut license_id = [0u8; 6];
    if let Some(hexid) = &net.license_id {
        let bytes = unlace_lumina::hash::parse_hex(&hexid.replace('-', ""))
            .filter(|b| b.len() == 6)
            .ok_or_else(|| format!("--license-id {hexid:?}: expected 12 hex digits"))?;
        license_id.copy_from_slice(&bytes);
    }
    let protocol = net.protocol.unwrap_or(DEFAULT_PROTOCOL_VERSION);
    let helo = Helo {
        protocol_version: protocol,
        license_blob,
        license_id,
        record_conv: false,
        username: Some(
            net.user
                .clone()
                .or_else(|| env(ENV_USER))
                .unwrap_or_default(),
        ),
        password: Some(password(net)?),
    };
    let mut client =
        Client::connect(&server, &opts).map_err(|e| format!("connect {server}: {e}"))?;
    let user = client
        .helo(&helo)
        .map_err(|e| format!("login to {server}: {e}"))?;
    Ok(Session {
        client,
        server,
        tls,
        user,
        protocol,
    })
}

fn user_json(user: &Option<HeloResult>) -> Value {
    match user {
        Some(u) => json!({
            "username": u.username,
            "license_name": u.license.name,
            "is_admin": u.is_admin(),
            "features": u.features,
        }),
        None => Value::Null,
    }
}

fn hex_addr(a: u64) -> String {
    format!("0x{a:x}")
}

fn cmd_hash(args: &Args) -> Result<i32, String> {
    let binary = args.binary.as_deref().ok_or("a binary is required")?;
    let inv = calcrel::hash_binary(binary, &args.addrs)?;
    if args.json {
        let functions: Vec<Value> = inv
            .hashed
            .iter()
            .map(|h| {
                json!({
                    "address": hex_addr(h.entry),
                    "name": h.display_name(),
                    "named": h.named,
                    "size": h.size,
                    "instructions": h.instructions,
                    "hash": hex(&h.hash),
                })
            })
            .collect();
        let skipped: Vec<Value> = inv
            .skipped
            .iter()
            .map(|s| json!({"address": hex_addr(s.entry), "reason": s.reason}))
            .collect();
        return Ok(emit_json(&json!({
            "binary": binary,
            "input_md5": hex(&inv.input_md5),
            "language": inv.language,
            "functions": functions,
            "skipped": skipped,
        })));
    }
    let mut text = String::new();
    for h in &inv.hashed {
        let _ = writeln!(
            text,
            "{} {} {:>6} {}",
            hex_addr(h.entry),
            hex(&h.hash),
            h.size,
            h.display_name()
        );
    }
    for s in &inv.skipped {
        let _ = writeln!(text, "{} skipped: {}", hex_addr(s.entry), s.reason);
    }
    Ok(crate::output::emit_with_status(&text, 0))
}

/// One pulled function, as reported and applied.
struct Match {
    entry: u64,
    current: String,
    named: bool,
    size: u32,
    hash: [u8; 16],
    name: String,
    remote_size: u32,
    popularity: u32,
    prototype: Option<String>,
    calling_convention: Option<&'static str>,
    comment: Option<String>,
    repeatable_comment: Option<String>,
    metadata_keys: Vec<u32>,
    metadata_malformed: bool,
    rename: bool,
    declare: bool,
}

/// A name the `--define-function` file grammar carries intact: no whitespace, no `#` (a comment).
fn writable_name(name: &str) -> bool {
    !name.is_empty() && !name.contains('#') && !name.chars().any(char::is_whitespace)
}

fn cmd_pull(args: &Args) -> Result<i32, String> {
    let binary = args.binary.as_deref().ok_or("a binary is required")?;
    let inv = calcrel::hash_binary(binary, &args.addrs)?;
    let mut session = open(&args.net)?;
    let keys: Vec<[u8; 16]> = inv.hashed.iter().map(|h| h.hash).collect();
    let answers = session
        .client
        .pull_md(&keys)
        .map_err(|e| format!("pull from {}: {e}", session.server))?;

    let mut matches = Vec::new();
    for (h, answer) in inv.hashed.iter().zip(answers) {
        let Some(found) = answer else { continue };
        let summary = metadata::summarize(&found.info.metadata);
        let ftype = summary
            .type_info
            .as_deref()
            .and_then(tinfo::decode_type_chunk);
        let current = h.display_name();
        let rename = (!h.named || args.rename_named)
            && writable_name(&found.info.name)
            && found.info.name != current;
        // The prototype names the function by the name it carries in the run that applies it.
        let applied_name = if rename {
            found.info.name.clone()
        } else {
            current.clone()
        };
        let prototype = ftype.as_ref().map(|f| f.declaration(&applied_name));
        let declare = prototype.is_some() && tinfo::is_identifier(&applied_name);
        matches.push(Match {
            entry: h.entry,
            current,
            named: h.named,
            size: h.size,
            hash: h.hash,
            name: found.info.name.clone(),
            remote_size: found.info.size,
            popularity: found.popularity,
            prototype,
            calling_convention: ftype.as_ref().map(|f| f.cc.name()),
            comment: summary.comment,
            repeatable_comment: summary.repeatable_comment,
            metadata_keys: summary.keys,
            metadata_malformed: summary.malformed,
            rename,
            declare,
        });
    }

    let renames = write_define_file(
        args.define_out.as_deref(),
        binary,
        &session.server,
        &matches,
    )?;
    let prototypes = write_assert_file(
        args.assert_out.as_deref(),
        binary,
        &session.server,
        &matches,
    )?;
    let stored = write_project(args.project.as_deref(), binary, &matches)?;

    if args.json {
        let rows: Vec<Value> = matches
            .iter()
            .map(|m| {
                let keys: Vec<&str> = m
                    .metadata_keys
                    .iter()
                    .map(|&k| metadata::keys::name(k))
                    .collect();
                json!({
                    "address": hex_addr(m.entry),
                    "current_name": m.current,
                    "named": m.named,
                    "hash": hex(&m.hash),
                    "size": m.size,
                    "name": m.name,
                    "remote_size": m.remote_size,
                    "size_matches": m.remote_size == m.size,
                    "popularity": m.popularity,
                    "prototype": m.prototype,
                    "calling_convention": m.calling_convention,
                    "comment": m.comment,
                    "repeatable_comment": m.repeatable_comment,
                    "metadata_keys": keys,
                    "metadata_malformed": m.metadata_malformed,
                    "rename": m.rename,
                    "declare": m.declare,
                })
            })
            .collect();
        return Ok(emit_json(&json!({
            "binary": binary,
            "server": session.server,
            "tls": session.tls,
            "protocol_version": session.protocol,
            "session": user_json(&session.user),
            "functions_hashed": inv.hashed.len(),
            "functions_skipped": inv.skipped.len(),
            "matched": matches.len(),
            "matches": rows,
            "define_out": args.define_out,
            "assert_out": args.assert_out,
            "renames_written": renames,
            "prototypes_written": prototypes,
            "project": args.project,
            "project_directives": stored,
        })));
    }
    let mut text = String::new();
    for m in &matches {
        let _ = write!(
            text,
            "{} {} -> {} (popularity {})",
            hex_addr(m.entry),
            m.current,
            m.name,
            m.popularity
        );
        if let Some(p) = &m.prototype {
            let _ = write!(text, "  {p}");
        }
        text.push('\n');
    }
    let _ = writeln!(
        text,
        "{} of {} function(s) matched on {}",
        matches.len(),
        inv.hashed.len(),
        session.server
    );
    Ok(crate::output::emit_with_status(&text, 0))
}

fn file_header(binary: &str, server: &str) -> String {
    format!("# unlace lumina pull {binary} --server {server}\n")
}

/// Write the `--define-function` file; the number of renames written.
fn write_define_file(
    path: Option<&str>,
    binary: &str,
    server: &str,
    matches: &[Match],
) -> Result<usize, String> {
    let Some(path) = path else { return Ok(0) };
    let mut text = file_header(binary, server);
    let mut n = 0;
    for m in matches.iter().filter(|m| m.rename) {
        let _ = writeln!(text, "{}={}", hex_addr(m.entry), m.name);
        n += 1;
    }
    std::fs::write(path, text).map_err(|e| format!("--define-out {path}: {e}"))?;
    Ok(n)
}

/// Write the `--assert` file of `prototype` directives; the number written.
fn write_assert_file(
    path: Option<&str>,
    binary: &str,
    server: &str,
    matches: &[Match],
) -> Result<usize, String> {
    let Some(path) = path else { return Ok(0) };
    let mut text = file_header(binary, server);
    let mut n = 0;
    for m in matches.iter().filter(|m| m.declare) {
        let name = if m.rename { &m.name } else { &m.current };
        if let Some(p) = &m.prototype {
            let _ = writeln!(text, "prototype {name} {p}");
            n += 1;
        }
    }
    std::fs::write(path, text).map_err(|e| format!("--assert-out {path}: {e}"))?;
    Ok(n)
}

/// The directives a pull applies: a `function` entry per rename, a `prototype` per declaration.
fn pulled_directives(matches: &[Match]) -> Vec<String> {
    let mut out: Vec<String> = matches
        .iter()
        .filter(|m| m.rename)
        .map(|m| {
            unlace_project::directive::function_directive(m.entry, None, Some(m.name.as_str()))
        })
        .collect();
    for m in matches.iter().filter(|m| m.declare) {
        let name = if m.rename { &m.name } else { &m.current };
        if let Some(p) = &m.prototype {
            out.push(format!("prototype {name} {p}"));
        }
    }
    out
}

/// Store the pulled names and prototypes in a project file bound to `binary`; the number stored.
fn write_project(path: Option<&str>, binary: &str, matches: &[Match]) -> Result<usize, String> {
    let Some(path) = path else { return Ok(0) };
    let mut project = unlace_project::Project::open(std::path::Path::new(path))
        .map_err(|e| format!("--project {path}: {e}"))?;
    let live = unlace_project::BinaryIdentity::of_file(std::path::Path::new(binary))
        .map_err(|e| format!("{binary}: {e}"))?;
    project
        .check_binary(&live)
        .map_err(|e| format!("--project {path}: {e}"))?;
    let directives = pulled_directives(matches);
    project
        .set_all(directives.iter().map(String::as_str))
        .map_err(|e| format!("--project {path}: {e}"))
}

fn result_name(r: Option<i32>) -> &'static str {
    match r {
        None => "not_sent",
        Some(codes::ADDED) => "added",
        Some(codes::OK) => "updated",
        Some(codes::BAD_PATTERN) => "bad_pattern",
        Some(codes::NOT_FOUND) => "not_found",
        Some(_) => "error",
    }
}

/// Read a `--share-policy` file (see `unlace_lumina::privacy` for the format).
fn load_share_policy(path: &str) -> Result<PrivacyPolicy, String> {
    let text = std::fs::read_to_string(path).map_err(|e| format!("--share-policy {path}: {e}"))?;
    PrivacyPolicy::parse(&text).map_err(|e| format!("--share-policy {path}: {e}"))
}

fn cmd_push(args: &Args) -> Result<i32, String> {
    let binary = args.binary.as_deref().ok_or("a binary is required")?;
    let inv = calcrel::hash_binary(binary, &args.addrs)?;
    let named: Vec<&calcrel::Hashed> = inv.hashed.iter().filter(|h| h.named).collect();
    let policy = args
        .share_policy
        .as_deref()
        .map(load_share_policy)
        .transpose()?;
    if let Some(policy) = &policy {
        let bytes = std::fs::read(binary).map_err(|e| format!("cannot read {binary}: {e}"))?;
        let digest = privacy::binary_sha256(&bytes);
        if !privacy::is_sharing_allowed(policy, &digest) {
            return Err(format!(
                "push refused: {binary} (sha256 {digest}) is not allowed by --share-policy"
            ));
        }
    }
    let hostname = match &policy {
        Some(p) if p.anonymize => privacy::ANONYMOUS.to_string(),
        _ => args.hostname.clone().unwrap_or_else(|| "unlace".into()),
    };
    let mode = args.mode.unwrap_or(push_mode::OVERRIDE_IF_BETTER);
    let base = std::path::Path::new(binary)
        .file_name()
        .map(|n| n.to_string_lossy().into_owned())
        .unwrap_or_else(|| "input".into());
    let push = PushMd {
        flags: mode,
        idb: format!("{base}.unlace"),
        input_path: base,
        input_md5: inv.input_md5,
        hostname,
        contents: named
            .iter()
            .map(|h| FuncInfoAndPattern {
                info: FuncInfo {
                    name: h.display_name(),
                    size: h.size,
                    metadata: metadata::build(None, None),
                },
                pattern: PatternId::md5(h.hash),
            })
            .collect(),
        eas: named.iter().map(|h| h.entry).collect(),
    };
    let mut server: Option<String> = None;
    let mut tls = false;
    let mut user: Option<HeloResult> = None;
    let mut results: Vec<Option<i32>> = vec![None; push.contents.len()];
    if !args.dry_run && !push.contents.is_empty() {
        let mut session = open(&args.net)?;
        let got = session
            .client
            .push_md(&push)
            .map_err(|e| format!("push to {}: {e}", session.server))?;
        results = got.into_iter().map(Some).collect();
        server = Some(session.server);
        tls = session.tls;
        user = session.user;
    }
    let added = results.iter().filter(|r| **r == Some(codes::ADDED)).count();
    let updated = results.iter().filter(|r| **r == Some(codes::OK)).count();
    let failed = results.iter().filter(|r| r.is_some_and(|c| c < 0)).count();
    if args.json {
        let rows: Vec<Value> = named
            .iter()
            .zip(&results)
            .map(|(h, r)| {
                json!({
                    "address": hex_addr(h.entry),
                    "name": h.display_name(),
                    "hash": hex(&h.hash),
                    "size": h.size,
                    "result": result_name(*r),
                })
            })
            .collect();
        let pushed = if server.is_some() {
            push.contents.len()
        } else {
            0
        };
        return Ok(emit_json(&json!({
            "binary": binary,
            "server": server,
            "tls": tls,
            "session": user_json(&user),
            "dry_run": args.dry_run,
            "mode": mode_name(mode),
            "functions_hashed": inv.hashed.len(),
            "pushed": pushed,
            "added": added,
            "updated": updated,
            "failed": failed,
            "functions": rows,
        })));
    }
    let text = match &server {
        Some(s) => format!(
            "pushed {} named function(s) of {} to {s}: {added} added, {updated} updated, {failed} failed\n",
            push.contents.len(),
            inv.hashed.len()
        ),
        None => format!(
            "{} named function(s) of {} to push; nothing sent\n",
            push.contents.len(),
            inv.hashed.len()
        ),
    };
    Ok(crate::output::emit_with_status(
        &text,
        i32::from(failed > 0),
    ))
}

fn cmd_serve(args: &Args) -> Result<i32, String> {
    let db_path = args.db.as_deref().ok_or("--db FILE is required")?;
    let store = SqliteStore::open(db_path).map_err(|e| format!("--db {db_path}: {e}"))?;
    if let Some(user) = &args.add_user {
        let pw = password(&args.net)?;
        if pw.is_empty() {
            return Err(format!(
                "--add-user needs a password (--password-file or {ENV_PASSWORD})"
            ));
        }
        store
            .upsert_user(user, &pw, args.admin)
            .map_err(|e| format!("--add-user {user}: {e}"))?;
        if args.json {
            return Ok(emit_json(&json!({
                "event": "user_added",
                "user": user,
                "admin": args.admin,
                "db": db_path,
            })));
        }
        return Ok(crate::output::emit_with_status(
            &format!("added user {user} to {db_path}\n"),
            0,
        ));
    }
    let bind = args.bind.clone().unwrap_or_else(|| DEFAULT_BIND.into());
    let addr: SocketAddr = bind
        .parse()
        .map_err(|_| format!("--bind {bind:?}: expected IP:PORT"))?;
    let tls = match (&args.tls_cert, &args.tls_key) {
        (Some(cert), Some(key)) => Some(
            Acceptor::from_files(&ServerTls {
                cert_file: cert.into(),
                key_file: key.into(),
            })
            .map_err(|e| format!("TLS: {e}"))?,
        ),
        _ => None,
    };
    let users = store.user_count().map_err(|e| e.to_string())?;
    let listener = std::net::TcpListener::bind(addr).map_err(|e| format!("--bind {bind}: {e}"))?;
    let local = listener.local_addr().map_err(|e| e.to_string())?;
    let banner = if args.json {
        let event = json!({
            "event": "listening",
            "bind": local.to_string(),
            "tls": tls.is_some(),
            "db": db_path,
            "users": users,
            "open": users == 0,
        });
        format!("{event}\n")
    } else {
        let access = if users == 0 {
            "open: no login required".to_string()
        } else {
            format!("{users} user(s)")
        };
        let transport = if tls.is_some() { "TLS" } else { "plain TCP" };
        format!("lumina server on {local} ({transport}), db {db_path}, {access}\n")
    };
    let status = crate::output::emit_with_status(&banner, 0);
    if status != 0 {
        return Ok(status);
    }
    unlace_lumina::server::run_listener(listener, Arc::new(store), tls)
        .map_err(|e| format!("serving on {local}: {e}"))?;
    Ok(0)
}

#[cfg(test)]
mod tests;
