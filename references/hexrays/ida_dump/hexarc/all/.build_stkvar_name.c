// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B0E0
// Name:            .build_stkvar_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B0E0 jmp     cs:off_4BA058
//
// Resolved target: build_stkvar_name
// Target address:  0x4BCA90
// GOT/IAT slot:    0x4BA058
// Slot symbol:     off_4BA058
// Target type:     <no type info>
// ============================================================

void .build_stkvar_name(/* see target signature */)
{
    // Tail-call to build_stkvar_name via GOT/IAT indirection
    return build_stkvar_name(/* forwarded args */);
}

