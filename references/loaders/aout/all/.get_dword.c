// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11E0
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11E0 jmp     cs:off_60D8
//
// Resolved target: get_dword
// Target address:  0x6260
// GOT/IAT slot:    0x60D8
// Slot symbol:     off_60D8
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

