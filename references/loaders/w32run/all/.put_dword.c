// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1090
// Name:            .put_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1090 jmp     cs:off_4030
//
// Resolved target: put_dword
// Target address:  0x4158
// GOT/IAT slot:    0x4030
// Slot symbol:     off_4030
// Target type:     <no type info>
// ============================================================

void .put_dword(/* see target signature */)
{
    // Tail-call to put_dword via GOT/IAT indirection
    return put_dword(/* forwarded args */);
}

