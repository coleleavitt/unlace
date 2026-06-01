// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD3D0
// Name:            .put_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD3D0 jmp     cs:off_2C7C1D0
//
// Resolved target: put_dword
// Target address:  0x59A2B0
// GOT/IAT slot:    0x2C7C1D0
// Slot symbol:     off_2C7C1D0
// Target type:     <no type info>
// ============================================================

void .put_dword(/* see target signature */)
{
    // Tail-call to put_dword via GOT/IAT indirection
    return put_dword(/* forwarded args */);
}

