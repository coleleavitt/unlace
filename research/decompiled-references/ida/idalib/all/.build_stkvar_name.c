// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB340
// Name:            .build_stkvar_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB340 jmp     cs:off_2C7B188
//
// Resolved target: build_stkvar_name
// Target address:  0x5BC200
// GOT/IAT slot:    0x2C7B188
// Slot symbol:     off_2C7B188
// Target type:     <no type info>
// ============================================================

void .build_stkvar_name(/* see target signature */)
{
    // Tail-call to build_stkvar_name via GOT/IAT indirection
    return build_stkvar_name(/* forwarded args */);
}

