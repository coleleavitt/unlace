// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA4E0
// Name:            .op_offset_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA4E0 jmp     cs:off_35258
//
// Resolved target: op_offset_ex
// Target address:  0x358A8
// GOT/IAT slot:    0x35258
// Slot symbol:     off_35258
// Target type:     <no type info>
// ============================================================

void .op_offset_ex(/* see target signature */)
{
    // Tail-call to op_offset_ex via GOT/IAT indirection
    return op_offset_ex(/* forwarded args */);
}

