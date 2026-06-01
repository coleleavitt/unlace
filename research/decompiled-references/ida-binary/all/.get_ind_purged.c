// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111240
// Name:            .get_ind_purged
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111240 jmp     cs:get_ind_purged_ptr
//
// Resolved target: get_ind_purged
// Target address:  0x8D31C8
// GOT/IAT slot:    0x89F5C0
// Slot symbol:     get_ind_purged_ptr
// Target type:     <no type info>
// ============================================================

void .get_ind_purged(/* see target signature */)
{
    // Tail-call to get_ind_purged via GOT/IAT indirection
    return get_ind_purged(/* forwarded args */);
}

