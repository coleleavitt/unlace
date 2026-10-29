// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA980
// Name:            .generate_disassembly
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA980 jmp     cs:off_2C7ACA8
//
// Resolved target: generate_disassembly
// Target address:  0x3850B0
// GOT/IAT slot:    0x2C7ACA8
// Slot symbol:     off_2C7ACA8
// Target type:     <no type info>
// ============================================================

void .generate_disassembly(/* see target signature */)
{
    // Tail-call to generate_disassembly via GOT/IAT indirection
    return generate_disassembly(/* forwarded args */);
}

