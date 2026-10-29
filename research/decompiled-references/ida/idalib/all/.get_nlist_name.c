// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABCE0
// Name:            .get_nlist_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABCE0 jmp     cs:off_2C7B658
//
// Resolved target: get_nlist_name
// Target address:  0x4E1560
// GOT/IAT slot:    0x2C7B658
// Slot symbol:     off_2C7B658
// Target type:     <no type info>
// ============================================================

void .get_nlist_name(/* see target signature */)
{
    // Tail-call to get_nlist_name via GOT/IAT indirection
    return get_nlist_name(/* forwarded args */);
}

