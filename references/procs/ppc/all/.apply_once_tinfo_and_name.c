// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20720
// Name:            .apply_once_tinfo_and_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20720 jmp     cs:off_95378
//
// Resolved target: apply_once_tinfo_and_name
// Target address:  0x95DB0
// GOT/IAT slot:    0x95378
// Slot symbol:     off_95378
// Target type:     <no type info>
// ============================================================

void .apply_once_tinfo_and_name(/* see target signature */)
{
    // Tail-call to apply_once_tinfo_and_name via GOT/IAT indirection
    return apply_once_tinfo_and_name(/* forwarded args */);
}

