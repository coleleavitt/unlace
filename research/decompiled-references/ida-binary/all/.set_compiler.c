// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117A70
// Name:            .set_compiler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117A70 jmp     cs:set_compiler_ptr
//
// Resolved target: set_compiler
// Target address:  0x8D7480
// GOT/IAT slot:    0x8A29D8
// Slot symbol:     set_compiler_ptr
// Target type:     <no type info>
// ============================================================

void .set_compiler(/* see target signature */)
{
    // Tail-call to set_compiler via GOT/IAT indirection
    return set_compiler(/* forwarded args */);
}

