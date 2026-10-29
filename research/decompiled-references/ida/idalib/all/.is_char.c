// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA6C0
// Name:            .is_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA6C0 jmp     cs:off_2C7AB48
//
// Resolved target: is_char
// Target address:  0x3C4F40
// GOT/IAT slot:    0x2C7AB48
// Slot symbol:     off_2C7AB48
// Target type:     <no type info>
// ============================================================

void .is_char(/* see target signature */)
{
    // Tail-call to is_char via GOT/IAT indirection
    return is_char(/* forwarded args */);
}

