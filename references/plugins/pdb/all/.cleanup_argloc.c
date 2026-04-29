// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D0E0
// Name:            .cleanup_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D0E0 jmp     cs:off_B3058
//
// Resolved target: cleanup_argloc
// Target address:  0xB37C8
// GOT/IAT slot:    0xB3058
// Slot symbol:     off_B3058
// Target type:     <no type info>
// ============================================================

void .cleanup_argloc(/* see target signature */)
{
    // Tail-call to cleanup_argloc via GOT/IAT indirection
    return cleanup_argloc(/* forwarded args */);
}

