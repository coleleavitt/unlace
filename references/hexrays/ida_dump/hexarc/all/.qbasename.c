// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B210
// Name:            .qbasename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B210 jmp     cs:off_4BA0F0
//
// Resolved target: qbasename
// Target address:  0x4BCB30
// GOT/IAT slot:    0x4BA0F0
// Slot symbol:     off_4BA0F0
// Target type:     <no type info>
// ============================================================

void .qbasename(/* see target signature */)
{
    // Tail-call to qbasename via GOT/IAT indirection
    return qbasename(/* forwarded args */);
}

