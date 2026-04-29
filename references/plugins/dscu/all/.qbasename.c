// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44E0
// Name:            .qbasename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44E0 jmp     cs:off_1F258
//
// Resolved target: qbasename
// Target address:  0x1F530
// GOT/IAT slot:    0x1F258
// Slot symbol:     off_1F258
// Target type:     <no type info>
// ============================================================

void .qbasename(/* see target signature */)
{
    // Tail-call to qbasename via GOT/IAT indirection
    return qbasename(/* forwarded args */);
}

