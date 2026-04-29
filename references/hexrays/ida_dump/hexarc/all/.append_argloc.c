// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29470
// Name:            .append_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29470 jmp     cs:off_4B9220
//
// Resolved target: append_argloc
// Target address:  0x4BBBF0
// GOT/IAT slot:    0x4B9220
// Slot symbol:     off_4B9220
// Target type:     <no type info>
// ============================================================

void .append_argloc(/* see target signature */)
{
    // Tail-call to append_argloc via GOT/IAT indirection
    return append_argloc(/* forwarded args */);
}

