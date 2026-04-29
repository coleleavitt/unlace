// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29BF0
// Name:            .generate_disasm_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29BF0 jmp     cs:off_4B95E0
//
// Resolved target: generate_disasm_line
// Target address:  0x4BBFD0
// GOT/IAT slot:    0x4B95E0
// Slot symbol:     off_4B95E0
// Target type:     <no type info>
// ============================================================

void .generate_disasm_line(/* see target signature */)
{
    // Tail-call to generate_disasm_line via GOT/IAT indirection
    return generate_disasm_line(/* forwarded args */);
}

