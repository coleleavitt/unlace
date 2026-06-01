// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD0F0
// Name:            .get_tinfo_property4
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD0F0 jmp     cs:off_2C7C060
//
// Resolved target: get_tinfo_property4
// Target address:  0x5487B0
// GOT/IAT slot:    0x2C7C060
// Slot symbol:     off_2C7C060
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property4(/* see target signature */)
{
    // Tail-call to get_tinfo_property4 via GOT/IAT indirection
    return get_tinfo_property4(/* forwarded args */);
}

