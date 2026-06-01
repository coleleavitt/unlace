// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADA60
// Name:            .set_op_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADA60 jmp     cs:off_2C7C518
//
// Resolved target: set_op_type
// Target address:  0x3D5840
// GOT/IAT slot:    0x2C7C518
// Slot symbol:     off_2C7C518
// Target type:     <no type info>
// ============================================================

void .set_op_type(/* see target signature */)
{
    // Tail-call to set_op_type via GOT/IAT indirection
    return set_op_type(/* forwarded args */);
}

