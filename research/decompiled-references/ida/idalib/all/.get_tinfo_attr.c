// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7740
// Name:            .get_tinfo_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7740 jmp     cs:off_2C79388
//
// Resolved target: get_tinfo_attr
// Target address:  0x54B860
// GOT/IAT slot:    0x2C79388
// Slot symbol:     off_2C79388
// Target type:     <no type info>
// ============================================================

void .get_tinfo_attr(/* see target signature */)
{
    // Tail-call to get_tinfo_attr via GOT/IAT indirection
    return get_tinfo_attr(/* forwarded args */);
}

