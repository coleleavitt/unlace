// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x80E0
// Name:            .cleanup_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x80E0 jmp     cs:off_2A058
//
// Resolved target: cleanup_argloc
// Target address:  0x2A5C8
// GOT/IAT slot:    0x2A058
// Slot symbol:     off_2A058
// Target type:     <no type info>
// ============================================================

void .cleanup_argloc(/* see target signature */)
{
    // Tail-call to cleanup_argloc via GOT/IAT indirection
    return cleanup_argloc(/* forwarded args */);
}

