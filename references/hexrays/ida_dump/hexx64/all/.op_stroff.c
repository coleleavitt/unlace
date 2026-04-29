// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C570
// Name:            .op_stroff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C570 jmp     cs:off_4EDAA0
//
// Resolved target: op_stroff
// Target address:  0x4F1DC0
// GOT/IAT slot:    0x4EDAA0
// Slot symbol:     off_4EDAA0
// Target type:     <no type info>
// ============================================================

void .op_stroff(/* see target signature */)
{
    // Tail-call to op_stroff via GOT/IAT indirection
    return op_stroff(/* forwarded args */);
}

