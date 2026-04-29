// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42F0
// Name:            .Z3_mk_bvor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42F0 jmp     cs:off_4E160
//
// Resolved target: Z3_mk_bvor
// Target address:  0x4F768
// GOT/IAT slot:    0x4E160
// Slot symbol:     off_4E160
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvor(/* see target signature */)
{
    // Tail-call to Z3_mk_bvor via GOT/IAT indirection
    return Z3_mk_bvor(/* forwarded args */);
}

