// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D320
// Name:            .reanalyze_function
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D320 jmp     cs:off_4EE178
//
// Resolved target: reanalyze_function
// Target address:  0x4F24D0
// GOT/IAT slot:    0x4EE178
// Slot symbol:     off_4EE178
// Target type:     <no type info>
// ============================================================

void .reanalyze_function(/* see target signature */)
{
    // Tail-call to reanalyze_function via GOT/IAT indirection
    return reanalyze_function(/* forwarded args */);
}

