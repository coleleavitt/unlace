// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33E0
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33E0 jmp     cs:off_1A1D8
//
// Resolved target: qfree
// Target address:  0x1A4B0
// GOT/IAT slot:    0x1A1D8
// Slot symbol:     off_1A1D8
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

