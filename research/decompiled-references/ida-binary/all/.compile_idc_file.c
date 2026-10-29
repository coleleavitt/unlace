// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116AE0
// Name:            .compile_idc_file
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116AE0 jmp     cs:compile_idc_file_ptr
//
// Resolved target: compile_idc_file
// Target address:  0x8D6AB8
// GOT/IAT slot:    0x8A2210
// Slot symbol:     compile_idc_file_ptr
// Target type:     <no type info>
// ============================================================

void .compile_idc_file(/* see target signature */)
{
    // Tail-call to compile_idc_file via GOT/IAT indirection
    return compile_idc_file(/* forwarded args */);
}

