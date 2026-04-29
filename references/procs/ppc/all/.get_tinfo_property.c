// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20E30
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20E30 jmp     cs:off_95700
//
// Resolved target: get_tinfo_property
// Target address:  0x96150
// GOT/IAT slot:    0x95700
// Slot symbol:     off_95700
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}

