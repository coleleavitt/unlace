// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8040
// Name:            .get_nlist_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8040 jmp     cs:off_2A008
//
// Resolved target: get_nlist_size
// Target address:  0x2A578
// GOT/IAT slot:    0x2A008
// Slot symbol:     off_2A008
// Target type:     <no type info>
// ============================================================

void .get_nlist_size(/* see target signature */)
{
    // Tail-call to get_nlist_size via GOT/IAT indirection
    return get_nlist_size(/* forwarded args */);
}

