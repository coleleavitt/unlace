// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACF50
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACF50 jmp     cs:off_2C7BF90
//
// Resolved target: get_tinfo_property
// Target address:  0x53E2A0
// GOT/IAT slot:    0x2C7BF90
// Slot symbol:     off_2C7BF90
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}

