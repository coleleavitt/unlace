// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC30
// Name:            .calc_max_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC30 jmp     cs:off_4B9E00
//
// Resolved target: calc_max_item_end
// Target address:  0x4BC828
// GOT/IAT slot:    0x4B9E00
// Slot symbol:     off_4B9E00
// Target type:     <no type info>
// ============================================================

void .calc_max_item_end(/* see target signature */)
{
    // Tail-call to calc_max_item_end via GOT/IAT indirection
    return calc_max_item_end(/* forwarded args */);
}

