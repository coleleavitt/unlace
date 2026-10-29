// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7C90
// Name:            .get_sreg_ranges_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7C90 jmp     cs:off_2C79630
//
// Resolved target: get_sreg_ranges_qty
// Target address:  0x519040
// GOT/IAT slot:    0x2C79630
// Slot symbol:     off_2C79630
// Target type:     <no type info>
// ============================================================

void .get_sreg_ranges_qty(/* see target signature */)
{
    // Tail-call to get_sreg_ranges_qty via GOT/IAT indirection
    return get_sreg_ranges_qty(/* forwarded args */);
}

