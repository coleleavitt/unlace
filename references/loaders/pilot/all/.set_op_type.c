// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2160
// Name:            .set_op_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2160 jmp     cs:off_8098
//
// Resolved target: set_op_type
// Target address:  0x8278
// GOT/IAT slot:    0x8098
// Slot symbol:     off_8098
// Target type:     <no type info>
// ============================================================

void .set_op_type(/* see target signature */)
{
    // Tail-call to set_op_type via GOT/IAT indirection
    return set_op_type(/* forwarded args */);
}

