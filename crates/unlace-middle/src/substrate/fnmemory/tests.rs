use super::*;

#[test]
fn an_unarmed_drive_never_trips() {
    let guard = Armed::enter_with(0, false);
    assert!(!guard.is_armed());
    assert!(!over(Instant::now() + Duration::from_secs(1)));
    drop(guard);
    assert!(!tripped());
}

#[test]
fn a_drive_trips_once_it_grows_past_the_limit() {
    if !supported() {
        return;
    }
    let guard = Armed::enter_with(MIB, false);
    assert!(guard.is_armed());
    let grown: Vec<u8> = vec![1; 256 << 20];
    let later = Instant::now() + 2 * SAMPLE_EVERY;
    assert!(over(later), "256 MiB of new pages past a 1 MiB limit");
    assert!(
        over(Instant::now()),
        "the trip holds for the rest of the drive"
    );
    drop(grown);
    drop(guard);
    assert!(
        !tripped(),
        "dropping the guard restores the enclosing drive"
    );
}

#[test]
fn only_a_drive_that_grew_by_min_growth_trips() {
    let limit = 250 * MIB;
    assert!(!trips(240 * MIB, 100 * MIB, limit), "under the limit");
    assert!(
        !trips(260 * MIB, 240 * MIB, limit),
        "over the limit, but the batch put it there"
    );
    assert!(!trips(260 * MIB, 270 * MIB, limit), "under its own start");
    assert!(trips(260 * MIB, 196 * MIB, limit));
    assert!(trips(300 * MIB, 100 * MIB, limit));
}

#[test]
fn free_pages_go_back_once_the_process_holds_more_than_the_last_release_left() {
    let ms = 1_000_000;
    assert!(
        !release_due(300 * MIB, 290 * MIB, true, 0, 0),
        "10 MiB over, under the armed slack"
    );
    assert!(
        release_due(306 * MIB, 290 * MIB, true, 0, 50 * ms),
        "an explicit limit releases however recent"
    );
    assert!(
        !release_due(340 * MIB, 290 * MIB, false, 10_000 * ms, 0),
        "50 MiB over, under MIN_GROWTH"
    );
    assert!(release_due(
        360 * MIB,
        290 * MIB,
        false,
        10_000 * ms,
        20 * ms
    ));
    assert!(
        !release_due(360 * MIB, 290 * MIB, false, 600 * ms, 20 * ms),
        "too soon after a 20 ms release"
    );
    assert!(release_due(360 * MIB, 290 * MIB, false, 640 * ms, 20 * ms));
    assert!(
        !release_due(200 * MIB, 290 * MIB, true, 0, 0),
        "under the floor"
    );
}

#[test]
fn the_cgroup_limit_is_the_cap_less_a_margin() {
    assert_eq!(cgroup_limit(6 << 30) / MIB, 5529);
    assert_eq!(cgroup_limit(2 << 30) / MIB, 1536);
    assert_eq!(cgroup_limit(32 << 30) / MIB, 29491);
    assert_eq!(cgroup_limit(256 << 20), 0);
}

#[test]
fn the_cgroup_default_stops_only_a_drive_that_grew_by_the_margin_in_a_full_cgroup() {
    let (cap, limit) = (6u64 << 30, cgroup_limit(6 << 30));
    assert_eq!(limit / MIB, 5529);
    let one = |dir: &str| vec![(dir.to_string(), cap)];
    let full = |_: &str| Some(5600 * MIB);
    let roomy = |_: &str| Some(5000 * MIB);
    assert_eq!(
        cgroup_trips(1500 * MIB, 800 * MIB, &one("/a"), full),
        Some(limit)
    );
    assert_eq!(
        cgroup_trips(1300 * MIB, 800 * MIB, &one("/a"), full),
        None,
        "grew 500 MiB, under the 614 MiB margin"
    );
    assert_eq!(
        cgroup_trips(800 * MIB, 1500 * MIB, &one("/a"), full),
        None,
        "shrank"
    );
    assert_eq!(
        cgroup_trips(1500 * MIB, 800 * MIB, &one("/a"), roomy),
        None,
        "room left"
    );
    assert_eq!(
        cgroup_trips(1500 * MIB, 800 * MIB, &one("/a"), |_| None),
        None,
        "usage unreadable"
    );
    let nested = vec![("/a/b".to_string(), cap), ("/a".to_string(), 32 << 30)];
    let outer_full = |dir: &str| Some(if dir == "/a" { 30000 * MIB } else { 5000 * MIB });
    assert_eq!(
        cgroup_trips(5000 * MIB, 800 * MIB, &nested, outer_full),
        Some(cgroup_limit(32 << 30))
    );
    assert_eq!(
        cgroup_trips(2000 * MIB, 800 * MIB, &nested, outer_full),
        None,
        "under the outer margin"
    );
    assert_eq!(
        cgroup_margin(256 << 20),
        256 << 20,
        "a cap under 512 MiB is all margin"
    );
    let unread =
        |_: &str| -> Option<u64> { panic!("usage read before the drive grew by the margin") };
    assert_eq!(
        cgroup_trips(1300 * MIB, 800 * MIB, &one("/a"), unread),
        None
    );
}

#[test]
fn a_small_cap_lowers_the_floor_to_half_the_room_left() {
    let small = vec![("/s".to_string(), 600 * MIB)];
    let full = |_: &str| Some(400 * MIB);
    assert_eq!(cgroup_limit(600 * MIB), 88 * MIB);
    assert_eq!(
        cgroup_trips(365 * MIB, 165 * MIB, &small, full),
        None,
        "grew 200 MiB of a 217 MiB floor"
    );
    assert_eq!(
        cgroup_trips(385 * MIB, 165 * MIB, &small, full),
        Some(88 * MIB),
        "grew 220 MiB"
    );
    let tight = vec![("/t".to_string(), 200 * MIB)];
    assert_eq!(
        cgroup_trips(230 * MIB, 165 * MIB, &tight, full),
        Some(0),
        "the floor never drops under 64 MiB"
    );
    assert_eq!(cgroup_trips(225 * MIB, 165 * MIB, &tight, full), None);
    let big = vec![("/b".to_string(), 6 << 30)];
    assert_eq!(
        cgroup_trips(1400 * MIB, 800 * MIB, &big, |_| Some(5600 * MIB)),
        None,
        "a 6 GiB cap keeps its 614 MiB floor"
    );
}
