// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x204F0
// Name:            .apply_tinfo_to_stkarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x204F0 jmp     cs:off_95260
//
// Resolved target: apply_tinfo_to_stkarg
// Target address:  0x95C98
// GOT/IAT slot:    0x95260
// Slot symbol:     off_95260
// Target type:     <no type info>
// ============================================================

void .apply_tinfo_to_stkarg(/* see target signature */)
{
    // Tail-call to apply_tinfo_to_stkarg via GOT/IAT indirection
    return apply_tinfo_to_stkarg(/* forwarded args */);
}

