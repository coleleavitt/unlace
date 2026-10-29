// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A5B0
// Name:            .format_c_number
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A5B0 jmp     cs:format_c_number_ptr
//
// Resolved target: format_c_number
// Target address:  0x8D8FA0
// GOT/IAT slot:    0x8A3F78
// Slot symbol:     format_c_number_ptr
// Target type:     <no type info>
// ============================================================

void .format_c_number(/* see target signature */)
{
    // Tail-call to format_c_number via GOT/IAT indirection
    return format_c_number(/* forwarded args */);
}

