// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BAD0
// Name:            .set_op_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BAD0 jmp     cs:set_op_type_ptr
//
// Resolved target: set_op_type
// Target address:  0x8D9CF0
// GOT/IAT slot:    0x8A4A08
// Slot symbol:     set_op_type_ptr
// Target type:     <no type info>
// ============================================================

void .set_op_type(/* see target signature */)
{
    // Tail-call to set_op_type via GOT/IAT indirection
    return set_op_type(/* forwarded args */);
}

