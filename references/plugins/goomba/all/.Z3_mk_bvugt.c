// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4260
// Name:            .Z3_mk_bvugt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4260 jmp     cs:off_4E118
//
// Resolved target: Z3_mk_bvugt
// Target address:  0x4F720
// GOT/IAT slot:    0x4E118
// Slot symbol:     off_4E118
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvugt(/* see target signature */)
{
    // Tail-call to Z3_mk_bvugt via GOT/IAT indirection
    return Z3_mk_bvugt(/* forwarded args */);
}

