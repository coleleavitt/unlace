// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B790
// Name:            .qfclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B790 jmp     cs:off_4CDBB0
//
// Resolved target: qfclose
// Target address:  0x4D05E0
// GOT/IAT slot:    0x4CDBB0
// Slot symbol:     off_4CDBB0
// Target type:     <no type info>
// ============================================================

void .qfclose(/* see target signature */)
{
    // Tail-call to qfclose via GOT/IAT indirection
    return qfclose(/* forwarded args */);
}

