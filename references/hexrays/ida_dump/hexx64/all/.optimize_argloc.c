// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CD20
// Name:            .optimize_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CD20 jmp     cs:off_4EDE78
//
// Resolved target: optimize_argloc
// Target address:  0x4F21B8
// GOT/IAT slot:    0x4EDE78
// Slot symbol:     off_4EDE78
// Target type:     <no type info>
// ============================================================

void .optimize_argloc(/* see target signature */)
{
    // Tail-call to optimize_argloc via GOT/IAT indirection
    return optimize_argloc(/* forwarded args */);
}

