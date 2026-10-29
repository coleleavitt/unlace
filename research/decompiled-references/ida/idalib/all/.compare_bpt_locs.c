// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8650
// Name:            .compare_bpt_locs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8650 jmp     cs:off_2C79B10
//
// Resolved target: compare_bpt_locs
// Target address:  0x3AF0B0
// GOT/IAT slot:    0x2C79B10
// Slot symbol:     off_2C79B10
// Target type:     <no type info>
// ============================================================

void .compare_bpt_locs(/* see target signature */)
{
    // Tail-call to compare_bpt_locs via GOT/IAT indirection
    return compare_bpt_locs(/* forwarded args */);
}

