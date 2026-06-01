// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC8D0
// Name:            .get_view_options
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC8D0 jmp     cs:off_2C7BC50
//
// Resolved target: get_view_options
// Target address:  0x6301A0
// GOT/IAT slot:    0x2C7BC50
// Slot symbol:     off_2C7BC50
// Target type:     <no type info>
// ============================================================

void .get_view_options(/* see target signature */)
{
    // Tail-call to get_view_options via GOT/IAT indirection
    return get_view_options(/* forwarded args */);
}

