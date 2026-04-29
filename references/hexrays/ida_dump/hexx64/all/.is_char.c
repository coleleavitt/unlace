// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B700
// Name:            .is_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B700 jmp     cs:off_4ED368
//
// Resolved target: is_char
// Target address:  0x4F1660
// GOT/IAT slot:    0x4ED368
// Slot symbol:     off_4ED368
// Target type:     <no type info>
// ============================================================

void .is_char(/* see target signature */)
{
    // Tail-call to is_char via GOT/IAT indirection
    return is_char(/* forwarded args */);
}

