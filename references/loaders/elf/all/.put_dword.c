// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x93B0
// Name:            .put_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x93B0 jmp     cs:off_891C0
//
// Resolved target: put_dword
// Target address:  0x8C4C0
// GOT/IAT slot:    0x891C0
// Slot symbol:     off_891C0
// Target type:     <no type info>
// ============================================================

void .put_dword(/* see target signature */)
{
    // Tail-call to put_dword via GOT/IAT indirection
    return put_dword(/* forwarded args */);
}

