// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABFA0
// Name:            .func_item_iterator_decode_preceding_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABFA0 jmp     cs:off_2C7B7B8
//
// Resolved target: func_item_iterator_decode_preceding_insn
// Target address:  0x5CC3F0
// GOT/IAT slot:    0x2C7B7B8
// Slot symbol:     off_2C7B7B8
// Target type:     <no type info>
// ============================================================

void .func_item_iterator_decode_preceding_insn(/* see target signature */)
{
    // Tail-call to func_item_iterator_decode_preceding_insn via GOT/IAT indirection
    return func_item_iterator_decode_preceding_insn(/* forwarded args */);
}

