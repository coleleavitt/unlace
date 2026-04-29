// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF10
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF10 jmp     cs:off_4C0F70
//
// Resolved target: get_tinfo_property
// Target address:  0x4C3F98
// GOT/IAT slot:    0x4C0F70
// Slot symbol:     off_4C0F70
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}

