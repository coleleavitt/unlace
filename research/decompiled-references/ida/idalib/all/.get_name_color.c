// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9CA0
// Name:            .get_name_color
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9CA0 jmp     cs:off_2C7A638
//
// Resolved target: get_name_color
// Target address:  0x4CA9B0
// GOT/IAT slot:    0x2C7A638
// Slot symbol:     off_2C7A638
// Target type:     <no type info>
// ============================================================

void .get_name_color(/* see target signature */)
{
    // Tail-call to get_name_color via GOT/IAT indirection
    return get_name_color(/* forwarded args */);
}

