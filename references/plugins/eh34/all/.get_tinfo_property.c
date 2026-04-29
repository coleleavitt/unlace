// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66D0
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66D0 jmp     cs:off_8D350
//
// Resolved target: get_tinfo_property
// Target address:  0x8D910
// GOT/IAT slot:    0x8D350
// Slot symbol:     off_8D350
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}

