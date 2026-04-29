// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60F0
// Name:            .recalc_spd_for_basic_block
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60F0 jmp     cs:off_24060
//
// Resolved target: recalc_spd_for_basic_block
// Target address:  0x25E30
// GOT/IAT slot:    0x24060
// Slot symbol:     off_24060
// Target type:     <no type info>
// ============================================================

void .recalc_spd_for_basic_block(/* see target signature */)
{
    // Tail-call to recalc_spd_for_basic_block via GOT/IAT indirection
    return recalc_spd_for_basic_block(/* forwarded args */);
}

