// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8010
// Name:            .qclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8010 jmp     cs:off_2C797F0
//
// Resolved target: qclose
// Target address:  0x83E900
// GOT/IAT slot:    0x2C797F0
// Slot symbol:     off_2C797F0
// Target type:     <no type info>
// ============================================================

void .qclose(/* see target signature */)
{
    // Tail-call to qclose via GOT/IAT indirection
    return qclose(/* forwarded args */);
}

