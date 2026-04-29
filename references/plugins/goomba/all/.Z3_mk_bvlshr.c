// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4120
// Name:            .Z3_mk_bvlshr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4120 jmp     cs:off_4E078
//
// Resolved target: Z3_mk_bvlshr
// Target address:  0x4F678
// GOT/IAT slot:    0x4E078
// Slot symbol:     off_4E078
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvlshr(/* see target signature */)
{
    // Tail-call to Z3_mk_bvlshr via GOT/IAT indirection
    return Z3_mk_bvlshr(/* forwarded args */);
}

