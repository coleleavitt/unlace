// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6860
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6860 jmp     cs:off_2D418
//
// Resolved target: qfree
// Target address:  0x2D940
// GOT/IAT slot:    0x2D418
// Slot symbol:     off_2D418
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

