// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E660
// Name:            .calc_retloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E660 jmp     cs:off_4E9B18
//
// Resolved target: calc_retloc
// Target address:  0x4EC540
// GOT/IAT slot:    0x4E9B18
// Slot symbol:     off_4E9B18
// Target type:     <no type info>
// ============================================================

void .calc_retloc(/* see target signature */)
{
    // Tail-call to calc_retloc via GOT/IAT indirection
    return calc_retloc(/* forwarded args */);
}

