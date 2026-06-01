// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118AD0
// Name:            .destroy_lexer
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118AD0 jmp     cs:destroy_lexer_ptr
//
// Resolved target: destroy_lexer
// Target address:  0x8D7EA8
// GOT/IAT slot:    0x8A3208
// Slot symbol:     destroy_lexer_ptr
// Target type:     <no type info>
// ============================================================

void .destroy_lexer(/* see target signature */)
{
    // Tail-call to destroy_lexer via GOT/IAT indirection
    return destroy_lexer(/* forwarded args */);
}

