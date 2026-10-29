// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC430
// Name:            .tinfo_get_innermost_udm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC430 jmp     cs:off_2C7BA00
//
// Resolved target: tinfo_get_innermost_udm
// Target address:  0x5541B0
// GOT/IAT slot:    0x2C7BA00
// Slot symbol:     off_2C7BA00
// Target type:     <no type info>
// ============================================================

void .tinfo_get_innermost_udm(/* see target signature */)
{
    // Tail-call to tinfo_get_innermost_udm via GOT/IAT indirection
    return tinfo_get_innermost_udm(/* forwarded args */);
}

