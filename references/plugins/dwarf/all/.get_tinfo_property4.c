// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA430
// Name:            .get_tinfo_property4
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA430 jmp     cs:off_CA200
//
// Resolved target: get_tinfo_property4
// Target address:  0xD0B30
// GOT/IAT slot:    0xCA200
// Slot symbol:     off_CA200
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property4(/* see target signature */)
{
    // Tail-call to get_tinfo_property4 via GOT/IAT indirection
    return get_tinfo_property4(/* forwarded args */);
}

