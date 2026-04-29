// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21A0
// Name:            .put_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21A0 jmp     cs:off_B0B8
//
// Resolved target: put_dword
// Target address:  0xB360
// GOT/IAT slot:    0xB0B8
// Slot symbol:     off_B0B8
// Target type:     <no type info>
// ============================================================

void .put_dword(/* see target signature */)
{
    // Tail-call to put_dword via GOT/IAT indirection
    return put_dword(/* forwarded args */);
}

