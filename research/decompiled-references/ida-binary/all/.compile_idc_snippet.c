// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1131A0
// Name:            .compile_idc_snippet
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1131A0 jmp     cs:compile_idc_snippet_ptr
//
// Resolved target: compile_idc_snippet
// Target address:  0x8D4630
// GOT/IAT slot:    0x8A0570
// Slot symbol:     compile_idc_snippet_ptr
// Target type:     <no type info>
// ============================================================

void .compile_idc_snippet(/* see target signature */)
{
    // Tail-call to compile_idc_snippet via GOT/IAT indirection
    return compile_idc_snippet(/* forwarded args */);
}

