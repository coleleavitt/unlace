// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2460
// Name:            .get_sreg_ranges_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2460 jmp     cs:off_B218
//
// Resolved target: get_sreg_ranges_qty
// Target address:  0xB6B8
// GOT/IAT slot:    0xB218
// Slot symbol:     off_B218
// Target type:     <no type info>
// ============================================================

void .get_sreg_ranges_qty(/* see target signature */)
{
    // Tail-call to get_sreg_ranges_qty via GOT/IAT indirection
    return get_sreg_ranges_qty(/* forwarded args */);
}

