// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11C0
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11C0 jmp     cs:off_50C8
//
// Resolved target: qfree
// Target address:  0x51F0
// GOT/IAT slot:    0x50C8
// Slot symbol:     off_50C8
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

