//! `unlace::unstable::mapping` end to end on the browser's example: the two
//! directions between `sum_to`'s text and its instructions, and the documents
//! the builders extend (needs the checkout's `specs/`).

use std::path::PathBuf;

use unlace::Decompiler;
use unlace::unstable::mapping::Span;

fn sample() -> Decompiler {
    let root = PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("../..");
    Decompiler::open(root.join("integrations/web/test/fixtures/sample.elf"))
        .unwrap()
        .with_sleighpath(root.join("specs"))
}

#[test]
fn a_mapped_function_answers_both_directions() {
    let mut decompiler = sample();
    let sum_to = decompiler.map_named("sum_to").unwrap();
    let line = sum_to
        .function
        .c
        .lines()
        .position(|l| l.trim() == "acc += i;")
        .expect("the loop body")
        + 1;
    // 1180: cltq, 1182: add %rax,-0x8(%rbp)
    assert_eq!(sum_to.addresses(Span::line(line)), [0x1180, 0x1182]);
    let sites = sum_to.spans(0x1182);
    assert_eq!(sites.len(), 1);
    assert_eq!(
        (sites[0].span.start.line, sites[0].text.as_str()),
        (line, "acc +=")
    );
    assert_eq!(sum_to.addresses(sites[0].span), [0x1182]);
    let live: Vec<(String, Vec<String>)> = sum_to
        .live(0x1182)
        .into_iter()
        .map(|v| {
            let places = v.storage.iter().map(|held| {
                held.register
                    .clone()
                    .unwrap_or_else(|| format!("{}{:+}", held.space, held.offset))
            });
            (v.name, places.collect())
        })
        .collect();
    assert_eq!(
        live,
        [
            (
                "n".to_string(),
                vec!["edi".to_string(), "stack-28".to_string()]
            ),
            (
                "i".to_string(),
                vec!["eax".to_string(), "stack-20".to_string()]
            ),
            ("acc".to_string(), vec!["stack-16".to_string()]),
        ]
    );
    let record = &sum_to.function.json["functions"][0];
    assert!(record["tokens"].as_array().is_some_and(|t| !t.is_empty()));
    assert!(record["variables"][0]["storage"].is_array());
}

#[test]
fn the_builders_extend_every_document_and_nothing_else_does() {
    let mut plain = sample();
    let record = plain.decompile_named("sum_to").unwrap().json["functions"][0].clone();
    assert!(record.get("tokens").is_none());
    assert!(record["variables"][0].get("storage").is_none());
    // A map call leaves the decompiler's own documents as they were.
    plain.map_named("sum_to").unwrap();
    assert_eq!(
        plain.decompile_named("sum_to").unwrap().json["functions"][0],
        record
    );
    let mut extended = sample().with_tokens().with_storage();
    let with = extended.decompile_named("sum_to").unwrap().json["functions"][0].clone();
    assert_eq!(with["code"], record["code"]);
    assert!(with["tokens"].as_array().is_some_and(|t| !t.is_empty()));
    assert!(with["tokens_error"].is_null());
    assert!(with["variables"][0]["storage"].is_array());
}
