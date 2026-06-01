// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD4C0
// Name:            .recalc_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD4C0 jmp     cs:off_2C7C248
//
// Resolved target: recalc_spd
// Target address:  0x5BAAE0
// GOT/IAT slot:    0x2C7C248
// Slot symbol:     off_2C7C248
// Target type:     <no type info>
// ============================================================

void .recalc_spd(/* see target signature */)
{
    // Tail-call to recalc_spd via GOT/IAT indirection
    return recalc_spd(/* forwarded args */);
}

