// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4230
// Name:            .Z3_ast_vector_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4230 jmp     cs:off_4E100
//
// Resolved target: Z3_ast_vector_size
// Target address:  0x4F708
// GOT/IAT slot:    0x4E100
// Slot symbol:     off_4E100
// Target type:     <no type info>
// ============================================================

void .Z3_ast_vector_size(/* see target signature */)
{
    // Tail-call to Z3_ast_vector_size via GOT/IAT indirection
    return Z3_ast_vector_size(/* forwarded args */);
}

