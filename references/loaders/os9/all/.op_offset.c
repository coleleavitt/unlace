// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10A0
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10A0 jmp     cs:off_4038
//
// Resolved target: op_offset
// Target address:  0x4150
// GOT/IAT slot:    0x4038
// Slot symbol:     off_4038
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

