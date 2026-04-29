// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B4B0
// Name:            .op_stroff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B4B0 jmp     cs:off_4DAA40
//
// Resolved target: op_stroff
// Target address:  0x4DD440
// GOT/IAT slot:    0x4DAA40
// Slot symbol:     off_4DAA40
// Target type:     <no type info>
// ============================================================

void .op_stroff(/* see target signature */)
{
    // Tail-call to op_stroff via GOT/IAT indirection
    return op_stroff(/* forwarded args */);
}

