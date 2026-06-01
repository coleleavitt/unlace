// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8CD0
// Name:            .get_nice_colored_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8CD0 jmp     cs:off_2C79E50
//
// Resolved target: get_nice_colored_name
// Target address:  0x4D3990
// GOT/IAT slot:    0x2C79E50
// Slot symbol:     off_2C79E50
// Target type:     <no type info>
// ============================================================

void .get_nice_colored_name(/* see target signature */)
{
    // Tail-call to get_nice_colored_name via GOT/IAT indirection
    return get_nice_colored_name(/* forwarded args */);
}

