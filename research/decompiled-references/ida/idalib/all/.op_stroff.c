// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC2E0
// Name:            .op_stroff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC2E0 jmp     cs:off_2C7B958
//
// Resolved target: op_stroff
// Target address:  0x3D5B90
// GOT/IAT slot:    0x2C7B958
// Slot symbol:     off_2C7B958
// Target type:     <no type info>
// ============================================================

void .op_stroff(/* see target signature */)
{
    // Tail-call to op_stroff via GOT/IAT indirection
    return op_stroff(/* forwarded args */);
}

