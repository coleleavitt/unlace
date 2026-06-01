// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA390
// Name:            .op_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA390 jmp     cs:off_2C7A9B0
//
// Resolved target: op_seg
// Target address:  0x3D58D0
// GOT/IAT slot:    0x2C7A9B0
// Slot symbol:     off_2C7A9B0
// Target type:     <no type info>
// ============================================================

void .op_seg(/* see target signature */)
{
    // Tail-call to op_seg via GOT/IAT indirection
    return op_seg(/* forwarded args */);
}

