// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9B0
// Name:            .format_c_number
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9B0 jmp     cs:off_4BF4C0
//
// Resolved target: format_c_number
// Target address:  0x4C29A0
// GOT/IAT slot:    0x4BF4C0
// Slot symbol:     off_4BF4C0
// Target type:     <no type info>
// ============================================================

void .format_c_number(/* see target signature */)
{
    // Tail-call to format_c_number via GOT/IAT indirection
    return format_c_number(/* forwarded args */);
}

