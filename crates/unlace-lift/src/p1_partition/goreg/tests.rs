use super::*;

#[test]
fn goroutine_register_is_golang_gated() {
    assert_eq!(
        goroutine_register("x86:LE:64:default:golang", None),
        Some("R14")
    );
    assert_eq!(
        goroutine_register("AARCH64:LE:64:v8A:golang", None),
        Some("x28")
    );
    // The C cspec, a non-Go image, never names one.
    assert_eq!(goroutine_register("x86:LE:64:default:gcc", None), None);
    // x86-32 Go reaches `g` through TLS: golang cspec, no pinned register.
    assert_eq!(goroutine_register("x86:LE:32:default:golang", None), None);
    assert_eq!(goroutine_register("", None), None);
}

#[test]
fn no_goroutine_register_before_the_register_abi() {
    let (amd64, arm64) = ("x86:LE:64:default:golang", "AARCH64:LE:64:v8A:golang");
    assert_eq!(goroutine_register(amd64, Some((1, 16))), None);
    assert_eq!(goroutine_register(amd64, Some((1, 17))), Some("R14"));
    assert_eq!(goroutine_register(arm64, Some((1, 17))), None);
    assert_eq!(goroutine_register(arm64, Some((1, 18))), Some("x28"));
}

#[test]
fn shell_offsets_match_the_runtime_source() {
    // The go1.22 runtime2.go 64-bit layout this module's doc derives:
    // running sums must land the liblink-stated offsets.
    let mut off = 0;
    let mut at = std::collections::HashMap::new();
    for (name, size, _) in G_FIELDS_HEAD {
        at.insert(*name, off);
        off += size;
    }
    assert_eq!(off, G_SCHED_OFFSET);
    off += GOBUF_SIZE;
    for (name, size, _) in G_FIELDS_TAIL {
        at.insert(*name, off);
        off += size;
    }
    assert_eq!(at["stackguard0"], 0x10, "offset known to liblink");
    assert_eq!(at["stackguard1"], 0x18, "offset known to liblink");
    assert_eq!(at["_panic"], 0x20, "offset known to liblink");
    assert_eq!(at["m"], 0x30, "offset known to arm liblink");
    assert_eq!(at["syscallsp"], 0x70);
    assert_eq!(at["atomicstatus"], 0x90);
    assert_eq!(at["goid"], 0x98);
    assert!(off <= G_SIZE, "modeled prefix fits the declared size");
    assert_eq!(GOBUF_FIELDS.len(), 7, "gobuf is seven words");
}

#[test]
fn m_shell_offsets_match_the_runtime_source() {
    // runtime2.go `struct m`, 64-bit linux: the field list and order are
    // identical in go1.22.10 and go1.25.3 (verified against both vendored
    // GOROOTs; 1.25 drops the explicit `_ uint32` pad that alignment
    // reinserts). Running sums must land the source-derived offsets.
    let mut at = std::collections::HashMap::new();
    let mut off = 0;
    for (name, size, _) in M_FIELDS_HEAD {
        at.insert(*name, off);
        off += size;
    }
    assert_eq!(off, M_MOREBUF_OFFSET);
    at.insert("morebuf", off);
    off += GOBUF_SIZE;
    for (name, size, _) in M_FIELDS_MID {
        at.insert(*name, off);
        off += size;
    }
    assert_eq!(off, M_GSIGSTACK_OFFSET);
    at.insert("goSigStack", off);
    off += GSIGSTACK_SIZE;
    for (name, size, _) in &M_FIELDS_TAIL[..1] {
        at.insert(*name, off);
        off += size;
    }
    assert_eq!(off, M_TLS_OFFSET);
    at.insert("tls", off);
    off += 6 * 8;
    for (name, size, _) in &M_FIELDS_TAIL[1..] {
        at.insert(*name, off);
        off += size;
    }
    assert_eq!(at["g0"], 0x0);
    assert_eq!(at["divmod"], 0x40, "known to liblink");
    assert_eq!(at["procid"], 0x48);
    assert_eq!(at["gsignal"], 0x50);
    assert_eq!(at["sigmask"], 0x80, "linux [2]uint32 sigset");
    assert_eq!(at["mstartfn"], 0xb8);
    assert_eq!(at["curg"], 0xc0);
    assert_eq!(at["p"], 0xd0);
    assert_eq!(at["id"], 0xe8);
    assert_eq!(at["locks"], 0x108);
    assert!(off <= M_SIZE, "modeled prefix fits the declared size");
    // gsignalStack is five words in both sources (signal_unix.go).
    assert_eq!(GSIGSTACK_FIELDS.len() as i32 * 8, GSIGSTACK_SIZE);
}

#[test]
fn layouts_follow_the_release_drift() {
    // go1.22: seven-word gobuf, no syscallbp (the baseline).
    assert_eq!(GoLayout::from_version(1, 22), GoLayout::baseline());
    // go1.23/1.24: syscallbp inserted, gobuf still seven words.
    assert_eq!(
        GoLayout::from_version(1, 23),
        GoLayout {
            gobuf_words: 7,
            syscallbp: true
        }
    );
    assert_eq!(
        GoLayout::from_version(1, 24),
        GoLayout {
            gobuf_words: 7,
            syscallbp: true
        }
    );
    // go1.25: gobuf.ret dropped.
    assert_eq!(
        GoLayout::from_version(1, 25),
        GoLayout {
            gobuf_words: 6,
            syscallbp: true
        }
    );
    assert_eq!(GoLayout::from_version(1, 25).gobuf_size(), 0x30);
    // Unknown / future majors stay conservative only in the fields they
    // state; the env fallback is the baseline.
    assert_eq!(GoLayout::baseline().gobuf_size(), GOBUF_SIZE);
    // The 1.25 g tail keeps the liblink-stable anchors: with the six-word
    // gobuf and syscallbp inserted, stktopsp..goid land back on the
    // baseline offsets (0x80..0x98) and only syscallsp/pc move.
    let l = GoLayout::from_version(1, 25);
    let sched_end = G_SCHED_OFFSET + l.gobuf_size(); // 0x68
    assert_eq!(sched_end, 0x68);
    let stktopsp = sched_end + 8 + 8 + 8; // syscallsp, syscallpc, syscallbp
    assert_eq!(stktopsp, 0x80);
    // And the 1.25 m: curg shifts to 0xb8 (one word below the baseline).
    assert_eq!(0xc0 + l.gobuf_size() - GOBUF_SIZE, 0xb8);
}
