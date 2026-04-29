// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DC10
// Name:            .generate_disasm_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DC10 jmp     cs:off_4E95F0
//
// Resolved target: generate_disasm_line
// Target address:  0x4EC000
// GOT/IAT slot:    0x4E95F0
// Slot symbol:     off_4E95F0
// Target type:     <no type info>
// ============================================================

void .generate_disasm_line(/* see target signature */)
{
    // Tail-call to generate_disasm_line via GOT/IAT indirection
    return generate_disasm_line(/* forwarded args */);
}

