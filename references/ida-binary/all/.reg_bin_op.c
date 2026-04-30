// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1114E0
// Name:            .reg_bin_op
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1114E0 jmp     cs:reg_bin_op_ptr
//
// Resolved target: reg_bin_op
// Target address:  0x8D3398
// GOT/IAT slot:    0x89F710
// Slot symbol:     reg_bin_op_ptr
// Target type:     <no type info>
// ============================================================

void .reg_bin_op(/* see target signature */)
{
    // Tail-call to reg_bin_op via GOT/IAT indirection
    return reg_bin_op(/* forwarded args */);
}

