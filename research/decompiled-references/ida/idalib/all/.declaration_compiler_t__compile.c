// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACD90
// Name:            .declaration_compiler_t__compile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACD90 jmp     cs:off_2C7BEB0
//
// Resolved target: declaration_compiler_t__compile
// Target address:  0x6D68D0
// GOT/IAT slot:    0x2C7BEB0
// Slot symbol:     off_2C7BEB0
// Target type:     <no type info>
// ============================================================

void .declaration_compiler_t__compile(/* see target signature */)
{
    // Tail-call to declaration_compiler_t__compile via GOT/IAT indirection
    return declaration_compiler_t__compile(/* forwarded args */);
}

