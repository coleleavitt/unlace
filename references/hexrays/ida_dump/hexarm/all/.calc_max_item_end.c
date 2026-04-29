// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EC90
// Name:            .calc_max_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EC90 jmp     cs:off_4E9E30
//
// Resolved target: calc_max_item_end
// Target address:  0x4EC878
// GOT/IAT slot:    0x4E9E30
// Slot symbol:     off_4E9E30
// Target type:     <no type info>
// ============================================================

void .calc_max_item_end(/* see target signature */)
{
    // Tail-call to calc_max_item_end via GOT/IAT indirection
    return calc_max_item_end(/* forwarded args */);
}

