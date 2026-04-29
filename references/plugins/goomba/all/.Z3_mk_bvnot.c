// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x47E0
// Name:            .Z3_mk_bvnot
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x47E0 jmp     cs:off_4E3D8
//
// Resolved target: Z3_mk_bvnot
// Target address:  0x4F9F8
// GOT/IAT slot:    0x4E3D8
// Slot symbol:     off_4E3D8
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvnot(/* see target signature */)
{
    // Tail-call to Z3_mk_bvnot via GOT/IAT indirection
    return Z3_mk_bvnot(/* forwarded args */);
}

