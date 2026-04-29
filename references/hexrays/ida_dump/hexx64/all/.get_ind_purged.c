// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C8E0
// Name:            .get_ind_purged
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C8E0 jmp     cs:off_4EDC58
//
// Resolved target: get_ind_purged
// Target address:  0x4F1F90
// GOT/IAT slot:    0x4EDC58
// Slot symbol:     off_4EDC58
// Target type:     <no type info>
// ============================================================

void .get_ind_purged(/* see target signature */)
{
    // Tail-call to get_ind_purged via GOT/IAT indirection
    return get_ind_purged(/* forwarded args */);
}

