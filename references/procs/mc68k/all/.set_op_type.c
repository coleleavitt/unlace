// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63E0
// Name:            .set_op_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63E0 jmp     cs:off_1D1D8
//
// Resolved target: set_op_type
// Target address:  0x1D6C8
// GOT/IAT slot:    0x1D1D8
// Slot symbol:     off_1D1D8
// Target type:     <no type info>
// ============================================================

void .set_op_type(/* see target signature */)
{
    // Tail-call to set_op_type via GOT/IAT indirection
    return set_op_type(/* forwarded args */);
}

