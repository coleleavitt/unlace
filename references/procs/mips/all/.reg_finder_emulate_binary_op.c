// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x194C0
// Name:            .reg_finder_emulate_binary_op
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x194C0 jmp     cs:off_75248
//
// Resolved target: reg_finder_emulate_binary_op
// Target address:  0x75A98
// GOT/IAT slot:    0x75248
// Slot symbol:     off_75248
// Target type:     <no type info>
// ============================================================

void .reg_finder_emulate_binary_op(/* see target signature */)
{
    // Tail-call to reg_finder_emulate_binary_op via GOT/IAT indirection
    return reg_finder_emulate_binary_op(/* forwarded args */);
}

