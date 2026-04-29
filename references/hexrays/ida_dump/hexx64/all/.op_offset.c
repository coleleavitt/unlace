// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBF0
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBF0 jmp     cs:off_4ED5E0
//
// Resolved target: op_offset
// Target address:  0x4F18E8
// GOT/IAT slot:    0x4ED5E0
// Slot symbol:     off_4ED5E0
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

