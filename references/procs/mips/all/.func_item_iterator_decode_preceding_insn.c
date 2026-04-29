// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19890
// Name:            .func_item_iterator_decode_preceding_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19890 jmp     cs:off_75430
//
// Resolved target: func_item_iterator_decode_preceding_insn
// Target address:  0x75C80
// GOT/IAT slot:    0x75430
// Slot symbol:     off_75430
// Target type:     <no type info>
// ============================================================

void .func_item_iterator_decode_preceding_insn(/* see target signature */)
{
    // Tail-call to func_item_iterator_decode_preceding_insn via GOT/IAT indirection
    return func_item_iterator_decode_preceding_insn(/* forwarded args */);
}

