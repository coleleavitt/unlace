// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111F10
// Name:            .lex_init_file
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111F10 jmp     cs:lex_init_file_ptr
//
// Resolved target: lex_init_file
// Target address:  0x8D3A30
// GOT/IAT slot:    0x89FC28
// Slot symbol:     lex_init_file_ptr
// Target type:     <no type info>
// ============================================================

void .lex_init_file(/* see target signature */)
{
    // Tail-call to lex_init_file via GOT/IAT indirection
    return lex_init_file(/* forwarded args */);
}

