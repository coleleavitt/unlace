// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DCC0
// Name:            .qexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DCC0 jmp     cs:off_4E9648
//
// Resolved target: qexit
// Target address:  0x4EC060
// GOT/IAT slot:    0x4E9648
// Slot symbol:     off_4E9648
// Target type:     <no type info>
// ============================================================

void .qexit(/* see target signature */)
{
    // Tail-call to qexit via GOT/IAT indirection
    return qexit(/* forwarded args */);
}

