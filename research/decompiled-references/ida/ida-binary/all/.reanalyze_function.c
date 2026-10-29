// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118690
// Name:            .reanalyze_function
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118690 jmp     cs:reanalyze_function_ptr
//
// Resolved target: reanalyze_function
// Target address:  0x8D7C10
// GOT/IAT slot:    0x8A2FE8
// Slot symbol:     reanalyze_function_ptr
// Target type:     <no type info>
// ============================================================

void .reanalyze_function(/* see target signature */)
{
    // Tail-call to reanalyze_function via GOT/IAT indirection
    return reanalyze_function(/* forwarded args */);
}

