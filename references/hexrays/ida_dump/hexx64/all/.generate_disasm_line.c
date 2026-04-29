// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC40
// Name:            .generate_disasm_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC40 jmp     cs:off_4ED608
//
// Resolved target: generate_disasm_line
// Target address:  0x4F1910
// GOT/IAT slot:    0x4ED608
// Slot symbol:     off_4ED608
// Target type:     <no type info>
// ============================================================

void .generate_disasm_line(/* see target signature */)
{
    // Tail-call to generate_disasm_line via GOT/IAT indirection
    return generate_disasm_line(/* forwarded args */);
}

