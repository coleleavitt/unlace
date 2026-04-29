// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10D0
// Name:            .put_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10D0 jmp     cs:off_5050
//
// Resolved target: put_dword
// Target address:  0x5168
// GOT/IAT slot:    0x5050
// Slot symbol:     off_5050
// Target type:     <no type info>
// ============================================================

void .put_dword(/* see target signature */)
{
    // Tail-call to put_dword via GOT/IAT indirection
    return put_dword(/* forwarded args */);
}

