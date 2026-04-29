// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D480
// Name:            .append_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D480 jmp     cs:off_4E9228
//
// Resolved target: append_argloc
// Target address:  0x4EBC18
// GOT/IAT slot:    0x4E9228
// Slot symbol:     off_4E9228
// Target type:     <no type info>
// ============================================================

void .append_argloc(/* see target signature */)
{
    // Tail-call to append_argloc via GOT/IAT indirection
    return append_argloc(/* forwarded args */);
}

