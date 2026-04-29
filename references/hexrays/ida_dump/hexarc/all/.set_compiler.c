// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AFA0
// Name:            .set_compiler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AFA0 jmp     cs:off_4B9FB8
//
// Resolved target: set_compiler
// Target address:  0x4BC9E8
// GOT/IAT slot:    0x4B9FB8
// Slot symbol:     off_4B9FB8
// Target type:     <no type info>
// ============================================================

void .set_compiler(/* see target signature */)
{
    // Tail-call to set_compiler via GOT/IAT indirection
    return set_compiler(/* forwarded args */);
}

