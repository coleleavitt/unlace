// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x99E0
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x99E0 jmp     cs:off_2E4D8
//
// Resolved target: qfree
// Target address:  0x2EB68
// GOT/IAT slot:    0x2E4D8
// Slot symbol:     off_2E4D8
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

