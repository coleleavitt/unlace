// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114040
// Name:            .lex_get_file_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114040 jmp     cs:lex_get_file_line_ptr
//
// Resolved target: lex_get_file_line
// Target address:  0x8D4F98
// GOT/IAT slot:    0x8A0CC0
// Slot symbol:     lex_get_file_line_ptr
// Target type:     <no type info>
// ============================================================

void .lex_get_file_line(/* see target signature */)
{
    // Tail-call to lex_get_file_line via GOT/IAT indirection
    return lex_get_file_line(/* forwarded args */);
}

