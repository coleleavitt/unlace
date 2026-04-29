// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19490
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19490 jmp     cs:off_75230
//
// Resolved target: op_offset
// Target address:  0x75A80
// GOT/IAT slot:    0x75230
// Slot symbol:     off_75230
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

