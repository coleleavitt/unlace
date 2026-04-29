// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D2F0
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D2F0 jmp     cs:off_4EE160
//
// Resolved target: qfree
// Target address:  0x4F24B8
// GOT/IAT slot:    0x4EE160
// Slot symbol:     off_4EE160
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

