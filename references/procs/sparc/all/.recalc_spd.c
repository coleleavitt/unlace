// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7210
// Name:            .recalc_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7210 jmp     cs:off_190F0
//
// Resolved target: recalc_spd
// Target address:  0x19620
// GOT/IAT slot:    0x190F0
// Slot symbol:     off_190F0
// Target type:     <no type info>
// ============================================================

void .recalc_spd(/* see target signature */)
{
    // Tail-call to recalc_spd via GOT/IAT indirection
    return recalc_spd(/* forwarded args */);
}

