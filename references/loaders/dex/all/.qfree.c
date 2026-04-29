// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3770
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3770 jmp     cs:off_283A0
//
// Resolved target: qfree
// Target address:  0x28868
// GOT/IAT slot:    0x283A0
// Slot symbol:     off_283A0
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

