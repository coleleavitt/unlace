// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A4A0
// Name:            .op_stroff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A4A0 jmp     cs:off_4B9A38
//
// Resolved target: op_stroff
// Target address:  0x4BC438
// GOT/IAT slot:    0x4B9A38
// Slot symbol:     off_4B9A38
// Target type:     <no type info>
// ============================================================

void .op_stroff(/* see target signature */)
{
    // Tail-call to op_stroff via GOT/IAT indirection
    return op_stroff(/* forwarded args */);
}

