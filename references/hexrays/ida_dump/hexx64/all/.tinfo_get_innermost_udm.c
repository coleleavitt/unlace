// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D340
// Name:            .tinfo_get_innermost_udm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D340 jmp     cs:off_4EE188
//
// Resolved target: tinfo_get_innermost_udm
// Target address:  0x4F24E0
// GOT/IAT slot:    0x4EE188
// Slot symbol:     off_4EE188
// Target type:     <no type info>
// ============================================================

void .tinfo_get_innermost_udm(/* see target signature */)
{
    // Tail-call to tinfo_get_innermost_udm via GOT/IAT indirection
    return tinfo_get_innermost_udm(/* forwarded args */);
}

