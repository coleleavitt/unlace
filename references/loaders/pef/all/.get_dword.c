// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2280
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2280 jmp     cs:off_8128
//
// Resolved target: get_dword
// Target address:  0x8320
// GOT/IAT slot:    0x8128
// Slot symbol:     off_8128
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

