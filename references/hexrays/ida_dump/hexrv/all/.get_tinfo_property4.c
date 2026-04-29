// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB80
// Name:            .get_tinfo_property4
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB80 jmp     cs:off_4BF5A8
//
// Resolved target: get_tinfo_property4
// Target address:  0x4C2A90
// GOT/IAT slot:    0x4BF5A8
// Slot symbol:     off_4BF5A8
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property4(/* see target signature */)
{
    // Tail-call to get_tinfo_property4 via GOT/IAT indirection
    return get_tinfo_property4(/* forwarded args */);
}

