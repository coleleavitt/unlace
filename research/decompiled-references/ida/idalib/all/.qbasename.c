// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7B90
// Name:            .qbasename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7B90 jmp     cs:off_2C795B0
//
// Resolved target: qbasename
// Target address:  0x83DE50
// GOT/IAT slot:    0x2C795B0
// Slot symbol:     off_2C795B0
// Target type:     <no type info>
// ============================================================

void .qbasename(/* see target signature */)
{
    // Tail-call to qbasename via GOT/IAT indirection
    return qbasename(/* forwarded args */);
}

