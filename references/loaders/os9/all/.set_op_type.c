// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10D0
// Name:            .set_op_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10D0 jmp     cs:off_4050
//
// Resolved target: set_op_type
// Target address:  0x4168
// GOT/IAT slot:    0x4050
// Slot symbol:     off_4050
// Target type:     <no type info>
// ============================================================

void .set_op_type(/* see target signature */)
{
    // Tail-call to set_op_type via GOT/IAT indirection
    return set_op_type(/* forwarded args */);
}

