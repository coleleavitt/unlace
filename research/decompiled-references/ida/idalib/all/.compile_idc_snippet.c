// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8610
// Name:            .compile_idc_snippet
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8610 jmp     cs:off_2C79AF0
//
// Resolved target: compile_idc_snippet
// Target address:  0x78E800
// GOT/IAT slot:    0x2C79AF0
// Slot symbol:     off_2C79AF0
// Target type:     <no type info>
// ============================================================

void .compile_idc_snippet(/* see target signature */)
{
    // Tail-call to compile_idc_snippet via GOT/IAT indirection
    return compile_idc_snippet(/* forwarded args */);
}

