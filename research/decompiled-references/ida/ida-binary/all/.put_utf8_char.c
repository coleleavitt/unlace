// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117DC0
// Name:            .put_utf8_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117DC0 jmp     cs:put_utf8_char_ptr
//
// Resolved target: put_utf8_char
// Target address:  0x8D7690
// GOT/IAT slot:    0x8A2B80
// Slot symbol:     put_utf8_char_ptr
// Target type:     <no type info>
// ============================================================

void .put_utf8_char(/* see target signature */)
{
    // Tail-call to put_utf8_char via GOT/IAT indirection
    return put_utf8_char(/* forwarded args */);
}

