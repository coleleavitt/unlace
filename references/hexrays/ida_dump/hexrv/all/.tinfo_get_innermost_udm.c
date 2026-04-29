// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C1C0
// Name:            .tinfo_get_innermost_udm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C1C0 jmp     cs:off_4C00C8
//
// Resolved target: tinfo_get_innermost_udm
// Target address:  0x4C35F8
// GOT/IAT slot:    0x4C00C8
// Slot symbol:     off_4C00C8
// Target type:     <no type info>
// ============================================================

void .tinfo_get_innermost_udm(/* see target signature */)
{
    // Tail-call to tinfo_get_innermost_udm via GOT/IAT indirection
    return tinfo_get_innermost_udm(/* forwarded args */);
}

