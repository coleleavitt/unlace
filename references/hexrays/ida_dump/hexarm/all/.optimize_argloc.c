// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EC50
// Name:            .optimize_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EC50 jmp     cs:off_4E9E10
//
// Resolved target: optimize_argloc
// Target address:  0x4EC850
// GOT/IAT slot:    0x4E9E10
// Slot symbol:     off_4E9E10
// Target type:     <no type info>
// ============================================================

void .optimize_argloc(/* see target signature */)
{
    // Tail-call to optimize_argloc via GOT/IAT indirection
    return optimize_argloc(/* forwarded args */);
}

