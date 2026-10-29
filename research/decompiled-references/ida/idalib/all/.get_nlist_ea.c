// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A95D0
// Name:            .get_nlist_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A95D0 jmp     cs:off_2C7A2D0
//
// Resolved target: get_nlist_ea
// Target address:  0x4E0AF0
// GOT/IAT slot:    0x2C7A2D0
// Slot symbol:     off_2C7A2D0
// Target type:     <no type info>
// ============================================================

void .get_nlist_ea(/* see target signature */)
{
    // Tail-call to get_nlist_ea via GOT/IAT indirection
    return get_nlist_ea(/* forwarded args */);
}

