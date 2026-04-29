// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C1B0
// Name:            .reanalyze_function
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C1B0 jmp     cs:off_4CE0C0
//
// Resolved target: reanalyze_function
// Target address:  0x4D0B18
// GOT/IAT slot:    0x4CE0C0
// Slot symbol:     off_4CE0C0
// Target type:     <no type info>
// ============================================================

void .reanalyze_function(/* see target signature */)
{
    // Tail-call to reanalyze_function via GOT/IAT indirection
    return reanalyze_function(/* forwarded args */);
}

