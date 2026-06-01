// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9820
// Name:            .qmakepath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9820 jmp     cs:off_2C7A3F8
//
// Resolved target: qmakepath
// Target address:  0x83DCC0
// GOT/IAT slot:    0x2C7A3F8
// Slot symbol:     off_2C7A3F8
// Target type:     <no type info>
// ============================================================

void .qmakepath(/* see target signature */)
{
    // Tail-call to qmakepath via GOT/IAT indirection
    return qmakepath(/* forwarded args */);
}

