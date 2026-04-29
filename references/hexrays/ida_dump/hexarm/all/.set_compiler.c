// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F000
// Name:            .set_compiler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F000 jmp     cs:off_4E9FE8
//
// Resolved target: set_compiler
// Target address:  0x4ECA38
// GOT/IAT slot:    0x4E9FE8
// Slot symbol:     off_4E9FE8
// Target type:     <no type info>
// ============================================================

void .set_compiler(/* see target signature */)
{
    // Tail-call to set_compiler via GOT/IAT indirection
    return set_compiler(/* forwarded args */);
}

