// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8E10
// Name:            .op_offset_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8E10 jmp     cs:off_2C79EF0
//
// Resolved target: op_offset_ex
// Target address:  0x4E2900
// GOT/IAT slot:    0x2C79EF0
// Slot symbol:     off_2C79EF0
// Target type:     __int64 __fastcall(int, int, int)
// ============================================================

/* see target sig */ .op_offset_ex(/* see target signature */)
{
    // Tail-call to op_offset_ex via GOT/IAT indirection
    return op_offset_ex(/* forwarded args */);
}

