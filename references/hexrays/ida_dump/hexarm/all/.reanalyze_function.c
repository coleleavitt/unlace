// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F1E0
// Name:            .reanalyze_function
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F1E0 jmp     cs:off_4EA0D8
//
// Resolved target: reanalyze_function
// Target address:  0x4ECB30
// GOT/IAT slot:    0x4EA0D8
// Slot symbol:     off_4EA0D8
// Target type:     <no type info>
// ============================================================

void .reanalyze_function(/* see target signature */)
{
    // Tail-call to reanalyze_function via GOT/IAT indirection
    return reanalyze_function(/* forwarded args */);
}

