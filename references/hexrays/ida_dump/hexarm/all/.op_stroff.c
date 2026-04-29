// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E4F0
// Name:            .op_stroff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E4F0 jmp     cs:off_4E9A60
//
// Resolved target: op_stroff
// Target address:  0x4EC480
// GOT/IAT slot:    0x4E9A60
// Slot symbol:     off_4E9A60
// Target type:     <no type info>
// ============================================================

void .op_stroff(/* see target signature */)
{
    // Tail-call to op_stroff via GOT/IAT indirection
    return op_stroff(/* forwarded args */);
}

