// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6510
// Name:            .set_op_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6510 jmp     cs:off_2F270
//
// Resolved target: set_op_type
// Target address:  0x2F8E0
// GOT/IAT slot:    0x2F270
// Slot symbol:     off_2F270
// Target type:     <no type info>
// ============================================================

void .set_op_type(/* see target signature */)
{
    // Tail-call to set_op_type via GOT/IAT indirection
    return set_op_type(/* forwarded args */);
}

