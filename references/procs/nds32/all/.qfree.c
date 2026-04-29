// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8840
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8840 jmp     cs:off_2A408
//
// Resolved target: qfree
// Target address:  0x2A998
// GOT/IAT slot:    0x2A408
// Slot symbol:     off_2A408
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

