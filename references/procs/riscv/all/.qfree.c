// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAA40
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAA40 jmp     cs:off_35508
//
// Resolved target: qfree
// Target address:  0x35B78
// GOT/IAT slot:    0x35508
// Slot symbol:     off_35508
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

