// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4450
// Name:            .Z3_mk_bvand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4450 jmp     cs:off_4E210
//
// Resolved target: Z3_mk_bvand
// Target address:  0x4F820
// GOT/IAT slot:    0x4E210
// Slot symbol:     off_4E210
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvand(/* see target signature */)
{
    // Tail-call to Z3_mk_bvand via GOT/IAT indirection
    return Z3_mk_bvand(/* forwarded args */);
}

