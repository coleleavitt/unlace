// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACC80
// Name:            .declaration_compiler_t__dtor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACC80 jmp     cs:off_2C7BE28
//
// Resolved target: declaration_compiler_t__dtor
// Target address:  0x6D6890
// GOT/IAT slot:    0x2C7BE28
// Slot symbol:     off_2C7BE28
// Target type:     <no type info>
// ============================================================

void .declaration_compiler_t__dtor(/* see target signature */)
{
    // Tail-call to declaration_compiler_t__dtor via GOT/IAT indirection
    return declaration_compiler_t__dtor(/* forwarded args */);
}

