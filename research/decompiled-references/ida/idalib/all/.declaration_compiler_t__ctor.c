// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7810
// Name:            .declaration_compiler_t__ctor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7810 jmp     cs:off_2C793F0
//
// Resolved target: declaration_compiler_t__ctor
// Target address:  0x6D6620
// GOT/IAT slot:    0x2C793F0
// Slot symbol:     off_2C793F0
// Target type:     <no type info>
// ============================================================

void .declaration_compiler_t__ctor(/* see target signature */)
{
    // Tail-call to declaration_compiler_t__ctor via GOT/IAT indirection
    return declaration_compiler_t__ctor(/* forwarded args */);
}

