// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x36A0
// Name:            .qbasename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x36A0 jmp     cs:off_20338
//
// Resolved target: qbasename
// Target address:  0x21C70
// GOT/IAT slot:    0x20338
// Slot symbol:     off_20338
// Target type:     <no type info>
// ============================================================

void .qbasename(/* see target signature */)
{
    // Tail-call to qbasename via GOT/IAT indirection
    return qbasename(/* forwarded args */);
}

