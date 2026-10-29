// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB1F0
// Name:            .set_compiler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB1F0 jmp     cs:off_2C7B0E0
//
// Resolved target: set_compiler
// Target address:  0x6095A0
// GOT/IAT slot:    0x2C7B0E0
// Slot symbol:     off_2C7B0E0
// Target type:     <no type info>
// ============================================================

void .set_compiler(/* see target signature */)
{
    // Tail-call to set_compiler via GOT/IAT indirection
    return set_compiler(/* forwarded args */);
}

