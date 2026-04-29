// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4660
// Name:            .Z3_params_inc_ref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4660 jmp     cs:off_4E318
//
// Resolved target: Z3_params_inc_ref
// Target address:  0x4F928
// GOT/IAT slot:    0x4E318
// Slot symbol:     off_4E318
// Target type:     <no type info>
// ============================================================

void .Z3_params_inc_ref(/* see target signature */)
{
    // Tail-call to Z3_params_inc_ref via GOT/IAT indirection
    return Z3_params_inc_ref(/* forwarded args */);
}

