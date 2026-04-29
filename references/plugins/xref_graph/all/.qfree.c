// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16AA0
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16AA0 jmp     cs:off_4F538
//
// Resolved target: qfree
// Target address:  0x50768
// GOT/IAT slot:    0x4F538
// Slot symbol:     off_4F538
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

