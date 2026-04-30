// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117690
// Name:            .clr_op_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117690 jmp     cs:clr_op_type_ptr
//
// Resolved target: clr_op_type
// Target address:  0x8D7210
// GOT/IAT slot:    0x8A27E8
// Slot symbol:     clr_op_type_ptr
// Target type:     <no type info>
// ============================================================

void .clr_op_type(/* see target signature */)
{
    // Tail-call to clr_op_type via GOT/IAT indirection
    return clr_op_type(/* forwarded args */);
}

