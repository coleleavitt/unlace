// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21A0
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21A0 jmp     cs:off_80B8
//
// Resolved target: op_offset
// Target address:  0x8318
// GOT/IAT slot:    0x80B8
// Slot symbol:     off_80B8
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

