// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA970
// Name:            .set_tinfo_attrs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA970 jmp     cs:off_2C7ACA0
//
// Resolved target: set_tinfo_attrs
// Target address:  0x54B0F0
// GOT/IAT slot:    0x2C7ACA0
// Slot symbol:     off_2C7ACA0
// Target type:     <no type info>
// ============================================================

void .set_tinfo_attrs(/* see target signature */)
{
    // Tail-call to set_tinfo_attrs via GOT/IAT indirection
    return set_tinfo_attrs(/* forwarded args */);
}

