use std::collections::{BTreeMap, BTreeSet};

use super::{Found, Site, Val, name_of, resolve};

const C0: Val = Val::Const(0);

fn site(nr: u64, args: [Val; 6]) -> Site {
    Site {
        nr: Val::Const(nr),
        args,
        via: None,
    }
}

fn p(n: u8) -> Val {
    Val::Param(n)
}

#[test]
fn a_call_taking_the_functions_own_parameters_is_named_by_the_table() {
    assert_eq!(
        name_of(&[site(41, [p(0), p(1), p(2), C0, C0, C0])]),
        Some("socket")
    );
    let both_paths = [
        site(45, [p(0), p(1), p(2), p(3), p(4), p(5)]),
        site(45, [p(0), p(1), p(2), p(3), p(4), p(5)]),
    ];
    assert_eq!(name_of(&both_paths), Some("recvfrom"));
}

#[test]
fn recvfrom_and_sendto_with_no_address_are_recv_and_send() {
    assert_eq!(
        name_of(&[site(45, [p(0), p(1), p(2), p(3), C0, C0])]),
        Some("recv")
    );
    assert_eq!(
        name_of(&[site(44, [p(0), p(1), p(2), p(3), C0, C0])]),
        Some("send")
    );
}

#[test]
fn glibc_open_is_openat_from_the_working_directory() {
    let at_fdcwd = Val::Const(-100i64 as u64);
    let sites = [
        site(257, [at_fdcwd, p(0), p(1), p(2), C0, C0]),
        site(257, [at_fdcwd, p(0), p(1), C0, C0, C0]),
    ];
    assert_eq!(name_of(&sites), Some("open"));
}

#[test]
fn an_argument_that_is_not_a_parameter_names_nothing() {
    assert_eq!(
        name_of(&[site(200, [Val::Unknown, p(0), C0, C0, C0, C0])]),
        None
    );
    assert_eq!(
        name_of(&[site(42, [p(0), Val::Const(5), p(2), C0, C0, C0])]),
        None
    );
}

#[test]
fn sites_that_disagree_or_have_no_constant_number_name_nothing() {
    let socket_then_fcntl = [
        site(41, [p(0), p(1), p(2), C0, C0, C0]),
        site(72, [Val::Unknown, Val::Const(2), Val::Const(1), C0, C0, C0]),
    ];
    assert_eq!(name_of(&socket_then_fcntl), None);
    let from_an_argument = Site {
        nr: Val::Param(6),
        args: [p(0), p(1), p(2), p(3), p(4), p(5)],
        via: None,
    };
    assert_eq!(name_of(&[from_an_argument]), None);
    assert_eq!(
        name_of(&[site(9, [p(0), p(1), p(2), p(3), p(4), p(5)])]),
        None
    );
    assert_eq!(name_of(&[]), None);
}

fn found(name: &'static str, calls_out: bool, vias: &[Option<u64>]) -> Found {
    Found {
        name,
        calls_out,
        vias: vias.iter().copied().collect::<BTreeSet<_>>(),
    }
}

#[test]
fn the_direct_twin_of_a_cancellable_wrapper_is_its_nocancel_function() {
    let found = BTreeMap::from([
        (0x1000, found("read", true, &[Some(0x9000)])),
        (0x2000, found("read", false, &[None])),
        (0x3000, found("socket", false, &[None])),
    ]);
    assert_eq!(
        resolve(&found),
        vec![
            (0x1000, "read".to_string()),
            (0x2000, "__read_nocancel".to_string()),
            (0x3000, "socket".to_string()),
        ]
    );
}

#[test]
fn a_forwarder_and_an_unresolved_collision_are_not_named() {
    let found = BTreeMap::from([
        (0x1000, found("write", false, &[None])),
        (0x2000, found("write", true, &[Some(0x1000)])),
        (0x3000, found("close", true, &[Some(0x9000)])),
        (0x4000, found("close", true, &[Some(0x9000)])),
    ]);
    assert_eq!(resolve(&found), vec![(0x1000, "write".to_string())]);
}

#[test]
fn several_direct_twins_leave_only_the_cancellable_wrapper_named() {
    let found = BTreeMap::from([
        (0x1000, found("close", true, &[Some(0x9000)])),
        (0x2000, found("close", false, &[None])),
        (0x3000, found("close", false, &[None])),
    ]);
    assert_eq!(resolve(&found), vec![(0x1000, "close".to_string())]);
}

#[test]
fn exit_group_with_its_own_status_is_exit() {
    assert_eq!(
        name_of(&[site(231, [p(0), C0, C0, C0, C0, C0])]),
        Some("_exit")
    );
}
