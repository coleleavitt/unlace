// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7380
// Name:            .get_tinfo_attrs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7380 jmp     cs:off_2C791A8
//
// Resolved target: get_tinfo_attrs
// Target address:  0x54ABB0
// GOT/IAT slot:    0x2C791A8
// Slot symbol:     off_2C791A8
// Target type:     <no type info>
// ============================================================

void .get_tinfo_attrs(/* see target signature */)
{
    // Tail-call to get_tinfo_attrs via GOT/IAT indirection
    return get_tinfo_attrs(/* forwarded args */);
}

