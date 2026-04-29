// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AEE0
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AEE0 jmp     cs:off_4B9F58
//
// Resolved target: get_tinfo_property
// Target address:  0x4BC988
// GOT/IAT slot:    0x4B9F58
// Slot symbol:     off_4B9F58
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}

