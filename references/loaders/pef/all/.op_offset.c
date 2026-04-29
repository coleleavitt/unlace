// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2150
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2150 jmp     cs:off_8090
//
// Resolved target: op_offset
// Target address:  0x8280
// GOT/IAT slot:    0x8090
// Slot symbol:     off_8090
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

