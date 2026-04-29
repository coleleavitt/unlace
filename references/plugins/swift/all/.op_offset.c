// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4340
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4340 jmp     cs:off_28188
//
// Resolved target: op_offset
// Target address:  0x29B20
// GOT/IAT slot:    0x28188
// Slot symbol:     off_28188
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

