// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F200
// Name:            .tinfo_get_innermost_udm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F200 jmp     cs:off_4EA0E8
//
// Resolved target: tinfo_get_innermost_udm
// Target address:  0x4ECB40
// GOT/IAT slot:    0x4EA0E8
// Slot symbol:     off_4EA0E8
// Target type:     <no type info>
// ============================================================

void .tinfo_get_innermost_udm(/* see target signature */)
{
    // Tail-call to tinfo_get_innermost_udm via GOT/IAT indirection
    return tinfo_get_innermost_udm(/* forwarded args */);
}

