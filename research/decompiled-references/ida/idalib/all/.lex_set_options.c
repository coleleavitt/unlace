// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABC10
// Name:            .lex_set_options
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABC10 jmp     cs:off_2C7B5F0
//
// Resolved target: lex_set_options
// Target address:  0x79F350
// GOT/IAT slot:    0x2C7B5F0
// Slot symbol:     off_2C7B5F0
// Target type:     <no type info>
// ============================================================

void .lex_set_options(/* see target signature */)
{
    // Tail-call to lex_set_options via GOT/IAT indirection
    return lex_set_options(/* forwarded args */);
}

