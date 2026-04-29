// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C230
// Name:            .qbasename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C230 jmp     cs:off_4C0100
//
// Resolved target: qbasename
// Target address:  0x4C3638
// GOT/IAT slot:    0x4C0100
// Slot symbol:     off_4C0100
// Target type:     <no type info>
// ============================================================

void .qbasename(/* see target signature */)
{
    // Tail-call to qbasename via GOT/IAT indirection
    return qbasename(/* forwarded args */);
}

