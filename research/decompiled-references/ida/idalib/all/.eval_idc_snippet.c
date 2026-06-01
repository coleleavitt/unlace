// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC110
// Name:            .eval_idc_snippet
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC110 jmp     cs:off_2C7B870
//
// Resolved target: eval_idc_snippet
// Target address:  0x78EC90
// GOT/IAT slot:    0x2C7B870
// Slot symbol:     off_2C7B870
// Target type:     <no type info>
// ============================================================

void .eval_idc_snippet(/* see target signature */)
{
    // Tail-call to eval_idc_snippet via GOT/IAT indirection
    return eval_idc_snippet(/* forwarded args */);
}

