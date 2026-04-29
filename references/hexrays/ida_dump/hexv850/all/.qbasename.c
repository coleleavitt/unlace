// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C240
// Name:            .qbasename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C240 jmp     cs:off_4C1108
//
// Resolved target: qbasename
// Target address:  0x4C4140
// GOT/IAT slot:    0x4C1108
// Slot symbol:     off_4C1108
// Target type:     <no type info>
// ============================================================

void .qbasename(/* see target signature */)
{
    // Tail-call to qbasename via GOT/IAT indirection
    return qbasename(/* forwarded args */);
}

