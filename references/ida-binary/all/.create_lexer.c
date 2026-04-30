// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112620
// Name:            .create_lexer
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112620 jmp     cs:create_lexer_ptr
//
// Resolved target: create_lexer
// Target address:  0x8D3ED8
// GOT/IAT slot:    0x89FFB0
// Slot symbol:     create_lexer_ptr
// Target type:     <no type info>
// ============================================================

void .create_lexer(/* see target signature */)
{
    // Tail-call to create_lexer via GOT/IAT indirection
    return create_lexer(/* forwarded args */);
}

