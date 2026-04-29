// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2140
// Name:            .put_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2140 jmp     cs:off_A088
//
// Resolved target: put_dword
// Target address:  0xA338
// GOT/IAT slot:    0xA088
// Slot symbol:     off_A088
// Target type:     <no type info>
// ============================================================

void .put_dword(/* see target signature */)
{
    // Tail-call to put_dword via GOT/IAT indirection
    return put_dword(/* forwarded args */);
}

