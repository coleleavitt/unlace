// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D9D0
// Name:            .format_c_number
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D9D0 jmp     cs:off_4E94D0
//
// Resolved target: format_c_number
// Target address:  0x4EBED8
// GOT/IAT slot:    0x4E94D0
// Slot symbol:     off_4E94D0
// Target type:     <no type info>
// ============================================================

void .format_c_number(/* see target signature */)
{
    // Tail-call to format_c_number via GOT/IAT indirection
    return format_c_number(/* forwarded args */);
}

