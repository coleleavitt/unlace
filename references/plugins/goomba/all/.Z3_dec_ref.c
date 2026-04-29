// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4720
// Name:            .Z3_dec_ref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4720 jmp     cs:off_4E378
//
// Resolved target: Z3_dec_ref
// Target address:  0x4F988
// GOT/IAT slot:    0x4E378
// Slot symbol:     off_4E378
// Target type:     <no type info>
// ============================================================

void .Z3_dec_ref(/* see target signature */)
{
    // Tail-call to Z3_dec_ref via GOT/IAT indirection
    return Z3_dec_ref(/* forwarded args */);
}

