// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8550
// Name:            .build_stkvar_xrefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8550 jmp     cs:off_2C79A90
//
// Resolved target: build_stkvar_xrefs
// Target address:  0x3E52C0
// GOT/IAT slot:    0x2C79A90
// Slot symbol:     off_2C79A90
// Target type:     <no type info>
// ============================================================

void .build_stkvar_xrefs(/* see target signature */)
{
    // Tail-call to build_stkvar_xrefs via GOT/IAT indirection
    return build_stkvar_xrefs(/* forwarded args */);
}

