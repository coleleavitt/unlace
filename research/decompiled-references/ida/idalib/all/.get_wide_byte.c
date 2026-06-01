// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8F00
// Name:            .get_wide_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8F00 jmp     cs:off_2C79F68
//
// Resolved target: get_wide_byte
// Target address:  0x3BF180
// GOT/IAT slot:    0x2C79F68
// Slot symbol:     off_2C79F68
// Target type:     <no type info>
// ============================================================

void .get_wide_byte(/* see target signature */)
{
    // Tail-call to get_wide_byte via GOT/IAT indirection
    return get_wide_byte(/* forwarded args */);
}

