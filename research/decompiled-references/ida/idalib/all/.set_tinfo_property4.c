// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABD10
// Name:            .set_tinfo_property4
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABD10 jmp     cs:off_2C7B670
//
// Resolved target: set_tinfo_property4
// Target address:  0x54F210
// GOT/IAT slot:    0x2C7B670
// Slot symbol:     off_2C7B670
// Target type:     <no type info>
// ============================================================

void .set_tinfo_property4(/* see target signature */)
{
    // Tail-call to set_tinfo_property4 via GOT/IAT indirection
    return set_tinfo_property4(/* forwarded args */);
}

