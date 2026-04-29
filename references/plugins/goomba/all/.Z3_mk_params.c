// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4900
// Name:            .Z3_mk_params
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4900 jmp     cs:off_4E468
//
// Resolved target: Z3_mk_params
// Target address:  0x4FA90
// GOT/IAT slot:    0x4E468
// Slot symbol:     off_4E468
// Target type:     <no type info>
// ============================================================

void .Z3_mk_params(/* see target signature */)
{
    // Tail-call to Z3_mk_params via GOT/IAT indirection
    return Z3_mk_params(/* forwarded args */);
}

