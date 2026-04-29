// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A470
// Name:            .append_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A470 jmp     cs:off_4BF220
//
// Resolved target: append_argloc
// Target address:  0x4C26E8
// GOT/IAT slot:    0x4BF220
// Slot symbol:     off_4BF220
// Target type:     <no type info>
// ============================================================

void .append_argloc(/* see target signature */)
{
    // Tail-call to append_argloc via GOT/IAT indirection
    return append_argloc(/* forwarded args */);
}

