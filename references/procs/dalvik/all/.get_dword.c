// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5400
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5400 jmp     cs:off_1A1E8
//
// Resolved target: get_dword
// Target address:  0x1A578
// GOT/IAT slot:    0x1A1E8
// Slot symbol:     off_1A1E8
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

