use super::*;

fn table() -> EhTable {
    EhTable::new(vec![
        EhCallSite {
            start: 0x20,
            end: 0x30,
            pad: 0x80,
            clauses: vec![EhClause::Cleanup],
        },
        EhCallSite {
            start: 0x5,
            end: 0xa,
            pad: 0x40,
            clauses: vec![
                EhClause::Catch {
                    selector: 1,
                    type_name: Some("std::runtime_error const&".into()),
                },
                EhClause::CatchAll { selector: 2 },
            ],
        },
    ])
}

#[test]
fn covered_calls_and_pads() {
    let t = table();
    assert_eq!(t.site_at(0x5).map(|s| s.pad), Some(0x40));
    assert_eq!(t.site_at(0x9).map(|s| s.pad), Some(0x40));
    assert!(t.site_at(0xa).is_none());
    assert_eq!(t.site_at(0x2f).map(|s| s.pad), Some(0x80));
    assert!(t.is_pad(0x40) && t.is_pad(0x80) && !t.is_pad(0x5));
}

#[test]
fn msvc_regions_funclets_and_returns() {
    let site = |pad: u64, selector: i64| EhCallSite {
        start: 0x10b8,
        end: 0x10be,
        pad,
        clauses: vec![EhClause::CatchAll { selector }],
    };
    let t = table().with_msvc(
        vec![site(0x10eb, 2), site(0x10c7, 1)],
        vec![FuncletPad {
            pad: 0x10c7,
            frame: None,
            frame_offset: 0,
            returns: vec![(0x10ea, 0x10be)],
            x86: false,
            cleanup_end: None,
        }],
    );
    let pads: Vec<u64> = t.msvc_sites_at(0x10b8).iter().map(|s| s.pad).collect();
    assert_eq!(pads, vec![0x10eb, 0x10c7]);
    assert!(t.msvc_sites_at(0x10be).is_empty());
    assert!(t.is_pad(0x10c7) && t.is_pad(0x10eb) && t.is_pad(0x40));
    assert!(t.funclet(0x10c7).is_some() && t.funclet(0x10eb).is_none());
    assert_eq!(t.funclet_return(0x10ea), Some(0x10be));
    assert!(!t.in_cleanup_funclet(0x10c8));
    assert!(t.site_at(0x10b8).is_none());
}

#[test]
fn pad_comment_lists_clauses_by_selector() {
    let t = table();
    assert_eq!(
        pad_comment(&t, 0x40),
        "landing pad: catch (std::runtime_error const&) when selector == 1; catch (...) when selector == 2"
    );
    assert_eq!(pad_comment(&t, 0x80), "landing pad: cleanup");
}
