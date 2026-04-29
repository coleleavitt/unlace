// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABA0
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABA0 jmp     cs:off_4DA5B8
//
// Resolved target: op_offset
// Target address:  0x4DCFA8
// GOT/IAT slot:    0x4DA5B8
// Slot symbol:     off_4DA5B8
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

