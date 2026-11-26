use super::*;

#[test]
fn every_topic_is_embedded_and_nonempty() {
    assert!(DOCS.len() >= 5);
    for d in DOCS {
        assert!(!d.body.is_empty(), "{} embedded empty", d.topic);
        assert!(
            d.body.starts_with('#'),
            "{} is not the markdown file",
            d.topic
        );
    }
}

#[test]
fn topics_are_unique_and_resolvable() {
    let mut seen: Vec<&str> = Vec::new();
    for d in DOCS {
        assert!(!seen.contains(&d.topic), "duplicate topic {}", d.topic);
        seen.push(d.topic);
        assert_eq!(lookup(d.topic).unwrap().topic, d.topic);
    }
}

#[test]
fn lookup_forgives_the_shapes_agents_type() {
    for name in [
        "options",
        "option",
        "OPTIONS",
        "options.md",
        "docs/options.md",
    ] {
        assert_eq!(lookup(name).unwrap().topic, "options", "{name}");
    }
    assert_eq!(lookup("commands").unwrap().topic, "cli");
    assert!(lookup("nonesuch").is_none());
}

#[test]
fn all_carries_every_body_verbatim() {
    let all = render_all();
    for d in DOCS {
        assert!(
            all.contains(d.body.trim_end_matches('\n')),
            "{} missing",
            d.topic
        );
    }
}
