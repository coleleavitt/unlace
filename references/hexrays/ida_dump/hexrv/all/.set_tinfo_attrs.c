// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B8C0
// Name:            .set_tinfo_attrs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B8C0 jmp     cs:off_4BFC48
//
// Resolved target: set_tinfo_attrs
// Target address:  0x4C3158
// GOT/IAT slot:    0x4BFC48
// Slot symbol:     off_4BFC48
// Target type:     <no type info>
// ============================================================

void .set_tinfo_attrs(/* see target signature */)
{
    // Tail-call to set_tinfo_attrs via GOT/IAT indirection
    return set_tinfo_attrs(/* forwarded args */);
}

