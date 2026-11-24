//! Porter in-module tests for `architecture.rs`.
//!
//! Two strands:
//!   1. **Defaults + flags + naming**: a minimal `Architecture` over a fresh
//!      (uninitialized) Sleigh — exercises the verbatim `resetDefaultsInternal`
//!      transcription, the unlace anchor flags, `nameFunction`, and the warning
//!      sink without needing a built `.sla`.
//!   2. **Real-`.sla` bootstrap**: builds an `Architecture` over a Sleigh with a
//!      decoded `.sla` (skips gracefully when specs are unbuilt), then lifts a
//!      `Funcdata` through it (the W3 boot seam).

use std::rc::Rc;

use unlace_base::address::Address;

use super::*;

#[test]
fn comment_database_dedups_matching_text() {
    let mut db = CommentDatabase::new();
    let ram = Rc::new(unlace_base::space::AddrSpace::new(
        unlace_base::space::spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        4,
        1,
        7,
        unlace_base::space::addrspace_flags::hasphysical,
        1,
        1,
    ));
    let fad = Address::new(Rc::clone(&ram), 0x1000);
    let ad = Address::new(Rc::clone(&ram), 0x1004);
    assert!(db.add_comment_no_duplicate(comment_type::warning, &fad, &ad, "WARNING: x"));
    // Identical (fad,ad,text) is dropped (returns false).
    assert!(!db.add_comment_no_duplicate(comment_type::warning, &fad, &ad, "WARNING: x"));
    // Different text at the same address is stored.
    assert!(db.add_comment_no_duplicate(comment_type::warning, &fad, &ad, "WARNING: y"));
    assert_eq!(db.comments().len(), 2);
}

#[test]
fn version_constants_via_capability() {
    // The architecture's capability version constants are the decompiler
    // version (architecture.cc:36-37).
    assert_eq!(crate::capability::get_major_version(), 6);
    assert_eq!(crate::capability::get_minor_version(), 1);
}

// ===========================================================================
// w9x-arch-engine-glue: owned-subsystem accessors + ArchOptionContext.
// ===========================================================================
