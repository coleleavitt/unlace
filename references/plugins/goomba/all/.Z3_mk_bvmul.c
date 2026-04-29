// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x46E0
// Name:            .Z3_mk_bvmul
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x46E0 jmp     cs:off_4E358
//
// Resolved target: Z3_mk_bvmul
// Target address:  0x4F968
// GOT/IAT slot:    0x4E358
// Slot symbol:     off_4E358
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvmul(/* see target signature */)
{
    // Tail-call to Z3_mk_bvmul via GOT/IAT indirection
    return Z3_mk_bvmul(/* forwarded args */);
}

