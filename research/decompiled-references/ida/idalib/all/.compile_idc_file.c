// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA960
// Name:            .compile_idc_file
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA960 jmp     cs:off_2C7AC98
//
// Resolved target: compile_idc_file
// Target address:  0x788BB0
// GOT/IAT slot:    0x2C7AC98
// Slot symbol:     off_2C7AC98
// Target type:     <no type info>
// ============================================================

void .compile_idc_file(/* see target signature */)
{
    // Tail-call to compile_idc_file via GOT/IAT indirection
    return compile_idc_file(/* forwarded args */);
}

