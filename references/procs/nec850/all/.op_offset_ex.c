// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9470
// Name:            .op_offset_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9470 jmp     cs:off_2E220
//
// Resolved target: op_offset_ex
// Target address:  0x2E890
// GOT/IAT slot:    0x2E220
// Slot symbol:     off_2E220
// Target type:     <no type info>
// ============================================================

void .op_offset_ex(/* see target signature */)
{
    // Tail-call to op_offset_ex via GOT/IAT indirection
    return op_offset_ex(/* forwarded args */);
}

