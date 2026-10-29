// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113200
// Name:            .compare_bpt_locs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113200 jmp     cs:compare_bpt_locs_ptr
//
// Resolved target: compare_bpt_locs
// Target address:  0x8D4670
// GOT/IAT slot:    0x8A05A0
// Slot symbol:     compare_bpt_locs_ptr
// Target type:     <no type info>
// ============================================================

void .compare_bpt_locs(/* see target signature */)
{
    // Tail-call to compare_bpt_locs via GOT/IAT indirection
    return compare_bpt_locs(/* forwarded args */);
}

