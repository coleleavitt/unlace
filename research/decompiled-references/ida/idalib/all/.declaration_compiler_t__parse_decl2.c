// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A88C0
// Name:            .declaration_compiler_t__parse_decl2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A88C0 jmp     cs:off_2C79C48
//
// Resolved target: declaration_compiler_t__parse_decl2
// Target address:  0x6D6900
// GOT/IAT slot:    0x2C79C48
// Slot symbol:     off_2C79C48
// Target type:     <no type info>
// ============================================================

void .declaration_compiler_t__parse_decl2(/* see target signature */)
{
    // Tail-call to declaration_compiler_t__parse_decl2 via GOT/IAT indirection
    return declaration_compiler_t__parse_decl2(/* forwarded args */);
}

