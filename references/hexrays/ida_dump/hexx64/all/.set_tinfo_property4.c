// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C840
// Name:            .set_tinfo_property4
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C840 jmp     cs:off_4EDC08
//
// Resolved target: set_tinfo_property4
// Target address:  0x4F1F40
// GOT/IAT slot:    0x4EDC08
// Slot symbol:     off_4EDC08
// Target type:     <no type info>
// ============================================================

void .set_tinfo_property4(/* see target signature */)
{
    // Tail-call to set_tinfo_property4 via GOT/IAT indirection
    return set_tinfo_property4(/* forwarded args */);
}

