// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9C80
// Name:            .get_tinfo_details
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9C80 jmp     cs:off_2C7A628
//
// Resolved target: get_tinfo_details
// Target address:  0x5499D0
// GOT/IAT slot:    0x2C7A628
// Slot symbol:     off_2C7A628
// Target type:     <no type info>
// ============================================================

void .get_tinfo_details(/* see target signature */)
{
    // Tail-call to get_tinfo_details via GOT/IAT indirection
    return get_tinfo_details(/* forwarded args */);
}

