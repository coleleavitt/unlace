// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x166A0
// Name:            .get_nice_colored_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x166A0 jmp     cs:off_4F338
//
// Resolved target: get_nice_colored_name
// Target address:  0x50360
// GOT/IAT slot:    0x4F338
// Slot symbol:     off_4F338
// Target type:     <no type info>
// ============================================================

void .get_nice_colored_name(/* see target signature */)
{
    // Tail-call to get_nice_colored_name via GOT/IAT indirection
    return get_nice_colored_name(/* forwarded args */);
}

