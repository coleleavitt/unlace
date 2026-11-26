//! `unlace map`: which instructions a span of a function's decompiled text
//! came from, and which spans and variables an instruction address has.
//!
//! One function is decompiled over its own load, exactly as `unlace decompile
//! --json --tokens --storage` decompiles it, and the query is answered from that record:
//! its token source map (`docs/spec/09-emission.md` §9.2) for the spans, its
//! variables' `storage` for what is live at an address. Places are the token
//! map's: 1-based lines, 0-based UTF-16 columns, a span's end not included.

use std::collections::BTreeSet;

use unlace_console::project::FuncResult;
use unlace_decomp::funcreport::{StoragePiece, VarInfo};
use unlace_decomp::srcmap::CodeToken;

use crate::args::take_value;
use crate::decompile::{self, SingleRequest};
use crate::decompile_all::storagejson;
use crate::jsonfmt::{Json, dumps_indent2};

/// A place in a function's text: a 1-based line and a 0-based column in
/// UTF-16 code units.
#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub(crate) struct Place {
    pub(crate) line: usize,
    pub(crate) col: usize,
}

/// The code from `start` up to, not including, `end`.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(crate) struct Span {
    pub(crate) start: Place,
    pub(crate) end: Place,
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Query {
    Span(Span),
    Address(u64),
}

impl Span {
    pub(crate) fn line(line: usize) -> Self {
        Span {
            start: Place { line, col: 0 },
            end: Place {
                line: line + 1,
                col: 0,
            },
        }
    }

    /// `L1:C1-L2:C2`.
    fn parse(text: &str) -> Result<Self, String> {
        let place = |text: &str| {
            let (line, col) = text.split_once(':')?;
            Some(Place {
                line: line.trim().parse().ok().filter(|&line| line >= 1)?,
                col: col.trim().parse().ok()?,
            })
        };
        text.split_once('-')
            .and_then(|(start, end)| {
                Some(Span {
                    start: place(start)?,
                    end: place(end)?,
                })
            })
            .filter(|span| span.start < span.end)
            .ok_or_else(|| {
                format!(
                    "invalid --span {text:?}: expected L1:C1-L2:C2 (1-based lines, 0-based \
                     columns, the end not included)"
                )
            })
    }

    fn holds(&self, token: &CodeToken) -> bool {
        let start = Place {
            line: token.line,
            col: token.col,
        };
        let end = Place {
            line: token.line,
            col: token.col + token.len,
        };
        start < self.end && self.start < end
    }
}

/// The function's token map, or why it has none to answer from.
pub(crate) fn tokens(function: &FuncResult) -> Result<&[CodeToken], String> {
    let detail = function
        .detail
        .as_deref()
        .ok_or_else(|| format!("no token map for {}", function.name))?;
    match &detail.tokens_error {
        Some(reason) => Err(format!("no token map for {}: {reason}", function.name)),
        None => Ok(&detail.tokens),
    }
}

/// The instructions the tokens inside `span` stand for, in address order.
pub(crate) fn span_addresses(tokens: &[CodeToken], span: &Span) -> Vec<u64> {
    tokens
        .iter()
        .filter(|token| span.holds(token))
        .filter_map(|token| token.address)
        .collect::<BTreeSet<u64>>()
        .into_iter()
        .collect()
}

/// The runs of neighbouring tokens on one line that stand for `address`.
pub(crate) fn address_spans(tokens: &[CodeToken], address: u64) -> Vec<Span> {
    let mut spans: Vec<Span> = Vec::new();
    let mut open = false;
    for token in tokens {
        let hit = token.address == Some(address);
        let end = Place {
            line: token.line,
            col: token.col + token.len,
        };
        match spans.last_mut() {
            Some(last) if hit && open && last.end.line == token.line => last.end = end,
            _ if hit => spans.push(Span {
                start: Place {
                    line: token.line,
                    col: token.col,
                },
                end,
            }),
            _ => {}
        }
        open = hit;
    }
    spans
}

/// The variables a piece of storage holds on entry to the instruction at
/// `address`, each with those pieces. A parameter and the frame slot it is
/// spilled to are two rows of one name: they answer as one variable.
pub(crate) fn live_variables(
    variables: &[VarInfo],
    address: u64,
) -> Vec<(&VarInfo, Vec<&StoragePiece>)> {
    let mut out: Vec<(&VarInfo, Vec<&StoragePiece>)> = Vec::new();
    for variable in variables {
        let pieces = variable.storage.iter().filter(|piece| {
            piece
                .ranges
                .iter()
                .any(|&(start, end)| start <= address && address < end)
        });
        let at = match out.iter().position(|(seen, _)| seen.name == variable.name) {
            Some(at) => at,
            None => {
                out.push((variable, Vec::new()));
                out.len() - 1
            }
        };
        for piece in pieces {
            let place = |p: &StoragePiece| (p.space.clone(), p.register.clone(), p.offset, p.size);
            let same = |held: &&StoragePiece| place(held) == place(piece);
            if !out[at].1.iter().any(same) {
                out[at].1.push(piece);
            }
        }
    }
    out.retain(|(_, pieces)| !pieces.is_empty());
    out
}

/// The text of a span that lies on one line of `code`.
pub(crate) fn span_text(code: &str, span: &Span) -> String {
    let units: Vec<u16> = code
        .split('\n')
        .nth(span.start.line - 1)
        .unwrap_or("")
        .encode_utf16()
        .collect();
    let end = span.end.col.min(units.len());
    String::from_utf16_lossy(&units[span.start.col.min(end)..end])
}

/// `eax(4)`, `stack-0x14(4)`, `ram:0x4010(8)`.
fn piece_text(piece: &StoragePiece) -> String {
    let place = match (&piece.register, piece.space.as_str()) {
        (Some(register), _) => register.clone(),
        (None, "stack") if piece.offset < 0 => format!("stack-{:#x}", piece.offset.unsigned_abs()),
        (None, "stack") => format!("stack+{:#x}", piece.offset),
        (None, space) => format!("{space}:{:#x}", piece.offset),
    };
    format!("{place}({})", piece.size)
}

fn number(value: impl ToString) -> Json {
    Json::Number(value.to_string())
}

fn place_json(place: Place) -> Json {
    Json::Object(vec![
        ("line".into(), number(place.line)),
        ("col".into(), number(place.col)),
    ])
}

fn span_fields(span: &Span) -> Vec<(String, Json)> {
    vec![
        ("start".into(), place_json(span.start)),
        ("end".into(), place_json(span.end)),
    ]
}

fn addresses_fields(addresses: &[u64]) -> [(String, Json); 2] {
    [
        (
            "addresses".into(),
            Json::Array(addresses.iter().map(number).collect()),
        ),
        (
            "addresses_hex".into(),
            Json::Array(
                addresses
                    .iter()
                    .map(|address| Json::Str(format!("{address:#x}")))
                    .collect(),
            ),
        ),
    ]
}

/// What a query found in one function's record.
enum Answer<'a> {
    Addresses(Vec<u64>),
    At {
        spans: Vec<Span>,
        variables: Vec<(&'a VarInfo, Vec<&'a StoragePiece>)>,
    },
}

fn answer<'a>(function: &'a FuncResult, query: &Query) -> Result<Answer<'a>, String> {
    let tokens = tokens(function)?;
    Ok(match query {
        Query::Span(span) => Answer::Addresses(span_addresses(tokens, span)),
        Query::Address(address) => Answer::At {
            spans: address_spans(tokens, *address),
            variables: live_variables(&function.variables, *address),
        },
    })
}

fn text(function: &FuncResult, answer: &Answer) -> String {
    let code = function.code.as_deref().unwrap_or("");
    let mut out = String::new();
    match answer {
        Answer::Addresses(addresses) => {
            for address in addresses {
                out.push_str(&format!("{address:#x}\n"));
            }
        }
        Answer::At { spans, variables } => {
            for span in spans {
                out.push_str(&format!(
                    "span {}:{}-{}:{}\t{}\n",
                    span.start.line,
                    span.start.col,
                    span.end.line,
                    span.end.col,
                    span_text(code, span)
                ));
            }
            for (variable, pieces) in variables {
                let pieces: Vec<String> = pieces.iter().map(|piece| piece_text(piece)).collect();
                out.push_str(&format!(
                    "var {}\t{}\t{}\n",
                    variable.name,
                    variable.type_name,
                    pieces.join(", ")
                ));
            }
        }
    }
    out
}

fn document(
    binary: &str,
    function: Option<&FuncResult>,
    query: &Query,
    answer: Option<&Answer>,
    error: Option<&str>,
) -> String {
    let mut fields = vec![("binary".to_string(), Json::Str(binary.to_string()))];
    fields.push((
        "function".into(),
        function.map_or(Json::Null, |function| {
            Json::Object(vec![
                ("name".into(), Json::Str(function.name.clone())),
                ("address".into(), number(function.address)),
                (
                    "address_hex".into(),
                    Json::Str(format!("{:#x}", function.address)),
                ),
            ])
        }),
    ));
    fields.push((
        "query".into(),
        Json::Object(match query {
            Query::Span(span) => span_fields(span),
            Query::Address(address) => vec![
                ("address".into(), number(address)),
                ("address_hex".into(), Json::Str(format!("{address:#x}"))),
            ],
        }),
    ));
    let code = function.and_then(|function| function.code.as_deref());
    fields.push((
        "code".into(),
        code.map_or(Json::Null, |c| Json::Str(c.into())),
    ));
    match answer {
        Some(Answer::Addresses(addresses)) => fields.extend(addresses_fields(addresses)),
        Some(Answer::At { spans, variables }) => {
            fields.push((
                "spans".into(),
                Json::Array(
                    spans
                        .iter()
                        .map(|span| {
                            let mut span_json = span_fields(span);
                            span_json.push((
                                "text".into(),
                                Json::Str(span_text(code.unwrap_or(""), span)),
                            ));
                            Json::Object(span_json)
                        })
                        .collect(),
                ),
            ));
            fields.push((
                "variables".into(),
                Json::Array(
                    variables
                        .iter()
                        .map(|(variable, pieces)| {
                            Json::Object(vec![
                                ("name".into(), Json::Str(variable.name.clone())),
                                ("type".into(), Json::Str(variable.type_name.clone())),
                                ("kind".into(), Json::Str(variable.kind().into())),
                                (
                                    "storage".into(),
                                    Json::Array(
                                        pieces
                                            .iter()
                                            .map(|piece| Json::Object(storagejson::place(piece)))
                                            .collect(),
                                    ),
                                ),
                            ])
                        })
                        .collect(),
                ),
            ));
        }
        None => {}
    }
    fields.push((
        "error".into(),
        error.map_or(Json::Null, |e| Json::Str(e.into())),
    ));
    dumps_indent2(&Json::Object(fields)) + "\n"
}

/// `unlace map` entry point.
pub fn main(argv: &[String]) -> Result<i32, String> {
    let mut binary: Option<String> = None;
    let mut target: Option<String> = None;
    let mut query: Option<Query> = None;
    let mut json = false;
    let mut forwarded: Vec<String> = vec!["--tokens".into(), "--storage".into()];
    let mut mode: Option<String> = None;
    let mut bfd_target: Option<String> = None;
    let mut slice: Option<String> = None;
    let mut sleighpath: Option<String> = None;
    let mut raw_image = false;
    let mut base: Option<u64> = None;
    let ask = |query: &mut Option<Query>, asked: Query| match query.replace(asked) {
        Some(_) => Err("map takes one of --line, --span and --addr".to_string()),
        None => Ok(()),
    };

    let mut i = 0;
    while i < argv.len() {
        let a = argv[i].as_str();
        match a {
            "--json" => json = true,
            "--line" => {
                let value = take_value(argv, &mut i, "--line")?;
                let line = value
                    .trim()
                    .parse::<usize>()
                    .ok()
                    .filter(|&line| line >= 1)
                    .ok_or_else(|| format!("invalid --line {value:?}: expected a 1-based line"))?;
                ask(&mut query, Query::Span(Span::line(line)))?;
            }
            "--span" => {
                let span = Span::parse(&take_value(argv, &mut i, "--span")?)?;
                ask(&mut query, Query::Span(span))?;
            }
            "--addr" => {
                let address = decompile::parse_cli_address(&take_value(argv, &mut i, "--addr")?)?;
                ask(&mut query, Query::Address(address))?;
            }
            "--mode" => mode = Some(take_value(argv, &mut i, "--mode")?),
            "--target" => bfd_target = Some(take_value(argv, &mut i, "--target")?),
            "--slice" => slice = Some(take_value(argv, &mut i, "--slice")?),
            "--sleighpath" => sleighpath = Some(take_value(argv, &mut i, "--sleighpath")?),
            "--raw-image" => raw_image = true,
            "--base" => {
                base = Some(decompile::parse_cli_address(&take_value(
                    argv, &mut i, "--base",
                )?)?)
            }
            "--option" => {
                crate::args::take_option(argv, &mut i)?;
                forwarded.extend(argv[i - 2..=i].iter().cloned());
            }
            "--assert-strict" => forwarded.push(a.into()),
            "--language" | "--language-file" | "--rules" | "--isa" | "--define-function"
            | "--assert" | "--project" | "--types" | "--types-cpp" | "--max-fn-seconds"
            | "--max-fn-memory" => {
                let value = take_value(argv, &mut i, a)?;
                forwarded.extend([a.to_string(), value]);
            }
            "-h" | "--help" => {
                usage();
                return Ok(0);
            }
            s if s.starts_with("--") => return Err(format!("unknown option {s}")),
            _ if binary.is_none() => binary = Some(a.to_string()),
            _ if target.is_none() => target = Some(a.to_string()),
            _ => return Err(format!("unexpected argument {a:?}")),
        }
        i += 1;
    }
    let (Some(binary), Some(target)) = (binary, target) else {
        return Err("map requires <binary> and <func>".into());
    };
    let query =
        query.ok_or("map requires one of --line N, --span L1:C1-L2:C2 and --addr 0xADDR")?;
    // An IDA database selects a function by name through its own function list.
    let mut by_address = decompile::looks_like_addr(&target);
    let idb = raw_image && crate::idb::is_database_file(&binary);
    let target = if idb && !by_address {
        by_address = true;
        crate::idb::function_address(&binary, &target)?
    } else {
        target
    };
    if raw_image {
        if bfd_target
            .as_deref()
            .is_none_or(|value| value.trim().is_empty())
        {
            return Err("--raw-image requires --target <SLEIGH-language-id>".into());
        }
        if base.is_none() {
            return Err("--raw-image requires --base <address>".into());
        }
        if decompile::parse_cli_address(&target).is_err() {
            return Err("--raw-image requires a numeric entry address".into());
        }
        if slice.is_some() {
            return Err("--slice does not apply to --raw-image input".into());
        }
        by_address = true;
    } else if base.is_some() {
        return Err("--base requires --raw-image".into());
    }
    let args = SingleRequest {
        binary: &binary,
        json: true,
        apply_rust_signatures: None,
        target: &target,
        by_address,
        forwarded: &forwarded,
        mode: mode.as_deref(),
        bfd_target: bfd_target.as_deref(),
        slice: slice.as_deref(),
        sleighpath: sleighpath.as_deref(),
        raw_image,
        base,
    }
    .args()?;

    let fail = |function: Option<&FuncResult>, message: String| {
        let status = if json {
            crate::output::emit_with_status(
                &document(&args.binary, function, &query, None, Some(&message)),
                1,
            )
        } else {
            1
        };
        eprintln!("error: {message}");
        Ok(status)
    };
    let selected = match decompile::decompile_selected(&args, &target) {
        Ok(selected) => selected,
        Err((message, _)) => return fail(None, message),
    };
    let function = selected.funcs.first();
    let failure = selected.failure.clone().or_else(|| {
        (args.assert_strict && selected.rejected)
            .then(|| format!("--assert directive rejected in {}", args.binary))
    });
    if let Some(message) = failure {
        return fail(function, message);
    }
    let Some(function) = function else {
        return fail(None, "the decompiler returned no record".into());
    };
    let answer = match answer(function, &query) {
        Ok(answer) => answer,
        Err(message) => return fail(Some(function), message),
    };
    let out = if json {
        document(&args.binary, Some(function), &query, Some(&answer), None)
    } else {
        text(function, &answer)
    };
    Ok(crate::output::emit_with_status(&out, 0))
}

const USAGE: &str = "usage: unlace map <binary> <name|0xaddr> (--line N | --span L1:C1-L2:C2 | --addr 0xADDR) [--json] \\\n\
         \x20               [--language auto|c|rust|java|go | --language-file FILE] \\\n\
         \x20               [--mode auto|reliable|aggressive|fast] [--option N V].. [--rules FILE].. \\\n\
         \x20               [--define-function S[-E][=N]|@FILE].. \\\n\
         \x20               [--assert DIRECTIVE|@FILE].. [--assert-strict] [--project FILE] \\\n\
         \x20               [--types FILE.h|DIR].. [--types-cpp CC] [--isa auto|arm|thumb] \\\n\
         \x20               [--slice ARCH] [--target T] [--sleighpath D] [--max-fn-memory MiB] \\\n\
         \x20               [--max-fn-seconds N] [--raw-image --target T --base VMA]\n\
         \n\
         Decompile ONE function, as `unlace decompile <binary> <func> --json --tokens\n\
         --storage` does (the function is a name, or an address when it starts with\n\
         0x), and answer one question about its output:\n\
         \n\
         --line N            the instruction addresses line N of the code came from\n\
         --span L1:C1-L2:C2  the same for a span: lines are 1-based, columns 0-based\n\
         \x20                   UTF-16 code units, the end is not included (the token\n\
         \x20                   map's coordinates)\n\
         --addr 0xADDR       the spans of the code that came from the instruction at\n\
         \x20                   ADDR, and the variables a register or stack slot holds\n\
         \x20                   on entry to it\n\
         \n\
         Text output: one `0x` address per line for --line/--span; for --addr one\n\
         `span L:C-L:C<TAB>text` line per span, then one `var NAME<TAB>TYPE<TAB>storage`\n\
         line per variable.  --json prints one document instead:\n\
         {binary,function:{name,address,address_hex},query,code,error} plus\n\
         `addresses` and `addresses_hex` for --line/--span, or\n\
         `spans:[{start:{line,col},end:{line,col},text}]` and\n\
         `variables:[{name,type,kind,storage:[{space,register,offset,size}]}]` for\n\
         --addr.  A function that does not exist or does not decompile exits 1\n\
         with the reason on stderr and in the document's `error`.\n\
         The other flags are the ones `unlace decompile` takes; give the same ones\n\
         you decompiled with, since they decide the text the lines and columns index.";

fn usage() {
    eprintln!("{USAGE}");
}

#[cfg(test)]
mod tests;
