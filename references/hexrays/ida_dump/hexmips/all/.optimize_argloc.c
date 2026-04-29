// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC20
// Name:            .optimize_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC20 jmp     cs:off_4CDDF8
//
// Resolved target: optimize_argloc
// Target address:  0x4D0838
// GOT/IAT slot:    0x4CDDF8
// Slot symbol:     off_4CDDF8
// Target type:     <no type info>
// ============================================================

void .optimize_argloc(/* see target signature */)
{
    // Tail-call to optimize_argloc via GOT/IAT indirection
    return optimize_argloc(/* forwarded args */);
}

