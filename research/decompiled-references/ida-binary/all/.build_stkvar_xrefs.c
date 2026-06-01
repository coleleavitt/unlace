// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1130D0
// Name:            .build_stkvar_xrefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1130D0 jmp     cs:build_stkvar_xrefs_ptr
//
// Resolved target: build_stkvar_xrefs
// Target address:  0x8D45B0
// GOT/IAT slot:    0x8A0508
// Slot symbol:     build_stkvar_xrefs_ptr
// Target type:     <no type info>
// ============================================================

void .build_stkvar_xrefs(/* see target signature */)
{
    // Tail-call to build_stkvar_xrefs via GOT/IAT indirection
    return build_stkvar_xrefs(/* forwarded args */);
}

