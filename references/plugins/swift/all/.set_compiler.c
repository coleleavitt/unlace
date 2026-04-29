// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4800
// Name:            .set_compiler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4800 jmp     cs:off_283E8
//
// Resolved target: set_compiler
// Target address:  0x29DA0
// GOT/IAT slot:    0x283E8
// Slot symbol:     off_283E8
// Target type:     <no type info>
// ============================================================

void .set_compiler(/* see target signature */)
{
    // Tail-call to set_compiler via GOT/IAT indirection
    return set_compiler(/* forwarded args */);
}

