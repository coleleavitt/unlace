// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C1D0
// Name:            .tinfo_get_innermost_udm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C1D0 jmp     cs:off_4CE0D0
//
// Resolved target: tinfo_get_innermost_udm
// Target address:  0x4D0B28
// GOT/IAT slot:    0x4CE0D0
// Slot symbol:     off_4CE0D0
// Target type:     <no type info>
// ============================================================

void .tinfo_get_innermost_udm(/* see target signature */)
{
    // Tail-call to tinfo_get_innermost_udm via GOT/IAT indirection
    return tinfo_get_innermost_udm(/* forwarded args */);
}

