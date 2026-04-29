// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6230
// Name:            .recalc_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6230 jmp     cs:off_1D100
//
// Resolved target: recalc_spd
// Target address:  0x1D5F0
// GOT/IAT slot:    0x1D100
// Slot symbol:     off_1D100
// Target type:     <no type info>
// ============================================================

void .recalc_spd(/* see target signature */)
{
    // Tail-call to recalc_spd via GOT/IAT indirection
    return recalc_spd(/* forwarded args */);
}

