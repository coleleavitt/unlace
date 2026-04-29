// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C170
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C170 jmp     cs:off_4C00A0
//
// Resolved target: qfree
// Target address:  0x4C35D0
// GOT/IAT slot:    0x4C00A0
// Slot symbol:     off_4C00A0
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

