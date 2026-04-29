// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B620
// Name:            .calc_retloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B620 jmp     cs:off_4DAAF8
//
// Resolved target: calc_retloc
// Target address:  0x4DD500
// GOT/IAT slot:    0x4DAAF8
// Slot symbol:     off_4DAAF8
// Target type:     <no type info>
// ============================================================

void .calc_retloc(/* see target signature */)
{
    // Tail-call to calc_retloc via GOT/IAT indirection
    return calc_retloc(/* forwarded args */);
}

