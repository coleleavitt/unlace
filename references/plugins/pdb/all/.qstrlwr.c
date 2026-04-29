// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D3C0
// Name:            .qstrlwr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D3C0 jmp     cs:off_B31C8
//
// Resolved target: qstrlwr
// Target address:  0xB3960
// GOT/IAT slot:    0xB31C8
// Slot symbol:     off_B31C8
// Target type:     <no type info>
// ============================================================

void .qstrlwr(/* see target signature */)
{
    // Tail-call to qstrlwr via GOT/IAT indirection
    return qstrlwr(/* forwarded args */);
}

