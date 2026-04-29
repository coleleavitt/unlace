// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B780
// Name:            .qfclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B780 jmp     cs:off_4DABA8
//
// Resolved target: qfclose
// Target address:  0x4DD5B8
// GOT/IAT slot:    0x4DABA8
// Slot symbol:     off_4DABA8
// Target type:     <no type info>
// ============================================================

void .qfclose(/* see target signature */)
{
    // Tail-call to qfclose via GOT/IAT indirection
    return qfclose(/* forwarded args */);
}

