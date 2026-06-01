// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC9A0
// Name:            .set_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC9A0 jmp     cs:off_2C7BCB8
//
// Resolved target: set_tinfo_property
// Target address:  0x54F1D0
// GOT/IAT slot:    0x2C7BCB8
// Slot symbol:     off_2C7BCB8
// Target type:     <no type info>
// ============================================================

void .set_tinfo_property(/* see target signature */)
{
    // Tail-call to set_tinfo_property via GOT/IAT indirection
    return set_tinfo_property(/* forwarded args */);
}

