// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D8F0
// Name:            .get_idati
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D8F0 jmp     cs:off_B3460
//
// Resolved target: get_idati
// Target address:  0xB3C08
// GOT/IAT slot:    0xB3460
// Slot symbol:     off_B3460
// Target type:     <no type info>
// ============================================================

void .get_idati(/* see target signature */)
{
    // Tail-call to get_idati via GOT/IAT indirection
    return get_idati(/* forwarded args */);
}

