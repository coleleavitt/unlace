// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9560
// Name:            .set_op_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9560 jmp     cs:off_89298
//
// Resolved target: set_op_type
// Target address:  0x8C5A0
// GOT/IAT slot:    0x89298
// Slot symbol:     off_89298
// Target type:     <no type info>
// ============================================================

void .set_op_type(/* see target signature */)
{
    // Tail-call to set_op_type via GOT/IAT indirection
    return set_op_type(/* forwarded args */);
}

