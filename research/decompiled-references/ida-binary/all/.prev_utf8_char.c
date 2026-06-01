// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116C50
// Name:            .prev_utf8_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116C50 jmp     cs:prev_utf8_char_ptr
//
// Resolved target: prev_utf8_char
// Target address:  0x8D6B98
// GOT/IAT slot:    0x8A22C8
// Slot symbol:     prev_utf8_char_ptr
// Target type:     <no type info>
// ============================================================

void .prev_utf8_char(/* see target signature */)
{
    // Tail-call to prev_utf8_char via GOT/IAT indirection
    return prev_utf8_char(/* forwarded args */);
}

