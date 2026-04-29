// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2400
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2400 jmp     cs:off_A1E8
//
// Resolved target: qfree
// Target address:  0xB4D8
// GOT/IAT slot:    0xA1E8
// Slot symbol:     off_A1E8
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

