// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116D90
// Name:            .reanalyze_callers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116D90 jmp     cs:reanalyze_callers_ptr
//
// Resolved target: reanalyze_callers
// Target address:  0x8D6C50
// GOT/IAT slot:    0x8A2368
// Slot symbol:     reanalyze_callers_ptr
// Target type:     <no type info>
// ============================================================

void .reanalyze_callers(/* see target signature */)
{
    // Tail-call to reanalyze_callers via GOT/IAT indirection
    return reanalyze_callers(/* forwarded args */);
}

