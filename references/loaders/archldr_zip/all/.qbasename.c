// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22F0
// Name:            .qbasename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22F0 jmp     cs:off_8160
//
// Resolved target: qbasename
// Target address:  0x8360
// GOT/IAT slot:    0x8160
// Slot symbol:     off_8160
// Target type:     <no type info>
// ============================================================

void .qbasename(/* see target signature */)
{
    // Tail-call to qbasename via GOT/IAT indirection
    return qbasename(/* forwarded args */);
}

