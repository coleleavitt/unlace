// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32D0
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32D0 jmp     cs:off_1A150
//
// Resolved target: get_dword
// Target address:  0x1A410
// GOT/IAT slot:    0x1A150
// Slot symbol:     off_1A150
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

