// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D6D0
// Name:            .get_tinfo_attrs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D6D0 jmp     cs:off_4E9350
//
// Resolved target: get_tinfo_attrs
// Target address:  0x4EBD40
// GOT/IAT slot:    0x4E9350
// Slot symbol:     off_4E9350
// Target type:     <no type info>
// ============================================================

void .get_tinfo_attrs(/* see target signature */)
{
    // Tail-call to get_tinfo_attrs via GOT/IAT indirection
    return get_tinfo_attrs(/* forwarded args */);
}

