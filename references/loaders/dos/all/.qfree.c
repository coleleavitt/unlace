// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2660
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2660 jmp     cs:off_B318
//
// Resolved target: qfree
// Target address:  0xB7D0
// GOT/IAT slot:    0xB318
// Slot symbol:     off_B318
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

