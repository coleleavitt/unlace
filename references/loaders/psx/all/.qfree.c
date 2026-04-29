// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23E0
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23E0 jmp     cs:off_A1D8
//
// Resolved target: qfree
// Target address:  0xA4A8
// GOT/IAT slot:    0xA1D8
// Slot symbol:     off_A1D8
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

