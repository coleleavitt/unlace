// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A760
// Name:            .qfclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A760 jmp     cs:off_4B9B98
//
// Resolved target: qfclose
// Target address:  0x4BC5A8
// GOT/IAT slot:    0x4B9B98
// Slot symbol:     off_4B9B98
// Target type:     <no type info>
// ============================================================

void .qfclose(/* see target signature */)
{
    // Tail-call to qfclose via GOT/IAT indirection
    return qfclose(/* forwarded args */);
}

