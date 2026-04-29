// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62D0
// Name:            .qexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62D0 jmp     cs:off_2D150
//
// Resolved target: qexit
// Target address:  0x2D650
// GOT/IAT slot:    0x2D150
// Slot symbol:     off_2D150
// Target type:     <no type info>
// ============================================================

void .qexit(/* see target signature */)
{
    // Tail-call to qexit via GOT/IAT indirection
    return qexit(/* forwarded args */);
}

