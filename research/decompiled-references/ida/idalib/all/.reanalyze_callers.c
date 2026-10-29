// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAAB0
// Name:            .reanalyze_callers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAAB0 jmp     cs:off_2C7AD40
//
// Resolved target: reanalyze_callers
// Target address:  0x3A76E0
// GOT/IAT slot:    0x2C7AD40
// Slot symbol:     off_2C7AD40
// Target type:     <no type info>
// ============================================================

void .reanalyze_callers(/* see target signature */)
{
    // Tail-call to reanalyze_callers via GOT/IAT indirection
    return reanalyze_callers(/* forwarded args */);
}

