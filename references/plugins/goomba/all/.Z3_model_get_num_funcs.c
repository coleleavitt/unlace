// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x47D0
// Name:            .Z3_model_get_num_funcs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x47D0 jmp     cs:off_4E3D0
//
// Resolved target: Z3_model_get_num_funcs
// Target address:  0x4F9F0
// GOT/IAT slot:    0x4E3D0
// Slot symbol:     off_4E3D0
// Target type:     <no type info>
// ============================================================

void .Z3_model_get_num_funcs(/* see target signature */)
{
    // Tail-call to Z3_model_get_num_funcs via GOT/IAT indirection
    return Z3_model_get_num_funcs(/* forwarded args */);
}

