// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C110
// Name:            .build_stkvar_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C110 jmp     cs:off_4C1070
//
// Resolved target: build_stkvar_name
// Target address:  0x4C40A0
// GOT/IAT slot:    0x4C1070
// Slot symbol:     off_4C1070
// Target type:     <no type info>
// ============================================================

void .build_stkvar_name(/* see target signature */)
{
    // Tail-call to build_stkvar_name via GOT/IAT indirection
    return build_stkvar_name(/* forwarded args */);
}

