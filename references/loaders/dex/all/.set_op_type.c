// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33D0
// Name:            .set_op_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33D0 jmp     cs:off_281D0
//
// Resolved target: set_op_type
// Target address:  0x28680
// GOT/IAT slot:    0x281D0
// Slot symbol:     off_281D0
// Target type:     <no type info>
// ============================================================

void .set_op_type(/* see target signature */)
{
    // Tail-call to set_op_type via GOT/IAT indirection
    return set_op_type(/* forwarded args */);
}

