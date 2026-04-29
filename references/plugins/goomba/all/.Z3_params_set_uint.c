// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4610
// Name:            .Z3_params_set_uint
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4610 jmp     cs:off_4E2F0
//
// Resolved target: Z3_params_set_uint
// Target address:  0x4F900
// GOT/IAT slot:    0x4E2F0
// Slot symbol:     off_4E2F0
// Target type:     <no type info>
// ============================================================

void .Z3_params_set_uint(/* see target signature */)
{
    // Tail-call to Z3_params_set_uint via GOT/IAT indirection
    return Z3_params_set_uint(/* forwarded args */);
}

