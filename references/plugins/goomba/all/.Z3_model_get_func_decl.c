// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4150
// Name:            .Z3_model_get_func_decl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4150 jmp     cs:off_4E090
//
// Resolved target: Z3_model_get_func_decl
// Target address:  0x4F690
// GOT/IAT slot:    0x4E090
// Slot symbol:     off_4E090
// Target type:     <no type info>
// ============================================================

void .Z3_model_get_func_decl(/* see target signature */)
{
    // Tail-call to Z3_model_get_func_decl via GOT/IAT indirection
    return Z3_model_get_func_decl(/* forwarded args */);
}

