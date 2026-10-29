// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7860
// Name:            .apply_tinfo_to_stkarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7860 jmp     cs:off_2C79418
//
// Resolved target: apply_tinfo_to_stkarg
// Target address:  0x60D880
// GOT/IAT slot:    0x2C79418
// Slot symbol:     off_2C79418
// Target type:     <no type info>
// ============================================================

void .apply_tinfo_to_stkarg(/* see target signature */)
{
    // Tail-call to apply_tinfo_to_stkarg via GOT/IAT indirection
    return apply_tinfo_to_stkarg(/* forwarded args */);
}

