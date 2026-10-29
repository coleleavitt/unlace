// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB9E0
// Name:            .reanalyze_function
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB9E0 jmp     cs:off_2C7B4D8
//
// Resolved target: reanalyze_function
// Target address:  0x5CC6D0
// GOT/IAT slot:    0x2C7B4D8
// Slot symbol:     off_2C7B4D8
// Target type:     <no type info>
// ============================================================

void .reanalyze_function(/* see target signature */)
{
    // Tail-call to reanalyze_function via GOT/IAT indirection
    return reanalyze_function(/* forwarded args */);
}

