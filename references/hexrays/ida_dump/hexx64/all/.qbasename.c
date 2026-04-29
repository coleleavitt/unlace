// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D3B0
// Name:            .qbasename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D3B0 jmp     cs:off_4EE1C0
//
// Resolved target: qbasename
// Target address:  0x4F2520
// GOT/IAT slot:    0x4EE1C0
// Slot symbol:     off_4EE1C0
// Target type:     <no type info>
// ============================================================

void .qbasename(/* see target signature */)
{
    // Tail-call to qbasename via GOT/IAT indirection
    return qbasename(/* forwarded args */);
}

