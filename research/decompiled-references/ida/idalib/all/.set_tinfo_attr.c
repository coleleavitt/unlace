// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A77A0
// Name:            .set_tinfo_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A77A0 jmp     cs:off_2C793B8
//
// Resolved target: set_tinfo_attr
// Target address:  0x54B2C0
// GOT/IAT slot:    0x2C793B8
// Slot symbol:     off_2C793B8
// Target type:     <no type info>
// ============================================================

void .set_tinfo_attr(/* see target signature */)
{
    // Tail-call to set_tinfo_attr via GOT/IAT indirection
    return set_tinfo_attr(/* forwarded args */);
}

