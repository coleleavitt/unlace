// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x296D0
// Name:            .is_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x296D0 jmp     cs:off_4B9350
//
// Resolved target: is_char
// Target address:  0x4BBD20
// GOT/IAT slot:    0x4B9350
// Slot symbol:     off_4B9350
// Target type:     <no type info>
// ============================================================

void .is_char(/* see target signature */)
{
    // Tail-call to is_char via GOT/IAT indirection
    return is_char(/* forwarded args */);
}

