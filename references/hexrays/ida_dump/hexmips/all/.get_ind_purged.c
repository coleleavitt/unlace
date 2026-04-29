// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B810
// Name:            .get_ind_purged
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B810 jmp     cs:off_4CDBF0
//
// Resolved target: get_ind_purged
// Target address:  0x4D0620
// GOT/IAT slot:    0x4CDBF0
// Slot symbol:     off_4CDBF0
// Target type:     <no type info>
// ============================================================

void .get_ind_purged(/* see target signature */)
{
    // Tail-call to get_ind_purged via GOT/IAT indirection
    return get_ind_purged(/* forwarded args */);
}

