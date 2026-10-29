// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7160
// Name:            .get_ind_purged
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7160 jmp     cs:off_2C79098
//
// Resolved target: get_ind_purged
// Target address:  0x3C5830
// GOT/IAT slot:    0x2C79098
// Slot symbol:     off_2C79098
// Target type:     <no type info>
// ============================================================

void .get_ind_purged(/* see target signature */)
{
    // Tail-call to get_ind_purged via GOT/IAT indirection
    return get_ind_purged(/* forwarded args */);
}

