// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10280
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10280 jmp     cs:off_2E128
//
// Resolved target: get_dword
// Target address:  0x36DA8
// GOT/IAT slot:    0x2E128
// Slot symbol:     off_2E128
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

