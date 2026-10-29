// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A78C0
// Name:            .qmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A78C0 jmp     cs:off_2C79448
//
// Resolved target: qmove
// Target address:  0x83F2A0
// GOT/IAT slot:    0x2C79448
// Slot symbol:     off_2C79448
// Target type:     <no type info>
// ============================================================

void .qmove(/* see target signature */)
{
    // Tail-call to qmove via GOT/IAT indirection
    return qmove(/* forwarded args */);
}

