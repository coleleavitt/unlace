// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABF0
// Name:            .generate_disasm_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABF0 jmp     cs:off_4C05E0
//
// Resolved target: generate_disasm_line
// Target address:  0x4C35C8
// GOT/IAT slot:    0x4C05E0
// Slot symbol:     off_4C05E0
// Target type:     <no type info>
// ============================================================

void .generate_disasm_line(/* see target signature */)
{
    // Tail-call to generate_disasm_line via GOT/IAT indirection
    return generate_disasm_line(/* forwarded args */);
}

