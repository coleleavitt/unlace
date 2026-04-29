// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B630
// Name:            .calc_retloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B630 jmp     cs:off_4CDB00
//
// Resolved target: calc_retloc
// Target address:  0x4D0528
// GOT/IAT slot:    0x4CDB00
// Slot symbol:     off_4CDB00
// Target type:     <no type info>
// ============================================================

void .calc_retloc(/* see target signature */)
{
    // Tail-call to calc_retloc via GOT/IAT indirection
    return calc_retloc(/* forwarded args */);
}

