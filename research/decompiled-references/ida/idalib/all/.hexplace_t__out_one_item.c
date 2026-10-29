// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB700
// Name:            .hexplace_t__out_one_item
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB700 jmp     cs:off_2C7B368
//
// Resolved target: hexplace_t__out_one_item
// Target address:  0x4243F0
// GOT/IAT slot:    0x2C7B368
// Slot symbol:     off_2C7B368
// Target type:     <no type info>
// ============================================================

void .hexplace_t__out_one_item(/* see target signature */)
{
    // Tail-call to hexplace_t__out_one_item via GOT/IAT indirection
    return hexplace_t__out_one_item(/* forwarded args */);
}

