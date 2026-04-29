// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10B0
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10B0 jmp     cs:off_4040
//
// Resolved target: qfree
// Target address:  0x40E0
// GOT/IAT slot:    0x4040
// Slot symbol:     off_4040
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

