// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4930
// Name:            .Z3_ast_vector_dec_ref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4930 jmp     cs:off_4E480
//
// Resolved target: Z3_ast_vector_dec_ref
// Target address:  0x4FAB8
// GOT/IAT slot:    0x4E480
// Slot symbol:     off_4E480
// Target type:     <no type info>
// ============================================================

void .Z3_ast_vector_dec_ref(/* see target signature */)
{
    // Tail-call to Z3_ast_vector_dec_ref via GOT/IAT indirection
    return Z3_ast_vector_dec_ref(/* forwarded args */);
}

