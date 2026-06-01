// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABFC0
// Name:            .optimize_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABFC0 jmp     cs:off_2C7B7C8
//
// Resolved target: optimize_argloc
// Target address:  0x6A8920
// GOT/IAT slot:    0x2C7B7C8
// Slot symbol:     off_2C7B7C8
// Target type:     <no type info>
// ============================================================

void .optimize_argloc(/* see target signature */)
{
    // Tail-call to optimize_argloc via GOT/IAT indirection
    return optimize_argloc(/* forwarded args */);
}

