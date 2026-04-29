// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E840
// Name:            .get_ind_purged
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E840 jmp     cs:off_4E9C08
//
// Resolved target: get_ind_purged
// Target address:  0x4EC638
// GOT/IAT slot:    0x4E9C08
// Slot symbol:     off_4E9C08
// Target type:     <no type info>
// ============================================================

void .get_ind_purged(/* see target signature */)
{
    // Tail-call to get_ind_purged via GOT/IAT indirection
    return get_ind_purged(/* forwarded args */);
}

