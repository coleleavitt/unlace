// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8E40
// Name:            .calc_retloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8E40 jmp     cs:off_2C79F08
//
// Resolved target: calc_retloc
// Target address:  0x6AC000
// GOT/IAT slot:    0x2C79F08
// Slot symbol:     off_2C79F08
// Target type:     <no type info>
// ============================================================

void .calc_retloc(/* see target signature */)
{
    // Tail-call to calc_retloc via GOT/IAT indirection
    return calc_retloc(/* forwarded args */);
}

