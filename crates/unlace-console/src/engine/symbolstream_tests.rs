use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{AddrSpace, spacetype};

use super::{EntryProvenance, ProgramSymbol, SymbolStream};

fn space() -> Rc<AddrSpace> {
    Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_PROCESSOR))
}

fn sym(sp: &Rc<AddrSpace>, name: &str, off: u64) -> ProgramSymbol {
    ProgramSymbol {
        ordinal: 0,
        name: name.to_string(),
        addr: Address::new(Rc::clone(sp), off),
        object_location: None,
        binding: None,
        provenance: EntryProvenance::Mapped,
    }
}

fn register(stream: &mut SymbolStream, sp: &Rc<AddrSpace>, name: &str, off: u64) {
    stream.remove_name(name);
    stream.push(sym(sp, name, off));
}

fn names(stream: &SymbolStream) -> Vec<&str> {
    stream.iter().map(|r| r.name.as_str()).collect()
}

/// Registering a name drops EVERY earlier record of it and appends the new
/// one last — the `retain` + `push` contract the name index replaced.
#[test]
fn register_replaces_every_prior_record_of_the_name() {
    let sp = space();
    let mut stream = SymbolStream::from_loader(vec![
        sym(&sp, "a", 1),
        sym(&sp, "dup", 2),
        sym(&sp, "b", 3),
        sym(&sp, "dup", 4),
    ]);
    assert_eq!(names(&stream), ["a", "dup", "b", "dup"]);
    assert_eq!(stream.len(), 4);

    register(&mut stream, &sp, "dup", 9);
    assert_eq!(
        names(&stream),
        ["a", "b", "dup"],
        "both `dup` records go, the new one lands last"
    );
    assert_eq!(stream.len(), 3);
    assert_eq!(stream.lookup("dup").unwrap().addr.get_offset(), 9);
}

/// A name the loader read twice resolves to the FIRST record, matching the
/// `iter().find()` this replaced.
#[test]
fn lookup_returns_the_first_record_of_a_duplicated_name() {
    let sp = space();
    let stream = SymbolStream::from_loader(vec![sym(&sp, "dup", 1), sym(&sp, "dup", 2)]);
    assert_eq!(stream.lookup("dup").unwrap().addr.get_offset(), 1);
    assert!(stream.lookup("absent").is_none());
}

/// The provenance probe reads the record of that name AT that address, not
/// merely the first record of the name.
#[test]
fn lookup_at_selects_by_address_not_just_by_name() {
    let sp = space();
    let mut stream = SymbolStream::from_loader(vec![sym(&sp, "dup", 1)]);
    let mut second = sym(&sp, "dup", 2);
    second.provenance = EntryProvenance::UndefinedExternal;
    stream.push(second);

    let at_two = stream
        .lookup_at("dup", &Address::new(Rc::clone(&sp), 2))
        .unwrap();
    assert_eq!(at_two.provenance, EntryProvenance::UndefinedExternal);
    assert!(
        stream
            .lookup_at("dup", &Address::new(Rc::clone(&sp), 3))
            .is_none()
    );
    assert!(
        stream
            .lookup_at("absent", &Address::new(Rc::clone(&sp), 1))
            .is_none()
    );
}

/// However many times a name is re-registered, exactly one record stays live,
/// and the tombstones neither leak into iteration nor pile up without bound.
#[test]
fn repeated_registration_keeps_one_live_record() {
    let sp = space();
    let mut stream = SymbolStream::default();
    for off in 1..=500 {
        register(&mut stream, &sp, "f", off);
    }
    register(&mut stream, &sp, "g", 999);
    assert_eq!(names(&stream), ["f", "g"]);
    assert_eq!(stream.len(), 2);
    assert_eq!(stream.lookup("f").unwrap().addr.get_offset(), 500);
    assert!(
        stream.records.len() < 128,
        "tombstones must be reclaimed, not accumulated"
    );
}

/// Compaction renumbers every slot, so the index must survive it. Moving
/// `keep0` to the end first makes every other record shift, so a stale slot
/// resolves to its NEIGHBOUR rather than harmlessly to itself.
#[test]
fn compaction_preserves_order_and_the_index() {
    let sp = space();
    let mut stream = SymbolStream::default();
    for i in 0..100u64 {
        stream.push(sym(&sp, &format!("keep{i}"), i));
    }
    register(&mut stream, &sp, "keep0", 1_000);
    for off in 0..200u64 {
        register(&mut stream, &sp, "churn", 10_000 + off);
    }

    let expected: Vec<String> = (1..100u64)
        .map(|i| format!("keep{i}"))
        .chain(["keep0".to_string(), "churn".to_string()])
        .collect();
    assert_eq!(names(&stream), expected);
    assert_eq!(stream.len(), 101);
    for name in &expected {
        assert_eq!(
            stream.lookup(name).map(|r| r.name.as_str()),
            Some(name.as_str())
        );
    }
    assert_eq!(stream.lookup("keep73").unwrap().addr.get_offset(), 73);
    assert_eq!(stream.lookup("keep0").unwrap().addr.get_offset(), 1_000);
    assert_eq!(stream.lookup("churn").unwrap().addr.get_offset(), 10_199);
}
