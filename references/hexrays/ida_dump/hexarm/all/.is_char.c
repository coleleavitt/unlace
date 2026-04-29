// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D6E0
// Name:            .is_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D6E0 jmp     cs:off_4E9358
//
// Resolved target: is_char
// Target address:  0x4EBD48
// GOT/IAT slot:    0x4E9358
// Slot symbol:     off_4E9358
// Target type:     <no type info>
// ============================================================

void .is_char(/* see target signature */)
{
    // Tail-call to is_char via GOT/IAT indirection
    return is_char(/* forwarded args */);
}

