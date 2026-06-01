// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1181C0
// Name:            .hexplace_t__out_one_item
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1181C0 jmp     cs:hexplace_t__out_one_item_ptr
//
// Resolved target: hexplace_t__out_one_item
// Target address:  0x8D7930
// GOT/IAT slot:    0x8A2D80
// Slot symbol:     hexplace_t__out_one_item_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__out_one_item(/* see target signature */)
{
    // Tail-call to hexplace_t__out_one_item via GOT/IAT indirection
    return hexplace_t__out_one_item(/* forwarded args */);
}

