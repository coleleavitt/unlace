// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACD50
// Name:            .format_c_number
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACD50 jmp     cs:off_2C7BE90
//
// Resolved target: format_c_number
// Target address:  0x83A9C0
// GOT/IAT slot:    0x2C7BE90
// Slot symbol:     off_2C7BE90
// Target type:     <no type info>
// ============================================================

void .format_c_number(/* see target signature */)
{
    // Tail-call to format_c_number via GOT/IAT indirection
    return format_c_number(/* forwarded args */);
}

