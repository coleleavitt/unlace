// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9580
// Name:            .func_item_iterator_decode_prev_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9580 jmp     cs:off_2C7A2A8
//
// Resolved target: func_item_iterator_decode_prev_insn
// Target address:  0x5CC420
// GOT/IAT slot:    0x2C7A2A8
// Slot symbol:     off_2C7A2A8
// Target type:     <no type info>
// ============================================================

void .func_item_iterator_decode_prev_insn(/* see target signature */)
{
    // Tail-call to func_item_iterator_decode_prev_insn via GOT/IAT indirection
    return func_item_iterator_decode_prev_insn(/* forwarded args */);
}

