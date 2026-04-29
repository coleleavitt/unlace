// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B780
// Name:            .qfclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B780 jmp     cs:off_4BFBA8
//
// Resolved target: qfclose
// Target address:  0x4C30B0
// GOT/IAT slot:    0x4BFBA8
// Slot symbol:     off_4BFBA8
// Target type:     <no type info>
// ============================================================

void .qfclose(/* see target signature */)
{
    // Tail-call to qfclose via GOT/IAT indirection
    return qfclose(/* forwarded args */);
}

