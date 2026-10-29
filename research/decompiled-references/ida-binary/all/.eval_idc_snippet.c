// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1190C0
// Name:            .eval_idc_snippet
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1190C0 jmp     cs:eval_idc_snippet_ptr
//
// Resolved target: eval_idc_snippet
// Target address:  0x8D8238
// GOT/IAT slot:    0x8A3500
// Slot symbol:     eval_idc_snippet_ptr
// Target type:     <no type info>
// ============================================================

void .eval_idc_snippet(/* see target signature */)
{
    // Tail-call to eval_idc_snippet via GOT/IAT indirection
    return eval_idc_snippet(/* forwarded args */);
}

