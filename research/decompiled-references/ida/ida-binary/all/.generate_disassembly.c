// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116B10
// Name:            .generate_disassembly
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116B10 jmp     cs:generate_disassembly_ptr
//
// Resolved target: generate_disassembly
// Target address:  0x8D6AD0
// GOT/IAT slot:    0x8A2228
// Slot symbol:     generate_disassembly_ptr
// Target type:     <no type info>
// ============================================================

void .generate_disassembly(/* see target signature */)
{
    // Tail-call to generate_disassembly via GOT/IAT indirection
    return generate_disassembly(/* forwarded args */);
}

