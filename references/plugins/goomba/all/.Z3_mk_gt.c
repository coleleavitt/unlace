// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4820
// Name:            .Z3_mk_gt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4820 jmp     cs:off_4E3F8
//
// Resolved target: Z3_mk_gt
// Target address:  0x4FA18
// GOT/IAT slot:    0x4E3F8
// Slot symbol:     off_4E3F8
// Target type:     <no type info>
// ============================================================

void .Z3_mk_gt(/* see target signature */)
{
    // Tail-call to Z3_mk_gt via GOT/IAT indirection
    return Z3_mk_gt(/* forwarded args */);
}

