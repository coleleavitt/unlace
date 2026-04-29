// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60F0
// Name:            .get_nice_colored_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60F0 jmp     cs:off_8D060
//
// Resolved target: get_nice_colored_name
// Target address:  0x8D5E0
// GOT/IAT slot:    0x8D060
// Slot symbol:     off_8D060
// Target type:     <no type info>
// ============================================================

void .get_nice_colored_name(/* see target signature */)
{
    // Tail-call to get_nice_colored_name via GOT/IAT indirection
    return get_nice_colored_name(/* forwarded args */);
}

