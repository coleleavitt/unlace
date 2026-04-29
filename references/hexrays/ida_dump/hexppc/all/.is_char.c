// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A6D0
// Name:            .is_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A6D0 jmp     cs:off_4DA350
//
// Resolved target: is_char
// Target address:  0x4DCD20
// GOT/IAT slot:    0x4DA350
// Slot symbol:     off_4DA350
// Target type:     <no type info>
// ============================================================

void .is_char(/* see target signature */)
{
    // Tail-call to is_char via GOT/IAT indirection
    return is_char(/* forwarded args */);
}

