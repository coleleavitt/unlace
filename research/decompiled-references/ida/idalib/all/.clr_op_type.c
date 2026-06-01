// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAFC0
// Name:            .clr_op_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAFC0 jmp     cs:off_2C7AFC8
//
// Resolved target: clr_op_type
// Target address:  0x3D0E30
// GOT/IAT slot:    0x2C7AFC8
// Slot symbol:     off_2C7AFC8
// Target type:     <no type info>
// ============================================================

void .clr_op_type(/* see target signature */)
{
    // Tail-call to clr_op_type via GOT/IAT indirection
    return clr_op_type(/* forwarded args */);
}

