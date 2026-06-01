// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABD00
// Name:            .destroy_lexer
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABD00 jmp     cs:off_2C7B668
//
// Resolved target: destroy_lexer
// Target address:  0x7A7CD0
// GOT/IAT slot:    0x2C7B668
// Slot symbol:     off_2C7B668
// Target type:     __int64 __fastcall(void *)
// ============================================================

/* see target sig */ .destroy_lexer(/* see target signature */)
{
    // Tail-call to destroy_lexer via GOT/IAT indirection
    return destroy_lexer(/* forwarded args */);
}

