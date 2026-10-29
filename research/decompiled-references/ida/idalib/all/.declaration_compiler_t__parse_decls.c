// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD550
// Name:            .declaration_compiler_t__parse_decls
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD550 jmp     cs:off_2C7C290
//
// Resolved target: declaration_compiler_t__parse_decls
// Target address:  0x6D71D0
// GOT/IAT slot:    0x2C7C290
// Slot symbol:     off_2C7C290
// Target type:     <no type info>
// ============================================================

void .declaration_compiler_t__parse_decls(/* see target signature */)
{
    // Tail-call to declaration_compiler_t__parse_decls via GOT/IAT indirection
    return declaration_compiler_t__parse_decls(/* forwarded args */);
}

