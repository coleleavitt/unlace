// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114370
// Name:            .calc_max_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114370 jmp     cs:calc_max_item_end_ptr
//
// Resolved target: calc_max_item_end
// Target address:  0x8D5188
// GOT/IAT slot:    0x8A0E58
// Slot symbol:     calc_max_item_end_ptr
// Target type:     <no type info>
// ============================================================

void .calc_max_item_end(/* see target signature */)
{
    // Tail-call to calc_max_item_end via GOT/IAT indirection
    return calc_max_item_end(/* forwarded args */);
}

