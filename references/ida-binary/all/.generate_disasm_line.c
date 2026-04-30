// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111420
// Name:            .generate_disasm_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111420 jmp     cs:generate_disasm_line_ptr
//
// Resolved target: generate_disasm_line
// Target address:  0x8D3328
// GOT/IAT slot:    0x89F6B0
// Slot symbol:     generate_disasm_line_ptr
// Target type:     <no type info>
// ============================================================

void .generate_disasm_line(/* see target signature */)
{
    // Tail-call to generate_disasm_line via GOT/IAT indirection
    return generate_disasm_line(/* forwarded args */);
}

