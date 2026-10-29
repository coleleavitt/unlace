// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8FE0
// Name:            .lex_get_file_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8FE0 jmp     cs:off_2C79FD8
//
// Resolved target: lex_get_file_line
// Target address:  0x79F780
// GOT/IAT slot:    0x2C79FD8
// Slot symbol:     off_2C79FD8
// Target type:     <no type info>
// ============================================================

void .lex_get_file_line(/* see target signature */)
{
    // Tail-call to lex_get_file_line via GOT/IAT indirection
    return lex_get_file_line(/* forwarded args */);
}

