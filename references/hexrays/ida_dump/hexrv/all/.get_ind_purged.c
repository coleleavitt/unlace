// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B800
// Name:            .get_ind_purged
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B800 jmp     cs:off_4BFBE8
//
// Resolved target: get_ind_purged
// Target address:  0x4C30F0
// GOT/IAT slot:    0x4BFBE8
// Slot symbol:     off_4BFBE8
// Target type:     <no type info>
// ============================================================

void .get_ind_purged(/* see target signature */)
{
    // Tail-call to get_ind_purged via GOT/IAT indirection
    return get_ind_purged(/* forwarded args */);
}

