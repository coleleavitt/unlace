// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117C70
// Name:            .build_stkvar_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117C70 jmp     cs:build_stkvar_name_ptr
//
// Resolved target: build_stkvar_name
// Target address:  0x8D75C0
// GOT/IAT slot:    0x8A2AD8
// Slot symbol:     build_stkvar_name_ptr
// Target type:     <no type info>
// ============================================================

void .build_stkvar_name(/* see target signature */)
{
    // Tail-call to build_stkvar_name via GOT/IAT indirection
    return build_stkvar_name(/* forwarded args */);
}

