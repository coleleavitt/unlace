// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3240
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3240 jmp     cs:off_13108
//
// Resolved target: op_offset
// Target address:  0x13480
// GOT/IAT slot:    0x13108
// Slot symbol:     off_13108
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

