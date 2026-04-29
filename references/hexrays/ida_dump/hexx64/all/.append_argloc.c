// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B480
// Name:            .append_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B480 jmp     cs:off_4ED228
//
// Resolved target: append_argloc
// Target address:  0x4F1520
// GOT/IAT slot:    0x4ED228
// Slot symbol:     off_4ED228
// Target type:     <no type info>
// ============================================================

void .append_argloc(/* see target signature */)
{
    // Tail-call to append_argloc via GOT/IAT indirection
    return append_argloc(/* forwarded args */);
}

