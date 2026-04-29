// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8670
// Name:            .clr_op_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8670 jmp     cs:off_2A320
//
// Resolved target: clr_op_type
// Target address:  0x2A8A0
// GOT/IAT slot:    0x2A320
// Slot symbol:     off_2A320
// Target type:     <no type info>
// ============================================================

void .clr_op_type(/* see target signature */)
{
    // Tail-call to clr_op_type via GOT/IAT indirection
    return clr_op_type(/* forwarded args */);
}

