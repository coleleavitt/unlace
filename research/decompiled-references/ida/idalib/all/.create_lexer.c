// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7E20
// Name:            .create_lexer
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7E20 jmp     cs:off_2C796F8
//
// Resolved target: create_lexer
// Target address:  0x7A7850
// GOT/IAT slot:    0x2C796F8
// Slot symbol:     off_2C796F8
// Target type:     <no type info>
// ============================================================

void .create_lexer(/* see target signature */)
{
    // Tail-call to create_lexer via GOT/IAT indirection
    return create_lexer(/* forwarded args */);
}

