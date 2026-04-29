// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4590
// Name:            .Z3_mk_mod
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4590 jmp     cs:off_4E2B0
//
// Resolved target: Z3_mk_mod
// Target address:  0x4F8C0
// GOT/IAT slot:    0x4E2B0
// Slot symbol:     off_4E2B0
// Target type:     <no type info>
// ============================================================

void .Z3_mk_mod(/* see target signature */)
{
    // Tail-call to Z3_mk_mod via GOT/IAT indirection
    return Z3_mk_mod(/* forwarded args */);
}

