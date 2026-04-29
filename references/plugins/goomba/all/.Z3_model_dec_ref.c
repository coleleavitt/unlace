// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4840
// Name:            .Z3_model_dec_ref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4840 jmp     cs:off_4E408
//
// Resolved target: Z3_model_dec_ref
// Target address:  0x4FA30
// GOT/IAT slot:    0x4E408
// Slot symbol:     off_4E408
// Target type:     <no type info>
// ============================================================

void .Z3_model_dec_ref(/* see target signature */)
{
    // Tail-call to Z3_model_dec_ref via GOT/IAT indirection
    return Z3_model_dec_ref(/* forwarded args */);
}

