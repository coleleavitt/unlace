// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB710
// Name:            .compile_idc_text
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB710 jmp     cs:off_2C7B370
//
// Resolved target: compile_idc_text
// Target address:  0x788CC0
// GOT/IAT slot:    0x2C7B370
// Slot symbol:     off_2C7B370
// Target type:     <no type info>
// ============================================================

void .compile_idc_text(/* see target signature */)
{
    // Tail-call to compile_idc_text via GOT/IAT indirection
    return compile_idc_text(/* forwarded args */);
}

