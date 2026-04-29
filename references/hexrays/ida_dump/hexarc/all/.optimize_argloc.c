// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABF0
// Name:            .optimize_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABF0 jmp     cs:off_4B9DE0
//
// Resolved target: optimize_argloc
// Target address:  0x4BC800
// GOT/IAT slot:    0x4B9DE0
// Slot symbol:     off_4B9DE0
// Target type:     <no type info>
// ============================================================

void .optimize_argloc(/* see target signature */)
{
    // Tail-call to optimize_argloc via GOT/IAT indirection
    return optimize_argloc(/* forwarded args */);
}

