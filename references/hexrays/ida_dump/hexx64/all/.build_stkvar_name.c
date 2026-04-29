// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D270
// Name:            .build_stkvar_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D270 jmp     cs:off_4EE120
//
// Resolved target: build_stkvar_name
// Target address:  0x4F2478
// GOT/IAT slot:    0x4EE120
// Slot symbol:     off_4EE120
// Target type:     <no type info>
// ============================================================

void .build_stkvar_name(/* see target signature */)
{
    // Tail-call to build_stkvar_name via GOT/IAT indirection
    return build_stkvar_name(/* forwarded args */);
}

