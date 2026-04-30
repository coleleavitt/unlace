// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119920
// Name:            .get_utf8_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119920 jmp     cs:get_utf8_char_ptr
//
// Resolved target: get_utf8_char
// Target address:  0x8D87C0
// GOT/IAT slot:    0x8A3930
// Slot symbol:     get_utf8_char_ptr
// Target type:     <no type info>
// ============================================================

void .get_utf8_char(/* see target signature */)
{
    // Tail-call to get_utf8_char via GOT/IAT indirection
    return get_utf8_char(/* forwarded args */);
}

