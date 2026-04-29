// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2220
// Name:            .qfclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2220 jmp     cs:off_130F8
//
// Resolved target: qfclose
// Target address:  0x13390
// GOT/IAT slot:    0x130F8
// Slot symbol:     off_130F8
// Target type:     <no type info>
// ============================================================

void .qfclose(/* see target signature */)
{
    // Tail-call to qfclose via GOT/IAT indirection
    return qfclose(/* forwarded args */);
}

