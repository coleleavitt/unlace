// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7270
// Name:            .generate_disasm_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7270 jmp     cs:off_2C79120
//
// Resolved target: generate_disasm_line
// Target address:  0x3836E0
// GOT/IAT slot:    0x2C79120
// Slot symbol:     off_2C79120
// Target type:     <no type info>
// ============================================================

void .generate_disasm_line(/* see target signature */)
{
    // Tail-call to generate_disasm_line via GOT/IAT indirection
    return generate_disasm_line(/* forwarded args */);
}

