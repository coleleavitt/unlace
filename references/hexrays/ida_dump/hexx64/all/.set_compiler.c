// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D110
// Name:            .set_compiler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D110 jmp     cs:off_4EE070
//
// Resolved target: set_compiler
// Target address:  0x4F23C0
// GOT/IAT slot:    0x4EE070
// Slot symbol:     off_4EE070
// Target type:     <no type info>
// ============================================================

void .set_compiler(/* see target signature */)
{
    // Tail-call to set_compiler via GOT/IAT indirection
    return set_compiler(/* forwarded args */);
}

