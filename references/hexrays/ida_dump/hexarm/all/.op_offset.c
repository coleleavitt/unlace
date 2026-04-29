// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DBC0
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DBC0 jmp     cs:off_4E95C8
//
// Resolved target: op_offset
// Target address:  0x4EBFD8
// GOT/IAT slot:    0x4E95C8
// Slot symbol:     off_4E95C8
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

