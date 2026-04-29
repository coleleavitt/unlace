// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4470
// Name:            .Z3_model_get_const_interp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4470 jmp     cs:off_4E220
//
// Resolved target: Z3_model_get_const_interp
// Target address:  0x4F830
// GOT/IAT slot:    0x4E220
// Slot symbol:     off_4E220
// Target type:     <no type info>
// ============================================================

void .Z3_model_get_const_interp(/* see target signature */)
{
    // Tail-call to Z3_model_get_const_interp via GOT/IAT indirection
    return Z3_model_get_const_interp(/* forwarded args */);
}

