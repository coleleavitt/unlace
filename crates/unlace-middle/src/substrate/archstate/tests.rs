use super::*;

struct Table(Vec<u32>);
crate::unlace_arch_state!(Table);

struct Other(u8);
crate::unlace_arch_state!(Other);

#[test]
fn a_state_reads_as_none_until_set_and_a_clone_shares_it() {
    let mut states = ArchStates::default();
    assert!(states.get::<Table>().is_none());
    states.set(Rc::new(Table(vec![1, 2])));
    let copy = states.clone();
    assert_eq!(copy.get::<Table>().map(|t| t.0.clone()), Some(vec![1, 2]));
    assert!(Rc::ptr_eq(
        &states.get_rc::<Table>().unwrap(),
        &copy.get_rc::<Table>().unwrap()
    ));
    assert!(copy.get::<Other>().is_none());
    states.set(Rc::new(Other(3)));
    assert_eq!(states.get::<Other>().map(|o| o.0), Some(3));
    states.remove::<Table>();
    assert!(states.get::<Table>().is_none());
    assert!(copy.get::<Table>().is_some());
}

#[derive(Default)]
struct Ledger(Vec<u32>);
crate::unlace_arch_table!(Ledger);

#[test]
fn a_table_starts_at_its_default_and_keeps_writes() {
    let mut tables = ArchTables::default();
    assert!(tables.get::<Ledger>().0.is_empty());
    tables.get_mut::<Ledger>().0.push(4);
    assert_eq!(tables.get::<Ledger>().0, vec![4]);
}
