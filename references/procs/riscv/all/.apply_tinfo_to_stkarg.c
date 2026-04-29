// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA350
// Name:            .apply_tinfo_to_stkarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA350 jmp     cs:off_35190
//
// Resolved target: apply_tinfo_to_stkarg
// Target address:  0x357E0
// GOT/IAT slot:    0x35190
// Slot symbol:     off_35190
// Target type:     <no type info>
// ============================================================

void .apply_tinfo_to_stkarg(/* see target signature */)
{
    // Tail-call to apply_tinfo_to_stkarg via GOT/IAT indirection
    return apply_tinfo_to_stkarg(/* forwarded args */);
}

