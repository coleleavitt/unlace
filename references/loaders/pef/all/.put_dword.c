// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2130
// Name:            .put_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2130 jmp     cs:off_8080
//
// Resolved target: put_dword
// Target address:  0x8270
// GOT/IAT slot:    0x8080
// Slot symbol:     off_8080
// Target type:     <no type info>
// ============================================================

void .put_dword(/* see target signature */)
{
    // Tail-call to put_dword via GOT/IAT indirection
    return put_dword(/* forwarded args */);
}

