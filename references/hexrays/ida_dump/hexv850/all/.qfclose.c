// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B790
// Name:            .qfclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B790 jmp     cs:off_4C0BB0
//
// Resolved target: qfclose
// Target address:  0x4C3BB8
// GOT/IAT slot:    0x4C0BB0
// Slot symbol:     off_4C0BB0
// Target type:     <no type info>
// ============================================================

void .qfclose(/* see target signature */)
{
    // Tail-call to qfclose via GOT/IAT indirection
    return qfclose(/* forwarded args */);
}

