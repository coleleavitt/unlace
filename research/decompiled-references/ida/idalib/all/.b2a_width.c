// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC9E0
// Name:            .b2a_width
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC9E0 jmp     cs:off_2C7BCD8
//
// Resolved target: b2a_width
// Target address:  0x839F90
// GOT/IAT slot:    0x2C7BCD8
// Slot symbol:     off_2C7BCD8
// Target type:     <no type info>
// ============================================================

void .b2a_width(/* see target signature */)
{
    // Tail-call to b2a_width via GOT/IAT indirection
    return b2a_width(/* forwarded args */);
}

